#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230730
// Address: 0x230730 - 0x230fd0
void sub_00230730_0x230730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230730_0x230730");
#endif

    switch (ctx->pc) {
        case 0x230730u: goto label_230730;
        case 0x230734u: goto label_230734;
        case 0x230738u: goto label_230738;
        case 0x23073cu: goto label_23073c;
        case 0x230740u: goto label_230740;
        case 0x230744u: goto label_230744;
        case 0x230748u: goto label_230748;
        case 0x23074cu: goto label_23074c;
        case 0x230750u: goto label_230750;
        case 0x230754u: goto label_230754;
        case 0x230758u: goto label_230758;
        case 0x23075cu: goto label_23075c;
        case 0x230760u: goto label_230760;
        case 0x230764u: goto label_230764;
        case 0x230768u: goto label_230768;
        case 0x23076cu: goto label_23076c;
        case 0x230770u: goto label_230770;
        case 0x230774u: goto label_230774;
        case 0x230778u: goto label_230778;
        case 0x23077cu: goto label_23077c;
        case 0x230780u: goto label_230780;
        case 0x230784u: goto label_230784;
        case 0x230788u: goto label_230788;
        case 0x23078cu: goto label_23078c;
        case 0x230790u: goto label_230790;
        case 0x230794u: goto label_230794;
        case 0x230798u: goto label_230798;
        case 0x23079cu: goto label_23079c;
        case 0x2307a0u: goto label_2307a0;
        case 0x2307a4u: goto label_2307a4;
        case 0x2307a8u: goto label_2307a8;
        case 0x2307acu: goto label_2307ac;
        case 0x2307b0u: goto label_2307b0;
        case 0x2307b4u: goto label_2307b4;
        case 0x2307b8u: goto label_2307b8;
        case 0x2307bcu: goto label_2307bc;
        case 0x2307c0u: goto label_2307c0;
        case 0x2307c4u: goto label_2307c4;
        case 0x2307c8u: goto label_2307c8;
        case 0x2307ccu: goto label_2307cc;
        case 0x2307d0u: goto label_2307d0;
        case 0x2307d4u: goto label_2307d4;
        case 0x2307d8u: goto label_2307d8;
        case 0x2307dcu: goto label_2307dc;
        case 0x2307e0u: goto label_2307e0;
        case 0x2307e4u: goto label_2307e4;
        case 0x2307e8u: goto label_2307e8;
        case 0x2307ecu: goto label_2307ec;
        case 0x2307f0u: goto label_2307f0;
        case 0x2307f4u: goto label_2307f4;
        case 0x2307f8u: goto label_2307f8;
        case 0x2307fcu: goto label_2307fc;
        case 0x230800u: goto label_230800;
        case 0x230804u: goto label_230804;
        case 0x230808u: goto label_230808;
        case 0x23080cu: goto label_23080c;
        case 0x230810u: goto label_230810;
        case 0x230814u: goto label_230814;
        case 0x230818u: goto label_230818;
        case 0x23081cu: goto label_23081c;
        case 0x230820u: goto label_230820;
        case 0x230824u: goto label_230824;
        case 0x230828u: goto label_230828;
        case 0x23082cu: goto label_23082c;
        case 0x230830u: goto label_230830;
        case 0x230834u: goto label_230834;
        case 0x230838u: goto label_230838;
        case 0x23083cu: goto label_23083c;
        case 0x230840u: goto label_230840;
        case 0x230844u: goto label_230844;
        case 0x230848u: goto label_230848;
        case 0x23084cu: goto label_23084c;
        case 0x230850u: goto label_230850;
        case 0x230854u: goto label_230854;
        case 0x230858u: goto label_230858;
        case 0x23085cu: goto label_23085c;
        case 0x230860u: goto label_230860;
        case 0x230864u: goto label_230864;
        case 0x230868u: goto label_230868;
        case 0x23086cu: goto label_23086c;
        case 0x230870u: goto label_230870;
        case 0x230874u: goto label_230874;
        case 0x230878u: goto label_230878;
        case 0x23087cu: goto label_23087c;
        case 0x230880u: goto label_230880;
        case 0x230884u: goto label_230884;
        case 0x230888u: goto label_230888;
        case 0x23088cu: goto label_23088c;
        case 0x230890u: goto label_230890;
        case 0x230894u: goto label_230894;
        case 0x230898u: goto label_230898;
        case 0x23089cu: goto label_23089c;
        case 0x2308a0u: goto label_2308a0;
        case 0x2308a4u: goto label_2308a4;
        case 0x2308a8u: goto label_2308a8;
        case 0x2308acu: goto label_2308ac;
        case 0x2308b0u: goto label_2308b0;
        case 0x2308b4u: goto label_2308b4;
        case 0x2308b8u: goto label_2308b8;
        case 0x2308bcu: goto label_2308bc;
        case 0x2308c0u: goto label_2308c0;
        case 0x2308c4u: goto label_2308c4;
        case 0x2308c8u: goto label_2308c8;
        case 0x2308ccu: goto label_2308cc;
        case 0x2308d0u: goto label_2308d0;
        case 0x2308d4u: goto label_2308d4;
        case 0x2308d8u: goto label_2308d8;
        case 0x2308dcu: goto label_2308dc;
        case 0x2308e0u: goto label_2308e0;
        case 0x2308e4u: goto label_2308e4;
        case 0x2308e8u: goto label_2308e8;
        case 0x2308ecu: goto label_2308ec;
        case 0x2308f0u: goto label_2308f0;
        case 0x2308f4u: goto label_2308f4;
        case 0x2308f8u: goto label_2308f8;
        case 0x2308fcu: goto label_2308fc;
        case 0x230900u: goto label_230900;
        case 0x230904u: goto label_230904;
        case 0x230908u: goto label_230908;
        case 0x23090cu: goto label_23090c;
        case 0x230910u: goto label_230910;
        case 0x230914u: goto label_230914;
        case 0x230918u: goto label_230918;
        case 0x23091cu: goto label_23091c;
        case 0x230920u: goto label_230920;
        case 0x230924u: goto label_230924;
        case 0x230928u: goto label_230928;
        case 0x23092cu: goto label_23092c;
        case 0x230930u: goto label_230930;
        case 0x230934u: goto label_230934;
        case 0x230938u: goto label_230938;
        case 0x23093cu: goto label_23093c;
        case 0x230940u: goto label_230940;
        case 0x230944u: goto label_230944;
        case 0x230948u: goto label_230948;
        case 0x23094cu: goto label_23094c;
        case 0x230950u: goto label_230950;
        case 0x230954u: goto label_230954;
        case 0x230958u: goto label_230958;
        case 0x23095cu: goto label_23095c;
        case 0x230960u: goto label_230960;
        case 0x230964u: goto label_230964;
        case 0x230968u: goto label_230968;
        case 0x23096cu: goto label_23096c;
        case 0x230970u: goto label_230970;
        case 0x230974u: goto label_230974;
        case 0x230978u: goto label_230978;
        case 0x23097cu: goto label_23097c;
        case 0x230980u: goto label_230980;
        case 0x230984u: goto label_230984;
        case 0x230988u: goto label_230988;
        case 0x23098cu: goto label_23098c;
        case 0x230990u: goto label_230990;
        case 0x230994u: goto label_230994;
        case 0x230998u: goto label_230998;
        case 0x23099cu: goto label_23099c;
        case 0x2309a0u: goto label_2309a0;
        case 0x2309a4u: goto label_2309a4;
        case 0x2309a8u: goto label_2309a8;
        case 0x2309acu: goto label_2309ac;
        case 0x2309b0u: goto label_2309b0;
        case 0x2309b4u: goto label_2309b4;
        case 0x2309b8u: goto label_2309b8;
        case 0x2309bcu: goto label_2309bc;
        case 0x2309c0u: goto label_2309c0;
        case 0x2309c4u: goto label_2309c4;
        case 0x2309c8u: goto label_2309c8;
        case 0x2309ccu: goto label_2309cc;
        case 0x2309d0u: goto label_2309d0;
        case 0x2309d4u: goto label_2309d4;
        case 0x2309d8u: goto label_2309d8;
        case 0x2309dcu: goto label_2309dc;
        case 0x2309e0u: goto label_2309e0;
        case 0x2309e4u: goto label_2309e4;
        case 0x2309e8u: goto label_2309e8;
        case 0x2309ecu: goto label_2309ec;
        case 0x2309f0u: goto label_2309f0;
        case 0x2309f4u: goto label_2309f4;
        case 0x2309f8u: goto label_2309f8;
        case 0x2309fcu: goto label_2309fc;
        case 0x230a00u: goto label_230a00;
        case 0x230a04u: goto label_230a04;
        case 0x230a08u: goto label_230a08;
        case 0x230a0cu: goto label_230a0c;
        case 0x230a10u: goto label_230a10;
        case 0x230a14u: goto label_230a14;
        case 0x230a18u: goto label_230a18;
        case 0x230a1cu: goto label_230a1c;
        case 0x230a20u: goto label_230a20;
        case 0x230a24u: goto label_230a24;
        case 0x230a28u: goto label_230a28;
        case 0x230a2cu: goto label_230a2c;
        case 0x230a30u: goto label_230a30;
        case 0x230a34u: goto label_230a34;
        case 0x230a38u: goto label_230a38;
        case 0x230a3cu: goto label_230a3c;
        case 0x230a40u: goto label_230a40;
        case 0x230a44u: goto label_230a44;
        case 0x230a48u: goto label_230a48;
        case 0x230a4cu: goto label_230a4c;
        case 0x230a50u: goto label_230a50;
        case 0x230a54u: goto label_230a54;
        case 0x230a58u: goto label_230a58;
        case 0x230a5cu: goto label_230a5c;
        case 0x230a60u: goto label_230a60;
        case 0x230a64u: goto label_230a64;
        case 0x230a68u: goto label_230a68;
        case 0x230a6cu: goto label_230a6c;
        case 0x230a70u: goto label_230a70;
        case 0x230a74u: goto label_230a74;
        case 0x230a78u: goto label_230a78;
        case 0x230a7cu: goto label_230a7c;
        case 0x230a80u: goto label_230a80;
        case 0x230a84u: goto label_230a84;
        case 0x230a88u: goto label_230a88;
        case 0x230a8cu: goto label_230a8c;
        case 0x230a90u: goto label_230a90;
        case 0x230a94u: goto label_230a94;
        case 0x230a98u: goto label_230a98;
        case 0x230a9cu: goto label_230a9c;
        case 0x230aa0u: goto label_230aa0;
        case 0x230aa4u: goto label_230aa4;
        case 0x230aa8u: goto label_230aa8;
        case 0x230aacu: goto label_230aac;
        case 0x230ab0u: goto label_230ab0;
        case 0x230ab4u: goto label_230ab4;
        case 0x230ab8u: goto label_230ab8;
        case 0x230abcu: goto label_230abc;
        case 0x230ac0u: goto label_230ac0;
        case 0x230ac4u: goto label_230ac4;
        case 0x230ac8u: goto label_230ac8;
        case 0x230accu: goto label_230acc;
        case 0x230ad0u: goto label_230ad0;
        case 0x230ad4u: goto label_230ad4;
        case 0x230ad8u: goto label_230ad8;
        case 0x230adcu: goto label_230adc;
        case 0x230ae0u: goto label_230ae0;
        case 0x230ae4u: goto label_230ae4;
        case 0x230ae8u: goto label_230ae8;
        case 0x230aecu: goto label_230aec;
        case 0x230af0u: goto label_230af0;
        case 0x230af4u: goto label_230af4;
        case 0x230af8u: goto label_230af8;
        case 0x230afcu: goto label_230afc;
        case 0x230b00u: goto label_230b00;
        case 0x230b04u: goto label_230b04;
        case 0x230b08u: goto label_230b08;
        case 0x230b0cu: goto label_230b0c;
        case 0x230b10u: goto label_230b10;
        case 0x230b14u: goto label_230b14;
        case 0x230b18u: goto label_230b18;
        case 0x230b1cu: goto label_230b1c;
        case 0x230b20u: goto label_230b20;
        case 0x230b24u: goto label_230b24;
        case 0x230b28u: goto label_230b28;
        case 0x230b2cu: goto label_230b2c;
        case 0x230b30u: goto label_230b30;
        case 0x230b34u: goto label_230b34;
        case 0x230b38u: goto label_230b38;
        case 0x230b3cu: goto label_230b3c;
        case 0x230b40u: goto label_230b40;
        case 0x230b44u: goto label_230b44;
        case 0x230b48u: goto label_230b48;
        case 0x230b4cu: goto label_230b4c;
        case 0x230b50u: goto label_230b50;
        case 0x230b54u: goto label_230b54;
        case 0x230b58u: goto label_230b58;
        case 0x230b5cu: goto label_230b5c;
        case 0x230b60u: goto label_230b60;
        case 0x230b64u: goto label_230b64;
        case 0x230b68u: goto label_230b68;
        case 0x230b6cu: goto label_230b6c;
        case 0x230b70u: goto label_230b70;
        case 0x230b74u: goto label_230b74;
        case 0x230b78u: goto label_230b78;
        case 0x230b7cu: goto label_230b7c;
        case 0x230b80u: goto label_230b80;
        case 0x230b84u: goto label_230b84;
        case 0x230b88u: goto label_230b88;
        case 0x230b8cu: goto label_230b8c;
        case 0x230b90u: goto label_230b90;
        case 0x230b94u: goto label_230b94;
        case 0x230b98u: goto label_230b98;
        case 0x230b9cu: goto label_230b9c;
        case 0x230ba0u: goto label_230ba0;
        case 0x230ba4u: goto label_230ba4;
        case 0x230ba8u: goto label_230ba8;
        case 0x230bacu: goto label_230bac;
        case 0x230bb0u: goto label_230bb0;
        case 0x230bb4u: goto label_230bb4;
        case 0x230bb8u: goto label_230bb8;
        case 0x230bbcu: goto label_230bbc;
        case 0x230bc0u: goto label_230bc0;
        case 0x230bc4u: goto label_230bc4;
        case 0x230bc8u: goto label_230bc8;
        case 0x230bccu: goto label_230bcc;
        case 0x230bd0u: goto label_230bd0;
        case 0x230bd4u: goto label_230bd4;
        case 0x230bd8u: goto label_230bd8;
        case 0x230bdcu: goto label_230bdc;
        case 0x230be0u: goto label_230be0;
        case 0x230be4u: goto label_230be4;
        case 0x230be8u: goto label_230be8;
        case 0x230becu: goto label_230bec;
        case 0x230bf0u: goto label_230bf0;
        case 0x230bf4u: goto label_230bf4;
        case 0x230bf8u: goto label_230bf8;
        case 0x230bfcu: goto label_230bfc;
        case 0x230c00u: goto label_230c00;
        case 0x230c04u: goto label_230c04;
        case 0x230c08u: goto label_230c08;
        case 0x230c0cu: goto label_230c0c;
        case 0x230c10u: goto label_230c10;
        case 0x230c14u: goto label_230c14;
        case 0x230c18u: goto label_230c18;
        case 0x230c1cu: goto label_230c1c;
        case 0x230c20u: goto label_230c20;
        case 0x230c24u: goto label_230c24;
        case 0x230c28u: goto label_230c28;
        case 0x230c2cu: goto label_230c2c;
        case 0x230c30u: goto label_230c30;
        case 0x230c34u: goto label_230c34;
        case 0x230c38u: goto label_230c38;
        case 0x230c3cu: goto label_230c3c;
        case 0x230c40u: goto label_230c40;
        case 0x230c44u: goto label_230c44;
        case 0x230c48u: goto label_230c48;
        case 0x230c4cu: goto label_230c4c;
        case 0x230c50u: goto label_230c50;
        case 0x230c54u: goto label_230c54;
        case 0x230c58u: goto label_230c58;
        case 0x230c5cu: goto label_230c5c;
        case 0x230c60u: goto label_230c60;
        case 0x230c64u: goto label_230c64;
        case 0x230c68u: goto label_230c68;
        case 0x230c6cu: goto label_230c6c;
        case 0x230c70u: goto label_230c70;
        case 0x230c74u: goto label_230c74;
        case 0x230c78u: goto label_230c78;
        case 0x230c7cu: goto label_230c7c;
        case 0x230c80u: goto label_230c80;
        case 0x230c84u: goto label_230c84;
        case 0x230c88u: goto label_230c88;
        case 0x230c8cu: goto label_230c8c;
        case 0x230c90u: goto label_230c90;
        case 0x230c94u: goto label_230c94;
        case 0x230c98u: goto label_230c98;
        case 0x230c9cu: goto label_230c9c;
        case 0x230ca0u: goto label_230ca0;
        case 0x230ca4u: goto label_230ca4;
        case 0x230ca8u: goto label_230ca8;
        case 0x230cacu: goto label_230cac;
        case 0x230cb0u: goto label_230cb0;
        case 0x230cb4u: goto label_230cb4;
        case 0x230cb8u: goto label_230cb8;
        case 0x230cbcu: goto label_230cbc;
        case 0x230cc0u: goto label_230cc0;
        case 0x230cc4u: goto label_230cc4;
        case 0x230cc8u: goto label_230cc8;
        case 0x230cccu: goto label_230ccc;
        case 0x230cd0u: goto label_230cd0;
        case 0x230cd4u: goto label_230cd4;
        case 0x230cd8u: goto label_230cd8;
        case 0x230cdcu: goto label_230cdc;
        case 0x230ce0u: goto label_230ce0;
        case 0x230ce4u: goto label_230ce4;
        case 0x230ce8u: goto label_230ce8;
        case 0x230cecu: goto label_230cec;
        case 0x230cf0u: goto label_230cf0;
        case 0x230cf4u: goto label_230cf4;
        case 0x230cf8u: goto label_230cf8;
        case 0x230cfcu: goto label_230cfc;
        case 0x230d00u: goto label_230d00;
        case 0x230d04u: goto label_230d04;
        case 0x230d08u: goto label_230d08;
        case 0x230d0cu: goto label_230d0c;
        case 0x230d10u: goto label_230d10;
        case 0x230d14u: goto label_230d14;
        case 0x230d18u: goto label_230d18;
        case 0x230d1cu: goto label_230d1c;
        case 0x230d20u: goto label_230d20;
        case 0x230d24u: goto label_230d24;
        case 0x230d28u: goto label_230d28;
        case 0x230d2cu: goto label_230d2c;
        case 0x230d30u: goto label_230d30;
        case 0x230d34u: goto label_230d34;
        case 0x230d38u: goto label_230d38;
        case 0x230d3cu: goto label_230d3c;
        case 0x230d40u: goto label_230d40;
        case 0x230d44u: goto label_230d44;
        case 0x230d48u: goto label_230d48;
        case 0x230d4cu: goto label_230d4c;
        case 0x230d50u: goto label_230d50;
        case 0x230d54u: goto label_230d54;
        case 0x230d58u: goto label_230d58;
        case 0x230d5cu: goto label_230d5c;
        case 0x230d60u: goto label_230d60;
        case 0x230d64u: goto label_230d64;
        case 0x230d68u: goto label_230d68;
        case 0x230d6cu: goto label_230d6c;
        case 0x230d70u: goto label_230d70;
        case 0x230d74u: goto label_230d74;
        case 0x230d78u: goto label_230d78;
        case 0x230d7cu: goto label_230d7c;
        case 0x230d80u: goto label_230d80;
        case 0x230d84u: goto label_230d84;
        case 0x230d88u: goto label_230d88;
        case 0x230d8cu: goto label_230d8c;
        case 0x230d90u: goto label_230d90;
        case 0x230d94u: goto label_230d94;
        case 0x230d98u: goto label_230d98;
        case 0x230d9cu: goto label_230d9c;
        case 0x230da0u: goto label_230da0;
        case 0x230da4u: goto label_230da4;
        case 0x230da8u: goto label_230da8;
        case 0x230dacu: goto label_230dac;
        case 0x230db0u: goto label_230db0;
        case 0x230db4u: goto label_230db4;
        case 0x230db8u: goto label_230db8;
        case 0x230dbcu: goto label_230dbc;
        case 0x230dc0u: goto label_230dc0;
        case 0x230dc4u: goto label_230dc4;
        case 0x230dc8u: goto label_230dc8;
        case 0x230dccu: goto label_230dcc;
        case 0x230dd0u: goto label_230dd0;
        case 0x230dd4u: goto label_230dd4;
        case 0x230dd8u: goto label_230dd8;
        case 0x230ddcu: goto label_230ddc;
        case 0x230de0u: goto label_230de0;
        case 0x230de4u: goto label_230de4;
        case 0x230de8u: goto label_230de8;
        case 0x230decu: goto label_230dec;
        case 0x230df0u: goto label_230df0;
        case 0x230df4u: goto label_230df4;
        case 0x230df8u: goto label_230df8;
        case 0x230dfcu: goto label_230dfc;
        case 0x230e00u: goto label_230e00;
        case 0x230e04u: goto label_230e04;
        case 0x230e08u: goto label_230e08;
        case 0x230e0cu: goto label_230e0c;
        case 0x230e10u: goto label_230e10;
        case 0x230e14u: goto label_230e14;
        case 0x230e18u: goto label_230e18;
        case 0x230e1cu: goto label_230e1c;
        case 0x230e20u: goto label_230e20;
        case 0x230e24u: goto label_230e24;
        case 0x230e28u: goto label_230e28;
        case 0x230e2cu: goto label_230e2c;
        case 0x230e30u: goto label_230e30;
        case 0x230e34u: goto label_230e34;
        case 0x230e38u: goto label_230e38;
        case 0x230e3cu: goto label_230e3c;
        case 0x230e40u: goto label_230e40;
        case 0x230e44u: goto label_230e44;
        case 0x230e48u: goto label_230e48;
        case 0x230e4cu: goto label_230e4c;
        case 0x230e50u: goto label_230e50;
        case 0x230e54u: goto label_230e54;
        case 0x230e58u: goto label_230e58;
        case 0x230e5cu: goto label_230e5c;
        case 0x230e60u: goto label_230e60;
        case 0x230e64u: goto label_230e64;
        case 0x230e68u: goto label_230e68;
        case 0x230e6cu: goto label_230e6c;
        case 0x230e70u: goto label_230e70;
        case 0x230e74u: goto label_230e74;
        case 0x230e78u: goto label_230e78;
        case 0x230e7cu: goto label_230e7c;
        case 0x230e80u: goto label_230e80;
        case 0x230e84u: goto label_230e84;
        case 0x230e88u: goto label_230e88;
        case 0x230e8cu: goto label_230e8c;
        case 0x230e90u: goto label_230e90;
        case 0x230e94u: goto label_230e94;
        case 0x230e98u: goto label_230e98;
        case 0x230e9cu: goto label_230e9c;
        case 0x230ea0u: goto label_230ea0;
        case 0x230ea4u: goto label_230ea4;
        case 0x230ea8u: goto label_230ea8;
        case 0x230eacu: goto label_230eac;
        case 0x230eb0u: goto label_230eb0;
        case 0x230eb4u: goto label_230eb4;
        case 0x230eb8u: goto label_230eb8;
        case 0x230ebcu: goto label_230ebc;
        case 0x230ec0u: goto label_230ec0;
        case 0x230ec4u: goto label_230ec4;
        case 0x230ec8u: goto label_230ec8;
        case 0x230eccu: goto label_230ecc;
        case 0x230ed0u: goto label_230ed0;
        case 0x230ed4u: goto label_230ed4;
        case 0x230ed8u: goto label_230ed8;
        case 0x230edcu: goto label_230edc;
        case 0x230ee0u: goto label_230ee0;
        case 0x230ee4u: goto label_230ee4;
        case 0x230ee8u: goto label_230ee8;
        case 0x230eecu: goto label_230eec;
        case 0x230ef0u: goto label_230ef0;
        case 0x230ef4u: goto label_230ef4;
        case 0x230ef8u: goto label_230ef8;
        case 0x230efcu: goto label_230efc;
        case 0x230f00u: goto label_230f00;
        case 0x230f04u: goto label_230f04;
        case 0x230f08u: goto label_230f08;
        case 0x230f0cu: goto label_230f0c;
        case 0x230f10u: goto label_230f10;
        case 0x230f14u: goto label_230f14;
        case 0x230f18u: goto label_230f18;
        case 0x230f1cu: goto label_230f1c;
        case 0x230f20u: goto label_230f20;
        case 0x230f24u: goto label_230f24;
        case 0x230f28u: goto label_230f28;
        case 0x230f2cu: goto label_230f2c;
        case 0x230f30u: goto label_230f30;
        case 0x230f34u: goto label_230f34;
        case 0x230f38u: goto label_230f38;
        case 0x230f3cu: goto label_230f3c;
        case 0x230f40u: goto label_230f40;
        case 0x230f44u: goto label_230f44;
        case 0x230f48u: goto label_230f48;
        case 0x230f4cu: goto label_230f4c;
        case 0x230f50u: goto label_230f50;
        case 0x230f54u: goto label_230f54;
        case 0x230f58u: goto label_230f58;
        case 0x230f5cu: goto label_230f5c;
        case 0x230f60u: goto label_230f60;
        case 0x230f64u: goto label_230f64;
        case 0x230f68u: goto label_230f68;
        case 0x230f6cu: goto label_230f6c;
        case 0x230f70u: goto label_230f70;
        case 0x230f74u: goto label_230f74;
        case 0x230f78u: goto label_230f78;
        case 0x230f7cu: goto label_230f7c;
        case 0x230f80u: goto label_230f80;
        case 0x230f84u: goto label_230f84;
        case 0x230f88u: goto label_230f88;
        case 0x230f8cu: goto label_230f8c;
        case 0x230f90u: goto label_230f90;
        case 0x230f94u: goto label_230f94;
        case 0x230f98u: goto label_230f98;
        case 0x230f9cu: goto label_230f9c;
        case 0x230fa0u: goto label_230fa0;
        case 0x230fa4u: goto label_230fa4;
        case 0x230fa8u: goto label_230fa8;
        case 0x230facu: goto label_230fac;
        case 0x230fb0u: goto label_230fb0;
        case 0x230fb4u: goto label_230fb4;
        case 0x230fb8u: goto label_230fb8;
        case 0x230fbcu: goto label_230fbc;
        case 0x230fc0u: goto label_230fc0;
        case 0x230fc4u: goto label_230fc4;
        case 0x230fc8u: goto label_230fc8;
        case 0x230fccu: goto label_230fcc;
        default: break;
    }

    ctx->pc = 0x230730u;

