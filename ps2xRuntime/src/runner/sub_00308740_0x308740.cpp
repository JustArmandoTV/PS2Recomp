#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308740
// Address: 0x308740 - 0x30af30
void sub_00308740_0x308740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308740_0x308740");
#endif

    switch (ctx->pc) {
        case 0x308740u: goto label_308740;
        case 0x308744u: goto label_308744;
        case 0x308748u: goto label_308748;
        case 0x30874cu: goto label_30874c;
        case 0x308750u: goto label_308750;
        case 0x308754u: goto label_308754;
        case 0x308758u: goto label_308758;
        case 0x30875cu: goto label_30875c;
        case 0x308760u: goto label_308760;
        case 0x308764u: goto label_308764;
        case 0x308768u: goto label_308768;
        case 0x30876cu: goto label_30876c;
        case 0x308770u: goto label_308770;
        case 0x308774u: goto label_308774;
        case 0x308778u: goto label_308778;
        case 0x30877cu: goto label_30877c;
        case 0x308780u: goto label_308780;
        case 0x308784u: goto label_308784;
        case 0x308788u: goto label_308788;
        case 0x30878cu: goto label_30878c;
        case 0x308790u: goto label_308790;
        case 0x308794u: goto label_308794;
        case 0x308798u: goto label_308798;
        case 0x30879cu: goto label_30879c;
        case 0x3087a0u: goto label_3087a0;
        case 0x3087a4u: goto label_3087a4;
        case 0x3087a8u: goto label_3087a8;
        case 0x3087acu: goto label_3087ac;
        case 0x3087b0u: goto label_3087b0;
        case 0x3087b4u: goto label_3087b4;
        case 0x3087b8u: goto label_3087b8;
        case 0x3087bcu: goto label_3087bc;
        case 0x3087c0u: goto label_3087c0;
        case 0x3087c4u: goto label_3087c4;
        case 0x3087c8u: goto label_3087c8;
        case 0x3087ccu: goto label_3087cc;
        case 0x3087d0u: goto label_3087d0;
        case 0x3087d4u: goto label_3087d4;
        case 0x3087d8u: goto label_3087d8;
        case 0x3087dcu: goto label_3087dc;
        case 0x3087e0u: goto label_3087e0;
        case 0x3087e4u: goto label_3087e4;
        case 0x3087e8u: goto label_3087e8;
        case 0x3087ecu: goto label_3087ec;
        case 0x3087f0u: goto label_3087f0;
        case 0x3087f4u: goto label_3087f4;
        case 0x3087f8u: goto label_3087f8;
        case 0x3087fcu: goto label_3087fc;
        case 0x308800u: goto label_308800;
        case 0x308804u: goto label_308804;
        case 0x308808u: goto label_308808;
        case 0x30880cu: goto label_30880c;
        case 0x308810u: goto label_308810;
        case 0x308814u: goto label_308814;
        case 0x308818u: goto label_308818;
        case 0x30881cu: goto label_30881c;
        case 0x308820u: goto label_308820;
        case 0x308824u: goto label_308824;
        case 0x308828u: goto label_308828;
        case 0x30882cu: goto label_30882c;
        case 0x308830u: goto label_308830;
        case 0x308834u: goto label_308834;
        case 0x308838u: goto label_308838;
        case 0x30883cu: goto label_30883c;
        case 0x308840u: goto label_308840;
        case 0x308844u: goto label_308844;
        case 0x308848u: goto label_308848;
        case 0x30884cu: goto label_30884c;
        case 0x308850u: goto label_308850;
        case 0x308854u: goto label_308854;
        case 0x308858u: goto label_308858;
        case 0x30885cu: goto label_30885c;
        case 0x308860u: goto label_308860;
        case 0x308864u: goto label_308864;
        case 0x308868u: goto label_308868;
        case 0x30886cu: goto label_30886c;
        case 0x308870u: goto label_308870;
        case 0x308874u: goto label_308874;
        case 0x308878u: goto label_308878;
        case 0x30887cu: goto label_30887c;
        case 0x308880u: goto label_308880;
        case 0x308884u: goto label_308884;
        case 0x308888u: goto label_308888;
        case 0x30888cu: goto label_30888c;
        case 0x308890u: goto label_308890;
        case 0x308894u: goto label_308894;
        case 0x308898u: goto label_308898;
        case 0x30889cu: goto label_30889c;
        case 0x3088a0u: goto label_3088a0;
        case 0x3088a4u: goto label_3088a4;
        case 0x3088a8u: goto label_3088a8;
        case 0x3088acu: goto label_3088ac;
        case 0x3088b0u: goto label_3088b0;
        case 0x3088b4u: goto label_3088b4;
        case 0x3088b8u: goto label_3088b8;
        case 0x3088bcu: goto label_3088bc;
        case 0x3088c0u: goto label_3088c0;
        case 0x3088c4u: goto label_3088c4;
        case 0x3088c8u: goto label_3088c8;
        case 0x3088ccu: goto label_3088cc;
        case 0x3088d0u: goto label_3088d0;
        case 0x3088d4u: goto label_3088d4;
        case 0x3088d8u: goto label_3088d8;
        case 0x3088dcu: goto label_3088dc;
        case 0x3088e0u: goto label_3088e0;
        case 0x3088e4u: goto label_3088e4;
        case 0x3088e8u: goto label_3088e8;
        case 0x3088ecu: goto label_3088ec;
        case 0x3088f0u: goto label_3088f0;
        case 0x3088f4u: goto label_3088f4;
        case 0x3088f8u: goto label_3088f8;
        case 0x3088fcu: goto label_3088fc;
        case 0x308900u: goto label_308900;
        case 0x308904u: goto label_308904;
        case 0x308908u: goto label_308908;
        case 0x30890cu: goto label_30890c;
        case 0x308910u: goto label_308910;
        case 0x308914u: goto label_308914;
        case 0x308918u: goto label_308918;
        case 0x30891cu: goto label_30891c;
        case 0x308920u: goto label_308920;
        case 0x308924u: goto label_308924;
        case 0x308928u: goto label_308928;
        case 0x30892cu: goto label_30892c;
        case 0x308930u: goto label_308930;
        case 0x308934u: goto label_308934;
        case 0x308938u: goto label_308938;
        case 0x30893cu: goto label_30893c;
        case 0x308940u: goto label_308940;
        case 0x308944u: goto label_308944;
        case 0x308948u: goto label_308948;
        case 0x30894cu: goto label_30894c;
        case 0x308950u: goto label_308950;
        case 0x308954u: goto label_308954;
        case 0x308958u: goto label_308958;
        case 0x30895cu: goto label_30895c;
        case 0x308960u: goto label_308960;
        case 0x308964u: goto label_308964;
        case 0x308968u: goto label_308968;
        case 0x30896cu: goto label_30896c;
        case 0x308970u: goto label_308970;
        case 0x308974u: goto label_308974;
        case 0x308978u: goto label_308978;
        case 0x30897cu: goto label_30897c;
        case 0x308980u: goto label_308980;
        case 0x308984u: goto label_308984;
        case 0x308988u: goto label_308988;
        case 0x30898cu: goto label_30898c;
        case 0x308990u: goto label_308990;
        case 0x308994u: goto label_308994;
        case 0x308998u: goto label_308998;
        case 0x30899cu: goto label_30899c;
        case 0x3089a0u: goto label_3089a0;
        case 0x3089a4u: goto label_3089a4;
        case 0x3089a8u: goto label_3089a8;
        case 0x3089acu: goto label_3089ac;
        case 0x3089b0u: goto label_3089b0;
        case 0x3089b4u: goto label_3089b4;
        case 0x3089b8u: goto label_3089b8;
        case 0x3089bcu: goto label_3089bc;
        case 0x3089c0u: goto label_3089c0;
        case 0x3089c4u: goto label_3089c4;
        case 0x3089c8u: goto label_3089c8;
        case 0x3089ccu: goto label_3089cc;
        case 0x3089d0u: goto label_3089d0;
        case 0x3089d4u: goto label_3089d4;
        case 0x3089d8u: goto label_3089d8;
        case 0x3089dcu: goto label_3089dc;
        case 0x3089e0u: goto label_3089e0;
        case 0x3089e4u: goto label_3089e4;
        case 0x3089e8u: goto label_3089e8;
        case 0x3089ecu: goto label_3089ec;
        case 0x3089f0u: goto label_3089f0;
        case 0x3089f4u: goto label_3089f4;
        case 0x3089f8u: goto label_3089f8;
        case 0x3089fcu: goto label_3089fc;
        case 0x308a00u: goto label_308a00;
        case 0x308a04u: goto label_308a04;
        case 0x308a08u: goto label_308a08;
        case 0x308a0cu: goto label_308a0c;
        case 0x308a10u: goto label_308a10;
        case 0x308a14u: goto label_308a14;
        case 0x308a18u: goto label_308a18;
        case 0x308a1cu: goto label_308a1c;
        case 0x308a20u: goto label_308a20;
        case 0x308a24u: goto label_308a24;
        case 0x308a28u: goto label_308a28;
        case 0x308a2cu: goto label_308a2c;
        case 0x308a30u: goto label_308a30;
        case 0x308a34u: goto label_308a34;
        case 0x308a38u: goto label_308a38;
        case 0x308a3cu: goto label_308a3c;
        case 0x308a40u: goto label_308a40;
        case 0x308a44u: goto label_308a44;
        case 0x308a48u: goto label_308a48;
        case 0x308a4cu: goto label_308a4c;
        case 0x308a50u: goto label_308a50;
        case 0x308a54u: goto label_308a54;
        case 0x308a58u: goto label_308a58;
        case 0x308a5cu: goto label_308a5c;
        case 0x308a60u: goto label_308a60;
        case 0x308a64u: goto label_308a64;
        case 0x308a68u: goto label_308a68;
        case 0x308a6cu: goto label_308a6c;
        case 0x308a70u: goto label_308a70;
        case 0x308a74u: goto label_308a74;
        case 0x308a78u: goto label_308a78;
        case 0x308a7cu: goto label_308a7c;
        case 0x308a80u: goto label_308a80;
        case 0x308a84u: goto label_308a84;
        case 0x308a88u: goto label_308a88;
        case 0x308a8cu: goto label_308a8c;
        case 0x308a90u: goto label_308a90;
        case 0x308a94u: goto label_308a94;
        case 0x308a98u: goto label_308a98;
        case 0x308a9cu: goto label_308a9c;
        case 0x308aa0u: goto label_308aa0;
        case 0x308aa4u: goto label_308aa4;
        case 0x308aa8u: goto label_308aa8;
        case 0x308aacu: goto label_308aac;
        case 0x308ab0u: goto label_308ab0;
        case 0x308ab4u: goto label_308ab4;
        case 0x308ab8u: goto label_308ab8;
        case 0x308abcu: goto label_308abc;
        case 0x308ac0u: goto label_308ac0;
        case 0x308ac4u: goto label_308ac4;
        case 0x308ac8u: goto label_308ac8;
        case 0x308accu: goto label_308acc;
        case 0x308ad0u: goto label_308ad0;
        case 0x308ad4u: goto label_308ad4;
        case 0x308ad8u: goto label_308ad8;
        case 0x308adcu: goto label_308adc;
        case 0x308ae0u: goto label_308ae0;
        case 0x308ae4u: goto label_308ae4;
        case 0x308ae8u: goto label_308ae8;
        case 0x308aecu: goto label_308aec;
        case 0x308af0u: goto label_308af0;
        case 0x308af4u: goto label_308af4;
        case 0x308af8u: goto label_308af8;
        case 0x308afcu: goto label_308afc;
        case 0x308b00u: goto label_308b00;
        case 0x308b04u: goto label_308b04;
        case 0x308b08u: goto label_308b08;
        case 0x308b0cu: goto label_308b0c;
        case 0x308b10u: goto label_308b10;
        case 0x308b14u: goto label_308b14;
        case 0x308b18u: goto label_308b18;
        case 0x308b1cu: goto label_308b1c;
        case 0x308b20u: goto label_308b20;
        case 0x308b24u: goto label_308b24;
        case 0x308b28u: goto label_308b28;
        case 0x308b2cu: goto label_308b2c;
        case 0x308b30u: goto label_308b30;
        case 0x308b34u: goto label_308b34;
        case 0x308b38u: goto label_308b38;
        case 0x308b3cu: goto label_308b3c;
        case 0x308b40u: goto label_308b40;
        case 0x308b44u: goto label_308b44;
        case 0x308b48u: goto label_308b48;
        case 0x308b4cu: goto label_308b4c;
        case 0x308b50u: goto label_308b50;
        case 0x308b54u: goto label_308b54;
        case 0x308b58u: goto label_308b58;
        case 0x308b5cu: goto label_308b5c;
        case 0x308b60u: goto label_308b60;
        case 0x308b64u: goto label_308b64;
        case 0x308b68u: goto label_308b68;
        case 0x308b6cu: goto label_308b6c;
        case 0x308b70u: goto label_308b70;
        case 0x308b74u: goto label_308b74;
        case 0x308b78u: goto label_308b78;
        case 0x308b7cu: goto label_308b7c;
        case 0x308b80u: goto label_308b80;
        case 0x308b84u: goto label_308b84;
        case 0x308b88u: goto label_308b88;
        case 0x308b8cu: goto label_308b8c;
        case 0x308b90u: goto label_308b90;
        case 0x308b94u: goto label_308b94;
        case 0x308b98u: goto label_308b98;
        case 0x308b9cu: goto label_308b9c;
        case 0x308ba0u: goto label_308ba0;
        case 0x308ba4u: goto label_308ba4;
        case 0x308ba8u: goto label_308ba8;
        case 0x308bacu: goto label_308bac;
        case 0x308bb0u: goto label_308bb0;
        case 0x308bb4u: goto label_308bb4;
        case 0x308bb8u: goto label_308bb8;
        case 0x308bbcu: goto label_308bbc;
        case 0x308bc0u: goto label_308bc0;
        case 0x308bc4u: goto label_308bc4;
        case 0x308bc8u: goto label_308bc8;
        case 0x308bccu: goto label_308bcc;
        case 0x308bd0u: goto label_308bd0;
        case 0x308bd4u: goto label_308bd4;
        case 0x308bd8u: goto label_308bd8;
        case 0x308bdcu: goto label_308bdc;
        case 0x308be0u: goto label_308be0;
        case 0x308be4u: goto label_308be4;
        case 0x308be8u: goto label_308be8;
        case 0x308becu: goto label_308bec;
        case 0x308bf0u: goto label_308bf0;
        case 0x308bf4u: goto label_308bf4;
        case 0x308bf8u: goto label_308bf8;
        case 0x308bfcu: goto label_308bfc;
        case 0x308c00u: goto label_308c00;
        case 0x308c04u: goto label_308c04;
        case 0x308c08u: goto label_308c08;
        case 0x308c0cu: goto label_308c0c;
        case 0x308c10u: goto label_308c10;
        case 0x308c14u: goto label_308c14;
        case 0x308c18u: goto label_308c18;
        case 0x308c1cu: goto label_308c1c;
        case 0x308c20u: goto label_308c20;
        case 0x308c24u: goto label_308c24;
        case 0x308c28u: goto label_308c28;
        case 0x308c2cu: goto label_308c2c;
        case 0x308c30u: goto label_308c30;
        case 0x308c34u: goto label_308c34;
        case 0x308c38u: goto label_308c38;
        case 0x308c3cu: goto label_308c3c;
        case 0x308c40u: goto label_308c40;
        case 0x308c44u: goto label_308c44;
        case 0x308c48u: goto label_308c48;
        case 0x308c4cu: goto label_308c4c;
        case 0x308c50u: goto label_308c50;
        case 0x308c54u: goto label_308c54;
        case 0x308c58u: goto label_308c58;
        case 0x308c5cu: goto label_308c5c;
        case 0x308c60u: goto label_308c60;
        case 0x308c64u: goto label_308c64;
        case 0x308c68u: goto label_308c68;
        case 0x308c6cu: goto label_308c6c;
        case 0x308c70u: goto label_308c70;
        case 0x308c74u: goto label_308c74;
        case 0x308c78u: goto label_308c78;
        case 0x308c7cu: goto label_308c7c;
        case 0x308c80u: goto label_308c80;
        case 0x308c84u: goto label_308c84;
        case 0x308c88u: goto label_308c88;
        case 0x308c8cu: goto label_308c8c;
        case 0x308c90u: goto label_308c90;
        case 0x308c94u: goto label_308c94;
        case 0x308c98u: goto label_308c98;
        case 0x308c9cu: goto label_308c9c;
        case 0x308ca0u: goto label_308ca0;
        case 0x308ca4u: goto label_308ca4;
        case 0x308ca8u: goto label_308ca8;
        case 0x308cacu: goto label_308cac;
        case 0x308cb0u: goto label_308cb0;
        case 0x308cb4u: goto label_308cb4;
        case 0x308cb8u: goto label_308cb8;
        case 0x308cbcu: goto label_308cbc;
        case 0x308cc0u: goto label_308cc0;
        case 0x308cc4u: goto label_308cc4;
        case 0x308cc8u: goto label_308cc8;
        case 0x308cccu: goto label_308ccc;
        case 0x308cd0u: goto label_308cd0;
        case 0x308cd4u: goto label_308cd4;
        case 0x308cd8u: goto label_308cd8;
        case 0x308cdcu: goto label_308cdc;
        case 0x308ce0u: goto label_308ce0;
        case 0x308ce4u: goto label_308ce4;
        case 0x308ce8u: goto label_308ce8;
        case 0x308cecu: goto label_308cec;
        case 0x308cf0u: goto label_308cf0;
        case 0x308cf4u: goto label_308cf4;
        case 0x308cf8u: goto label_308cf8;
        case 0x308cfcu: goto label_308cfc;
        case 0x308d00u: goto label_308d00;
        case 0x308d04u: goto label_308d04;
        case 0x308d08u: goto label_308d08;
        case 0x308d0cu: goto label_308d0c;
        case 0x308d10u: goto label_308d10;
        case 0x308d14u: goto label_308d14;
        case 0x308d18u: goto label_308d18;
        case 0x308d1cu: goto label_308d1c;
        case 0x308d20u: goto label_308d20;
        case 0x308d24u: goto label_308d24;
        case 0x308d28u: goto label_308d28;
        case 0x308d2cu: goto label_308d2c;
        case 0x308d30u: goto label_308d30;
        case 0x308d34u: goto label_308d34;
        case 0x308d38u: goto label_308d38;
        case 0x308d3cu: goto label_308d3c;
        case 0x308d40u: goto label_308d40;
        case 0x308d44u: goto label_308d44;
        case 0x308d48u: goto label_308d48;
        case 0x308d4cu: goto label_308d4c;
        case 0x308d50u: goto label_308d50;
        case 0x308d54u: goto label_308d54;
        case 0x308d58u: goto label_308d58;
        case 0x308d5cu: goto label_308d5c;
        case 0x308d60u: goto label_308d60;
        case 0x308d64u: goto label_308d64;
        case 0x308d68u: goto label_308d68;
        case 0x308d6cu: goto label_308d6c;
        case 0x308d70u: goto label_308d70;
        case 0x308d74u: goto label_308d74;
        case 0x308d78u: goto label_308d78;
        case 0x308d7cu: goto label_308d7c;
        case 0x308d80u: goto label_308d80;
        case 0x308d84u: goto label_308d84;
        case 0x308d88u: goto label_308d88;
        case 0x308d8cu: goto label_308d8c;
        case 0x308d90u: goto label_308d90;
        case 0x308d94u: goto label_308d94;
        case 0x308d98u: goto label_308d98;
        case 0x308d9cu: goto label_308d9c;
        case 0x308da0u: goto label_308da0;
        case 0x308da4u: goto label_308da4;
        case 0x308da8u: goto label_308da8;
        case 0x308dacu: goto label_308dac;
        case 0x308db0u: goto label_308db0;
        case 0x308db4u: goto label_308db4;
        case 0x308db8u: goto label_308db8;
        case 0x308dbcu: goto label_308dbc;
        case 0x308dc0u: goto label_308dc0;
        case 0x308dc4u: goto label_308dc4;
        case 0x308dc8u: goto label_308dc8;
        case 0x308dccu: goto label_308dcc;
        case 0x308dd0u: goto label_308dd0;
        case 0x308dd4u: goto label_308dd4;
        case 0x308dd8u: goto label_308dd8;
        case 0x308ddcu: goto label_308ddc;
        case 0x308de0u: goto label_308de0;
        case 0x308de4u: goto label_308de4;
        case 0x308de8u: goto label_308de8;
        case 0x308decu: goto label_308dec;
        case 0x308df0u: goto label_308df0;
        case 0x308df4u: goto label_308df4;
        case 0x308df8u: goto label_308df8;
        case 0x308dfcu: goto label_308dfc;
        case 0x308e00u: goto label_308e00;
        case 0x308e04u: goto label_308e04;
        case 0x308e08u: goto label_308e08;
        case 0x308e0cu: goto label_308e0c;
        case 0x308e10u: goto label_308e10;
        case 0x308e14u: goto label_308e14;
        case 0x308e18u: goto label_308e18;
        case 0x308e1cu: goto label_308e1c;
        case 0x308e20u: goto label_308e20;
        case 0x308e24u: goto label_308e24;
        case 0x308e28u: goto label_308e28;
        case 0x308e2cu: goto label_308e2c;
        case 0x308e30u: goto label_308e30;
        case 0x308e34u: goto label_308e34;
        case 0x308e38u: goto label_308e38;
        case 0x308e3cu: goto label_308e3c;
        case 0x308e40u: goto label_308e40;
        case 0x308e44u: goto label_308e44;
        case 0x308e48u: goto label_308e48;
        case 0x308e4cu: goto label_308e4c;
        case 0x308e50u: goto label_308e50;
        case 0x308e54u: goto label_308e54;
        case 0x308e58u: goto label_308e58;
        case 0x308e5cu: goto label_308e5c;
        case 0x308e60u: goto label_308e60;
        case 0x308e64u: goto label_308e64;
        case 0x308e68u: goto label_308e68;
        case 0x308e6cu: goto label_308e6c;
        case 0x308e70u: goto label_308e70;
        case 0x308e74u: goto label_308e74;
        case 0x308e78u: goto label_308e78;
        case 0x308e7cu: goto label_308e7c;
        case 0x308e80u: goto label_308e80;
        case 0x308e84u: goto label_308e84;
        case 0x308e88u: goto label_308e88;
        case 0x308e8cu: goto label_308e8c;
        case 0x308e90u: goto label_308e90;
        case 0x308e94u: goto label_308e94;
        case 0x308e98u: goto label_308e98;
        case 0x308e9cu: goto label_308e9c;
        case 0x308ea0u: goto label_308ea0;
        case 0x308ea4u: goto label_308ea4;
        case 0x308ea8u: goto label_308ea8;
        case 0x308eacu: goto label_308eac;
        case 0x308eb0u: goto label_308eb0;
        case 0x308eb4u: goto label_308eb4;
        case 0x308eb8u: goto label_308eb8;
        case 0x308ebcu: goto label_308ebc;
        case 0x308ec0u: goto label_308ec0;
        case 0x308ec4u: goto label_308ec4;
        case 0x308ec8u: goto label_308ec8;
        case 0x308eccu: goto label_308ecc;
        case 0x308ed0u: goto label_308ed0;
        case 0x308ed4u: goto label_308ed4;
        case 0x308ed8u: goto label_308ed8;
        case 0x308edcu: goto label_308edc;
        case 0x308ee0u: goto label_308ee0;
        case 0x308ee4u: goto label_308ee4;
        case 0x308ee8u: goto label_308ee8;
        case 0x308eecu: goto label_308eec;
        case 0x308ef0u: goto label_308ef0;
        case 0x308ef4u: goto label_308ef4;
        case 0x308ef8u: goto label_308ef8;
        case 0x308efcu: goto label_308efc;
        case 0x308f00u: goto label_308f00;
        case 0x308f04u: goto label_308f04;
        case 0x308f08u: goto label_308f08;
        case 0x308f0cu: goto label_308f0c;
        case 0x308f10u: goto label_308f10;
        case 0x308f14u: goto label_308f14;
        case 0x308f18u: goto label_308f18;
        case 0x308f1cu: goto label_308f1c;
        case 0x308f20u: goto label_308f20;
        case 0x308f24u: goto label_308f24;
        case 0x308f28u: goto label_308f28;
        case 0x308f2cu: goto label_308f2c;
        case 0x308f30u: goto label_308f30;
        case 0x308f34u: goto label_308f34;
        case 0x308f38u: goto label_308f38;
        case 0x308f3cu: goto label_308f3c;
        case 0x308f40u: goto label_308f40;
        case 0x308f44u: goto label_308f44;
        case 0x308f48u: goto label_308f48;
        case 0x308f4cu: goto label_308f4c;
        case 0x308f50u: goto label_308f50;
        case 0x308f54u: goto label_308f54;
        case 0x308f58u: goto label_308f58;
        case 0x308f5cu: goto label_308f5c;
        case 0x308f60u: goto label_308f60;
        case 0x308f64u: goto label_308f64;
        case 0x308f68u: goto label_308f68;
        case 0x308f6cu: goto label_308f6c;
        case 0x308f70u: goto label_308f70;
        case 0x308f74u: goto label_308f74;
        case 0x308f78u: goto label_308f78;
        case 0x308f7cu: goto label_308f7c;
        case 0x308f80u: goto label_308f80;
        case 0x308f84u: goto label_308f84;
        case 0x308f88u: goto label_308f88;
        case 0x308f8cu: goto label_308f8c;
        case 0x308f90u: goto label_308f90;
        case 0x308f94u: goto label_308f94;
        case 0x308f98u: goto label_308f98;
        case 0x308f9cu: goto label_308f9c;
        case 0x308fa0u: goto label_308fa0;
        case 0x308fa4u: goto label_308fa4;
        case 0x308fa8u: goto label_308fa8;
        case 0x308facu: goto label_308fac;
        case 0x308fb0u: goto label_308fb0;
        case 0x308fb4u: goto label_308fb4;
        case 0x308fb8u: goto label_308fb8;
        case 0x308fbcu: goto label_308fbc;
        case 0x308fc0u: goto label_308fc0;
        case 0x308fc4u: goto label_308fc4;
        case 0x308fc8u: goto label_308fc8;
        case 0x308fccu: goto label_308fcc;
        case 0x308fd0u: goto label_308fd0;
        case 0x308fd4u: goto label_308fd4;
        case 0x308fd8u: goto label_308fd8;
        case 0x308fdcu: goto label_308fdc;
        case 0x308fe0u: goto label_308fe0;
        case 0x308fe4u: goto label_308fe4;
        case 0x308fe8u: goto label_308fe8;
        case 0x308fecu: goto label_308fec;
        case 0x308ff0u: goto label_308ff0;
        case 0x308ff4u: goto label_308ff4;
        case 0x308ff8u: goto label_308ff8;
        case 0x308ffcu: goto label_308ffc;
        case 0x309000u: goto label_309000;
        case 0x309004u: goto label_309004;
        case 0x309008u: goto label_309008;
        case 0x30900cu: goto label_30900c;
        case 0x309010u: goto label_309010;
        case 0x309014u: goto label_309014;
        case 0x309018u: goto label_309018;
        case 0x30901cu: goto label_30901c;
        case 0x309020u: goto label_309020;
        case 0x309024u: goto label_309024;
        case 0x309028u: goto label_309028;
        case 0x30902cu: goto label_30902c;
        case 0x309030u: goto label_309030;
        case 0x309034u: goto label_309034;
        case 0x309038u: goto label_309038;
        case 0x30903cu: goto label_30903c;
        case 0x309040u: goto label_309040;
        case 0x309044u: goto label_309044;
        case 0x309048u: goto label_309048;
        case 0x30904cu: goto label_30904c;
        case 0x309050u: goto label_309050;
        case 0x309054u: goto label_309054;
        case 0x309058u: goto label_309058;
        case 0x30905cu: goto label_30905c;
        case 0x309060u: goto label_309060;
        case 0x309064u: goto label_309064;
        case 0x309068u: goto label_309068;
        case 0x30906cu: goto label_30906c;
        case 0x309070u: goto label_309070;
        case 0x309074u: goto label_309074;
        case 0x309078u: goto label_309078;
        case 0x30907cu: goto label_30907c;
        case 0x309080u: goto label_309080;
        case 0x309084u: goto label_309084;
        case 0x309088u: goto label_309088;
        case 0x30908cu: goto label_30908c;
        case 0x309090u: goto label_309090;
        case 0x309094u: goto label_309094;
        case 0x309098u: goto label_309098;
        case 0x30909cu: goto label_30909c;
        case 0x3090a0u: goto label_3090a0;
        case 0x3090a4u: goto label_3090a4;
        case 0x3090a8u: goto label_3090a8;
        case 0x3090acu: goto label_3090ac;
        case 0x3090b0u: goto label_3090b0;
        case 0x3090b4u: goto label_3090b4;
        case 0x3090b8u: goto label_3090b8;
        case 0x3090bcu: goto label_3090bc;
        case 0x3090c0u: goto label_3090c0;
        case 0x3090c4u: goto label_3090c4;
        case 0x3090c8u: goto label_3090c8;
        case 0x3090ccu: goto label_3090cc;
        case 0x3090d0u: goto label_3090d0;
        case 0x3090d4u: goto label_3090d4;
        case 0x3090d8u: goto label_3090d8;
        case 0x3090dcu: goto label_3090dc;
        case 0x3090e0u: goto label_3090e0;
        case 0x3090e4u: goto label_3090e4;
        case 0x3090e8u: goto label_3090e8;
        case 0x3090ecu: goto label_3090ec;
        case 0x3090f0u: goto label_3090f0;
        case 0x3090f4u: goto label_3090f4;
        case 0x3090f8u: goto label_3090f8;
        case 0x3090fcu: goto label_3090fc;
        case 0x309100u: goto label_309100;
        case 0x309104u: goto label_309104;
        case 0x309108u: goto label_309108;
        case 0x30910cu: goto label_30910c;
        case 0x309110u: goto label_309110;
        case 0x309114u: goto label_309114;
        case 0x309118u: goto label_309118;
        case 0x30911cu: goto label_30911c;
        case 0x309120u: goto label_309120;
        case 0x309124u: goto label_309124;
        case 0x309128u: goto label_309128;
        case 0x30912cu: goto label_30912c;
        case 0x309130u: goto label_309130;
        case 0x309134u: goto label_309134;
        case 0x309138u: goto label_309138;
        case 0x30913cu: goto label_30913c;
        case 0x309140u: goto label_309140;
        case 0x309144u: goto label_309144;
        case 0x309148u: goto label_309148;
        case 0x30914cu: goto label_30914c;
        case 0x309150u: goto label_309150;
        case 0x309154u: goto label_309154;
        case 0x309158u: goto label_309158;
        case 0x30915cu: goto label_30915c;
        case 0x309160u: goto label_309160;
        case 0x309164u: goto label_309164;
        case 0x309168u: goto label_309168;
        case 0x30916cu: goto label_30916c;
        case 0x309170u: goto label_309170;
        case 0x309174u: goto label_309174;
        case 0x309178u: goto label_309178;
        case 0x30917cu: goto label_30917c;
        case 0x309180u: goto label_309180;
        case 0x309184u: goto label_309184;
        case 0x309188u: goto label_309188;
        case 0x30918cu: goto label_30918c;
        case 0x309190u: goto label_309190;
        case 0x309194u: goto label_309194;
        case 0x309198u: goto label_309198;
        case 0x30919cu: goto label_30919c;
        case 0x3091a0u: goto label_3091a0;
        case 0x3091a4u: goto label_3091a4;
        case 0x3091a8u: goto label_3091a8;
        case 0x3091acu: goto label_3091ac;
        case 0x3091b0u: goto label_3091b0;
        case 0x3091b4u: goto label_3091b4;
        case 0x3091b8u: goto label_3091b8;
        case 0x3091bcu: goto label_3091bc;
        case 0x3091c0u: goto label_3091c0;
        case 0x3091c4u: goto label_3091c4;
        case 0x3091c8u: goto label_3091c8;
        case 0x3091ccu: goto label_3091cc;
        case 0x3091d0u: goto label_3091d0;
        case 0x3091d4u: goto label_3091d4;
        case 0x3091d8u: goto label_3091d8;
        case 0x3091dcu: goto label_3091dc;
        case 0x3091e0u: goto label_3091e0;
        case 0x3091e4u: goto label_3091e4;
        case 0x3091e8u: goto label_3091e8;
        case 0x3091ecu: goto label_3091ec;
        case 0x3091f0u: goto label_3091f0;
        case 0x3091f4u: goto label_3091f4;
        case 0x3091f8u: goto label_3091f8;
        case 0x3091fcu: goto label_3091fc;
        case 0x309200u: goto label_309200;
        case 0x309204u: goto label_309204;
        case 0x309208u: goto label_309208;
        case 0x30920cu: goto label_30920c;
        case 0x309210u: goto label_309210;
        case 0x309214u: goto label_309214;
        case 0x309218u: goto label_309218;
        case 0x30921cu: goto label_30921c;
        case 0x309220u: goto label_309220;
        case 0x309224u: goto label_309224;
        case 0x309228u: goto label_309228;
        case 0x30922cu: goto label_30922c;
        case 0x309230u: goto label_309230;
        case 0x309234u: goto label_309234;
        case 0x309238u: goto label_309238;
        case 0x30923cu: goto label_30923c;
        case 0x309240u: goto label_309240;
        case 0x309244u: goto label_309244;
        case 0x309248u: goto label_309248;
        case 0x30924cu: goto label_30924c;
        case 0x309250u: goto label_309250;
        case 0x309254u: goto label_309254;
        case 0x309258u: goto label_309258;
        case 0x30925cu: goto label_30925c;
        case 0x309260u: goto label_309260;
        case 0x309264u: goto label_309264;
        case 0x309268u: goto label_309268;
        case 0x30926cu: goto label_30926c;
        case 0x309270u: goto label_309270;
        case 0x309274u: goto label_309274;
        case 0x309278u: goto label_309278;
        case 0x30927cu: goto label_30927c;
        case 0x309280u: goto label_309280;
        case 0x309284u: goto label_309284;
        case 0x309288u: goto label_309288;
        case 0x30928cu: goto label_30928c;
        case 0x309290u: goto label_309290;
        case 0x309294u: goto label_309294;
        case 0x309298u: goto label_309298;
        case 0x30929cu: goto label_30929c;
        case 0x3092a0u: goto label_3092a0;
        case 0x3092a4u: goto label_3092a4;
        case 0x3092a8u: goto label_3092a8;
        case 0x3092acu: goto label_3092ac;
        case 0x3092b0u: goto label_3092b0;
        case 0x3092b4u: goto label_3092b4;
        case 0x3092b8u: goto label_3092b8;
        case 0x3092bcu: goto label_3092bc;
        case 0x3092c0u: goto label_3092c0;
        case 0x3092c4u: goto label_3092c4;
        case 0x3092c8u: goto label_3092c8;
        case 0x3092ccu: goto label_3092cc;
        case 0x3092d0u: goto label_3092d0;
        case 0x3092d4u: goto label_3092d4;
        case 0x3092d8u: goto label_3092d8;
        case 0x3092dcu: goto label_3092dc;
        case 0x3092e0u: goto label_3092e0;
        case 0x3092e4u: goto label_3092e4;
        case 0x3092e8u: goto label_3092e8;
        case 0x3092ecu: goto label_3092ec;
        case 0x3092f0u: goto label_3092f0;
        case 0x3092f4u: goto label_3092f4;
        case 0x3092f8u: goto label_3092f8;
        case 0x3092fcu: goto label_3092fc;
        case 0x309300u: goto label_309300;
        case 0x309304u: goto label_309304;
        case 0x309308u: goto label_309308;
        case 0x30930cu: goto label_30930c;
        case 0x309310u: goto label_309310;
        case 0x309314u: goto label_309314;
        case 0x309318u: goto label_309318;
        case 0x30931cu: goto label_30931c;
        case 0x309320u: goto label_309320;
        case 0x309324u: goto label_309324;
        case 0x309328u: goto label_309328;
        case 0x30932cu: goto label_30932c;
        case 0x309330u: goto label_309330;
        case 0x309334u: goto label_309334;
        case 0x309338u: goto label_309338;
        case 0x30933cu: goto label_30933c;
        case 0x309340u: goto label_309340;
        case 0x309344u: goto label_309344;
        case 0x309348u: goto label_309348;
        case 0x30934cu: goto label_30934c;
        case 0x309350u: goto label_309350;
        case 0x309354u: goto label_309354;
        case 0x309358u: goto label_309358;
        case 0x30935cu: goto label_30935c;
        case 0x309360u: goto label_309360;
        case 0x309364u: goto label_309364;
        case 0x309368u: goto label_309368;
        case 0x30936cu: goto label_30936c;
        case 0x309370u: goto label_309370;
        case 0x309374u: goto label_309374;
        case 0x309378u: goto label_309378;
        case 0x30937cu: goto label_30937c;
        case 0x309380u: goto label_309380;
        case 0x309384u: goto label_309384;
        case 0x309388u: goto label_309388;
        case 0x30938cu: goto label_30938c;
        case 0x309390u: goto label_309390;
        case 0x309394u: goto label_309394;
        case 0x309398u: goto label_309398;
        case 0x30939cu: goto label_30939c;
        case 0x3093a0u: goto label_3093a0;
        case 0x3093a4u: goto label_3093a4;
        case 0x3093a8u: goto label_3093a8;
        case 0x3093acu: goto label_3093ac;
        case 0x3093b0u: goto label_3093b0;
        case 0x3093b4u: goto label_3093b4;
        case 0x3093b8u: goto label_3093b8;
        case 0x3093bcu: goto label_3093bc;
        case 0x3093c0u: goto label_3093c0;
        case 0x3093c4u: goto label_3093c4;
        case 0x3093c8u: goto label_3093c8;
        case 0x3093ccu: goto label_3093cc;
        case 0x3093d0u: goto label_3093d0;
        case 0x3093d4u: goto label_3093d4;
        case 0x3093d8u: goto label_3093d8;
        case 0x3093dcu: goto label_3093dc;
        case 0x3093e0u: goto label_3093e0;
        case 0x3093e4u: goto label_3093e4;
        case 0x3093e8u: goto label_3093e8;
        case 0x3093ecu: goto label_3093ec;
        case 0x3093f0u: goto label_3093f0;
        case 0x3093f4u: goto label_3093f4;
        case 0x3093f8u: goto label_3093f8;
        case 0x3093fcu: goto label_3093fc;
        case 0x309400u: goto label_309400;
        case 0x309404u: goto label_309404;
        case 0x309408u: goto label_309408;
        case 0x30940cu: goto label_30940c;
        case 0x309410u: goto label_309410;
        case 0x309414u: goto label_309414;
        case 0x309418u: goto label_309418;
        case 0x30941cu: goto label_30941c;
        case 0x309420u: goto label_309420;
        case 0x309424u: goto label_309424;
        case 0x309428u: goto label_309428;
        case 0x30942cu: goto label_30942c;
        case 0x309430u: goto label_309430;
        case 0x309434u: goto label_309434;
        case 0x309438u: goto label_309438;
        case 0x30943cu: goto label_30943c;
        case 0x309440u: goto label_309440;
        case 0x309444u: goto label_309444;
        case 0x309448u: goto label_309448;
        case 0x30944cu: goto label_30944c;
        case 0x309450u: goto label_309450;
        case 0x309454u: goto label_309454;
        case 0x309458u: goto label_309458;
        case 0x30945cu: goto label_30945c;
        case 0x309460u: goto label_309460;
        case 0x309464u: goto label_309464;
        case 0x309468u: goto label_309468;
        case 0x30946cu: goto label_30946c;
        case 0x309470u: goto label_309470;
        case 0x309474u: goto label_309474;
        case 0x309478u: goto label_309478;
        case 0x30947cu: goto label_30947c;
        case 0x309480u: goto label_309480;
        case 0x309484u: goto label_309484;
        case 0x309488u: goto label_309488;
        case 0x30948cu: goto label_30948c;
        case 0x309490u: goto label_309490;
        case 0x309494u: goto label_309494;
        case 0x309498u: goto label_309498;
        case 0x30949cu: goto label_30949c;
        case 0x3094a0u: goto label_3094a0;
        case 0x3094a4u: goto label_3094a4;
        case 0x3094a8u: goto label_3094a8;
        case 0x3094acu: goto label_3094ac;
        case 0x3094b0u: goto label_3094b0;
        case 0x3094b4u: goto label_3094b4;
        case 0x3094b8u: goto label_3094b8;
        case 0x3094bcu: goto label_3094bc;
        case 0x3094c0u: goto label_3094c0;
        case 0x3094c4u: goto label_3094c4;
        case 0x3094c8u: goto label_3094c8;
        case 0x3094ccu: goto label_3094cc;
        case 0x3094d0u: goto label_3094d0;
        case 0x3094d4u: goto label_3094d4;
        case 0x3094d8u: goto label_3094d8;
        case 0x3094dcu: goto label_3094dc;
        case 0x3094e0u: goto label_3094e0;
        case 0x3094e4u: goto label_3094e4;
        case 0x3094e8u: goto label_3094e8;
        case 0x3094ecu: goto label_3094ec;
        case 0x3094f0u: goto label_3094f0;
        case 0x3094f4u: goto label_3094f4;
        case 0x3094f8u: goto label_3094f8;
        case 0x3094fcu: goto label_3094fc;
        case 0x309500u: goto label_309500;
        case 0x309504u: goto label_309504;
        case 0x309508u: goto label_309508;
        case 0x30950cu: goto label_30950c;
        case 0x309510u: goto label_309510;
        case 0x309514u: goto label_309514;
        case 0x309518u: goto label_309518;
        case 0x30951cu: goto label_30951c;
        case 0x309520u: goto label_309520;
        case 0x309524u: goto label_309524;
        case 0x309528u: goto label_309528;
        case 0x30952cu: goto label_30952c;
        case 0x309530u: goto label_309530;
        case 0x309534u: goto label_309534;
        case 0x309538u: goto label_309538;
        case 0x30953cu: goto label_30953c;
        case 0x309540u: goto label_309540;
        case 0x309544u: goto label_309544;
        case 0x309548u: goto label_309548;
        case 0x30954cu: goto label_30954c;
        case 0x309550u: goto label_309550;
        case 0x309554u: goto label_309554;
        case 0x309558u: goto label_309558;
        case 0x30955cu: goto label_30955c;
        case 0x309560u: goto label_309560;
        case 0x309564u: goto label_309564;
        case 0x309568u: goto label_309568;
        case 0x30956cu: goto label_30956c;
        case 0x309570u: goto label_309570;
        case 0x309574u: goto label_309574;
        case 0x309578u: goto label_309578;
        case 0x30957cu: goto label_30957c;
        case 0x309580u: goto label_309580;
        case 0x309584u: goto label_309584;
        case 0x309588u: goto label_309588;
        case 0x30958cu: goto label_30958c;
        case 0x309590u: goto label_309590;
        case 0x309594u: goto label_309594;
        case 0x309598u: goto label_309598;
        case 0x30959cu: goto label_30959c;
        case 0x3095a0u: goto label_3095a0;
        case 0x3095a4u: goto label_3095a4;
        case 0x3095a8u: goto label_3095a8;
        case 0x3095acu: goto label_3095ac;
        case 0x3095b0u: goto label_3095b0;
        case 0x3095b4u: goto label_3095b4;
        case 0x3095b8u: goto label_3095b8;
        case 0x3095bcu: goto label_3095bc;
        case 0x3095c0u: goto label_3095c0;
        case 0x3095c4u: goto label_3095c4;
        case 0x3095c8u: goto label_3095c8;
        case 0x3095ccu: goto label_3095cc;
        case 0x3095d0u: goto label_3095d0;
        case 0x3095d4u: goto label_3095d4;
        case 0x3095d8u: goto label_3095d8;
        case 0x3095dcu: goto label_3095dc;
        case 0x3095e0u: goto label_3095e0;
        case 0x3095e4u: goto label_3095e4;
        case 0x3095e8u: goto label_3095e8;
        case 0x3095ecu: goto label_3095ec;
        case 0x3095f0u: goto label_3095f0;
        case 0x3095f4u: goto label_3095f4;
        case 0x3095f8u: goto label_3095f8;
        case 0x3095fcu: goto label_3095fc;
        case 0x309600u: goto label_309600;
        case 0x309604u: goto label_309604;
        case 0x309608u: goto label_309608;
        case 0x30960cu: goto label_30960c;
        case 0x309610u: goto label_309610;
        case 0x309614u: goto label_309614;
        case 0x309618u: goto label_309618;
        case 0x30961cu: goto label_30961c;
        case 0x309620u: goto label_309620;
        case 0x309624u: goto label_309624;
        case 0x309628u: goto label_309628;
        case 0x30962cu: goto label_30962c;
        case 0x309630u: goto label_309630;
        case 0x309634u: goto label_309634;
        case 0x309638u: goto label_309638;
        case 0x30963cu: goto label_30963c;
        case 0x309640u: goto label_309640;
        case 0x309644u: goto label_309644;
        case 0x309648u: goto label_309648;
        case 0x30964cu: goto label_30964c;
        case 0x309650u: goto label_309650;
        case 0x309654u: goto label_309654;
        case 0x309658u: goto label_309658;
        case 0x30965cu: goto label_30965c;
        case 0x309660u: goto label_309660;
        case 0x309664u: goto label_309664;
        case 0x309668u: goto label_309668;
        case 0x30966cu: goto label_30966c;
        case 0x309670u: goto label_309670;
        case 0x309674u: goto label_309674;
        case 0x309678u: goto label_309678;
        case 0x30967cu: goto label_30967c;
        case 0x309680u: goto label_309680;
        case 0x309684u: goto label_309684;
        case 0x309688u: goto label_309688;
        case 0x30968cu: goto label_30968c;
        case 0x309690u: goto label_309690;
        case 0x309694u: goto label_309694;
        case 0x309698u: goto label_309698;
        case 0x30969cu: goto label_30969c;
        case 0x3096a0u: goto label_3096a0;
        case 0x3096a4u: goto label_3096a4;
        case 0x3096a8u: goto label_3096a8;
        case 0x3096acu: goto label_3096ac;
        case 0x3096b0u: goto label_3096b0;
        case 0x3096b4u: goto label_3096b4;
        case 0x3096b8u: goto label_3096b8;
        case 0x3096bcu: goto label_3096bc;
        case 0x3096c0u: goto label_3096c0;
        case 0x3096c4u: goto label_3096c4;
        case 0x3096c8u: goto label_3096c8;
        case 0x3096ccu: goto label_3096cc;
        case 0x3096d0u: goto label_3096d0;
        case 0x3096d4u: goto label_3096d4;
        case 0x3096d8u: goto label_3096d8;
        case 0x3096dcu: goto label_3096dc;
        case 0x3096e0u: goto label_3096e0;
        case 0x3096e4u: goto label_3096e4;
        case 0x3096e8u: goto label_3096e8;
        case 0x3096ecu: goto label_3096ec;
        case 0x3096f0u: goto label_3096f0;
        case 0x3096f4u: goto label_3096f4;
        case 0x3096f8u: goto label_3096f8;
        case 0x3096fcu: goto label_3096fc;
        case 0x309700u: goto label_309700;
        case 0x309704u: goto label_309704;
        case 0x309708u: goto label_309708;
        case 0x30970cu: goto label_30970c;
        case 0x309710u: goto label_309710;
        case 0x309714u: goto label_309714;
        case 0x309718u: goto label_309718;
        case 0x30971cu: goto label_30971c;
        case 0x309720u: goto label_309720;
        case 0x309724u: goto label_309724;
        case 0x309728u: goto label_309728;
        case 0x30972cu: goto label_30972c;
        case 0x309730u: goto label_309730;
        case 0x309734u: goto label_309734;
        case 0x309738u: goto label_309738;
        case 0x30973cu: goto label_30973c;
        case 0x309740u: goto label_309740;
        case 0x309744u: goto label_309744;
        case 0x309748u: goto label_309748;
        case 0x30974cu: goto label_30974c;
        case 0x309750u: goto label_309750;
        case 0x309754u: goto label_309754;
        case 0x309758u: goto label_309758;
        case 0x30975cu: goto label_30975c;
        case 0x309760u: goto label_309760;
        case 0x309764u: goto label_309764;
        case 0x309768u: goto label_309768;
        case 0x30976cu: goto label_30976c;
        case 0x309770u: goto label_309770;
        case 0x309774u: goto label_309774;
        case 0x309778u: goto label_309778;
        case 0x30977cu: goto label_30977c;
        case 0x309780u: goto label_309780;
        case 0x309784u: goto label_309784;
        case 0x309788u: goto label_309788;
        case 0x30978cu: goto label_30978c;
        case 0x309790u: goto label_309790;
        case 0x309794u: goto label_309794;
        case 0x309798u: goto label_309798;
        case 0x30979cu: goto label_30979c;
        case 0x3097a0u: goto label_3097a0;
        case 0x3097a4u: goto label_3097a4;
        case 0x3097a8u: goto label_3097a8;
        case 0x3097acu: goto label_3097ac;
        case 0x3097b0u: goto label_3097b0;
        case 0x3097b4u: goto label_3097b4;
        case 0x3097b8u: goto label_3097b8;
        case 0x3097bcu: goto label_3097bc;
        case 0x3097c0u: goto label_3097c0;
        case 0x3097c4u: goto label_3097c4;
        case 0x3097c8u: goto label_3097c8;
        case 0x3097ccu: goto label_3097cc;
        case 0x3097d0u: goto label_3097d0;
        case 0x3097d4u: goto label_3097d4;
        case 0x3097d8u: goto label_3097d8;
        case 0x3097dcu: goto label_3097dc;
        case 0x3097e0u: goto label_3097e0;
        case 0x3097e4u: goto label_3097e4;
        case 0x3097e8u: goto label_3097e8;
        case 0x3097ecu: goto label_3097ec;
        case 0x3097f0u: goto label_3097f0;
        case 0x3097f4u: goto label_3097f4;
        case 0x3097f8u: goto label_3097f8;
        case 0x3097fcu: goto label_3097fc;
        case 0x309800u: goto label_309800;
        case 0x309804u: goto label_309804;
        case 0x309808u: goto label_309808;
        case 0x30980cu: goto label_30980c;
        case 0x309810u: goto label_309810;
        case 0x309814u: goto label_309814;
        case 0x309818u: goto label_309818;
        case 0x30981cu: goto label_30981c;
        case 0x309820u: goto label_309820;
        case 0x309824u: goto label_309824;
        case 0x309828u: goto label_309828;
        case 0x30982cu: goto label_30982c;
        case 0x309830u: goto label_309830;
        case 0x309834u: goto label_309834;
        case 0x309838u: goto label_309838;
        case 0x30983cu: goto label_30983c;
        case 0x309840u: goto label_309840;
        case 0x309844u: goto label_309844;
        case 0x309848u: goto label_309848;
        case 0x30984cu: goto label_30984c;
        case 0x309850u: goto label_309850;
        case 0x309854u: goto label_309854;
        case 0x309858u: goto label_309858;
        case 0x30985cu: goto label_30985c;
        case 0x309860u: goto label_309860;
        case 0x309864u: goto label_309864;
        case 0x309868u: goto label_309868;
        case 0x30986cu: goto label_30986c;
        case 0x309870u: goto label_309870;
        case 0x309874u: goto label_309874;
        case 0x309878u: goto label_309878;
        case 0x30987cu: goto label_30987c;
        case 0x309880u: goto label_309880;
        case 0x309884u: goto label_309884;
        case 0x309888u: goto label_309888;
        case 0x30988cu: goto label_30988c;
        case 0x309890u: goto label_309890;
        case 0x309894u: goto label_309894;
        case 0x309898u: goto label_309898;
        case 0x30989cu: goto label_30989c;
        case 0x3098a0u: goto label_3098a0;
        case 0x3098a4u: goto label_3098a4;
        case 0x3098a8u: goto label_3098a8;
        case 0x3098acu: goto label_3098ac;
        case 0x3098b0u: goto label_3098b0;
        case 0x3098b4u: goto label_3098b4;
        case 0x3098b8u: goto label_3098b8;
        case 0x3098bcu: goto label_3098bc;
        case 0x3098c0u: goto label_3098c0;
        case 0x3098c4u: goto label_3098c4;
        case 0x3098c8u: goto label_3098c8;
        case 0x3098ccu: goto label_3098cc;
        case 0x3098d0u: goto label_3098d0;
        case 0x3098d4u: goto label_3098d4;
        case 0x3098d8u: goto label_3098d8;
        case 0x3098dcu: goto label_3098dc;
        case 0x3098e0u: goto label_3098e0;
        case 0x3098e4u: goto label_3098e4;
        case 0x3098e8u: goto label_3098e8;
        case 0x3098ecu: goto label_3098ec;
        case 0x3098f0u: goto label_3098f0;
        case 0x3098f4u: goto label_3098f4;
        case 0x3098f8u: goto label_3098f8;
        case 0x3098fcu: goto label_3098fc;
        case 0x309900u: goto label_309900;
        case 0x309904u: goto label_309904;
        case 0x309908u: goto label_309908;
        case 0x30990cu: goto label_30990c;
        case 0x309910u: goto label_309910;
        case 0x309914u: goto label_309914;
        case 0x309918u: goto label_309918;
        case 0x30991cu: goto label_30991c;
        case 0x309920u: goto label_309920;
        case 0x309924u: goto label_309924;
        case 0x309928u: goto label_309928;
        case 0x30992cu: goto label_30992c;
        case 0x309930u: goto label_309930;
        case 0x309934u: goto label_309934;
        case 0x309938u: goto label_309938;
        case 0x30993cu: goto label_30993c;
        case 0x309940u: goto label_309940;
        case 0x309944u: goto label_309944;
        case 0x309948u: goto label_309948;
        case 0x30994cu: goto label_30994c;
        case 0x309950u: goto label_309950;
        case 0x309954u: goto label_309954;
        case 0x309958u: goto label_309958;
        case 0x30995cu: goto label_30995c;
        case 0x309960u: goto label_309960;
        case 0x309964u: goto label_309964;
        case 0x309968u: goto label_309968;
        case 0x30996cu: goto label_30996c;
        case 0x309970u: goto label_309970;
        case 0x309974u: goto label_309974;
        case 0x309978u: goto label_309978;
        case 0x30997cu: goto label_30997c;
        case 0x309980u: goto label_309980;
        case 0x309984u: goto label_309984;
        case 0x309988u: goto label_309988;
        case 0x30998cu: goto label_30998c;
        case 0x309990u: goto label_309990;
        case 0x309994u: goto label_309994;
        case 0x309998u: goto label_309998;
        case 0x30999cu: goto label_30999c;
        case 0x3099a0u: goto label_3099a0;
        case 0x3099a4u: goto label_3099a4;
        case 0x3099a8u: goto label_3099a8;
        case 0x3099acu: goto label_3099ac;
        case 0x3099b0u: goto label_3099b0;
        case 0x3099b4u: goto label_3099b4;
        case 0x3099b8u: goto label_3099b8;
        case 0x3099bcu: goto label_3099bc;
        case 0x3099c0u: goto label_3099c0;
        case 0x3099c4u: goto label_3099c4;
        case 0x3099c8u: goto label_3099c8;
        case 0x3099ccu: goto label_3099cc;
        case 0x3099d0u: goto label_3099d0;
        case 0x3099d4u: goto label_3099d4;
        case 0x3099d8u: goto label_3099d8;
        case 0x3099dcu: goto label_3099dc;
        case 0x3099e0u: goto label_3099e0;
        case 0x3099e4u: goto label_3099e4;
        case 0x3099e8u: goto label_3099e8;
        case 0x3099ecu: goto label_3099ec;
        case 0x3099f0u: goto label_3099f0;
        case 0x3099f4u: goto label_3099f4;
        case 0x3099f8u: goto label_3099f8;
        case 0x3099fcu: goto label_3099fc;
        case 0x309a00u: goto label_309a00;
        case 0x309a04u: goto label_309a04;
        case 0x309a08u: goto label_309a08;
        case 0x309a0cu: goto label_309a0c;
        case 0x309a10u: goto label_309a10;
        case 0x309a14u: goto label_309a14;
        case 0x309a18u: goto label_309a18;
        case 0x309a1cu: goto label_309a1c;
        case 0x309a20u: goto label_309a20;
        case 0x309a24u: goto label_309a24;
        case 0x309a28u: goto label_309a28;
        case 0x309a2cu: goto label_309a2c;
        case 0x309a30u: goto label_309a30;
        case 0x309a34u: goto label_309a34;
        case 0x309a38u: goto label_309a38;
        case 0x309a3cu: goto label_309a3c;
        case 0x309a40u: goto label_309a40;
        case 0x309a44u: goto label_309a44;
        case 0x309a48u: goto label_309a48;
        case 0x309a4cu: goto label_309a4c;
        case 0x309a50u: goto label_309a50;
        case 0x309a54u: goto label_309a54;
        case 0x309a58u: goto label_309a58;
        case 0x309a5cu: goto label_309a5c;
        case 0x309a60u: goto label_309a60;
        case 0x309a64u: goto label_309a64;
        case 0x309a68u: goto label_309a68;
        case 0x309a6cu: goto label_309a6c;
        case 0x309a70u: goto label_309a70;
        case 0x309a74u: goto label_309a74;
        case 0x309a78u: goto label_309a78;
        case 0x309a7cu: goto label_309a7c;
        case 0x309a80u: goto label_309a80;
        case 0x309a84u: goto label_309a84;
        case 0x309a88u: goto label_309a88;
        case 0x309a8cu: goto label_309a8c;
        case 0x309a90u: goto label_309a90;
        case 0x309a94u: goto label_309a94;
        case 0x309a98u: goto label_309a98;
        case 0x309a9cu: goto label_309a9c;
        case 0x309aa0u: goto label_309aa0;
        case 0x309aa4u: goto label_309aa4;
        case 0x309aa8u: goto label_309aa8;
        case 0x309aacu: goto label_309aac;
        case 0x309ab0u: goto label_309ab0;
        case 0x309ab4u: goto label_309ab4;
        case 0x309ab8u: goto label_309ab8;
        case 0x309abcu: goto label_309abc;
        case 0x309ac0u: goto label_309ac0;
        case 0x309ac4u: goto label_309ac4;
        case 0x309ac8u: goto label_309ac8;
        case 0x309accu: goto label_309acc;
        case 0x309ad0u: goto label_309ad0;
        case 0x309ad4u: goto label_309ad4;
        case 0x309ad8u: goto label_309ad8;
        case 0x309adcu: goto label_309adc;
        case 0x309ae0u: goto label_309ae0;
        case 0x309ae4u: goto label_309ae4;
        case 0x309ae8u: goto label_309ae8;
        case 0x309aecu: goto label_309aec;
        case 0x309af0u: goto label_309af0;
        case 0x309af4u: goto label_309af4;
        case 0x309af8u: goto label_309af8;
        case 0x309afcu: goto label_309afc;
        case 0x309b00u: goto label_309b00;
        case 0x309b04u: goto label_309b04;
        case 0x309b08u: goto label_309b08;
        case 0x309b0cu: goto label_309b0c;
        case 0x309b10u: goto label_309b10;
        case 0x309b14u: goto label_309b14;
        case 0x309b18u: goto label_309b18;
        case 0x309b1cu: goto label_309b1c;
        case 0x309b20u: goto label_309b20;
        case 0x309b24u: goto label_309b24;
        case 0x309b28u: goto label_309b28;
        case 0x309b2cu: goto label_309b2c;
        case 0x309b30u: goto label_309b30;
        case 0x309b34u: goto label_309b34;
        case 0x309b38u: goto label_309b38;
        case 0x309b3cu: goto label_309b3c;
        case 0x309b40u: goto label_309b40;
        case 0x309b44u: goto label_309b44;
        case 0x309b48u: goto label_309b48;
        case 0x309b4cu: goto label_309b4c;
        case 0x309b50u: goto label_309b50;
        case 0x309b54u: goto label_309b54;
        case 0x309b58u: goto label_309b58;
        case 0x309b5cu: goto label_309b5c;
        case 0x309b60u: goto label_309b60;
        case 0x309b64u: goto label_309b64;
        case 0x309b68u: goto label_309b68;
        case 0x309b6cu: goto label_309b6c;
        case 0x309b70u: goto label_309b70;
        case 0x309b74u: goto label_309b74;
        case 0x309b78u: goto label_309b78;
        case 0x309b7cu: goto label_309b7c;
        case 0x309b80u: goto label_309b80;
        case 0x309b84u: goto label_309b84;
        case 0x309b88u: goto label_309b88;
        case 0x309b8cu: goto label_309b8c;
        case 0x309b90u: goto label_309b90;
        case 0x309b94u: goto label_309b94;
        case 0x309b98u: goto label_309b98;
        case 0x309b9cu: goto label_309b9c;
        case 0x309ba0u: goto label_309ba0;
        case 0x309ba4u: goto label_309ba4;
        case 0x309ba8u: goto label_309ba8;
        case 0x309bacu: goto label_309bac;
        case 0x309bb0u: goto label_309bb0;
        case 0x309bb4u: goto label_309bb4;
        case 0x309bb8u: goto label_309bb8;
        case 0x309bbcu: goto label_309bbc;
        case 0x309bc0u: goto label_309bc0;
        case 0x309bc4u: goto label_309bc4;
        case 0x309bc8u: goto label_309bc8;
        case 0x309bccu: goto label_309bcc;
        case 0x309bd0u: goto label_309bd0;
        case 0x309bd4u: goto label_309bd4;
        case 0x309bd8u: goto label_309bd8;
        case 0x309bdcu: goto label_309bdc;
        case 0x309be0u: goto label_309be0;
        case 0x309be4u: goto label_309be4;
        case 0x309be8u: goto label_309be8;
        case 0x309becu: goto label_309bec;
        case 0x309bf0u: goto label_309bf0;
        case 0x309bf4u: goto label_309bf4;
        case 0x309bf8u: goto label_309bf8;
        case 0x309bfcu: goto label_309bfc;
        case 0x309c00u: goto label_309c00;
        case 0x309c04u: goto label_309c04;
        case 0x309c08u: goto label_309c08;
        case 0x309c0cu: goto label_309c0c;
        case 0x309c10u: goto label_309c10;
        case 0x309c14u: goto label_309c14;
        case 0x309c18u: goto label_309c18;
        case 0x309c1cu: goto label_309c1c;
        case 0x309c20u: goto label_309c20;
        case 0x309c24u: goto label_309c24;
        case 0x309c28u: goto label_309c28;
        case 0x309c2cu: goto label_309c2c;
        case 0x309c30u: goto label_309c30;
        case 0x309c34u: goto label_309c34;
        case 0x309c38u: goto label_309c38;
        case 0x309c3cu: goto label_309c3c;
        case 0x309c40u: goto label_309c40;
        case 0x309c44u: goto label_309c44;
        case 0x309c48u: goto label_309c48;
        case 0x309c4cu: goto label_309c4c;
        case 0x309c50u: goto label_309c50;
        case 0x309c54u: goto label_309c54;
        case 0x309c58u: goto label_309c58;
        case 0x309c5cu: goto label_309c5c;
        case 0x309c60u: goto label_309c60;
        case 0x309c64u: goto label_309c64;
        case 0x309c68u: goto label_309c68;
        case 0x309c6cu: goto label_309c6c;
        case 0x309c70u: goto label_309c70;
        case 0x309c74u: goto label_309c74;
        case 0x309c78u: goto label_309c78;
        case 0x309c7cu: goto label_309c7c;
        case 0x309c80u: goto label_309c80;
        case 0x309c84u: goto label_309c84;
        case 0x309c88u: goto label_309c88;
        case 0x309c8cu: goto label_309c8c;
        case 0x309c90u: goto label_309c90;
        case 0x309c94u: goto label_309c94;
        case 0x309c98u: goto label_309c98;
        case 0x309c9cu: goto label_309c9c;
        case 0x309ca0u: goto label_309ca0;
        case 0x309ca4u: goto label_309ca4;
        case 0x309ca8u: goto label_309ca8;
        case 0x309cacu: goto label_309cac;
        case 0x309cb0u: goto label_309cb0;
        case 0x309cb4u: goto label_309cb4;
        case 0x309cb8u: goto label_309cb8;
        case 0x309cbcu: goto label_309cbc;
        case 0x309cc0u: goto label_309cc0;
        case 0x309cc4u: goto label_309cc4;
        case 0x309cc8u: goto label_309cc8;
        case 0x309cccu: goto label_309ccc;
        case 0x309cd0u: goto label_309cd0;
        case 0x309cd4u: goto label_309cd4;
        case 0x309cd8u: goto label_309cd8;
        case 0x309cdcu: goto label_309cdc;
        case 0x309ce0u: goto label_309ce0;
        case 0x309ce4u: goto label_309ce4;
        case 0x309ce8u: goto label_309ce8;
        case 0x309cecu: goto label_309cec;
        case 0x309cf0u: goto label_309cf0;
        case 0x309cf4u: goto label_309cf4;
        case 0x309cf8u: goto label_309cf8;
        case 0x309cfcu: goto label_309cfc;
        case 0x309d00u: goto label_309d00;
        case 0x309d04u: goto label_309d04;
        case 0x309d08u: goto label_309d08;
        case 0x309d0cu: goto label_309d0c;
        case 0x309d10u: goto label_309d10;
        case 0x309d14u: goto label_309d14;
        case 0x309d18u: goto label_309d18;
        case 0x309d1cu: goto label_309d1c;
        case 0x309d20u: goto label_309d20;
        case 0x309d24u: goto label_309d24;
        case 0x309d28u: goto label_309d28;
        case 0x309d2cu: goto label_309d2c;
        case 0x309d30u: goto label_309d30;
        case 0x309d34u: goto label_309d34;
        case 0x309d38u: goto label_309d38;
        case 0x309d3cu: goto label_309d3c;
        case 0x309d40u: goto label_309d40;
        case 0x309d44u: goto label_309d44;
        case 0x309d48u: goto label_309d48;
        case 0x309d4cu: goto label_309d4c;
        case 0x309d50u: goto label_309d50;
        case 0x309d54u: goto label_309d54;
        case 0x309d58u: goto label_309d58;
        case 0x309d5cu: goto label_309d5c;
        case 0x309d60u: goto label_309d60;
        case 0x309d64u: goto label_309d64;
        case 0x309d68u: goto label_309d68;
        case 0x309d6cu: goto label_309d6c;
        case 0x309d70u: goto label_309d70;
        case 0x309d74u: goto label_309d74;
        case 0x309d78u: goto label_309d78;
        case 0x309d7cu: goto label_309d7c;
        case 0x309d80u: goto label_309d80;
        case 0x309d84u: goto label_309d84;
        case 0x309d88u: goto label_309d88;
        case 0x309d8cu: goto label_309d8c;
        case 0x309d90u: goto label_309d90;
        case 0x309d94u: goto label_309d94;
        case 0x309d98u: goto label_309d98;
        case 0x309d9cu: goto label_309d9c;
        case 0x309da0u: goto label_309da0;
        case 0x309da4u: goto label_309da4;
        case 0x309da8u: goto label_309da8;
        case 0x309dacu: goto label_309dac;
        case 0x309db0u: goto label_309db0;
        case 0x309db4u: goto label_309db4;
        case 0x309db8u: goto label_309db8;
        case 0x309dbcu: goto label_309dbc;
        case 0x309dc0u: goto label_309dc0;
        case 0x309dc4u: goto label_309dc4;
        case 0x309dc8u: goto label_309dc8;
        case 0x309dccu: goto label_309dcc;
        case 0x309dd0u: goto label_309dd0;
        case 0x309dd4u: goto label_309dd4;
        case 0x309dd8u: goto label_309dd8;
        case 0x309ddcu: goto label_309ddc;
        case 0x309de0u: goto label_309de0;
        case 0x309de4u: goto label_309de4;
        case 0x309de8u: goto label_309de8;
        case 0x309decu: goto label_309dec;
        case 0x309df0u: goto label_309df0;
        case 0x309df4u: goto label_309df4;
        case 0x309df8u: goto label_309df8;
        case 0x309dfcu: goto label_309dfc;
        case 0x309e00u: goto label_309e00;
        case 0x309e04u: goto label_309e04;
        case 0x309e08u: goto label_309e08;
        case 0x309e0cu: goto label_309e0c;
        case 0x309e10u: goto label_309e10;
        case 0x309e14u: goto label_309e14;
        case 0x309e18u: goto label_309e18;
        case 0x309e1cu: goto label_309e1c;
        case 0x309e20u: goto label_309e20;
        case 0x309e24u: goto label_309e24;
        case 0x309e28u: goto label_309e28;
        case 0x309e2cu: goto label_309e2c;
        case 0x309e30u: goto label_309e30;
        case 0x309e34u: goto label_309e34;
        case 0x309e38u: goto label_309e38;
        case 0x309e3cu: goto label_309e3c;
        case 0x309e40u: goto label_309e40;
        case 0x309e44u: goto label_309e44;
        case 0x309e48u: goto label_309e48;
        case 0x309e4cu: goto label_309e4c;
        case 0x309e50u: goto label_309e50;
        case 0x309e54u: goto label_309e54;
        case 0x309e58u: goto label_309e58;
        case 0x309e5cu: goto label_309e5c;
        case 0x309e60u: goto label_309e60;
        case 0x309e64u: goto label_309e64;
        case 0x309e68u: goto label_309e68;
        case 0x309e6cu: goto label_309e6c;
        case 0x309e70u: goto label_309e70;
        case 0x309e74u: goto label_309e74;
        case 0x309e78u: goto label_309e78;
        case 0x309e7cu: goto label_309e7c;
        case 0x309e80u: goto label_309e80;
        case 0x309e84u: goto label_309e84;
        case 0x309e88u: goto label_309e88;
        case 0x309e8cu: goto label_309e8c;
        case 0x309e90u: goto label_309e90;
        case 0x309e94u: goto label_309e94;
        case 0x309e98u: goto label_309e98;
        case 0x309e9cu: goto label_309e9c;
        case 0x309ea0u: goto label_309ea0;
        case 0x309ea4u: goto label_309ea4;
        case 0x309ea8u: goto label_309ea8;
        case 0x309eacu: goto label_309eac;
        case 0x309eb0u: goto label_309eb0;
        case 0x309eb4u: goto label_309eb4;
        case 0x309eb8u: goto label_309eb8;
        case 0x309ebcu: goto label_309ebc;
        case 0x309ec0u: goto label_309ec0;
        case 0x309ec4u: goto label_309ec4;
        case 0x309ec8u: goto label_309ec8;
        case 0x309eccu: goto label_309ecc;
        case 0x309ed0u: goto label_309ed0;
        case 0x309ed4u: goto label_309ed4;
        case 0x309ed8u: goto label_309ed8;
        case 0x309edcu: goto label_309edc;
        case 0x309ee0u: goto label_309ee0;
        case 0x309ee4u: goto label_309ee4;
        case 0x309ee8u: goto label_309ee8;
        case 0x309eecu: goto label_309eec;
        case 0x309ef0u: goto label_309ef0;
        case 0x309ef4u: goto label_309ef4;
        case 0x309ef8u: goto label_309ef8;
        case 0x309efcu: goto label_309efc;
        case 0x309f00u: goto label_309f00;
        case 0x309f04u: goto label_309f04;
        case 0x309f08u: goto label_309f08;
        case 0x309f0cu: goto label_309f0c;
        case 0x309f10u: goto label_309f10;
        case 0x309f14u: goto label_309f14;
        case 0x309f18u: goto label_309f18;
        case 0x309f1cu: goto label_309f1c;
        case 0x309f20u: goto label_309f20;
        case 0x309f24u: goto label_309f24;
        case 0x309f28u: goto label_309f28;
        case 0x309f2cu: goto label_309f2c;
        case 0x309f30u: goto label_309f30;
        case 0x309f34u: goto label_309f34;
        case 0x309f38u: goto label_309f38;
        case 0x309f3cu: goto label_309f3c;
        case 0x309f40u: goto label_309f40;
        case 0x309f44u: goto label_309f44;
        case 0x309f48u: goto label_309f48;
        case 0x309f4cu: goto label_309f4c;
        case 0x309f50u: goto label_309f50;
        case 0x309f54u: goto label_309f54;
        case 0x309f58u: goto label_309f58;
        case 0x309f5cu: goto label_309f5c;
        case 0x309f60u: goto label_309f60;
        case 0x309f64u: goto label_309f64;
        case 0x309f68u: goto label_309f68;
        case 0x309f6cu: goto label_309f6c;
        case 0x309f70u: goto label_309f70;
        case 0x309f74u: goto label_309f74;
        case 0x309f78u: goto label_309f78;
        case 0x309f7cu: goto label_309f7c;
        case 0x309f80u: goto label_309f80;
        case 0x309f84u: goto label_309f84;
        case 0x309f88u: goto label_309f88;
        case 0x309f8cu: goto label_309f8c;
        case 0x309f90u: goto label_309f90;
        case 0x309f94u: goto label_309f94;
        case 0x309f98u: goto label_309f98;
        case 0x309f9cu: goto label_309f9c;
        case 0x309fa0u: goto label_309fa0;
        case 0x309fa4u: goto label_309fa4;
        case 0x309fa8u: goto label_309fa8;
        case 0x309facu: goto label_309fac;
        case 0x309fb0u: goto label_309fb0;
        case 0x309fb4u: goto label_309fb4;
        case 0x309fb8u: goto label_309fb8;
        case 0x309fbcu: goto label_309fbc;
        case 0x309fc0u: goto label_309fc0;
        case 0x309fc4u: goto label_309fc4;
        case 0x309fc8u: goto label_309fc8;
        case 0x309fccu: goto label_309fcc;
        case 0x309fd0u: goto label_309fd0;
        case 0x309fd4u: goto label_309fd4;
        case 0x309fd8u: goto label_309fd8;
        case 0x309fdcu: goto label_309fdc;
        case 0x309fe0u: goto label_309fe0;
        case 0x309fe4u: goto label_309fe4;
        case 0x309fe8u: goto label_309fe8;
        case 0x309fecu: goto label_309fec;
        case 0x309ff0u: goto label_309ff0;
        case 0x309ff4u: goto label_309ff4;
        case 0x309ff8u: goto label_309ff8;
        case 0x309ffcu: goto label_309ffc;
        case 0x30a000u: goto label_30a000;
        case 0x30a004u: goto label_30a004;
        case 0x30a008u: goto label_30a008;
        case 0x30a00cu: goto label_30a00c;
        case 0x30a010u: goto label_30a010;
        case 0x30a014u: goto label_30a014;
        case 0x30a018u: goto label_30a018;
        case 0x30a01cu: goto label_30a01c;
        case 0x30a020u: goto label_30a020;
        case 0x30a024u: goto label_30a024;
        case 0x30a028u: goto label_30a028;
        case 0x30a02cu: goto label_30a02c;
        case 0x30a030u: goto label_30a030;
        case 0x30a034u: goto label_30a034;
        case 0x30a038u: goto label_30a038;
        case 0x30a03cu: goto label_30a03c;
        case 0x30a040u: goto label_30a040;
        case 0x30a044u: goto label_30a044;
        case 0x30a048u: goto label_30a048;
        case 0x30a04cu: goto label_30a04c;
        case 0x30a050u: goto label_30a050;
        case 0x30a054u: goto label_30a054;
        case 0x30a058u: goto label_30a058;
        case 0x30a05cu: goto label_30a05c;
        case 0x30a060u: goto label_30a060;
        case 0x30a064u: goto label_30a064;
        case 0x30a068u: goto label_30a068;
        case 0x30a06cu: goto label_30a06c;
        case 0x30a070u: goto label_30a070;
        case 0x30a074u: goto label_30a074;
        case 0x30a078u: goto label_30a078;
        case 0x30a07cu: goto label_30a07c;
        case 0x30a080u: goto label_30a080;
        case 0x30a084u: goto label_30a084;
        case 0x30a088u: goto label_30a088;
        case 0x30a08cu: goto label_30a08c;
        case 0x30a090u: goto label_30a090;
        case 0x30a094u: goto label_30a094;
        case 0x30a098u: goto label_30a098;
        case 0x30a09cu: goto label_30a09c;
        case 0x30a0a0u: goto label_30a0a0;
        case 0x30a0a4u: goto label_30a0a4;
        case 0x30a0a8u: goto label_30a0a8;
        case 0x30a0acu: goto label_30a0ac;
        case 0x30a0b0u: goto label_30a0b0;
        case 0x30a0b4u: goto label_30a0b4;
        case 0x30a0b8u: goto label_30a0b8;
        case 0x30a0bcu: goto label_30a0bc;
        case 0x30a0c0u: goto label_30a0c0;
        case 0x30a0c4u: goto label_30a0c4;
        case 0x30a0c8u: goto label_30a0c8;
        case 0x30a0ccu: goto label_30a0cc;
        case 0x30a0d0u: goto label_30a0d0;
        case 0x30a0d4u: goto label_30a0d4;
        case 0x30a0d8u: goto label_30a0d8;
        case 0x30a0dcu: goto label_30a0dc;
        case 0x30a0e0u: goto label_30a0e0;
        case 0x30a0e4u: goto label_30a0e4;
        case 0x30a0e8u: goto label_30a0e8;
        case 0x30a0ecu: goto label_30a0ec;
        case 0x30a0f0u: goto label_30a0f0;
        case 0x30a0f4u: goto label_30a0f4;
        case 0x30a0f8u: goto label_30a0f8;
        case 0x30a0fcu: goto label_30a0fc;
        case 0x30a100u: goto label_30a100;
        case 0x30a104u: goto label_30a104;
        case 0x30a108u: goto label_30a108;
        case 0x30a10cu: goto label_30a10c;
        case 0x30a110u: goto label_30a110;
        case 0x30a114u: goto label_30a114;
        case 0x30a118u: goto label_30a118;
        case 0x30a11cu: goto label_30a11c;
        case 0x30a120u: goto label_30a120;
        case 0x30a124u: goto label_30a124;
        case 0x30a128u: goto label_30a128;
        case 0x30a12cu: goto label_30a12c;
        case 0x30a130u: goto label_30a130;
        case 0x30a134u: goto label_30a134;
        case 0x30a138u: goto label_30a138;
        case 0x30a13cu: goto label_30a13c;
        case 0x30a140u: goto label_30a140;
        case 0x30a144u: goto label_30a144;
        case 0x30a148u: goto label_30a148;
        case 0x30a14cu: goto label_30a14c;
        case 0x30a150u: goto label_30a150;
        case 0x30a154u: goto label_30a154;
        case 0x30a158u: goto label_30a158;
        case 0x30a15cu: goto label_30a15c;
        case 0x30a160u: goto label_30a160;
        case 0x30a164u: goto label_30a164;
        case 0x30a168u: goto label_30a168;
        case 0x30a16cu: goto label_30a16c;
        case 0x30a170u: goto label_30a170;
        case 0x30a174u: goto label_30a174;
        case 0x30a178u: goto label_30a178;
        case 0x30a17cu: goto label_30a17c;
        case 0x30a180u: goto label_30a180;
        case 0x30a184u: goto label_30a184;
        case 0x30a188u: goto label_30a188;
        case 0x30a18cu: goto label_30a18c;
        case 0x30a190u: goto label_30a190;
        case 0x30a194u: goto label_30a194;
        case 0x30a198u: goto label_30a198;
        case 0x30a19cu: goto label_30a19c;
        case 0x30a1a0u: goto label_30a1a0;
        case 0x30a1a4u: goto label_30a1a4;
        case 0x30a1a8u: goto label_30a1a8;
        case 0x30a1acu: goto label_30a1ac;
        case 0x30a1b0u: goto label_30a1b0;
        case 0x30a1b4u: goto label_30a1b4;
        case 0x30a1b8u: goto label_30a1b8;
        case 0x30a1bcu: goto label_30a1bc;
        case 0x30a1c0u: goto label_30a1c0;
        case 0x30a1c4u: goto label_30a1c4;
        case 0x30a1c8u: goto label_30a1c8;
        case 0x30a1ccu: goto label_30a1cc;
        case 0x30a1d0u: goto label_30a1d0;
        case 0x30a1d4u: goto label_30a1d4;
        case 0x30a1d8u: goto label_30a1d8;
        case 0x30a1dcu: goto label_30a1dc;
        case 0x30a1e0u: goto label_30a1e0;
        case 0x30a1e4u: goto label_30a1e4;
        case 0x30a1e8u: goto label_30a1e8;
        case 0x30a1ecu: goto label_30a1ec;
        case 0x30a1f0u: goto label_30a1f0;
        case 0x30a1f4u: goto label_30a1f4;
        case 0x30a1f8u: goto label_30a1f8;
        case 0x30a1fcu: goto label_30a1fc;
        case 0x30a200u: goto label_30a200;
        case 0x30a204u: goto label_30a204;
        case 0x30a208u: goto label_30a208;
        case 0x30a20cu: goto label_30a20c;
        case 0x30a210u: goto label_30a210;
        case 0x30a214u: goto label_30a214;
        case 0x30a218u: goto label_30a218;
        case 0x30a21cu: goto label_30a21c;
        case 0x30a220u: goto label_30a220;
        case 0x30a224u: goto label_30a224;
        case 0x30a228u: goto label_30a228;
        case 0x30a22cu: goto label_30a22c;
        case 0x30a230u: goto label_30a230;
        case 0x30a234u: goto label_30a234;
        case 0x30a238u: goto label_30a238;
        case 0x30a23cu: goto label_30a23c;
        case 0x30a240u: goto label_30a240;
        case 0x30a244u: goto label_30a244;
        case 0x30a248u: goto label_30a248;
        case 0x30a24cu: goto label_30a24c;
        case 0x30a250u: goto label_30a250;
        case 0x30a254u: goto label_30a254;
        case 0x30a258u: goto label_30a258;
        case 0x30a25cu: goto label_30a25c;
        case 0x30a260u: goto label_30a260;
        case 0x30a264u: goto label_30a264;
        case 0x30a268u: goto label_30a268;
        case 0x30a26cu: goto label_30a26c;
        case 0x30a270u: goto label_30a270;
        case 0x30a274u: goto label_30a274;
        case 0x30a278u: goto label_30a278;
        case 0x30a27cu: goto label_30a27c;
        case 0x30a280u: goto label_30a280;
        case 0x30a284u: goto label_30a284;
        case 0x30a288u: goto label_30a288;
        case 0x30a28cu: goto label_30a28c;
        case 0x30a290u: goto label_30a290;
        case 0x30a294u: goto label_30a294;
        case 0x30a298u: goto label_30a298;
        case 0x30a29cu: goto label_30a29c;
        case 0x30a2a0u: goto label_30a2a0;
        case 0x30a2a4u: goto label_30a2a4;
        case 0x30a2a8u: goto label_30a2a8;
        case 0x30a2acu: goto label_30a2ac;
        case 0x30a2b0u: goto label_30a2b0;
        case 0x30a2b4u: goto label_30a2b4;
        case 0x30a2b8u: goto label_30a2b8;
        case 0x30a2bcu: goto label_30a2bc;
        case 0x30a2c0u: goto label_30a2c0;
        case 0x30a2c4u: goto label_30a2c4;
        case 0x30a2c8u: goto label_30a2c8;
        case 0x30a2ccu: goto label_30a2cc;
        case 0x30a2d0u: goto label_30a2d0;
        case 0x30a2d4u: goto label_30a2d4;
        case 0x30a2d8u: goto label_30a2d8;
        case 0x30a2dcu: goto label_30a2dc;
        case 0x30a2e0u: goto label_30a2e0;
        case 0x30a2e4u: goto label_30a2e4;
        case 0x30a2e8u: goto label_30a2e8;
        case 0x30a2ecu: goto label_30a2ec;
        case 0x30a2f0u: goto label_30a2f0;
        case 0x30a2f4u: goto label_30a2f4;
        case 0x30a2f8u: goto label_30a2f8;
        case 0x30a2fcu: goto label_30a2fc;
        case 0x30a300u: goto label_30a300;
        case 0x30a304u: goto label_30a304;
        case 0x30a308u: goto label_30a308;
        case 0x30a30cu: goto label_30a30c;
        case 0x30a310u: goto label_30a310;
        case 0x30a314u: goto label_30a314;
        case 0x30a318u: goto label_30a318;
        case 0x30a31cu: goto label_30a31c;
        case 0x30a320u: goto label_30a320;
        case 0x30a324u: goto label_30a324;
        case 0x30a328u: goto label_30a328;
        case 0x30a32cu: goto label_30a32c;
        case 0x30a330u: goto label_30a330;
        case 0x30a334u: goto label_30a334;
        case 0x30a338u: goto label_30a338;
        case 0x30a33cu: goto label_30a33c;
        case 0x30a340u: goto label_30a340;
        case 0x30a344u: goto label_30a344;
        case 0x30a348u: goto label_30a348;
        case 0x30a34cu: goto label_30a34c;
        case 0x30a350u: goto label_30a350;
        case 0x30a354u: goto label_30a354;
        case 0x30a358u: goto label_30a358;
        case 0x30a35cu: goto label_30a35c;
        case 0x30a360u: goto label_30a360;
        case 0x30a364u: goto label_30a364;
        case 0x30a368u: goto label_30a368;
        case 0x30a36cu: goto label_30a36c;
        case 0x30a370u: goto label_30a370;
        case 0x30a374u: goto label_30a374;
        case 0x30a378u: goto label_30a378;
        case 0x30a37cu: goto label_30a37c;
        case 0x30a380u: goto label_30a380;
        case 0x30a384u: goto label_30a384;
        case 0x30a388u: goto label_30a388;
        case 0x30a38cu: goto label_30a38c;
        case 0x30a390u: goto label_30a390;
        case 0x30a394u: goto label_30a394;
        case 0x30a398u: goto label_30a398;
        case 0x30a39cu: goto label_30a39c;
        case 0x30a3a0u: goto label_30a3a0;
        case 0x30a3a4u: goto label_30a3a4;
        case 0x30a3a8u: goto label_30a3a8;
        case 0x30a3acu: goto label_30a3ac;
        case 0x30a3b0u: goto label_30a3b0;
        case 0x30a3b4u: goto label_30a3b4;
        case 0x30a3b8u: goto label_30a3b8;
        case 0x30a3bcu: goto label_30a3bc;
        case 0x30a3c0u: goto label_30a3c0;
        case 0x30a3c4u: goto label_30a3c4;
        case 0x30a3c8u: goto label_30a3c8;
        case 0x30a3ccu: goto label_30a3cc;
        case 0x30a3d0u: goto label_30a3d0;
        case 0x30a3d4u: goto label_30a3d4;
        case 0x30a3d8u: goto label_30a3d8;
        case 0x30a3dcu: goto label_30a3dc;
        case 0x30a3e0u: goto label_30a3e0;
        case 0x30a3e4u: goto label_30a3e4;
        case 0x30a3e8u: goto label_30a3e8;
        case 0x30a3ecu: goto label_30a3ec;
        case 0x30a3f0u: goto label_30a3f0;
        case 0x30a3f4u: goto label_30a3f4;
        case 0x30a3f8u: goto label_30a3f8;
        case 0x30a3fcu: goto label_30a3fc;
        case 0x30a400u: goto label_30a400;
        case 0x30a404u: goto label_30a404;
        case 0x30a408u: goto label_30a408;
        case 0x30a40cu: goto label_30a40c;
        case 0x30a410u: goto label_30a410;
        case 0x30a414u: goto label_30a414;
        case 0x30a418u: goto label_30a418;
        case 0x30a41cu: goto label_30a41c;
        case 0x30a420u: goto label_30a420;
        case 0x30a424u: goto label_30a424;
        case 0x30a428u: goto label_30a428;
        case 0x30a42cu: goto label_30a42c;
        case 0x30a430u: goto label_30a430;
        case 0x30a434u: goto label_30a434;
        case 0x30a438u: goto label_30a438;
        case 0x30a43cu: goto label_30a43c;
        case 0x30a440u: goto label_30a440;
        case 0x30a444u: goto label_30a444;
        case 0x30a448u: goto label_30a448;
        case 0x30a44cu: goto label_30a44c;
        case 0x30a450u: goto label_30a450;
        case 0x30a454u: goto label_30a454;
        case 0x30a458u: goto label_30a458;
        case 0x30a45cu: goto label_30a45c;
        case 0x30a460u: goto label_30a460;
        case 0x30a464u: goto label_30a464;
        case 0x30a468u: goto label_30a468;
        case 0x30a46cu: goto label_30a46c;
        case 0x30a470u: goto label_30a470;
        case 0x30a474u: goto label_30a474;
        case 0x30a478u: goto label_30a478;
        case 0x30a47cu: goto label_30a47c;
        case 0x30a480u: goto label_30a480;
        case 0x30a484u: goto label_30a484;
        case 0x30a488u: goto label_30a488;
        case 0x30a48cu: goto label_30a48c;
        case 0x30a490u: goto label_30a490;
        case 0x30a494u: goto label_30a494;
        case 0x30a498u: goto label_30a498;
        case 0x30a49cu: goto label_30a49c;
        case 0x30a4a0u: goto label_30a4a0;
        case 0x30a4a4u: goto label_30a4a4;
        case 0x30a4a8u: goto label_30a4a8;
        case 0x30a4acu: goto label_30a4ac;
        case 0x30a4b0u: goto label_30a4b0;
        case 0x30a4b4u: goto label_30a4b4;
        case 0x30a4b8u: goto label_30a4b8;
        case 0x30a4bcu: goto label_30a4bc;
        case 0x30a4c0u: goto label_30a4c0;
        case 0x30a4c4u: goto label_30a4c4;
        case 0x30a4c8u: goto label_30a4c8;
        case 0x30a4ccu: goto label_30a4cc;
        case 0x30a4d0u: goto label_30a4d0;
        case 0x30a4d4u: goto label_30a4d4;
        case 0x30a4d8u: goto label_30a4d8;
        case 0x30a4dcu: goto label_30a4dc;
        case 0x30a4e0u: goto label_30a4e0;
        case 0x30a4e4u: goto label_30a4e4;
        case 0x30a4e8u: goto label_30a4e8;
        case 0x30a4ecu: goto label_30a4ec;
        case 0x30a4f0u: goto label_30a4f0;
        case 0x30a4f4u: goto label_30a4f4;
        case 0x30a4f8u: goto label_30a4f8;
        case 0x30a4fcu: goto label_30a4fc;
        case 0x30a500u: goto label_30a500;
        case 0x30a504u: goto label_30a504;
        case 0x30a508u: goto label_30a508;
        case 0x30a50cu: goto label_30a50c;
        case 0x30a510u: goto label_30a510;
        case 0x30a514u: goto label_30a514;
        case 0x30a518u: goto label_30a518;
        case 0x30a51cu: goto label_30a51c;
        case 0x30a520u: goto label_30a520;
        case 0x30a524u: goto label_30a524;
        case 0x30a528u: goto label_30a528;
        case 0x30a52cu: goto label_30a52c;
        case 0x30a530u: goto label_30a530;
        case 0x30a534u: goto label_30a534;
        case 0x30a538u: goto label_30a538;
        case 0x30a53cu: goto label_30a53c;
        case 0x30a540u: goto label_30a540;
        case 0x30a544u: goto label_30a544;
        case 0x30a548u: goto label_30a548;
        case 0x30a54cu: goto label_30a54c;
        case 0x30a550u: goto label_30a550;
        case 0x30a554u: goto label_30a554;
        case 0x30a558u: goto label_30a558;
        case 0x30a55cu: goto label_30a55c;
        case 0x30a560u: goto label_30a560;
        case 0x30a564u: goto label_30a564;
        case 0x30a568u: goto label_30a568;
        case 0x30a56cu: goto label_30a56c;
        case 0x30a570u: goto label_30a570;
        case 0x30a574u: goto label_30a574;
        case 0x30a578u: goto label_30a578;
        case 0x30a57cu: goto label_30a57c;
        case 0x30a580u: goto label_30a580;
        case 0x30a584u: goto label_30a584;
        case 0x30a588u: goto label_30a588;
        case 0x30a58cu: goto label_30a58c;
        case 0x30a590u: goto label_30a590;
        case 0x30a594u: goto label_30a594;
        case 0x30a598u: goto label_30a598;
        case 0x30a59cu: goto label_30a59c;
        case 0x30a5a0u: goto label_30a5a0;
        case 0x30a5a4u: goto label_30a5a4;
        case 0x30a5a8u: goto label_30a5a8;
        case 0x30a5acu: goto label_30a5ac;
        case 0x30a5b0u: goto label_30a5b0;
        case 0x30a5b4u: goto label_30a5b4;
        case 0x30a5b8u: goto label_30a5b8;
        case 0x30a5bcu: goto label_30a5bc;
        case 0x30a5c0u: goto label_30a5c0;
        case 0x30a5c4u: goto label_30a5c4;
        case 0x30a5c8u: goto label_30a5c8;
        case 0x30a5ccu: goto label_30a5cc;
        case 0x30a5d0u: goto label_30a5d0;
        case 0x30a5d4u: goto label_30a5d4;
        case 0x30a5d8u: goto label_30a5d8;
        case 0x30a5dcu: goto label_30a5dc;
        case 0x30a5e0u: goto label_30a5e0;
        case 0x30a5e4u: goto label_30a5e4;
        case 0x30a5e8u: goto label_30a5e8;
        case 0x30a5ecu: goto label_30a5ec;
        case 0x30a5f0u: goto label_30a5f0;
        case 0x30a5f4u: goto label_30a5f4;
        case 0x30a5f8u: goto label_30a5f8;
        case 0x30a5fcu: goto label_30a5fc;
        case 0x30a600u: goto label_30a600;
        case 0x30a604u: goto label_30a604;
        case 0x30a608u: goto label_30a608;
        case 0x30a60cu: goto label_30a60c;
        case 0x30a610u: goto label_30a610;
        case 0x30a614u: goto label_30a614;
        case 0x30a618u: goto label_30a618;
        case 0x30a61cu: goto label_30a61c;
        case 0x30a620u: goto label_30a620;
        case 0x30a624u: goto label_30a624;
        case 0x30a628u: goto label_30a628;
        case 0x30a62cu: goto label_30a62c;
        case 0x30a630u: goto label_30a630;
        case 0x30a634u: goto label_30a634;
        case 0x30a638u: goto label_30a638;
        case 0x30a63cu: goto label_30a63c;
        case 0x30a640u: goto label_30a640;
        case 0x30a644u: goto label_30a644;
        case 0x30a648u: goto label_30a648;
        case 0x30a64cu: goto label_30a64c;
        case 0x30a650u: goto label_30a650;
        case 0x30a654u: goto label_30a654;
        case 0x30a658u: goto label_30a658;
        case 0x30a65cu: goto label_30a65c;
        case 0x30a660u: goto label_30a660;
        case 0x30a664u: goto label_30a664;
        case 0x30a668u: goto label_30a668;
        case 0x30a66cu: goto label_30a66c;
        case 0x30a670u: goto label_30a670;
        case 0x30a674u: goto label_30a674;
        case 0x30a678u: goto label_30a678;
        case 0x30a67cu: goto label_30a67c;
        case 0x30a680u: goto label_30a680;
        case 0x30a684u: goto label_30a684;
        case 0x30a688u: goto label_30a688;
        case 0x30a68cu: goto label_30a68c;
        case 0x30a690u: goto label_30a690;
        case 0x30a694u: goto label_30a694;
        case 0x30a698u: goto label_30a698;
        case 0x30a69cu: goto label_30a69c;
        case 0x30a6a0u: goto label_30a6a0;
        case 0x30a6a4u: goto label_30a6a4;
        case 0x30a6a8u: goto label_30a6a8;
        case 0x30a6acu: goto label_30a6ac;
        case 0x30a6b0u: goto label_30a6b0;
        case 0x30a6b4u: goto label_30a6b4;
        case 0x30a6b8u: goto label_30a6b8;
        case 0x30a6bcu: goto label_30a6bc;
        case 0x30a6c0u: goto label_30a6c0;
        case 0x30a6c4u: goto label_30a6c4;
        case 0x30a6c8u: goto label_30a6c8;
        case 0x30a6ccu: goto label_30a6cc;
        case 0x30a6d0u: goto label_30a6d0;
        case 0x30a6d4u: goto label_30a6d4;
        case 0x30a6d8u: goto label_30a6d8;
        case 0x30a6dcu: goto label_30a6dc;
        case 0x30a6e0u: goto label_30a6e0;
        case 0x30a6e4u: goto label_30a6e4;
        case 0x30a6e8u: goto label_30a6e8;
        case 0x30a6ecu: goto label_30a6ec;
        case 0x30a6f0u: goto label_30a6f0;
        case 0x30a6f4u: goto label_30a6f4;
        case 0x30a6f8u: goto label_30a6f8;
        case 0x30a6fcu: goto label_30a6fc;
        case 0x30a700u: goto label_30a700;
        case 0x30a704u: goto label_30a704;
        case 0x30a708u: goto label_30a708;
        case 0x30a70cu: goto label_30a70c;
        case 0x30a710u: goto label_30a710;
        case 0x30a714u: goto label_30a714;
        case 0x30a718u: goto label_30a718;
        case 0x30a71cu: goto label_30a71c;
        case 0x30a720u: goto label_30a720;
        case 0x30a724u: goto label_30a724;
        case 0x30a728u: goto label_30a728;
        case 0x30a72cu: goto label_30a72c;
        case 0x30a730u: goto label_30a730;
        case 0x30a734u: goto label_30a734;
        case 0x30a738u: goto label_30a738;
        case 0x30a73cu: goto label_30a73c;
        case 0x30a740u: goto label_30a740;
        case 0x30a744u: goto label_30a744;
        case 0x30a748u: goto label_30a748;
        case 0x30a74cu: goto label_30a74c;
        case 0x30a750u: goto label_30a750;
        case 0x30a754u: goto label_30a754;
        case 0x30a758u: goto label_30a758;
        case 0x30a75cu: goto label_30a75c;
        case 0x30a760u: goto label_30a760;
        case 0x30a764u: goto label_30a764;
        case 0x30a768u: goto label_30a768;
        case 0x30a76cu: goto label_30a76c;
        case 0x30a770u: goto label_30a770;
        case 0x30a774u: goto label_30a774;
        case 0x30a778u: goto label_30a778;
        case 0x30a77cu: goto label_30a77c;
        case 0x30a780u: goto label_30a780;
        case 0x30a784u: goto label_30a784;
        case 0x30a788u: goto label_30a788;
        case 0x30a78cu: goto label_30a78c;
        case 0x30a790u: goto label_30a790;
        case 0x30a794u: goto label_30a794;
        case 0x30a798u: goto label_30a798;
        case 0x30a79cu: goto label_30a79c;
        case 0x30a7a0u: goto label_30a7a0;
        case 0x30a7a4u: goto label_30a7a4;
        case 0x30a7a8u: goto label_30a7a8;
        case 0x30a7acu: goto label_30a7ac;
        case 0x30a7b0u: goto label_30a7b0;
        case 0x30a7b4u: goto label_30a7b4;
        case 0x30a7b8u: goto label_30a7b8;
        case 0x30a7bcu: goto label_30a7bc;
        case 0x30a7c0u: goto label_30a7c0;
        case 0x30a7c4u: goto label_30a7c4;
        case 0x30a7c8u: goto label_30a7c8;
        case 0x30a7ccu: goto label_30a7cc;
        case 0x30a7d0u: goto label_30a7d0;
        case 0x30a7d4u: goto label_30a7d4;
        case 0x30a7d8u: goto label_30a7d8;
        case 0x30a7dcu: goto label_30a7dc;
        case 0x30a7e0u: goto label_30a7e0;
        case 0x30a7e4u: goto label_30a7e4;
        case 0x30a7e8u: goto label_30a7e8;
        case 0x30a7ecu: goto label_30a7ec;
        case 0x30a7f0u: goto label_30a7f0;
        case 0x30a7f4u: goto label_30a7f4;
        case 0x30a7f8u: goto label_30a7f8;
        case 0x30a7fcu: goto label_30a7fc;
        case 0x30a800u: goto label_30a800;
        case 0x30a804u: goto label_30a804;
        case 0x30a808u: goto label_30a808;
        case 0x30a80cu: goto label_30a80c;
        case 0x30a810u: goto label_30a810;
        case 0x30a814u: goto label_30a814;
        case 0x30a818u: goto label_30a818;
        case 0x30a81cu: goto label_30a81c;
        case 0x30a820u: goto label_30a820;
        case 0x30a824u: goto label_30a824;
        case 0x30a828u: goto label_30a828;
        case 0x30a82cu: goto label_30a82c;
        case 0x30a830u: goto label_30a830;
        case 0x30a834u: goto label_30a834;
        case 0x30a838u: goto label_30a838;
        case 0x30a83cu: goto label_30a83c;
        case 0x30a840u: goto label_30a840;
        case 0x30a844u: goto label_30a844;
        case 0x30a848u: goto label_30a848;
        case 0x30a84cu: goto label_30a84c;
        case 0x30a850u: goto label_30a850;
        case 0x30a854u: goto label_30a854;
        case 0x30a858u: goto label_30a858;
        case 0x30a85cu: goto label_30a85c;
        case 0x30a860u: goto label_30a860;
        case 0x30a864u: goto label_30a864;
        case 0x30a868u: goto label_30a868;
        case 0x30a86cu: goto label_30a86c;
        case 0x30a870u: goto label_30a870;
        case 0x30a874u: goto label_30a874;
        case 0x30a878u: goto label_30a878;
        case 0x30a87cu: goto label_30a87c;
        case 0x30a880u: goto label_30a880;
        case 0x30a884u: goto label_30a884;
        case 0x30a888u: goto label_30a888;
        case 0x30a88cu: goto label_30a88c;
        case 0x30a890u: goto label_30a890;
        case 0x30a894u: goto label_30a894;
        case 0x30a898u: goto label_30a898;
        case 0x30a89cu: goto label_30a89c;
        case 0x30a8a0u: goto label_30a8a0;
        case 0x30a8a4u: goto label_30a8a4;
        case 0x30a8a8u: goto label_30a8a8;
        case 0x30a8acu: goto label_30a8ac;
        case 0x30a8b0u: goto label_30a8b0;
        case 0x30a8b4u: goto label_30a8b4;
        case 0x30a8b8u: goto label_30a8b8;
        case 0x30a8bcu: goto label_30a8bc;
        case 0x30a8c0u: goto label_30a8c0;
        case 0x30a8c4u: goto label_30a8c4;
        case 0x30a8c8u: goto label_30a8c8;
        case 0x30a8ccu: goto label_30a8cc;
        case 0x30a8d0u: goto label_30a8d0;
        case 0x30a8d4u: goto label_30a8d4;
        case 0x30a8d8u: goto label_30a8d8;
        case 0x30a8dcu: goto label_30a8dc;
        case 0x30a8e0u: goto label_30a8e0;
        case 0x30a8e4u: goto label_30a8e4;
        case 0x30a8e8u: goto label_30a8e8;
        case 0x30a8ecu: goto label_30a8ec;
        case 0x30a8f0u: goto label_30a8f0;
        case 0x30a8f4u: goto label_30a8f4;
        case 0x30a8f8u: goto label_30a8f8;
        case 0x30a8fcu: goto label_30a8fc;
        case 0x30a900u: goto label_30a900;
        case 0x30a904u: goto label_30a904;
        case 0x30a908u: goto label_30a908;
        case 0x30a90cu: goto label_30a90c;
        case 0x30a910u: goto label_30a910;
        case 0x30a914u: goto label_30a914;
        case 0x30a918u: goto label_30a918;
        case 0x30a91cu: goto label_30a91c;
        case 0x30a920u: goto label_30a920;
        case 0x30a924u: goto label_30a924;
        case 0x30a928u: goto label_30a928;
        case 0x30a92cu: goto label_30a92c;
        case 0x30a930u: goto label_30a930;
        case 0x30a934u: goto label_30a934;
        case 0x30a938u: goto label_30a938;
        case 0x30a93cu: goto label_30a93c;
        case 0x30a940u: goto label_30a940;
        case 0x30a944u: goto label_30a944;
        case 0x30a948u: goto label_30a948;
        case 0x30a94cu: goto label_30a94c;
        case 0x30a950u: goto label_30a950;
        case 0x30a954u: goto label_30a954;
        case 0x30a958u: goto label_30a958;
        case 0x30a95cu: goto label_30a95c;
        case 0x30a960u: goto label_30a960;
        case 0x30a964u: goto label_30a964;
        case 0x30a968u: goto label_30a968;
        case 0x30a96cu: goto label_30a96c;
        case 0x30a970u: goto label_30a970;
        case 0x30a974u: goto label_30a974;
        case 0x30a978u: goto label_30a978;
        case 0x30a97cu: goto label_30a97c;
        case 0x30a980u: goto label_30a980;
        case 0x30a984u: goto label_30a984;
        case 0x30a988u: goto label_30a988;
        case 0x30a98cu: goto label_30a98c;
        case 0x30a990u: goto label_30a990;
        case 0x30a994u: goto label_30a994;
        case 0x30a998u: goto label_30a998;
        case 0x30a99cu: goto label_30a99c;
        case 0x30a9a0u: goto label_30a9a0;
        case 0x30a9a4u: goto label_30a9a4;
        case 0x30a9a8u: goto label_30a9a8;
        case 0x30a9acu: goto label_30a9ac;
        case 0x30a9b0u: goto label_30a9b0;
        case 0x30a9b4u: goto label_30a9b4;
        case 0x30a9b8u: goto label_30a9b8;
        case 0x30a9bcu: goto label_30a9bc;
        case 0x30a9c0u: goto label_30a9c0;
        case 0x30a9c4u: goto label_30a9c4;
        case 0x30a9c8u: goto label_30a9c8;
        case 0x30a9ccu: goto label_30a9cc;
        case 0x30a9d0u: goto label_30a9d0;
        case 0x30a9d4u: goto label_30a9d4;
        case 0x30a9d8u: goto label_30a9d8;
        case 0x30a9dcu: goto label_30a9dc;
        case 0x30a9e0u: goto label_30a9e0;
        case 0x30a9e4u: goto label_30a9e4;
        case 0x30a9e8u: goto label_30a9e8;
        case 0x30a9ecu: goto label_30a9ec;
        case 0x30a9f0u: goto label_30a9f0;
        case 0x30a9f4u: goto label_30a9f4;
        case 0x30a9f8u: goto label_30a9f8;
        case 0x30a9fcu: goto label_30a9fc;
        case 0x30aa00u: goto label_30aa00;
        case 0x30aa04u: goto label_30aa04;
        case 0x30aa08u: goto label_30aa08;
        case 0x30aa0cu: goto label_30aa0c;
        case 0x30aa10u: goto label_30aa10;
        case 0x30aa14u: goto label_30aa14;
        case 0x30aa18u: goto label_30aa18;
        case 0x30aa1cu: goto label_30aa1c;
        case 0x30aa20u: goto label_30aa20;
        case 0x30aa24u: goto label_30aa24;
        case 0x30aa28u: goto label_30aa28;
        case 0x30aa2cu: goto label_30aa2c;
        case 0x30aa30u: goto label_30aa30;
        case 0x30aa34u: goto label_30aa34;
        case 0x30aa38u: goto label_30aa38;
        case 0x30aa3cu: goto label_30aa3c;
        case 0x30aa40u: goto label_30aa40;
        case 0x30aa44u: goto label_30aa44;
        case 0x30aa48u: goto label_30aa48;
        case 0x30aa4cu: goto label_30aa4c;
        case 0x30aa50u: goto label_30aa50;
        case 0x30aa54u: goto label_30aa54;
        case 0x30aa58u: goto label_30aa58;
        case 0x30aa5cu: goto label_30aa5c;
        case 0x30aa60u: goto label_30aa60;
        case 0x30aa64u: goto label_30aa64;
        case 0x30aa68u: goto label_30aa68;
        case 0x30aa6cu: goto label_30aa6c;
        case 0x30aa70u: goto label_30aa70;
        case 0x30aa74u: goto label_30aa74;
        case 0x30aa78u: goto label_30aa78;
        case 0x30aa7cu: goto label_30aa7c;
        case 0x30aa80u: goto label_30aa80;
        case 0x30aa84u: goto label_30aa84;
        case 0x30aa88u: goto label_30aa88;
        case 0x30aa8cu: goto label_30aa8c;
        case 0x30aa90u: goto label_30aa90;
        case 0x30aa94u: goto label_30aa94;
        case 0x30aa98u: goto label_30aa98;
        case 0x30aa9cu: goto label_30aa9c;
        case 0x30aaa0u: goto label_30aaa0;
        case 0x30aaa4u: goto label_30aaa4;
        case 0x30aaa8u: goto label_30aaa8;
        case 0x30aaacu: goto label_30aaac;
        case 0x30aab0u: goto label_30aab0;
        case 0x30aab4u: goto label_30aab4;
        case 0x30aab8u: goto label_30aab8;
        case 0x30aabcu: goto label_30aabc;
        case 0x30aac0u: goto label_30aac0;
        case 0x30aac4u: goto label_30aac4;
        case 0x30aac8u: goto label_30aac8;
        case 0x30aaccu: goto label_30aacc;
        case 0x30aad0u: goto label_30aad0;
        case 0x30aad4u: goto label_30aad4;
        case 0x30aad8u: goto label_30aad8;
        case 0x30aadcu: goto label_30aadc;
        case 0x30aae0u: goto label_30aae0;
        case 0x30aae4u: goto label_30aae4;
        case 0x30aae8u: goto label_30aae8;
        case 0x30aaecu: goto label_30aaec;
        case 0x30aaf0u: goto label_30aaf0;
        case 0x30aaf4u: goto label_30aaf4;
        case 0x30aaf8u: goto label_30aaf8;
        case 0x30aafcu: goto label_30aafc;
        case 0x30ab00u: goto label_30ab00;
        case 0x30ab04u: goto label_30ab04;
        case 0x30ab08u: goto label_30ab08;
        case 0x30ab0cu: goto label_30ab0c;
        case 0x30ab10u: goto label_30ab10;
        case 0x30ab14u: goto label_30ab14;
        case 0x30ab18u: goto label_30ab18;
        case 0x30ab1cu: goto label_30ab1c;
        case 0x30ab20u: goto label_30ab20;
        case 0x30ab24u: goto label_30ab24;
        case 0x30ab28u: goto label_30ab28;
        case 0x30ab2cu: goto label_30ab2c;
        case 0x30ab30u: goto label_30ab30;
        case 0x30ab34u: goto label_30ab34;
        case 0x30ab38u: goto label_30ab38;
        case 0x30ab3cu: goto label_30ab3c;
        case 0x30ab40u: goto label_30ab40;
        case 0x30ab44u: goto label_30ab44;
        case 0x30ab48u: goto label_30ab48;
        case 0x30ab4cu: goto label_30ab4c;
        case 0x30ab50u: goto label_30ab50;
        case 0x30ab54u: goto label_30ab54;
        case 0x30ab58u: goto label_30ab58;
        case 0x30ab5cu: goto label_30ab5c;
        case 0x30ab60u: goto label_30ab60;
        case 0x30ab64u: goto label_30ab64;
        case 0x30ab68u: goto label_30ab68;
        case 0x30ab6cu: goto label_30ab6c;
        case 0x30ab70u: goto label_30ab70;
        case 0x30ab74u: goto label_30ab74;
        case 0x30ab78u: goto label_30ab78;
        case 0x30ab7cu: goto label_30ab7c;
        case 0x30ab80u: goto label_30ab80;
        case 0x30ab84u: goto label_30ab84;
        case 0x30ab88u: goto label_30ab88;
        case 0x30ab8cu: goto label_30ab8c;
        case 0x30ab90u: goto label_30ab90;
        case 0x30ab94u: goto label_30ab94;
        case 0x30ab98u: goto label_30ab98;
        case 0x30ab9cu: goto label_30ab9c;
        case 0x30aba0u: goto label_30aba0;
        case 0x30aba4u: goto label_30aba4;
        case 0x30aba8u: goto label_30aba8;
        case 0x30abacu: goto label_30abac;
        case 0x30abb0u: goto label_30abb0;
        case 0x30abb4u: goto label_30abb4;
        case 0x30abb8u: goto label_30abb8;
        case 0x30abbcu: goto label_30abbc;
        case 0x30abc0u: goto label_30abc0;
        case 0x30abc4u: goto label_30abc4;
        case 0x30abc8u: goto label_30abc8;
        case 0x30abccu: goto label_30abcc;
        case 0x30abd0u: goto label_30abd0;
        case 0x30abd4u: goto label_30abd4;
        case 0x30abd8u: goto label_30abd8;
        case 0x30abdcu: goto label_30abdc;
        case 0x30abe0u: goto label_30abe0;
        case 0x30abe4u: goto label_30abe4;
        case 0x30abe8u: goto label_30abe8;
        case 0x30abecu: goto label_30abec;
        case 0x30abf0u: goto label_30abf0;
        case 0x30abf4u: goto label_30abf4;
        case 0x30abf8u: goto label_30abf8;
        case 0x30abfcu: goto label_30abfc;
        case 0x30ac00u: goto label_30ac00;
        case 0x30ac04u: goto label_30ac04;
        case 0x30ac08u: goto label_30ac08;
        case 0x30ac0cu: goto label_30ac0c;
        case 0x30ac10u: goto label_30ac10;
        case 0x30ac14u: goto label_30ac14;
        case 0x30ac18u: goto label_30ac18;
        case 0x30ac1cu: goto label_30ac1c;
        case 0x30ac20u: goto label_30ac20;
        case 0x30ac24u: goto label_30ac24;
        case 0x30ac28u: goto label_30ac28;
        case 0x30ac2cu: goto label_30ac2c;
        case 0x30ac30u: goto label_30ac30;
        case 0x30ac34u: goto label_30ac34;
        case 0x30ac38u: goto label_30ac38;
        case 0x30ac3cu: goto label_30ac3c;
        case 0x30ac40u: goto label_30ac40;
        case 0x30ac44u: goto label_30ac44;
        case 0x30ac48u: goto label_30ac48;
        case 0x30ac4cu: goto label_30ac4c;
        case 0x30ac50u: goto label_30ac50;
        case 0x30ac54u: goto label_30ac54;
        case 0x30ac58u: goto label_30ac58;
        case 0x30ac5cu: goto label_30ac5c;
        case 0x30ac60u: goto label_30ac60;
        case 0x30ac64u: goto label_30ac64;
        case 0x30ac68u: goto label_30ac68;
        case 0x30ac6cu: goto label_30ac6c;
        case 0x30ac70u: goto label_30ac70;
        case 0x30ac74u: goto label_30ac74;
        case 0x30ac78u: goto label_30ac78;
        case 0x30ac7cu: goto label_30ac7c;
        case 0x30ac80u: goto label_30ac80;
        case 0x30ac84u: goto label_30ac84;
        case 0x30ac88u: goto label_30ac88;
        case 0x30ac8cu: goto label_30ac8c;
        case 0x30ac90u: goto label_30ac90;
        case 0x30ac94u: goto label_30ac94;
        case 0x30ac98u: goto label_30ac98;
        case 0x30ac9cu: goto label_30ac9c;
        case 0x30aca0u: goto label_30aca0;
        case 0x30aca4u: goto label_30aca4;
        case 0x30aca8u: goto label_30aca8;
        case 0x30acacu: goto label_30acac;
        case 0x30acb0u: goto label_30acb0;
        case 0x30acb4u: goto label_30acb4;
        case 0x30acb8u: goto label_30acb8;
        case 0x30acbcu: goto label_30acbc;
        case 0x30acc0u: goto label_30acc0;
        case 0x30acc4u: goto label_30acc4;
        case 0x30acc8u: goto label_30acc8;
        case 0x30acccu: goto label_30accc;
        case 0x30acd0u: goto label_30acd0;
        case 0x30acd4u: goto label_30acd4;
        case 0x30acd8u: goto label_30acd8;
        case 0x30acdcu: goto label_30acdc;
        case 0x30ace0u: goto label_30ace0;
        case 0x30ace4u: goto label_30ace4;
        case 0x30ace8u: goto label_30ace8;
        case 0x30acecu: goto label_30acec;
        case 0x30acf0u: goto label_30acf0;
        case 0x30acf4u: goto label_30acf4;
        case 0x30acf8u: goto label_30acf8;
        case 0x30acfcu: goto label_30acfc;
        case 0x30ad00u: goto label_30ad00;
        case 0x30ad04u: goto label_30ad04;
        case 0x30ad08u: goto label_30ad08;
        case 0x30ad0cu: goto label_30ad0c;
        case 0x30ad10u: goto label_30ad10;
        case 0x30ad14u: goto label_30ad14;
        case 0x30ad18u: goto label_30ad18;
        case 0x30ad1cu: goto label_30ad1c;
        case 0x30ad20u: goto label_30ad20;
        case 0x30ad24u: goto label_30ad24;
        case 0x30ad28u: goto label_30ad28;
        case 0x30ad2cu: goto label_30ad2c;
        case 0x30ad30u: goto label_30ad30;
        case 0x30ad34u: goto label_30ad34;
        case 0x30ad38u: goto label_30ad38;
        case 0x30ad3cu: goto label_30ad3c;
        case 0x30ad40u: goto label_30ad40;
        case 0x30ad44u: goto label_30ad44;
        case 0x30ad48u: goto label_30ad48;
        case 0x30ad4cu: goto label_30ad4c;
        case 0x30ad50u: goto label_30ad50;
        case 0x30ad54u: goto label_30ad54;
        case 0x30ad58u: goto label_30ad58;
        case 0x30ad5cu: goto label_30ad5c;
        case 0x30ad60u: goto label_30ad60;
        case 0x30ad64u: goto label_30ad64;
        case 0x30ad68u: goto label_30ad68;
        case 0x30ad6cu: goto label_30ad6c;
        case 0x30ad70u: goto label_30ad70;
        case 0x30ad74u: goto label_30ad74;
        case 0x30ad78u: goto label_30ad78;
        case 0x30ad7cu: goto label_30ad7c;
        case 0x30ad80u: goto label_30ad80;
        case 0x30ad84u: goto label_30ad84;
        case 0x30ad88u: goto label_30ad88;
        case 0x30ad8cu: goto label_30ad8c;
        case 0x30ad90u: goto label_30ad90;
        case 0x30ad94u: goto label_30ad94;
        case 0x30ad98u: goto label_30ad98;
        case 0x30ad9cu: goto label_30ad9c;
        case 0x30ada0u: goto label_30ada0;
        case 0x30ada4u: goto label_30ada4;
        case 0x30ada8u: goto label_30ada8;
        case 0x30adacu: goto label_30adac;
        case 0x30adb0u: goto label_30adb0;
        case 0x30adb4u: goto label_30adb4;
        case 0x30adb8u: goto label_30adb8;
        case 0x30adbcu: goto label_30adbc;
        case 0x30adc0u: goto label_30adc0;
        case 0x30adc4u: goto label_30adc4;
        case 0x30adc8u: goto label_30adc8;
        case 0x30adccu: goto label_30adcc;
        case 0x30add0u: goto label_30add0;
        case 0x30add4u: goto label_30add4;
        case 0x30add8u: goto label_30add8;
        case 0x30addcu: goto label_30addc;
        case 0x30ade0u: goto label_30ade0;
        case 0x30ade4u: goto label_30ade4;
        case 0x30ade8u: goto label_30ade8;
        case 0x30adecu: goto label_30adec;
        case 0x30adf0u: goto label_30adf0;
        case 0x30adf4u: goto label_30adf4;
        case 0x30adf8u: goto label_30adf8;
        case 0x30adfcu: goto label_30adfc;
        case 0x30ae00u: goto label_30ae00;
        case 0x30ae04u: goto label_30ae04;
        case 0x30ae08u: goto label_30ae08;
        case 0x30ae0cu: goto label_30ae0c;
        case 0x30ae10u: goto label_30ae10;
        case 0x30ae14u: goto label_30ae14;
        case 0x30ae18u: goto label_30ae18;
        case 0x30ae1cu: goto label_30ae1c;
        case 0x30ae20u: goto label_30ae20;
        case 0x30ae24u: goto label_30ae24;
        case 0x30ae28u: goto label_30ae28;
        case 0x30ae2cu: goto label_30ae2c;
        case 0x30ae30u: goto label_30ae30;
        case 0x30ae34u: goto label_30ae34;
        case 0x30ae38u: goto label_30ae38;
        case 0x30ae3cu: goto label_30ae3c;
        case 0x30ae40u: goto label_30ae40;
        case 0x30ae44u: goto label_30ae44;
        case 0x30ae48u: goto label_30ae48;
        case 0x30ae4cu: goto label_30ae4c;
        case 0x30ae50u: goto label_30ae50;
        case 0x30ae54u: goto label_30ae54;
        case 0x30ae58u: goto label_30ae58;
        case 0x30ae5cu: goto label_30ae5c;
        case 0x30ae60u: goto label_30ae60;
        case 0x30ae64u: goto label_30ae64;
        case 0x30ae68u: goto label_30ae68;
        case 0x30ae6cu: goto label_30ae6c;
        case 0x30ae70u: goto label_30ae70;
        case 0x30ae74u: goto label_30ae74;
        case 0x30ae78u: goto label_30ae78;
        case 0x30ae7cu: goto label_30ae7c;
        case 0x30ae80u: goto label_30ae80;
        case 0x30ae84u: goto label_30ae84;
        case 0x30ae88u: goto label_30ae88;
        case 0x30ae8cu: goto label_30ae8c;
        case 0x30ae90u: goto label_30ae90;
        case 0x30ae94u: goto label_30ae94;
        case 0x30ae98u: goto label_30ae98;
        case 0x30ae9cu: goto label_30ae9c;
        case 0x30aea0u: goto label_30aea0;
        case 0x30aea4u: goto label_30aea4;
        case 0x30aea8u: goto label_30aea8;
        case 0x30aeacu: goto label_30aeac;
        case 0x30aeb0u: goto label_30aeb0;
        case 0x30aeb4u: goto label_30aeb4;
        case 0x30aeb8u: goto label_30aeb8;
        case 0x30aebcu: goto label_30aebc;
        case 0x30aec0u: goto label_30aec0;
        case 0x30aec4u: goto label_30aec4;
        case 0x30aec8u: goto label_30aec8;
        case 0x30aeccu: goto label_30aecc;
        case 0x30aed0u: goto label_30aed0;
        case 0x30aed4u: goto label_30aed4;
        case 0x30aed8u: goto label_30aed8;
        case 0x30aedcu: goto label_30aedc;
        case 0x30aee0u: goto label_30aee0;
        case 0x30aee4u: goto label_30aee4;
        case 0x30aee8u: goto label_30aee8;
        case 0x30aeecu: goto label_30aeec;
        case 0x30aef0u: goto label_30aef0;
        case 0x30aef4u: goto label_30aef4;
        case 0x30aef8u: goto label_30aef8;
        case 0x30aefcu: goto label_30aefc;
        case 0x30af00u: goto label_30af00;
        case 0x30af04u: goto label_30af04;
        case 0x30af08u: goto label_30af08;
        case 0x30af0cu: goto label_30af0c;
        case 0x30af10u: goto label_30af10;
        case 0x30af14u: goto label_30af14;
        case 0x30af18u: goto label_30af18;
        case 0x30af1cu: goto label_30af1c;
        case 0x30af20u: goto label_30af20;
        case 0x30af24u: goto label_30af24;
        case 0x30af28u: goto label_30af28;
        case 0x30af2cu: goto label_30af2c;
        default: break;
    }

    ctx->pc = 0x308740u;

label_308740:
    // 0x308740: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x308740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_308744:
    // 0x308744: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x308744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_308748:
    // 0x308748: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x308748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_30874c:
    // 0x30874c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_308750:
    // 0x308750: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x308750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_308754:
    // 0x308754: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x308754u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308758:
    // 0x308758: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x308758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_30875c:
    // 0x30875c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_308760:
    // 0x308760: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x308760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_308764:
    // 0x308764: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x308764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_308768:
    // 0x308768: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x308768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30876c:
    // 0x30876c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_308770:
    // 0x308770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_308774:
    // 0x308774: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_308778:
    // 0x308778: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x308778u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_30877c:
    // 0x30877c: 0x8c7689e8  lw          $s6, -0x7618($v1)
    ctx->pc = 0x30877cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_308780:
    // 0x308780: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x308780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_308784:
    // 0x308784: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x308784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_308788:
    // 0x308788: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x308788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_30878c:
    // 0x30878c: 0x8070007b  lb          $s0, 0x7B($v1)
    ctx->pc = 0x30878cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 123)));
label_308790:
    // 0x308790: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x308790u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_308794:
    // 0x308794: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x308794u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_308798:
    // 0x308798: 0x8e630e38  lw          $v1, 0xE38($s3)
    ctx->pc = 0x308798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_30879c:
    // 0x30879c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_3087a0:
    if (ctx->pc == 0x3087A0u) {
        ctx->pc = 0x3087A0u;
            // 0x3087a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3087A4u;
        goto label_3087a4;
    }
    ctx->pc = 0x30879Cu;
    {
        const bool branch_taken_0x30879c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3087A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30879Cu;
            // 0x3087a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30879c) {
            ctx->pc = 0x3087B8u;
            goto label_3087b8;
        }
    }
    ctx->pc = 0x3087A4u;
label_3087a4:
    // 0x3087a4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3087a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3087a8:
    // 0x3087a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3087ac:
    if (ctx->pc == 0x3087ACu) {
        ctx->pc = 0x3087B0u;
        goto label_3087b0;
    }
    ctx->pc = 0x3087A8u;
    {
        const bool branch_taken_0x3087a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3087a8) {
            ctx->pc = 0x3087B8u;
            goto label_3087b8;
        }
    }
    ctx->pc = 0x3087B0u;
label_3087b0:
    // 0x3087b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3087b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3087b4:
    // 0x3087b4: 0x0  nop
    ctx->pc = 0x3087b4u;
    // NOP
label_3087b8:
    // 0x3087b8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3087bc:
    if (ctx->pc == 0x3087BCu) {
        ctx->pc = 0x3087C0u;
        goto label_3087c0;
    }
    ctx->pc = 0x3087B8u;
    {
        const bool branch_taken_0x3087b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3087b8) {
            ctx->pc = 0x3087D8u;
            goto label_3087d8;
        }
    }
    ctx->pc = 0x3087C0u;
label_3087c0:
    // 0x3087c0: 0xc075eb4  jal         func_1D7AD0
label_3087c4:
    if (ctx->pc == 0x3087C4u) {
        ctx->pc = 0x3087C4u;
            // 0x3087c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3087C8u;
        goto label_3087c8;
    }
    ctx->pc = 0x3087C0u;
    SET_GPR_U32(ctx, 31, 0x3087C8u);
    ctx->pc = 0x3087C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3087C0u;
            // 0x3087c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3087C8u; }
        if (ctx->pc != 0x3087C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3087C8u; }
        if (ctx->pc != 0x3087C8u) { return; }
    }
    ctx->pc = 0x3087C8u;
label_3087c8:
    // 0x3087c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3087cc:
    if (ctx->pc == 0x3087CCu) {
        ctx->pc = 0x3087D0u;
        goto label_3087d0;
    }
    ctx->pc = 0x3087C8u;
    {
        const bool branch_taken_0x3087c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3087c8) {
            ctx->pc = 0x3087D8u;
            goto label_3087d8;
        }
    }
    ctx->pc = 0x3087D0u;
label_3087d0:
    // 0x3087d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3087d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3087d4:
    // 0x3087d4: 0x0  nop
    ctx->pc = 0x3087d4u;
    // NOP
label_3087d8:
    // 0x3087d8: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
label_3087dc:
    if (ctx->pc == 0x3087DCu) {
        ctx->pc = 0x3087E0u;
        goto label_3087e0;
    }
    ctx->pc = 0x3087D8u;
    {
        const bool branch_taken_0x3087d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3087d8) {
            ctx->pc = 0x3088B8u;
            goto label_3088b8;
        }
    }
    ctx->pc = 0x3087E0u;
label_3087e0:
    // 0x3087e0: 0x8e630da0  lw          $v1, 0xDA0($s3)
    ctx->pc = 0x3087e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_3087e4:
    // 0x3087e4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3087e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3087e8:
    // 0x3087e8: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_3087ec:
    if (ctx->pc == 0x3087ECu) {
        ctx->pc = 0x3087ECu;
            // 0x3087ec: 0x8e640a70  lw          $a0, 0xA70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2672)));
        ctx->pc = 0x3087F0u;
        goto label_3087f0;
    }
    ctx->pc = 0x3087E8u;
    {
        const bool branch_taken_0x3087e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3087e8) {
            ctx->pc = 0x3087ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3087E8u;
            // 0x3087ec: 0x8e640a70  lw          $a0, 0xA70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2672)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308898u;
            goto label_308898;
        }
    }
    ctx->pc = 0x3087F0u;
label_3087f0:
    // 0x3087f0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3087f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3087f4:
    // 0x3087f4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3087f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3087f8:
    // 0x3087f8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3087f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3087fc:
    // 0x3087fc: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x3087fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_308800:
    // 0x308800: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_308804:
    if (ctx->pc == 0x308804u) {
        ctx->pc = 0x308808u;
        goto label_308808;
    }
    ctx->pc = 0x308800u;
    {
        const bool branch_taken_0x308800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x308800) {
            ctx->pc = 0x308810u;
            goto label_308810;
        }
    }
    ctx->pc = 0x308808u;
label_308808:
    // 0x308808: 0x1000000b  b           . + 4 + (0xB << 2)
label_30880c:
    if (ctx->pc == 0x30880Cu) {
        ctx->pc = 0x308810u;
        goto label_308810;
    }
    ctx->pc = 0x308808u;
    {
        const bool branch_taken_0x308808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308808) {
            ctx->pc = 0x308838u;
            goto label_308838;
        }
    }
    ctx->pc = 0x308810u;
label_308810:
    // 0x308810: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x308810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_308814:
    // 0x308814: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x308814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_308818:
    // 0x308818: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_30881c:
    if (ctx->pc == 0x30881Cu) {
        ctx->pc = 0x308820u;
        goto label_308820;
    }
    ctx->pc = 0x308818u;
    {
        const bool branch_taken_0x308818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308818) {
            ctx->pc = 0x308838u;
            goto label_308838;
        }
    }
    ctx->pc = 0x308820u;
label_308820:
    // 0x308820: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_308824:
    // 0x308824: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x308824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_308828:
    // 0x308828: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x308828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_30882c:
    // 0x30882c: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x30882cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
label_308830:
    // 0x308830: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_308834:
    if (ctx->pc == 0x308834u) {
        ctx->pc = 0x308838u;
        goto label_308838;
    }
    ctx->pc = 0x308830u;
    {
        const bool branch_taken_0x308830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308830) {
            ctx->pc = 0x3088B8u;
            goto label_3088b8;
        }
    }
    ctx->pc = 0x308838u;
label_308838:
    // 0x308838: 0x8e620d9c  lw          $v0, 0xD9C($s3)
    ctx->pc = 0x308838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
label_30883c:
    // 0x30883c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x30883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_308840:
    // 0x308840: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_308844:
    if (ctx->pc == 0x308844u) {
        ctx->pc = 0x308844u;
            // 0x308844: 0x8ef90000  lw          $t9, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x308848u;
        goto label_308848;
    }
    ctx->pc = 0x308840u;
    {
        const bool branch_taken_0x308840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308840) {
            ctx->pc = 0x308844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308840u;
            // 0x308844: 0x8ef90000  lw          $t9, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308880u;
            goto label_308880;
        }
    }
    ctx->pc = 0x308848u;
label_308848:
    // 0x308848: 0xc074708  jal         func_1D1C20
label_30884c:
    if (ctx->pc == 0x30884Cu) {
        ctx->pc = 0x30884Cu;
            // 0x30884c: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x308850u;
        goto label_308850;
    }
    ctx->pc = 0x308848u;
    SET_GPR_U32(ctx, 31, 0x308850u);
    ctx->pc = 0x30884Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308848u;
            // 0x30884c: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308850u; }
        if (ctx->pc != 0x308850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308850u; }
        if (ctx->pc != 0x308850u) { return; }
    }
    ctx->pc = 0x308850u;
label_308850:
    // 0x308850: 0xc05cc84  jal         func_173210
label_308854:
    if (ctx->pc == 0x308854u) {
        ctx->pc = 0x308854u;
            // 0x308854: 0x8ec4018c  lw          $a0, 0x18C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 396)));
        ctx->pc = 0x308858u;
        goto label_308858;
    }
    ctx->pc = 0x308850u;
    SET_GPR_U32(ctx, 31, 0x308858u);
    ctx->pc = 0x308854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308850u;
            // 0x308854: 0x8ec4018c  lw          $a0, 0x18C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308858u; }
        if (ctx->pc != 0x308858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308858u; }
        if (ctx->pc != 0x308858u) { return; }
    }
    ctx->pc = 0x308858u;
label_308858:
    // 0x308858: 0x8ec40188  lw          $a0, 0x188($s6)
    ctx->pc = 0x308858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 392)));
label_30885c:
    // 0x30885c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x30885cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_308860:
    // 0x308860: 0xc05d85a  jal         func_176168
label_308864:
    if (ctx->pc == 0x308864u) {
        ctx->pc = 0x308864u;
            // 0x308864: 0x24a52c88  addiu       $a1, $a1, 0x2C88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11400));
        ctx->pc = 0x308868u;
        goto label_308868;
    }
    ctx->pc = 0x308860u;
    SET_GPR_U32(ctx, 31, 0x308868u);
    ctx->pc = 0x308864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308860u;
            // 0x308864: 0x24a52c88  addiu       $a1, $a1, 0x2C88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308868u; }
        if (ctx->pc != 0x308868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308868u; }
        if (ctx->pc != 0x308868u) { return; }
    }
    ctx->pc = 0x308868u;
label_308868:
    // 0x308868: 0x8ec40188  lw          $a0, 0x188($s6)
    ctx->pc = 0x308868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 392)));
label_30886c:
    // 0x30886c: 0xc05d416  jal         func_175058
label_308870:
    if (ctx->pc == 0x308870u) {
        ctx->pc = 0x308870u;
            // 0x308870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308874u;
        goto label_308874;
    }
    ctx->pc = 0x30886Cu;
    SET_GPR_U32(ctx, 31, 0x308874u);
    ctx->pc = 0x308870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30886Cu;
            // 0x308870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308874u; }
        if (ctx->pc != 0x308874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308874u; }
        if (ctx->pc != 0x308874u) { return; }
    }
    ctx->pc = 0x308874u;
label_308874:
    // 0x308874: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x308874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_308878:
    // 0x308878: 0xa2e20071  sb          $v0, 0x71($s7)
    ctx->pc = 0x308878u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 113), (uint8_t)GPR_U32(ctx, 2));
label_30887c:
    // 0x30887c: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x30887cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_308880:
    // 0x308880: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x308880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_308884:
    // 0x308884: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x308884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_308888:
    // 0x308888: 0x320f809  jalr        $t9
label_30888c:
    if (ctx->pc == 0x30888Cu) {
        ctx->pc = 0x30888Cu;
            // 0x30888c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x308890u;
        goto label_308890;
    }
    ctx->pc = 0x308888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308890u);
        ctx->pc = 0x30888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308888u;
            // 0x30888c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308890u; }
            if (ctx->pc != 0x308890u) { return; }
        }
        }
    }
    ctx->pc = 0x308890u;
label_308890:
    // 0x308890: 0x1000000d  b           . + 4 + (0xD << 2)
label_308894:
    if (ctx->pc == 0x308894u) {
        ctx->pc = 0x308898u;
        goto label_308898;
    }
    ctx->pc = 0x308890u;
    {
        const bool branch_taken_0x308890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308890) {
            ctx->pc = 0x3088C8u;
            goto label_3088c8;
        }
    }
    ctx->pc = 0x308898u;
label_308898:
    // 0x308898: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_30889c:
    if (ctx->pc == 0x30889Cu) {
        ctx->pc = 0x30889Cu;
            // 0x30889c: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x3088A0u;
        goto label_3088a0;
    }
    ctx->pc = 0x308898u;
    {
        const bool branch_taken_0x308898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308898u;
            // 0x30889c: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308898) {
            ctx->pc = 0x3088B8u;
            goto label_3088b8;
        }
    }
    ctx->pc = 0x3088A0u;
label_3088a0:
    // 0x3088a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3088a4:
    // 0x3088a4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3088a8:
    if (ctx->pc == 0x3088A8u) {
        ctx->pc = 0x3088ACu;
        goto label_3088ac;
    }
    ctx->pc = 0x3088A4u;
    {
        const bool branch_taken_0x3088a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3088a4) {
            ctx->pc = 0x3088B8u;
            goto label_3088b8;
        }
    }
    ctx->pc = 0x3088ACu;
label_3088ac:
    // 0x3088ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3088acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3088b0:
    // 0x3088b0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_3088b4:
    if (ctx->pc == 0x3088B4u) {
        ctx->pc = 0x3088B8u;
        goto label_3088b8;
    }
    ctx->pc = 0x3088B0u;
    {
        const bool branch_taken_0x3088b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3088b0) {
            ctx->pc = 0x3088C8u;
            goto label_3088c8;
        }
    }
    ctx->pc = 0x3088B8u;
label_3088b8:
    // 0x3088b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3088b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3088bc:
    // 0x3088bc: 0x290182b  sltu        $v1, $s4, $s0
    ctx->pc = 0x3088bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3088c0:
    // 0x3088c0: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
label_3088c4:
    if (ctx->pc == 0x3088C4u) {
        ctx->pc = 0x3088C4u;
            // 0x3088c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3088C8u;
        goto label_3088c8;
    }
    ctx->pc = 0x3088C0u;
    {
        const bool branch_taken_0x3088c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3088C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3088C0u;
            // 0x3088c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088c0) {
            ctx->pc = 0x308790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308790;
        }
    }
    ctx->pc = 0x3088C8u;
label_3088c8:
    // 0x3088c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3088c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3088cc:
    // 0x3088cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3088ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3088d0:
    // 0x3088d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3088d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3088d4:
    // 0x3088d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3088d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3088d8:
    // 0x3088d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3088d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3088dc:
    // 0x3088dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3088dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3088e0:
    // 0x3088e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3088e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3088e4:
    // 0x3088e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3088e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3088e8:
    // 0x3088e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3088e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3088ec:
    // 0x3088ec: 0x3e00008  jr          $ra
label_3088f0:
    if (ctx->pc == 0x3088F0u) {
        ctx->pc = 0x3088F0u;
            // 0x3088f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3088F4u;
        goto label_3088f4;
    }
    ctx->pc = 0x3088ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3088F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3088ECu;
            // 0x3088f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3088F4u;
label_3088f4:
    // 0x3088f4: 0x0  nop
    ctx->pc = 0x3088f4u;
    // NOP
label_3088f8:
    // 0x3088f8: 0x0  nop
    ctx->pc = 0x3088f8u;
    // NOP
label_3088fc:
    // 0x3088fc: 0x0  nop
    ctx->pc = 0x3088fcu;
    // NOP
label_308900:
    // 0x308900: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x308900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_308904:
    // 0x308904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x308904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_308908:
    // 0x308908: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x308908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_30890c:
    // 0x30890c: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x30890cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_308910:
    // 0x308910: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x308910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_308914:
    // 0x308914: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_308918:
    // 0x308918: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x308918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30891c:
    // 0x30891c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30891cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308920:
    // 0x308920: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x308920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_308924:
    // 0x308924: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x308924u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_308928:
    // 0x308928: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x308928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30892c:
    // 0x30892c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x30892cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_308930:
    // 0x308930: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x308930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_308934:
    // 0x308934: 0x8c9100c8  lw          $s1, 0xC8($a0)
    ctx->pc = 0x308934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_308938:
    // 0x308938: 0xc6200dec  lwc1        $f0, 0xDEC($s1)
    ctx->pc = 0x308938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30893c:
    // 0x30893c: 0x8e320df8  lw          $s2, 0xDF8($s1)
    ctx->pc = 0x30893cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3576)));
label_308940:
    // 0x308940: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x308940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_308944:
    // 0x308944: 0x4600151c  madd.s      $f20, $f2, $f0
    ctx->pc = 0x308944u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_308948:
    // 0x308948: 0xc04ce84  jal         func_133A10
label_30894c:
    if (ctx->pc == 0x30894Cu) {
        ctx->pc = 0x30894Cu;
            // 0x30894c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308950u;
        goto label_308950;
    }
    ctx->pc = 0x308948u;
    SET_GPR_U32(ctx, 31, 0x308950u);
    ctx->pc = 0x30894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308948u;
            // 0x30894c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308950u; }
        if (ctx->pc != 0x308950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308950u; }
        if (ctx->pc != 0x308950u) { return; }
    }
    ctx->pc = 0x308950u;
label_308950:
    // 0x308950: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x308950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_308954:
    // 0x308954: 0xc4412cd8  lwc1        $f1, 0x2CD8($v0)
    ctx->pc = 0x308954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_308958:
    // 0x308958: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x308958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_30895c:
    // 0x30895c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30895cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_308960:
    // 0x308960: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x308960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_308964:
    // 0x308964: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x308964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_308968:
    // 0x308968: 0xc04f2d4  jal         func_13CB50
label_30896c:
    if (ctx->pc == 0x30896Cu) {
        ctx->pc = 0x30896Cu;
            // 0x30896c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x308970u;
        goto label_308970;
    }
    ctx->pc = 0x308968u;
    SET_GPR_U32(ctx, 31, 0x308970u);
    ctx->pc = 0x30896Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308968u;
            // 0x30896c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308970u; }
        if (ctx->pc != 0x308970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308970u; }
        if (ctx->pc != 0x308970u) { return; }
    }
    ctx->pc = 0x308970u;
label_308970:
    // 0x308970: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x308970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_308974:
    // 0x308974: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x308974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_308978:
    // 0x308978: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x308978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_30897c:
    // 0x30897c: 0x320f809  jalr        $t9
label_308980:
    if (ctx->pc == 0x308980u) {
        ctx->pc = 0x308980u;
            // 0x308980: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x308984u;
        goto label_308984;
    }
    ctx->pc = 0x30897Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308984u);
        ctx->pc = 0x308980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30897Cu;
            // 0x308980: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308984u; }
            if (ctx->pc != 0x308984u) { return; }
        }
        }
    }
    ctx->pc = 0x308984u;
label_308984:
    // 0x308984: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x308984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308988:
    // 0x308988: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x308988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_30898c:
    // 0x30898c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x30898cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_308990:
    // 0x308990: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x308990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_308994:
    // 0x308994: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x308994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_308998:
    // 0x308998: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x308998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_30899c:
    // 0x30899c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30899cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3089a0:
    // 0x3089a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3089a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3089a4:
    // 0x3089a4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x3089a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3089a8:
    // 0x3089a8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3089ac:
    if (ctx->pc == 0x3089ACu) {
        ctx->pc = 0x3089ACu;
            // 0x3089ac: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x3089B0u;
        goto label_3089b0;
    }
    ctx->pc = 0x3089A8u;
    {
        const bool branch_taken_0x3089a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3089a8) {
            ctx->pc = 0x3089ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3089A8u;
            // 0x3089ac: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3089B8u;
            goto label_3089b8;
        }
    }
    ctx->pc = 0x3089B0u;
label_3089b0:
    // 0x3089b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3089b4:
    if (ctx->pc == 0x3089B4u) {
        ctx->pc = 0x3089B4u;
            // 0x3089b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3089B8u;
        goto label_3089b8;
    }
    ctx->pc = 0x3089B0u;
    {
        const bool branch_taken_0x3089b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3089B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3089B0u;
            // 0x3089b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089b0) {
            ctx->pc = 0x3089C0u;
            goto label_3089c0;
        }
    }
    ctx->pc = 0x3089B8u;
label_3089b8:
    // 0x3089b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3089b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3089bc:
    // 0x3089bc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3089bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3089c0:
    // 0x3089c0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3089c4:
    if (ctx->pc == 0x3089C4u) {
        ctx->pc = 0x3089C4u;
            // 0x3089c4: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x3089C8u;
        goto label_3089c8;
    }
    ctx->pc = 0x3089C0u;
    {
        const bool branch_taken_0x3089c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3089c0) {
            ctx->pc = 0x3089C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3089C0u;
            // 0x3089c4: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3089D8u;
            goto label_3089d8;
        }
    }
    ctx->pc = 0x3089C8u;
label_3089c8:
    // 0x3089c8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3089c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3089cc:
    // 0x3089cc: 0xc04cd60  jal         func_133580
label_3089d0:
    if (ctx->pc == 0x3089D0u) {
        ctx->pc = 0x3089D0u;
            // 0x3089d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3089D4u;
        goto label_3089d4;
    }
    ctx->pc = 0x3089CCu;
    SET_GPR_U32(ctx, 31, 0x3089D4u);
    ctx->pc = 0x3089D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3089CCu;
            // 0x3089d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3089D4u; }
        if (ctx->pc != 0x3089D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3089D4u; }
        if (ctx->pc != 0x3089D4u) { return; }
    }
    ctx->pc = 0x3089D4u;
label_3089d4:
    // 0x3089d4: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x3089d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3089d8:
    // 0x3089d8: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3089d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3089dc:
    // 0x3089dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3089dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3089e0:
    // 0x3089e0: 0x320f809  jalr        $t9
label_3089e4:
    if (ctx->pc == 0x3089E4u) {
        ctx->pc = 0x3089E4u;
            // 0x3089e4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x3089E8u;
        goto label_3089e8;
    }
    ctx->pc = 0x3089E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3089E8u);
        ctx->pc = 0x3089E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3089E0u;
            // 0x3089e4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3089E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3089E8u; }
            if (ctx->pc != 0x3089E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3089E8u;
label_3089e8:
    // 0x3089e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3089e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3089ec:
    // 0x3089ec: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3089ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3089f0:
    // 0x3089f0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3089f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3089f4:
    // 0x3089f4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3089f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3089f8:
    // 0x3089f8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3089fc:
    // 0x3089fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3089fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_308a00:
    // 0x308a00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_308a04:
    // 0x308a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308a08:
    // 0x308a08: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x308a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_308a0c:
    // 0x308a0c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_308a10:
    if (ctx->pc == 0x308A10u) {
        ctx->pc = 0x308A10u;
            // 0x308a10: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x308A14u;
        goto label_308a14;
    }
    ctx->pc = 0x308A0Cu;
    {
        const bool branch_taken_0x308a0c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x308a0c) {
            ctx->pc = 0x308A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308A0Cu;
            // 0x308a10: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308A1Cu;
            goto label_308a1c;
        }
    }
    ctx->pc = 0x308A14u;
label_308a14:
    // 0x308a14: 0x10000003  b           . + 4 + (0x3 << 2)
label_308a18:
    if (ctx->pc == 0x308A18u) {
        ctx->pc = 0x308A18u;
            // 0x308a18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308A1Cu;
        goto label_308a1c;
    }
    ctx->pc = 0x308A14u;
    {
        const bool branch_taken_0x308a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308A14u;
            // 0x308a18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a14) {
            ctx->pc = 0x308A24u;
            goto label_308a24;
        }
    }
    ctx->pc = 0x308A1Cu;
label_308a1c:
    // 0x308a1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x308a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_308a20:
    // 0x308a20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x308a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308a24:
    // 0x308a24: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_308a28:
    if (ctx->pc == 0x308A28u) {
        ctx->pc = 0x308A28u;
            // 0x308a28: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x308A2Cu;
        goto label_308a2c;
    }
    ctx->pc = 0x308A24u;
    {
        const bool branch_taken_0x308a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308a24) {
            ctx->pc = 0x308A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308A24u;
            // 0x308a28: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308A3Cu;
            goto label_308a3c;
        }
    }
    ctx->pc = 0x308A2Cu;
label_308a2c:
    // 0x308a2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x308a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_308a30:
    // 0x308a30: 0xc04cd60  jal         func_133580
label_308a34:
    if (ctx->pc == 0x308A34u) {
        ctx->pc = 0x308A34u;
            // 0x308a34: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308A38u;
        goto label_308a38;
    }
    ctx->pc = 0x308A30u;
    SET_GPR_U32(ctx, 31, 0x308A38u);
    ctx->pc = 0x308A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A30u;
            // 0x308a34: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A38u; }
        if (ctx->pc != 0x308A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A38u; }
        if (ctx->pc != 0x308A38u) { return; }
    }
    ctx->pc = 0x308A38u;
label_308a38:
    // 0x308a38: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x308a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_308a3c:
    // 0x308a3c: 0xc04ce84  jal         func_133A10
label_308a40:
    if (ctx->pc == 0x308A40u) {
        ctx->pc = 0x308A44u;
        goto label_308a44;
    }
    ctx->pc = 0x308A3Cu;
    SET_GPR_U32(ctx, 31, 0x308A44u);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A44u; }
        if (ctx->pc != 0x308A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A44u; }
        if (ctx->pc != 0x308A44u) { return; }
    }
    ctx->pc = 0x308A44u;
label_308a44:
    // 0x308a44: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x308a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_308a48:
    // 0x308a48: 0xc4412ce0  lwc1        $f1, 0x2CE0($v0)
    ctx->pc = 0x308a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_308a4c:
    // 0x308a4c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x308a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_308a50:
    // 0x308a50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x308a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_308a54:
    // 0x308a54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x308a54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_308a58:
    // 0x308a58: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x308a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_308a5c:
    // 0x308a5c: 0xc04f2d4  jal         func_13CB50
label_308a60:
    if (ctx->pc == 0x308A60u) {
        ctx->pc = 0x308A60u;
            // 0x308a60: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x308A64u;
        goto label_308a64;
    }
    ctx->pc = 0x308A5Cu;
    SET_GPR_U32(ctx, 31, 0x308A64u);
    ctx->pc = 0x308A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A5Cu;
            // 0x308a60: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A64u; }
        if (ctx->pc != 0x308A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A64u; }
        if (ctx->pc != 0x308A64u) { return; }
    }
    ctx->pc = 0x308A64u;
label_308a64:
    // 0x308a64: 0xc04ce84  jal         func_133A10
label_308a68:
    if (ctx->pc == 0x308A68u) {
        ctx->pc = 0x308A68u;
            // 0x308a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308A6Cu;
        goto label_308a6c;
    }
    ctx->pc = 0x308A64u;
    SET_GPR_U32(ctx, 31, 0x308A6Cu);
    ctx->pc = 0x308A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A64u;
            // 0x308a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A6Cu; }
        if (ctx->pc != 0x308A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A6Cu; }
        if (ctx->pc != 0x308A6Cu) { return; }
    }
    ctx->pc = 0x308A6Cu;
label_308a6c:
    // 0x308a6c: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x308a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_308a70:
    // 0x308a70: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x308a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308a74:
    // 0x308a74: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x308a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_308a78:
    // 0x308a78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x308a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308a7c:
    // 0x308a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_308a80:
    // 0x308a80: 0x0  nop
    ctx->pc = 0x308a80u;
    // NOP
label_308a84:
    // 0x308a84: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x308a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_308a88:
    // 0x308a88: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x308a88u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_308a8c:
    // 0x308a8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x308a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_308a90:
    // 0x308a90: 0xc04ce64  jal         func_133990
label_308a94:
    if (ctx->pc == 0x308A94u) {
        ctx->pc = 0x308A94u;
            // 0x308a94: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x308A98u;
        goto label_308a98;
    }
    ctx->pc = 0x308A90u;
    SET_GPR_U32(ctx, 31, 0x308A98u);
    ctx->pc = 0x308A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A90u;
            // 0x308a94: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A98u; }
        if (ctx->pc != 0x308A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A98u; }
        if (ctx->pc != 0x308A98u) { return; }
    }
    ctx->pc = 0x308A98u;
label_308a98:
    // 0x308a98: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x308a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_308a9c:
    // 0x308a9c: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x308a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_308aa0:
    // 0x308aa0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x308aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_308aa4:
    // 0x308aa4: 0x320f809  jalr        $t9
label_308aa8:
    if (ctx->pc == 0x308AA8u) {
        ctx->pc = 0x308AA8u;
            // 0x308aa8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x308AACu;
        goto label_308aac;
    }
    ctx->pc = 0x308AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308AACu);
        ctx->pc = 0x308AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308AA4u;
            // 0x308aa8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308AACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308AACu; }
            if (ctx->pc != 0x308AACu) { return; }
        }
        }
    }
    ctx->pc = 0x308AACu;
label_308aac:
    // 0x308aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x308aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308ab0:
    // 0x308ab0: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x308ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_308ab4:
    // 0x308ab4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x308ab4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_308ab8:
    // 0x308ab8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x308ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_308abc:
    // 0x308abc: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x308abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_308ac0:
    // 0x308ac0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x308ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_308ac4:
    // 0x308ac4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_308ac8:
    // 0x308ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308acc:
    // 0x308acc: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x308accu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_308ad0:
    // 0x308ad0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_308ad4:
    if (ctx->pc == 0x308AD4u) {
        ctx->pc = 0x308AD4u;
            // 0x308ad4: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x308AD8u;
        goto label_308ad8;
    }
    ctx->pc = 0x308AD0u;
    {
        const bool branch_taken_0x308ad0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x308ad0) {
            ctx->pc = 0x308AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308AD0u;
            // 0x308ad4: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308AE0u;
            goto label_308ae0;
        }
    }
    ctx->pc = 0x308AD8u;
label_308ad8:
    // 0x308ad8: 0x10000003  b           . + 4 + (0x3 << 2)
label_308adc:
    if (ctx->pc == 0x308ADCu) {
        ctx->pc = 0x308ADCu;
            // 0x308adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308AE0u;
        goto label_308ae0;
    }
    ctx->pc = 0x308AD8u;
    {
        const bool branch_taken_0x308ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308AD8u;
            // 0x308adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ad8) {
            ctx->pc = 0x308AE8u;
            goto label_308ae8;
        }
    }
    ctx->pc = 0x308AE0u;
label_308ae0:
    // 0x308ae0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x308ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_308ae4:
    // 0x308ae4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x308ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308ae8:
    // 0x308ae8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_308aec:
    if (ctx->pc == 0x308AECu) {
        ctx->pc = 0x308AECu;
            // 0x308aec: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x308AF0u;
        goto label_308af0;
    }
    ctx->pc = 0x308AE8u;
    {
        const bool branch_taken_0x308ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308ae8) {
            ctx->pc = 0x308AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308AE8u;
            // 0x308aec: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308B00u;
            goto label_308b00;
        }
    }
    ctx->pc = 0x308AF0u;
label_308af0:
    // 0x308af0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x308af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308af4:
    // 0x308af4: 0xc04cd60  jal         func_133580
label_308af8:
    if (ctx->pc == 0x308AF8u) {
        ctx->pc = 0x308AF8u;
            // 0x308af8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308AFCu;
        goto label_308afc;
    }
    ctx->pc = 0x308AF4u;
    SET_GPR_U32(ctx, 31, 0x308AFCu);
    ctx->pc = 0x308AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308AF4u;
            // 0x308af8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AFCu; }
        if (ctx->pc != 0x308AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AFCu; }
        if (ctx->pc != 0x308AFCu) { return; }
    }
    ctx->pc = 0x308AFCu;
label_308afc:
    // 0x308afc: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x308afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_308b00:
    // 0x308b00: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x308b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_308b04:
    // 0x308b04: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x308b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_308b08:
    // 0x308b08: 0x320f809  jalr        $t9
label_308b0c:
    if (ctx->pc == 0x308B0Cu) {
        ctx->pc = 0x308B0Cu;
            // 0x308b0c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x308B10u;
        goto label_308b10;
    }
    ctx->pc = 0x308B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308B10u);
        ctx->pc = 0x308B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308B08u;
            // 0x308b0c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308B10u; }
            if (ctx->pc != 0x308B10u) { return; }
        }
        }
    }
    ctx->pc = 0x308B10u;
label_308b10:
    // 0x308b10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x308b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308b14:
    // 0x308b14: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x308b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_308b18:
    // 0x308b18: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x308b18u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_308b1c:
    // 0x308b1c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x308b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_308b20:
    // 0x308b20: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x308b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_308b24:
    // 0x308b24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x308b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_308b28:
    // 0x308b28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_308b2c:
    // 0x308b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308b30:
    // 0x308b30: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x308b30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_308b34:
    // 0x308b34: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_308b38:
    if (ctx->pc == 0x308B38u) {
        ctx->pc = 0x308B38u;
            // 0x308b38: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x308B3Cu;
        goto label_308b3c;
    }
    ctx->pc = 0x308B34u;
    {
        const bool branch_taken_0x308b34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x308b34) {
            ctx->pc = 0x308B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308B34u;
            // 0x308b38: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308B44u;
            goto label_308b44;
        }
    }
    ctx->pc = 0x308B3Cu;
label_308b3c:
    // 0x308b3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_308b40:
    if (ctx->pc == 0x308B40u) {
        ctx->pc = 0x308B40u;
            // 0x308b40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308B44u;
        goto label_308b44;
    }
    ctx->pc = 0x308B3Cu;
    {
        const bool branch_taken_0x308b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308B3Cu;
            // 0x308b40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b3c) {
            ctx->pc = 0x308B4Cu;
            goto label_308b4c;
        }
    }
    ctx->pc = 0x308B44u;
label_308b44:
    // 0x308b44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x308b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_308b48:
    // 0x308b48: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x308b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308b4c:
    // 0x308b4c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_308b50:
    if (ctx->pc == 0x308B50u) {
        ctx->pc = 0x308B50u;
            // 0x308b50: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x308B54u;
        goto label_308b54;
    }
    ctx->pc = 0x308B4Cu;
    {
        const bool branch_taken_0x308b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b4c) {
            ctx->pc = 0x308B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308B4Cu;
            // 0x308b50: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308B64u;
            goto label_308b64;
        }
    }
    ctx->pc = 0x308B54u;
label_308b54:
    // 0x308b54: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x308b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308b58:
    // 0x308b58: 0xc04cd60  jal         func_133580
label_308b5c:
    if (ctx->pc == 0x308B5Cu) {
        ctx->pc = 0x308B5Cu;
            // 0x308b5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308B60u;
        goto label_308b60;
    }
    ctx->pc = 0x308B58u;
    SET_GPR_U32(ctx, 31, 0x308B60u);
    ctx->pc = 0x308B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308B58u;
            // 0x308b5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B60u; }
        if (ctx->pc != 0x308B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B60u; }
        if (ctx->pc != 0x308B60u) { return; }
    }
    ctx->pc = 0x308B60u;
label_308b60:
    // 0x308b60: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x308b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_308b64:
    // 0x308b64: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x308b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_308b68:
    // 0x308b68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x308b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_308b6c:
    // 0x308b6c: 0x320f809  jalr        $t9
label_308b70:
    if (ctx->pc == 0x308B70u) {
        ctx->pc = 0x308B70u;
            // 0x308b70: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x308B74u;
        goto label_308b74;
    }
    ctx->pc = 0x308B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308B74u);
        ctx->pc = 0x308B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308B6Cu;
            // 0x308b70: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308B74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308B74u; }
            if (ctx->pc != 0x308B74u) { return; }
        }
        }
    }
    ctx->pc = 0x308B74u;
label_308b74:
    // 0x308b74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x308b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308b78:
    // 0x308b78: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x308b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_308b7c:
    // 0x308b7c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x308b7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_308b80:
    // 0x308b80: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x308b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_308b84:
    // 0x308b84: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x308b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_308b88:
    // 0x308b88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x308b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_308b8c:
    // 0x308b8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_308b90:
    // 0x308b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308b94:
    // 0x308b94: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x308b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_308b98:
    // 0x308b98: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_308b9c:
    if (ctx->pc == 0x308B9Cu) {
        ctx->pc = 0x308B9Cu;
            // 0x308b9c: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x308BA0u;
        goto label_308ba0;
    }
    ctx->pc = 0x308B98u;
    {
        const bool branch_taken_0x308b98 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x308b98) {
            ctx->pc = 0x308B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308B98u;
            // 0x308b9c: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308BA8u;
            goto label_308ba8;
        }
    }
    ctx->pc = 0x308BA0u;
label_308ba0:
    // 0x308ba0: 0x10000003  b           . + 4 + (0x3 << 2)
label_308ba4:
    if (ctx->pc == 0x308BA4u) {
        ctx->pc = 0x308BA4u;
            // 0x308ba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308BA8u;
        goto label_308ba8;
    }
    ctx->pc = 0x308BA0u;
    {
        const bool branch_taken_0x308ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308BA0u;
            // 0x308ba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ba0) {
            ctx->pc = 0x308BB0u;
            goto label_308bb0;
        }
    }
    ctx->pc = 0x308BA8u;
label_308ba8:
    // 0x308ba8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x308ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_308bac:
    // 0x308bac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x308bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308bb0:
    // 0x308bb0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_308bb4:
    if (ctx->pc == 0x308BB4u) {
        ctx->pc = 0x308BB4u;
            // 0x308bb4: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x308BB8u;
        goto label_308bb8;
    }
    ctx->pc = 0x308BB0u;
    {
        const bool branch_taken_0x308bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308bb0) {
            ctx->pc = 0x308BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308BB0u;
            // 0x308bb4: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308BC8u;
            goto label_308bc8;
        }
    }
    ctx->pc = 0x308BB8u;
label_308bb8:
    // 0x308bb8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x308bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308bbc:
    // 0x308bbc: 0xc04cd60  jal         func_133580
label_308bc0:
    if (ctx->pc == 0x308BC0u) {
        ctx->pc = 0x308BC0u;
            // 0x308bc0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308BC4u;
        goto label_308bc4;
    }
    ctx->pc = 0x308BBCu;
    SET_GPR_U32(ctx, 31, 0x308BC4u);
    ctx->pc = 0x308BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308BBCu;
            // 0x308bc0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308BC4u; }
        if (ctx->pc != 0x308BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308BC4u; }
        if (ctx->pc != 0x308BC4u) { return; }
    }
    ctx->pc = 0x308BC4u;
label_308bc4:
    // 0x308bc4: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x308bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_308bc8:
    // 0x308bc8: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x308bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_308bcc:
    // 0x308bcc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x308bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_308bd0:
    // 0x308bd0: 0x320f809  jalr        $t9
label_308bd4:
    if (ctx->pc == 0x308BD4u) {
        ctx->pc = 0x308BD4u;
            // 0x308bd4: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x308BD8u;
        goto label_308bd8;
    }
    ctx->pc = 0x308BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308BD8u);
        ctx->pc = 0x308BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308BD0u;
            // 0x308bd4: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308BD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308BD8u; }
            if (ctx->pc != 0x308BD8u) { return; }
        }
        }
    }
    ctx->pc = 0x308BD8u;
label_308bd8:
    // 0x308bd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x308bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308bdc:
    // 0x308bdc: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x308bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_308be0:
    // 0x308be0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x308be0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_308be4:
    // 0x308be4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x308be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_308be8:
    // 0x308be8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x308be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_308bec:
    // 0x308bec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x308becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_308bf0:
    // 0x308bf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_308bf4:
    // 0x308bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308bf8:
    // 0x308bf8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x308bf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_308bfc:
    // 0x308bfc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_308c00:
    if (ctx->pc == 0x308C00u) {
        ctx->pc = 0x308C00u;
            // 0x308c00: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x308C04u;
        goto label_308c04;
    }
    ctx->pc = 0x308BFCu;
    {
        const bool branch_taken_0x308bfc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x308bfc) {
            ctx->pc = 0x308C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308BFCu;
            // 0x308c00: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308C0Cu;
            goto label_308c0c;
        }
    }
    ctx->pc = 0x308C04u;
label_308c04:
    // 0x308c04: 0x10000003  b           . + 4 + (0x3 << 2)
label_308c08:
    if (ctx->pc == 0x308C08u) {
        ctx->pc = 0x308C08u;
            // 0x308c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308C0Cu;
        goto label_308c0c;
    }
    ctx->pc = 0x308C04u;
    {
        const bool branch_taken_0x308c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308C04u;
            // 0x308c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c04) {
            ctx->pc = 0x308C14u;
            goto label_308c14;
        }
    }
    ctx->pc = 0x308C0Cu;
label_308c0c:
    // 0x308c0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x308c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_308c10:
    // 0x308c10: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x308c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308c14:
    // 0x308c14: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_308c18:
    if (ctx->pc == 0x308C18u) {
        ctx->pc = 0x308C18u;
            // 0x308c18: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x308C1Cu;
        goto label_308c1c;
    }
    ctx->pc = 0x308C14u;
    {
        const bool branch_taken_0x308c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c14) {
            ctx->pc = 0x308C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308C14u;
            // 0x308c18: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308C2Cu;
            goto label_308c2c;
        }
    }
    ctx->pc = 0x308C1Cu;
label_308c1c:
    // 0x308c1c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x308c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308c20:
    // 0x308c20: 0xc04cd60  jal         func_133580
label_308c24:
    if (ctx->pc == 0x308C24u) {
        ctx->pc = 0x308C24u;
            // 0x308c24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308C28u;
        goto label_308c28;
    }
    ctx->pc = 0x308C20u;
    SET_GPR_U32(ctx, 31, 0x308C28u);
    ctx->pc = 0x308C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308C20u;
            // 0x308c24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C28u; }
        if (ctx->pc != 0x308C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C28u; }
        if (ctx->pc != 0x308C28u) { return; }
    }
    ctx->pc = 0x308C28u;
label_308c28:
    // 0x308c28: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x308c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_308c2c:
    // 0x308c2c: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x308c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_308c30:
    // 0x308c30: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x308c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_308c34:
    // 0x308c34: 0x320f809  jalr        $t9
label_308c38:
    if (ctx->pc == 0x308C38u) {
        ctx->pc = 0x308C38u;
            // 0x308c38: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x308C3Cu;
        goto label_308c3c;
    }
    ctx->pc = 0x308C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308C3Cu);
        ctx->pc = 0x308C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308C34u;
            // 0x308c38: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308C3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308C3Cu; }
            if (ctx->pc != 0x308C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x308C3Cu;
label_308c3c:
    // 0x308c3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x308c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308c40:
    // 0x308c40: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x308c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_308c44:
    // 0x308c44: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x308c44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_308c48:
    // 0x308c48: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x308c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_308c4c:
    // 0x308c4c: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x308c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_308c50:
    // 0x308c50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_308c54:
    // 0x308c54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_308c58:
    // 0x308c58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x308c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_308c5c:
    // 0x308c5c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x308c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_308c60:
    // 0x308c60: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
label_308c64:
    if (ctx->pc == 0x308C64u) {
        ctx->pc = 0x308C64u;
            // 0x308c64: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->pc = 0x308C68u;
        goto label_308c68;
    }
    ctx->pc = 0x308C60u;
    {
        const bool branch_taken_0x308c60 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x308c60) {
            ctx->pc = 0x308C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308C60u;
            // 0x308c64: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308C70u;
            goto label_308c70;
        }
    }
    ctx->pc = 0x308C68u;
label_308c68:
    // 0x308c68: 0x10000003  b           . + 4 + (0x3 << 2)
label_308c6c:
    if (ctx->pc == 0x308C6Cu) {
        ctx->pc = 0x308C6Cu;
            // 0x308c6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308C70u;
        goto label_308c70;
    }
    ctx->pc = 0x308C68u;
    {
        const bool branch_taken_0x308c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308C68u;
            // 0x308c6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c68) {
            ctx->pc = 0x308C78u;
            goto label_308c78;
        }
    }
    ctx->pc = 0x308C70u;
label_308c70:
    // 0x308c70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x308c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_308c74:
    // 0x308c74: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x308c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_308c78:
    // 0x308c78: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_308c7c:
    if (ctx->pc == 0x308C7Cu) {
        ctx->pc = 0x308C7Cu;
            // 0x308c7c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x308C80u;
        goto label_308c80;
    }
    ctx->pc = 0x308C78u;
    {
        const bool branch_taken_0x308c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c78) {
            ctx->pc = 0x308C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308C78u;
            // 0x308c7c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308C90u;
            goto label_308c90;
        }
    }
    ctx->pc = 0x308C80u;
label_308c80:
    // 0x308c80: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308c84:
    // 0x308c84: 0xc04cd60  jal         func_133580
label_308c88:
    if (ctx->pc == 0x308C88u) {
        ctx->pc = 0x308C88u;
            // 0x308c88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308C8Cu;
        goto label_308c8c;
    }
    ctx->pc = 0x308C84u;
    SET_GPR_U32(ctx, 31, 0x308C8Cu);
    ctx->pc = 0x308C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308C84u;
            // 0x308c88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C8Cu; }
        if (ctx->pc != 0x308C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C8Cu; }
        if (ctx->pc != 0x308C8Cu) { return; }
    }
    ctx->pc = 0x308C8Cu;
label_308c8c:
    // 0x308c8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x308c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_308c90:
    // 0x308c90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x308c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_308c94:
    // 0x308c94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x308c94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308c98:
    // 0x308c98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x308c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_308c9c:
    // 0x308c9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x308c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_308ca0:
    // 0x308ca0: 0x3e00008  jr          $ra
label_308ca4:
    if (ctx->pc == 0x308CA4u) {
        ctx->pc = 0x308CA4u;
            // 0x308ca4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x308CA8u;
        goto label_308ca8;
    }
    ctx->pc = 0x308CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308CA0u;
            // 0x308ca4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308CA8u;
label_308ca8:
    // 0x308ca8: 0x0  nop
    ctx->pc = 0x308ca8u;
    // NOP
label_308cac:
    // 0x308cac: 0x0  nop
    ctx->pc = 0x308cacu;
    // NOP
label_308cb0:
    // 0x308cb0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x308cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_308cb4:
    // 0x308cb4: 0x3c0244e3  lui         $v0, 0x44E3
    ctx->pc = 0x308cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17635 << 16));
label_308cb8:
    // 0x308cb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x308cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_308cbc:
    // 0x308cbc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x308cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_308cc0:
    // 0x308cc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x308cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_308cc4:
    // 0x308cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308cc8:
    // 0x308cc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x308cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_308ccc:
    // 0x308ccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308cd0:
    // 0x308cd0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x308cd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_308cd4:
    // 0x308cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308cd8:
    // 0x308cd8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x308cd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_308cdc:
    // 0x308cdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x308cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308ce0:
    // 0x308ce0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x308ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_308ce4:
    // 0x308ce4: 0x8c7000c8  lw          $s0, 0xC8($v1)
    ctx->pc = 0x308ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_308ce8:
    // 0x308ce8: 0xc6010dc4  lwc1        $f1, 0xDC4($s0)
    ctx->pc = 0x308ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_308cec:
    // 0x308cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x308cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_308cf0:
    // 0x308cf0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x308cf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_308cf4:
    // 0x308cf4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x308cf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_308cf8:
    // 0x308cf8: 0xc04f308  jal         func_13CC20
label_308cfc:
    if (ctx->pc == 0x308CFCu) {
        ctx->pc = 0x308CFCu;
            // 0x308cfc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x308D00u;
        goto label_308d00;
    }
    ctx->pc = 0x308CF8u;
    SET_GPR_U32(ctx, 31, 0x308D00u);
    ctx->pc = 0x308CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308CF8u;
            // 0x308cfc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D00u; }
        if (ctx->pc != 0x308D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D00u; }
        if (ctx->pc != 0x308D00u) { return; }
    }
    ctx->pc = 0x308D00u;
label_308d00:
    // 0x308d00: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x308d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_308d04:
    // 0x308d04: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x308d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_308d08:
    // 0x308d08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x308d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_308d0c:
    // 0x308d0c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x308d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_308d10:
    // 0x308d10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x308d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_308d14:
    // 0x308d14: 0xc04f3fc  jal         func_13CFF0
label_308d18:
    if (ctx->pc == 0x308D18u) {
        ctx->pc = 0x308D18u;
            // 0x308d18: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x308D1Cu;
        goto label_308d1c;
    }
    ctx->pc = 0x308D14u;
    SET_GPR_U32(ctx, 31, 0x308D1Cu);
    ctx->pc = 0x308D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308D14u;
            // 0x308d18: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D1Cu; }
        if (ctx->pc != 0x308D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D1Cu; }
        if (ctx->pc != 0x308D1Cu) { return; }
    }
    ctx->pc = 0x308D1Cu;
label_308d1c:
    // 0x308d1c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x308d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_308d20:
    // 0x308d20: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x308d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_308d24:
    // 0x308d24: 0xc04cd60  jal         func_133580
label_308d28:
    if (ctx->pc == 0x308D28u) {
        ctx->pc = 0x308D28u;
            // 0x308d28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308D2Cu;
        goto label_308d2c;
    }
    ctx->pc = 0x308D24u;
    SET_GPR_U32(ctx, 31, 0x308D2Cu);
    ctx->pc = 0x308D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308D24u;
            // 0x308d28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D2Cu; }
        if (ctx->pc != 0x308D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D2Cu; }
        if (ctx->pc != 0x308D2Cu) { return; }
    }
    ctx->pc = 0x308D2Cu;
label_308d2c:
    // 0x308d2c: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x308d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_308d30:
    // 0x308d30: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x308d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_308d34:
    // 0x308d34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x308d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_308d38:
    // 0x308d38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x308d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_308d3c:
    // 0x308d3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x308d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_308d40:
    // 0x308d40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x308d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308d44:
    // 0x308d44: 0xc04ce64  jal         func_133990
label_308d48:
    if (ctx->pc == 0x308D48u) {
        ctx->pc = 0x308D48u;
            // 0x308d48: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x308D4Cu;
        goto label_308d4c;
    }
    ctx->pc = 0x308D44u;
    SET_GPR_U32(ctx, 31, 0x308D4Cu);
    ctx->pc = 0x308D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308D44u;
            // 0x308d48: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D4Cu; }
        if (ctx->pc != 0x308D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D4Cu; }
        if (ctx->pc != 0x308D4Cu) { return; }
    }
    ctx->pc = 0x308D4Cu;
label_308d4c:
    // 0x308d4c: 0xc6140dc0  lwc1        $f20, 0xDC0($s0)
    ctx->pc = 0x308d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_308d50:
    // 0x308d50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x308d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_308d54:
    // 0x308d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308d58:
    // 0x308d58: 0x0  nop
    ctx->pc = 0x308d58u;
    // NOP
label_308d5c:
    // 0x308d5c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x308d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_308d60:
    // 0x308d60: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_308d64:
    if (ctx->pc == 0x308D64u) {
        ctx->pc = 0x308D64u;
            // 0x308d64: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x308D68u;
        goto label_308d68;
    }
    ctx->pc = 0x308D60u;
    {
        const bool branch_taken_0x308d60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x308d60) {
            ctx->pc = 0x308D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308D60u;
            // 0x308d64: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308D70u;
            goto label_308d70;
        }
    }
    ctx->pc = 0x308D68u;
label_308d68:
    // 0x308d68: 0x10000007  b           . + 4 + (0x7 << 2)
label_308d6c:
    if (ctx->pc == 0x308D6Cu) {
        ctx->pc = 0x308D6Cu;
            // 0x308d6c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x308D70u;
        goto label_308d70;
    }
    ctx->pc = 0x308D68u;
    {
        const bool branch_taken_0x308d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308D68u;
            // 0x308d6c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d68) {
            ctx->pc = 0x308D88u;
            goto label_308d88;
        }
    }
    ctx->pc = 0x308D70u;
label_308d70:
    // 0x308d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308d74:
    // 0x308d74: 0x0  nop
    ctx->pc = 0x308d74u;
    // NOP
label_308d78:
    // 0x308d78: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x308d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_308d7c:
    // 0x308d7c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_308d80:
    if (ctx->pc == 0x308D80u) {
        ctx->pc = 0x308D80u;
            // 0x308d80: 0xc6010dd4  lwc1        $f1, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x308D84u;
        goto label_308d84;
    }
    ctx->pc = 0x308D7Cu;
    {
        const bool branch_taken_0x308d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308d7c) {
            ctx->pc = 0x308D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308D7Cu;
            // 0x308d80: 0xc6010dd4  lwc1        $f1, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x308D8Cu;
            goto label_308d8c;
        }
    }
    ctx->pc = 0x308D84u;
label_308d84:
    // 0x308d84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x308d84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_308d88:
    // 0x308d88: 0xc6010dd4  lwc1        $f1, 0xDD4($s0)
    ctx->pc = 0x308d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_308d8c:
    // 0x308d8c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x308d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_308d90:
    // 0x308d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308d94:
    // 0x308d94: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x308d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
label_308d98:
    // 0x308d98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x308d98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_308d9c:
    // 0x308d9c: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x308d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_308da0:
    // 0x308da0: 0x0  nop
    ctx->pc = 0x308da0u;
    // NOP
label_308da4:
    // 0x308da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308da8:
    // 0x308da8: 0xc0477a8  jal         func_11DEA0
label_308dac:
    if (ctx->pc == 0x308DACu) {
        ctx->pc = 0x308DACu;
            // 0x308dac: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x308DB0u;
        goto label_308db0;
    }
    ctx->pc = 0x308DA8u;
    SET_GPR_U32(ctx, 31, 0x308DB0u);
    ctx->pc = 0x308DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308DA8u;
            // 0x308dac: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DB0u; }
        if (ctx->pc != 0x308DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DB0u; }
        if (ctx->pc != 0x308DB0u) { return; }
    }
    ctx->pc = 0x308DB0u;
label_308db0:
    // 0x308db0: 0xc6030dd4  lwc1        $f3, 0xDD4($s0)
    ctx->pc = 0x308db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_308db4:
    // 0x308db4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x308db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_308db8:
    // 0x308db8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x308db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_308dbc:
    // 0x308dbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x308dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_308dc0:
    // 0x308dc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x308dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_308dc4:
    // 0x308dc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x308dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308dc8:
    // 0x308dc8: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x308dc8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_308dcc:
    // 0x308dcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_308dd0:
    // 0x308dd0: 0x0  nop
    ctx->pc = 0x308dd0u;
    // NOP
label_308dd4:
    // 0x308dd4: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x308dd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_308dd8:
    // 0x308dd8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x308dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_308ddc:
    // 0x308ddc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x308ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_308de0:
    // 0x308de0: 0xc6020dec  lwc1        $f2, 0xDEC($s0)
    ctx->pc = 0x308de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_308de4:
    // 0x308de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_308de8:
    // 0x308de8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x308de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_308dec:
    // 0x308dec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x308decu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_308df0:
    // 0x308df0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x308df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_308df4:
    // 0x308df4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x308df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_308df8:
    // 0x308df8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x308df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_308dfc:
    // 0x308dfc: 0x4600a342  mul.s       $f13, $f20, $f0
    ctx->pc = 0x308dfcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_308e00:
    // 0x308e00: 0xc04ce64  jal         func_133990
label_308e04:
    if (ctx->pc == 0x308E04u) {
        ctx->pc = 0x308E04u;
            // 0x308e04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x308E08u;
        goto label_308e08;
    }
    ctx->pc = 0x308E00u;
    SET_GPR_U32(ctx, 31, 0x308E08u);
    ctx->pc = 0x308E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E00u;
            // 0x308e04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E08u; }
        if (ctx->pc != 0x308E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E08u; }
        if (ctx->pc != 0x308E08u) { return; }
    }
    ctx->pc = 0x308E08u;
label_308e08:
    // 0x308e08: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x308e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_308e0c:
    // 0x308e0c: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x308e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_308e10:
    // 0x308e10: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x308e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_308e14:
    // 0x308e14: 0x320f809  jalr        $t9
label_308e18:
    if (ctx->pc == 0x308E18u) {
        ctx->pc = 0x308E18u;
            // 0x308e18: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x308E1Cu;
        goto label_308e1c;
    }
    ctx->pc = 0x308E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308E1Cu);
        ctx->pc = 0x308E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308E14u;
            // 0x308e18: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308E1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308E1Cu; }
            if (ctx->pc != 0x308E1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x308E1Cu;
label_308e1c:
    // 0x308e1c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x308e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_308e20:
    // 0x308e20: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x308e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_308e24:
    // 0x308e24: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x308e24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_308e28:
    // 0x308e28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x308e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_308e2c:
    // 0x308e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308e30:
    // 0x308e30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x308e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_308e34:
    // 0x308e34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_308e38:
    // 0x308e38: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x308e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_308e3c:
    // 0x308e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308e40:
    // 0x308e40: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x308e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_308e44:
    // 0x308e44: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_308e48:
    if (ctx->pc == 0x308E48u) {
        ctx->pc = 0x308E48u;
            // 0x308e48: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x308E4Cu;
        goto label_308e4c;
    }
    ctx->pc = 0x308E44u;
    {
        const bool branch_taken_0x308e44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x308e44) {
            ctx->pc = 0x308E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308E44u;
            // 0x308e48: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308E54u;
            goto label_308e54;
        }
    }
    ctx->pc = 0x308E4Cu;
label_308e4c:
    // 0x308e4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_308e50:
    if (ctx->pc == 0x308E50u) {
        ctx->pc = 0x308E50u;
            // 0x308e50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308E54u;
        goto label_308e54;
    }
    ctx->pc = 0x308E4Cu;
    {
        const bool branch_taken_0x308e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308E4Cu;
            // 0x308e50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e4c) {
            ctx->pc = 0x308E5Cu;
            goto label_308e5c;
        }
    }
    ctx->pc = 0x308E54u;
label_308e54:
    // 0x308e54: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x308e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_308e58:
    // 0x308e58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x308e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_308e5c:
    // 0x308e5c: 0xc04cce8  jal         func_1333A0
label_308e60:
    if (ctx->pc == 0x308E60u) {
        ctx->pc = 0x308E60u;
            // 0x308e60: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x308E64u;
        goto label_308e64;
    }
    ctx->pc = 0x308E5Cu;
    SET_GPR_U32(ctx, 31, 0x308E64u);
    ctx->pc = 0x308E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E5Cu;
            // 0x308e60: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E64u; }
        if (ctx->pc != 0x308E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E64u; }
        if (ctx->pc != 0x308E64u) { return; }
    }
    ctx->pc = 0x308E64u;
label_308e64:
    // 0x308e64: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x308e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_308e68:
    // 0x308e68: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x308e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308e6c:
    // 0x308e6c: 0xc04ce80  jal         func_133A00
label_308e70:
    if (ctx->pc == 0x308E70u) {
        ctx->pc = 0x308E70u;
            // 0x308e70: 0x24a52d20  addiu       $a1, $a1, 0x2D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11552));
        ctx->pc = 0x308E74u;
        goto label_308e74;
    }
    ctx->pc = 0x308E6Cu;
    SET_GPR_U32(ctx, 31, 0x308E74u);
    ctx->pc = 0x308E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E6Cu;
            // 0x308e70: 0x24a52d20  addiu       $a1, $a1, 0x2D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E74u; }
        if (ctx->pc != 0x308E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E74u; }
        if (ctx->pc != 0x308E74u) { return; }
    }
    ctx->pc = 0x308E74u;
label_308e74:
    // 0x308e74: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x308e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_308e78:
    // 0x308e78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x308e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_308e7c:
    // 0x308e7c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x308e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308e80:
    // 0x308e80: 0xc04cca0  jal         func_133280
label_308e84:
    if (ctx->pc == 0x308E84u) {
        ctx->pc = 0x308E84u;
            // 0x308e84: 0x24c62d10  addiu       $a2, $a2, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11536));
        ctx->pc = 0x308E88u;
        goto label_308e88;
    }
    ctx->pc = 0x308E80u;
    SET_GPR_U32(ctx, 31, 0x308E88u);
    ctx->pc = 0x308E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E80u;
            // 0x308e84: 0x24c62d10  addiu       $a2, $a2, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E88u; }
        if (ctx->pc != 0x308E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E88u; }
        if (ctx->pc != 0x308E88u) { return; }
    }
    ctx->pc = 0x308E88u;
label_308e88:
    // 0x308e88: 0x3c02458e  lui         $v0, 0x458E
    ctx->pc = 0x308e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17806 << 16));
label_308e8c:
    // 0x308e8c: 0x34423800  ori         $v0, $v0, 0x3800
    ctx->pc = 0x308e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
label_308e90:
    // 0x308e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308e94:
    // 0x308e94: 0x0  nop
    ctx->pc = 0x308e94u;
    // NOP
label_308e98:
    // 0x308e98: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x308e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_308e9c:
    // 0x308e9c: 0xc6000dec  lwc1        $f0, 0xDEC($s0)
    ctx->pc = 0x308e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_308ea0:
    // 0x308ea0: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x308ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_308ea4:
    // 0x308ea4: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x308ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_308ea8:
    // 0x308ea8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x308ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_308eac:
    // 0x308eac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x308eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_308eb0:
    // 0x308eb0: 0xc7ae0048  lwc1        $f14, 0x48($sp)
    ctx->pc = 0x308eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_308eb4:
    // 0x308eb4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x308eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_308eb8:
    // 0x308eb8: 0xc04f3bc  jal         func_13CEF0
label_308ebc:
    if (ctx->pc == 0x308EBCu) {
        ctx->pc = 0x308EBCu;
            // 0x308ebc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x308EC0u;
        goto label_308ec0;
    }
    ctx->pc = 0x308EB8u;
    SET_GPR_U32(ctx, 31, 0x308EC0u);
    ctx->pc = 0x308EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308EB8u;
            // 0x308ebc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CEF0u;
    if (runtime->hasFunction(0x13CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308EC0u; }
        if (ctx->pc != 0x308EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CEF0_0x13cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308EC0u; }
        if (ctx->pc != 0x308EC0u) { return; }
    }
    ctx->pc = 0x308EC0u;
label_308ec0:
    // 0x308ec0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x308ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_308ec4:
    // 0x308ec4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x308ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_308ec8:
    // 0x308ec8: 0xc04cd60  jal         func_133580
label_308ecc:
    if (ctx->pc == 0x308ECCu) {
        ctx->pc = 0x308ECCu;
            // 0x308ecc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308ED0u;
        goto label_308ed0;
    }
    ctx->pc = 0x308EC8u;
    SET_GPR_U32(ctx, 31, 0x308ED0u);
    ctx->pc = 0x308ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308EC8u;
            // 0x308ecc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308ED0u; }
        if (ctx->pc != 0x308ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308ED0u; }
        if (ctx->pc != 0x308ED0u) { return; }
    }
    ctx->pc = 0x308ED0u;
label_308ed0:
    // 0x308ed0: 0xc6060de4  lwc1        $f6, 0xDE4($s0)
    ctx->pc = 0x308ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_308ed4:
    // 0x308ed4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x308ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308ed8:
    // 0x308ed8: 0x0  nop
    ctx->pc = 0x308ed8u;
    // NOP
label_308edc:
    // 0x308edc: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x308edcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_308ee0:
    // 0x308ee0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_308ee4:
    if (ctx->pc == 0x308EE4u) {
        ctx->pc = 0x308EE4u;
            // 0x308ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x308EE8u;
        goto label_308ee8;
    }
    ctx->pc = 0x308EE0u;
    {
        const bool branch_taken_0x308ee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x308EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308EE0u;
            // 0x308ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ee0) {
            ctx->pc = 0x308EECu;
            goto label_308eec;
        }
    }
    ctx->pc = 0x308EE8u;
label_308ee8:
    // 0x308ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308eec:
    // 0x308eec: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_308ef0:
    if (ctx->pc == 0x308EF0u) {
        ctx->pc = 0x308EF0u;
            // 0x308ef0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x308EF4u;
        goto label_308ef4;
    }
    ctx->pc = 0x308EECu;
    {
        const bool branch_taken_0x308eec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x308eec) {
            ctx->pc = 0x308EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308EECu;
            // 0x308ef0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308F00u;
            goto label_308f00;
        }
    }
    ctx->pc = 0x308EF4u;
label_308ef4:
    // 0x308ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308ef8:
    // 0x308ef8: 0x10000007  b           . + 4 + (0x7 << 2)
label_308efc:
    if (ctx->pc == 0x308EFCu) {
        ctx->pc = 0x308EFCu;
            // 0x308efc: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x308F00u;
        goto label_308f00;
    }
    ctx->pc = 0x308EF8u;
    {
        const bool branch_taken_0x308ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308EF8u;
            // 0x308efc: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ef8) {
            ctx->pc = 0x308F18u;
            goto label_308f18;
        }
    }
    ctx->pc = 0x308F00u;
label_308f00:
    // 0x308f00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x308f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_308f04:
    // 0x308f04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x308f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_308f08:
    // 0x308f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x308f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308f0c:
    // 0x308f0c: 0x0  nop
    ctx->pc = 0x308f0cu;
    // NOP
label_308f10:
    // 0x308f10: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x308f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_308f14:
    // 0x308f14: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x308f14u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_308f18:
    // 0x308f18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x308f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_308f1c:
    // 0x308f1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x308f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_308f20:
    // 0x308f20: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x308f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_308f24:
    // 0x308f24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x308f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_308f28:
    // 0x308f28: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x308f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_308f2c:
    // 0x308f2c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x308f2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_308f30:
    // 0x308f30: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x308f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_308f34:
    // 0x308f34: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x308f34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_308f38:
    // 0x308f38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x308f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_308f3c:
    // 0x308f3c: 0x460230c2  mul.s       $f3, $f6, $f2
    ctx->pc = 0x308f3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_308f40:
    // 0x308f40: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x308f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_308f44:
    // 0x308f44: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x308f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_308f48:
    // 0x308f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_308f4c:
    // 0x308f4c: 0xc6220070  lwc1        $f2, 0x70($s1)
    ctx->pc = 0x308f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_308f50:
    // 0x308f50: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x308f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_308f54:
    // 0x308f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308f58:
    // 0x308f58: 0x0  nop
    ctx->pc = 0x308f58u;
    // NOP
label_308f5c:
    // 0x308f5c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x308f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_308f60:
    // 0x308f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x308f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_308f64:
    // 0x308f64: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_308f68:
    if (ctx->pc == 0x308F68u) {
        ctx->pc = 0x308F68u;
            // 0x308f68: 0xe6210070  swc1        $f1, 0x70($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->pc = 0x308F6Cu;
        goto label_308f6c;
    }
    ctx->pc = 0x308F64u;
    {
        const bool branch_taken_0x308f64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x308F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308F64u;
            // 0x308f68: 0xe6210070  swc1        $f1, 0x70($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f64) {
            ctx->pc = 0x308F74u;
            goto label_308f74;
        }
    }
    ctx->pc = 0x308F6Cu;
label_308f6c:
    // 0x308f6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x308f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_308f70:
    // 0x308f70: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x308f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_308f74:
    // 0x308f74: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x308f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_308f78:
    // 0x308f78: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x308f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_308f7c:
    // 0x308f7c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x308f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_308f80:
    // 0x308f80: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x308f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_308f84:
    // 0x308f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308f88:
    // 0x308f88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x308f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_308f8c:
    // 0x308f8c: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x308f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_308f90:
    // 0x308f90: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x308f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_308f94:
    // 0x308f94: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x308f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_308f98:
    // 0x308f98: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x308f98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308f9c:
    // 0x308f9c: 0x0  nop
    ctx->pc = 0x308f9cu;
    // NOP
label_308fa0:
    // 0x308fa0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x308fa0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_308fa4:
    // 0x308fa4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x308fa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308fa8:
    // 0x308fa8: 0x0  nop
    ctx->pc = 0x308fa8u;
    // NOP
label_308fac:
    // 0x308fac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x308facu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_308fb0:
    // 0x308fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x308fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308fb4:
    // 0x308fb4: 0x0  nop
    ctx->pc = 0x308fb4u;
    // NOP
label_308fb8:
    // 0x308fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x308fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_308fbc:
    // 0x308fbc: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x308fbcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
label_308fc0:
    // 0x308fc0: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x308fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_308fc4:
    // 0x308fc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_308fc8:
    // 0x308fc8: 0xc0477a8  jal         func_11DEA0
label_308fcc:
    if (ctx->pc == 0x308FCCu) {
        ctx->pc = 0x308FCCu;
            // 0x308fcc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x308FD0u;
        goto label_308fd0;
    }
    ctx->pc = 0x308FC8u;
    SET_GPR_U32(ctx, 31, 0x308FD0u);
    ctx->pc = 0x308FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308FC8u;
            // 0x308fcc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308FD0u; }
        if (ctx->pc != 0x308FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308FD0u; }
        if (ctx->pc != 0x308FD0u) { return; }
    }
    ctx->pc = 0x308FD0u;
label_308fd0:
    // 0x308fd0: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x308fd0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_308fd4:
    // 0x308fd4: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x308fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_308fd8:
    // 0x308fd8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x308fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_308fdc:
    // 0x308fdc: 0xc6220074  lwc1        $f2, 0x74($s1)
    ctx->pc = 0x308fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_308fe0:
    // 0x308fe0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x308fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_308fe4:
    // 0x308fe4: 0xc6040dec  lwc1        $f4, 0xDEC($s0)
    ctx->pc = 0x308fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_308fe8:
    // 0x308fe8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x308fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_308fec:
    // 0x308fec: 0x0  nop
    ctx->pc = 0x308fecu;
    // NOP
label_308ff0:
    // 0x308ff0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x308ff0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_308ff4:
    // 0x308ff4: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x308ff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_308ff8:
    // 0x308ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_308ffc:
    // 0x308ffc: 0x0  nop
    ctx->pc = 0x308ffcu;
    // NOP
label_309000:
    // 0x309000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309004:
    // 0x309004: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_309008:
    if (ctx->pc == 0x309008u) {
        ctx->pc = 0x309008u;
            // 0x309008: 0xe6210074  swc1        $f1, 0x74($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->pc = 0x30900Cu;
        goto label_30900c;
    }
    ctx->pc = 0x309004u;
    {
        const bool branch_taken_0x309004 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309004u;
            // 0x309008: 0xe6210074  swc1        $f1, 0x74($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309004) {
            ctx->pc = 0x309014u;
            goto label_309014;
        }
    }
    ctx->pc = 0x30900Cu;
label_30900c:
    // 0x30900c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30900cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_309010:
    // 0x309010: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x309010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_309014:
    // 0x309014: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x309014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_309018:
    // 0x309018: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x309018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30901c:
    // 0x30901c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30901cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309020:
    // 0x309020: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x309020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_309024:
    // 0x309024: 0x46040d02  mul.s       $f20, $f1, $f4
    ctx->pc = 0x309024u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_309028:
    // 0x309028: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x309028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_30902c:
    // 0x30902c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x30902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_309030:
    // 0x309030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309034:
    // 0x309034: 0xc0477a8  jal         func_11DEA0
label_309038:
    if (ctx->pc == 0x309038u) {
        ctx->pc = 0x309038u;
            // 0x309038: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x30903Cu;
        goto label_30903c;
    }
    ctx->pc = 0x309034u;
    SET_GPR_U32(ctx, 31, 0x30903Cu);
    ctx->pc = 0x309038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309034u;
            // 0x309038: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30903Cu; }
        if (ctx->pc != 0x30903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30903Cu; }
        if (ctx->pc != 0x30903Cu) { return; }
    }
    ctx->pc = 0x30903Cu;
label_30903c:
    // 0x30903c: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x30903cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_309040:
    // 0x309040: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x309040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_309044:
    // 0x309044: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x309044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309048:
    // 0x309048: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x309048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_30904c:
    // 0x30904c: 0xc04ce64  jal         func_133990
label_309050:
    if (ctx->pc == 0x309050u) {
        ctx->pc = 0x309050u;
            // 0x309050: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x309054u;
        goto label_309054;
    }
    ctx->pc = 0x30904Cu;
    SET_GPR_U32(ctx, 31, 0x309054u);
    ctx->pc = 0x309050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30904Cu;
            // 0x309050: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309054u; }
        if (ctx->pc != 0x309054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309054u; }
        if (ctx->pc != 0x309054u) { return; }
    }
    ctx->pc = 0x309054u;
label_309054:
    // 0x309054: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x309054u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_309058:
    // 0x309058: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x309058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30905c:
    // 0x30905c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x30905cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_309060:
    // 0x309060: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x309060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_309064:
    // 0x309064: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x309064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_309068:
    // 0x309068: 0xc04cd60  jal         func_133580
label_30906c:
    if (ctx->pc == 0x30906Cu) {
        ctx->pc = 0x30906Cu;
            // 0x30906c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309070u;
        goto label_309070;
    }
    ctx->pc = 0x309068u;
    SET_GPR_U32(ctx, 31, 0x309070u);
    ctx->pc = 0x30906Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309068u;
            // 0x30906c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309070u; }
        if (ctx->pc != 0x309070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309070u; }
        if (ctx->pc != 0x309070u) { return; }
    }
    ctx->pc = 0x309070u;
label_309070:
    // 0x309070: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x309070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_309074:
    // 0x309074: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x309074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_309078:
    // 0x309078: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x309078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30907c:
    // 0x30907c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_309080:
    // 0x309080: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x309080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_309084:
    // 0x309084: 0x3e00008  jr          $ra
label_309088:
    if (ctx->pc == 0x309088u) {
        ctx->pc = 0x309088u;
            // 0x309088: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x30908Cu;
        goto label_30908c;
    }
    ctx->pc = 0x309084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309084u;
            // 0x309088: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30908Cu;
label_30908c:
    // 0x30908c: 0x0  nop
    ctx->pc = 0x30908cu;
    // NOP
label_309090:
    // 0x309090: 0x8102f00  j           func_40BC00
label_309094:
    if (ctx->pc == 0x309094u) {
        ctx->pc = 0x309098u;
        goto label_309098;
    }
    ctx->pc = 0x309090u;
    ctx->pc = 0x40BC00u;
    if (runtime->hasFunction(0x40BC00u)) {
        auto targetFn = runtime->lookupFunction(0x40BC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0040BC00_0x40bc00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x309098u;
label_309098:
    // 0x309098: 0x0  nop
    ctx->pc = 0x309098u;
    // NOP
label_30909c:
    // 0x30909c: 0x0  nop
    ctx->pc = 0x30909cu;
    // NOP
label_3090a0:
    // 0x3090a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3090a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3090a4:
    // 0x3090a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3090a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3090a8:
    // 0x3090a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3090a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3090ac:
    // 0x3090ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3090acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3090b0:
    // 0x3090b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3090b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3090b4:
    // 0x3090b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3090b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3090b8:
    // 0x3090b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3090b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3090bc:
    // 0x3090bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3090bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3090c0:
    // 0x3090c0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3090c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3090c4:
    // 0x3090c4: 0xc461f290  lwc1        $f1, -0xD70($v1)
    ctx->pc = 0x3090c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3090c8:
    // 0x3090c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3090c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_3090cc:
    // 0x3090cc: 0x8cb100c8  lw          $s1, 0xC8($a1)
    ctx->pc = 0x3090ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_3090d0:
    // 0x3090d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3090d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3090d4:
    // 0x3090d4: 0xc460f298  lwc1        $f0, -0xD68($v1)
    ctx->pc = 0x3090d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3090d8:
    // 0x3090d8: 0xc482f294  lwc1        $f2, -0xD6C($a0)
    ctx->pc = 0x3090d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294963860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3090dc:
    // 0x3090dc: 0x8e320550  lw          $s2, 0x550($s1)
    ctx->pc = 0x3090dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3090e0:
    // 0x3090e0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3090e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3090e4:
    // 0x3090e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3090e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3090e8:
    // 0x3090e8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x3090e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3090ec:
    // 0x3090ec: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3090ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3090f0:
    // 0x3090f0: 0xc461f29c  lwc1        $f1, -0xD64($v1)
    ctx->pc = 0x3090f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3090f4:
    // 0x3090f4: 0xc6240dc4  lwc1        $f4, 0xDC4($s1)
    ctx->pc = 0x3090f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3090f8:
    // 0x3090f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3090f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3090fc:
    // 0x3090fc: 0x0  nop
    ctx->pc = 0x3090fcu;
    // NOP
label_309100:
    // 0x309100: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x309100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_309104:
    // 0x309104: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x309104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309108:
    // 0x309108: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30910c:
    if (ctx->pc == 0x30910Cu) {
        ctx->pc = 0x30910Cu;
            // 0x30910c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x309110u;
        goto label_309110;
    }
    ctx->pc = 0x309108u;
    {
        const bool branch_taken_0x309108 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309108u;
            // 0x30910c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309108) {
            ctx->pc = 0x309114u;
            goto label_309114;
        }
    }
    ctx->pc = 0x309110u;
label_309110:
    // 0x309110: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309114:
    // 0x309114: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_309118:
    if (ctx->pc == 0x309118u) {
        ctx->pc = 0x309118u;
            // 0x309118: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x30911Cu;
        goto label_30911c;
    }
    ctx->pc = 0x309114u;
    {
        const bool branch_taken_0x309114 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x309114) {
            ctx->pc = 0x309118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309114u;
            // 0x309118: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309128u;
            goto label_309128;
        }
    }
    ctx->pc = 0x30911Cu;
label_30911c:
    // 0x30911c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30911cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309120:
    // 0x309120: 0x10000007  b           . + 4 + (0x7 << 2)
label_309124:
    if (ctx->pc == 0x309124u) {
        ctx->pc = 0x309124u;
            // 0x309124: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x309128u;
        goto label_309128;
    }
    ctx->pc = 0x309120u;
    {
        const bool branch_taken_0x309120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309120u;
            // 0x309124: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309120) {
            ctx->pc = 0x309140u;
            goto label_309140;
        }
    }
    ctx->pc = 0x309128u;
label_309128:
    // 0x309128: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x309128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_30912c:
    // 0x30912c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30912cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_309130:
    // 0x309130: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x309130u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309134:
    // 0x309134: 0x0  nop
    ctx->pc = 0x309134u;
    // NOP
label_309138:
    // 0x309138: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x309138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_30913c:
    // 0x30913c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x30913cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_309140:
    // 0x309140: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x309140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_309144:
    // 0x309144: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_309148:
    // 0x309148: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x309148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30914c:
    // 0x30914c: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x30914cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_309150:
    // 0x309150: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x309150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309154:
    // 0x309154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309158:
    // 0x309158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x309158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30915c:
    // 0x30915c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x30915cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_309160:
    // 0x309160: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x309160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_309164:
    // 0x309164: 0x4603155d  msub.s      $f21, $f2, $f3
    ctx->pc = 0x309164u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_309168:
    // 0x309168: 0x4604ad02  mul.s       $f20, $f21, $f4
    ctx->pc = 0x309168u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
label_30916c:
    // 0x30916c: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x30916cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_309170:
    // 0x309170: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x309170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_309174:
    // 0x309174: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x309174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309178:
    // 0x309178: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30917c:
    if (ctx->pc == 0x30917Cu) {
        ctx->pc = 0x30917Cu;
            // 0x30917c: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x309180u;
        goto label_309180;
    }
    ctx->pc = 0x309178u;
    {
        const bool branch_taken_0x309178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309178u;
            // 0x30917c: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309178) {
            ctx->pc = 0x309184u;
            goto label_309184;
        }
    }
    ctx->pc = 0x309180u;
label_309180:
    // 0x309180: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309184:
    // 0x309184: 0x8244010f  lb          $a0, 0x10F($s2)
    ctx->pc = 0x309184u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 271)));
label_309188:
    // 0x309188: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x309188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_30918c:
    // 0x30918c: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
label_309190:
    if (ctx->pc == 0x309190u) {
        ctx->pc = 0x309190u;
            // 0x309190: 0x658026  xor         $s0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->pc = 0x309194u;
        goto label_309194;
    }
    ctx->pc = 0x30918Cu;
    {
        const bool branch_taken_0x30918c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x309190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30918Cu;
            // 0x309190: 0x658026  xor         $s0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30918c) {
            ctx->pc = 0x30921Cu;
            goto label_30921c;
        }
    }
    ctx->pc = 0x309194u;
label_309194:
    // 0x309194: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x309194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_309198:
    // 0x309198: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x309198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_30919c:
    // 0x30919c: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x30919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3091a0:
    // 0x3091a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3091a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3091a4:
    // 0x3091a4: 0x0  nop
    ctx->pc = 0x3091a4u;
    // NOP
label_3091a8:
    // 0x3091a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3091a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3091ac:
    // 0x3091ac: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_3091b0:
    if (ctx->pc == 0x3091B0u) {
        ctx->pc = 0x3091B0u;
            // 0x3091b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3091B4u;
        goto label_3091b4;
    }
    ctx->pc = 0x3091ACu;
    {
        const bool branch_taken_0x3091ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3091ac) {
            ctx->pc = 0x3091B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3091ACu;
            // 0x3091b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309220u;
            goto label_309220;
        }
    }
    ctx->pc = 0x3091B4u;
label_3091b4:
    // 0x3091b4: 0x8243010c  lb          $v1, 0x10C($s2)
    ctx->pc = 0x3091b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_3091b8:
    // 0x3091b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3091b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3091bc:
    // 0x3091bc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3091bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3091c0:
    // 0x3091c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3091c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3091c4:
    // 0x3091c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3091c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3091c8:
    // 0x3091c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3091c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3091cc:
    // 0x3091cc: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x3091ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3091d0:
    // 0x3091d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3091d4:
    // 0x3091d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3091d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3091d8:
    // 0x3091d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3091d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3091dc:
    // 0x3091dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3091e0:
    // 0x3091e0: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3091e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3091e4:
    // 0x3091e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3091e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3091e8:
    // 0x3091e8: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3091e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3091ec:
    // 0x3091ec: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x3091ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_3091f0:
    // 0x3091f0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3091f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3091f4:
    // 0x3091f4: 0x320f809  jalr        $t9
label_3091f8:
    if (ctx->pc == 0x3091F8u) {
        ctx->pc = 0x3091F8u;
            // 0x3091f8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3091FCu;
        goto label_3091fc;
    }
    ctx->pc = 0x3091F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3091FCu);
        ctx->pc = 0x3091F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3091F4u;
            // 0x3091f8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3091FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3091FCu; }
            if (ctx->pc != 0x3091FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3091FCu;
label_3091fc:
    // 0x3091fc: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3091fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_309200:
    // 0x309200: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x309200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_309204:
    // 0x309204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309208:
    // 0x309208: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x309208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_30920c:
    // 0x30920c: 0x320f809  jalr        $t9
label_309210:
    if (ctx->pc == 0x309210u) {
        ctx->pc = 0x309210u;
            // 0x309210: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309214u;
        goto label_309214;
    }
    ctx->pc = 0x30920Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x309214u);
        ctx->pc = 0x309210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30920Cu;
            // 0x309210: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x309214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x309214u; }
            if (ctx->pc != 0x309214u) { return; }
        }
        }
    }
    ctx->pc = 0x309214u;
label_309214:
    // 0x309214: 0x10000025  b           . + 4 + (0x25 << 2)
label_309218:
    if (ctx->pc == 0x309218u) {
        ctx->pc = 0x309218u;
            // 0x309218: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x30921Cu;
        goto label_30921c;
    }
    ctx->pc = 0x309214u;
    {
        const bool branch_taken_0x309214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309214u;
            // 0x309218: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309214) {
            ctx->pc = 0x3092ACu;
            goto label_3092ac;
        }
    }
    ctx->pc = 0x30921Cu;
label_30921c:
    // 0x30921c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309220:
    // 0x309220: 0x14860021  bne         $a0, $a2, . + 4 + (0x21 << 2)
label_309224:
    if (ctx->pc == 0x309224u) {
        ctx->pc = 0x309228u;
        goto label_309228;
    }
    ctx->pc = 0x309220u;
    {
        const bool branch_taken_0x309220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x309220) {
            ctx->pc = 0x3092A8u;
            goto label_3092a8;
        }
    }
    ctx->pc = 0x309228u;
label_309228:
    // 0x309228: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x309228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_30922c:
    // 0x30922c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x30922cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_309230:
    // 0x309230: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x309230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309234:
    // 0x309234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309238:
    // 0x309238: 0x0  nop
    ctx->pc = 0x309238u;
    // NOP
label_30923c:
    // 0x30923c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30923cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309240:
    // 0x309240: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_309244:
    if (ctx->pc == 0x309244u) {
        ctx->pc = 0x309248u;
        goto label_309248;
    }
    ctx->pc = 0x309240u;
    {
        const bool branch_taken_0x309240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309240) {
            ctx->pc = 0x3092A8u;
            goto label_3092a8;
        }
    }
    ctx->pc = 0x309248u;
label_309248:
    // 0x309248: 0x8243010c  lb          $v1, 0x10C($s2)
    ctx->pc = 0x309248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_30924c:
    // 0x30924c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x30924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_309250:
    // 0x309250: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_309254:
    // 0x309254: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x309254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_309258:
    // 0x309258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x309258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30925c:
    // 0x30925c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309260:
    // 0x309260: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x309260u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_309264:
    // 0x309264: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x309264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_309268:
    // 0x309268: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x309268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_30926c:
    // 0x30926c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_309270:
    // 0x309270: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x309270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_309274:
    // 0x309274: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x309274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_309278:
    // 0x309278: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x309278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_30927c:
    // 0x30927c: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x30927cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_309280:
    // 0x309280: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x309280u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_309284:
    // 0x309284: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x309284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_309288:
    // 0x309288: 0x320f809  jalr        $t9
label_30928c:
    if (ctx->pc == 0x30928Cu) {
        ctx->pc = 0x30928Cu;
            // 0x30928c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309290u;
        goto label_309290;
    }
    ctx->pc = 0x309288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x309290u);
        ctx->pc = 0x30928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309288u;
            // 0x30928c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x309290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x309290u; }
            if (ctx->pc != 0x309290u) { return; }
        }
        }
    }
    ctx->pc = 0x309290u;
label_309290:
    // 0x309290: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x309290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_309294:
    // 0x309294: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x309294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_309298:
    // 0x309298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30929c:
    // 0x30929c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x30929cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3092a0:
    // 0x3092a0: 0x320f809  jalr        $t9
label_3092a4:
    if (ctx->pc == 0x3092A4u) {
        ctx->pc = 0x3092A4u;
            // 0x3092a4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3092A8u;
        goto label_3092a8;
    }
    ctx->pc = 0x3092A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3092A8u);
        ctx->pc = 0x3092A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3092A0u;
            // 0x3092a4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3092A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3092A8u; }
            if (ctx->pc != 0x3092A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3092A8u;
label_3092a8:
    // 0x3092a8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3092a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3092ac:
    // 0x3092ac: 0x8244010d  lb          $a0, 0x10D($s2)
    ctx->pc = 0x3092acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_3092b0:
    // 0x3092b0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3092b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3092b4:
    // 0x3092b4: 0x0  nop
    ctx->pc = 0x3092b4u;
    // NOP
label_3092b8:
    // 0x3092b8: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x3092b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3092bc:
    // 0x3092bc: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_3092c0:
    if (ctx->pc == 0x3092C0u) {
        ctx->pc = 0x3092C0u;
            // 0x3092c0: 0xa2440114  sb          $a0, 0x114($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 276), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3092C4u;
        goto label_3092c4;
    }
    ctx->pc = 0x3092BCu;
    {
        const bool branch_taken_0x3092bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3092C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3092BCu;
            // 0x3092c0: 0xa2440114  sb          $a0, 0x114($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 276), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092bc) {
            ctx->pc = 0x309310u;
            goto label_309310;
        }
    }
    ctx->pc = 0x3092C4u;
label_3092c4:
    // 0x3092c4: 0x0  nop
    ctx->pc = 0x3092c4u;
    // NOP
label_3092c8:
    // 0x3092c8: 0x0  nop
    ctx->pc = 0x3092c8u;
    // NOP
label_3092cc:
    // 0x3092cc: 0x4604a043  div.s       $f1, $f20, $f4
    ctx->pc = 0x3092ccu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[4];
label_3092d0:
    // 0x3092d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3092d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3092d4:
    // 0x3092d4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3092d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3092d8:
    // 0x3092d8: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x3092d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_3092dc:
    // 0x3092dc: 0xa2430111  sb          $v1, 0x111($s2)
    ctx->pc = 0x3092dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 3));
label_3092e0:
    // 0x3092e0: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x3092e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_3092e4:
    // 0x3092e4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3092e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_3092e8:
    // 0x3092e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3092e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3092ec:
    // 0x3092ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3092ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3092f0:
    // 0x3092f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3092f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3092f4:
    // 0x3092f4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3092f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3092f8:
    // 0x3092f8: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x3092f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_3092fc:
    // 0x3092fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3092fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_309300:
    // 0x309300: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x309300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_309304:
    // 0x309304: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x309304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_309308:
    // 0x309308: 0x1000003e  b           . + 4 + (0x3E << 2)
label_30930c:
    if (ctx->pc == 0x30930Cu) {
        ctx->pc = 0x30930Cu;
            // 0x30930c: 0xae200dcc  sw          $zero, 0xDCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
        ctx->pc = 0x309310u;
        goto label_309310;
    }
    ctx->pc = 0x309308u;
    {
        const bool branch_taken_0x309308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309308u;
            // 0x30930c: 0xae200dcc  sw          $zero, 0xDCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309308) {
            ctx->pc = 0x309404u;
            goto label_309404;
        }
    }
    ctx->pc = 0x309310u;
label_309310:
    // 0x309310: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x309310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_309314:
    // 0x309314: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x309314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_309318:
    // 0x309318: 0xc6220dcc  lwc1        $f2, 0xDCC($s1)
    ctx->pc = 0x309318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30931c:
    // 0x30931c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30931cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309320:
    // 0x309320: 0xc6230dbc  lwc1        $f3, 0xDBC($s1)
    ctx->pc = 0x309320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_309324:
    // 0x309324: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x309324u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_309328:
    // 0x309328: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x309328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_30932c:
    // 0x30932c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x30932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309330:
    // 0x309330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309334:
    // 0x309334: 0x0  nop
    ctx->pc = 0x309334u;
    // NOP
label_309338:
    // 0x309338: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x309338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_30933c:
    // 0x30933c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30933cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309340:
    // 0x309340: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_309344:
    if (ctx->pc == 0x309344u) {
        ctx->pc = 0x309344u;
            // 0x309344: 0xe6210dcc  swc1        $f1, 0xDCC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3532), bits); }
        ctx->pc = 0x309348u;
        goto label_309348;
    }
    ctx->pc = 0x309340u;
    {
        const bool branch_taken_0x309340 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309340u;
            // 0x309344: 0xe6210dcc  swc1        $f1, 0xDCC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309340) {
            ctx->pc = 0x3093BCu;
            goto label_3093bc;
        }
    }
    ctx->pc = 0x309348u;
label_309348:
    // 0x309348: 0x4604a001  sub.s       $f0, $f20, $f4
    ctx->pc = 0x309348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
label_30934c:
    // 0x30934c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30934cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_309350:
    // 0x309350: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x309350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_309354:
    // 0x309354: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x309354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_309358:
    // 0x309358: 0x46040043  div.s       $f1, $f0, $f4
    ctx->pc = 0x309358u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[4];
label_30935c:
    // 0x30935c: 0xa243010f  sb          $v1, 0x10F($s2)
    ctx->pc = 0x30935cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 271), (uint8_t)GPR_U32(ctx, 3));
label_309360:
    // 0x309360: 0x82460112  lb          $a2, 0x112($s2)
    ctx->pc = 0x309360u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 274)));
label_309364:
    // 0x309364: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x309364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_309368:
    // 0x309368: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x309368u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_30936c:
    // 0x30936c: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x30936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_309370:
    // 0x309370: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x309370u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_309374:
    // 0x309374: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x309374u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_309378:
    // 0x309378: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x309378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_30937c:
    // 0x30937c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x30937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_309380:
    // 0x309380: 0x8cc6005c  lw          $a2, 0x5C($a2)
    ctx->pc = 0x309380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_309384:
    // 0x309384: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x309384u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_309388:
    // 0x309388: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x309388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30938c:
    // 0x30938c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_309390:
    // 0x309390: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x309390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_309394:
    // 0x309394: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x309394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
label_309398:
    // 0x309398: 0xa2440111  sb          $a0, 0x111($s2)
    ctx->pc = 0x309398u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 4));
label_30939c:
    // 0x30939c: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x30939cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_3093a0:
    // 0x3093a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3093a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3093a4:
    // 0x3093a4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3093a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3093a8:
    // 0x3093a8: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x3093a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_3093ac:
    // 0x3093ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3093acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3093b0:
    // 0x3093b0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3093b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3093b4:
    // 0x3093b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_3093b8:
    if (ctx->pc == 0x3093B8u) {
        ctx->pc = 0x3093B8u;
            // 0x3093b8: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x3093BCu;
        goto label_3093bc;
    }
    ctx->pc = 0x3093B4u;
    {
        const bool branch_taken_0x3093b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3093B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3093B4u;
            // 0x3093b8: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093b4) {
            ctx->pc = 0x309404u;
            goto label_309404;
        }
    }
    ctx->pc = 0x3093BCu;
label_3093bc:
    // 0x3093bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3093bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3093c0:
    // 0x3093c0: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x3093c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3093c4:
    // 0x3093c4: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x3093c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3093c8:
    // 0x3093c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3093c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3093cc:
    // 0x3093cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3093ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3093d0:
    // 0x3093d0: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x3093d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_3093d4:
    // 0x3093d4: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x3093d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_3093d8:
    // 0x3093d8: 0xa2440111  sb          $a0, 0x111($s2)
    ctx->pc = 0x3093d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 4));
label_3093dc:
    // 0x3093dc: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x3093dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_3093e0:
    // 0x3093e0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3093e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3093e4:
    // 0x3093e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3093e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3093e8:
    // 0x3093e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3093e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3093ec:
    // 0x3093ec: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3093ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3093f0:
    // 0x3093f0: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x3093f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_3093f4:
    // 0x3093f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3093f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3093f8:
    // 0x3093f8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3093f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3093fc:
    // 0x3093fc: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x3093fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_309400:
    // 0x309400: 0xe6200dc4  swc1        $f0, 0xDC4($s1)
    ctx->pc = 0x309400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3524), bits); }
label_309404:
    // 0x309404: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x309404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_309408:
    // 0x309408: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x309408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_30940c:
    // 0x30940c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x30940cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_309410:
    // 0x309410: 0xe6410050  swc1        $f1, 0x50($s2)
    ctx->pc = 0x309410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_309414:
    // 0x309414: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x309414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_309418:
    // 0x309418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x309418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30941c:
    // 0x30941c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_309420:
    // 0x309420: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x309420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_309424:
    // 0x309424: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x309424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_309428:
    // 0x309428: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x309428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30942c:
    // 0x30942c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30942cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_309430:
    // 0x309430: 0x3e00008  jr          $ra
label_309434:
    if (ctx->pc == 0x309434u) {
        ctx->pc = 0x309434u;
            // 0x309434: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x309438u;
        goto label_309438;
    }
    ctx->pc = 0x309430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309430u;
            // 0x309434: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309438u;
label_309438:
    // 0x309438: 0x0  nop
    ctx->pc = 0x309438u;
    // NOP
label_30943c:
    // 0x30943c: 0x0  nop
    ctx->pc = 0x30943cu;
    // NOP
label_309440:
    // 0x309440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x309440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_309444:
    // 0x309444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_309448:
    // 0x309448: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x309448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30944c:
    // 0x30944c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_309450:
    // 0x309450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x309450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309454:
    // 0x309454: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x309454u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_309458:
    // 0x309458: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x309458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30945c:
    // 0x30945c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x30945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_309460:
    // 0x309460: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x309460u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_309464:
    // 0x309464: 0x8c5000c8  lw          $s0, 0xC8($v0)
    ctx->pc = 0x309464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_309468:
    // 0x309468: 0xc0754b4  jal         func_1D52D0
label_30946c:
    if (ctx->pc == 0x30946Cu) {
        ctx->pc = 0x30946Cu;
            // 0x30946c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x309470u;
        goto label_309470;
    }
    ctx->pc = 0x309468u;
    SET_GPR_U32(ctx, 31, 0x309470u);
    ctx->pc = 0x30946Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309468u;
            // 0x30946c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309470u; }
        if (ctx->pc != 0x309470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309470u; }
        if (ctx->pc != 0x309470u) { return; }
    }
    ctx->pc = 0x309470u;
label_309470:
    // 0x309470: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x309470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_309474:
    // 0x309474: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x309474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_309478:
    // 0x309478: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x309478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_30947c:
    // 0x30947c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x30947cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_309480:
    // 0x309480: 0xc6010dbc  lwc1        $f1, 0xDBC($s0)
    ctx->pc = 0x309480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309484:
    // 0x309484: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x309484u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_309488:
    // 0x309488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30948c:
    // 0x30948c: 0xc4a70018  lwc1        $f7, 0x18($a1)
    ctx->pc = 0x30948cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_309490:
    // 0x309490: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x309490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
label_309494:
    // 0x309494: 0x344212f7  ori         $v0, $v0, 0x12F7
    ctx->pc = 0x309494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4855);
label_309498:
    // 0x309498: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30949c:
    // 0x30949c: 0x46070882  mul.s       $f2, $f1, $f7
    ctx->pc = 0x30949cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_3094a0:
    // 0x3094a0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3094a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3094a4:
    // 0x3094a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3094a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3094a8:
    // 0x3094a8: 0x0  nop
    ctx->pc = 0x3094a8u;
    // NOP
label_3094ac:
    // 0x3094ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3094acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3094b0:
    // 0x3094b0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3094b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_3094b4:
    // 0x3094b4: 0x0  nop
    ctx->pc = 0x3094b4u;
    // NOP
label_3094b8:
    // 0x3094b8: 0xc6040de4  lwc1        $f4, 0xDE4($s0)
    ctx->pc = 0x3094b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3094bc:
    // 0x3094bc: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x3094bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3094c0:
    // 0x3094c0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_3094c4:
    if (ctx->pc == 0x3094C4u) {
        ctx->pc = 0x3094C4u;
            // 0x3094c4: 0x3c023f40  lui         $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
        ctx->pc = 0x3094C8u;
        goto label_3094c8;
    }
    ctx->pc = 0x3094C0u;
    {
        const bool branch_taken_0x3094c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3094c0) {
            ctx->pc = 0x3094C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3094C0u;
            // 0x3094c4: 0x3c023f40  lui         $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3094D8u;
            goto label_3094d8;
        }
    }
    ctx->pc = 0x3094C8u;
label_3094c8:
    // 0x3094c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3094cc:
    // 0x3094cc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3094ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3094d0:
    // 0x3094d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_3094d4:
    if (ctx->pc == 0x3094D4u) {
        ctx->pc = 0x3094D4u;
            // 0x3094d4: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->pc = 0x3094D8u;
        goto label_3094d8;
    }
    ctx->pc = 0x3094D0u;
    {
        const bool branch_taken_0x3094d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3094D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3094D0u;
            // 0x3094d4: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094d0) {
            ctx->pc = 0x309520u;
            goto label_309520;
        }
    }
    ctx->pc = 0x3094D8u;
label_3094d8:
    // 0x3094d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3094d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3094dc:
    // 0x3094dc: 0x0  nop
    ctx->pc = 0x3094dcu;
    // NOP
label_3094e0:
    // 0x3094e0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x3094e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3094e4:
    // 0x3094e4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_3094e8:
    if (ctx->pc == 0x3094E8u) {
        ctx->pc = 0x3094E8u;
            // 0x3094e8: 0x460320c1  sub.s       $f3, $f4, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->pc = 0x3094ECu;
        goto label_3094ec;
    }
    ctx->pc = 0x3094E4u;
    {
        const bool branch_taken_0x3094e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3094e4) {
            ctx->pc = 0x3094E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3094E4u;
            // 0x3094e8: 0x460320c1  sub.s       $f3, $f4, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3094F8u;
            goto label_3094f8;
        }
    }
    ctx->pc = 0x3094ECu;
label_3094ec:
    // 0x3094ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3094ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3094f0:
    // 0x3094f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3094f4:
    if (ctx->pc == 0x3094F4u) {
        ctx->pc = 0x3094F8u;
        goto label_3094f8;
    }
    ctx->pc = 0x3094F0u;
    {
        const bool branch_taken_0x3094f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3094f0) {
            ctx->pc = 0x30951Cu;
            goto label_30951c;
        }
    }
    ctx->pc = 0x3094F8u;
label_3094f8:
    // 0x3094f8: 0x3c023e17  lui         $v0, 0x3E17
    ctx->pc = 0x3094f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15895 << 16));
label_3094fc:
    // 0x3094fc: 0x3443b424  ori         $v1, $v0, 0xB424
    ctx->pc = 0x3094fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46116);
label_309500:
    // 0x309500: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x309500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_309504:
    // 0x309504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309508:
    // 0x309508: 0x0  nop
    ctx->pc = 0x309508u;
    // NOP
label_30950c:
    // 0x30950c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x30950cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
label_309510:
    // 0x309510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309514:
    // 0x309514: 0x0  nop
    ctx->pc = 0x309514u;
    // NOP
label_309518:
    // 0x309518: 0x46030501  sub.s       $f20, $f0, $f3
    ctx->pc = 0x309518u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_30951c:
    // 0x30951c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x30951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_309520:
    // 0x309520: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x309520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_309524:
    // 0x309524: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x309524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_309528:
    // 0x309528: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x309528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_30952c:
    // 0x30952c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x30952cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_309530:
    // 0x309530: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x309530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_309534:
    // 0x309534: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x309534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_309538:
    // 0x309538: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30953c:
    // 0x30953c: 0x8e030d74  lw          $v1, 0xD74($s0)
    ctx->pc = 0x30953cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_309540:
    // 0x309540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x309540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_309544:
    // 0x309544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309548:
    // 0x309548: 0x906202c5  lbu         $v0, 0x2C5($v1)
    ctx->pc = 0x309548u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 709)));
label_30954c:
    // 0x30954c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30954cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_309550:
    // 0x309550: 0x0  nop
    ctx->pc = 0x309550u;
    // NOP
label_309554:
    // 0x309554: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x309554u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_309558:
    // 0x309558: 0x4614315c  madd.s      $f5, $f6, $f20
    ctx->pc = 0x309558u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[20]));
label_30955c:
    // 0x30955c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30955cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_309560:
    // 0x309560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x309560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_309564:
    // 0x309564: 0x80420283  lb          $v0, 0x283($v0)
    ctx->pc = 0x309564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 643)));
label_309568:
    // 0x309568: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x309568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30956c:
    // 0x30956c: 0x0  nop
    ctx->pc = 0x30956cu;
    // NOP
label_309570:
    // 0x309570: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x309570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_309574:
    // 0x309574: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x309574u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_309578:
    // 0x309578: 0x0  nop
    ctx->pc = 0x309578u;
    // NOP
label_30957c:
    // 0x30957c: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x30957cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_309580:
    // 0x309580: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x309580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309584:
    // 0x309584: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_309588:
    if (ctx->pc == 0x309588u) {
        ctx->pc = 0x309588u;
            // 0x309588: 0xc6000dc0  lwc1        $f0, 0xDC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x30958Cu;
        goto label_30958c;
    }
    ctx->pc = 0x309584u;
    {
        const bool branch_taken_0x309584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309584) {
            ctx->pc = 0x309588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309584u;
            // 0x309588: 0xc6000dc0  lwc1        $f0, 0xDC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3095A4u;
            goto label_3095a4;
        }
    }
    ctx->pc = 0x30958Cu;
label_30958c:
    // 0x30958c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30958cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_309590:
    // 0x309590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309594:
    // 0x309594: 0x0  nop
    ctx->pc = 0x309594u;
    // NOP
label_309598:
    // 0x309598: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x309598u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_30959c:
    // 0x30959c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x30959cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3095a0:
    // 0x3095a0: 0xc6000dc0  lwc1        $f0, 0xDC0($s0)
    ctx->pc = 0x3095a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3095a4:
    // 0x3095a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3095a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3095a8:
    // 0x3095a8: 0x0  nop
    ctx->pc = 0x3095a8u;
    // NOP
label_3095ac:
    // 0x3095ac: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x3095acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3095b0:
    // 0x3095b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3095b4:
    if (ctx->pc == 0x3095B4u) {
        ctx->pc = 0x3095B4u;
            // 0x3095b4: 0xc6040dd4  lwc1        $f4, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x3095B8u;
        goto label_3095b8;
    }
    ctx->pc = 0x3095B0u;
    {
        const bool branch_taken_0x3095b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3095B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3095B0u;
            // 0x3095b4: 0xc6040dd4  lwc1        $f4, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095b0) {
            ctx->pc = 0x3095C0u;
            goto label_3095c0;
        }
    }
    ctx->pc = 0x3095B8u;
label_3095b8:
    // 0x3095b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3095bc:
    if (ctx->pc == 0x3095BCu) {
        ctx->pc = 0x3095BCu;
            // 0x3095bc: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x3095C0u;
        goto label_3095c0;
    }
    ctx->pc = 0x3095B8u;
    {
        const bool branch_taken_0x3095b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3095BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3095B8u;
            // 0x3095bc: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095b8) {
            ctx->pc = 0x3095DCu;
            goto label_3095dc;
        }
    }
    ctx->pc = 0x3095C0u;
label_3095c0:
    // 0x3095c0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3095c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3095c4:
    // 0x3095c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3095c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3095c8:
    // 0x3095c8: 0x0  nop
    ctx->pc = 0x3095c8u;
    // NOP
label_3095cc:
    // 0x3095cc: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x3095ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3095d0:
    // 0x3095d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3095d4:
    if (ctx->pc == 0x3095D4u) {
        ctx->pc = 0x3095D8u;
        goto label_3095d8;
    }
    ctx->pc = 0x3095D0u;
    {
        const bool branch_taken_0x3095d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3095d0) {
            ctx->pc = 0x3095DCu;
            goto label_3095dc;
        }
    }
    ctx->pc = 0x3095D8u;
label_3095d8:
    // 0x3095d8: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x3095d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_3095dc:
    // 0x3095dc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3095dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3095e0:
    // 0x3095e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3095e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3095e4:
    // 0x3095e4: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x3095e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3095e8:
    // 0x3095e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3095ec:
    if (ctx->pc == 0x3095ECu) {
        ctx->pc = 0x3095ECu;
            // 0x3095ec: 0xe6040dd4  swc1        $f4, 0xDD4($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3540), bits); }
        ctx->pc = 0x3095F0u;
        goto label_3095f0;
    }
    ctx->pc = 0x3095E8u;
    {
        const bool branch_taken_0x3095e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3095ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3095E8u;
            // 0x3095ec: 0xe6040dd4  swc1        $f4, 0xDD4($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095e8) {
            ctx->pc = 0x3095F4u;
            goto label_3095f4;
        }
    }
    ctx->pc = 0x3095F0u;
label_3095f0:
    // 0x3095f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3095f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3095f4:
    // 0x3095f4: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x3095f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3095f8:
    // 0x3095f8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3095f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3095fc:
    // 0x3095fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3095fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_309600:
    // 0x309600: 0x0  nop
    ctx->pc = 0x309600u;
    // NOP
label_309604:
    // 0x309604: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x309604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309608:
    // 0x309608: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30960c:
    if (ctx->pc == 0x30960Cu) {
        ctx->pc = 0x30960Cu;
            // 0x30960c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x309610u;
        goto label_309610;
    }
    ctx->pc = 0x309608u;
    {
        const bool branch_taken_0x309608 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309608u;
            // 0x30960c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309608) {
            ctx->pc = 0x309614u;
            goto label_309614;
        }
    }
    ctx->pc = 0x309610u;
label_309610:
    // 0x309610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309614:
    // 0x309614: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x309614u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_309618:
    // 0x309618: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x309618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30961c:
    // 0x30961c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309620:
    // 0x309620: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x309620u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_309624:
    // 0x309624: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x309624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309628:
    // 0x309628: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30962c:
    if (ctx->pc == 0x30962Cu) {
        ctx->pc = 0x30962Cu;
            // 0x30962c: 0x831825  or          $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->pc = 0x309630u;
        goto label_309630;
    }
    ctx->pc = 0x309628u;
    {
        const bool branch_taken_0x309628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309628u;
            // 0x30962c: 0x831825  or          $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309628) {
            ctx->pc = 0x309634u;
            goto label_309634;
        }
    }
    ctx->pc = 0x309630u;
label_309630:
    // 0x309630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309634:
    // 0x309634: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x309634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_309638:
    // 0x309638: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x309638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30963c:
    // 0x30963c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_309640:
    if (ctx->pc == 0x309640u) {
        ctx->pc = 0x309644u;
        goto label_309644;
    }
    ctx->pc = 0x30963Cu;
    {
        const bool branch_taken_0x30963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30963c) {
            ctx->pc = 0x3096BCu;
            goto label_3096bc;
        }
    }
    ctx->pc = 0x309644u;
label_309644:
    // 0x309644: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x309644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_309648:
    // 0x309648: 0x0  nop
    ctx->pc = 0x309648u;
    // NOP
label_30964c:
    // 0x30964c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x30964cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309650:
    // 0x309650: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_309654:
    if (ctx->pc == 0x309654u) {
        ctx->pc = 0x309658u;
        goto label_309658;
    }
    ctx->pc = 0x309650u;
    {
        const bool branch_taken_0x309650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309650) {
            ctx->pc = 0x309684u;
            goto label_309684;
        }
    }
    ctx->pc = 0x309658u;
label_309658:
    // 0x309658: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x309658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_30965c:
    // 0x30965c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x30965cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_309660:
    // 0x309660: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x309660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_309664:
    // 0x309664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309668:
    // 0x309668: 0x0  nop
    ctx->pc = 0x309668u;
    // NOP
label_30966c:
    // 0x30966c: 0x4602001d  msub.s      $f0, $f0, $f2
    ctx->pc = 0x30966cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_309670:
    // 0x309670: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x309670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309674:
    // 0x309674: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
label_309678:
    if (ctx->pc == 0x309678u) {
        ctx->pc = 0x309678u;
            // 0x309678: 0xe6000dc0  swc1        $f0, 0xDC0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
        ctx->pc = 0x30967Cu;
        goto label_30967c;
    }
    ctx->pc = 0x309674u;
    {
        const bool branch_taken_0x309674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309674) {
            ctx->pc = 0x309678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309674u;
            // 0x309678: 0xe6000dc0  swc1        $f0, 0xDC0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x309748u;
            goto label_309748;
        }
    }
    ctx->pc = 0x30967Cu;
label_30967c:
    // 0x30967c: 0x10000031  b           . + 4 + (0x31 << 2)
label_309680:
    if (ctx->pc == 0x309680u) {
        ctx->pc = 0x309680u;
            // 0x309680: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x309684u;
        goto label_309684;
    }
    ctx->pc = 0x30967Cu;
    {
        const bool branch_taken_0x30967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30967Cu;
            // 0x309680: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30967c) {
            ctx->pc = 0x309744u;
            goto label_309744;
        }
    }
    ctx->pc = 0x309684u;
label_309684:
    // 0x309684: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x309684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309688:
    // 0x309688: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_30968c:
    if (ctx->pc == 0x30968Cu) {
        ctx->pc = 0x309690u;
        goto label_309690;
    }
    ctx->pc = 0x309688u;
    {
        const bool branch_taken_0x309688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309688) {
            ctx->pc = 0x309744u;
            goto label_309744;
        }
    }
    ctx->pc = 0x309690u;
label_309690:
    // 0x309690: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x309690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_309694:
    // 0x309694: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x309694u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_309698:
    // 0x309698: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x309698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_30969c:
    // 0x30969c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3096a0:
    // 0x3096a0: 0x0  nop
    ctx->pc = 0x3096a0u;
    // NOP
label_3096a4:
    // 0x3096a4: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x3096a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_3096a8:
    // 0x3096a8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3096a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3096ac:
    // 0x3096ac: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_3096b0:
    if (ctx->pc == 0x3096B0u) {
        ctx->pc = 0x3096B4u;
        goto label_3096b4;
    }
    ctx->pc = 0x3096ACu;
    {
        const bool branch_taken_0x3096ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3096ac) {
            ctx->pc = 0x309744u;
            goto label_309744;
        }
    }
    ctx->pc = 0x3096B4u;
label_3096b4:
    // 0x3096b4: 0x10000023  b           . + 4 + (0x23 << 2)
label_3096b8:
    if (ctx->pc == 0x3096B8u) {
        ctx->pc = 0x3096B8u;
            // 0x3096b8: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x3096BCu;
        goto label_3096bc;
    }
    ctx->pc = 0x3096B4u;
    {
        const bool branch_taken_0x3096b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3096B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3096B4u;
            // 0x3096b8: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096b4) {
            ctx->pc = 0x309744u;
            goto label_309744;
        }
    }
    ctx->pc = 0x3096BCu;
label_3096bc:
    // 0x3096bc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3096bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3096c0:
    // 0x3096c0: 0x0  nop
    ctx->pc = 0x3096c0u;
    // NOP
label_3096c4:
    // 0x3096c4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x3096c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3096c8:
    // 0x3096c8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_3096cc:
    if (ctx->pc == 0x3096CCu) {
        ctx->pc = 0x3096D0u;
        goto label_3096d0;
    }
    ctx->pc = 0x3096C8u;
    {
        const bool branch_taken_0x3096c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3096c8) {
            ctx->pc = 0x309704u;
            goto label_309704;
        }
    }
    ctx->pc = 0x3096D0u;
label_3096d0:
    // 0x3096d0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3096d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3096d4:
    // 0x3096d4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3096d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3096d8:
    // 0x3096d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3096d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3096dc:
    // 0x3096dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3096dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3096e0:
    // 0x3096e0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3096e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3096e4:
    // 0x3096e4: 0x0  nop
    ctx->pc = 0x3096e4u;
    // NOP
label_3096e8:
    // 0x3096e8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3096e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3096ec:
    // 0x3096ec: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x3096ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_3096f0:
    // 0x3096f0: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x3096f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3096f4:
    // 0x3096f4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_3096f8:
    if (ctx->pc == 0x3096F8u) {
        ctx->pc = 0x3096FCu;
        goto label_3096fc;
    }
    ctx->pc = 0x3096F4u;
    {
        const bool branch_taken_0x3096f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3096f4) {
            ctx->pc = 0x309744u;
            goto label_309744;
        }
    }
    ctx->pc = 0x3096FCu;
label_3096fc:
    // 0x3096fc: 0x10000011  b           . + 4 + (0x11 << 2)
label_309700:
    if (ctx->pc == 0x309700u) {
        ctx->pc = 0x309700u;
            // 0x309700: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x309704u;
        goto label_309704;
    }
    ctx->pc = 0x3096FCu;
    {
        const bool branch_taken_0x3096fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3096FCu;
            // 0x309700: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096fc) {
            ctx->pc = 0x309744u;
            goto label_309744;
        }
    }
    ctx->pc = 0x309704u;
label_309704:
    // 0x309704: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x309704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309708:
    // 0x309708: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_30970c:
    if (ctx->pc == 0x30970Cu) {
        ctx->pc = 0x309710u;
        goto label_309710;
    }
    ctx->pc = 0x309708u;
    {
        const bool branch_taken_0x309708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309708) {
            ctx->pc = 0x309744u;
            goto label_309744;
        }
    }
    ctx->pc = 0x309710u;
label_309710:
    // 0x309710: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x309710u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_309714:
    // 0x309714: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x309714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_309718:
    // 0x309718: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x309718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30971c:
    // 0x30971c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_309720:
    // 0x309720: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x309720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_309724:
    // 0x309724: 0x0  nop
    ctx->pc = 0x309724u;
    // NOP
label_309728:
    // 0x309728: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x309728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_30972c:
    // 0x30972c: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x30972cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
label_309730:
    // 0x309730: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x309730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_309734:
    // 0x309734: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x309734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309738:
    // 0x309738: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30973c:
    if (ctx->pc == 0x30973Cu) {
        ctx->pc = 0x309740u;
        goto label_309740;
    }
    ctx->pc = 0x309738u;
    {
        const bool branch_taken_0x309738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309738) {
            ctx->pc = 0x309744u;
            goto label_309744;
        }
    }
    ctx->pc = 0x309740u;
label_309740:
    // 0x309740: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x309740u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_309744:
    // 0x309744: 0xe6000dc0  swc1        $f0, 0xDC0($s0)
    ctx->pc = 0x309744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
label_309748:
    // 0x309748: 0x8e020550  lw          $v0, 0x550($s0)
    ctx->pc = 0x309748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_30974c:
    // 0x30974c: 0x8043010f  lb          $v1, 0x10F($v0)
    ctx->pc = 0x30974cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 271)));
label_309750:
    // 0x309750: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_309754:
    if (ctx->pc == 0x309754u) {
        ctx->pc = 0x309758u;
        goto label_309758;
    }
    ctx->pc = 0x309750u;
    {
        const bool branch_taken_0x309750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309750) {
            ctx->pc = 0x309774u;
            goto label_309774;
        }
    }
    ctx->pc = 0x309758u;
label_309758:
    // 0x309758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30975c:
    // 0x30975c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_309760:
    if (ctx->pc == 0x309760u) {
        ctx->pc = 0x309764u;
        goto label_309764;
    }
    ctx->pc = 0x30975Cu;
    {
        const bool branch_taken_0x30975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30975c) {
            ctx->pc = 0x309774u;
            goto label_309774;
        }
    }
    ctx->pc = 0x309764u;
label_309764:
    // 0x309764: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x309764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_309768:
    // 0x309768: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x309768u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_30976c:
    // 0x30976c: 0x502000bc  beql        $at, $zero, . + 4 + (0xBC << 2)
label_309770:
    if (ctx->pc == 0x309770u) {
        ctx->pc = 0x309770u;
            // 0x309770: 0x3c033c64  lui         $v1, 0x3C64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15460 << 16));
        ctx->pc = 0x309774u;
        goto label_309774;
    }
    ctx->pc = 0x30976Cu;
    {
        const bool branch_taken_0x30976c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30976c) {
            ctx->pc = 0x309770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30976Cu;
            // 0x309770: 0x3c033c64  lui         $v1, 0x3C64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15460 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309A60u;
            goto label_309a60;
        }
    }
    ctx->pc = 0x309774u;
label_309774:
    // 0x309774: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x309774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_309778:
    // 0x309778: 0x0  nop
    ctx->pc = 0x309778u;
    // NOP
label_30977c:
    // 0x30977c: 0x46012832  c.eq.s      $f5, $f1
    ctx->pc = 0x30977cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309780:
    // 0x309780: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_309784:
    if (ctx->pc == 0x309784u) {
        ctx->pc = 0x309784u;
            // 0x309784: 0xc6060dc4  lwc1        $f6, 0xDC4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->pc = 0x309788u;
        goto label_309788;
    }
    ctx->pc = 0x309780u;
    {
        const bool branch_taken_0x309780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309780u;
            // 0x309784: 0xc6060dc4  lwc1        $f6, 0xDC4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309780) {
            ctx->pc = 0x3098C0u;
            goto label_3098c0;
        }
    }
    ctx->pc = 0x309788u;
label_309788:
    // 0x309788: 0x46063102  mul.s       $f4, $f6, $f6
    ctx->pc = 0x309788u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_30978c:
    // 0x30978c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x30978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_309790:
    // 0x309790: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x309790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_309794:
    // 0x309794: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_309798:
    // 0x309798: 0xc6250058  lwc1        $f5, 0x58($s1)
    ctx->pc = 0x309798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_30979c:
    // 0x30979c: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x30979cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3097a0:
    // 0x3097a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3097a4:
    if (ctx->pc == 0x3097A4u) {
        ctx->pc = 0x3097A4u;
            // 0x3097a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3097A8u;
        goto label_3097a8;
    }
    ctx->pc = 0x3097A0u;
    {
        const bool branch_taken_0x3097a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3097A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3097A0u;
            // 0x3097a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097a0) {
            ctx->pc = 0x3097ACu;
            goto label_3097ac;
        }
    }
    ctx->pc = 0x3097A8u;
label_3097a8:
    // 0x3097a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3097a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3097ac:
    // 0x3097ac: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x3097acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_3097b0:
    // 0x3097b0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_3097b4:
    // 0x3097b4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3097b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_3097b8:
    // 0x3097b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3097b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3097bc:
    // 0x3097bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3097bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3097c0:
    // 0x3097c0: 0x0  nop
    ctx->pc = 0x3097c0u;
    // NOP
label_3097c4:
    // 0x3097c4: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x3097c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3097c8:
    // 0x3097c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3097cc:
    if (ctx->pc == 0x3097CCu) {
        ctx->pc = 0x3097CCu;
            // 0x3097cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3097D0u;
        goto label_3097d0;
    }
    ctx->pc = 0x3097C8u;
    {
        const bool branch_taken_0x3097c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3097CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3097C8u;
            // 0x3097cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097c8) {
            ctx->pc = 0x3097D4u;
            goto label_3097d4;
        }
    }
    ctx->pc = 0x3097D0u;
label_3097d0:
    // 0x3097d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3097d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3097d4:
    // 0x3097d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3097d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3097d8:
    // 0x3097d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3097d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3097dc:
    // 0x3097dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3097e0:
    if (ctx->pc == 0x3097E0u) {
        ctx->pc = 0x3097E4u;
        goto label_3097e4;
    }
    ctx->pc = 0x3097DCu;
    {
        const bool branch_taken_0x3097dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3097dc) {
            ctx->pc = 0x3097F0u;
            goto label_3097f0;
        }
    }
    ctx->pc = 0x3097E4u;
label_3097e4:
    // 0x3097e4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3097e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_3097e8:
    // 0x3097e8: 0x10000032  b           . + 4 + (0x32 << 2)
label_3097ec:
    if (ctx->pc == 0x3097ECu) {
        ctx->pc = 0x3097ECu;
            // 0x3097ec: 0x46003146  mov.s       $f5, $f6 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x3097F0u;
        goto label_3097f0;
    }
    ctx->pc = 0x3097E8u;
    {
        const bool branch_taken_0x3097e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3097E8u;
            // 0x3097ec: 0x46003146  mov.s       $f5, $f6 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097e8) {
            ctx->pc = 0x3098B4u;
            goto label_3098b4;
        }
    }
    ctx->pc = 0x3097F0u;
label_3097f0:
    // 0x3097f0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3097f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3097f4:
    // 0x3097f4: 0x0  nop
    ctx->pc = 0x3097f4u;
    // NOP
label_3097f8:
    // 0x3097f8: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x3097f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3097fc:
    // 0x3097fc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_309800:
    if (ctx->pc == 0x309800u) {
        ctx->pc = 0x309804u;
        goto label_309804;
    }
    ctx->pc = 0x3097FCu;
    {
        const bool branch_taken_0x3097fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3097fc) {
            ctx->pc = 0x309858u;
            goto label_309858;
        }
    }
    ctx->pc = 0x309804u;
label_309804:
    // 0x309804: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x309804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309808:
    // 0x309808: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_30980c:
    if (ctx->pc == 0x30980Cu) {
        ctx->pc = 0x30980Cu;
            // 0x30980c: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->pc = 0x309810u;
        goto label_309810;
    }
    ctx->pc = 0x309808u;
    {
        const bool branch_taken_0x309808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309808) {
            ctx->pc = 0x30980Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309808u;
            // 0x30980c: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309824u;
            goto label_309824;
        }
    }
    ctx->pc = 0x309810u;
label_309810:
    // 0x309810: 0x3c023ac4  lui         $v0, 0x3AC4
    ctx->pc = 0x309810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15044 << 16));
label_309814:
    // 0x309814: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x309814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_309818:
    // 0x309818: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30981c:
    // 0x30981c: 0x10000005  b           . + 4 + (0x5 << 2)
label_309820:
    if (ctx->pc == 0x309820u) {
        ctx->pc = 0x309820u;
            // 0x309820: 0x46032941  sub.s       $f5, $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        ctx->pc = 0x309824u;
        goto label_309824;
    }
    ctx->pc = 0x30981Cu;
    {
        const bool branch_taken_0x30981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30981Cu;
            // 0x309820: 0x46032941  sub.s       $f5, $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30981c) {
            ctx->pc = 0x309834u;
            goto label_309834;
        }
    }
    ctx->pc = 0x309824u;
label_309824:
    // 0x309824: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x309824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_309828:
    // 0x309828: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30982c:
    // 0x30982c: 0x0  nop
    ctx->pc = 0x30982cu;
    // NOP
label_309830:
    // 0x309830: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x309830u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_309834:
    // 0x309834: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x309834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_309838:
    // 0x309838: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30983c:
    // 0x30983c: 0x0  nop
    ctx->pc = 0x30983cu;
    // NOP
label_309840:
    // 0x309840: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x309840u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_309844:
    // 0x309844: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x309844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_309848:
    // 0x309848: 0x0  nop
    ctx->pc = 0x309848u;
    // NOP
label_30984c:
    // 0x30984c: 0x46061818  adda.s      $f3, $f6
    ctx->pc = 0x30984cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_309850:
    // 0x309850: 0x10000018  b           . + 4 + (0x18 << 2)
label_309854:
    if (ctx->pc == 0x309854u) {
        ctx->pc = 0x309854u;
            // 0x309854: 0x4602219c  madd.s      $f6, $f4, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->pc = 0x309858u;
        goto label_309858;
    }
    ctx->pc = 0x309850u;
    {
        const bool branch_taken_0x309850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309850u;
            // 0x309854: 0x4602219c  madd.s      $f6, $f4, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309850) {
            ctx->pc = 0x3098B4u;
            goto label_3098b4;
        }
    }
    ctx->pc = 0x309858u;
label_309858:
    // 0x309858: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x309858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30985c:
    // 0x30985c: 0x4502007e  bc1fl       . + 4 + (0x7E << 2)
label_309860:
    if (ctx->pc == 0x309860u) {
        ctx->pc = 0x309860u;
            // 0x309860: 0xe6250058  swc1        $f5, 0x58($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->pc = 0x309864u;
        goto label_309864;
    }
    ctx->pc = 0x30985Cu;
    {
        const bool branch_taken_0x30985c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30985c) {
            ctx->pc = 0x309860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30985Cu;
            // 0x309860: 0xe6250058  swc1        $f5, 0x58($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309864u;
label_309864:
    // 0x309864: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x309864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309868:
    // 0x309868: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_30986c:
    if (ctx->pc == 0x30986Cu) {
        ctx->pc = 0x30986Cu;
            // 0x30986c: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->pc = 0x309870u;
        goto label_309870;
    }
    ctx->pc = 0x309868u;
    {
        const bool branch_taken_0x309868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309868) {
            ctx->pc = 0x30986Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309868u;
            // 0x30986c: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309884u;
            goto label_309884;
        }
    }
    ctx->pc = 0x309870u;
label_309870:
    // 0x309870: 0x3c023ac4  lui         $v0, 0x3AC4
    ctx->pc = 0x309870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15044 << 16));
label_309874:
    // 0x309874: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x309874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_309878:
    // 0x309878: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30987c:
    // 0x30987c: 0x10000005  b           . + 4 + (0x5 << 2)
label_309880:
    if (ctx->pc == 0x309880u) {
        ctx->pc = 0x309880u;
            // 0x309880: 0x46032940  add.s       $f5, $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
        ctx->pc = 0x309884u;
        goto label_309884;
    }
    ctx->pc = 0x30987Cu;
    {
        const bool branch_taken_0x30987c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30987Cu;
            // 0x309880: 0x46032940  add.s       $f5, $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30987c) {
            ctx->pc = 0x309894u;
            goto label_309894;
        }
    }
    ctx->pc = 0x309884u;
label_309884:
    // 0x309884: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x309884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_309888:
    // 0x309888: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30988c:
    // 0x30988c: 0x0  nop
    ctx->pc = 0x30988cu;
    // NOP
label_309890:
    // 0x309890: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x309890u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_309894:
    // 0x309894: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x309894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_309898:
    // 0x309898: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30989c:
    // 0x30989c: 0x0  nop
    ctx->pc = 0x30989cu;
    // NOP
label_3098a0:
    // 0x3098a0: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x3098a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3098a4:
    // 0x3098a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3098a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3098a8:
    // 0x3098a8: 0x0  nop
    ctx->pc = 0x3098a8u;
    // NOP
label_3098ac:
    // 0x3098ac: 0x46061818  adda.s      $f3, $f6
    ctx->pc = 0x3098acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3098b0:
    // 0x3098b0: 0x4602219c  madd.s      $f6, $f4, $f2
    ctx->pc = 0x3098b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_3098b4:
    // 0x3098b4: 0xe6250058  swc1        $f5, 0x58($s1)
    ctx->pc = 0x3098b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_3098b8:
    // 0x3098b8: 0x10000067  b           . + 4 + (0x67 << 2)
label_3098bc:
    if (ctx->pc == 0x3098BCu) {
        ctx->pc = 0x3098C0u;
        goto label_3098c0;
    }
    ctx->pc = 0x3098B8u;
    {
        const bool branch_taken_0x3098b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3098b8) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x3098C0u;
label_3098c0:
    // 0x3098c0: 0x460608c2  mul.s       $f3, $f1, $f6
    ctx->pc = 0x3098c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_3098c4:
    // 0x3098c4: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x3098c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3098c8:
    // 0x3098c8: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
label_3098cc:
    if (ctx->pc == 0x3098CCu) {
        ctx->pc = 0x3098CCu;
            // 0x3098cc: 0x46063102  mul.s       $f4, $f6, $f6 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
        ctx->pc = 0x3098D0u;
        goto label_3098d0;
    }
    ctx->pc = 0x3098C8u;
    {
        const bool branch_taken_0x3098c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3098c8) {
            ctx->pc = 0x3098CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3098C8u;
            // 0x3098cc: 0x46063102  mul.s       $f4, $f6, $f6 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x309950u;
            goto label_309950;
        }
    }
    ctx->pc = 0x3098D0u;
label_3098d0:
    // 0x3098d0: 0x46053036  c.le.s      $f6, $f5
    ctx->pc = 0x3098d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3098d4:
    // 0x3098d4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_3098d8:
    if (ctx->pc == 0x3098D8u) {
        ctx->pc = 0x3098DCu;
        goto label_3098dc;
    }
    ctx->pc = 0x3098D4u;
    {
        const bool branch_taken_0x3098d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3098d4) {
            ctx->pc = 0x309910u;
            goto label_309910;
        }
    }
    ctx->pc = 0x3098DCu;
label_3098dc:
    // 0x3098dc: 0x46060901  sub.s       $f4, $f1, $f6
    ctx->pc = 0x3098dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_3098e0:
    // 0x3098e0: 0x3c023d38  lui         $v0, 0x3D38
    ctx->pc = 0x3098e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15672 << 16));
label_3098e4:
    // 0x3098e4: 0x344251eb  ori         $v0, $v0, 0x51EB
    ctx->pc = 0x3098e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20971);
label_3098e8:
    // 0x3098e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3098e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3098ec:
    // 0x3098ec: 0x0  nop
    ctx->pc = 0x3098ecu;
    // NOP
label_3098f0:
    // 0x3098f0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3098f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3098f4:
    // 0x3098f4: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x3098f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_3098f8:
    // 0x3098f8: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x3098f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3098fc:
    // 0x3098fc: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x3098fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309900:
    // 0x309900: 0x45000055  bc1f        . + 4 + (0x55 << 2)
label_309904:
    if (ctx->pc == 0x309904u) {
        ctx->pc = 0x309908u;
        goto label_309908;
    }
    ctx->pc = 0x309900u;
    {
        const bool branch_taken_0x309900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309900) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309908u;
label_309908:
    // 0x309908: 0x10000053  b           . + 4 + (0x53 << 2)
label_30990c:
    if (ctx->pc == 0x30990Cu) {
        ctx->pc = 0x30990Cu;
            // 0x30990c: 0x46002986  mov.s       $f6, $f5 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x309910u;
        goto label_309910;
    }
    ctx->pc = 0x309908u;
    {
        const bool branch_taken_0x309908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309908u;
            // 0x30990c: 0x46002986  mov.s       $f6, $f5 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309908) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309910u;
label_309910:
    // 0x309910: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x309910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309914:
    // 0x309914: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_309918:
    if (ctx->pc == 0x309918u) {
        ctx->pc = 0x30991Cu;
        goto label_30991c;
    }
    ctx->pc = 0x309914u;
    {
        const bool branch_taken_0x309914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309914) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x30991Cu;
label_30991c:
    // 0x30991c: 0x46060901  sub.s       $f4, $f1, $f6
    ctx->pc = 0x30991cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_309920:
    // 0x309920: 0x3c023d38  lui         $v0, 0x3D38
    ctx->pc = 0x309920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15672 << 16));
label_309924:
    // 0x309924: 0x344251eb  ori         $v0, $v0, 0x51EB
    ctx->pc = 0x309924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20971);
label_309928:
    // 0x309928: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30992c:
    // 0x30992c: 0x0  nop
    ctx->pc = 0x30992cu;
    // NOP
label_309930:
    // 0x309930: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x309930u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_309934:
    // 0x309934: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x309934u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_309938:
    // 0x309938: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x309938u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_30993c:
    // 0x30993c: 0x46053036  c.le.s      $f6, $f5
    ctx->pc = 0x30993cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309940:
    // 0x309940: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_309944:
    if (ctx->pc == 0x309944u) {
        ctx->pc = 0x309948u;
        goto label_309948;
    }
    ctx->pc = 0x309940u;
    {
        const bool branch_taken_0x309940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309940) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309948u;
label_309948:
    // 0x309948: 0x10000043  b           . + 4 + (0x43 << 2)
label_30994c:
    if (ctx->pc == 0x30994Cu) {
        ctx->pc = 0x30994Cu;
            // 0x30994c: 0x46002986  mov.s       $f6, $f5 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x309950u;
        goto label_309950;
    }
    ctx->pc = 0x309948u;
    {
        const bool branch_taken_0x309948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309948u;
            // 0x30994c: 0x46002986  mov.s       $f6, $f5 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309948) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309950u;
label_309950:
    // 0x309950: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x309950u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_309954:
    // 0x309954: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x309954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309958:
    // 0x309958: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_30995c:
    if (ctx->pc == 0x30995Cu) {
        ctx->pc = 0x309960u;
        goto label_309960;
    }
    ctx->pc = 0x309958u;
    {
        const bool branch_taken_0x309958 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309958) {
            ctx->pc = 0x3099D0u;
            goto label_3099d0;
        }
    }
    ctx->pc = 0x309960u;
label_309960:
    // 0x309960: 0x46053036  c.le.s      $f6, $f5
    ctx->pc = 0x309960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309964:
    // 0x309964: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_309968:
    if (ctx->pc == 0x309968u) {
        ctx->pc = 0x30996Cu;
        goto label_30996c;
    }
    ctx->pc = 0x309964u;
    {
        const bool branch_taken_0x309964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309964) {
            ctx->pc = 0x309998u;
            goto label_309998;
        }
    }
    ctx->pc = 0x30996Cu;
label_30996c:
    // 0x30996c: 0x3c023d38  lui         $v0, 0x3D38
    ctx->pc = 0x30996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15672 << 16));
label_309970:
    // 0x309970: 0x344251eb  ori         $v0, $v0, 0x51EB
    ctx->pc = 0x309970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20971);
label_309974:
    // 0x309974: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x309974u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_309978:
    // 0x309978: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30997c:
    // 0x30997c: 0x0  nop
    ctx->pc = 0x30997cu;
    // NOP
label_309980:
    // 0x309980: 0x4602199d  msub.s      $f6, $f3, $f2
    ctx->pc = 0x309980u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_309984:
    // 0x309984: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x309984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309988:
    // 0x309988: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_30998c:
    if (ctx->pc == 0x30998Cu) {
        ctx->pc = 0x309990u;
        goto label_309990;
    }
    ctx->pc = 0x309988u;
    {
        const bool branch_taken_0x309988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309988) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309990u;
label_309990:
    // 0x309990: 0x10000031  b           . + 4 + (0x31 << 2)
label_309994:
    if (ctx->pc == 0x309994u) {
        ctx->pc = 0x309994u;
            // 0x309994: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x309998u;
        goto label_309998;
    }
    ctx->pc = 0x309990u;
    {
        const bool branch_taken_0x309990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309990u;
            // 0x309994: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309990) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309998u;
label_309998:
    // 0x309998: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x309998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30999c:
    // 0x30999c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_3099a0:
    if (ctx->pc == 0x3099A0u) {
        ctx->pc = 0x3099A4u;
        goto label_3099a4;
    }
    ctx->pc = 0x30999Cu;
    {
        const bool branch_taken_0x30999c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30999c) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x3099A4u;
label_3099a4:
    // 0x3099a4: 0x3c023d38  lui         $v0, 0x3D38
    ctx->pc = 0x3099a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15672 << 16));
label_3099a8:
    // 0x3099a8: 0x344251eb  ori         $v0, $v0, 0x51EB
    ctx->pc = 0x3099a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20971);
label_3099ac:
    // 0x3099ac: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x3099acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_3099b0:
    // 0x3099b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3099b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3099b4:
    // 0x3099b4: 0x0  nop
    ctx->pc = 0x3099b4u;
    // NOP
label_3099b8:
    // 0x3099b8: 0x4602199c  madd.s      $f6, $f3, $f2
    ctx->pc = 0x3099b8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3099bc:
    // 0x3099bc: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x3099bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3099c0:
    // 0x3099c0: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_3099c4:
    if (ctx->pc == 0x3099C4u) {
        ctx->pc = 0x3099C8u;
        goto label_3099c8;
    }
    ctx->pc = 0x3099C0u;
    {
        const bool branch_taken_0x3099c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3099c0) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x3099C8u;
label_3099c8:
    // 0x3099c8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3099cc:
    if (ctx->pc == 0x3099CCu) {
        ctx->pc = 0x3099CCu;
            // 0x3099cc: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x3099D0u;
        goto label_3099d0;
    }
    ctx->pc = 0x3099C8u;
    {
        const bool branch_taken_0x3099c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3099CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3099C8u;
            // 0x3099cc: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3099c8) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x3099D0u;
label_3099d0:
    // 0x3099d0: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x3099d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3099d4:
    // 0x3099d4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_3099d8:
    if (ctx->pc == 0x3099D8u) {
        ctx->pc = 0x3099DCu;
        goto label_3099dc;
    }
    ctx->pc = 0x3099D4u;
    {
        const bool branch_taken_0x3099d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3099d4) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x3099DCu;
label_3099dc:
    // 0x3099dc: 0x46060901  sub.s       $f4, $f1, $f6
    ctx->pc = 0x3099dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_3099e0:
    // 0x3099e0: 0x3c023d38  lui         $v0, 0x3D38
    ctx->pc = 0x3099e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15672 << 16));
label_3099e4:
    // 0x3099e4: 0x344251eb  ori         $v0, $v0, 0x51EB
    ctx->pc = 0x3099e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20971);
label_3099e8:
    // 0x3099e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3099e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3099ec:
    // 0x3099ec: 0x0  nop
    ctx->pc = 0x3099ecu;
    // NOP
label_3099f0:
    // 0x3099f0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3099f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3099f4:
    // 0x3099f4: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x3099f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_3099f8:
    // 0x3099f8: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x3099f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3099fc:
    // 0x3099fc: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x3099fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309a00:
    // 0x309a00: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_309a04:
    if (ctx->pc == 0x309A04u) {
        ctx->pc = 0x309A04u;
            // 0x309a04: 0xae000dd0  sw          $zero, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
        ctx->pc = 0x309A08u;
        goto label_309a08;
    }
    ctx->pc = 0x309A00u;
    {
        const bool branch_taken_0x309a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a00) {
            ctx->pc = 0x309A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309A00u;
            // 0x309a04: 0xae000dd0  sw          $zero, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309A08u;
label_309a08:
    // 0x309a08: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x309a08u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
label_309a0c:
    // 0x309a0c: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x309a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
label_309a10:
    // 0x309a10: 0x10000011  b           . + 4 + (0x11 << 2)
label_309a14:
    if (ctx->pc == 0x309A14u) {
        ctx->pc = 0x309A18u;
        goto label_309a18;
    }
    ctx->pc = 0x309A10u;
    {
        const bool branch_taken_0x309a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309a10) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309A18u;
label_309a18:
    // 0x309a18: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x309a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309a1c:
    // 0x309a1c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_309a20:
    if (ctx->pc == 0x309A20u) {
        ctx->pc = 0x309A24u;
        goto label_309a24;
    }
    ctx->pc = 0x309A1Cu;
    {
        const bool branch_taken_0x309a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a1c) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309A24u;
label_309a24:
    // 0x309a24: 0x46060901  sub.s       $f4, $f1, $f6
    ctx->pc = 0x309a24u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_309a28:
    // 0x309a28: 0x3c023d38  lui         $v0, 0x3D38
    ctx->pc = 0x309a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15672 << 16));
label_309a2c:
    // 0x309a2c: 0x344251eb  ori         $v0, $v0, 0x51EB
    ctx->pc = 0x309a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20971);
label_309a30:
    // 0x309a30: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x309a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_309a34:
    // 0x309a34: 0x0  nop
    ctx->pc = 0x309a34u;
    // NOP
label_309a38:
    // 0x309a38: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x309a38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_309a3c:
    // 0x309a3c: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x309a3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_309a40:
    // 0x309a40: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x309a40u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_309a44:
    // 0x309a44: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x309a44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309a48:
    // 0x309a48: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_309a4c:
    if (ctx->pc == 0x309A4Cu) {
        ctx->pc = 0x309A4Cu;
            // 0x309a4c: 0xae000dd0  sw          $zero, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
        ctx->pc = 0x309A50u;
        goto label_309a50;
    }
    ctx->pc = 0x309A48u;
    {
        const bool branch_taken_0x309a48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a48) {
            ctx->pc = 0x309A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309A48u;
            // 0x309a4c: 0xae000dd0  sw          $zero, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309A50u;
label_309a50:
    // 0x309a50: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x309a50u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
label_309a54:
    // 0x309a54: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x309a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
label_309a58:
    // 0x309a58: 0xe6060dc4  swc1        $f6, 0xDC4($s0)
    ctx->pc = 0x309a58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3524), bits); }
label_309a5c:
    // 0x309a5c: 0x3c033c64  lui         $v1, 0x3C64
    ctx->pc = 0x309a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15460 << 16));
label_309a60:
    // 0x309a60: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x309a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
label_309a64:
    // 0x309a64: 0x3463c388  ori         $v1, $v1, 0xC388
    ctx->pc = 0x309a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50056);
label_309a68:
    // 0x309a68: 0x344212f7  ori         $v0, $v0, 0x12F7
    ctx->pc = 0x309a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4855);
label_309a6c:
    // 0x309a6c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x309a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_309a70:
    // 0x309a70: 0x0  nop
    ctx->pc = 0x309a70u;
    // NOP
label_309a74:
    // 0x309a74: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x309a74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_309a78:
    // 0x309a78: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x309a78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_309a7c:
    // 0x309a7c: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x309a7cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_309a80:
    // 0x309a80: 0xc6030de4  lwc1        $f3, 0xDE4($s0)
    ctx->pc = 0x309a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_309a84:
    // 0x309a84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x309a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_309a88:
    // 0x309a88: 0x0  nop
    ctx->pc = 0x309a88u;
    // NOP
label_309a8c:
    // 0x309a8c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x309a8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309a90:
    // 0x309a90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_309a94:
    if (ctx->pc == 0x309A94u) {
        ctx->pc = 0x309A94u;
            // 0x309a94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x309A98u;
        goto label_309a98;
    }
    ctx->pc = 0x309A90u;
    {
        const bool branch_taken_0x309a90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309A90u;
            // 0x309a94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a90) {
            ctx->pc = 0x309A9Cu;
            goto label_309a9c;
        }
    }
    ctx->pc = 0x309A98u;
label_309a98:
    // 0x309a98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309a98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309a9c:
    // 0x309a9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x309a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_309aa0:
    // 0x309aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309aa4:
    // 0x309aa4: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x309aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_309aa8:
    // 0x309aa8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x309aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_309aac:
    // 0x309aac: 0x0  nop
    ctx->pc = 0x309aacu;
    // NOP
label_309ab0:
    // 0x309ab0: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x309ab0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309ab4:
    // 0x309ab4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x309ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_309ab8:
    // 0x309ab8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_309abc:
    if (ctx->pc == 0x309ABCu) {
        ctx->pc = 0x309ABCu;
            // 0x309abc: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->pc = 0x309AC0u;
        goto label_309ac0;
    }
    ctx->pc = 0x309AB8u;
    {
        const bool branch_taken_0x309ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309AB8u;
            // 0x309abc: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ab8) {
            ctx->pc = 0x309AC4u;
            goto label_309ac4;
        }
    }
    ctx->pc = 0x309AC0u;
label_309ac0:
    // 0x309ac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309ac4:
    // 0x309ac4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x309ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_309ac8:
    // 0x309ac8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x309ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_309acc:
    // 0x309acc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_309ad0:
    if (ctx->pc == 0x309AD0u) {
        ctx->pc = 0x309AD0u;
            // 0x309ad0: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->pc = 0x309AD4u;
        goto label_309ad4;
    }
    ctx->pc = 0x309ACCu;
    {
        const bool branch_taken_0x309acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309acc) {
            ctx->pc = 0x309AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309ACCu;
            // 0x309ad0: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309B14u;
            goto label_309b14;
        }
    }
    ctx->pc = 0x309AD4u;
label_309ad4:
    // 0x309ad4: 0x3c02ba72  lui         $v0, 0xBA72
    ctx->pc = 0x309ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47730 << 16));
label_309ad8:
    // 0x309ad8: 0x3442b9d6  ori         $v0, $v0, 0xB9D6
    ctx->pc = 0x309ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47574);
label_309adc:
    // 0x309adc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x309adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_309ae0:
    // 0x309ae0: 0x0  nop
    ctx->pc = 0x309ae0u;
    // NOP
label_309ae4:
    // 0x309ae4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x309ae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_309ae8:
    // 0x309ae8: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x309ae8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_309aec:
    // 0x309aec: 0xc6020de8  lwc1        $f2, 0xDE8($s0)
    ctx->pc = 0x309aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_309af0:
    // 0x309af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309af4:
    // 0x309af4: 0x0  nop
    ctx->pc = 0x309af4u;
    // NOP
label_309af8:
    // 0x309af8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x309af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309afc:
    // 0x309afc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_309b00:
    if (ctx->pc == 0x309B00u) {
        ctx->pc = 0x309B00u;
            // 0x309b00: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x309B04u;
        goto label_309b04;
    }
    ctx->pc = 0x309AFCu;
    {
        const bool branch_taken_0x309afc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309afc) {
            ctx->pc = 0x309B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309AFCu;
            // 0x309b00: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x309B0Cu;
            goto label_309b0c;
        }
    }
    ctx->pc = 0x309B04u;
label_309b04:
    // 0x309b04: 0x10000002  b           . + 4 + (0x2 << 2)
label_309b08:
    if (ctx->pc == 0x309B08u) {
        ctx->pc = 0x309B08u;
            // 0x309b08: 0xe6030de8  swc1        $f3, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->pc = 0x309B0Cu;
        goto label_309b0c;
    }
    ctx->pc = 0x309B04u;
    {
        const bool branch_taken_0x309b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B04u;
            // 0x309b08: 0xe6030de8  swc1        $f3, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b04) {
            ctx->pc = 0x309B10u;
            goto label_309b10;
        }
    }
    ctx->pc = 0x309B0Cu;
label_309b0c:
    // 0x309b0c: 0xe6000de8  swc1        $f0, 0xDE8($s0)
    ctx->pc = 0x309b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
label_309b10:
    // 0x309b10: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x309b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_309b14:
    // 0x309b14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309b18:
    // 0x309b18: 0x0  nop
    ctx->pc = 0x309b18u;
    // NOP
label_309b1c:
    // 0x309b1c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x309b1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309b20:
    // 0x309b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309b24:
    // 0x309b24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_309b28:
    if (ctx->pc == 0x309B28u) {
        ctx->pc = 0x309B28u;
            // 0x309b28: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x309B2Cu;
        goto label_309b2c;
    }
    ctx->pc = 0x309B24u;
    {
        const bool branch_taken_0x309b24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B24u;
            // 0x309b28: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b24) {
            ctx->pc = 0x309B30u;
            goto label_309b30;
        }
    }
    ctx->pc = 0x309B2Cu;
label_309b2c:
    // 0x309b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309b30:
    // 0x309b30: 0xc6010dd0  lwc1        $f1, 0xDD0($s0)
    ctx->pc = 0x309b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309b34:
    // 0x309b34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x309b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_309b38:
    // 0x309b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309b3c:
    // 0x309b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309b40:
    // 0x309b40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x309b40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309b44:
    // 0x309b44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_309b48:
    if (ctx->pc == 0x309B48u) {
        ctx->pc = 0x309B48u;
            // 0x309b48: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->pc = 0x309B4Cu;
        goto label_309b4c;
    }
    ctx->pc = 0x309B44u;
    {
        const bool branch_taken_0x309b44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B44u;
            // 0x309b48: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b44) {
            ctx->pc = 0x309B50u;
            goto label_309b50;
        }
    }
    ctx->pc = 0x309B4Cu;
label_309b4c:
    // 0x309b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309b50:
    // 0x309b50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x309b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_309b54:
    // 0x309b54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x309b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_309b58:
    // 0x309b58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_309b5c:
    if (ctx->pc == 0x309B5Cu) {
        ctx->pc = 0x309B5Cu;
            // 0x309b5c: 0xe6150dc8  swc1        $f21, 0xDC8($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3528), bits); }
        ctx->pc = 0x309B60u;
        goto label_309b60;
    }
    ctx->pc = 0x309B58u;
    {
        const bool branch_taken_0x309b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309b58) {
            ctx->pc = 0x309B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309B58u;
            // 0x309b5c: 0xe6150dc8  swc1        $f21, 0xDC8($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3528), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x309B70u;
            goto label_309b70;
        }
    }
    ctx->pc = 0x309B60u;
label_309b60:
    // 0x309b60: 0xc0c1570  jal         func_3055C0
label_309b64:
    if (ctx->pc == 0x309B64u) {
        ctx->pc = 0x309B64u;
            // 0x309b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309B68u;
        goto label_309b68;
    }
    ctx->pc = 0x309B60u;
    SET_GPR_U32(ctx, 31, 0x309B68u);
    ctx->pc = 0x309B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309B60u;
            // 0x309b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3055C0u;
    if (runtime->hasFunction(0x3055C0u)) {
        auto targetFn = runtime->lookupFunction(0x3055C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309B68u; }
        if (ctx->pc != 0x309B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003055C0_0x3055c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309B68u; }
        if (ctx->pc != 0x309B68u) { return; }
    }
    ctx->pc = 0x309B68u;
label_309b68:
    // 0x309b68: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x309b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
label_309b6c:
    // 0x309b6c: 0xe6150dc8  swc1        $f21, 0xDC8($s0)
    ctx->pc = 0x309b6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3528), bits); }
label_309b70:
    // 0x309b70: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x309b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
label_309b74:
    // 0x309b74: 0xc6000930  lwc1        $f0, 0x930($s0)
    ctx->pc = 0x309b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_309b78:
    // 0x309b78: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x309b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_309b7c:
    // 0x309b7c: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x309b7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_309b80:
    // 0x309b80: 0xc0c753c  jal         func_31D4F0
label_309b84:
    if (ctx->pc == 0x309B84u) {
        ctx->pc = 0x309B84u;
            // 0x309b84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x309B88u;
        goto label_309b88;
    }
    ctx->pc = 0x309B80u;
    SET_GPR_U32(ctx, 31, 0x309B88u);
    ctx->pc = 0x309B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309B80u;
            // 0x309b84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309B88u; }
        if (ctx->pc != 0x309B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309B88u; }
        if (ctx->pc != 0x309B88u) { return; }
    }
    ctx->pc = 0x309B88u;
label_309b88:
    // 0x309b88: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x309b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_309b8c:
    // 0x309b8c: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x309b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_309b90:
    // 0x309b90: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x309b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_309b94:
    // 0x309b94: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x309b94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_309b98:
    // 0x309b98: 0xc0c753c  jal         func_31D4F0
label_309b9c:
    if (ctx->pc == 0x309B9Cu) {
        ctx->pc = 0x309B9Cu;
            // 0x309b9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x309BA0u;
        goto label_309ba0;
    }
    ctx->pc = 0x309B98u;
    SET_GPR_U32(ctx, 31, 0x309BA0u);
    ctx->pc = 0x309B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309B98u;
            // 0x309b9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309BA0u; }
        if (ctx->pc != 0x309BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309BA0u; }
        if (ctx->pc != 0x309BA0u) { return; }
    }
    ctx->pc = 0x309BA0u;
label_309ba0:
    // 0x309ba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309ba4:
    // 0x309ba4: 0x0  nop
    ctx->pc = 0x309ba4u;
    // NOP
label_309ba8:
    // 0x309ba8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x309ba8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309bac:
    // 0x309bac: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_309bb0:
    if (ctx->pc == 0x309BB0u) {
        ctx->pc = 0x309BB0u;
            // 0x309bb0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x309BB4u;
        goto label_309bb4;
    }
    ctx->pc = 0x309BACu;
    {
        const bool branch_taken_0x309bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309bac) {
            ctx->pc = 0x309BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309BACu;
            // 0x309bb0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309BC8u;
            goto label_309bc8;
        }
    }
    ctx->pc = 0x309BB4u;
label_309bb4:
    // 0x309bb4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x309bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_309bb8:
    // 0x309bb8: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x309bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_309bbc:
    // 0x309bbc: 0x320f809  jalr        $t9
label_309bc0:
    if (ctx->pc == 0x309BC0u) {
        ctx->pc = 0x309BC0u;
            // 0x309bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309BC4u;
        goto label_309bc4;
    }
    ctx->pc = 0x309BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x309BC4u);
        ctx->pc = 0x309BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309BBCu;
            // 0x309bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x309BC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x309BC4u; }
            if (ctx->pc != 0x309BC4u) { return; }
        }
        }
    }
    ctx->pc = 0x309BC4u;
label_309bc4:
    // 0x309bc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x309bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_309bc8:
    // 0x309bc8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x309bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_309bcc:
    // 0x309bcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x309bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_309bd0:
    // 0x309bd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x309bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_309bd4:
    // 0x309bd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x309bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_309bd8:
    // 0x309bd8: 0x3e00008  jr          $ra
label_309bdc:
    if (ctx->pc == 0x309BDCu) {
        ctx->pc = 0x309BDCu;
            // 0x309bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x309BE0u;
        goto label_309be0;
    }
    ctx->pc = 0x309BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309BD8u;
            // 0x309bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309BE0u;
label_309be0:
    // 0x309be0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x309be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_309be4:
    // 0x309be4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_309be8:
    // 0x309be8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x309be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_309bec:
    // 0x309bec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x309becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_309bf0:
    // 0x309bf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x309bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309bf4:
    // 0x309bf4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x309bf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_309bf8:
    // 0x309bf8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x309bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_309bfc:
    // 0x309bfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x309bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_309c00:
    // 0x309c00: 0x8c5000c8  lw          $s0, 0xC8($v0)
    ctx->pc = 0x309c00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_309c04:
    // 0x309c04: 0xc04f26c  jal         func_13C9B0
label_309c08:
    if (ctx->pc == 0x309C08u) {
        ctx->pc = 0x309C08u;
            // 0x309c08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x309C0Cu;
        goto label_309c0c;
    }
    ctx->pc = 0x309C04u;
    SET_GPR_U32(ctx, 31, 0x309C0Cu);
    ctx->pc = 0x309C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309C04u;
            // 0x309c08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309C0Cu; }
        if (ctx->pc != 0x309C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309C0Cu; }
        if (ctx->pc != 0x309C0Cu) { return; }
    }
    ctx->pc = 0x309C0Cu;
label_309c0c:
    // 0x309c0c: 0xc6060de4  lwc1        $f6, 0xDE4($s0)
    ctx->pc = 0x309c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_309c10:
    // 0x309c10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309c14:
    // 0x309c14: 0x0  nop
    ctx->pc = 0x309c14u;
    // NOP
label_309c18:
    // 0x309c18: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x309c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309c1c:
    // 0x309c1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_309c20:
    if (ctx->pc == 0x309C20u) {
        ctx->pc = 0x309C20u;
            // 0x309c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x309C24u;
        goto label_309c24;
    }
    ctx->pc = 0x309C1Cu;
    {
        const bool branch_taken_0x309c1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309C1Cu;
            // 0x309c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c1c) {
            ctx->pc = 0x309C28u;
            goto label_309c28;
        }
    }
    ctx->pc = 0x309C24u;
label_309c24:
    // 0x309c24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309c28:
    // 0x309c28: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_309c2c:
    if (ctx->pc == 0x309C2Cu) {
        ctx->pc = 0x309C2Cu;
            // 0x309c2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x309C30u;
        goto label_309c30;
    }
    ctx->pc = 0x309C28u;
    {
        const bool branch_taken_0x309c28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x309c28) {
            ctx->pc = 0x309C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309C28u;
            // 0x309c2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309C3Cu;
            goto label_309c3c;
        }
    }
    ctx->pc = 0x309C30u;
label_309c30:
    // 0x309c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309c34:
    // 0x309c34: 0x10000007  b           . + 4 + (0x7 << 2)
label_309c38:
    if (ctx->pc == 0x309C38u) {
        ctx->pc = 0x309C38u;
            // 0x309c38: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x309C3Cu;
        goto label_309c3c;
    }
    ctx->pc = 0x309C34u;
    {
        const bool branch_taken_0x309c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309C34u;
            // 0x309c38: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c34) {
            ctx->pc = 0x309C54u;
            goto label_309c54;
        }
    }
    ctx->pc = 0x309C3Cu;
label_309c3c:
    // 0x309c3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_309c40:
    // 0x309c40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x309c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_309c44:
    // 0x309c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309c48:
    // 0x309c48: 0x0  nop
    ctx->pc = 0x309c48u;
    // NOP
label_309c4c:
    // 0x309c4c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x309c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_309c50:
    // 0x309c50: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x309c50u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_309c54:
    // 0x309c54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x309c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_309c58:
    // 0x309c58: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x309c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_309c5c:
    // 0x309c5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x309c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_309c60:
    // 0x309c60: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x309c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_309c64:
    // 0x309c64: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x309c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_309c68:
    // 0x309c68: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x309c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_309c6c:
    // 0x309c6c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x309c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_309c70:
    // 0x309c70: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x309c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_309c74:
    // 0x309c74: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x309c74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_309c78:
    // 0x309c78: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x309c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_309c7c:
    // 0x309c7c: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x309c7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_309c80:
    // 0x309c80: 0x46023102  mul.s       $f4, $f6, $f2
    ctx->pc = 0x309c80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_309c84:
    // 0x309c84: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x309c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_309c88:
    // 0x309c88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x309c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309c8c:
    // 0x309c8c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x309c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_309c90:
    // 0x309c90: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x309c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_309c94:
    // 0x309c94: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x309c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_309c98:
    // 0x309c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309c9c:
    // 0x309c9c: 0x0  nop
    ctx->pc = 0x309c9cu;
    // NOP
label_309ca0:
    // 0x309ca0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309ca4:
    // 0x309ca4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_309ca8:
    if (ctx->pc == 0x309CA8u) {
        ctx->pc = 0x309CA8u;
            // 0x309ca8: 0xe621005c  swc1        $f1, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->pc = 0x309CACu;
        goto label_309cac;
    }
    ctx->pc = 0x309CA4u;
    {
        const bool branch_taken_0x309ca4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309CA4u;
            // 0x309ca8: 0xe621005c  swc1        $f1, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ca4) {
            ctx->pc = 0x309CB0u;
            goto label_309cb0;
        }
    }
    ctx->pc = 0x309CACu;
label_309cac:
    // 0x309cac: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x309cacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_309cb0:
    // 0x309cb0: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x309cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_309cb4:
    // 0x309cb4: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x309cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_309cb8:
    // 0x309cb8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x309cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_309cbc:
    // 0x309cbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_309cc0:
    // 0x309cc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309cc4:
    // 0x309cc4: 0x0  nop
    ctx->pc = 0x309cc4u;
    // NOP
label_309cc8:
    // 0x309cc8: 0x46040882  mul.s       $f2, $f1, $f4
    ctx->pc = 0x309cc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_309ccc:
    // 0x309ccc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x309cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_309cd0:
    // 0x309cd0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x309cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_309cd4:
    // 0x309cd4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x309cd4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309cd8:
    // 0x309cd8: 0x0  nop
    ctx->pc = 0x309cd8u;
    // NOP
label_309cdc:
    // 0x309cdc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x309cdcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_309ce0:
    // 0x309ce0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x309ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_309ce4:
    // 0x309ce4: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x309ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_309ce8:
    // 0x309ce8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x309ce8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309cec:
    // 0x309cec: 0x0  nop
    ctx->pc = 0x309cecu;
    // NOP
label_309cf0:
    // 0x309cf0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x309cf0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_309cf4:
    // 0x309cf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x309cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309cf8:
    // 0x309cf8: 0x0  nop
    ctx->pc = 0x309cf8u;
    // NOP
label_309cfc:
    // 0x309cfc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x309cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_309d00:
    // 0x309d00: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x309d00u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
label_309d04:
    // 0x309d04: 0x0  nop
    ctx->pc = 0x309d04u;
    // NOP
label_309d08:
    // 0x309d08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309d0c:
    // 0x309d0c: 0xc0477a8  jal         func_11DEA0
label_309d10:
    if (ctx->pc == 0x309D10u) {
        ctx->pc = 0x309D10u;
            // 0x309d10: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x309D14u;
        goto label_309d14;
    }
    ctx->pc = 0x309D0Cu;
    SET_GPR_U32(ctx, 31, 0x309D14u);
    ctx->pc = 0x309D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309D0Cu;
            // 0x309d10: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D14u; }
        if (ctx->pc != 0x309D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D14u; }
        if (ctx->pc != 0x309D14u) { return; }
    }
    ctx->pc = 0x309D14u;
label_309d14:
    // 0x309d14: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x309d14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_309d18:
    // 0x309d18: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x309d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_309d1c:
    // 0x309d1c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x309d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_309d20:
    // 0x309d20: 0xc6230060  lwc1        $f3, 0x60($s1)
    ctx->pc = 0x309d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_309d24:
    // 0x309d24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x309d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309d28:
    // 0x309d28: 0xc6040dec  lwc1        $f4, 0xDEC($s0)
    ctx->pc = 0x309d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_309d2c:
    // 0x309d2c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x309d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_309d30:
    // 0x309d30: 0x0  nop
    ctx->pc = 0x309d30u;
    // NOP
label_309d34:
    // 0x309d34: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x309d34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_309d38:
    // 0x309d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309d3c:
    // 0x309d3c: 0x4604109c  madd.s      $f2, $f2, $f4
    ctx->pc = 0x309d3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_309d40:
    // 0x309d40: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x309d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309d44:
    // 0x309d44: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_309d48:
    if (ctx->pc == 0x309D48u) {
        ctx->pc = 0x309D48u;
            // 0x309d48: 0x3c033d4c  lui         $v1, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
        ctx->pc = 0x309D4Cu;
        goto label_309d4c;
    }
    ctx->pc = 0x309D44u;
    {
        const bool branch_taken_0x309d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309d44) {
            ctx->pc = 0x309D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309D44u;
            // 0x309d48: 0x3c033d4c  lui         $v1, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309D54u;
            goto label_309d54;
        }
    }
    ctx->pc = 0x309D4Cu;
label_309d4c:
    // 0x309d4c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x309d4cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_309d50:
    // 0x309d50: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x309d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_309d54:
    // 0x309d54: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x309d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_309d58:
    // 0x309d58: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_309d5c:
    // 0x309d5c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x309d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_309d60:
    // 0x309d60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309d64:
    // 0x309d64: 0x0  nop
    ctx->pc = 0x309d64u;
    // NOP
label_309d68:
    // 0x309d68: 0x46040502  mul.s       $f20, $f0, $f4
    ctx->pc = 0x309d68u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_309d6c:
    // 0x309d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309d70:
    // 0x309d70: 0xc0477a8  jal         func_11DEA0
label_309d74:
    if (ctx->pc == 0x309D74u) {
        ctx->pc = 0x309D74u;
            // 0x309d74: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x309D78u;
        goto label_309d78;
    }
    ctx->pc = 0x309D70u;
    SET_GPR_U32(ctx, 31, 0x309D78u);
    ctx->pc = 0x309D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309D70u;
            // 0x309d74: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D78u; }
        if (ctx->pc != 0x309D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D78u; }
        if (ctx->pc != 0x309D78u) { return; }
    }
    ctx->pc = 0x309D78u;
label_309d78:
    // 0x309d78: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x309d78u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_309d7c:
    // 0x309d7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x309d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_309d80:
    // 0x309d80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x309d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309d84:
    // 0x309d84: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x309d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_309d88:
    // 0x309d88: 0xc04ce64  jal         func_133990
label_309d8c:
    if (ctx->pc == 0x309D8Cu) {
        ctx->pc = 0x309D8Cu;
            // 0x309d8c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x309D90u;
        goto label_309d90;
    }
    ctx->pc = 0x309D88u;
    SET_GPR_U32(ctx, 31, 0x309D90u);
    ctx->pc = 0x309D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309D88u;
            // 0x309d8c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D90u; }
        if (ctx->pc != 0x309D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D90u; }
        if (ctx->pc != 0x309D90u) { return; }
    }
    ctx->pc = 0x309D90u;
label_309d90:
    // 0x309d90: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x309d90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_309d94:
    // 0x309d94: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x309d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_309d98:
    // 0x309d98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x309d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_309d9c:
    // 0x309d9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x309d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_309da0:
    // 0x309da0: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x309da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_309da4:
    // 0x309da4: 0xc04cd60  jal         func_133580
label_309da8:
    if (ctx->pc == 0x309DA8u) {
        ctx->pc = 0x309DA8u;
            // 0x309da8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309DACu;
        goto label_309dac;
    }
    ctx->pc = 0x309DA4u;
    SET_GPR_U32(ctx, 31, 0x309DACu);
    ctx->pc = 0x309DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309DA4u;
            // 0x309da8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309DACu; }
        if (ctx->pc != 0x309DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309DACu; }
        if (ctx->pc != 0x309DACu) { return; }
    }
    ctx->pc = 0x309DACu;
label_309dac:
    // 0x309dac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x309dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_309db0:
    // 0x309db0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x309db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_309db4:
    // 0x309db4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x309db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_309db8:
    // 0x309db8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x309db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_309dbc:
    // 0x309dbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x309dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_309dc0:
    // 0x309dc0: 0x3e00008  jr          $ra
label_309dc4:
    if (ctx->pc == 0x309DC4u) {
        ctx->pc = 0x309DC4u;
            // 0x309dc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x309DC8u;
        goto label_309dc8;
    }
    ctx->pc = 0x309DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309DC0u;
            // 0x309dc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309DC8u;
label_309dc8:
    // 0x309dc8: 0x0  nop
    ctx->pc = 0x309dc8u;
    // NOP
label_309dcc:
    // 0x309dcc: 0x0  nop
    ctx->pc = 0x309dccu;
    // NOP
label_309dd0:
    // 0x309dd0: 0x8102f00  j           func_40BC00
label_309dd4:
    if (ctx->pc == 0x309DD4u) {
        ctx->pc = 0x309DD8u;
        goto label_309dd8;
    }
    ctx->pc = 0x309DD0u;
    ctx->pc = 0x40BC00u;
    if (runtime->hasFunction(0x40BC00u)) {
        auto targetFn = runtime->lookupFunction(0x40BC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0040BC00_0x40bc00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x309DD8u;
label_309dd8:
    // 0x309dd8: 0x0  nop
    ctx->pc = 0x309dd8u;
    // NOP
label_309ddc:
    // 0x309ddc: 0x0  nop
    ctx->pc = 0x309ddcu;
    // NOP
label_309de0:
    // 0x309de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x309de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_309de4:
    // 0x309de4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x309de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_309de8:
    // 0x309de8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x309de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_309dec:
    // 0x309dec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x309decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_309df0:
    // 0x309df0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x309df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_309df4:
    // 0x309df4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x309df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_309df8:
    // 0x309df8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x309df8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_309dfc:
    // 0x309dfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x309dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_309e00:
    // 0x309e00: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x309e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_309e04:
    // 0x309e04: 0xc461f2a0  lwc1        $f1, -0xD60($v1)
    ctx->pc = 0x309e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309e08:
    // 0x309e08: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x309e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_309e0c:
    // 0x309e0c: 0x8cb100c8  lw          $s1, 0xC8($a1)
    ctx->pc = 0x309e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_309e10:
    // 0x309e10: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x309e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_309e14:
    // 0x309e14: 0xc460f2a8  lwc1        $f0, -0xD58($v1)
    ctx->pc = 0x309e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_309e18:
    // 0x309e18: 0xc482f2a4  lwc1        $f2, -0xD5C($a0)
    ctx->pc = 0x309e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294963876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_309e1c:
    // 0x309e1c: 0x8e320550  lw          $s2, 0x550($s1)
    ctx->pc = 0x309e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_309e20:
    // 0x309e20: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x309e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_309e24:
    // 0x309e24: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x309e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_309e28:
    // 0x309e28: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x309e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_309e2c:
    // 0x309e2c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x309e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_309e30:
    // 0x309e30: 0xc461f2ac  lwc1        $f1, -0xD54($v1)
    ctx->pc = 0x309e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309e34:
    // 0x309e34: 0xc6240dc4  lwc1        $f4, 0xDC4($s1)
    ctx->pc = 0x309e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_309e38:
    // 0x309e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309e3c:
    // 0x309e3c: 0x0  nop
    ctx->pc = 0x309e3cu;
    // NOP
label_309e40:
    // 0x309e40: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x309e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_309e44:
    // 0x309e44: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x309e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309e48:
    // 0x309e48: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_309e4c:
    if (ctx->pc == 0x309E4Cu) {
        ctx->pc = 0x309E4Cu;
            // 0x309e4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x309E50u;
        goto label_309e50;
    }
    ctx->pc = 0x309E48u;
    {
        const bool branch_taken_0x309e48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309E48u;
            // 0x309e4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e48) {
            ctx->pc = 0x309E54u;
            goto label_309e54;
        }
    }
    ctx->pc = 0x309E50u;
label_309e50:
    // 0x309e50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309e54:
    // 0x309e54: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_309e58:
    if (ctx->pc == 0x309E58u) {
        ctx->pc = 0x309E58u;
            // 0x309e58: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x309E5Cu;
        goto label_309e5c;
    }
    ctx->pc = 0x309E54u;
    {
        const bool branch_taken_0x309e54 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x309e54) {
            ctx->pc = 0x309E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309E54u;
            // 0x309e58: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309E68u;
            goto label_309e68;
        }
    }
    ctx->pc = 0x309E5Cu;
label_309e5c:
    // 0x309e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309e60:
    // 0x309e60: 0x10000007  b           . + 4 + (0x7 << 2)
label_309e64:
    if (ctx->pc == 0x309E64u) {
        ctx->pc = 0x309E64u;
            // 0x309e64: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x309E68u;
        goto label_309e68;
    }
    ctx->pc = 0x309E60u;
    {
        const bool branch_taken_0x309e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309E60u;
            // 0x309e64: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e60) {
            ctx->pc = 0x309E80u;
            goto label_309e80;
        }
    }
    ctx->pc = 0x309E68u;
label_309e68:
    // 0x309e68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x309e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_309e6c:
    // 0x309e6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x309e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_309e70:
    // 0x309e70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x309e70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309e74:
    // 0x309e74: 0x0  nop
    ctx->pc = 0x309e74u;
    // NOP
label_309e78:
    // 0x309e78: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x309e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_309e7c:
    // 0x309e7c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x309e7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_309e80:
    // 0x309e80: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x309e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_309e84:
    // 0x309e84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_309e88:
    // 0x309e88: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x309e88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_309e8c:
    // 0x309e8c: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x309e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_309e90:
    // 0x309e90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x309e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309e94:
    // 0x309e94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309e98:
    // 0x309e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x309e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309e9c:
    // 0x309e9c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x309e9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_309ea0:
    // 0x309ea0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x309ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_309ea4:
    // 0x309ea4: 0x4603155d  msub.s      $f21, $f2, $f3
    ctx->pc = 0x309ea4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_309ea8:
    // 0x309ea8: 0x4604ad02  mul.s       $f20, $f21, $f4
    ctx->pc = 0x309ea8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
label_309eac:
    // 0x309eac: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x309eacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_309eb0:
    // 0x309eb0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x309eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_309eb4:
    // 0x309eb4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x309eb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309eb8:
    // 0x309eb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_309ebc:
    if (ctx->pc == 0x309EBCu) {
        ctx->pc = 0x309EBCu;
            // 0x309ebc: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x309EC0u;
        goto label_309ec0;
    }
    ctx->pc = 0x309EB8u;
    {
        const bool branch_taken_0x309eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309EB8u;
            // 0x309ebc: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309eb8) {
            ctx->pc = 0x309EC4u;
            goto label_309ec4;
        }
    }
    ctx->pc = 0x309EC0u;
label_309ec0:
    // 0x309ec0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309ec4:
    // 0x309ec4: 0x8244010f  lb          $a0, 0x10F($s2)
    ctx->pc = 0x309ec4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 271)));
label_309ec8:
    // 0x309ec8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x309ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_309ecc:
    // 0x309ecc: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
label_309ed0:
    if (ctx->pc == 0x309ED0u) {
        ctx->pc = 0x309ED0u;
            // 0x309ed0: 0x658026  xor         $s0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->pc = 0x309ED4u;
        goto label_309ed4;
    }
    ctx->pc = 0x309ECCu;
    {
        const bool branch_taken_0x309ecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x309ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309ECCu;
            // 0x309ed0: 0x658026  xor         $s0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ecc) {
            ctx->pc = 0x309F5Cu;
            goto label_309f5c;
        }
    }
    ctx->pc = 0x309ED4u;
label_309ed4:
    // 0x309ed4: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x309ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_309ed8:
    // 0x309ed8: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x309ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_309edc:
    // 0x309edc: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x309edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309ee0:
    // 0x309ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309ee4:
    // 0x309ee4: 0x0  nop
    ctx->pc = 0x309ee4u;
    // NOP
label_309ee8:
    // 0x309ee8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309eec:
    // 0x309eec: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_309ef0:
    if (ctx->pc == 0x309EF0u) {
        ctx->pc = 0x309EF0u;
            // 0x309ef0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x309EF4u;
        goto label_309ef4;
    }
    ctx->pc = 0x309EECu;
    {
        const bool branch_taken_0x309eec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309eec) {
            ctx->pc = 0x309EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309EECu;
            // 0x309ef0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309F60u;
            goto label_309f60;
        }
    }
    ctx->pc = 0x309EF4u;
label_309ef4:
    // 0x309ef4: 0x8243010c  lb          $v1, 0x10C($s2)
    ctx->pc = 0x309ef4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_309ef8:
    // 0x309ef8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x309ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309efc:
    // 0x309efc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x309efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_309f00:
    // 0x309f00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x309f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_309f04:
    // 0x309f04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_309f08:
    // 0x309f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309f0c:
    // 0x309f0c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x309f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_309f10:
    // 0x309f10: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x309f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_309f14:
    // 0x309f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_309f18:
    // 0x309f18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x309f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_309f1c:
    // 0x309f1c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x309f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_309f20:
    // 0x309f20: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x309f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_309f24:
    // 0x309f24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x309f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_309f28:
    // 0x309f28: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x309f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_309f2c:
    // 0x309f2c: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x309f2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_309f30:
    // 0x309f30: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x309f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_309f34:
    // 0x309f34: 0x320f809  jalr        $t9
label_309f38:
    if (ctx->pc == 0x309F38u) {
        ctx->pc = 0x309F38u;
            // 0x309f38: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x309F3Cu;
        goto label_309f3c;
    }
    ctx->pc = 0x309F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x309F3Cu);
        ctx->pc = 0x309F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309F34u;
            // 0x309f38: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x309F3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x309F3Cu; }
            if (ctx->pc != 0x309F3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x309F3Cu;
label_309f3c:
    // 0x309f3c: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x309f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_309f40:
    // 0x309f40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x309f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_309f44:
    // 0x309f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309f48:
    // 0x309f48: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x309f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_309f4c:
    // 0x309f4c: 0x320f809  jalr        $t9
label_309f50:
    if (ctx->pc == 0x309F50u) {
        ctx->pc = 0x309F50u;
            // 0x309f50: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309F54u;
        goto label_309f54;
    }
    ctx->pc = 0x309F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x309F54u);
        ctx->pc = 0x309F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309F4Cu;
            // 0x309f50: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x309F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x309F54u; }
            if (ctx->pc != 0x309F54u) { return; }
        }
        }
    }
    ctx->pc = 0x309F54u;
label_309f54:
    // 0x309f54: 0x10000025  b           . + 4 + (0x25 << 2)
label_309f58:
    if (ctx->pc == 0x309F58u) {
        ctx->pc = 0x309F58u;
            // 0x309f58: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x309F5Cu;
        goto label_309f5c;
    }
    ctx->pc = 0x309F54u;
    {
        const bool branch_taken_0x309f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309F54u;
            // 0x309f58: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f54) {
            ctx->pc = 0x309FECu;
            goto label_309fec;
        }
    }
    ctx->pc = 0x309F5Cu;
label_309f5c:
    // 0x309f5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x309f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309f60:
    // 0x309f60: 0x14860021  bne         $a0, $a2, . + 4 + (0x21 << 2)
label_309f64:
    if (ctx->pc == 0x309F64u) {
        ctx->pc = 0x309F68u;
        goto label_309f68;
    }
    ctx->pc = 0x309F60u;
    {
        const bool branch_taken_0x309f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x309f60) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309F68u;
label_309f68:
    // 0x309f68: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x309f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_309f6c:
    // 0x309f6c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x309f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_309f70:
    // 0x309f70: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x309f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309f74:
    // 0x309f74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309f78:
    // 0x309f78: 0x0  nop
    ctx->pc = 0x309f78u;
    // NOP
label_309f7c:
    // 0x309f7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309f80:
    // 0x309f80: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_309f84:
    if (ctx->pc == 0x309F84u) {
        ctx->pc = 0x309F88u;
        goto label_309f88;
    }
    ctx->pc = 0x309F80u;
    {
        const bool branch_taken_0x309f80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309f80) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309F88u;
label_309f88:
    // 0x309f88: 0x8243010c  lb          $v1, 0x10C($s2)
    ctx->pc = 0x309f88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_309f8c:
    // 0x309f8c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x309f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_309f90:
    // 0x309f90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_309f94:
    // 0x309f94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x309f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_309f98:
    // 0x309f98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x309f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_309f9c:
    // 0x309f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309fa0:
    // 0x309fa0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x309fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_309fa4:
    // 0x309fa4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x309fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_309fa8:
    // 0x309fa8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x309fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_309fac:
    // 0x309fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_309fb0:
    // 0x309fb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x309fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_309fb4:
    // 0x309fb4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x309fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_309fb8:
    // 0x309fb8: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x309fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_309fbc:
    // 0x309fbc: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x309fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_309fc0:
    // 0x309fc0: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x309fc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_309fc4:
    // 0x309fc4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x309fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_309fc8:
    // 0x309fc8: 0x320f809  jalr        $t9
label_309fcc:
    if (ctx->pc == 0x309FCCu) {
        ctx->pc = 0x309FCCu;
            // 0x309fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309FD0u;
        goto label_309fd0;
    }
    ctx->pc = 0x309FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x309FD0u);
        ctx->pc = 0x309FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309FC8u;
            // 0x309fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x309FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x309FD0u; }
            if (ctx->pc != 0x309FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x309FD0u;
label_309fd0:
    // 0x309fd0: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x309fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_309fd4:
    // 0x309fd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x309fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_309fd8:
    // 0x309fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309fdc:
    // 0x309fdc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x309fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_309fe0:
    // 0x309fe0: 0x320f809  jalr        $t9
label_309fe4:
    if (ctx->pc == 0x309FE4u) {
        ctx->pc = 0x309FE4u;
            // 0x309fe4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x309FE8u;
        goto label_309fe8;
    }
    ctx->pc = 0x309FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x309FE8u);
        ctx->pc = 0x309FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309FE0u;
            // 0x309fe4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x309FE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x309FE8u; }
            if (ctx->pc != 0x309FE8u) { return; }
        }
        }
    }
    ctx->pc = 0x309FE8u;
label_309fe8:
    // 0x309fe8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x309fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_309fec:
    // 0x309fec: 0x8244010d  lb          $a0, 0x10D($s2)
    ctx->pc = 0x309fecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_309ff0:
    // 0x309ff0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x309ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_309ff4:
    // 0x309ff4: 0x0  nop
    ctx->pc = 0x309ff4u;
    // NOP
label_309ff8:
    // 0x309ff8: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x309ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309ffc:
    // 0x309ffc: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_30a000:
    if (ctx->pc == 0x30A000u) {
        ctx->pc = 0x30A000u;
            // 0x30a000: 0xa2440114  sb          $a0, 0x114($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 276), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x30A004u;
        goto label_30a004;
    }
    ctx->pc = 0x309FFCu;
    {
        const bool branch_taken_0x309ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309FFCu;
            // 0x30a000: 0xa2440114  sb          $a0, 0x114($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 276), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ffc) {
            ctx->pc = 0x30A050u;
            goto label_30a050;
        }
    }
    ctx->pc = 0x30A004u;
label_30a004:
    // 0x30a004: 0x0  nop
    ctx->pc = 0x30a004u;
    // NOP
label_30a008:
    // 0x30a008: 0x0  nop
    ctx->pc = 0x30a008u;
    // NOP
label_30a00c:
    // 0x30a00c: 0x4604a043  div.s       $f1, $f20, $f4
    ctx->pc = 0x30a00cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[4];
label_30a010:
    // 0x30a010: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30a010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_30a014:
    // 0x30a014: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x30a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_30a018:
    // 0x30a018: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x30a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_30a01c:
    // 0x30a01c: 0xa2430111  sb          $v1, 0x111($s2)
    ctx->pc = 0x30a01cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 3));
label_30a020:
    // 0x30a020: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x30a020u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_30a024:
    // 0x30a024: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30a024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_30a028:
    // 0x30a028: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x30a028u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_30a02c:
    // 0x30a02c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30a030:
    // 0x30a030: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30a030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30a034:
    // 0x30a034: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x30a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_30a038:
    // 0x30a038: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x30a038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_30a03c:
    // 0x30a03c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30a040:
    // 0x30a040: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x30a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_30a044:
    // 0x30a044: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x30a044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_30a048:
    // 0x30a048: 0x1000003e  b           . + 4 + (0x3E << 2)
label_30a04c:
    if (ctx->pc == 0x30A04Cu) {
        ctx->pc = 0x30A04Cu;
            // 0x30a04c: 0xae200dcc  sw          $zero, 0xDCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
        ctx->pc = 0x30A050u;
        goto label_30a050;
    }
    ctx->pc = 0x30A048u;
    {
        const bool branch_taken_0x30a048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A048u;
            // 0x30a04c: 0xae200dcc  sw          $zero, 0xDCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a048) {
            ctx->pc = 0x30A144u;
            goto label_30a144;
        }
    }
    ctx->pc = 0x30A050u;
label_30a050:
    // 0x30a050: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x30a050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_30a054:
    // 0x30a054: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x30a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_30a058:
    // 0x30a058: 0xc6220dcc  lwc1        $f2, 0xDCC($s1)
    ctx->pc = 0x30a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30a05c:
    // 0x30a05c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30a05cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30a060:
    // 0x30a060: 0xc6230dbc  lwc1        $f3, 0xDBC($s1)
    ctx->pc = 0x30a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30a064:
    // 0x30a064: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x30a064u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30a068:
    // 0x30a068: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x30a068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_30a06c:
    // 0x30a06c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x30a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30a070:
    // 0x30a070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a074:
    // 0x30a074: 0x0  nop
    ctx->pc = 0x30a074u;
    // NOP
label_30a078:
    // 0x30a078: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x30a078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_30a07c:
    // 0x30a07c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30a07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a080:
    // 0x30a080: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_30a084:
    if (ctx->pc == 0x30A084u) {
        ctx->pc = 0x30A084u;
            // 0x30a084: 0xe6210dcc  swc1        $f1, 0xDCC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3532), bits); }
        ctx->pc = 0x30A088u;
        goto label_30a088;
    }
    ctx->pc = 0x30A080u;
    {
        const bool branch_taken_0x30a080 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A080u;
            // 0x30a084: 0xe6210dcc  swc1        $f1, 0xDCC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a080) {
            ctx->pc = 0x30A0FCu;
            goto label_30a0fc;
        }
    }
    ctx->pc = 0x30A088u;
label_30a088:
    // 0x30a088: 0x4604a001  sub.s       $f0, $f20, $f4
    ctx->pc = 0x30a088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
label_30a08c:
    // 0x30a08c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_30a090:
    // 0x30a090: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x30a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_30a094:
    // 0x30a094: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x30a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_30a098:
    // 0x30a098: 0x46040043  div.s       $f1, $f0, $f4
    ctx->pc = 0x30a098u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[4];
label_30a09c:
    // 0x30a09c: 0xa243010f  sb          $v1, 0x10F($s2)
    ctx->pc = 0x30a09cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 271), (uint8_t)GPR_U32(ctx, 3));
label_30a0a0:
    // 0x30a0a0: 0x82460112  lb          $a2, 0x112($s2)
    ctx->pc = 0x30a0a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 274)));
label_30a0a4:
    // 0x30a0a4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30a0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_30a0a8:
    // 0x30a0a8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x30a0a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_30a0ac:
    // 0x30a0ac: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x30a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_30a0b0:
    // 0x30a0b0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x30a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30a0b4:
    // 0x30a0b4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x30a0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_30a0b8:
    // 0x30a0b8: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x30a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_30a0bc:
    // 0x30a0bc: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x30a0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_30a0c0:
    // 0x30a0c0: 0x8cc6005c  lw          $a2, 0x5C($a2)
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_30a0c4:
    // 0x30a0c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x30a0c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_30a0c8:
    // 0x30a0c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30a0cc:
    // 0x30a0cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30a0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_30a0d0:
    // 0x30a0d0: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x30a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_30a0d4:
    // 0x30a0d4: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x30a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
label_30a0d8:
    // 0x30a0d8: 0xa2440111  sb          $a0, 0x111($s2)
    ctx->pc = 0x30a0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 4));
label_30a0dc:
    // 0x30a0dc: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x30a0dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_30a0e0:
    // 0x30a0e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30a0e4:
    // 0x30a0e4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x30a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_30a0e8:
    // 0x30a0e8: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x30a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_30a0ec:
    // 0x30a0ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30a0f0:
    // 0x30a0f0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x30a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_30a0f4:
    // 0x30a0f4: 0x10000013  b           . + 4 + (0x13 << 2)
label_30a0f8:
    if (ctx->pc == 0x30A0F8u) {
        ctx->pc = 0x30A0F8u;
            // 0x30a0f8: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x30A0FCu;
        goto label_30a0fc;
    }
    ctx->pc = 0x30A0F4u;
    {
        const bool branch_taken_0x30a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A0F4u;
            // 0x30a0f8: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0f4) {
            ctx->pc = 0x30A144u;
            goto label_30a144;
        }
    }
    ctx->pc = 0x30A0FCu;
label_30a0fc:
    // 0x30a0fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_30a100:
    // 0x30a100: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x30a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_30a104:
    // 0x30a104: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x30a104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_30a108:
    // 0x30a108: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30a108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_30a10c:
    // 0x30a10c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30a10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30a110:
    // 0x30a110: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x30a110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_30a114:
    // 0x30a114: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x30a114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_30a118:
    // 0x30a118: 0xa2440111  sb          $a0, 0x111($s2)
    ctx->pc = 0x30a118u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 4));
label_30a11c:
    // 0x30a11c: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x30a11cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_30a120:
    // 0x30a120: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x30a120u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_30a124:
    // 0x30a124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30a124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30a128:
    // 0x30a128: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30a128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30a12c:
    // 0x30a12c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x30a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_30a130:
    // 0x30a130: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x30a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_30a134:
    // 0x30a134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30a138:
    // 0x30a138: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x30a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_30a13c:
    // 0x30a13c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x30a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_30a140:
    // 0x30a140: 0xe6200dc4  swc1        $f0, 0xDC4($s1)
    ctx->pc = 0x30a140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3524), bits); }
label_30a144:
    // 0x30a144: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x30a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_30a148:
    // 0x30a148: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30a148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_30a14c:
    // 0x30a14c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x30a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_30a150:
    // 0x30a150: 0xe6410050  swc1        $f1, 0x50($s2)
    ctx->pc = 0x30a150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_30a154:
    // 0x30a154: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x30a154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_30a158:
    // 0x30a158: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30a158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30a15c:
    // 0x30a15c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30a160:
    // 0x30a160: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30a160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30a164:
    // 0x30a164: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30a168:
    // 0x30a168: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30a168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30a16c:
    // 0x30a16c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30a16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30a170:
    // 0x30a170: 0x3e00008  jr          $ra
label_30a174:
    if (ctx->pc == 0x30A174u) {
        ctx->pc = 0x30A174u;
            // 0x30a174: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x30A178u;
        goto label_30a178;
    }
    ctx->pc = 0x30A170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A170u;
            // 0x30a174: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A178u;
label_30a178:
    // 0x30a178: 0x0  nop
    ctx->pc = 0x30a178u;
    // NOP
label_30a17c:
    // 0x30a17c: 0x0  nop
    ctx->pc = 0x30a17cu;
    // NOP
label_30a180:
    // 0x30a180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30a180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_30a184:
    // 0x30a184: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_30a188:
    // 0x30a188: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30a18c:
    // 0x30a18c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_30a190:
    // 0x30a190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30a190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a194:
    // 0x30a194: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x30a194u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_30a198:
    // 0x30a198: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30a198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30a19c:
    // 0x30a19c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x30a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_30a1a0:
    // 0x30a1a0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x30a1a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_30a1a4:
    // 0x30a1a4: 0x8c5000c8  lw          $s0, 0xC8($v0)
    ctx->pc = 0x30a1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_30a1a8:
    // 0x30a1a8: 0xc0754b4  jal         func_1D52D0
label_30a1ac:
    if (ctx->pc == 0x30A1ACu) {
        ctx->pc = 0x30A1ACu;
            // 0x30a1ac: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x30A1B0u;
        goto label_30a1b0;
    }
    ctx->pc = 0x30A1A8u;
    SET_GPR_U32(ctx, 31, 0x30A1B0u);
    ctx->pc = 0x30A1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A1A8u;
            // 0x30a1ac: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1B0u; }
        if (ctx->pc != 0x30A1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1B0u; }
        if (ctx->pc != 0x30A1B0u) { return; }
    }
    ctx->pc = 0x30A1B0u;
label_30a1b0:
    // 0x30a1b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_30a1b4:
    // 0x30a1b4: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x30a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_30a1b8:
    // 0x30a1b8: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x30a1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_30a1bc:
    // 0x30a1bc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x30a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_30a1c0:
    // 0x30a1c0: 0xc6020dbc  lwc1        $f2, 0xDBC($s0)
    ctx->pc = 0x30a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30a1c4:
    // 0x30a1c4: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x30a1c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_30a1c8:
    // 0x30a1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a1cc:
    // 0x30a1cc: 0xc4a70018  lwc1        $f7, 0x18($a1)
    ctx->pc = 0x30a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_30a1d0:
    // 0x30a1d0: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x30a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
label_30a1d4:
    // 0x30a1d4: 0x344212f7  ori         $v0, $v0, 0x12F7
    ctx->pc = 0x30a1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4855);
label_30a1d8:
    // 0x30a1d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30a1dc:
    // 0x30a1dc: 0x460710c2  mul.s       $f3, $f2, $f7
    ctx->pc = 0x30a1dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_30a1e0:
    // 0x30a1e0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x30a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_30a1e4:
    // 0x30a1e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30a1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30a1e8:
    // 0x30a1e8: 0x0  nop
    ctx->pc = 0x30a1e8u;
    // NOP
label_30a1ec:
    // 0x30a1ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30a1ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_30a1f0:
    // 0x30a1f0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x30a1f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_30a1f4:
    // 0x30a1f4: 0x0  nop
    ctx->pc = 0x30a1f4u;
    // NOP
label_30a1f8:
    // 0x30a1f8: 0xc6040de4  lwc1        $f4, 0xDE4($s0)
    ctx->pc = 0x30a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30a1fc:
    // 0x30a1fc: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x30a1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a200:
    // 0x30a200: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_30a204:
    if (ctx->pc == 0x30A204u) {
        ctx->pc = 0x30A204u;
            // 0x30a204: 0x3c023f40  lui         $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
        ctx->pc = 0x30A208u;
        goto label_30a208;
    }
    ctx->pc = 0x30A200u;
    {
        const bool branch_taken_0x30a200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a200) {
            ctx->pc = 0x30A204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A200u;
            // 0x30a204: 0x3c023f40  lui         $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A218u;
            goto label_30a218;
        }
    }
    ctx->pc = 0x30A208u;
label_30a208:
    // 0x30a208: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30a208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30a20c:
    // 0x30a20c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30a20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30a210:
    // 0x30a210: 0x10000013  b           . + 4 + (0x13 << 2)
label_30a214:
    if (ctx->pc == 0x30A214u) {
        ctx->pc = 0x30A214u;
            // 0x30a214: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->pc = 0x30A218u;
        goto label_30a218;
    }
    ctx->pc = 0x30A210u;
    {
        const bool branch_taken_0x30a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A210u;
            // 0x30a214: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a210) {
            ctx->pc = 0x30A260u;
            goto label_30a260;
        }
    }
    ctx->pc = 0x30A218u;
label_30a218:
    // 0x30a218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a21c:
    // 0x30a21c: 0x0  nop
    ctx->pc = 0x30a21cu;
    // NOP
label_30a220:
    // 0x30a220: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x30a220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a224:
    // 0x30a224: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_30a228:
    if (ctx->pc == 0x30A228u) {
        ctx->pc = 0x30A228u;
            // 0x30a228: 0x46012041  sub.s       $f1, $f4, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->pc = 0x30A22Cu;
        goto label_30a22c;
    }
    ctx->pc = 0x30A224u;
    {
        const bool branch_taken_0x30a224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a224) {
            ctx->pc = 0x30A228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A224u;
            // 0x30a228: 0x46012041  sub.s       $f1, $f4, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A238u;
            goto label_30a238;
        }
    }
    ctx->pc = 0x30A22Cu;
label_30a22c:
    // 0x30a22c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x30a22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30a230:
    // 0x30a230: 0x1000000a  b           . + 4 + (0xA << 2)
label_30a234:
    if (ctx->pc == 0x30A234u) {
        ctx->pc = 0x30A238u;
        goto label_30a238;
    }
    ctx->pc = 0x30A230u;
    {
        const bool branch_taken_0x30a230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a230) {
            ctx->pc = 0x30A25Cu;
            goto label_30a25c;
        }
    }
    ctx->pc = 0x30A238u;
label_30a238:
    // 0x30a238: 0x3c023e17  lui         $v0, 0x3E17
    ctx->pc = 0x30a238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15895 << 16));
label_30a23c:
    // 0x30a23c: 0x3443b424  ori         $v1, $v0, 0xB424
    ctx->pc = 0x30a23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46116);
label_30a240:
    // 0x30a240: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30a244:
    // 0x30a244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a248:
    // 0x30a248: 0x0  nop
    ctx->pc = 0x30a248u;
    // NOP
label_30a24c:
    // 0x30a24c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30a24cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_30a250:
    // 0x30a250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a254:
    // 0x30a254: 0x0  nop
    ctx->pc = 0x30a254u;
    // NOP
label_30a258:
    // 0x30a258: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x30a258u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30a25c:
    // 0x30a25c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x30a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_30a260:
    // 0x30a260: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x30a260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_30a264:
    // 0x30a264: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x30a264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_30a268:
    // 0x30a268: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x30a268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_30a26c:
    // 0x30a26c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x30a26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30a270:
    // 0x30a270: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x30a270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30a274:
    // 0x30a274: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30a274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_30a278:
    // 0x30a278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30a27c:
    // 0x30a27c: 0x8e030d74  lw          $v1, 0xD74($s0)
    ctx->pc = 0x30a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_30a280:
    // 0x30a280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30a284:
    // 0x30a284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a288:
    // 0x30a288: 0x906202c5  lbu         $v0, 0x2C5($v1)
    ctx->pc = 0x30a288u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 709)));
label_30a28c:
    // 0x30a28c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30a28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a290:
    // 0x30a290: 0x0  nop
    ctx->pc = 0x30a290u;
    // NOP
label_30a294:
    // 0x30a294: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x30a294u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_30a298:
    // 0x30a298: 0x4614315c  madd.s      $f5, $f6, $f20
    ctx->pc = 0x30a298u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[20]));
label_30a29c:
    // 0x30a29c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_30a2a0:
    // 0x30a2a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30a2a4:
    // 0x30a2a4: 0x80420283  lb          $v0, 0x283($v0)
    ctx->pc = 0x30a2a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 643)));
label_30a2a8:
    // 0x30a2a8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a2ac:
    // 0x30a2ac: 0x0  nop
    ctx->pc = 0x30a2acu;
    // NOP
label_30a2b0:
    // 0x30a2b0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x30a2b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_30a2b4:
    // 0x30a2b4: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x30a2b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
label_30a2b8:
    // 0x30a2b8: 0x0  nop
    ctx->pc = 0x30a2b8u;
    // NOP
label_30a2bc:
    // 0x30a2bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x30a2bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30a2c0:
    // 0x30a2c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30a2c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a2c4:
    // 0x30a2c4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_30a2c8:
    if (ctx->pc == 0x30A2C8u) {
        ctx->pc = 0x30A2C8u;
            // 0x30a2c8: 0xc6010dc0  lwc1        $f1, 0xDC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x30A2CCu;
        goto label_30a2cc;
    }
    ctx->pc = 0x30A2C4u;
    {
        const bool branch_taken_0x30a2c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a2c4) {
            ctx->pc = 0x30A2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2C4u;
            // 0x30a2c8: 0xc6010dc0  lwc1        $f1, 0xDC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A2E4u;
            goto label_30a2e4;
        }
    }
    ctx->pc = 0x30A2CCu;
label_30a2cc:
    // 0x30a2cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_30a2d0:
    // 0x30a2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a2d4:
    // 0x30a2d4: 0x0  nop
    ctx->pc = 0x30a2d4u;
    // NOP
label_30a2d8:
    // 0x30a2d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30a2d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30a2dc:
    // 0x30a2dc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x30a2dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_30a2e0:
    // 0x30a2e0: 0xc6010dc0  lwc1        $f1, 0xDC0($s0)
    ctx->pc = 0x30a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30a2e4:
    // 0x30a2e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a2e8:
    // 0x30a2e8: 0x0  nop
    ctx->pc = 0x30a2e8u;
    // NOP
label_30a2ec:
    // 0x30a2ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30a2ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a2f0:
    // 0x30a2f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_30a2f4:
    if (ctx->pc == 0x30A2F4u) {
        ctx->pc = 0x30A2F4u;
            // 0x30a2f4: 0xc6040dd4  lwc1        $f4, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x30A2F8u;
        goto label_30a2f8;
    }
    ctx->pc = 0x30A2F0u;
    {
        const bool branch_taken_0x30a2f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2F0u;
            // 0x30a2f4: 0xc6040dd4  lwc1        $f4, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2f0) {
            ctx->pc = 0x30A300u;
            goto label_30a300;
        }
    }
    ctx->pc = 0x30A2F8u;
label_30a2f8:
    // 0x30a2f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_30a2fc:
    if (ctx->pc == 0x30A2FCu) {
        ctx->pc = 0x30A2FCu;
            // 0x30a2fc: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x30A300u;
        goto label_30a300;
    }
    ctx->pc = 0x30A2F8u;
    {
        const bool branch_taken_0x30a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2F8u;
            // 0x30a2fc: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2f8) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A300u;
label_30a300:
    // 0x30a300: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x30a300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_30a304:
    // 0x30a304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a308:
    // 0x30a308: 0x0  nop
    ctx->pc = 0x30a308u;
    // NOP
label_30a30c:
    // 0x30a30c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x30a30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a310:
    // 0x30a310: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30a314:
    if (ctx->pc == 0x30A314u) {
        ctx->pc = 0x30A318u;
        goto label_30a318;
    }
    ctx->pc = 0x30A310u;
    {
        const bool branch_taken_0x30a310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a310) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A318u;
label_30a318:
    // 0x30a318: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x30a318u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_30a31c:
    // 0x30a31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a320:
    // 0x30a320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a324:
    // 0x30a324: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x30a324u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a328:
    // 0x30a328: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30a32c:
    if (ctx->pc == 0x30A32Cu) {
        ctx->pc = 0x30A32Cu;
            // 0x30a32c: 0xe6040dd4  swc1        $f4, 0xDD4($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3540), bits); }
        ctx->pc = 0x30A330u;
        goto label_30a330;
    }
    ctx->pc = 0x30A328u;
    {
        const bool branch_taken_0x30a328 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A328u;
            // 0x30a32c: 0xe6040dd4  swc1        $f4, 0xDD4($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a328) {
            ctx->pc = 0x30A334u;
            goto label_30a334;
        }
    }
    ctx->pc = 0x30A330u;
label_30a330:
    // 0x30a330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a334:
    // 0x30a334: 0x46011102  mul.s       $f4, $f2, $f1
    ctx->pc = 0x30a334u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_30a338:
    // 0x30a338: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x30a338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30a33c:
    // 0x30a33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a340:
    // 0x30a340: 0x0  nop
    ctx->pc = 0x30a340u;
    // NOP
label_30a344:
    // 0x30a344: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x30a344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a348:
    // 0x30a348: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30a34c:
    if (ctx->pc == 0x30A34Cu) {
        ctx->pc = 0x30A34Cu;
            // 0x30a34c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30A350u;
        goto label_30a350;
    }
    ctx->pc = 0x30A348u;
    {
        const bool branch_taken_0x30a348 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A348u;
            // 0x30a34c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a348) {
            ctx->pc = 0x30A354u;
            goto label_30a354;
        }
    }
    ctx->pc = 0x30A350u;
label_30a350:
    // 0x30a350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a354:
    // 0x30a354: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x30a354u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_30a358:
    // 0x30a358: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30a358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30a35c:
    // 0x30a35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a360:
    // 0x30a360: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x30a360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_30a364:
    // 0x30a364: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x30a364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a368:
    // 0x30a368: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30a36c:
    if (ctx->pc == 0x30A36Cu) {
        ctx->pc = 0x30A36Cu;
            // 0x30a36c: 0x831825  or          $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->pc = 0x30A370u;
        goto label_30a370;
    }
    ctx->pc = 0x30A368u;
    {
        const bool branch_taken_0x30a368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A368u;
            // 0x30a36c: 0x831825  or          $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a368) {
            ctx->pc = 0x30A374u;
            goto label_30a374;
        }
    }
    ctx->pc = 0x30A370u;
label_30a370:
    // 0x30a370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a374:
    // 0x30a374: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30a378:
    // 0x30a378: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30a378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30a37c:
    // 0x30a37c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_30a380:
    if (ctx->pc == 0x30A380u) {
        ctx->pc = 0x30A384u;
        goto label_30a384;
    }
    ctx->pc = 0x30A37Cu;
    {
        const bool branch_taken_0x30a37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a37c) {
            ctx->pc = 0x30A3FCu;
            goto label_30a3fc;
        }
    }
    ctx->pc = 0x30A384u;
label_30a384:
    // 0x30a384: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30a384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a388:
    // 0x30a388: 0x0  nop
    ctx->pc = 0x30a388u;
    // NOP
label_30a38c:
    // 0x30a38c: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x30a38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a390:
    // 0x30a390: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_30a394:
    if (ctx->pc == 0x30A394u) {
        ctx->pc = 0x30A398u;
        goto label_30a398;
    }
    ctx->pc = 0x30A390u;
    {
        const bool branch_taken_0x30a390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a390) {
            ctx->pc = 0x30A3C4u;
            goto label_30a3c4;
        }
    }
    ctx->pc = 0x30A398u;
label_30a398:
    // 0x30a398: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x30a398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_30a39c:
    // 0x30a39c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_30a3a0:
    // 0x30a3a0: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x30a3a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_30a3a4:
    // 0x30a3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a3a8:
    // 0x30a3a8: 0x0  nop
    ctx->pc = 0x30a3a8u;
    // NOP
label_30a3ac:
    // 0x30a3ac: 0x4603005d  msub.s      $f1, $f0, $f3
    ctx->pc = 0x30a3acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_30a3b0:
    // 0x30a3b0: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x30a3b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a3b4:
    // 0x30a3b4: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
label_30a3b8:
    if (ctx->pc == 0x30A3B8u) {
        ctx->pc = 0x30A3B8u;
            // 0x30a3b8: 0xe6010dc0  swc1        $f1, 0xDC0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
        ctx->pc = 0x30A3BCu;
        goto label_30a3bc;
    }
    ctx->pc = 0x30A3B4u;
    {
        const bool branch_taken_0x30a3b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a3b4) {
            ctx->pc = 0x30A3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A3B4u;
            // 0x30a3b8: 0xe6010dc0  swc1        $f1, 0xDC0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A488u;
            goto label_30a488;
        }
    }
    ctx->pc = 0x30A3BCu;
label_30a3bc:
    // 0x30a3bc: 0x10000031  b           . + 4 + (0x31 << 2)
label_30a3c0:
    if (ctx->pc == 0x30A3C0u) {
        ctx->pc = 0x30A3C0u;
            // 0x30a3c0: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x30A3C4u;
        goto label_30a3c4;
    }
    ctx->pc = 0x30A3BCu;
    {
        const bool branch_taken_0x30a3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A3BCu;
            // 0x30a3c0: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3bc) {
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A3C4u;
label_30a3c4:
    // 0x30a3c4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x30a3c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a3c8:
    // 0x30a3c8: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_30a3cc:
    if (ctx->pc == 0x30A3CCu) {
        ctx->pc = 0x30A3D0u;
        goto label_30a3d0;
    }
    ctx->pc = 0x30A3C8u;
    {
        const bool branch_taken_0x30a3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a3c8) {
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A3D0u;
label_30a3d0:
    // 0x30a3d0: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x30a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_30a3d4:
    // 0x30a3d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_30a3d8:
    // 0x30a3d8: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x30a3d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_30a3dc:
    // 0x30a3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a3e0:
    // 0x30a3e0: 0x0  nop
    ctx->pc = 0x30a3e0u;
    // NOP
label_30a3e4:
    // 0x30a3e4: 0x4603005c  madd.s      $f1, $f0, $f3
    ctx->pc = 0x30a3e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_30a3e8:
    // 0x30a3e8: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x30a3e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a3ec:
    // 0x30a3ec: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_30a3f0:
    if (ctx->pc == 0x30A3F0u) {
        ctx->pc = 0x30A3F4u;
        goto label_30a3f4;
    }
    ctx->pc = 0x30A3ECu;
    {
        const bool branch_taken_0x30a3ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a3ec) {
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A3F4u;
label_30a3f4:
    // 0x30a3f4: 0x10000023  b           . + 4 + (0x23 << 2)
label_30a3f8:
    if (ctx->pc == 0x30A3F8u) {
        ctx->pc = 0x30A3F8u;
            // 0x30a3f8: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x30A3FCu;
        goto label_30a3fc;
    }
    ctx->pc = 0x30A3F4u;
    {
        const bool branch_taken_0x30a3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A3F4u;
            // 0x30a3f8: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3f4) {
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A3FCu;
label_30a3fc:
    // 0x30a3fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a400:
    // 0x30a400: 0x0  nop
    ctx->pc = 0x30a400u;
    // NOP
label_30a404:
    // 0x30a404: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x30a404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a408:
    // 0x30a408: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_30a40c:
    if (ctx->pc == 0x30A40Cu) {
        ctx->pc = 0x30A410u;
        goto label_30a410;
    }
    ctx->pc = 0x30A408u;
    {
        const bool branch_taken_0x30a408 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a408) {
            ctx->pc = 0x30A444u;
            goto label_30a444;
        }
    }
    ctx->pc = 0x30A410u;
label_30a410:
    // 0x30a410: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x30a410u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30a414:
    // 0x30a414: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x30a414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_30a418:
    // 0x30a418: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x30a418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_30a41c:
    // 0x30a41c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30a420:
    // 0x30a420: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a424:
    // 0x30a424: 0x0  nop
    ctx->pc = 0x30a424u;
    // NOP
label_30a428:
    // 0x30a428: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x30a428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_30a42c:
    // 0x30a42c: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x30a42cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_30a430:
    // 0x30a430: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x30a430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a434:
    // 0x30a434: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_30a438:
    if (ctx->pc == 0x30A438u) {
        ctx->pc = 0x30A43Cu;
        goto label_30a43c;
    }
    ctx->pc = 0x30A434u;
    {
        const bool branch_taken_0x30a434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a434) {
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A43Cu;
label_30a43c:
    // 0x30a43c: 0x10000011  b           . + 4 + (0x11 << 2)
label_30a440:
    if (ctx->pc == 0x30A440u) {
        ctx->pc = 0x30A440u;
            // 0x30a440: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x30A444u;
        goto label_30a444;
    }
    ctx->pc = 0x30A43Cu;
    {
        const bool branch_taken_0x30a43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A43Cu;
            // 0x30a440: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a43c) {
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A444u;
label_30a444:
    // 0x30a444: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x30a444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a448:
    // 0x30a448: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_30a44c:
    if (ctx->pc == 0x30A44Cu) {
        ctx->pc = 0x30A450u;
        goto label_30a450;
    }
    ctx->pc = 0x30A448u;
    {
        const bool branch_taken_0x30a448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a448) {
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A450u;
label_30a450:
    // 0x30a450: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x30a450u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30a454:
    // 0x30a454: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x30a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_30a458:
    // 0x30a458: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30a458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_30a45c:
    // 0x30a45c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30a45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30a460:
    // 0x30a460: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a464:
    // 0x30a464: 0x0  nop
    ctx->pc = 0x30a464u;
    // NOP
label_30a468:
    // 0x30a468: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x30a468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_30a46c:
    // 0x30a46c: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x30a46cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
label_30a470:
    // 0x30a470: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x30a470u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_30a474:
    // 0x30a474: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30a474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a478:
    // 0x30a478: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30a47c:
    if (ctx->pc == 0x30A47Cu) {
        ctx->pc = 0x30A480u;
        goto label_30a480;
    }
    ctx->pc = 0x30A478u;
    {
        const bool branch_taken_0x30a478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a478) {
            ctx->pc = 0x30A484u;
            goto label_30a484;
        }
    }
    ctx->pc = 0x30A480u;
label_30a480:
    // 0x30a480: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x30a480u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_30a484:
    // 0x30a484: 0xe6010dc0  swc1        $f1, 0xDC0($s0)
    ctx->pc = 0x30a484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3520), bits); }
label_30a488:
    // 0x30a488: 0x8e020550  lw          $v0, 0x550($s0)
    ctx->pc = 0x30a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_30a48c:
    // 0x30a48c: 0x8043010f  lb          $v1, 0x10F($v0)
    ctx->pc = 0x30a48cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 271)));
label_30a490:
    // 0x30a490: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_30a494:
    if (ctx->pc == 0x30A494u) {
        ctx->pc = 0x30A498u;
        goto label_30a498;
    }
    ctx->pc = 0x30A490u;
    {
        const bool branch_taken_0x30a490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a490) {
            ctx->pc = 0x30A4B4u;
            goto label_30a4b4;
        }
    }
    ctx->pc = 0x30A498u;
label_30a498:
    // 0x30a498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a49c:
    // 0x30a49c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_30a4a0:
    if (ctx->pc == 0x30A4A0u) {
        ctx->pc = 0x30A4A4u;
        goto label_30a4a4;
    }
    ctx->pc = 0x30A49Cu;
    {
        const bool branch_taken_0x30a49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30a49c) {
            ctx->pc = 0x30A4B4u;
            goto label_30a4b4;
        }
    }
    ctx->pc = 0x30A4A4u;
label_30a4a4:
    // 0x30a4a4: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x30a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_30a4a8:
    // 0x30a4a8: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x30a4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_30a4ac:
    // 0x30a4ac: 0x5020010c  beql        $at, $zero, . + 4 + (0x10C << 2)
label_30a4b0:
    if (ctx->pc == 0x30A4B0u) {
        ctx->pc = 0x30A4B0u;
            // 0x30a4b0: 0x3c033c64  lui         $v1, 0x3C64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15460 << 16));
        ctx->pc = 0x30A4B4u;
        goto label_30a4b4;
    }
    ctx->pc = 0x30A4ACu;
    {
        const bool branch_taken_0x30a4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a4ac) {
            ctx->pc = 0x30A4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4ACu;
            // 0x30a4b0: 0x3c033c64  lui         $v1, 0x3C64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15460 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A8E0u;
            goto label_30a8e0;
        }
    }
    ctx->pc = 0x30A4B4u;
label_30a4b4:
    // 0x30a4b4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x30a4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30a4b8:
    // 0x30a4b8: 0x0  nop
    ctx->pc = 0x30a4b8u;
    // NOP
label_30a4bc:
    // 0x30a4bc: 0x46023032  c.eq.s      $f6, $f2
    ctx->pc = 0x30a4bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a4c0:
    // 0x30a4c0: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_30a4c4:
    if (ctx->pc == 0x30A4C4u) {
        ctx->pc = 0x30A4C4u;
            // 0x30a4c4: 0xc6000dc4  lwc1        $f0, 0xDC4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x30A4C8u;
        goto label_30a4c8;
    }
    ctx->pc = 0x30A4C0u;
    {
        const bool branch_taken_0x30a4c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4C0u;
            // 0x30a4c4: 0xc6000dc4  lwc1        $f0, 0xDC4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4c0) {
            ctx->pc = 0x30A608u;
            goto label_30a608;
        }
    }
    ctx->pc = 0x30A4C8u;
label_30a4c8:
    // 0x30a4c8: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x30a4c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_30a4cc:
    // 0x30a4cc: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x30a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_30a4d0:
    // 0x30a4d0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x30a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_30a4d4:
    // 0x30a4d4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a4d8:
    // 0x30a4d8: 0xc6260058  lwc1        $f6, 0x58($s1)
    ctx->pc = 0x30a4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_30a4dc:
    // 0x30a4dc: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x30a4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a4e0:
    // 0x30a4e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30a4e4:
    if (ctx->pc == 0x30A4E4u) {
        ctx->pc = 0x30A4E4u;
            // 0x30a4e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30A4E8u;
        goto label_30a4e8;
    }
    ctx->pc = 0x30A4E0u;
    {
        const bool branch_taken_0x30a4e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4E0u;
            // 0x30a4e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4e0) {
            ctx->pc = 0x30A4ECu;
            goto label_30a4ec;
        }
    }
    ctx->pc = 0x30A4E8u;
label_30a4e8:
    // 0x30a4e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30a4e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a4ec:
    // 0x30a4ec: 0x46063142  mul.s       $f5, $f6, $f6
    ctx->pc = 0x30a4ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_30a4f0:
    // 0x30a4f0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x30a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_30a4f4:
    // 0x30a4f4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x30a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_30a4f8:
    // 0x30a4f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30a4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_30a4fc:
    // 0x30a4fc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a500:
    // 0x30a500: 0x0  nop
    ctx->pc = 0x30a500u;
    // NOP
label_30a504:
    // 0x30a504: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x30a504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a508:
    // 0x30a508: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30a50c:
    if (ctx->pc == 0x30A50Cu) {
        ctx->pc = 0x30A50Cu;
            // 0x30a50c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30A510u;
        goto label_30a510;
    }
    ctx->pc = 0x30A508u;
    {
        const bool branch_taken_0x30a508 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A508u;
            // 0x30a50c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a508) {
            ctx->pc = 0x30A514u;
            goto label_30a514;
        }
    }
    ctx->pc = 0x30A510u;
label_30a510:
    // 0x30a510: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30a510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a514:
    // 0x30a514: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x30a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_30a518:
    // 0x30a518: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x30a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_30a51c:
    // 0x30a51c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_30a520:
    if (ctx->pc == 0x30A520u) {
        ctx->pc = 0x30A524u;
        goto label_30a524;
    }
    ctx->pc = 0x30A51Cu;
    {
        const bool branch_taken_0x30a51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a51c) {
            ctx->pc = 0x30A530u;
            goto label_30a530;
        }
    }
    ctx->pc = 0x30A524u;
label_30a524:
    // 0x30a524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a528:
    // 0x30a528: 0x10000034  b           . + 4 + (0x34 << 2)
label_30a52c:
    if (ctx->pc == 0x30A52Cu) {
        ctx->pc = 0x30A52Cu;
            // 0x30a52c: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x30A530u;
        goto label_30a530;
    }
    ctx->pc = 0x30A528u;
    {
        const bool branch_taken_0x30a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A528u;
            // 0x30a52c: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a528) {
            ctx->pc = 0x30A5FCu;
            goto label_30a5fc;
        }
    }
    ctx->pc = 0x30A530u;
label_30a530:
    // 0x30a530: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30a530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a534:
    // 0x30a534: 0x0  nop
    ctx->pc = 0x30a534u;
    // NOP
label_30a538:
    // 0x30a538: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x30a538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a53c:
    // 0x30a53c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_30a540:
    if (ctx->pc == 0x30A540u) {
        ctx->pc = 0x30A544u;
        goto label_30a544;
    }
    ctx->pc = 0x30A53Cu;
    {
        const bool branch_taken_0x30a53c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a53c) {
            ctx->pc = 0x30A59Cu;
            goto label_30a59c;
        }
    }
    ctx->pc = 0x30A544u;
label_30a544:
    // 0x30a544: 0x46043034  c.lt.s      $f6, $f4
    ctx->pc = 0x30a544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a548:
    // 0x30a548: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_30a54c:
    if (ctx->pc == 0x30A54Cu) {
        ctx->pc = 0x30A54Cu;
            // 0x30a54c: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->pc = 0x30A550u;
        goto label_30a550;
    }
    ctx->pc = 0x30A548u;
    {
        const bool branch_taken_0x30a548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a548) {
            ctx->pc = 0x30A54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A548u;
            // 0x30a54c: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A564u;
            goto label_30a564;
        }
    }
    ctx->pc = 0x30A550u;
label_30a550:
    // 0x30a550: 0x3c023ac4  lui         $v0, 0x3AC4
    ctx->pc = 0x30a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15044 << 16));
label_30a554:
    // 0x30a554: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x30a554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_30a558:
    // 0x30a558: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a55c:
    // 0x30a55c: 0x10000005  b           . + 4 + (0x5 << 2)
label_30a560:
    if (ctx->pc == 0x30A560u) {
        ctx->pc = 0x30A560u;
            // 0x30a560: 0x46043181  sub.s       $f6, $f6, $f4 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
        ctx->pc = 0x30A564u;
        goto label_30a564;
    }
    ctx->pc = 0x30A55Cu;
    {
        const bool branch_taken_0x30a55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A55Cu;
            // 0x30a560: 0x46043181  sub.s       $f6, $f6, $f4 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a55c) {
            ctx->pc = 0x30A574u;
            goto label_30a574;
        }
    }
    ctx->pc = 0x30A564u;
label_30a564:
    // 0x30a564: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x30a564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_30a568:
    // 0x30a568: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a56c:
    // 0x30a56c: 0x0  nop
    ctx->pc = 0x30a56cu;
    // NOP
label_30a570:
    // 0x30a570: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x30a570u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_30a574:
    // 0x30a574: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x30a574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_30a578:
    // 0x30a578: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x30a578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_30a57c:
    // 0x30a57c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a580:
    // 0x30a580: 0x0  nop
    ctx->pc = 0x30a580u;
    // NOP
label_30a584:
    // 0x30a584: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x30a584u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_30a588:
    // 0x30a588: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30a588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a58c:
    // 0x30a58c: 0x0  nop
    ctx->pc = 0x30a58cu;
    // NOP
label_30a590:
    // 0x30a590: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x30a590u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_30a594:
    // 0x30a594: 0x10000019  b           . + 4 + (0x19 << 2)
label_30a598:
    if (ctx->pc == 0x30A598u) {
        ctx->pc = 0x30A598u;
            // 0x30a598: 0x4603281c  madd.s      $f0, $f5, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
        ctx->pc = 0x30A59Cu;
        goto label_30a59c;
    }
    ctx->pc = 0x30A594u;
    {
        const bool branch_taken_0x30a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A594u;
            // 0x30a598: 0x4603281c  madd.s      $f0, $f5, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a594) {
            ctx->pc = 0x30A5FCu;
            goto label_30a5fc;
        }
    }
    ctx->pc = 0x30A59Cu;
label_30a59c:
    // 0x30a59c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x30a59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a5a0:
    // 0x30a5a0: 0x450200cd  bc1fl       . + 4 + (0xCD << 2)
label_30a5a4:
    if (ctx->pc == 0x30A5A4u) {
        ctx->pc = 0x30A5A4u;
            // 0x30a5a4: 0xe6260058  swc1        $f6, 0x58($s1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->pc = 0x30A5A8u;
        goto label_30a5a8;
    }
    ctx->pc = 0x30A5A0u;
    {
        const bool branch_taken_0x30a5a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a5a0) {
            ctx->pc = 0x30A5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5A0u;
            // 0x30a5a4: 0xe6260058  swc1        $f6, 0x58($s1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A5A8u;
label_30a5a8:
    // 0x30a5a8: 0x46043036  c.le.s      $f6, $f4
    ctx->pc = 0x30a5a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a5ac:
    // 0x30a5ac: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_30a5b0:
    if (ctx->pc == 0x30A5B0u) {
        ctx->pc = 0x30A5B0u;
            // 0x30a5b0: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->pc = 0x30A5B4u;
        goto label_30a5b4;
    }
    ctx->pc = 0x30A5ACu;
    {
        const bool branch_taken_0x30a5ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a5ac) {
            ctx->pc = 0x30A5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5ACu;
            // 0x30a5b0: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A5C8u;
            goto label_30a5c8;
        }
    }
    ctx->pc = 0x30A5B4u;
label_30a5b4:
    // 0x30a5b4: 0x3c023ac4  lui         $v0, 0x3AC4
    ctx->pc = 0x30a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15044 << 16));
label_30a5b8:
    // 0x30a5b8: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x30a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_30a5bc:
    // 0x30a5bc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a5c0:
    // 0x30a5c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_30a5c4:
    if (ctx->pc == 0x30A5C4u) {
        ctx->pc = 0x30A5C4u;
            // 0x30a5c4: 0x46043180  add.s       $f6, $f6, $f4 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
        ctx->pc = 0x30A5C8u;
        goto label_30a5c8;
    }
    ctx->pc = 0x30A5C0u;
    {
        const bool branch_taken_0x30a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5C0u;
            // 0x30a5c4: 0x46043180  add.s       $f6, $f6, $f4 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5c0) {
            ctx->pc = 0x30A5D8u;
            goto label_30a5d8;
        }
    }
    ctx->pc = 0x30A5C8u;
label_30a5c8:
    // 0x30a5c8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x30a5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_30a5cc:
    // 0x30a5cc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a5d0:
    // 0x30a5d0: 0x0  nop
    ctx->pc = 0x30a5d0u;
    // NOP
label_30a5d4:
    // 0x30a5d4: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x30a5d4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_30a5d8:
    // 0x30a5d8: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x30a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_30a5dc:
    // 0x30a5dc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x30a5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_30a5e0:
    // 0x30a5e0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a5e4:
    // 0x30a5e4: 0x0  nop
    ctx->pc = 0x30a5e4u;
    // NOP
label_30a5e8:
    // 0x30a5e8: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x30a5e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_30a5ec:
    // 0x30a5ec: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30a5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a5f0:
    // 0x30a5f0: 0x0  nop
    ctx->pc = 0x30a5f0u;
    // NOP
label_30a5f4:
    // 0x30a5f4: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x30a5f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_30a5f8:
    // 0x30a5f8: 0x4603281c  madd.s      $f0, $f5, $f3
    ctx->pc = 0x30a5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
label_30a5fc:
    // 0x30a5fc: 0xe6260058  swc1        $f6, 0x58($s1)
    ctx->pc = 0x30a5fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_30a600:
    // 0x30a600: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_30a604:
    if (ctx->pc == 0x30A604u) {
        ctx->pc = 0x30A608u;
        goto label_30a608;
    }
    ctx->pc = 0x30A600u;
    {
        const bool branch_taken_0x30a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a600) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A608u;
label_30a608:
    // 0x30a608: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x30a608u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_30a60c:
    // 0x30a60c: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x30a60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a610:
    // 0x30a610: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
label_30a614:
    if (ctx->pc == 0x30A614u) {
        ctx->pc = 0x30A614u;
            // 0x30a614: 0x46000142  mul.s       $f5, $f0, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->pc = 0x30A618u;
        goto label_30a618;
    }
    ctx->pc = 0x30A610u;
    {
        const bool branch_taken_0x30a610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a610) {
            ctx->pc = 0x30A614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A610u;
            // 0x30a614: 0x46000142  mul.s       $f5, $f0, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A688u;
            goto label_30a688;
        }
    }
    ctx->pc = 0x30A618u;
label_30a618:
    // 0x30a618: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x30a618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a61c:
    // 0x30a61c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_30a620:
    if (ctx->pc == 0x30A620u) {
        ctx->pc = 0x30A624u;
        goto label_30a624;
    }
    ctx->pc = 0x30A61Cu;
    {
        const bool branch_taken_0x30a61c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a61c) {
            ctx->pc = 0x30A650u;
            goto label_30a650;
        }
    }
    ctx->pc = 0x30A624u;
label_30a624:
    // 0x30a624: 0x3c023d2c  lui         $v0, 0x3D2C
    ctx->pc = 0x30a624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15660 << 16));
label_30a628:
    // 0x30a628: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x30a628u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_30a62c:
    // 0x30a62c: 0x34420831  ori         $v0, $v0, 0x831
    ctx->pc = 0x30a62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2097);
label_30a630:
    // 0x30a630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a634:
    // 0x30a634: 0x0  nop
    ctx->pc = 0x30a634u;
    // NOP
label_30a638:
    // 0x30a638: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x30a638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_30a63c:
    // 0x30a63c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x30a63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a640:
    // 0x30a640: 0x450000a5  bc1f        . + 4 + (0xA5 << 2)
label_30a644:
    if (ctx->pc == 0x30A644u) {
        ctx->pc = 0x30A648u;
        goto label_30a648;
    }
    ctx->pc = 0x30A640u;
    {
        const bool branch_taken_0x30a640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a640) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A648u;
label_30a648:
    // 0x30a648: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_30a64c:
    if (ctx->pc == 0x30A64Cu) {
        ctx->pc = 0x30A64Cu;
            // 0x30a64c: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x30A650u;
        goto label_30a650;
    }
    ctx->pc = 0x30A648u;
    {
        const bool branch_taken_0x30a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A648u;
            // 0x30a64c: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a648) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A650u;
label_30a650:
    // 0x30a650: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x30a650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a654:
    // 0x30a654: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
label_30a658:
    if (ctx->pc == 0x30A658u) {
        ctx->pc = 0x30A65Cu;
        goto label_30a65c;
    }
    ctx->pc = 0x30A654u;
    {
        const bool branch_taken_0x30a654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a654) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A65Cu;
label_30a65c:
    // 0x30a65c: 0x3c023d2c  lui         $v0, 0x3D2C
    ctx->pc = 0x30a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15660 << 16));
label_30a660:
    // 0x30a660: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x30a660u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_30a664:
    // 0x30a664: 0x34420831  ori         $v0, $v0, 0x831
    ctx->pc = 0x30a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2097);
label_30a668:
    // 0x30a668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a66c:
    // 0x30a66c: 0x0  nop
    ctx->pc = 0x30a66cu;
    // NOP
label_30a670:
    // 0x30a670: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x30a670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_30a674:
    // 0x30a674: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x30a674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a678:
    // 0x30a678: 0x45010097  bc1t        . + 4 + (0x97 << 2)
label_30a67c:
    if (ctx->pc == 0x30A67Cu) {
        ctx->pc = 0x30A680u;
        goto label_30a680;
    }
    ctx->pc = 0x30A678u;
    {
        const bool branch_taken_0x30a678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a678) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A680u;
label_30a680:
    // 0x30a680: 0x10000095  b           . + 4 + (0x95 << 2)
label_30a684:
    if (ctx->pc == 0x30A684u) {
        ctx->pc = 0x30A684u;
            // 0x30a684: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x30A688u;
        goto label_30a688;
    }
    ctx->pc = 0x30A680u;
    {
        const bool branch_taken_0x30a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A680u;
            // 0x30a684: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a680) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A688u;
label_30a688:
    // 0x30a688: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x30a688u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_30a68c:
    // 0x30a68c: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x30a68cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a690:
    // 0x30a690: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_30a694:
    if (ctx->pc == 0x30A694u) {
        ctx->pc = 0x30A698u;
        goto label_30a698;
    }
    ctx->pc = 0x30A690u;
    {
        const bool branch_taken_0x30a690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a690) {
            ctx->pc = 0x30A708u;
            goto label_30a708;
        }
    }
    ctx->pc = 0x30A698u;
label_30a698:
    // 0x30a698: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x30a698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a69c:
    // 0x30a69c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_30a6a0:
    if (ctx->pc == 0x30A6A0u) {
        ctx->pc = 0x30A6A4u;
        goto label_30a6a4;
    }
    ctx->pc = 0x30A69Cu;
    {
        const bool branch_taken_0x30a69c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a69c) {
            ctx->pc = 0x30A6D0u;
            goto label_30a6d0;
        }
    }
    ctx->pc = 0x30A6A4u;
label_30a6a4:
    // 0x30a6a4: 0x3c023d65  lui         $v0, 0x3D65
    ctx->pc = 0x30a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15717 << 16));
label_30a6a8:
    // 0x30a6a8: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x30a6a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_30a6ac:
    // 0x30a6ac: 0x34426041  ori         $v0, $v0, 0x6041
    ctx->pc = 0x30a6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24641);
label_30a6b0:
    // 0x30a6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a6b4:
    // 0x30a6b4: 0x0  nop
    ctx->pc = 0x30a6b4u;
    // NOP
label_30a6b8:
    // 0x30a6b8: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x30a6b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_30a6bc:
    // 0x30a6bc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30a6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a6c0:
    // 0x30a6c0: 0x45000085  bc1f        . + 4 + (0x85 << 2)
label_30a6c4:
    if (ctx->pc == 0x30A6C4u) {
        ctx->pc = 0x30A6C8u;
        goto label_30a6c8;
    }
    ctx->pc = 0x30A6C0u;
    {
        const bool branch_taken_0x30a6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a6c0) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A6C8u;
label_30a6c8:
    // 0x30a6c8: 0x10000083  b           . + 4 + (0x83 << 2)
label_30a6cc:
    if (ctx->pc == 0x30A6CCu) {
        ctx->pc = 0x30A6CCu;
            // 0x30a6cc: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x30A6D0u;
        goto label_30a6d0;
    }
    ctx->pc = 0x30A6C8u;
    {
        const bool branch_taken_0x30a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A6C8u;
            // 0x30a6cc: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6c8) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A6D0u;
label_30a6d0:
    // 0x30a6d0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x30a6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a6d4:
    // 0x30a6d4: 0x45000080  bc1f        . + 4 + (0x80 << 2)
label_30a6d8:
    if (ctx->pc == 0x30A6D8u) {
        ctx->pc = 0x30A6DCu;
        goto label_30a6dc;
    }
    ctx->pc = 0x30A6D4u;
    {
        const bool branch_taken_0x30a6d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a6d4) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A6DCu;
label_30a6dc:
    // 0x30a6dc: 0x3c023d65  lui         $v0, 0x3D65
    ctx->pc = 0x30a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15717 << 16));
label_30a6e0:
    // 0x30a6e0: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x30a6e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_30a6e4:
    // 0x30a6e4: 0x34426041  ori         $v0, $v0, 0x6041
    ctx->pc = 0x30a6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24641);
label_30a6e8:
    // 0x30a6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a6ec:
    // 0x30a6ec: 0x0  nop
    ctx->pc = 0x30a6ecu;
    // NOP
label_30a6f0:
    // 0x30a6f0: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x30a6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_30a6f4:
    // 0x30a6f4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30a6f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a6f8:
    // 0x30a6f8: 0x45010077  bc1t        . + 4 + (0x77 << 2)
label_30a6fc:
    if (ctx->pc == 0x30A6FCu) {
        ctx->pc = 0x30A700u;
        goto label_30a700;
    }
    ctx->pc = 0x30A6F8u;
    {
        const bool branch_taken_0x30a6f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a6f8) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A700u;
label_30a700:
    // 0x30a700: 0x10000075  b           . + 4 + (0x75 << 2)
label_30a704:
    if (ctx->pc == 0x30A704u) {
        ctx->pc = 0x30A704u;
            // 0x30a704: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x30A708u;
        goto label_30a708;
    }
    ctx->pc = 0x30A700u;
    {
        const bool branch_taken_0x30a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A700u;
            // 0x30a704: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a700) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A708u;
label_30a708:
    // 0x30a708: 0x46061036  c.le.s      $f2, $f6
    ctx->pc = 0x30a708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a70c:
    // 0x30a70c: 0x45010039  bc1t        . + 4 + (0x39 << 2)
label_30a710:
    if (ctx->pc == 0x30A710u) {
        ctx->pc = 0x30A714u;
        goto label_30a714;
    }
    ctx->pc = 0x30A70Cu;
    {
        const bool branch_taken_0x30a70c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a70c) {
            ctx->pc = 0x30A7F4u;
            goto label_30a7f4;
        }
    }
    ctx->pc = 0x30A714u;
label_30a714:
    // 0x30a714: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x30a714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a718:
    // 0x30a718: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30a71c:
    if (ctx->pc == 0x30A71Cu) {
        ctx->pc = 0x30A71Cu;
            // 0x30a71c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30A720u;
        goto label_30a720;
    }
    ctx->pc = 0x30A718u;
    {
        const bool branch_taken_0x30a718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A718u;
            // 0x30a71c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a718) {
            ctx->pc = 0x30A724u;
            goto label_30a724;
        }
    }
    ctx->pc = 0x30A720u;
label_30a720:
    // 0x30a720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a724:
    // 0x30a724: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_30a728:
    if (ctx->pc == 0x30A728u) {
        ctx->pc = 0x30A728u;
            // 0x30a728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30A72Cu;
        goto label_30a72c;
    }
    ctx->pc = 0x30A724u;
    {
        const bool branch_taken_0x30a724 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30a724) {
            ctx->pc = 0x30A728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A724u;
            // 0x30a728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A738u;
            goto label_30a738;
        }
    }
    ctx->pc = 0x30A72Cu;
label_30a72c:
    // 0x30a72c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a730:
    // 0x30a730: 0x10000007  b           . + 4 + (0x7 << 2)
label_30a734:
    if (ctx->pc == 0x30A734u) {
        ctx->pc = 0x30A734u;
            // 0x30a734: 0x46802220  cvt.s.w     $f8, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x30A738u;
        goto label_30a738;
    }
    ctx->pc = 0x30A730u;
    {
        const bool branch_taken_0x30a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A730u;
            // 0x30a734: 0x46802220  cvt.s.w     $f8, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a730) {
            ctx->pc = 0x30A750u;
            goto label_30a750;
        }
    }
    ctx->pc = 0x30A738u;
label_30a738:
    // 0x30a738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30a73c:
    // 0x30a73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30a740:
    // 0x30a740: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x30a740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a744:
    // 0x30a744: 0x0  nop
    ctx->pc = 0x30a744u;
    // NOP
label_30a748:
    // 0x30a748: 0x46802220  cvt.s.w     $f8, $f4
    ctx->pc = 0x30a748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
label_30a74c:
    // 0x30a74c: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x30a74cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_30a750:
    // 0x30a750: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30a750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_30a754:
    // 0x30a754: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30a754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_30a758:
    // 0x30a758: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x30a758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30a75c:
    // 0x30a75c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x30a75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30a760:
    // 0x30a760: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x30a760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_30a764:
    // 0x30a764: 0x0  nop
    ctx->pc = 0x30a764u;
    // NOP
label_30a768:
    // 0x30a768: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x30a768u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_30a76c:
    // 0x30a76c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x30a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_30a770:
    // 0x30a770: 0x4608395d  msub.s      $f5, $f7, $f8
    ctx->pc = 0x30a770u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[8]));
label_30a774:
    // 0x30a774: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x30a774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_30a778:
    // 0x30a778: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x30a778u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_30a77c:
    // 0x30a77c: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x30a77cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_30a780:
    // 0x30a780: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a784:
    // 0x30a784: 0x0  nop
    ctx->pc = 0x30a784u;
    // NOP
label_30a788:
    // 0x30a788: 0x46043036  c.le.s      $f6, $f4
    ctx->pc = 0x30a788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a78c:
    // 0x30a78c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_30a790:
    if (ctx->pc == 0x30A790u) {
        ctx->pc = 0x30A790u;
            // 0x30a790: 0x3c023fb3  lui         $v0, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
        ctx->pc = 0x30A794u;
        goto label_30a794;
    }
    ctx->pc = 0x30A78Cu;
    {
        const bool branch_taken_0x30a78c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a78c) {
            ctx->pc = 0x30A790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A78Cu;
            // 0x30a790: 0x3c023fb3  lui         $v0, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A79Cu;
            goto label_30a79c;
        }
    }
    ctx->pc = 0x30A794u;
label_30a794:
    // 0x30a794: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x30a794u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_30a798:
    // 0x30a798: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x30a798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_30a79c:
    // 0x30a79c: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x30a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
label_30a7a0:
    // 0x30a7a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x30a7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_30a7a4:
    // 0x30a7a4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x30a7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_30a7a8:
    // 0x30a7a8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a7ac:
    // 0x30a7ac: 0x0  nop
    ctx->pc = 0x30a7acu;
    // NOP
label_30a7b0:
    // 0x30a7b0: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x30a7b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_30a7b4:
    // 0x30a7b4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x30a7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30a7b8:
    // 0x30a7b8: 0x0  nop
    ctx->pc = 0x30a7b8u;
    // NOP
label_30a7bc:
    // 0x30a7bc: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x30a7bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_30a7c0:
    // 0x30a7c0: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x30a7c0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_30a7c4:
    // 0x30a7c4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x30a7c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_30a7c8:
    // 0x30a7c8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30a7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a7cc:
    // 0x30a7cc: 0x0  nop
    ctx->pc = 0x30a7ccu;
    // NOP
label_30a7d0:
    // 0x30a7d0: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x30a7d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_30a7d4:
    // 0x30a7d4: 0x4605181c  madd.s      $f0, $f3, $f5
    ctx->pc = 0x30a7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
label_30a7d8:
    // 0x30a7d8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30a7d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a7dc:
    // 0x30a7dc: 0x4503003e  bc1tl       . + 4 + (0x3E << 2)
label_30a7e0:
    if (ctx->pc == 0x30A7E0u) {
        ctx->pc = 0x30A7E0u;
            // 0x30a7e0: 0xae000dd0  sw          $zero, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
        ctx->pc = 0x30A7E4u;
        goto label_30a7e4;
    }
    ctx->pc = 0x30A7DCu;
    {
        const bool branch_taken_0x30a7dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a7dc) {
            ctx->pc = 0x30A7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A7DCu;
            // 0x30a7e0: 0xae000dd0  sw          $zero, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A7E4u;
label_30a7e4:
    // 0x30a7e4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x30a7e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_30a7e8:
    // 0x30a7e8: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x30a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
label_30a7ec:
    // 0x30a7ec: 0x1000003a  b           . + 4 + (0x3A << 2)
label_30a7f0:
    if (ctx->pc == 0x30A7F0u) {
        ctx->pc = 0x30A7F4u;
        goto label_30a7f4;
    }
    ctx->pc = 0x30A7ECu;
    {
        const bool branch_taken_0x30a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a7ec) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A7F4u;
label_30a7f4:
    // 0x30a7f4: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x30a7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a7f8:
    // 0x30a7f8: 0x45000037  bc1f        . + 4 + (0x37 << 2)
label_30a7fc:
    if (ctx->pc == 0x30A7FCu) {
        ctx->pc = 0x30A800u;
        goto label_30a800;
    }
    ctx->pc = 0x30A7F8u;
    {
        const bool branch_taken_0x30a7f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a7f8) {
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A800u;
label_30a800:
    // 0x30a800: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x30a800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a804:
    // 0x30a804: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30a808:
    if (ctx->pc == 0x30A808u) {
        ctx->pc = 0x30A808u;
            // 0x30a808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30A80Cu;
        goto label_30a80c;
    }
    ctx->pc = 0x30A804u;
    {
        const bool branch_taken_0x30a804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A804u;
            // 0x30a808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a804) {
            ctx->pc = 0x30A810u;
            goto label_30a810;
        }
    }
    ctx->pc = 0x30A80Cu;
label_30a80c:
    // 0x30a80c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a810:
    // 0x30a810: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_30a814:
    if (ctx->pc == 0x30A814u) {
        ctx->pc = 0x30A814u;
            // 0x30a814: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30A818u;
        goto label_30a818;
    }
    ctx->pc = 0x30A810u;
    {
        const bool branch_taken_0x30a810 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30a810) {
            ctx->pc = 0x30A814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A810u;
            // 0x30a814: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A824u;
            goto label_30a824;
        }
    }
    ctx->pc = 0x30A818u;
label_30a818:
    // 0x30a818: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a81c:
    // 0x30a81c: 0x10000007  b           . + 4 + (0x7 << 2)
label_30a820:
    if (ctx->pc == 0x30A820u) {
        ctx->pc = 0x30A820u;
            // 0x30a820: 0x46802220  cvt.s.w     $f8, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x30A824u;
        goto label_30a824;
    }
    ctx->pc = 0x30A81Cu;
    {
        const bool branch_taken_0x30a81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A81Cu;
            // 0x30a820: 0x46802220  cvt.s.w     $f8, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a81c) {
            ctx->pc = 0x30A83Cu;
            goto label_30a83c;
        }
    }
    ctx->pc = 0x30A824u;
label_30a824:
    // 0x30a824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30a828:
    // 0x30a828: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30a828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30a82c:
    // 0x30a82c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x30a82cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a830:
    // 0x30a830: 0x0  nop
    ctx->pc = 0x30a830u;
    // NOP
label_30a834:
    // 0x30a834: 0x46802220  cvt.s.w     $f8, $f4
    ctx->pc = 0x30a834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
label_30a838:
    // 0x30a838: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x30a838u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_30a83c:
    // 0x30a83c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_30a840:
    // 0x30a840: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30a840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_30a844:
    // 0x30a844: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x30a844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30a848:
    // 0x30a848: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x30a848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30a84c:
    // 0x30a84c: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x30a84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_30a850:
    // 0x30a850: 0x0  nop
    ctx->pc = 0x30a850u;
    // NOP
label_30a854:
    // 0x30a854: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x30a854u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_30a858:
    // 0x30a858: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x30a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_30a85c:
    // 0x30a85c: 0x4608395d  msub.s      $f5, $f7, $f8
    ctx->pc = 0x30a85cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[8]));
label_30a860:
    // 0x30a860: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x30a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_30a864:
    // 0x30a864: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x30a864u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_30a868:
    // 0x30a868: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x30a868u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_30a86c:
    // 0x30a86c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a870:
    // 0x30a870: 0x0  nop
    ctx->pc = 0x30a870u;
    // NOP
label_30a874:
    // 0x30a874: 0x46043036  c.le.s      $f6, $f4
    ctx->pc = 0x30a874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a878:
    // 0x30a878: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_30a87c:
    if (ctx->pc == 0x30A87Cu) {
        ctx->pc = 0x30A87Cu;
            // 0x30a87c: 0x3c023fb3  lui         $v0, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
        ctx->pc = 0x30A880u;
        goto label_30a880;
    }
    ctx->pc = 0x30A878u;
    {
        const bool branch_taken_0x30a878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a878) {
            ctx->pc = 0x30A87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A878u;
            // 0x30a87c: 0x3c023fb3  lui         $v0, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A888u;
            goto label_30a888;
        }
    }
    ctx->pc = 0x30A880u;
label_30a880:
    // 0x30a880: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x30a880u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_30a884:
    // 0x30a884: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x30a884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_30a888:
    // 0x30a888: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x30a888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
label_30a88c:
    // 0x30a88c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x30a88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_30a890:
    // 0x30a890: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x30a890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_30a894:
    // 0x30a894: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30a894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a898:
    // 0x30a898: 0x0  nop
    ctx->pc = 0x30a898u;
    // NOP
label_30a89c:
    // 0x30a89c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x30a89cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_30a8a0:
    // 0x30a8a0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x30a8a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30a8a4:
    // 0x30a8a4: 0x0  nop
    ctx->pc = 0x30a8a4u;
    // NOP
label_30a8a8:
    // 0x30a8a8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x30a8a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_30a8ac:
    // 0x30a8ac: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x30a8acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_30a8b0:
    // 0x30a8b0: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x30a8b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_30a8b4:
    // 0x30a8b4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30a8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30a8b8:
    // 0x30a8b8: 0x0  nop
    ctx->pc = 0x30a8b8u;
    // NOP
label_30a8bc:
    // 0x30a8bc: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x30a8bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_30a8c0:
    // 0x30a8c0: 0x4605181c  madd.s      $f0, $f3, $f5
    ctx->pc = 0x30a8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
label_30a8c4:
    // 0x30a8c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30a8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a8c8:
    // 0x30a8c8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_30a8cc:
    if (ctx->pc == 0x30A8CCu) {
        ctx->pc = 0x30A8CCu;
            // 0x30a8cc: 0xae000dd0  sw          $zero, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
        ctx->pc = 0x30A8D0u;
        goto label_30a8d0;
    }
    ctx->pc = 0x30A8C8u;
    {
        const bool branch_taken_0x30a8c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a8c8) {
            ctx->pc = 0x30A8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A8C8u;
            // 0x30a8cc: 0xae000dd0  sw          $zero, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A8D8u;
            goto label_30a8d8;
        }
    }
    ctx->pc = 0x30A8D0u;
label_30a8d0:
    // 0x30a8d0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x30a8d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_30a8d4:
    // 0x30a8d4: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x30a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
label_30a8d8:
    // 0x30a8d8: 0xe6000dc4  swc1        $f0, 0xDC4($s0)
    ctx->pc = 0x30a8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3524), bits); }
label_30a8dc:
    // 0x30a8dc: 0x3c033c64  lui         $v1, 0x3C64
    ctx->pc = 0x30a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15460 << 16));
label_30a8e0:
    // 0x30a8e0: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x30a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
label_30a8e4:
    // 0x30a8e4: 0x3463c388  ori         $v1, $v1, 0xC388
    ctx->pc = 0x30a8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50056);
label_30a8e8:
    // 0x30a8e8: 0x344212f7  ori         $v0, $v0, 0x12F7
    ctx->pc = 0x30a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4855);
label_30a8ec:
    // 0x30a8ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a8ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a8f0:
    // 0x30a8f0: 0x0  nop
    ctx->pc = 0x30a8f0u;
    // NOP
label_30a8f4:
    // 0x30a8f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30a8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_30a8f8:
    // 0x30a8f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x30a8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_30a8fc:
    // 0x30a8fc: 0x46001d42  mul.s       $f21, $f3, $f0
    ctx->pc = 0x30a8fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_30a900:
    // 0x30a900: 0xc6030de4  lwc1        $f3, 0xDE4($s0)
    ctx->pc = 0x30a900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30a904:
    // 0x30a904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a908:
    // 0x30a908: 0x0  nop
    ctx->pc = 0x30a908u;
    // NOP
label_30a90c:
    // 0x30a90c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x30a90cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a910:
    // 0x30a910: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30a914:
    if (ctx->pc == 0x30A914u) {
        ctx->pc = 0x30A914u;
            // 0x30a914: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30A918u;
        goto label_30a918;
    }
    ctx->pc = 0x30A910u;
    {
        const bool branch_taken_0x30a910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A910u;
            // 0x30a914: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a910) {
            ctx->pc = 0x30A91Cu;
            goto label_30a91c;
        }
    }
    ctx->pc = 0x30A918u;
label_30a918:
    // 0x30a918: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30a918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a91c:
    // 0x30a91c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30a91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_30a920:
    // 0x30a920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a924:
    // 0x30a924: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x30a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_30a928:
    // 0x30a928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a92c:
    // 0x30a92c: 0x0  nop
    ctx->pc = 0x30a92cu;
    // NOP
label_30a930:
    // 0x30a930: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x30a930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a934:
    // 0x30a934: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30a934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_30a938:
    // 0x30a938: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30a93c:
    if (ctx->pc == 0x30A93Cu) {
        ctx->pc = 0x30A93Cu;
            // 0x30a93c: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->pc = 0x30A940u;
        goto label_30a940;
    }
    ctx->pc = 0x30A938u;
    {
        const bool branch_taken_0x30a938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A938u;
            // 0x30a93c: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a938) {
            ctx->pc = 0x30A944u;
            goto label_30a944;
        }
    }
    ctx->pc = 0x30A940u;
label_30a940:
    // 0x30a940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a944:
    // 0x30a944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30a944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30a948:
    // 0x30a948: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30a94c:
    // 0x30a94c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_30a950:
    if (ctx->pc == 0x30A950u) {
        ctx->pc = 0x30A950u;
            // 0x30a950: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->pc = 0x30A954u;
        goto label_30a954;
    }
    ctx->pc = 0x30A94Cu;
    {
        const bool branch_taken_0x30a94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a94c) {
            ctx->pc = 0x30A950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A94Cu;
            // 0x30a950: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A994u;
            goto label_30a994;
        }
    }
    ctx->pc = 0x30A954u;
label_30a954:
    // 0x30a954: 0x3c02ba72  lui         $v0, 0xBA72
    ctx->pc = 0x30a954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47730 << 16));
label_30a958:
    // 0x30a958: 0x3442b9d6  ori         $v0, $v0, 0xB9D6
    ctx->pc = 0x30a958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47574);
label_30a95c:
    // 0x30a95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a960:
    // 0x30a960: 0x0  nop
    ctx->pc = 0x30a960u;
    // NOP
label_30a964:
    // 0x30a964: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30a964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_30a968:
    // 0x30a968: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x30a968u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30a96c:
    // 0x30a96c: 0xc6010de8  lwc1        $f1, 0xDE8($s0)
    ctx->pc = 0x30a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30a970:
    // 0x30a970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a974:
    // 0x30a974: 0x0  nop
    ctx->pc = 0x30a974u;
    // NOP
label_30a978:
    // 0x30a978: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30a978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a97c:
    // 0x30a97c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_30a980:
    if (ctx->pc == 0x30A980u) {
        ctx->pc = 0x30A980u;
            // 0x30a980: 0x46011800  add.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->pc = 0x30A984u;
        goto label_30a984;
    }
    ctx->pc = 0x30A97Cu;
    {
        const bool branch_taken_0x30a97c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a97c) {
            ctx->pc = 0x30A980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A97Cu;
            // 0x30a980: 0x46011800  add.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A98Cu;
            goto label_30a98c;
        }
    }
    ctx->pc = 0x30A984u;
label_30a984:
    // 0x30a984: 0x10000002  b           . + 4 + (0x2 << 2)
label_30a988:
    if (ctx->pc == 0x30A988u) {
        ctx->pc = 0x30A988u;
            // 0x30a988: 0xe6030de8  swc1        $f3, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->pc = 0x30A98Cu;
        goto label_30a98c;
    }
    ctx->pc = 0x30A984u;
    {
        const bool branch_taken_0x30a984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A984u;
            // 0x30a988: 0xe6030de8  swc1        $f3, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a984) {
            ctx->pc = 0x30A990u;
            goto label_30a990;
        }
    }
    ctx->pc = 0x30A98Cu;
label_30a98c:
    // 0x30a98c: 0xe6000de8  swc1        $f0, 0xDE8($s0)
    ctx->pc = 0x30a98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
label_30a990:
    // 0x30a990: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x30a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_30a994:
    // 0x30a994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a998:
    // 0x30a998: 0x0  nop
    ctx->pc = 0x30a998u;
    // NOP
label_30a99c:
    // 0x30a99c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x30a99cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a9a0:
    // 0x30a9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a9a4:
    // 0x30a9a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30a9a8:
    if (ctx->pc == 0x30A9A8u) {
        ctx->pc = 0x30A9A8u;
            // 0x30a9a8: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x30A9ACu;
        goto label_30a9ac;
    }
    ctx->pc = 0x30A9A4u;
    {
        const bool branch_taken_0x30a9a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A9A4u;
            // 0x30a9a8: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9a4) {
            ctx->pc = 0x30A9B0u;
            goto label_30a9b0;
        }
    }
    ctx->pc = 0x30A9ACu;
label_30a9ac:
    // 0x30a9ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a9b0:
    // 0x30a9b0: 0xc6010dd0  lwc1        $f1, 0xDD0($s0)
    ctx->pc = 0x30a9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30a9b4:
    // 0x30a9b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30a9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30a9b8:
    // 0x30a9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30a9bc:
    // 0x30a9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a9c0:
    // 0x30a9c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30a9c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a9c4:
    // 0x30a9c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30a9c8:
    if (ctx->pc == 0x30A9C8u) {
        ctx->pc = 0x30A9C8u;
            // 0x30a9c8: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->pc = 0x30A9CCu;
        goto label_30a9cc;
    }
    ctx->pc = 0x30A9C4u;
    {
        const bool branch_taken_0x30a9c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A9C4u;
            // 0x30a9c8: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9c4) {
            ctx->pc = 0x30A9D0u;
            goto label_30a9d0;
        }
    }
    ctx->pc = 0x30A9CCu;
label_30a9cc:
    // 0x30a9cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a9d0:
    // 0x30a9d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30a9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30a9d4:
    // 0x30a9d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30a9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30a9d8:
    // 0x30a9d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_30a9dc:
    if (ctx->pc == 0x30A9DCu) {
        ctx->pc = 0x30A9DCu;
            // 0x30a9dc: 0xe6150dc8  swc1        $f21, 0xDC8($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3528), bits); }
        ctx->pc = 0x30A9E0u;
        goto label_30a9e0;
    }
    ctx->pc = 0x30A9D8u;
    {
        const bool branch_taken_0x30a9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a9d8) {
            ctx->pc = 0x30A9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A9D8u;
            // 0x30a9dc: 0xe6150dc8  swc1        $f21, 0xDC8($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3528), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A9F0u;
            goto label_30a9f0;
        }
    }
    ctx->pc = 0x30A9E0u;
label_30a9e0:
    // 0x30a9e0: 0xc0c1570  jal         func_3055C0
label_30a9e4:
    if (ctx->pc == 0x30A9E4u) {
        ctx->pc = 0x30A9E4u;
            // 0x30a9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30A9E8u;
        goto label_30a9e8;
    }
    ctx->pc = 0x30A9E0u;
    SET_GPR_U32(ctx, 31, 0x30A9E8u);
    ctx->pc = 0x30A9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A9E0u;
            // 0x30a9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3055C0u;
    if (runtime->hasFunction(0x3055C0u)) {
        auto targetFn = runtime->lookupFunction(0x3055C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A9E8u; }
        if (ctx->pc != 0x30A9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003055C0_0x3055c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A9E8u; }
        if (ctx->pc != 0x30A9E8u) { return; }
    }
    ctx->pc = 0x30A9E8u;
label_30a9e8:
    // 0x30a9e8: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x30a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
label_30a9ec:
    // 0x30a9ec: 0xe6150dc8  swc1        $f21, 0xDC8($s0)
    ctx->pc = 0x30a9ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3528), bits); }
label_30a9f0:
    // 0x30a9f0: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x30a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
label_30a9f4:
    // 0x30a9f4: 0xc6000930  lwc1        $f0, 0x930($s0)
    ctx->pc = 0x30a9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30a9f8:
    // 0x30a9f8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30a9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_30a9fc:
    // 0x30a9fc: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x30a9fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_30aa00:
    // 0x30aa00: 0xc0c753c  jal         func_31D4F0
label_30aa04:
    if (ctx->pc == 0x30AA04u) {
        ctx->pc = 0x30AA04u;
            // 0x30aa04: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30AA08u;
        goto label_30aa08;
    }
    ctx->pc = 0x30AA00u;
    SET_GPR_U32(ctx, 31, 0x30AA08u);
    ctx->pc = 0x30AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA00u;
            // 0x30aa04: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AA08u; }
        if (ctx->pc != 0x30AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AA08u; }
        if (ctx->pc != 0x30AA08u) { return; }
    }
    ctx->pc = 0x30AA08u;
label_30aa08:
    // 0x30aa08: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x30aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30aa0c:
    // 0x30aa0c: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x30aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_30aa10:
    // 0x30aa10: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30aa10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_30aa14:
    // 0x30aa14: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x30aa14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_30aa18:
    // 0x30aa18: 0xc0c753c  jal         func_31D4F0
label_30aa1c:
    if (ctx->pc == 0x30AA1Cu) {
        ctx->pc = 0x30AA1Cu;
            // 0x30aa1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30AA20u;
        goto label_30aa20;
    }
    ctx->pc = 0x30AA18u;
    SET_GPR_U32(ctx, 31, 0x30AA20u);
    ctx->pc = 0x30AA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA18u;
            // 0x30aa1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AA20u; }
        if (ctx->pc != 0x30AA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AA20u; }
        if (ctx->pc != 0x30AA20u) { return; }
    }
    ctx->pc = 0x30AA20u;
label_30aa20:
    // 0x30aa20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30aa20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30aa24:
    // 0x30aa24: 0x0  nop
    ctx->pc = 0x30aa24u;
    // NOP
label_30aa28:
    // 0x30aa28: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x30aa28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30aa2c:
    // 0x30aa2c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_30aa30:
    if (ctx->pc == 0x30AA30u) {
        ctx->pc = 0x30AA30u;
            // 0x30aa30: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x30AA34u;
        goto label_30aa34;
    }
    ctx->pc = 0x30AA2Cu;
    {
        const bool branch_taken_0x30aa2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30aa2c) {
            ctx->pc = 0x30AA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA2Cu;
            // 0x30aa30: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AA48u;
            goto label_30aa48;
        }
    }
    ctx->pc = 0x30AA34u;
label_30aa34:
    // 0x30aa34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x30aa34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30aa38:
    // 0x30aa38: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x30aa38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_30aa3c:
    // 0x30aa3c: 0x320f809  jalr        $t9
label_30aa40:
    if (ctx->pc == 0x30AA40u) {
        ctx->pc = 0x30AA40u;
            // 0x30aa40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AA44u;
        goto label_30aa44;
    }
    ctx->pc = 0x30AA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30AA44u);
        ctx->pc = 0x30AA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA3Cu;
            // 0x30aa40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30AA44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30AA44u; }
            if (ctx->pc != 0x30AA44u) { return; }
        }
        }
    }
    ctx->pc = 0x30AA44u;
label_30aa44:
    // 0x30aa44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30aa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30aa48:
    // 0x30aa48: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30aa4c:
    // 0x30aa4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30aa4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30aa50:
    // 0x30aa50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30aa54:
    // 0x30aa54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30aa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30aa58:
    // 0x30aa58: 0x3e00008  jr          $ra
label_30aa5c:
    if (ctx->pc == 0x30AA5Cu) {
        ctx->pc = 0x30AA5Cu;
            // 0x30aa5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x30AA60u;
        goto label_30aa60;
    }
    ctx->pc = 0x30AA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA58u;
            // 0x30aa5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AA60u;
label_30aa60:
    // 0x30aa60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x30aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_30aa64:
    // 0x30aa64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30aa68:
    // 0x30aa68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_30aa6c:
    // 0x30aa6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30aa6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30aa70:
    // 0x30aa70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30aa74:
    // 0x30aa74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_30aa78:
    // 0x30aa78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30aa78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30aa7c:
    // 0x30aa7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x30aa7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_30aa80:
    // 0x30aa80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30aa80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30aa84:
    // 0x30aa84: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_30aa88:
    // 0x30aa88: 0x8c7000c8  lw          $s0, 0xC8($v1)
    ctx->pc = 0x30aa88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_30aa8c:
    // 0x30aa8c: 0xc6010dc4  lwc1        $f1, 0xDC4($s0)
    ctx->pc = 0x30aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30aa90:
    // 0x30aa90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30aa90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30aa94:
    // 0x30aa94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30aa98:
    if (ctx->pc == 0x30AA98u) {
        ctx->pc = 0x30AA98u;
            // 0x30aa98: 0x46010d02  mul.s       $f20, $f1, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->pc = 0x30AA9Cu;
        goto label_30aa9c;
    }
    ctx->pc = 0x30AA94u;
    {
        const bool branch_taken_0x30aa94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30AA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AA94u;
            // 0x30aa98: 0x46010d02  mul.s       $f20, $f1, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa94) {
            ctx->pc = 0x30AAA0u;
            goto label_30aaa0;
        }
    }
    ctx->pc = 0x30AA9Cu;
label_30aa9c:
    // 0x30aa9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30aa9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30aaa0:
    // 0x30aaa0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_30aaa4:
    if (ctx->pc == 0x30AAA4u) {
        ctx->pc = 0x30AAA4u;
            // 0x30aaa4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30AAA8u;
        goto label_30aaa8;
    }
    ctx->pc = 0x30AAA0u;
    {
        const bool branch_taken_0x30aaa0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30aaa0) {
            ctx->pc = 0x30AAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AAA0u;
            // 0x30aaa4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AAB4u;
            goto label_30aab4;
        }
    }
    ctx->pc = 0x30AAA8u;
label_30aaa8:
    // 0x30aaa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30aaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30aaac:
    // 0x30aaac: 0x10000007  b           . + 4 + (0x7 << 2)
label_30aab0:
    if (ctx->pc == 0x30AAB0u) {
        ctx->pc = 0x30AAB0u;
            // 0x30aab0: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x30AAB4u;
        goto label_30aab4;
    }
    ctx->pc = 0x30AAACu;
    {
        const bool branch_taken_0x30aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AAACu;
            // 0x30aab0: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aaac) {
            ctx->pc = 0x30AACCu;
            goto label_30aacc;
        }
    }
    ctx->pc = 0x30AAB4u;
label_30aab4:
    // 0x30aab4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30aab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30aab8:
    // 0x30aab8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30aab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30aabc:
    // 0x30aabc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30aabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30aac0:
    // 0x30aac0: 0x0  nop
    ctx->pc = 0x30aac0u;
    // NOP
label_30aac4:
    // 0x30aac4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x30aac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_30aac8:
    // 0x30aac8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x30aac8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_30aacc:
    // 0x30aacc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_30aad0:
    // 0x30aad0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_30aad4:
    // 0x30aad4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30aad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30aad8:
    // 0x30aad8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_30aadc:
    // 0x30aadc: 0x3c024663  lui         $v0, 0x4663
    ctx->pc = 0x30aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18019 << 16));
label_30aae0:
    // 0x30aae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30aae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30aae4:
    // 0x30aae4: 0x34428c00  ori         $v0, $v0, 0x8C00
    ctx->pc = 0x30aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35840);
label_30aae8:
    // 0x30aae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30aae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30aaec:
    // 0x30aaec: 0x0  nop
    ctx->pc = 0x30aaecu;
    // NOP
label_30aaf0:
    // 0x30aaf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30aaf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_30aaf4:
    // 0x30aaf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30aaf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_30aaf8:
    // 0x30aaf8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30aaf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30aafc:
    // 0x30aafc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30aafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ab00:
    // 0x30ab00: 0x0  nop
    ctx->pc = 0x30ab00u;
    // NOP
label_30ab04:
    // 0x30ab04: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x30ab04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30ab08:
    // 0x30ab08: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x30ab08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_30ab0c:
    // 0x30ab0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30ab0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30ab10:
    // 0x30ab10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ab10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_30ab14:
    // 0x30ab14: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x30ab14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_30ab18:
    // 0x30ab18: 0xc04f308  jal         func_13CC20
label_30ab1c:
    if (ctx->pc == 0x30AB1Cu) {
        ctx->pc = 0x30AB1Cu;
            // 0x30ab1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AB20u;
        goto label_30ab20;
    }
    ctx->pc = 0x30AB18u;
    SET_GPR_U32(ctx, 31, 0x30AB20u);
    ctx->pc = 0x30AB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB18u;
            // 0x30ab1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB20u; }
        if (ctx->pc != 0x30AB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB20u; }
        if (ctx->pc != 0x30AB20u) { return; }
    }
    ctx->pc = 0x30AB20u;
label_30ab20:
    // 0x30ab20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30ab20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30ab24:
    // 0x30ab24: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30ab28:
    // 0x30ab28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30ab28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30ab2c:
    // 0x30ab2c: 0xc04f3fc  jal         func_13CFF0
label_30ab30:
    if (ctx->pc == 0x30AB30u) {
        ctx->pc = 0x30AB30u;
            // 0x30ab30: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x30AB34u;
        goto label_30ab34;
    }
    ctx->pc = 0x30AB2Cu;
    SET_GPR_U32(ctx, 31, 0x30AB34u);
    ctx->pc = 0x30AB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB2Cu;
            // 0x30ab30: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB34u; }
        if (ctx->pc != 0x30AB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB34u; }
        if (ctx->pc != 0x30AB34u) { return; }
    }
    ctx->pc = 0x30AB34u;
label_30ab34:
    // 0x30ab34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30ab38:
    // 0x30ab38: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x30ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_30ab3c:
    // 0x30ab3c: 0xc04cd60  jal         func_133580
label_30ab40:
    if (ctx->pc == 0x30AB40u) {
        ctx->pc = 0x30AB40u;
            // 0x30ab40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AB44u;
        goto label_30ab44;
    }
    ctx->pc = 0x30AB3Cu;
    SET_GPR_U32(ctx, 31, 0x30AB44u);
    ctx->pc = 0x30AB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB3Cu;
            // 0x30ab40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB44u; }
        if (ctx->pc != 0x30AB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB44u; }
        if (ctx->pc != 0x30AB44u) { return; }
    }
    ctx->pc = 0x30AB44u;
label_30ab44:
    // 0x30ab44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30ab48:
    // 0x30ab48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30ab4c:
    // 0x30ab4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30ab4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30ab50:
    // 0x30ab50: 0x4600a387  neg.s       $f14, $f20
    ctx->pc = 0x30ab50u;
    ctx->f[14] = FPU_NEG_S(ctx->f[20]);
label_30ab54:
    // 0x30ab54: 0xc04ce64  jal         func_133990
label_30ab58:
    if (ctx->pc == 0x30AB58u) {
        ctx->pc = 0x30AB58u;
            // 0x30ab58: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30AB5Cu;
        goto label_30ab5c;
    }
    ctx->pc = 0x30AB54u;
    SET_GPR_U32(ctx, 31, 0x30AB5Cu);
    ctx->pc = 0x30AB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB54u;
            // 0x30ab58: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB5Cu; }
        if (ctx->pc != 0x30AB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AB5Cu; }
        if (ctx->pc != 0x30AB5Cu) { return; }
    }
    ctx->pc = 0x30AB5Cu;
label_30ab5c:
    // 0x30ab5c: 0xc6140dc0  lwc1        $f20, 0xDC0($s0)
    ctx->pc = 0x30ab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30ab60:
    // 0x30ab60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30ab64:
    // 0x30ab64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ab64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ab68:
    // 0x30ab68: 0x0  nop
    ctx->pc = 0x30ab68u;
    // NOP
label_30ab6c:
    // 0x30ab6c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30ab6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ab70:
    // 0x30ab70: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_30ab74:
    if (ctx->pc == 0x30AB74u) {
        ctx->pc = 0x30AB74u;
            // 0x30ab74: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x30AB78u;
        goto label_30ab78;
    }
    ctx->pc = 0x30AB70u;
    {
        const bool branch_taken_0x30ab70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ab70) {
            ctx->pc = 0x30AB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB70u;
            // 0x30ab74: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AB80u;
            goto label_30ab80;
        }
    }
    ctx->pc = 0x30AB78u;
label_30ab78:
    // 0x30ab78: 0x10000007  b           . + 4 + (0x7 << 2)
label_30ab7c:
    if (ctx->pc == 0x30AB7Cu) {
        ctx->pc = 0x30AB7Cu;
            // 0x30ab7c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x30AB80u;
        goto label_30ab80;
    }
    ctx->pc = 0x30AB78u;
    {
        const bool branch_taken_0x30ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB78u;
            // 0x30ab7c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab78) {
            ctx->pc = 0x30AB98u;
            goto label_30ab98;
        }
    }
    ctx->pc = 0x30AB80u;
label_30ab80:
    // 0x30ab80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ab80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ab84:
    // 0x30ab84: 0x0  nop
    ctx->pc = 0x30ab84u;
    // NOP
label_30ab88:
    // 0x30ab88: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30ab88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ab8c:
    // 0x30ab8c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_30ab90:
    if (ctx->pc == 0x30AB90u) {
        ctx->pc = 0x30AB90u;
            // 0x30ab90: 0xc6010dd4  lwc1        $f1, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x30AB94u;
        goto label_30ab94;
    }
    ctx->pc = 0x30AB8Cu;
    {
        const bool branch_taken_0x30ab8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ab8c) {
            ctx->pc = 0x30AB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AB8Cu;
            // 0x30ab90: 0xc6010dd4  lwc1        $f1, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AB9Cu;
            goto label_30ab9c;
        }
    }
    ctx->pc = 0x30AB94u;
label_30ab94:
    // 0x30ab94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30ab94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_30ab98:
    // 0x30ab98: 0xc6010dd4  lwc1        $f1, 0xDD4($s0)
    ctx->pc = 0x30ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ab9c:
    // 0x30ab9c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x30ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_30aba0:
    // 0x30aba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30aba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30aba4:
    // 0x30aba4: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x30aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
label_30aba8:
    // 0x30aba8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30aba8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_30abac:
    // 0x30abac: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x30abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_30abb0:
    // 0x30abb0: 0x0  nop
    ctx->pc = 0x30abb0u;
    // NOP
label_30abb4:
    // 0x30abb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30abb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30abb8:
    // 0x30abb8: 0xc0477a8  jal         func_11DEA0
label_30abbc:
    if (ctx->pc == 0x30ABBCu) {
        ctx->pc = 0x30ABBCu;
            // 0x30abbc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x30ABC0u;
        goto label_30abc0;
    }
    ctx->pc = 0x30ABB8u;
    SET_GPR_U32(ctx, 31, 0x30ABC0u);
    ctx->pc = 0x30ABBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ABB8u;
            // 0x30abbc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ABC0u; }
        if (ctx->pc != 0x30ABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ABC0u; }
        if (ctx->pc != 0x30ABC0u) { return; }
    }
    ctx->pc = 0x30ABC0u;
label_30abc0:
    // 0x30abc0: 0xc6030dd4  lwc1        $f3, 0xDD4($s0)
    ctx->pc = 0x30abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30abc4:
    // 0x30abc4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x30abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_30abc8:
    // 0x30abc8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30abc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30abcc:
    // 0x30abcc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30abd0:
    // 0x30abd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30abd4:
    // 0x30abd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30abd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30abd8:
    // 0x30abd8: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x30abd8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_30abdc:
    // 0x30abdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30abdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30abe0:
    // 0x30abe0: 0x0  nop
    ctx->pc = 0x30abe0u;
    // NOP
label_30abe4:
    // 0x30abe4: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x30abe4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_30abe8:
    // 0x30abe8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x30abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_30abec:
    // 0x30abec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x30abecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_30abf0:
    // 0x30abf0: 0xc6020dec  lwc1        $f2, 0xDEC($s0)
    ctx->pc = 0x30abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30abf4:
    // 0x30abf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30abf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30abf8:
    // 0x30abf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30abf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30abfc:
    // 0x30abfc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30abfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_30ac00:
    // 0x30ac00: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x30ac00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_30ac04:
    // 0x30ac04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30ac04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_30ac08:
    // 0x30ac08: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30ac08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30ac0c:
    // 0x30ac0c: 0x4600a342  mul.s       $f13, $f20, $f0
    ctx->pc = 0x30ac0cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30ac10:
    // 0x30ac10: 0xc04ce64  jal         func_133990
label_30ac14:
    if (ctx->pc == 0x30AC14u) {
        ctx->pc = 0x30AC14u;
            // 0x30ac14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30AC18u;
        goto label_30ac18;
    }
    ctx->pc = 0x30AC10u;
    SET_GPR_U32(ctx, 31, 0x30AC18u);
    ctx->pc = 0x30AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AC10u;
            // 0x30ac14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AC18u; }
        if (ctx->pc != 0x30AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AC18u; }
        if (ctx->pc != 0x30AC18u) { return; }
    }
    ctx->pc = 0x30AC18u;
label_30ac18:
    // 0x30ac18: 0xc6060de4  lwc1        $f6, 0xDE4($s0)
    ctx->pc = 0x30ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_30ac1c:
    // 0x30ac1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ac1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ac20:
    // 0x30ac20: 0x0  nop
    ctx->pc = 0x30ac20u;
    // NOP
label_30ac24:
    // 0x30ac24: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x30ac24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ac28:
    // 0x30ac28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30ac2c:
    if (ctx->pc == 0x30AC2Cu) {
        ctx->pc = 0x30AC2Cu;
            // 0x30ac2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30AC30u;
        goto label_30ac30;
    }
    ctx->pc = 0x30AC28u;
    {
        const bool branch_taken_0x30ac28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AC28u;
            // 0x30ac2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac28) {
            ctx->pc = 0x30AC34u;
            goto label_30ac34;
        }
    }
    ctx->pc = 0x30AC30u;
label_30ac30:
    // 0x30ac30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30ac30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ac34:
    // 0x30ac34: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_30ac38:
    if (ctx->pc == 0x30AC38u) {
        ctx->pc = 0x30AC38u;
            // 0x30ac38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30AC3Cu;
        goto label_30ac3c;
    }
    ctx->pc = 0x30AC34u;
    {
        const bool branch_taken_0x30ac34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30ac34) {
            ctx->pc = 0x30AC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AC34u;
            // 0x30ac38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AC48u;
            goto label_30ac48;
        }
    }
    ctx->pc = 0x30AC3Cu;
label_30ac3c:
    // 0x30ac3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ac3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ac40:
    // 0x30ac40: 0x10000007  b           . + 4 + (0x7 << 2)
label_30ac44:
    if (ctx->pc == 0x30AC44u) {
        ctx->pc = 0x30AC44u;
            // 0x30ac44: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x30AC48u;
        goto label_30ac48;
    }
    ctx->pc = 0x30AC40u;
    {
        const bool branch_taken_0x30ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AC40u;
            // 0x30ac44: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac40) {
            ctx->pc = 0x30AC60u;
            goto label_30ac60;
        }
    }
    ctx->pc = 0x30AC48u;
label_30ac48:
    // 0x30ac48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30ac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30ac4c:
    // 0x30ac4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ac4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30ac50:
    // 0x30ac50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ac50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ac54:
    // 0x30ac54: 0x0  nop
    ctx->pc = 0x30ac54u;
    // NOP
label_30ac58:
    // 0x30ac58: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x30ac58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_30ac5c:
    // 0x30ac5c: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x30ac5cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_30ac60:
    // 0x30ac60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30ac64:
    // 0x30ac64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_30ac68:
    // 0x30ac68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30ac68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30ac6c:
    // 0x30ac6c: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x30ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_30ac70:
    // 0x30ac70: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x30ac70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30ac74:
    // 0x30ac74: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x30ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_30ac78:
    // 0x30ac78: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x30ac78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30ac7c:
    // 0x30ac7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30ac7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30ac80:
    // 0x30ac80: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x30ac80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_30ac84:
    // 0x30ac84: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x30ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_30ac88:
    // 0x30ac88: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x30ac88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_30ac8c:
    // 0x30ac8c: 0x46023102  mul.s       $f4, $f6, $f2
    ctx->pc = 0x30ac8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_30ac90:
    // 0x30ac90: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x30ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30ac94:
    // 0x30ac94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30ac94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ac98:
    // 0x30ac98: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30ac98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30ac9c:
    // 0x30ac9c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30ac9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_30aca0:
    // 0x30aca0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x30aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_30aca4:
    // 0x30aca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30aca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30aca8:
    // 0x30aca8: 0x0  nop
    ctx->pc = 0x30aca8u;
    // NOP
label_30acac:
    // 0x30acac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30acacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30acb0:
    // 0x30acb0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30acb4:
    if (ctx->pc == 0x30ACB4u) {
        ctx->pc = 0x30ACB4u;
            // 0x30acb4: 0xe621005c  swc1        $f1, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->pc = 0x30ACB8u;
        goto label_30acb8;
    }
    ctx->pc = 0x30ACB0u;
    {
        const bool branch_taken_0x30acb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30ACB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ACB0u;
            // 0x30acb4: 0xe621005c  swc1        $f1, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acb0) {
            ctx->pc = 0x30ACBCu;
            goto label_30acbc;
        }
    }
    ctx->pc = 0x30ACB8u;
label_30acb8:
    // 0x30acb8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x30acb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_30acbc:
    // 0x30acbc: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x30acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_30acc0:
    // 0x30acc0: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x30acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_30acc4:
    // 0x30acc4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x30acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_30acc8:
    // 0x30acc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_30accc:
    // 0x30accc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30acccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30acd0:
    // 0x30acd0: 0x0  nop
    ctx->pc = 0x30acd0u;
    // NOP
label_30acd4:
    // 0x30acd4: 0x46040882  mul.s       $f2, $f1, $f4
    ctx->pc = 0x30acd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_30acd8:
    // 0x30acd8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x30acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_30acdc:
    // 0x30acdc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x30acdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_30ace0:
    // 0x30ace0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x30ace0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ace4:
    // 0x30ace4: 0x0  nop
    ctx->pc = 0x30ace4u;
    // NOP
label_30ace8:
    // 0x30ace8: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x30ace8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_30acec:
    // 0x30acec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x30acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30acf0:
    // 0x30acf0: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x30acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_30acf4:
    // 0x30acf4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x30acf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30acf8:
    // 0x30acf8: 0x0  nop
    ctx->pc = 0x30acf8u;
    // NOP
label_30acfc:
    // 0x30acfc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x30acfcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_30ad00:
    // 0x30ad00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30ad00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ad04:
    // 0x30ad04: 0x0  nop
    ctx->pc = 0x30ad04u;
    // NOP
label_30ad08:
    // 0x30ad08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ad08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30ad0c:
    // 0x30ad0c: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x30ad0cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
label_30ad10:
    // 0x30ad10: 0x0  nop
    ctx->pc = 0x30ad10u;
    // NOP
label_30ad14:
    // 0x30ad14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30ad14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ad18:
    // 0x30ad18: 0xc0477a8  jal         func_11DEA0
label_30ad1c:
    if (ctx->pc == 0x30AD1Cu) {
        ctx->pc = 0x30AD1Cu;
            // 0x30ad1c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x30AD20u;
        goto label_30ad20;
    }
    ctx->pc = 0x30AD18u;
    SET_GPR_U32(ctx, 31, 0x30AD20u);
    ctx->pc = 0x30AD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD18u;
            // 0x30ad1c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD20u; }
        if (ctx->pc != 0x30AD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD20u; }
        if (ctx->pc != 0x30AD20u) { return; }
    }
    ctx->pc = 0x30AD20u;
label_30ad20:
    // 0x30ad20: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x30ad20u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30ad24:
    // 0x30ad24: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x30ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_30ad28:
    // 0x30ad28: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x30ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_30ad2c:
    // 0x30ad2c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x30ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_30ad30:
    // 0x30ad30: 0xc6220060  lwc1        $f2, 0x60($s1)
    ctx->pc = 0x30ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30ad34:
    // 0x30ad34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30ad34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ad38:
    // 0x30ad38: 0xc6040dec  lwc1        $f4, 0xDEC($s0)
    ctx->pc = 0x30ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30ad3c:
    // 0x30ad3c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x30ad3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30ad40:
    // 0x30ad40: 0x0  nop
    ctx->pc = 0x30ad40u;
    // NOP
label_30ad44:
    // 0x30ad44: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x30ad44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30ad48:
    // 0x30ad48: 0x4604189c  madd.s      $f2, $f3, $f4
    ctx->pc = 0x30ad48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_30ad4c:
    // 0x30ad4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ad4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ad50:
    // 0x30ad50: 0x0  nop
    ctx->pc = 0x30ad50u;
    // NOP
label_30ad54:
    // 0x30ad54: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x30ad54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ad58:
    // 0x30ad58: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30ad5c:
    if (ctx->pc == 0x30AD5Cu) {
        ctx->pc = 0x30AD5Cu;
            // 0x30ad5c: 0xe6220060  swc1        $f2, 0x60($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->pc = 0x30AD60u;
        goto label_30ad60;
    }
    ctx->pc = 0x30AD58u;
    {
        const bool branch_taken_0x30ad58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30AD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD58u;
            // 0x30ad5c: 0xe6220060  swc1        $f2, 0x60($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad58) {
            ctx->pc = 0x30AD64u;
            goto label_30ad64;
        }
    }
    ctx->pc = 0x30AD60u;
label_30ad60:
    // 0x30ad60: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x30ad60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_30ad64:
    // 0x30ad64: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x30ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_30ad68:
    // 0x30ad68: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x30ad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30ad6c:
    // 0x30ad6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30ad6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ad70:
    // 0x30ad70: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x30ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_30ad74:
    // 0x30ad74: 0x46040d02  mul.s       $f20, $f1, $f4
    ctx->pc = 0x30ad74u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_30ad78:
    // 0x30ad78: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x30ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_30ad7c:
    // 0x30ad7c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x30ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ad80:
    // 0x30ad80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30ad80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ad84:
    // 0x30ad84: 0xc0477a8  jal         func_11DEA0
label_30ad88:
    if (ctx->pc == 0x30AD88u) {
        ctx->pc = 0x30AD88u;
            // 0x30ad88: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x30AD8Cu;
        goto label_30ad8c;
    }
    ctx->pc = 0x30AD84u;
    SET_GPR_U32(ctx, 31, 0x30AD8Cu);
    ctx->pc = 0x30AD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD84u;
            // 0x30ad88: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD8Cu; }
        if (ctx->pc != 0x30AD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD8Cu; }
        if (ctx->pc != 0x30AD8Cu) { return; }
    }
    ctx->pc = 0x30AD8Cu;
label_30ad8c:
    // 0x30ad8c: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x30ad8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30ad90:
    // 0x30ad90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30ad94:
    // 0x30ad94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30ad94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30ad98:
    // 0x30ad98: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30ad98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_30ad9c:
    // 0x30ad9c: 0xc04ce64  jal         func_133990
label_30ada0:
    if (ctx->pc == 0x30ADA0u) {
        ctx->pc = 0x30ADA0u;
            // 0x30ada0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x30ADA4u;
        goto label_30ada4;
    }
    ctx->pc = 0x30AD9Cu;
    SET_GPR_U32(ctx, 31, 0x30ADA4u);
    ctx->pc = 0x30ADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD9Cu;
            // 0x30ada0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ADA4u; }
        if (ctx->pc != 0x30ADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ADA4u; }
        if (ctx->pc != 0x30ADA4u) { return; }
    }
    ctx->pc = 0x30ADA4u;
label_30ada4:
    // 0x30ada4: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x30ada4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_30ada8:
    // 0x30ada8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30ada8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30adac:
    // 0x30adac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x30adacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_30adb0:
    // 0x30adb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30adb4:
    // 0x30adb4: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x30adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_30adb8:
    // 0x30adb8: 0xc04cd60  jal         func_133580
label_30adbc:
    if (ctx->pc == 0x30ADBCu) {
        ctx->pc = 0x30ADBCu;
            // 0x30adbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30ADC0u;
        goto label_30adc0;
    }
    ctx->pc = 0x30ADB8u;
    SET_GPR_U32(ctx, 31, 0x30ADC0u);
    ctx->pc = 0x30ADBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ADB8u;
            // 0x30adbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ADC0u; }
        if (ctx->pc != 0x30ADC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ADC0u; }
        if (ctx->pc != 0x30ADC0u) { return; }
    }
    ctx->pc = 0x30ADC0u;
label_30adc0:
    // 0x30adc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30adc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30adc4:
    // 0x30adc4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30adc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30adc8:
    // 0x30adc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30adc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30adcc:
    // 0x30adcc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30add0:
    // 0x30add0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30add0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30add4:
    // 0x30add4: 0x3e00008  jr          $ra
label_30add8:
    if (ctx->pc == 0x30ADD8u) {
        ctx->pc = 0x30ADD8u;
            // 0x30add8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x30ADDCu;
        goto label_30addc;
    }
    ctx->pc = 0x30ADD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ADD4u;
            // 0x30add8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30ADDCu;
label_30addc:
    // 0x30addc: 0x0  nop
    ctx->pc = 0x30addcu;
    // NOP
label_30ade0:
    // 0x30ade0: 0x8102f00  j           func_40BC00
label_30ade4:
    if (ctx->pc == 0x30ADE4u) {
        ctx->pc = 0x30ADE8u;
        goto label_30ade8;
    }
    ctx->pc = 0x30ADE0u;
    ctx->pc = 0x40BC00u;
    if (runtime->hasFunction(0x40BC00u)) {
        auto targetFn = runtime->lookupFunction(0x40BC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0040BC00_0x40bc00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x30ADE8u;
label_30ade8:
    // 0x30ade8: 0x0  nop
    ctx->pc = 0x30ade8u;
    // NOP
label_30adec:
    // 0x30adec: 0x0  nop
    ctx->pc = 0x30adecu;
    // NOP
label_30adf0:
    // 0x30adf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30adf4:
    // 0x30adf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30adf8:
    // 0x30adf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30adfc:
    // 0x30adfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30adfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30ae00:
    // 0x30ae00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30ae00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30ae04:
    // 0x30ae04: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_30ae08:
    if (ctx->pc == 0x30AE08u) {
        ctx->pc = 0x30AE08u;
            // 0x30ae08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AE0Cu;
        goto label_30ae0c;
    }
    ctx->pc = 0x30AE04u;
    {
        const bool branch_taken_0x30ae04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE04u;
            // 0x30ae08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae04) {
            ctx->pc = 0x30AE8Cu;
            goto label_30ae8c;
        }
    }
    ctx->pc = 0x30AE0Cu;
label_30ae0c:
    // 0x30ae0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30ae10:
    // 0x30ae10: 0x3c04a400  lui         $a0, 0xA400
    ctx->pc = 0x30ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41984 << 16));
label_30ae14:
    // 0x30ae14: 0x24423f70  addiu       $v0, $v0, 0x3F70
    ctx->pc = 0x30ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16240));
label_30ae18:
    // 0x30ae18: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x30ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_30ae1c:
    // 0x30ae1c: 0xc0733ec  jal         func_1CCFB0
label_30ae20:
    if (ctx->pc == 0x30AE20u) {
        ctx->pc = 0x30AE20u;
            // 0x30ae20: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30AE24u;
        goto label_30ae24;
    }
    ctx->pc = 0x30AE1Cu;
    SET_GPR_U32(ctx, 31, 0x30AE24u);
    ctx->pc = 0x30AE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE1Cu;
            // 0x30ae20: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFB0u;
    if (runtime->hasFunction(0x1CCFB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CCFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE24u; }
        if (ctx->pc != 0x30AE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFB0_0x1ccfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE24u; }
        if (ctx->pc != 0x30AE24u) { return; }
    }
    ctx->pc = 0x30AE24u;
label_30ae24:
    // 0x30ae24: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_30ae28:
    if (ctx->pc == 0x30AE28u) {
        ctx->pc = 0x30AE28u;
            // 0x30ae28: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x30AE2Cu;
        goto label_30ae2c;
    }
    ctx->pc = 0x30AE24u;
    {
        const bool branch_taken_0x30ae24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ae24) {
            ctx->pc = 0x30AE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE24u;
            // 0x30ae28: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AE78u;
            goto label_30ae78;
        }
    }
    ctx->pc = 0x30AE2Cu;
label_30ae2c:
    // 0x30ae2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30ae30:
    // 0x30ae30: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x30ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_30ae34:
    // 0x30ae34: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x30ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_30ae38:
    // 0x30ae38: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x30ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_30ae3c:
    // 0x30ae3c: 0xc0ad6c4  jal         func_2B5B10
label_30ae40:
    if (ctx->pc == 0x30AE40u) {
        ctx->pc = 0x30AE40u;
            // 0x30ae40: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30AE44u;
        goto label_30ae44;
    }
    ctx->pc = 0x30AE3Cu;
    SET_GPR_U32(ctx, 31, 0x30AE44u);
    ctx->pc = 0x30AE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE3Cu;
            // 0x30ae40: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE44u; }
        if (ctx->pc != 0x30AE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE44u; }
        if (ctx->pc != 0x30AE44u) { return; }
    }
    ctx->pc = 0x30AE44u;
label_30ae44:
    // 0x30ae44: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x30ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_30ae48:
    // 0x30ae48: 0xc0ad670  jal         func_2B59C0
label_30ae4c:
    if (ctx->pc == 0x30AE4Cu) {
        ctx->pc = 0x30AE4Cu;
            // 0x30ae4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x30AE50u;
        goto label_30ae50;
    }
    ctx->pc = 0x30AE48u;
    SET_GPR_U32(ctx, 31, 0x30AE50u);
    ctx->pc = 0x30AE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE48u;
            // 0x30ae4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE50u; }
        if (ctx->pc != 0x30AE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE50u; }
        if (ctx->pc != 0x30AE50u) { return; }
    }
    ctx->pc = 0x30AE50u;
label_30ae50:
    // 0x30ae50: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x30ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_30ae54:
    // 0x30ae54: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x30ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_30ae58:
    // 0x30ae58: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x30ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_30ae5c:
    // 0x30ae5c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x30ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_30ae60:
    // 0x30ae60: 0xc0407e8  jal         func_101FA0
label_30ae64:
    if (ctx->pc == 0x30AE64u) {
        ctx->pc = 0x30AE64u;
            // 0x30ae64: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x30AE68u;
        goto label_30ae68;
    }
    ctx->pc = 0x30AE60u;
    SET_GPR_U32(ctx, 31, 0x30AE68u);
    ctx->pc = 0x30AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE60u;
            // 0x30ae64: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE68u; }
        if (ctx->pc != 0x30AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE68u; }
        if (ctx->pc != 0x30AE68u) { return; }
    }
    ctx->pc = 0x30AE68u;
label_30ae68:
    // 0x30ae68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ae6c:
    // 0x30ae6c: 0xc0ad6c8  jal         func_2B5B20
label_30ae70:
    if (ctx->pc == 0x30AE70u) {
        ctx->pc = 0x30AE70u;
            // 0x30ae70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AE74u;
        goto label_30ae74;
    }
    ctx->pc = 0x30AE6Cu;
    SET_GPR_U32(ctx, 31, 0x30AE74u);
    ctx->pc = 0x30AE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE6Cu;
            // 0x30ae70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE74u; }
        if (ctx->pc != 0x30AE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE74u; }
        if (ctx->pc != 0x30AE74u) { return; }
    }
    ctx->pc = 0x30AE74u;
label_30ae74:
    // 0x30ae74: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30ae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30ae78:
    // 0x30ae78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30ae78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30ae7c:
    // 0x30ae7c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30ae80:
    if (ctx->pc == 0x30AE80u) {
        ctx->pc = 0x30AE80u;
            // 0x30ae80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AE84u;
        goto label_30ae84;
    }
    ctx->pc = 0x30AE7Cu;
    {
        const bool branch_taken_0x30ae7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30ae7c) {
            ctx->pc = 0x30AE80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE7Cu;
            // 0x30ae80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AE90u;
            goto label_30ae90;
        }
    }
    ctx->pc = 0x30AE84u;
label_30ae84:
    // 0x30ae84: 0xc0400a8  jal         func_1002A0
label_30ae88:
    if (ctx->pc == 0x30AE88u) {
        ctx->pc = 0x30AE88u;
            // 0x30ae88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AE8Cu;
        goto label_30ae8c;
    }
    ctx->pc = 0x30AE84u;
    SET_GPR_U32(ctx, 31, 0x30AE8Cu);
    ctx->pc = 0x30AE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE84u;
            // 0x30ae88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE8Cu; }
        if (ctx->pc != 0x30AE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AE8Cu; }
        if (ctx->pc != 0x30AE8Cu) { return; }
    }
    ctx->pc = 0x30AE8Cu;
label_30ae8c:
    // 0x30ae8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30ae8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ae90:
    // 0x30ae90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30ae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30ae94:
    // 0x30ae94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ae94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30ae98:
    // 0x30ae98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ae98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30ae9c:
    // 0x30ae9c: 0x3e00008  jr          $ra
label_30aea0:
    if (ctx->pc == 0x30AEA0u) {
        ctx->pc = 0x30AEA0u;
            // 0x30aea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30AEA4u;
        goto label_30aea4;
    }
    ctx->pc = 0x30AE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE9Cu;
            // 0x30aea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AEA4u;
label_30aea4:
    // 0x30aea4: 0x0  nop
    ctx->pc = 0x30aea4u;
    // NOP
label_30aea8:
    // 0x30aea8: 0x0  nop
    ctx->pc = 0x30aea8u;
    // NOP
label_30aeac:
    // 0x30aeac: 0x0  nop
    ctx->pc = 0x30aeacu;
    // NOP
label_30aeb0:
    // 0x30aeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30aeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30aeb4:
    // 0x30aeb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30aeb8:
    // 0x30aeb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30aebc:
    // 0x30aebc: 0xc0bd300  jal         func_2F4C00
label_30aec0:
    if (ctx->pc == 0x30AEC0u) {
        ctx->pc = 0x30AEC0u;
            // 0x30aec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AEC4u;
        goto label_30aec4;
    }
    ctx->pc = 0x30AEBCu;
    SET_GPR_U32(ctx, 31, 0x30AEC4u);
    ctx->pc = 0x30AEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AEBCu;
            // 0x30aec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C00u;
    if (runtime->hasFunction(0x2F4C00u)) {
        auto targetFn = runtime->lookupFunction(0x2F4C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AEC4u; }
        if (ctx->pc != 0x30AEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F4C00_0x2f4c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AEC4u; }
        if (ctx->pc != 0x30AEC4u) { return; }
    }
    ctx->pc = 0x30AEC4u;
label_30aec4:
    // 0x30aec4: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x30aec4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_30aec8:
    // 0x30aec8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30aecc:
    // 0x30aecc: 0x54830013  bnel        $a0, $v1, . + 4 + (0x13 << 2)
label_30aed0:
    if (ctx->pc == 0x30AED0u) {
        ctx->pc = 0x30AED0u;
            // 0x30aed0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x30AED4u;
        goto label_30aed4;
    }
    ctx->pc = 0x30AECCu;
    {
        const bool branch_taken_0x30aecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30aecc) {
            ctx->pc = 0x30AED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30AECCu;
            // 0x30aed0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30AF1Cu;
            goto label_30af1c;
        }
    }
    ctx->pc = 0x30AED4u;
label_30aed4:
    // 0x30aed4: 0x8e0304b8  lw          $v1, 0x4B8($s0)
    ctx->pc = 0x30aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1208)));
label_30aed8:
    // 0x30aed8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_30aedc:
    if (ctx->pc == 0x30AEDCu) {
        ctx->pc = 0x30AEE0u;
        goto label_30aee0;
    }
    ctx->pc = 0x30AED8u;
    {
        const bool branch_taken_0x30aed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aed8) {
            ctx->pc = 0x30AF18u;
            goto label_30af18;
        }
    }
    ctx->pc = 0x30AEE0u;
label_30aee0:
    // 0x30aee0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_30aee4:
    // 0x30aee4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x30aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_30aee8:
    // 0x30aee8: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x30aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_30aeec:
    // 0x30aeec: 0x34650ca9  ori         $a1, $v1, 0xCA9
    ctx->pc = 0x30aeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3241);
label_30aef0:
    // 0x30aef0: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x30aef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_30aef4:
    // 0x30aef4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x30aef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_30aef8:
    // 0x30aef8: 0x320f809  jalr        $t9
label_30aefc:
    if (ctx->pc == 0x30AEFCu) {
        ctx->pc = 0x30AEFCu;
            // 0x30aefc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x30AF00u;
        goto label_30af00;
    }
    ctx->pc = 0x30AEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30AF00u);
        ctx->pc = 0x30AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AEF8u;
            // 0x30aefc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30AF00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30AF00u; }
            if (ctx->pc != 0x30AF00u) { return; }
        }
        }
    }
    ctx->pc = 0x30AF00u;
label_30af00:
    // 0x30af00: 0xae0204b8  sw          $v0, 0x4B8($s0)
    ctx->pc = 0x30af00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1208), GPR_U32(ctx, 2));
label_30af04:
    // 0x30af04: 0xc072a56  jal         func_1CA958
label_30af08:
    if (ctx->pc == 0x30AF08u) {
        ctx->pc = 0x30AF08u;
            // 0x30af08: 0x920404b8  lbu         $a0, 0x4B8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1208)));
        ctx->pc = 0x30AF0Cu;
        goto label_30af0c;
    }
    ctx->pc = 0x30AF04u;
    SET_GPR_U32(ctx, 31, 0x30AF0Cu);
    ctx->pc = 0x30AF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF04u;
            // 0x30af08: 0x920404b8  lbu         $a0, 0x4B8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AF0Cu; }
        if (ctx->pc != 0x30AF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AF0Cu; }
        if (ctx->pc != 0x30AF0Cu) { return; }
    }
    ctx->pc = 0x30AF0Cu;
label_30af0c:
    // 0x30af0c: 0x920404b8  lbu         $a0, 0x4B8($s0)
    ctx->pc = 0x30af0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1208)));
label_30af10:
    // 0x30af10: 0xc072ac6  jal         func_1CAB18
label_30af14:
    if (ctx->pc == 0x30AF14u) {
        ctx->pc = 0x30AF14u;
            // 0x30af14: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x30AF18u;
        goto label_30af18;
    }
    ctx->pc = 0x30AF10u;
    SET_GPR_U32(ctx, 31, 0x30AF18u);
    ctx->pc = 0x30AF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF10u;
            // 0x30af14: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAB18u;
    if (runtime->hasFunction(0x1CAB18u)) {
        auto targetFn = runtime->lookupFunction(0x1CAB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AF18u; }
        if (ctx->pc != 0x30AF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAB18_0x1cab18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AF18u; }
        if (ctx->pc != 0x30AF18u) { return; }
    }
    ctx->pc = 0x30AF18u;
label_30af18:
    // 0x30af18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30af18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30af1c:
    // 0x30af1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30af1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30af20:
    // 0x30af20: 0x3e00008  jr          $ra
label_30af24:
    if (ctx->pc == 0x30AF24u) {
        ctx->pc = 0x30AF24u;
            // 0x30af24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30AF28u;
        goto label_30af28;
    }
    ctx->pc = 0x30AF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF20u;
            // 0x30af24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AF28u;
label_30af28:
    // 0x30af28: 0x0  nop
    ctx->pc = 0x30af28u;
    // NOP
label_30af2c:
    // 0x30af2c: 0x0  nop
    ctx->pc = 0x30af2cu;
    // NOP
}