label_230730:
    // 0x230730: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x230730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_230734:
    // 0x230734: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x230734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_230738:
    // 0x230738: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x230738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_23073c:
    // 0x23073c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x23073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_230740:
    // 0x230740: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x230740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_230744:
    // 0x230744: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x230744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_230748:
    // 0x230748: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x230748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_23074c:
    // 0x23074c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x23074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_230750:
    // 0x230750: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x230750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_230754:
    // 0x230754: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x230754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_230758:
    // 0x230758: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x230758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23075c:
    // 0x23075c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_230760:
    // 0x230760: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x230760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_230764:
    // 0x230764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x230764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_230768:
    // 0x230768: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x230768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_23076c:
    // 0x23076c: 0x12400209  beqz        $s2, . + 4 + (0x209 << 2)
label_230770:
    if (ctx->pc == 0x230770u) {
        ctx->pc = 0x230770u;
            // 0x230770: 0xafa700cc  sw          $a3, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
        ctx->pc = 0x230774u;
        goto label_230774;
    }
    ctx->pc = 0x23076Cu;
    {
        const bool branch_taken_0x23076c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x230770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23076Cu;
            // 0x230770: 0xafa700cc  sw          $a3, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23076c) {
            ctx->pc = 0x230F94u;
            goto label_230f94;
        }
    }
    ctx->pc = 0x230774u;
label_230774:
    // 0x230774: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x230774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_230778:
    // 0x230778: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23077c:
    if (ctx->pc == 0x23077Cu) {
        ctx->pc = 0x230780u;
        goto label_230780;
    }
    ctx->pc = 0x230778u;
    {
        const bool branch_taken_0x230778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230778) {
            ctx->pc = 0x2307A8u;
            goto label_2307a8;
        }
    }
    ctx->pc = 0x230780u;
label_230780:
    // 0x230780: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x230780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_230784:
    // 0x230784: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x230784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_230788:
    // 0x230788: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x230788u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_23078c:
    // 0x23078c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x23078cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_230790:
    // 0x230790: 0xafb30104  sw          $s3, 0x104($sp)
    ctx->pc = 0x230790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 19));
label_230794:
    // 0x230794: 0xa3a2010a  sb          $v0, 0x10A($sp)
    ctx->pc = 0x230794u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 266), (uint8_t)GPR_U32(ctx, 2));
label_230798:
    // 0x230798: 0xc08d1cc  jal         func_234730
label_23079c:
    if (ctx->pc == 0x23079Cu) {
        ctx->pc = 0x23079Cu;
            // 0x23079c: 0xa7b20108  sh          $s2, 0x108($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 18));
        ctx->pc = 0x2307A0u;
        goto label_2307a0;
    }
    ctx->pc = 0x230798u;
    SET_GPR_U32(ctx, 31, 0x2307A0u);
    ctx->pc = 0x23079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230798u;
            // 0x23079c: 0xa7b20108  sh          $s2, 0x108($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307A0u; }
        if (ctx->pc != 0x2307A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307A0u; }
        if (ctx->pc != 0x2307A0u) { return; }
    }
    ctx->pc = 0x2307A0u;
label_2307a0:
    // 0x2307a0: 0x100001fd  b           . + 4 + (0x1FD << 2)
label_2307a4:
    if (ctx->pc == 0x2307A4u) {
        ctx->pc = 0x2307A4u;
            // 0x2307a4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2307A8u;
        goto label_2307a8;
    }
    ctx->pc = 0x2307A0u;
    {
        const bool branch_taken_0x2307a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2307A0u;
            // 0x2307a4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307a0) {
            ctx->pc = 0x230F98u;
            goto label_230f98;
        }
    }
    ctx->pc = 0x2307A8u;
label_2307a8:
    // 0x2307a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2307a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2307ac:
    // 0x2307ac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2307acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2307b0:
    // 0x2307b0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2307b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_2307b4:
    // 0x2307b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2307b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2307b8:
    // 0x2307b8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2307b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2307bc:
    // 0x2307bc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2307bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2307c0:
    // 0x2307c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2307c4:
    if (ctx->pc == 0x2307C4u) {
        ctx->pc = 0x2307C4u;
            // 0x2307c4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x2307C8u;
        goto label_2307c8;
    }
    ctx->pc = 0x2307C0u;
    {
        const bool branch_taken_0x2307c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2307C0u;
            // 0x2307c4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307c0) {
            ctx->pc = 0x2307FCu;
            goto label_2307fc;
        }
    }
    ctx->pc = 0x2307C8u;
label_2307c8:
    // 0x2307c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2307c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2307cc:
    // 0x2307cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2307ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2307d0:
    // 0x2307d0: 0x2463c900  addiu       $v1, $v1, -0x3700
    ctx->pc = 0x2307d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953216));
label_2307d4:
    // 0x2307d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2307d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2307d8:
    // 0x2307d8: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x2307d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
label_2307dc:
    // 0x2307dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2307dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2307e0:
    // 0x2307e0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2307e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2307e4:
    // 0x2307e4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2307e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2307e8:
    // 0x2307e8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2307e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2307ec:
    // 0x2307ec: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2307ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2307f0:
    // 0x2307f0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2307f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2307f4:
    // 0x2307f4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2307f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2307f8:
    // 0x2307f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2307f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2307fc:
    // 0x2307fc: 0x8e850084  lw          $a1, 0x84($s4)
    ctx->pc = 0x2307fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_230800:
    // 0x230800: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x230800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_230804:
    // 0x230804: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_230808:
    // 0x230808: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x230808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23080c:
    // 0x23080c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23080cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230810:
    // 0x230810: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x230810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_230814:
    // 0x230814: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x230814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_230818:
    // 0x230818: 0xae870084  sw          $a3, 0x84($s4)
    ctx->pc = 0x230818u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 7));
label_23081c:
    // 0x23081c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x23081cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_230820:
    // 0x230820: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x230820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_230824:
    // 0x230824: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x230824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
label_230828:
    // 0x230828: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x230828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_23082c:
    // 0x23082c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x23082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_230830:
    // 0x230830: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x230830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_230834:
    // 0x230834: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x230834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_230838:
    // 0x230838: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x230838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23083c:
    // 0x23083c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23083cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_230840:
    // 0x230840: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_230844:
    if (ctx->pc == 0x230844u) {
        ctx->pc = 0x230844u;
            // 0x230844: 0x27b100f0  addiu       $s1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x230848u;
        goto label_230848;
    }
    ctx->pc = 0x230840u;
    {
        const bool branch_taken_0x230840 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x230844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230840u;
            // 0x230844: 0x27b100f0  addiu       $s1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230840) {
            ctx->pc = 0x230850u;
            goto label_230850;
        }
    }
    ctx->pc = 0x230848u;
label_230848:
    // 0x230848: 0x10000005  b           . + 4 + (0x5 << 2)
label_23084c:
    if (ctx->pc == 0x23084Cu) {
        ctx->pc = 0x23084Cu;
            // 0x23084c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x230850u;
        goto label_230850;
    }
    ctx->pc = 0x230848u;
    {
        const bool branch_taken_0x230848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230848u;
            // 0x23084c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230848) {
            ctx->pc = 0x230860u;
            goto label_230860;
        }
    }
    ctx->pc = 0x230850u;
label_230850:
    // 0x230850: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230854:
    // 0x230854: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x230854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_230858:
    // 0x230858: 0x320f809  jalr        $t9
label_23085c:
    if (ctx->pc == 0x23085Cu) {
        ctx->pc = 0x230860u;
        goto label_230860;
    }
    ctx->pc = 0x230858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230860u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x230860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230860u; }
            if (ctx->pc != 0x230860u) { return; }
        }
        }
    }
    ctx->pc = 0x230860u;
label_230860:
    // 0x230860: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x230860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_230864:
    // 0x230864: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x230864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_230868:
    // 0x230868: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x230868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_23086c:
    // 0x23086c: 0x2428025  or          $s0, $s2, $v0
    ctx->pc = 0x23086cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_230870:
    // 0x230870: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x230870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_230874:
    // 0x230874: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230878:
    // 0x230878: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x230878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_23087c:
    // 0x23087c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_230880:
    // 0x230880: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x230880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_230884:
    // 0x230884: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x230884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_230888:
    // 0x230888: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x230888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_23088c:
    // 0x23088c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x23088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_230890:
    // 0x230890: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x230890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
label_230894:
    // 0x230894: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x230894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_230898:
    // 0x230898: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x230898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23089c:
    // 0x23089c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2308a0:
    // 0x2308a0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2308a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2308a4:
    // 0x2308a4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2308a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2308a8:
    // 0x2308a8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2308a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2308ac:
    // 0x2308ac: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2308b0:
    if (ctx->pc == 0x2308B0u) {
        ctx->pc = 0x2308B0u;
            // 0x2308b0: 0x27b500e0  addiu       $s5, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2308B4u;
        goto label_2308b4;
    }
    ctx->pc = 0x2308ACu;
    {
        const bool branch_taken_0x2308ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2308B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308ACu;
            // 0x2308b0: 0x27b500e0  addiu       $s5, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308ac) {
            ctx->pc = 0x2308BCu;
            goto label_2308bc;
        }
    }
    ctx->pc = 0x2308B4u;
label_2308b4:
    // 0x2308b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2308b8:
    if (ctx->pc == 0x2308B8u) {
        ctx->pc = 0x2308B8u;
            // 0x2308b8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2308BCu;
        goto label_2308bc;
    }
    ctx->pc = 0x2308B4u;
    {
        const bool branch_taken_0x2308b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308B4u;
            // 0x2308b8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308b4) {
            ctx->pc = 0x2308CCu;
            goto label_2308cc;
        }
    }
    ctx->pc = 0x2308BCu;
label_2308bc:
    // 0x2308bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2308c0:
    // 0x2308c0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2308c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2308c4:
    // 0x2308c4: 0x320f809  jalr        $t9
label_2308c8:
    if (ctx->pc == 0x2308C8u) {
        ctx->pc = 0x2308CCu;
        goto label_2308cc;
    }
    ctx->pc = 0x2308C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2308CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2308CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2308CCu; }
            if (ctx->pc != 0x2308CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2308CCu;
label_2308cc:
    // 0x2308cc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2308ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2308d0:
    // 0x2308d0: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x2308d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
label_2308d4:
    // 0x2308d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2308d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2308d8:
    // 0x2308d8: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x2308d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_2308dc:
    // 0x2308dc: 0x828200c4  lb          $v0, 0xC4($s4)
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 196)));
label_2308e0:
    // 0x2308e0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2308e4:
    if (ctx->pc == 0x2308E4u) {
        ctx->pc = 0x2308E4u;
            // 0x2308e4: 0xa3a000b0  sb          $zero, 0xB0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2308E8u;
        goto label_2308e8;
    }
    ctx->pc = 0x2308E0u;
    {
        const bool branch_taken_0x2308e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308E0u;
            // 0x2308e4: 0xa3a000b0  sb          $zero, 0xB0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308e0) {
            ctx->pc = 0x2309ACu;
            goto label_2309ac;
        }
    }
    ctx->pc = 0x2308E8u;
label_2308e8:
    // 0x2308e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2308e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2308ec:
    // 0x2308ec: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x2308ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2308f0:
    // 0x2308f0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2308f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2308f4:
    // 0x2308f4: 0xc0a7a88  jal         func_29EA20
label_2308f8:
    if (ctx->pc == 0x2308F8u) {
        ctx->pc = 0x2308F8u;
            // 0x2308f8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2308FCu;
        goto label_2308fc;
    }
    ctx->pc = 0x2308F4u;
    SET_GPR_U32(ctx, 31, 0x2308FCu);
    ctx->pc = 0x2308F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2308F4u;
            // 0x2308f8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308FCu; }
        if (ctx->pc != 0x2308FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308FCu; }
        if (ctx->pc != 0x2308FCu) { return; }
    }
    ctx->pc = 0x2308FCu;
label_2308fc:
    // 0x2308fc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x2308fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_230900:
    // 0x230900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230904:
    // 0x230904: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_230908:
    if (ctx->pc == 0x230908u) {
        ctx->pc = 0x230908u;
            // 0x230908: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23090Cu;
        goto label_23090c;
    }
    ctx->pc = 0x230904u;
    {
        const bool branch_taken_0x230904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230904u;
            // 0x230908: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230904) {
            ctx->pc = 0x230918u;
            goto label_230918;
        }
    }
    ctx->pc = 0x23090Cu;
label_23090c:
    // 0x23090c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230910:
    // 0x230910: 0xc08b5a8  jal         func_22D6A0
label_230914:
    if (ctx->pc == 0x230914u) {
        ctx->pc = 0x230914u;
            // 0x230914: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230918u;
        goto label_230918;
    }
    ctx->pc = 0x230910u;
    SET_GPR_U32(ctx, 31, 0x230918u);
    ctx->pc = 0x230914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230910u;
            // 0x230914: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6A0u;
    if (runtime->hasFunction(0x22D6A0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230918u; }
        if (ctx->pc != 0x230918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6A0_0x22d6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230918u; }
        if (ctx->pc != 0x230918u) { return; }
    }
    ctx->pc = 0x230918u;
label_230918:
    // 0x230918: 0x92020027  lbu         $v0, 0x27($s0)
    ctx->pc = 0x230918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
label_23091c:
    // 0x23091c: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x23091cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_230920:
    // 0x230920: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x230920u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_230924:
    // 0x230924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230928:
    // 0x230928: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x230928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_23092c:
    // 0x23092c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23092cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_230930:
    // 0x230930: 0xa2020027  sb          $v0, 0x27($s0)
    ctx->pc = 0x230930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 2));
label_230934:
    // 0x230934: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x230934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_230938:
    // 0x230938: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_23093c:
    if (ctx->pc == 0x23093Cu) {
        ctx->pc = 0x23093Cu;
            // 0x23093c: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230940u;
        goto label_230940;
    }
    ctx->pc = 0x230938u;
    {
        const bool branch_taken_0x230938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230938u;
            // 0x23093c: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230938) {
            ctx->pc = 0x230974u;
            goto label_230974;
        }
    }
    ctx->pc = 0x230940u;
label_230940:
    // 0x230940: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x230940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_230944:
    // 0x230944: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x230944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_230948:
    // 0x230948: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x230948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23094c:
    // 0x23094c: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x23094cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
label_230950:
    // 0x230950: 0x92040028  lbu         $a0, 0x28($s0)
    ctx->pc = 0x230950u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_230954:
    // 0x230954: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x230954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_230958:
    // 0x230958: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x230958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23095c:
    // 0x23095c: 0xa2040028  sb          $a0, 0x28($s0)
    ctx->pc = 0x23095cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 4));
label_230960:
    // 0x230960: 0x92040028  lbu         $a0, 0x28($s0)
    ctx->pc = 0x230960u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_230964:
    // 0x230964: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x230964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_230968:
    // 0x230968: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23096c:
    // 0x23096c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_230970:
    if (ctx->pc == 0x230970u) {
        ctx->pc = 0x230970u;
            // 0x230970: 0xa2020028  sb          $v0, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x230974u;
        goto label_230974;
    }
    ctx->pc = 0x23096Cu;
    {
        const bool branch_taken_0x23096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23096Cu;
            // 0x230970: 0xa2020028  sb          $v0, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23096c) {
            ctx->pc = 0x2309ECu;
            goto label_2309ec;
        }
    }
    ctx->pc = 0x230974u;
label_230974:
    // 0x230974: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x230974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_230978:
    // 0x230978: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x230978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_23097c:
    // 0x23097c: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x23097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_230980:
    // 0x230980: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x230980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_230984:
    // 0x230984: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x230984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
label_230988:
    // 0x230988: 0x92040028  lbu         $a0, 0x28($s0)
    ctx->pc = 0x230988u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_23098c:
    // 0x23098c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x23098cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_230990:
    // 0x230990: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x230990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_230994:
    // 0x230994: 0xa2040028  sb          $a0, 0x28($s0)
    ctx->pc = 0x230994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 4));
label_230998:
    // 0x230998: 0x92040028  lbu         $a0, 0x28($s0)
    ctx->pc = 0x230998u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_23099c:
    // 0x23099c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2309a0:
    // 0x2309a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2309a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2309a4:
    // 0x2309a4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2309a8:
    if (ctx->pc == 0x2309A8u) {
        ctx->pc = 0x2309A8u;
            // 0x2309a8: 0xa2020028  sb          $v0, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2309ACu;
        goto label_2309ac;
    }
    ctx->pc = 0x2309A4u;
    {
        const bool branch_taken_0x2309a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309A4u;
            // 0x2309a8: 0xa2020028  sb          $v0, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309a4) {
            ctx->pc = 0x2309ECu;
            goto label_2309ec;
        }
    }
    ctx->pc = 0x2309ACu;
label_2309ac:
    // 0x2309ac: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x2309acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_2309b0:
    // 0x2309b0: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2309b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2309b4:
    // 0x2309b4: 0x8ee20054  lw          $v0, 0x54($s7)
    ctx->pc = 0x2309b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_2309b8:
    // 0x2309b8: 0x8ee30050  lw          $v1, 0x50($s7)
    ctx->pc = 0x2309b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
label_2309bc:
    // 0x2309bc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2309bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2309c0:
    // 0x2309c0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2309c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2309c4:
    // 0x2309c4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2309c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2309c8:
    // 0x2309c8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2309c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2309cc:
    // 0x2309cc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_2309d0:
    if (ctx->pc == 0x2309D0u) {
        ctx->pc = 0x2309D0u;
            // 0x2309d0: 0x26e4004c  addiu       $a0, $s7, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 76));
        ctx->pc = 0x2309D4u;
        goto label_2309d4;
    }
    ctx->pc = 0x2309CCu;
    {
        const bool branch_taken_0x2309cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309CCu;
            // 0x2309d0: 0x26e4004c  addiu       $a0, $s7, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309cc) {
            ctx->pc = 0x2309ECu;
            goto label_2309ec;
        }
    }
    ctx->pc = 0x2309D4u;
label_2309d4:
    // 0x2309d4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2309d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2309d8:
    // 0x2309d8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2309d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2309dc:
    // 0x2309dc: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_2309e0:
    if (ctx->pc == 0x2309E0u) {
        ctx->pc = 0x2309E0u;
            // 0x2309e0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2309E4u;
        goto label_2309e4;
    }
    ctx->pc = 0x2309DCu;
    {
        const bool branch_taken_0x2309dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2309dc) {
            ctx->pc = 0x2309E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2309DCu;
            // 0x2309e0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2309E4u;
            goto label_2309e4;
        }
    }
    ctx->pc = 0x2309E4u;
label_2309e4:
    // 0x2309e4: 0xc0a725c  jal         func_29C970
label_2309e8:
    if (ctx->pc == 0x2309E8u) {
        ctx->pc = 0x2309E8u;
            // 0x2309e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2309ECu;
        goto label_2309ec;
    }
    ctx->pc = 0x2309E4u;
    SET_GPR_U32(ctx, 31, 0x2309ECu);
    ctx->pc = 0x2309E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2309E4u;
            // 0x2309e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309ECu; }
        if (ctx->pc != 0x2309ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309ECu; }
        if (ctx->pc != 0x2309ECu) { return; }
    }
    ctx->pc = 0x2309ECu;
label_2309ec:
    // 0x2309ec: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x2309ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_2309f0:
    // 0x2309f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2309f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2309f4:
    // 0x2309f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2309f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2309f8:
    // 0x2309f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2309f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2309fc:
    // 0x2309fc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2309fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230a00:
    // 0x230a00: 0x1a400065  blez        $s2, . + 4 + (0x65 << 2)
label_230a04:
    if (ctx->pc == 0x230A04u) {
        ctx->pc = 0x230A04u;
            // 0x230a04: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x230A08u;
        goto label_230a08;
    }
    ctx->pc = 0x230A00u;
    {
        const bool branch_taken_0x230a00 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x230A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A00u;
            // 0x230a04: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a00) {
            ctx->pc = 0x230B98u;
            goto label_230b98;
        }
    }
    ctx->pc = 0x230A08u;
label_230a08:
    // 0x230a08: 0x1a400063  blez        $s2, . + 4 + (0x63 << 2)
label_230a0c:
    if (ctx->pc == 0x230A0Cu) {
        ctx->pc = 0x230A0Cu;
            // 0x230a0c: 0x269e02ed  addiu       $fp, $s4, 0x2ED (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 749));
        ctx->pc = 0x230A10u;
        goto label_230a10;
    }
    ctx->pc = 0x230A08u;
    {
        const bool branch_taken_0x230a08 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x230A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A08u;
            // 0x230a0c: 0x269e02ed  addiu       $fp, $s4, 0x2ED (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 749));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a08) {
            ctx->pc = 0x230B98u;
            goto label_230b98;
        }
    }
    ctx->pc = 0x230A10u;
label_230a10:
    // 0x230a10: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x230a10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_230a14:
    // 0x230a14: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x230a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_230a18:
    // 0x230a18: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x230a18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_230a1c:
    // 0x230a1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_230a20:
    // 0x230a20: 0xae8200e8  sw          $v0, 0xE8($s4)
    ctx->pc = 0x230a20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 232), GPR_U32(ctx, 2));
label_230a24:
    // 0x230a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230a28:
    // 0x230a28: 0xc08d40c  jal         func_235030
label_230a2c:
    if (ctx->pc == 0x230A2Cu) {
        ctx->pc = 0x230A2Cu;
            // 0x230a2c: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->pc = 0x230A30u;
        goto label_230a30;
    }
    ctx->pc = 0x230A28u;
    SET_GPR_U32(ctx, 31, 0x230A30u);
    ctx->pc = 0x230A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230A28u;
            // 0x230a2c: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230A30u; }
        if (ctx->pc != 0x230A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230A30u; }
        if (ctx->pc != 0x230A30u) { return; }
    }
    ctx->pc = 0x230A30u;
label_230a30:
    // 0x230a30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x230a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_230a34:
    // 0x230a34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_230a38:
    if (ctx->pc == 0x230A38u) {
        ctx->pc = 0x230A3Cu;
        goto label_230a3c;
    }
    ctx->pc = 0x230A34u;
    {
        const bool branch_taken_0x230a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230a34) {
            ctx->pc = 0x230A50u;
            goto label_230a50;
        }
    }
    ctx->pc = 0x230A3Cu;
label_230a3c:
    // 0x230a3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x230a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230a40:
    // 0x230a40: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x230a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_230a44:
    // 0x230a44: 0x320f809  jalr        $t9
label_230a48:
    if (ctx->pc == 0x230A48u) {
        ctx->pc = 0x230A48u;
            // 0x230a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230A4Cu;
        goto label_230a4c;
    }
    ctx->pc = 0x230A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230A4Cu);
        ctx->pc = 0x230A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A44u;
            // 0x230a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230A4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230A4Cu; }
            if (ctx->pc != 0x230A4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x230A4Cu;
label_230a4c:
    // 0x230a4c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x230a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_230a50:
    // 0x230a50: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x230a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_230a54:
    // 0x230a54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x230a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_230a58:
    // 0x230a58: 0xc0a43d8  jal         func_290F60
label_230a5c:
    if (ctx->pc == 0x230A5Cu) {
        ctx->pc = 0x230A5Cu;
            // 0x230a5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x230A60u;
        goto label_230a60;
    }
    ctx->pc = 0x230A58u;
    SET_GPR_U32(ctx, 31, 0x230A60u);
    ctx->pc = 0x230A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230A58u;
            // 0x230a5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x290F60u;
    if (runtime->hasFunction(0x290F60u)) {
        auto targetFn = runtime->lookupFunction(0x290F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230A60u; }
        if (ctx->pc != 0x230A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290F60_0x290f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230A60u; }
        if (ctx->pc != 0x230A60u) { return; }
    }
    ctx->pc = 0x230A60u;
label_230a60:
    // 0x230a60: 0xa60000aa  sh          $zero, 0xAA($s0)
    ctx->pc = 0x230a60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 0));
label_230a64:
    // 0x230a64: 0xa60000ac  sh          $zero, 0xAC($s0)
    ctx->pc = 0x230a64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 172), (uint16_t)GPR_U32(ctx, 0));
label_230a68:
    // 0x230a68: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x230a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_230a6c:
    // 0x230a6c: 0x928802ef  lbu         $t0, 0x2EF($s4)
    ctx->pc = 0x230a6cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 751)));
label_230a70:
    // 0x230a70: 0x920400a9  lbu         $a0, 0xA9($s0)
    ctx->pc = 0x230a70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 169)));
label_230a74:
    // 0x230a74: 0x93c70001  lbu         $a3, 0x1($fp)
    ctx->pc = 0x230a74u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
label_230a78:
    // 0x230a78: 0x93c60000  lbu         $a2, 0x0($fp)
    ctx->pc = 0x230a78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_230a7c:
    // 0x230a7c: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x230a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_230a80:
    // 0x230a80: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x230a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_230a84:
    // 0x230a84: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x230a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_230a88:
    // 0x230a88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_230a8c:
    if (ctx->pc == 0x230A8Cu) {
        ctx->pc = 0x230A8Cu;
            // 0x230a8c: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x230A90u;
        goto label_230a90;
    }
    ctx->pc = 0x230A88u;
    {
        const bool branch_taken_0x230a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A88u;
            // 0x230a8c: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a88) {
            ctx->pc = 0x230AA0u;
            goto label_230aa0;
        }
    }
    ctx->pc = 0x230A90u;
label_230a90:
    // 0x230a90: 0xc01027  not         $v0, $a2
    ctx->pc = 0x230a90u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_230a94:
    // 0x230a94: 0x10000004  b           . + 4 + (0x4 << 2)
label_230a98:
    if (ctx->pc == 0x230A98u) {
        ctx->pc = 0x230A98u;
            // 0x230a98: 0x23380  sll         $a2, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
        ctx->pc = 0x230A9Cu;
        goto label_230a9c;
    }
    ctx->pc = 0x230A94u;
    {
        const bool branch_taken_0x230a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A94u;
            // 0x230a98: 0x23380  sll         $a2, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a94) {
            ctx->pc = 0x230AA8u;
            goto label_230aa8;
        }
    }
    ctx->pc = 0x230A9Cu;
label_230a9c:
    // 0x230a9c: 0x0  nop
    ctx->pc = 0x230a9cu;
    // NOP
label_230aa0:
    // 0x230aa0: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x230aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
label_230aa4:
    // 0x230aa4: 0x0  nop
    ctx->pc = 0x230aa4u;
    // NOP
label_230aa8:
    // 0x230aa8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x230aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_230aac:
    // 0x230aac: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x230aacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_230ab0:
    // 0x230ab0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_230ab4:
    if (ctx->pc == 0x230AB4u) {
        ctx->pc = 0x230AB8u;
        goto label_230ab8;
    }
    ctx->pc = 0x230AB0u;
    {
        const bool branch_taken_0x230ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ab0) {
            ctx->pc = 0x230AC8u;
            goto label_230ac8;
        }
    }
    ctx->pc = 0x230AB8u;
label_230ab8:
    // 0x230ab8: 0xe01027  not         $v0, $a3
    ctx->pc = 0x230ab8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
label_230abc:
    // 0x230abc: 0x10000004  b           . + 4 + (0x4 << 2)
label_230ac0:
    if (ctx->pc == 0x230AC0u) {
        ctx->pc = 0x230AC0u;
            // 0x230ac0: 0x21b80  sll         $v1, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
        ctx->pc = 0x230AC4u;
        goto label_230ac4;
    }
    ctx->pc = 0x230ABCu;
    {
        const bool branch_taken_0x230abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230ABCu;
            // 0x230ac0: 0x21b80  sll         $v1, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230abc) {
            ctx->pc = 0x230AD0u;
            goto label_230ad0;
        }
    }
    ctx->pc = 0x230AC4u;
label_230ac4:
    // 0x230ac4: 0x0  nop
    ctx->pc = 0x230ac4u;
    // NOP
label_230ac8:
    // 0x230ac8: 0x71b80  sll         $v1, $a3, 14
    ctx->pc = 0x230ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
label_230acc:
    // 0x230acc: 0x0  nop
    ctx->pc = 0x230accu;
    // NOP
label_230ad0:
    // 0x230ad0: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x230ad0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_230ad4:
    // 0x230ad4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x230ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_230ad8:
    // 0x230ad8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x230ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_230adc:
    // 0x230adc: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x230adcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
label_230ae0:
    // 0x230ae0: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x230ae0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_230ae4:
    // 0x230ae4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x230ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_230ae8:
    // 0x230ae8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_230aec:
    // 0x230aec: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x230aecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
label_230af0:
    // 0x230af0: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x230af0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
label_230af4:
    // 0x230af4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x230af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_230af8:
    // 0x230af8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x230af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_230afc:
    // 0x230afc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_230b00:
    if (ctx->pc == 0x230B00u) {
        ctx->pc = 0x230B04u;
        goto label_230b04;
    }
    ctx->pc = 0x230AFCu;
    {
        const bool branch_taken_0x230afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230afc) {
            ctx->pc = 0x230B18u;
            goto label_230b18;
        }
    }
    ctx->pc = 0x230B04u;
label_230b04:
    // 0x230b04: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x230b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_230b08:
    // 0x230b08: 0xc08b66c  jal         func_22D9B0
label_230b0c:
    if (ctx->pc == 0x230B0Cu) {
        ctx->pc = 0x230B0Cu;
            // 0x230b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230B10u;
        goto label_230b10;
    }
    ctx->pc = 0x230B08u;
    SET_GPR_U32(ctx, 31, 0x230B10u);
    ctx->pc = 0x230B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230B08u;
            // 0x230b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D9B0u;
    if (runtime->hasFunction(0x22D9B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230B10u; }
        if (ctx->pc != 0x230B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D9B0_0x22d9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230B10u; }
        if (ctx->pc != 0x230B10u) { return; }
    }
    ctx->pc = 0x230B10u;
label_230b10:
    // 0x230b10: 0x10000007  b           . + 4 + (0x7 << 2)
label_230b14:
    if (ctx->pc == 0x230B14u) {
        ctx->pc = 0x230B18u;
        goto label_230b18;
    }
    ctx->pc = 0x230B10u;
    {
        const bool branch_taken_0x230b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b10) {
            ctx->pc = 0x230B30u;
            goto label_230b30;
        }
    }
    ctx->pc = 0x230B18u;
label_230b18:
    // 0x230b18: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x230b18u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_230b1c:
    // 0x230b1c: 0xa3a200b0  sb          $v0, 0xB0($sp)
    ctx->pc = 0x230b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 2));
label_230b20:
    // 0x230b20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x230b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_230b24:
    // 0x230b24: 0xc08b66c  jal         func_22D9B0
label_230b28:
    if (ctx->pc == 0x230B28u) {
        ctx->pc = 0x230B28u;
            // 0x230b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230B2Cu;
        goto label_230b2c;
    }
    ctx->pc = 0x230B24u;
    SET_GPR_U32(ctx, 31, 0x230B2Cu);
    ctx->pc = 0x230B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230B24u;
            // 0x230b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D9B0u;
    if (runtime->hasFunction(0x22D9B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230B2Cu; }
        if (ctx->pc != 0x230B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D9B0_0x22d9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230B2Cu; }
        if (ctx->pc != 0x230B2Cu) { return; }
    }
    ctx->pc = 0x230B2Cu;
label_230b2c:
    // 0x230b2c: 0x0  nop
    ctx->pc = 0x230b2cu;
    // NOP
label_230b30:
    // 0x230b30: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x230b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_230b34:
    // 0x230b34: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_230b38:
    if (ctx->pc == 0x230B38u) {
        ctx->pc = 0x230B38u;
            // 0x230b38: 0x26160010  addiu       $s6, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x230B3Cu;
        goto label_230b3c;
    }
    ctx->pc = 0x230B34u;
    {
        const bool branch_taken_0x230b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230B34u;
            // 0x230b38: 0x26160010  addiu       $s6, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b34) {
            ctx->pc = 0x230B88u;
            goto label_230b88;
        }
    }
    ctx->pc = 0x230B3Cu;
label_230b3c:
    // 0x230b3c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x230b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_230b40:
    // 0x230b40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x230b40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_230b44:
    // 0x230b44: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x230b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_230b48:
    // 0x230b48: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x230b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_230b4c:
    // 0x230b4c: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x230b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
label_230b50:
    // 0x230b50: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x230b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_230b54:
    // 0x230b54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230b58:
    // 0x230b58: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x230b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_230b5c:
    // 0x230b5c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x230b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_230b60:
    // 0x230b60: 0x320f809  jalr        $t9
label_230b64:
    if (ctx->pc == 0x230B64u) {
        ctx->pc = 0x230B64u;
            // 0x230b64: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x230B68u;
        goto label_230b68;
    }
    ctx->pc = 0x230B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230B68u);
        ctx->pc = 0x230B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230B60u;
            // 0x230b64: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230B68u; }
            if (ctx->pc != 0x230B68u) { return; }
        }
        }
    }
    ctx->pc = 0x230B68u;
label_230b68:
    // 0x230b68: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x230b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_230b6c:
    // 0x230b6c: 0x26c50014  addiu       $a1, $s6, 0x14
    ctx->pc = 0x230b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_230b70:
    // 0x230b70: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x230b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_230b74:
    // 0x230b74: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x230b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_230b78:
    // 0x230b78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_230b7c:
    // 0x230b7c: 0xafa400f4  sw          $a0, 0xF4($sp)
    ctx->pc = 0x230b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
label_230b80:
    // 0x230b80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_230b84:
    // 0x230b84: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x230b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_230b88:
    // 0x230b88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x230b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_230b8c:
    // 0x230b8c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x230b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_230b90:
    // 0x230b90: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_230b94:
    if (ctx->pc == 0x230B94u) {
        ctx->pc = 0x230B94u;
            // 0x230b94: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x230B98u;
        goto label_230b98;
    }
    ctx->pc = 0x230B90u;
    {
        const bool branch_taken_0x230b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230B90u;
            // 0x230b94: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b90) {
            ctx->pc = 0x230A14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230a14;
        }
    }
    ctx->pc = 0x230B98u;
label_230b98:
    // 0x230b98: 0x828200c4  lb          $v0, 0xC4($s4)
    ctx->pc = 0x230b98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 196)));
label_230b9c:
    // 0x230b9c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_230ba0:
    if (ctx->pc == 0x230BA0u) {
        ctx->pc = 0x230BA0u;
            // 0x230ba0: 0x8e900318  lw          $s0, 0x318($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
        ctx->pc = 0x230BA4u;
        goto label_230ba4;
    }
    ctx->pc = 0x230B9Cu;
    {
        const bool branch_taken_0x230b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b9c) {
            ctx->pc = 0x230BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230B9Cu;
            // 0x230ba0: 0x8e900318  lw          $s0, 0x318($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230C38u;
            goto label_230c38;
        }
    }
    ctx->pc = 0x230BA4u;
label_230ba4:
    // 0x230ba4: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x230ba4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_230ba8:
    // 0x230ba8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_230bac:
    if (ctx->pc == 0x230BACu) {
        ctx->pc = 0x230BB0u;
        goto label_230bb0;
    }
    ctx->pc = 0x230BA8u;
    {
        const bool branch_taken_0x230ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ba8) {
            ctx->pc = 0x230C18u;
            goto label_230c18;
        }
    }
    ctx->pc = 0x230BB0u;
label_230bb0:
    // 0x230bb0: 0x8ee2004c  lw          $v0, 0x4C($s7)
    ctx->pc = 0x230bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 76)));
label_230bb4:
    // 0x230bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230bb8:
    // 0x230bb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x230bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_230bbc:
    // 0x230bbc: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_230bc0:
    // 0x230bc0: 0xa2e20024  sb          $v0, 0x24($s7)
    ctx->pc = 0x230bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 36), (uint8_t)GPR_U32(ctx, 2));
label_230bc4:
    // 0x230bc4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x230bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_230bc8:
    // 0x230bc8: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_230bcc:
    if (ctx->pc == 0x230BCCu) {
        ctx->pc = 0x230BCCu;
            // 0x230bcc: 0x26900034  addiu       $s0, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->pc = 0x230BD0u;
        goto label_230bd0;
    }
    ctx->pc = 0x230BC8u;
    {
        const bool branch_taken_0x230bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230bc8) {
            ctx->pc = 0x230BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230BC8u;
            // 0x230bcc: 0x26900034  addiu       $s0, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230BD4u;
            goto label_230bd4;
        }
    }
    ctx->pc = 0x230BD0u;
label_230bd0:
    // 0x230bd0: 0x26900028  addiu       $s0, $s4, 0x28
    ctx->pc = 0x230bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_230bd4:
    // 0x230bd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x230bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_230bd8:
    // 0x230bd8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x230bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230bdc:
    // 0x230bdc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x230bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_230be0:
    // 0x230be0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x230be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_230be4:
    // 0x230be4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_230be8:
    if (ctx->pc == 0x230BE8u) {
        ctx->pc = 0x230BE8u;
            // 0x230be8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x230BECu;
        goto label_230bec;
    }
    ctx->pc = 0x230BE4u;
    {
        const bool branch_taken_0x230be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230be4) {
            ctx->pc = 0x230BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230BE4u;
            // 0x230be8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230BFCu;
            goto label_230bfc;
        }
    }
    ctx->pc = 0x230BECu;
label_230bec:
    // 0x230bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230bf0:
    // 0x230bf0: 0xc0a728c  jal         func_29CA30
label_230bf4:
    if (ctx->pc == 0x230BF4u) {
        ctx->pc = 0x230BF4u;
            // 0x230bf4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x230BF8u;
        goto label_230bf8;
    }
    ctx->pc = 0x230BF0u;
    SET_GPR_U32(ctx, 31, 0x230BF8u);
    ctx->pc = 0x230BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230BF0u;
            // 0x230bf4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BF8u; }
        if (ctx->pc != 0x230BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BF8u; }
        if (ctx->pc != 0x230BF8u) { return; }
    }
    ctx->pc = 0x230BF8u;
label_230bf8:
    // 0x230bf8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x230bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230bfc:
    // 0x230bfc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x230bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_230c00:
    // 0x230c00: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x230c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_230c04:
    // 0x230c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_230c08:
    // 0x230c08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x230c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230c0c:
    // 0x230c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_230c10:
    // 0x230c10: 0x10000008  b           . + 4 + (0x8 << 2)
label_230c14:
    if (ctx->pc == 0x230C14u) {
        ctx->pc = 0x230C14u;
            // 0x230c14: 0xac570000  sw          $s7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
        ctx->pc = 0x230C18u;
        goto label_230c18;
    }
    ctx->pc = 0x230C10u;
    {
        const bool branch_taken_0x230c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C10u;
            // 0x230c14: 0xac570000  sw          $s7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c10) {
            ctx->pc = 0x230C34u;
            goto label_230c34;
        }
    }
    ctx->pc = 0x230C18u;
label_230c18:
    // 0x230c18: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_230c1c:
    if (ctx->pc == 0x230C1Cu) {
        ctx->pc = 0x230C20u;
        goto label_230c20;
    }
    ctx->pc = 0x230C18u;
    {
        const bool branch_taken_0x230c18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x230c18) {
            ctx->pc = 0x230C34u;
            goto label_230c34;
        }
    }
    ctx->pc = 0x230C20u;
label_230c20:
    // 0x230c20: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x230c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_230c24:
    // 0x230c24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x230c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_230c28:
    // 0x230c28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x230c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_230c2c:
    // 0x230c2c: 0x320f809  jalr        $t9
label_230c30:
    if (ctx->pc == 0x230C30u) {
        ctx->pc = 0x230C30u;
            // 0x230c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x230C34u;
        goto label_230c34;
    }
    ctx->pc = 0x230C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230C34u);
        ctx->pc = 0x230C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C2Cu;
            // 0x230c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230C34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230C34u; }
            if (ctx->pc != 0x230C34u) { return; }
        }
        }
    }
    ctx->pc = 0x230C34u;
label_230c34:
    // 0x230c34: 0x8e900318  lw          $s0, 0x318($s4)
    ctx->pc = 0x230c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
label_230c38:
    // 0x230c38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230c3c:
    // 0x230c3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x230c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_230c40:
    // 0x230c40: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x230c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_230c44:
    // 0x230c44: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x230c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_230c48:
    // 0x230c48: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x230c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_230c4c:
    // 0x230c4c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x230c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_230c50:
    // 0x230c50: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x230c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_230c54:
    // 0x230c54: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x230c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_230c58:
    // 0x230c58: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x230c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_230c5c:
    // 0x230c5c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x230c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_230c60:
    // 0x230c60: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_230c64:
    // 0x230c64: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x230c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_230c68:
    // 0x230c68: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x230c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_230c6c:
    // 0x230c6c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x230c6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_230c70:
    // 0x230c70: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_230c74:
    if (ctx->pc == 0x230C74u) {
        ctx->pc = 0x230C74u;
            // 0x230c74: 0x27b100d0  addiu       $s1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x230C78u;
        goto label_230c78;
    }
    ctx->pc = 0x230C70u;
    {
        const bool branch_taken_0x230c70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x230C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C70u;
            // 0x230c74: 0x27b100d0  addiu       $s1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c70) {
            ctx->pc = 0x230C80u;
            goto label_230c80;
        }
    }
    ctx->pc = 0x230C78u;
label_230c78:
    // 0x230c78: 0x10000005  b           . + 4 + (0x5 << 2)
label_230c7c:
    if (ctx->pc == 0x230C7Cu) {
        ctx->pc = 0x230C7Cu;
            // 0x230c7c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x230C80u;
        goto label_230c80;
    }
    ctx->pc = 0x230C78u;
    {
        const bool branch_taken_0x230c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C78u;
            // 0x230c7c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c78) {
            ctx->pc = 0x230C90u;
            goto label_230c90;
        }
    }
    ctx->pc = 0x230C80u;
label_230c80:
    // 0x230c80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230c84:
    // 0x230c84: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x230c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_230c88:
    // 0x230c88: 0x320f809  jalr        $t9
label_230c8c:
    if (ctx->pc == 0x230C8Cu) {
        ctx->pc = 0x230C90u;
        goto label_230c90;
    }
    ctx->pc = 0x230C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230C90u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x230C90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230C90u; }
            if (ctx->pc != 0x230C90u) { return; }
        }
        }
    }
    ctx->pc = 0x230C90u;
label_230c90:
    // 0x230c90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x230c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_230c94:
    // 0x230c94: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x230c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_230c98:
    // 0x230c98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x230c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_230c9c:
    // 0x230c9c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x230c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_230ca0:
    // 0x230ca0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x230ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_230ca4:
    // 0x230ca4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x230ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_230ca8:
    // 0x230ca8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230cac:
    // 0x230cac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_230cb0:
    // 0x230cb0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x230cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_230cb4:
    // 0x230cb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230cb8:
    // 0x230cb8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_230cbc:
    // 0x230cbc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x230cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_230cc0:
    // 0x230cc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_230cc4:
    if (ctx->pc == 0x230CC4u) {
        ctx->pc = 0x230CC4u;
            // 0x230cc4: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x230CC8u;
        goto label_230cc8;
    }
    ctx->pc = 0x230CC0u;
    {
        const bool branch_taken_0x230cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230CC0u;
            // 0x230cc4: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cc0) {
            ctx->pc = 0x230CF0u;
            goto label_230cf0;
        }
    }
    ctx->pc = 0x230CC8u;
label_230cc8:
    // 0x230cc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x230cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_230ccc:
    // 0x230ccc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x230cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_230cd0:
    // 0x230cd0: 0x2442c910  addiu       $v0, $v0, -0x36F0
    ctx->pc = 0x230cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953232));
label_230cd4:
    // 0x230cd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x230cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_230cd8:
    // 0x230cd8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_230cdc:
    // 0x230cdc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x230cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_230ce0:
    // 0x230ce0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_230ce4:
    // 0x230ce4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x230ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_230ce8:
    // 0x230ce8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x230ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_230cec:
    // 0x230cec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x230cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_230cf0:
    // 0x230cf0: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x230cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_230cf4:
    // 0x230cf4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x230cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_230cf8:
    // 0x230cf8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x230cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_230cfc:
    // 0x230cfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230d00:
    // 0x230d00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x230d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_230d04:
    // 0x230d04: 0x320f809  jalr        $t9
label_230d08:
    if (ctx->pc == 0x230D08u) {
        ctx->pc = 0x230D08u;
            // 0x230d08: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x230D0Cu;
        goto label_230d0c;
    }
    ctx->pc = 0x230D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230D0Cu);
        ctx->pc = 0x230D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D04u;
            // 0x230d08: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230D0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230D0Cu; }
            if (ctx->pc != 0x230D0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x230D0Cu;
label_230d0c:
    // 0x230d0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230d10:
    // 0x230d10: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x230d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_230d14:
    // 0x230d14: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x230d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_230d18:
    // 0x230d18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230d1c:
    // 0x230d1c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x230d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_230d20:
    // 0x230d20: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x230d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_230d24:
    // 0x230d24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_230d28:
    if (ctx->pc == 0x230D28u) {
        ctx->pc = 0x230D28u;
            // 0x230d28: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x230D2Cu;
        goto label_230d2c;
    }
    ctx->pc = 0x230D24u;
    {
        const bool branch_taken_0x230d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D24u;
            // 0x230d28: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d24) {
            ctx->pc = 0x230D54u;
            goto label_230d54;
        }
    }
    ctx->pc = 0x230D2Cu;
label_230d2c:
    // 0x230d2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x230d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_230d30:
    // 0x230d30: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_230d34:
    // 0x230d34: 0x2442c920  addiu       $v0, $v0, -0x36E0
    ctx->pc = 0x230d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953248));
label_230d38:
    // 0x230d38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x230d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_230d3c:
    // 0x230d3c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_230d40:
    // 0x230d40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x230d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_230d44:
    // 0x230d44: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_230d48:
    // 0x230d48: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x230d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_230d4c:
    // 0x230d4c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x230d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_230d50:
    // 0x230d50: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x230d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_230d54:
    // 0x230d54: 0x8e870070  lw          $a3, 0x70($s4)
    ctx->pc = 0x230d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_230d58:
    // 0x230d58: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_230d5c:
    if (ctx->pc == 0x230D5Cu) {
        ctx->pc = 0x230D5Cu;
            // 0x230d5c: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->pc = 0x230D60u;
        goto label_230d60;
    }
    ctx->pc = 0x230D58u;
    {
        const bool branch_taken_0x230d58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x230d58) {
            ctx->pc = 0x230D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230D58u;
            // 0x230d5c: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230D68u;
            goto label_230d68;
        }
    }
    ctx->pc = 0x230D60u;
label_230d60:
    // 0x230d60: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x230d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_230d64:
    // 0x230d64: 0x8e840058  lw          $a0, 0x58($s4)
    ctx->pc = 0x230d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_230d68:
    // 0x230d68: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x230d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_230d6c:
    // 0x230d6c: 0xc07fb38  jal         func_1FECE0
label_230d70:
    if (ctx->pc == 0x230D70u) {
        ctx->pc = 0x230D70u;
            // 0x230d70: 0x8fa500d0  lw          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x230D74u;
        goto label_230d74;
    }
    ctx->pc = 0x230D6Cu;
    SET_GPR_U32(ctx, 31, 0x230D74u);
    ctx->pc = 0x230D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230D6Cu;
            // 0x230d70: 0x8fa500d0  lw          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230D74u; }
        if (ctx->pc != 0x230D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230D74u; }
        if (ctx->pc != 0x230D74u) { return; }
    }
    ctx->pc = 0x230D74u;
label_230d74:
    // 0x230d74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230d78:
    // 0x230d78: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x230d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_230d7c:
    // 0x230d7c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x230d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_230d80:
    // 0x230d80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230d84:
    // 0x230d84: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x230d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_230d88:
    // 0x230d88: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x230d88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_230d8c:
    // 0x230d8c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_230d90:
    if (ctx->pc == 0x230D90u) {
        ctx->pc = 0x230D90u;
            // 0x230d90: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x230D94u;
        goto label_230d94;
    }
    ctx->pc = 0x230D8Cu;
    {
        const bool branch_taken_0x230d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D8Cu;
            // 0x230d90: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d8c) {
            ctx->pc = 0x230DBCu;
            goto label_230dbc;
        }
    }
    ctx->pc = 0x230D94u;
label_230d94:
    // 0x230d94: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x230d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_230d98:
    // 0x230d98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x230d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_230d9c:
    // 0x230d9c: 0x2463c930  addiu       $v1, $v1, -0x36D0
    ctx->pc = 0x230d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953264));
label_230da0:
    // 0x230da0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x230da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_230da4:
    // 0x230da4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_230da8:
    // 0x230da8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x230da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_230dac:
    // 0x230dac: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_230db0:
    // 0x230db0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x230db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_230db4:
    // 0x230db4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x230db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_230db8:
    // 0x230db8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x230db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_230dbc:
    // 0x230dbc: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_230dc0:
    if (ctx->pc == 0x230DC0u) {
        ctx->pc = 0x230DC0u;
            // 0x230dc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230DC4u;
        goto label_230dc4;
    }
    ctx->pc = 0x230DBCu;
    {
        const bool branch_taken_0x230dbc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x230DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DBCu;
            // 0x230dc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dbc) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DC4u;
label_230dc4:
    // 0x230dc4: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x230dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_230dc8:
    // 0x230dc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x230dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_230dcc:
    // 0x230dcc: 0xc08e414  jal         func_239050
label_230dd0:
    if (ctx->pc == 0x230DD0u) {
        ctx->pc = 0x230DD0u;
            // 0x230dd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230DD4u;
        goto label_230dd4;
    }
    ctx->pc = 0x230DCCu;
    SET_GPR_U32(ctx, 31, 0x230DD4u);
    ctx->pc = 0x230DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230DCCu;
            // 0x230dd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239050u;
    if (runtime->hasFunction(0x239050u)) {
        auto targetFn = runtime->lookupFunction(0x239050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230DD4u; }
        if (ctx->pc != 0x230DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239050_0x239050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230DD4u; }
        if (ctx->pc != 0x230DD4u) { return; }
    }
    ctx->pc = 0x230DD4u;
label_230dd4:
    // 0x230dd4: 0xc0893fc  jal         func_224FF0
label_230dd8:
    if (ctx->pc == 0x230DD8u) {
        ctx->pc = 0x230DD8u;
            // 0x230dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230DDCu;
        goto label_230ddc;
    }
    ctx->pc = 0x230DD4u;
    SET_GPR_U32(ctx, 31, 0x230DDCu);
    ctx->pc = 0x230DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230DD4u;
            // 0x230dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224FF0u;
    if (runtime->hasFunction(0x224FF0u)) {
        auto targetFn = runtime->lookupFunction(0x224FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230DDCu; }
        if (ctx->pc != 0x230DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224FF0_0x224ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230DDCu; }
        if (ctx->pc != 0x230DDCu) { return; }
    }
    ctx->pc = 0x230DDCu;
label_230ddc:
    // 0x230ddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x230ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_230de0:
    // 0x230de0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x230de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_230de4:
    // 0x230de4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_230de8:
    if (ctx->pc == 0x230DE8u) {
        ctx->pc = 0x230DE8u;
            // 0x230de8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x230DECu;
        goto label_230dec;
    }
    ctx->pc = 0x230DE4u;
    {
        const bool branch_taken_0x230de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x230DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DE4u;
            // 0x230de8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230de4) {
            ctx->pc = 0x230DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230dc4;
        }
    }
    ctx->pc = 0x230DECu;
label_230dec:
    // 0x230dec: 0x0  nop
    ctx->pc = 0x230decu;
    // NOP
label_230df0:
    // 0x230df0: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x230df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_230df4:
    // 0x230df4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x230df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_230df8:
    // 0x230df8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_230dfc:
    if (ctx->pc == 0x230DFCu) {
        ctx->pc = 0x230DFCu;
            // 0x230dfc: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x230E00u;
        goto label_230e00;
    }
    ctx->pc = 0x230DF8u;
    {
        const bool branch_taken_0x230df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DF8u;
            // 0x230dfc: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230df8) {
            ctx->pc = 0x230E20u;
            goto label_230e20;
        }
    }
    ctx->pc = 0x230E00u;
label_230e00:
    // 0x230e00: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x230e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_230e04:
    // 0x230e04: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_230e08:
    if (ctx->pc == 0x230E08u) {
        ctx->pc = 0x230E0Cu;
        goto label_230e0c;
    }
    ctx->pc = 0x230E04u;
    {
        const bool branch_taken_0x230e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e04) {
            ctx->pc = 0x230E20u;
            goto label_230e20;
        }
    }
    ctx->pc = 0x230E0Cu;
label_230e0c:
    // 0x230e0c: 0x8283008c  lb          $v1, 0x8C($s4)
    ctx->pc = 0x230e0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_230e10:
    // 0x230e10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_230e14:
    if (ctx->pc == 0x230E14u) {
        ctx->pc = 0x230E18u;
        goto label_230e18;
    }
    ctx->pc = 0x230E10u;
    {
        const bool branch_taken_0x230e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230e10) {
            ctx->pc = 0x230E20u;
            goto label_230e20;
        }
    }
    ctx->pc = 0x230E18u;
label_230e18:
    // 0x230e18: 0xc08d1c4  jal         func_234710
label_230e1c:
    if (ctx->pc == 0x230E1Cu) {
        ctx->pc = 0x230E1Cu;
            // 0x230e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230E20u;
        goto label_230e20;
    }
    ctx->pc = 0x230E18u;
    SET_GPR_U32(ctx, 31, 0x230E20u);
    ctx->pc = 0x230E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230E18u;
            // 0x230e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230E20u; }
        if (ctx->pc != 0x230E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230E20u; }
        if (ctx->pc != 0x230E20u) { return; }
    }
    ctx->pc = 0x230E20u;
label_230e20:
    // 0x230e20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230e24:
    // 0x230e24: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x230e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_230e28:
    // 0x230e28: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x230e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_230e2c:
    // 0x230e2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230e30:
    // 0x230e30: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x230e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_230e34:
    // 0x230e34: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x230e34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_230e38:
    // 0x230e38: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_230e3c:
    if (ctx->pc == 0x230E3Cu) {
        ctx->pc = 0x230E3Cu;
            // 0x230e3c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x230E40u;
        goto label_230e40;
    }
    ctx->pc = 0x230E38u;
    {
        const bool branch_taken_0x230e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230E38u;
            // 0x230e3c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e38) {
            ctx->pc = 0x230E68u;
            goto label_230e68;
        }
    }
    ctx->pc = 0x230E40u;
label_230e40:
    // 0x230e40: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x230e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_230e44:
    // 0x230e44: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x230e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_230e48:
    // 0x230e48: 0x2463c8a8  addiu       $v1, $v1, -0x3758
    ctx->pc = 0x230e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953128));
label_230e4c:
    // 0x230e4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x230e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_230e50:
    // 0x230e50: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_230e54:
    // 0x230e54: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x230e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_230e58:
    // 0x230e58: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x230e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_230e5c:
    // 0x230e5c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x230e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_230e60:
    // 0x230e60: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x230e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_230e64:
    // 0x230e64: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x230e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_230e68:
    // 0x230e68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230e6c:
    // 0x230e6c: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x230e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_230e70:
    // 0x230e70: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x230e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_230e74:
    // 0x230e74: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x230e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_230e78:
    // 0x230e78: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x230e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_230e7c:
    // 0x230e7c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_230e80:
    if (ctx->pc == 0x230E80u) {
        ctx->pc = 0x230E80u;
            // 0x230e80: 0x8fa400d8  lw          $a0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->pc = 0x230E84u;
        goto label_230e84;
    }
    ctx->pc = 0x230E7Cu;
    {
        const bool branch_taken_0x230e7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x230e7c) {
            ctx->pc = 0x230E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230E7Cu;
            // 0x230e80: 0x8fa400d8  lw          $a0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230E98u;
            goto label_230e98;
        }
    }
    ctx->pc = 0x230E84u;
label_230e84:
    // 0x230e84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230e88:
    // 0x230e88: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x230e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_230e8c:
    // 0x230e8c: 0x320f809  jalr        $t9
label_230e90:
    if (ctx->pc == 0x230E90u) {
        ctx->pc = 0x230E94u;
        goto label_230e94;
    }
    ctx->pc = 0x230E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230E94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x230E94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230E94u; }
            if (ctx->pc != 0x230E94u) { return; }
        }
        }
    }
    ctx->pc = 0x230E94u;
label_230e94:
    // 0x230e94: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x230e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_230e98:
    // 0x230e98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x230e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_230e9c:
    // 0x230e9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x230e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_230ea0:
    // 0x230ea0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_230ea4:
    if (ctx->pc == 0x230EA4u) {
        ctx->pc = 0x230EA8u;
        goto label_230ea8;
    }
    ctx->pc = 0x230EA0u;
    {
        const bool branch_taken_0x230ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230ea0) {
            ctx->pc = 0x230ECCu;
            goto label_230ecc;
        }
    }
    ctx->pc = 0x230EA8u;
label_230ea8:
    // 0x230ea8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230eac:
    // 0x230eac: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x230eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_230eb0:
    // 0x230eb0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x230eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_230eb4:
    // 0x230eb4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x230eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_230eb8:
    // 0x230eb8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x230eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_230ebc:
    // 0x230ebc: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x230ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_230ec0:
    // 0x230ec0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x230ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_230ec4:
    // 0x230ec4: 0xc0a7ab4  jal         func_29EAD0
label_230ec8:
    if (ctx->pc == 0x230EC8u) {
        ctx->pc = 0x230EC8u;
            // 0x230ec8: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x230ECCu;
        goto label_230ecc;
    }
    ctx->pc = 0x230EC4u;
    SET_GPR_U32(ctx, 31, 0x230ECCu);
    ctx->pc = 0x230EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230EC4u;
            // 0x230ec8: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230ECCu; }
        if (ctx->pc != 0x230ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230ECCu; }
        if (ctx->pc != 0x230ECCu) { return; }
    }
    ctx->pc = 0x230ECCu;
label_230ecc:
    // 0x230ecc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230ed0:
    // 0x230ed0: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_230ed4:
    // 0x230ed4: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_230ed8:
    // 0x230ed8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x230ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_230edc:
    // 0x230edc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_230ee0:
    // 0x230ee0: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_230ee4:
    if (ctx->pc == 0x230EE4u) {
        ctx->pc = 0x230EE4u;
            // 0x230ee4: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->pc = 0x230EE8u;
        goto label_230ee8;
    }
    ctx->pc = 0x230EE0u;
    {
        const bool branch_taken_0x230ee0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x230ee0) {
            ctx->pc = 0x230EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230EE0u;
            // 0x230ee4: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230EFCu;
            goto label_230efc;
        }
    }
    ctx->pc = 0x230EE8u;
label_230ee8:
    // 0x230ee8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230eec:
    // 0x230eec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x230eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_230ef0:
    // 0x230ef0: 0x320f809  jalr        $t9
label_230ef4:
    if (ctx->pc == 0x230EF4u) {
        ctx->pc = 0x230EF8u;
        goto label_230ef8;
    }
    ctx->pc = 0x230EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230EF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x230EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230EF8u; }
            if (ctx->pc != 0x230EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x230EF8u;
label_230ef8:
    // 0x230ef8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x230ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_230efc:
    // 0x230efc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x230efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_230f00:
    // 0x230f00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x230f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_230f04:
    // 0x230f04: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_230f08:
    if (ctx->pc == 0x230F08u) {
        ctx->pc = 0x230F0Cu;
        goto label_230f0c;
    }
    ctx->pc = 0x230F04u;
    {
        const bool branch_taken_0x230f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230f04) {
            ctx->pc = 0x230F30u;
            goto label_230f30;
        }
    }
    ctx->pc = 0x230F0Cu;
label_230f0c:
    // 0x230f0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230f10:
    // 0x230f10: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x230f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_230f14:
    // 0x230f14: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x230f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_230f18:
    // 0x230f18: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x230f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_230f1c:
    // 0x230f1c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x230f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_230f20:
    // 0x230f20: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x230f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_230f24:
    // 0x230f24: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x230f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_230f28:
    // 0x230f28: 0xc0a7ab4  jal         func_29EAD0
label_230f2c:
    if (ctx->pc == 0x230F2Cu) {
        ctx->pc = 0x230F2Cu;
            // 0x230f2c: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->pc = 0x230F30u;
        goto label_230f30;
    }
    ctx->pc = 0x230F28u;
    SET_GPR_U32(ctx, 31, 0x230F30u);
    ctx->pc = 0x230F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230F28u;
            // 0x230f2c: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230F30u; }
        if (ctx->pc != 0x230F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230F30u; }
        if (ctx->pc != 0x230F30u) { return; }
    }
    ctx->pc = 0x230F30u;
label_230f30:
    // 0x230f30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x230f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_230f34:
    // 0x230f34: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x230f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_230f38:
    // 0x230f38: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x230f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_230f3c:
    // 0x230f3c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x230f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_230f40:
    // 0x230f40: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x230f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_230f44:
    // 0x230f44: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_230f48:
    if (ctx->pc == 0x230F48u) {
        ctx->pc = 0x230F48u;
            // 0x230f48: 0x8fa400f8  lw          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->pc = 0x230F4Cu;
        goto label_230f4c;
    }
    ctx->pc = 0x230F44u;
    {
        const bool branch_taken_0x230f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x230f44) {
            ctx->pc = 0x230F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230F44u;
            // 0x230f48: 0x8fa400f8  lw          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230F60u;
            goto label_230f60;
        }
    }
    ctx->pc = 0x230F4Cu;
label_230f4c:
    // 0x230f4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230f50:
    // 0x230f50: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x230f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_230f54:
    // 0x230f54: 0x320f809  jalr        $t9
label_230f58:
    if (ctx->pc == 0x230F58u) {
        ctx->pc = 0x230F5Cu;
        goto label_230f5c;
    }
    ctx->pc = 0x230F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230F5Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x230F5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230F5Cu; }
            if (ctx->pc != 0x230F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x230F5Cu;
label_230f5c:
    // 0x230f5c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x230f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_230f60:
    // 0x230f60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x230f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_230f64:
    // 0x230f64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x230f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_230f68:
    // 0x230f68: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_230f6c:
    if (ctx->pc == 0x230F6Cu) {
        ctx->pc = 0x230F70u;
        goto label_230f70;
    }
    ctx->pc = 0x230F68u;
    {
        const bool branch_taken_0x230f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230f68) {
            ctx->pc = 0x230F94u;
            goto label_230f94;
        }
    }
    ctx->pc = 0x230F70u;
label_230f70:
    // 0x230f70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x230f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_230f74:
    // 0x230f74: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x230f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_230f78:
    // 0x230f78: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x230f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_230f7c:
    // 0x230f7c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x230f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_230f80:
    // 0x230f80: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x230f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_230f84:
    // 0x230f84: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x230f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_230f88:
    // 0x230f88: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x230f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_230f8c:
    // 0x230f8c: 0xc0a7ab4  jal         func_29EAD0
label_230f90:
    if (ctx->pc == 0x230F90u) {
        ctx->pc = 0x230F90u;
            // 0x230f90: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x230F94u;
        goto label_230f94;
    }
    ctx->pc = 0x230F8Cu;
    SET_GPR_U32(ctx, 31, 0x230F94u);
    ctx->pc = 0x230F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230F8Cu;
            // 0x230f90: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230F94u; }
        if (ctx->pc != 0x230F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230F94u; }
        if (ctx->pc != 0x230F94u) { return; }
    }
    ctx->pc = 0x230F94u;
label_230f94:
    // 0x230f94: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x230f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_230f98:
    // 0x230f98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x230f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_230f9c:
    // 0x230f9c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x230f9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_230fa0:
    // 0x230fa0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x230fa0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_230fa4:
    // 0x230fa4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x230fa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_230fa8:
    // 0x230fa8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x230fa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_230fac:
    // 0x230fac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x230facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_230fb0:
    // 0x230fb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x230fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_230fb4:
    // 0x230fb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x230fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_230fb8:
    // 0x230fb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x230fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230fbc:
    // 0x230fbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x230fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230fc0:
    // 0x230fc0: 0x3e00008  jr          $ra
label_230fc4:
    if (ctx->pc == 0x230FC4u) {
        ctx->pc = 0x230FC4u;
            // 0x230fc4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x230FC8u;
        goto label_230fc8;
    }
    ctx->pc = 0x230FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230FC0u;
            // 0x230fc4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230FC8u;
label_230fc8:
    // 0x230fc8: 0x0  nop
    ctx->pc = 0x230fc8u;
    // NOP
label_230fcc:
    // 0x230fcc: 0x0  nop
    ctx->pc = 0x230fccu;
    // NOP
}
