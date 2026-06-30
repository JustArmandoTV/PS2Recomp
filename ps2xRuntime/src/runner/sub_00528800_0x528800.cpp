#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00528800
// Address: 0x528800 - 0x5291d0
void sub_00528800_0x528800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00528800_0x528800");
#endif

    switch (ctx->pc) {
        case 0x528800u: goto label_528800;
        case 0x528804u: goto label_528804;
        case 0x528808u: goto label_528808;
        case 0x52880cu: goto label_52880c;
        case 0x528810u: goto label_528810;
        case 0x528814u: goto label_528814;
        case 0x528818u: goto label_528818;
        case 0x52881cu: goto label_52881c;
        case 0x528820u: goto label_528820;
        case 0x528824u: goto label_528824;
        case 0x528828u: goto label_528828;
        case 0x52882cu: goto label_52882c;
        case 0x528830u: goto label_528830;
        case 0x528834u: goto label_528834;
        case 0x528838u: goto label_528838;
        case 0x52883cu: goto label_52883c;
        case 0x528840u: goto label_528840;
        case 0x528844u: goto label_528844;
        case 0x528848u: goto label_528848;
        case 0x52884cu: goto label_52884c;
        case 0x528850u: goto label_528850;
        case 0x528854u: goto label_528854;
        case 0x528858u: goto label_528858;
        case 0x52885cu: goto label_52885c;
        case 0x528860u: goto label_528860;
        case 0x528864u: goto label_528864;
        case 0x528868u: goto label_528868;
        case 0x52886cu: goto label_52886c;
        case 0x528870u: goto label_528870;
        case 0x528874u: goto label_528874;
        case 0x528878u: goto label_528878;
        case 0x52887cu: goto label_52887c;
        case 0x528880u: goto label_528880;
        case 0x528884u: goto label_528884;
        case 0x528888u: goto label_528888;
        case 0x52888cu: goto label_52888c;
        case 0x528890u: goto label_528890;
        case 0x528894u: goto label_528894;
        case 0x528898u: goto label_528898;
        case 0x52889cu: goto label_52889c;
        case 0x5288a0u: goto label_5288a0;
        case 0x5288a4u: goto label_5288a4;
        case 0x5288a8u: goto label_5288a8;
        case 0x5288acu: goto label_5288ac;
        case 0x5288b0u: goto label_5288b0;
        case 0x5288b4u: goto label_5288b4;
        case 0x5288b8u: goto label_5288b8;
        case 0x5288bcu: goto label_5288bc;
        case 0x5288c0u: goto label_5288c0;
        case 0x5288c4u: goto label_5288c4;
        case 0x5288c8u: goto label_5288c8;
        case 0x5288ccu: goto label_5288cc;
        case 0x5288d0u: goto label_5288d0;
        case 0x5288d4u: goto label_5288d4;
        case 0x5288d8u: goto label_5288d8;
        case 0x5288dcu: goto label_5288dc;
        case 0x5288e0u: goto label_5288e0;
        case 0x5288e4u: goto label_5288e4;
        case 0x5288e8u: goto label_5288e8;
        case 0x5288ecu: goto label_5288ec;
        case 0x5288f0u: goto label_5288f0;
        case 0x5288f4u: goto label_5288f4;
        case 0x5288f8u: goto label_5288f8;
        case 0x5288fcu: goto label_5288fc;
        case 0x528900u: goto label_528900;
        case 0x528904u: goto label_528904;
        case 0x528908u: goto label_528908;
        case 0x52890cu: goto label_52890c;
        case 0x528910u: goto label_528910;
        case 0x528914u: goto label_528914;
        case 0x528918u: goto label_528918;
        case 0x52891cu: goto label_52891c;
        case 0x528920u: goto label_528920;
        case 0x528924u: goto label_528924;
        case 0x528928u: goto label_528928;
        case 0x52892cu: goto label_52892c;
        case 0x528930u: goto label_528930;
        case 0x528934u: goto label_528934;
        case 0x528938u: goto label_528938;
        case 0x52893cu: goto label_52893c;
        case 0x528940u: goto label_528940;
        case 0x528944u: goto label_528944;
        case 0x528948u: goto label_528948;
        case 0x52894cu: goto label_52894c;
        case 0x528950u: goto label_528950;
        case 0x528954u: goto label_528954;
        case 0x528958u: goto label_528958;
        case 0x52895cu: goto label_52895c;
        case 0x528960u: goto label_528960;
        case 0x528964u: goto label_528964;
        case 0x528968u: goto label_528968;
        case 0x52896cu: goto label_52896c;
        case 0x528970u: goto label_528970;
        case 0x528974u: goto label_528974;
        case 0x528978u: goto label_528978;
        case 0x52897cu: goto label_52897c;
        case 0x528980u: goto label_528980;
        case 0x528984u: goto label_528984;
        case 0x528988u: goto label_528988;
        case 0x52898cu: goto label_52898c;
        case 0x528990u: goto label_528990;
        case 0x528994u: goto label_528994;
        case 0x528998u: goto label_528998;
        case 0x52899cu: goto label_52899c;
        case 0x5289a0u: goto label_5289a0;
        case 0x5289a4u: goto label_5289a4;
        case 0x5289a8u: goto label_5289a8;
        case 0x5289acu: goto label_5289ac;
        case 0x5289b0u: goto label_5289b0;
        case 0x5289b4u: goto label_5289b4;
        case 0x5289b8u: goto label_5289b8;
        case 0x5289bcu: goto label_5289bc;
        case 0x5289c0u: goto label_5289c0;
        case 0x5289c4u: goto label_5289c4;
        case 0x5289c8u: goto label_5289c8;
        case 0x5289ccu: goto label_5289cc;
        case 0x5289d0u: goto label_5289d0;
        case 0x5289d4u: goto label_5289d4;
        case 0x5289d8u: goto label_5289d8;
        case 0x5289dcu: goto label_5289dc;
        case 0x5289e0u: goto label_5289e0;
        case 0x5289e4u: goto label_5289e4;
        case 0x5289e8u: goto label_5289e8;
        case 0x5289ecu: goto label_5289ec;
        case 0x5289f0u: goto label_5289f0;
        case 0x5289f4u: goto label_5289f4;
        case 0x5289f8u: goto label_5289f8;
        case 0x5289fcu: goto label_5289fc;
        case 0x528a00u: goto label_528a00;
        case 0x528a04u: goto label_528a04;
        case 0x528a08u: goto label_528a08;
        case 0x528a0cu: goto label_528a0c;
        case 0x528a10u: goto label_528a10;
        case 0x528a14u: goto label_528a14;
        case 0x528a18u: goto label_528a18;
        case 0x528a1cu: goto label_528a1c;
        case 0x528a20u: goto label_528a20;
        case 0x528a24u: goto label_528a24;
        case 0x528a28u: goto label_528a28;
        case 0x528a2cu: goto label_528a2c;
        case 0x528a30u: goto label_528a30;
        case 0x528a34u: goto label_528a34;
        case 0x528a38u: goto label_528a38;
        case 0x528a3cu: goto label_528a3c;
        case 0x528a40u: goto label_528a40;
        case 0x528a44u: goto label_528a44;
        case 0x528a48u: goto label_528a48;
        case 0x528a4cu: goto label_528a4c;
        case 0x528a50u: goto label_528a50;
        case 0x528a54u: goto label_528a54;
        case 0x528a58u: goto label_528a58;
        case 0x528a5cu: goto label_528a5c;
        case 0x528a60u: goto label_528a60;
        case 0x528a64u: goto label_528a64;
        case 0x528a68u: goto label_528a68;
        case 0x528a6cu: goto label_528a6c;
        case 0x528a70u: goto label_528a70;
        case 0x528a74u: goto label_528a74;
        case 0x528a78u: goto label_528a78;
        case 0x528a7cu: goto label_528a7c;
        case 0x528a80u: goto label_528a80;
        case 0x528a84u: goto label_528a84;
        case 0x528a88u: goto label_528a88;
        case 0x528a8cu: goto label_528a8c;
        case 0x528a90u: goto label_528a90;
        case 0x528a94u: goto label_528a94;
        case 0x528a98u: goto label_528a98;
        case 0x528a9cu: goto label_528a9c;
        case 0x528aa0u: goto label_528aa0;
        case 0x528aa4u: goto label_528aa4;
        case 0x528aa8u: goto label_528aa8;
        case 0x528aacu: goto label_528aac;
        case 0x528ab0u: goto label_528ab0;
        case 0x528ab4u: goto label_528ab4;
        case 0x528ab8u: goto label_528ab8;
        case 0x528abcu: goto label_528abc;
        case 0x528ac0u: goto label_528ac0;
        case 0x528ac4u: goto label_528ac4;
        case 0x528ac8u: goto label_528ac8;
        case 0x528accu: goto label_528acc;
        case 0x528ad0u: goto label_528ad0;
        case 0x528ad4u: goto label_528ad4;
        case 0x528ad8u: goto label_528ad8;
        case 0x528adcu: goto label_528adc;
        case 0x528ae0u: goto label_528ae0;
        case 0x528ae4u: goto label_528ae4;
        case 0x528ae8u: goto label_528ae8;
        case 0x528aecu: goto label_528aec;
        case 0x528af0u: goto label_528af0;
        case 0x528af4u: goto label_528af4;
        case 0x528af8u: goto label_528af8;
        case 0x528afcu: goto label_528afc;
        case 0x528b00u: goto label_528b00;
        case 0x528b04u: goto label_528b04;
        case 0x528b08u: goto label_528b08;
        case 0x528b0cu: goto label_528b0c;
        case 0x528b10u: goto label_528b10;
        case 0x528b14u: goto label_528b14;
        case 0x528b18u: goto label_528b18;
        case 0x528b1cu: goto label_528b1c;
        case 0x528b20u: goto label_528b20;
        case 0x528b24u: goto label_528b24;
        case 0x528b28u: goto label_528b28;
        case 0x528b2cu: goto label_528b2c;
        case 0x528b30u: goto label_528b30;
        case 0x528b34u: goto label_528b34;
        case 0x528b38u: goto label_528b38;
        case 0x528b3cu: goto label_528b3c;
        case 0x528b40u: goto label_528b40;
        case 0x528b44u: goto label_528b44;
        case 0x528b48u: goto label_528b48;
        case 0x528b4cu: goto label_528b4c;
        case 0x528b50u: goto label_528b50;
        case 0x528b54u: goto label_528b54;
        case 0x528b58u: goto label_528b58;
        case 0x528b5cu: goto label_528b5c;
        case 0x528b60u: goto label_528b60;
        case 0x528b64u: goto label_528b64;
        case 0x528b68u: goto label_528b68;
        case 0x528b6cu: goto label_528b6c;
        case 0x528b70u: goto label_528b70;
        case 0x528b74u: goto label_528b74;
        case 0x528b78u: goto label_528b78;
        case 0x528b7cu: goto label_528b7c;
        case 0x528b80u: goto label_528b80;
        case 0x528b84u: goto label_528b84;
        case 0x528b88u: goto label_528b88;
        case 0x528b8cu: goto label_528b8c;
        case 0x528b90u: goto label_528b90;
        case 0x528b94u: goto label_528b94;
        case 0x528b98u: goto label_528b98;
        case 0x528b9cu: goto label_528b9c;
        case 0x528ba0u: goto label_528ba0;
        case 0x528ba4u: goto label_528ba4;
        case 0x528ba8u: goto label_528ba8;
        case 0x528bacu: goto label_528bac;
        case 0x528bb0u: goto label_528bb0;
        case 0x528bb4u: goto label_528bb4;
        case 0x528bb8u: goto label_528bb8;
        case 0x528bbcu: goto label_528bbc;
        case 0x528bc0u: goto label_528bc0;
        case 0x528bc4u: goto label_528bc4;
        case 0x528bc8u: goto label_528bc8;
        case 0x528bccu: goto label_528bcc;
        case 0x528bd0u: goto label_528bd0;
        case 0x528bd4u: goto label_528bd4;
        case 0x528bd8u: goto label_528bd8;
        case 0x528bdcu: goto label_528bdc;
        case 0x528be0u: goto label_528be0;
        case 0x528be4u: goto label_528be4;
        case 0x528be8u: goto label_528be8;
        case 0x528becu: goto label_528bec;
        case 0x528bf0u: goto label_528bf0;
        case 0x528bf4u: goto label_528bf4;
        case 0x528bf8u: goto label_528bf8;
        case 0x528bfcu: goto label_528bfc;
        case 0x528c00u: goto label_528c00;
        case 0x528c04u: goto label_528c04;
        case 0x528c08u: goto label_528c08;
        case 0x528c0cu: goto label_528c0c;
        case 0x528c10u: goto label_528c10;
        case 0x528c14u: goto label_528c14;
        case 0x528c18u: goto label_528c18;
        case 0x528c1cu: goto label_528c1c;
        case 0x528c20u: goto label_528c20;
        case 0x528c24u: goto label_528c24;
        case 0x528c28u: goto label_528c28;
        case 0x528c2cu: goto label_528c2c;
        case 0x528c30u: goto label_528c30;
        case 0x528c34u: goto label_528c34;
        case 0x528c38u: goto label_528c38;
        case 0x528c3cu: goto label_528c3c;
        case 0x528c40u: goto label_528c40;
        case 0x528c44u: goto label_528c44;
        case 0x528c48u: goto label_528c48;
        case 0x528c4cu: goto label_528c4c;
        case 0x528c50u: goto label_528c50;
        case 0x528c54u: goto label_528c54;
        case 0x528c58u: goto label_528c58;
        case 0x528c5cu: goto label_528c5c;
        case 0x528c60u: goto label_528c60;
        case 0x528c64u: goto label_528c64;
        case 0x528c68u: goto label_528c68;
        case 0x528c6cu: goto label_528c6c;
        case 0x528c70u: goto label_528c70;
        case 0x528c74u: goto label_528c74;
        case 0x528c78u: goto label_528c78;
        case 0x528c7cu: goto label_528c7c;
        case 0x528c80u: goto label_528c80;
        case 0x528c84u: goto label_528c84;
        case 0x528c88u: goto label_528c88;
        case 0x528c8cu: goto label_528c8c;
        case 0x528c90u: goto label_528c90;
        case 0x528c94u: goto label_528c94;
        case 0x528c98u: goto label_528c98;
        case 0x528c9cu: goto label_528c9c;
        case 0x528ca0u: goto label_528ca0;
        case 0x528ca4u: goto label_528ca4;
        case 0x528ca8u: goto label_528ca8;
        case 0x528cacu: goto label_528cac;
        case 0x528cb0u: goto label_528cb0;
        case 0x528cb4u: goto label_528cb4;
        case 0x528cb8u: goto label_528cb8;
        case 0x528cbcu: goto label_528cbc;
        case 0x528cc0u: goto label_528cc0;
        case 0x528cc4u: goto label_528cc4;
        case 0x528cc8u: goto label_528cc8;
        case 0x528cccu: goto label_528ccc;
        case 0x528cd0u: goto label_528cd0;
        case 0x528cd4u: goto label_528cd4;
        case 0x528cd8u: goto label_528cd8;
        case 0x528cdcu: goto label_528cdc;
        case 0x528ce0u: goto label_528ce0;
        case 0x528ce4u: goto label_528ce4;
        case 0x528ce8u: goto label_528ce8;
        case 0x528cecu: goto label_528cec;
        case 0x528cf0u: goto label_528cf0;
        case 0x528cf4u: goto label_528cf4;
        case 0x528cf8u: goto label_528cf8;
        case 0x528cfcu: goto label_528cfc;
        case 0x528d00u: goto label_528d00;
        case 0x528d04u: goto label_528d04;
        case 0x528d08u: goto label_528d08;
        case 0x528d0cu: goto label_528d0c;
        case 0x528d10u: goto label_528d10;
        case 0x528d14u: goto label_528d14;
        case 0x528d18u: goto label_528d18;
        case 0x528d1cu: goto label_528d1c;
        case 0x528d20u: goto label_528d20;
        case 0x528d24u: goto label_528d24;
        case 0x528d28u: goto label_528d28;
        case 0x528d2cu: goto label_528d2c;
        case 0x528d30u: goto label_528d30;
        case 0x528d34u: goto label_528d34;
        case 0x528d38u: goto label_528d38;
        case 0x528d3cu: goto label_528d3c;
        case 0x528d40u: goto label_528d40;
        case 0x528d44u: goto label_528d44;
        case 0x528d48u: goto label_528d48;
        case 0x528d4cu: goto label_528d4c;
        case 0x528d50u: goto label_528d50;
        case 0x528d54u: goto label_528d54;
        case 0x528d58u: goto label_528d58;
        case 0x528d5cu: goto label_528d5c;
        case 0x528d60u: goto label_528d60;
        case 0x528d64u: goto label_528d64;
        case 0x528d68u: goto label_528d68;
        case 0x528d6cu: goto label_528d6c;
        case 0x528d70u: goto label_528d70;
        case 0x528d74u: goto label_528d74;
        case 0x528d78u: goto label_528d78;
        case 0x528d7cu: goto label_528d7c;
        case 0x528d80u: goto label_528d80;
        case 0x528d84u: goto label_528d84;
        case 0x528d88u: goto label_528d88;
        case 0x528d8cu: goto label_528d8c;
        case 0x528d90u: goto label_528d90;
        case 0x528d94u: goto label_528d94;
        case 0x528d98u: goto label_528d98;
        case 0x528d9cu: goto label_528d9c;
        case 0x528da0u: goto label_528da0;
        case 0x528da4u: goto label_528da4;
        case 0x528da8u: goto label_528da8;
        case 0x528dacu: goto label_528dac;
        case 0x528db0u: goto label_528db0;
        case 0x528db4u: goto label_528db4;
        case 0x528db8u: goto label_528db8;
        case 0x528dbcu: goto label_528dbc;
        case 0x528dc0u: goto label_528dc0;
        case 0x528dc4u: goto label_528dc4;
        case 0x528dc8u: goto label_528dc8;
        case 0x528dccu: goto label_528dcc;
        case 0x528dd0u: goto label_528dd0;
        case 0x528dd4u: goto label_528dd4;
        case 0x528dd8u: goto label_528dd8;
        case 0x528ddcu: goto label_528ddc;
        case 0x528de0u: goto label_528de0;
        case 0x528de4u: goto label_528de4;
        case 0x528de8u: goto label_528de8;
        case 0x528decu: goto label_528dec;
        case 0x528df0u: goto label_528df0;
        case 0x528df4u: goto label_528df4;
        case 0x528df8u: goto label_528df8;
        case 0x528dfcu: goto label_528dfc;
        case 0x528e00u: goto label_528e00;
        case 0x528e04u: goto label_528e04;
        case 0x528e08u: goto label_528e08;
        case 0x528e0cu: goto label_528e0c;
        case 0x528e10u: goto label_528e10;
        case 0x528e14u: goto label_528e14;
        case 0x528e18u: goto label_528e18;
        case 0x528e1cu: goto label_528e1c;
        case 0x528e20u: goto label_528e20;
        case 0x528e24u: goto label_528e24;
        case 0x528e28u: goto label_528e28;
        case 0x528e2cu: goto label_528e2c;
        case 0x528e30u: goto label_528e30;
        case 0x528e34u: goto label_528e34;
        case 0x528e38u: goto label_528e38;
        case 0x528e3cu: goto label_528e3c;
        case 0x528e40u: goto label_528e40;
        case 0x528e44u: goto label_528e44;
        case 0x528e48u: goto label_528e48;
        case 0x528e4cu: goto label_528e4c;
        case 0x528e50u: goto label_528e50;
        case 0x528e54u: goto label_528e54;
        case 0x528e58u: goto label_528e58;
        case 0x528e5cu: goto label_528e5c;
        case 0x528e60u: goto label_528e60;
        case 0x528e64u: goto label_528e64;
        case 0x528e68u: goto label_528e68;
        case 0x528e6cu: goto label_528e6c;
        case 0x528e70u: goto label_528e70;
        case 0x528e74u: goto label_528e74;
        case 0x528e78u: goto label_528e78;
        case 0x528e7cu: goto label_528e7c;
        case 0x528e80u: goto label_528e80;
        case 0x528e84u: goto label_528e84;
        case 0x528e88u: goto label_528e88;
        case 0x528e8cu: goto label_528e8c;
        case 0x528e90u: goto label_528e90;
        case 0x528e94u: goto label_528e94;
        case 0x528e98u: goto label_528e98;
        case 0x528e9cu: goto label_528e9c;
        case 0x528ea0u: goto label_528ea0;
        case 0x528ea4u: goto label_528ea4;
        case 0x528ea8u: goto label_528ea8;
        case 0x528eacu: goto label_528eac;
        case 0x528eb0u: goto label_528eb0;
        case 0x528eb4u: goto label_528eb4;
        case 0x528eb8u: goto label_528eb8;
        case 0x528ebcu: goto label_528ebc;
        case 0x528ec0u: goto label_528ec0;
        case 0x528ec4u: goto label_528ec4;
        case 0x528ec8u: goto label_528ec8;
        case 0x528eccu: goto label_528ecc;
        case 0x528ed0u: goto label_528ed0;
        case 0x528ed4u: goto label_528ed4;
        case 0x528ed8u: goto label_528ed8;
        case 0x528edcu: goto label_528edc;
        case 0x528ee0u: goto label_528ee0;
        case 0x528ee4u: goto label_528ee4;
        case 0x528ee8u: goto label_528ee8;
        case 0x528eecu: goto label_528eec;
        case 0x528ef0u: goto label_528ef0;
        case 0x528ef4u: goto label_528ef4;
        case 0x528ef8u: goto label_528ef8;
        case 0x528efcu: goto label_528efc;
        case 0x528f00u: goto label_528f00;
        case 0x528f04u: goto label_528f04;
        case 0x528f08u: goto label_528f08;
        case 0x528f0cu: goto label_528f0c;
        case 0x528f10u: goto label_528f10;
        case 0x528f14u: goto label_528f14;
        case 0x528f18u: goto label_528f18;
        case 0x528f1cu: goto label_528f1c;
        case 0x528f20u: goto label_528f20;
        case 0x528f24u: goto label_528f24;
        case 0x528f28u: goto label_528f28;
        case 0x528f2cu: goto label_528f2c;
        case 0x528f30u: goto label_528f30;
        case 0x528f34u: goto label_528f34;
        case 0x528f38u: goto label_528f38;
        case 0x528f3cu: goto label_528f3c;
        case 0x528f40u: goto label_528f40;
        case 0x528f44u: goto label_528f44;
        case 0x528f48u: goto label_528f48;
        case 0x528f4cu: goto label_528f4c;
        case 0x528f50u: goto label_528f50;
        case 0x528f54u: goto label_528f54;
        case 0x528f58u: goto label_528f58;
        case 0x528f5cu: goto label_528f5c;
        case 0x528f60u: goto label_528f60;
        case 0x528f64u: goto label_528f64;
        case 0x528f68u: goto label_528f68;
        case 0x528f6cu: goto label_528f6c;
        case 0x528f70u: goto label_528f70;
        case 0x528f74u: goto label_528f74;
        case 0x528f78u: goto label_528f78;
        case 0x528f7cu: goto label_528f7c;
        case 0x528f80u: goto label_528f80;
        case 0x528f84u: goto label_528f84;
        case 0x528f88u: goto label_528f88;
        case 0x528f8cu: goto label_528f8c;
        case 0x528f90u: goto label_528f90;
        case 0x528f94u: goto label_528f94;
        case 0x528f98u: goto label_528f98;
        case 0x528f9cu: goto label_528f9c;
        case 0x528fa0u: goto label_528fa0;
        case 0x528fa4u: goto label_528fa4;
        case 0x528fa8u: goto label_528fa8;
        case 0x528facu: goto label_528fac;
        case 0x528fb0u: goto label_528fb0;
        case 0x528fb4u: goto label_528fb4;
        case 0x528fb8u: goto label_528fb8;
        case 0x528fbcu: goto label_528fbc;
        case 0x528fc0u: goto label_528fc0;
        case 0x528fc4u: goto label_528fc4;
        case 0x528fc8u: goto label_528fc8;
        case 0x528fccu: goto label_528fcc;
        case 0x528fd0u: goto label_528fd0;
        case 0x528fd4u: goto label_528fd4;
        case 0x528fd8u: goto label_528fd8;
        case 0x528fdcu: goto label_528fdc;
        case 0x528fe0u: goto label_528fe0;
        case 0x528fe4u: goto label_528fe4;
        case 0x528fe8u: goto label_528fe8;
        case 0x528fecu: goto label_528fec;
        case 0x528ff0u: goto label_528ff0;
        case 0x528ff4u: goto label_528ff4;
        case 0x528ff8u: goto label_528ff8;
        case 0x528ffcu: goto label_528ffc;
        case 0x529000u: goto label_529000;
        case 0x529004u: goto label_529004;
        case 0x529008u: goto label_529008;
        case 0x52900cu: goto label_52900c;
        case 0x529010u: goto label_529010;
        case 0x529014u: goto label_529014;
        case 0x529018u: goto label_529018;
        case 0x52901cu: goto label_52901c;
        case 0x529020u: goto label_529020;
        case 0x529024u: goto label_529024;
        case 0x529028u: goto label_529028;
        case 0x52902cu: goto label_52902c;
        case 0x529030u: goto label_529030;
        case 0x529034u: goto label_529034;
        case 0x529038u: goto label_529038;
        case 0x52903cu: goto label_52903c;
        case 0x529040u: goto label_529040;
        case 0x529044u: goto label_529044;
        case 0x529048u: goto label_529048;
        case 0x52904cu: goto label_52904c;
        case 0x529050u: goto label_529050;
        case 0x529054u: goto label_529054;
        case 0x529058u: goto label_529058;
        case 0x52905cu: goto label_52905c;
        case 0x529060u: goto label_529060;
        case 0x529064u: goto label_529064;
        case 0x529068u: goto label_529068;
        case 0x52906cu: goto label_52906c;
        case 0x529070u: goto label_529070;
        case 0x529074u: goto label_529074;
        case 0x529078u: goto label_529078;
        case 0x52907cu: goto label_52907c;
        case 0x529080u: goto label_529080;
        case 0x529084u: goto label_529084;
        case 0x529088u: goto label_529088;
        case 0x52908cu: goto label_52908c;
        case 0x529090u: goto label_529090;
        case 0x529094u: goto label_529094;
        case 0x529098u: goto label_529098;
        case 0x52909cu: goto label_52909c;
        case 0x5290a0u: goto label_5290a0;
        case 0x5290a4u: goto label_5290a4;
        case 0x5290a8u: goto label_5290a8;
        case 0x5290acu: goto label_5290ac;
        case 0x5290b0u: goto label_5290b0;
        case 0x5290b4u: goto label_5290b4;
        case 0x5290b8u: goto label_5290b8;
        case 0x5290bcu: goto label_5290bc;
        case 0x5290c0u: goto label_5290c0;
        case 0x5290c4u: goto label_5290c4;
        case 0x5290c8u: goto label_5290c8;
        case 0x5290ccu: goto label_5290cc;
        case 0x5290d0u: goto label_5290d0;
        case 0x5290d4u: goto label_5290d4;
        case 0x5290d8u: goto label_5290d8;
        case 0x5290dcu: goto label_5290dc;
        case 0x5290e0u: goto label_5290e0;
        case 0x5290e4u: goto label_5290e4;
        case 0x5290e8u: goto label_5290e8;
        case 0x5290ecu: goto label_5290ec;
        case 0x5290f0u: goto label_5290f0;
        case 0x5290f4u: goto label_5290f4;
        case 0x5290f8u: goto label_5290f8;
        case 0x5290fcu: goto label_5290fc;
        case 0x529100u: goto label_529100;
        case 0x529104u: goto label_529104;
        case 0x529108u: goto label_529108;
        case 0x52910cu: goto label_52910c;
        case 0x529110u: goto label_529110;
        case 0x529114u: goto label_529114;
        case 0x529118u: goto label_529118;
        case 0x52911cu: goto label_52911c;
        case 0x529120u: goto label_529120;
        case 0x529124u: goto label_529124;
        case 0x529128u: goto label_529128;
        case 0x52912cu: goto label_52912c;
        case 0x529130u: goto label_529130;
        case 0x529134u: goto label_529134;
        case 0x529138u: goto label_529138;
        case 0x52913cu: goto label_52913c;
        case 0x529140u: goto label_529140;
        case 0x529144u: goto label_529144;
        case 0x529148u: goto label_529148;
        case 0x52914cu: goto label_52914c;
        case 0x529150u: goto label_529150;
        case 0x529154u: goto label_529154;
        case 0x529158u: goto label_529158;
        case 0x52915cu: goto label_52915c;
        case 0x529160u: goto label_529160;
        case 0x529164u: goto label_529164;
        case 0x529168u: goto label_529168;
        case 0x52916cu: goto label_52916c;
        case 0x529170u: goto label_529170;
        case 0x529174u: goto label_529174;
        case 0x529178u: goto label_529178;
        case 0x52917cu: goto label_52917c;
        case 0x529180u: goto label_529180;
        case 0x529184u: goto label_529184;
        case 0x529188u: goto label_529188;
        case 0x52918cu: goto label_52918c;
        case 0x529190u: goto label_529190;
        case 0x529194u: goto label_529194;
        case 0x529198u: goto label_529198;
        case 0x52919cu: goto label_52919c;
        case 0x5291a0u: goto label_5291a0;
        case 0x5291a4u: goto label_5291a4;
        case 0x5291a8u: goto label_5291a8;
        case 0x5291acu: goto label_5291ac;
        case 0x5291b0u: goto label_5291b0;
        case 0x5291b4u: goto label_5291b4;
        case 0x5291b8u: goto label_5291b8;
        case 0x5291bcu: goto label_5291bc;
        case 0x5291c0u: goto label_5291c0;
        case 0x5291c4u: goto label_5291c4;
        case 0x5291c8u: goto label_5291c8;
        case 0x5291ccu: goto label_5291cc;
        default: break;
    }

    ctx->pc = 0x528800u;

label_528800:
    // 0x528800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x528800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_528804:
    // 0x528804: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x528804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_528808:
    // 0x528808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x528808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52880c:
    // 0x52880c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_528810:
    // 0x528810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x528810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_528814:
    // 0x528814: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x528814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_528818:
    // 0x528818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x528818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52881c:
    // 0x52881c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_528820:
    // 0x528820: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x528820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_528824:
    // 0x528824: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x528824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_528828:
    // 0x528828: 0xc10ca68  jal         func_4329A0
label_52882c:
    if (ctx->pc == 0x52882Cu) {
        ctx->pc = 0x52882Cu;
            // 0x52882c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x528830u;
        goto label_528830;
    }
    ctx->pc = 0x528828u;
    SET_GPR_U32(ctx, 31, 0x528830u);
    ctx->pc = 0x52882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528828u;
            // 0x52882c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528830u; }
        if (ctx->pc != 0x528830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528830u; }
        if (ctx->pc != 0x528830u) { return; }
    }
    ctx->pc = 0x528830u;
label_528830:
    // 0x528830: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x528830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_528834:
    // 0x528834: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x528834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_528838:
    // 0x528838: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x528838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_52883c:
    // 0x52883c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x52883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_528840:
    // 0x528840: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x528840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_528844:
    // 0x528844: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x528844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_528848:
    // 0x528848: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x528848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_52884c:
    // 0x52884c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x52884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_528850:
    // 0x528850: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x528850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_528854:
    // 0x528854: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x528854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_528858:
    // 0x528858: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x528858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_52885c:
    // 0x52885c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x52885cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_528860:
    // 0x528860: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x528860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_528864:
    // 0x528864: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x528864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_528868:
    // 0x528868: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x528868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_52886c:
    // 0x52886c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x52886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_528870:
    // 0x528870: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x528870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_528874:
    // 0x528874: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x528874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_528878:
    // 0x528878: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x528878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_52887c:
    // 0x52887c: 0xc0582cc  jal         func_160B30
label_528880:
    if (ctx->pc == 0x528880u) {
        ctx->pc = 0x528880u;
            // 0x528880: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x528884u;
        goto label_528884;
    }
    ctx->pc = 0x52887Cu;
    SET_GPR_U32(ctx, 31, 0x528884u);
    ctx->pc = 0x528880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52887Cu;
            // 0x528880: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528884u; }
        if (ctx->pc != 0x528884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528884u; }
        if (ctx->pc != 0x528884u) { return; }
    }
    ctx->pc = 0x528884u;
label_528884:
    // 0x528884: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x528884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_528888:
    // 0x528888: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x528888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_52888c:
    // 0x52888c: 0x24636620  addiu       $v1, $v1, 0x6620
    ctx->pc = 0x52888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26144));
label_528890:
    // 0x528890: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x528890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_528894:
    // 0x528894: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x528894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_528898:
    // 0x528898: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x528898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52889c:
    // 0x52889c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52889cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5288a0:
    // 0x5288a0: 0xac44b5f8  sw          $a0, -0x4A08($v0)
    ctx->pc = 0x5288a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948344), GPR_U32(ctx, 4));
label_5288a4:
    // 0x5288a4: 0x24636630  addiu       $v1, $v1, 0x6630
    ctx->pc = 0x5288a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26160));
label_5288a8:
    // 0x5288a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5288a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5288ac:
    // 0x5288ac: 0x24426668  addiu       $v0, $v0, 0x6668
    ctx->pc = 0x5288acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26216));
label_5288b0:
    // 0x5288b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x5288b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_5288b4:
    // 0x5288b4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x5288b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_5288b8:
    // 0x5288b8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x5288b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_5288bc:
    // 0x5288bc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x5288bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_5288c0:
    // 0x5288c0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x5288c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_5288c4:
    // 0x5288c4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x5288c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_5288c8:
    // 0x5288c8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x5288c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_5288cc:
    // 0x5288cc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x5288ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_5288d0:
    // 0x5288d0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x5288d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_5288d4:
    // 0x5288d4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x5288d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_5288d8:
    // 0x5288d8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x5288d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_5288dc:
    // 0x5288dc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x5288dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_5288e0:
    // 0x5288e0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x5288e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_5288e4:
    // 0x5288e4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x5288e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_5288e8:
    // 0x5288e8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x5288e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_5288ec:
    // 0x5288ec: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x5288ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_5288f0:
    // 0x5288f0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x5288f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_5288f4:
    // 0x5288f4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x5288f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_5288f8:
    // 0x5288f8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x5288f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_5288fc:
    // 0x5288fc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_528900:
    if (ctx->pc == 0x528900u) {
        ctx->pc = 0x528904u;
        goto label_528904;
    }
    ctx->pc = 0x5288FCu;
    {
        const bool branch_taken_0x5288fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5288fc) {
            ctx->pc = 0x528990u;
            goto label_528990;
        }
    }
    ctx->pc = 0x528904u;
label_528904:
    // 0x528904: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x528904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_528908:
    // 0x528908: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x528908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_52890c:
    // 0x52890c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x52890cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_528910:
    // 0x528910: 0xc040138  jal         func_1004E0
label_528914:
    if (ctx->pc == 0x528914u) {
        ctx->pc = 0x528914u;
            // 0x528914: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x528918u;
        goto label_528918;
    }
    ctx->pc = 0x528910u;
    SET_GPR_U32(ctx, 31, 0x528918u);
    ctx->pc = 0x528914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528910u;
            // 0x528914: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528918u; }
        if (ctx->pc != 0x528918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528918u; }
        if (ctx->pc != 0x528918u) { return; }
    }
    ctx->pc = 0x528918u;
label_528918:
    // 0x528918: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x528918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_52891c:
    // 0x52891c: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x52891cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
label_528920:
    // 0x528920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x528920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_528924:
    // 0x528924: 0x24a589b0  addiu       $a1, $a1, -0x7650
    ctx->pc = 0x528924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937008));
label_528928:
    // 0x528928: 0x24c67e00  addiu       $a2, $a2, 0x7E00
    ctx->pc = 0x528928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32256));
label_52892c:
    // 0x52892c: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x52892cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_528930:
    // 0x528930: 0xc040840  jal         func_102100
label_528934:
    if (ctx->pc == 0x528934u) {
        ctx->pc = 0x528934u;
            // 0x528934: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528938u;
        goto label_528938;
    }
    ctx->pc = 0x528930u;
    SET_GPR_U32(ctx, 31, 0x528938u);
    ctx->pc = 0x528934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528930u;
            // 0x528934: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528938u; }
        if (ctx->pc != 0x528938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528938u; }
        if (ctx->pc != 0x528938u) { return; }
    }
    ctx->pc = 0x528938u;
label_528938:
    // 0x528938: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x528938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_52893c:
    // 0x52893c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x52893cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_528940:
    // 0x528940: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x528940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_528944:
    // 0x528944: 0xc0788fc  jal         func_1E23F0
label_528948:
    if (ctx->pc == 0x528948u) {
        ctx->pc = 0x528948u;
            // 0x528948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52894Cu;
        goto label_52894c;
    }
    ctx->pc = 0x528944u;
    SET_GPR_U32(ctx, 31, 0x52894Cu);
    ctx->pc = 0x528948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528944u;
            // 0x528948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52894Cu; }
        if (ctx->pc != 0x52894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52894Cu; }
        if (ctx->pc != 0x52894Cu) { return; }
    }
    ctx->pc = 0x52894Cu;
label_52894c:
    // 0x52894c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x52894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_528950:
    // 0x528950: 0xc0788fc  jal         func_1E23F0
label_528954:
    if (ctx->pc == 0x528954u) {
        ctx->pc = 0x528954u;
            // 0x528954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528958u;
        goto label_528958;
    }
    ctx->pc = 0x528950u;
    SET_GPR_U32(ctx, 31, 0x528958u);
    ctx->pc = 0x528954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528950u;
            // 0x528954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528958u; }
        if (ctx->pc != 0x528958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528958u; }
        if (ctx->pc != 0x528958u) { return; }
    }
    ctx->pc = 0x528958u;
label_528958:
    // 0x528958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x528958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52895c:
    // 0x52895c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x52895cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_528960:
    // 0x528960: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x528960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_528964:
    // 0x528964: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x528964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_528968:
    // 0x528968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x528968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52896c:
    // 0x52896c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x52896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_528970:
    // 0x528970: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x528970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_528974:
    // 0x528974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x528974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_528978:
    // 0x528978: 0xc0a997c  jal         func_2A65F0
label_52897c:
    if (ctx->pc == 0x52897Cu) {
        ctx->pc = 0x52897Cu;
            // 0x52897c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x528980u;
        goto label_528980;
    }
    ctx->pc = 0x528978u;
    SET_GPR_U32(ctx, 31, 0x528980u);
    ctx->pc = 0x52897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528978u;
            // 0x52897c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528980u; }
        if (ctx->pc != 0x528980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528980u; }
        if (ctx->pc != 0x528980u) { return; }
    }
    ctx->pc = 0x528980u;
label_528980:
    // 0x528980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x528980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_528984:
    // 0x528984: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x528984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_528988:
    // 0x528988: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_52898c:
    if (ctx->pc == 0x52898Cu) {
        ctx->pc = 0x52898Cu;
            // 0x52898c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x528990u;
        goto label_528990;
    }
    ctx->pc = 0x528988u;
    {
        const bool branch_taken_0x528988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528988u;
            // 0x52898c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528988) {
            ctx->pc = 0x52895Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52895c;
        }
    }
    ctx->pc = 0x528990u;
label_528990:
    // 0x528990: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x528990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_528994:
    // 0x528994: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x528994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_528998:
    // 0x528998: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x528998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52899c:
    // 0x52899c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52899cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5289a0:
    // 0x5289a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5289a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5289a4:
    // 0x5289a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5289a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5289a8:
    // 0x5289a8: 0x3e00008  jr          $ra
label_5289ac:
    if (ctx->pc == 0x5289ACu) {
        ctx->pc = 0x5289ACu;
            // 0x5289ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5289B0u;
        goto label_5289b0;
    }
    ctx->pc = 0x5289A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5289ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5289A8u;
            // 0x5289ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5289B0u;
label_5289b0:
    // 0x5289b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5289b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5289b4:
    // 0x5289b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5289b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5289b8:
    // 0x5289b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5289b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5289bc:
    // 0x5289bc: 0xc0aeebc  jal         func_2BBAF0
label_5289c0:
    if (ctx->pc == 0x5289C0u) {
        ctx->pc = 0x5289C0u;
            // 0x5289c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5289C4u;
        goto label_5289c4;
    }
    ctx->pc = 0x5289BCu;
    SET_GPR_U32(ctx, 31, 0x5289C4u);
    ctx->pc = 0x5289C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5289BCu;
            // 0x5289c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5289C4u; }
        if (ctx->pc != 0x5289C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5289C4u; }
        if (ctx->pc != 0x5289C4u) { return; }
    }
    ctx->pc = 0x5289C4u;
label_5289c4:
    // 0x5289c4: 0xc0aeeb4  jal         func_2BBAD0
label_5289c8:
    if (ctx->pc == 0x5289C8u) {
        ctx->pc = 0x5289C8u;
            // 0x5289c8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x5289CCu;
        goto label_5289cc;
    }
    ctx->pc = 0x5289C4u;
    SET_GPR_U32(ctx, 31, 0x5289CCu);
    ctx->pc = 0x5289C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5289C4u;
            // 0x5289c8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5289CCu; }
        if (ctx->pc != 0x5289CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5289CCu; }
        if (ctx->pc != 0x5289CCu) { return; }
    }
    ctx->pc = 0x5289CCu;
label_5289cc:
    // 0x5289cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5289ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5289d0:
    // 0x5289d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5289d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5289d4:
    // 0x5289d4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x5289d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_5289d8:
    // 0x5289d8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x5289d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_5289dc:
    // 0x5289dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5289dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5289e0:
    // 0x5289e0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x5289e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_5289e4:
    // 0x5289e4: 0xc0aeea4  jal         func_2BBA90
label_5289e8:
    if (ctx->pc == 0x5289E8u) {
        ctx->pc = 0x5289E8u;
            // 0x5289e8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x5289ECu;
        goto label_5289ec;
    }
    ctx->pc = 0x5289E4u;
    SET_GPR_U32(ctx, 31, 0x5289ECu);
    ctx->pc = 0x5289E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5289E4u;
            // 0x5289e8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5289ECu; }
        if (ctx->pc != 0x5289ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5289ECu; }
        if (ctx->pc != 0x5289ECu) { return; }
    }
    ctx->pc = 0x5289ECu;
label_5289ec:
    // 0x5289ec: 0xc0aee8c  jal         func_2BBA30
label_5289f0:
    if (ctx->pc == 0x5289F0u) {
        ctx->pc = 0x5289F0u;
            // 0x5289f0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x5289F4u;
        goto label_5289f4;
    }
    ctx->pc = 0x5289ECu;
    SET_GPR_U32(ctx, 31, 0x5289F4u);
    ctx->pc = 0x5289F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5289ECu;
            // 0x5289f0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5289F4u; }
        if (ctx->pc != 0x5289F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5289F4u; }
        if (ctx->pc != 0x5289F4u) { return; }
    }
    ctx->pc = 0x5289F4u;
label_5289f4:
    // 0x5289f4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x5289f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_5289f8:
    // 0x5289f8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x5289f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_5289fc:
    // 0x5289fc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x5289fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_528a00:
    // 0x528a00: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x528a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_528a04:
    // 0x528a04: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x528a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_528a08:
    // 0x528a08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x528a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_528a0c:
    // 0x528a0c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x528a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_528a10:
    // 0x528a10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x528a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_528a14:
    // 0x528a14: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x528a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_528a18:
    // 0x528a18: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x528a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_528a1c:
    // 0x528a1c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x528a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_528a20:
    // 0x528a20: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x528a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_528a24:
    // 0x528a24: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x528a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_528a28:
    // 0x528a28: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x528a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_528a2c:
    // 0x528a2c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x528a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_528a30:
    // 0x528a30: 0xc0775b8  jal         func_1DD6E0
label_528a34:
    if (ctx->pc == 0x528A34u) {
        ctx->pc = 0x528A34u;
            // 0x528a34: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x528A38u;
        goto label_528a38;
    }
    ctx->pc = 0x528A30u;
    SET_GPR_U32(ctx, 31, 0x528A38u);
    ctx->pc = 0x528A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528A30u;
            // 0x528a34: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528A38u; }
        if (ctx->pc != 0x528A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528A38u; }
        if (ctx->pc != 0x528A38u) { return; }
    }
    ctx->pc = 0x528A38u;
label_528a38:
    // 0x528a38: 0xc077314  jal         func_1DCC50
label_528a3c:
    if (ctx->pc == 0x528A3Cu) {
        ctx->pc = 0x528A3Cu;
            // 0x528a3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x528A40u;
        goto label_528a40;
    }
    ctx->pc = 0x528A38u;
    SET_GPR_U32(ctx, 31, 0x528A40u);
    ctx->pc = 0x528A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528A38u;
            // 0x528a3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528A40u; }
        if (ctx->pc != 0x528A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528A40u; }
        if (ctx->pc != 0x528A40u) { return; }
    }
    ctx->pc = 0x528A40u;
label_528a40:
    // 0x528a40: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x528a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_528a44:
    // 0x528a44: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x528a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_528a48:
    // 0x528a48: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x528a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_528a4c:
    // 0x528a4c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x528a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_528a50:
    // 0x528a50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x528a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_528a54:
    // 0x528a54: 0x24846580  addiu       $a0, $a0, 0x6580
    ctx->pc = 0x528a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
label_528a58:
    // 0x528a58: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x528a58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_528a5c:
    // 0x528a5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x528a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_528a60:
    // 0x528a60: 0x246365c0  addiu       $v1, $v1, 0x65C0
    ctx->pc = 0x528a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26048));
label_528a64:
    // 0x528a64: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x528a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_528a68:
    // 0x528a68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x528a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528a6c:
    // 0x528a6c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x528a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_528a70:
    // 0x528a70: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x528a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_528a74:
    // 0x528a74: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x528a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_528a78:
    // 0x528a78: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x528a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_528a7c:
    // 0x528a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x528a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_528a80:
    // 0x528a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_528a84:
    // 0x528a84: 0x3e00008  jr          $ra
label_528a88:
    if (ctx->pc == 0x528A88u) {
        ctx->pc = 0x528A88u;
            // 0x528a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x528A8Cu;
        goto label_528a8c;
    }
    ctx->pc = 0x528A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528A84u;
            // 0x528a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528A8Cu;
label_528a8c:
    // 0x528a8c: 0x0  nop
    ctx->pc = 0x528a8cu;
    // NOP
label_528a90:
    // 0x528a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x528a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_528a94:
    // 0x528a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x528a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_528a98:
    // 0x528a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x528a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_528a9c:
    // 0x528a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x528a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_528aa0:
    // 0x528aa0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x528aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_528aa4:
    // 0x528aa4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_528aa8:
    if (ctx->pc == 0x528AA8u) {
        ctx->pc = 0x528AA8u;
            // 0x528aa8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x528AACu;
        goto label_528aac;
    }
    ctx->pc = 0x528AA4u;
    {
        const bool branch_taken_0x528aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x528aa4) {
            ctx->pc = 0x528AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x528AA4u;
            // 0x528aa8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x528AC0u;
            goto label_528ac0;
        }
    }
    ctx->pc = 0x528AACu;
label_528aac:
    // 0x528aac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x528aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_528ab0:
    // 0x528ab0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x528ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_528ab4:
    // 0x528ab4: 0x320f809  jalr        $t9
label_528ab8:
    if (ctx->pc == 0x528AB8u) {
        ctx->pc = 0x528AB8u;
            // 0x528ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x528ABCu;
        goto label_528abc;
    }
    ctx->pc = 0x528AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x528ABCu);
        ctx->pc = 0x528AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528AB4u;
            // 0x528ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x528ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x528ABCu; }
            if (ctx->pc != 0x528ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x528ABCu;
label_528abc:
    // 0x528abc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x528abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_528ac0:
    // 0x528ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x528ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_528ac4:
    // 0x528ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_528ac8:
    // 0x528ac8: 0x3e00008  jr          $ra
label_528acc:
    if (ctx->pc == 0x528ACCu) {
        ctx->pc = 0x528ACCu;
            // 0x528acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x528AD0u;
        goto label_528ad0;
    }
    ctx->pc = 0x528AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528AC8u;
            // 0x528acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528AD0u;
label_528ad0:
    // 0x528ad0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x528ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_528ad4:
    // 0x528ad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x528ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_528ad8:
    // 0x528ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x528ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_528adc:
    // 0x528adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x528adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_528ae0:
    // 0x528ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x528ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_528ae4:
    // 0x528ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x528ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_528ae8:
    // 0x528ae8: 0xc0892d0  jal         func_224B40
label_528aec:
    if (ctx->pc == 0x528AECu) {
        ctx->pc = 0x528AECu;
            // 0x528aec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x528AF0u;
        goto label_528af0;
    }
    ctx->pc = 0x528AE8u;
    SET_GPR_U32(ctx, 31, 0x528AF0u);
    ctx->pc = 0x528AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528AE8u;
            // 0x528aec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528AF0u; }
        if (ctx->pc != 0x528AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528AF0u; }
        if (ctx->pc != 0x528AF0u) { return; }
    }
    ctx->pc = 0x528AF0u;
label_528af0:
    // 0x528af0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x528af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_528af4:
    // 0x528af4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x528af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_528af8:
    // 0x528af8: 0x8c42b5f8  lw          $v0, -0x4A08($v0)
    ctx->pc = 0x528af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948344)));
label_528afc:
    // 0x528afc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x528afcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_528b00:
    // 0x528b00: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x528b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_528b04:
    // 0x528b04: 0xc0b6e68  jal         func_2DB9A0
label_528b08:
    if (ctx->pc == 0x528B08u) {
        ctx->pc = 0x528B08u;
            // 0x528b08: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x528B0Cu;
        goto label_528b0c;
    }
    ctx->pc = 0x528B04u;
    SET_GPR_U32(ctx, 31, 0x528B0Cu);
    ctx->pc = 0x528B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528B04u;
            // 0x528b08: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B0Cu; }
        if (ctx->pc != 0x528B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B0Cu; }
        if (ctx->pc != 0x528B0Cu) { return; }
    }
    ctx->pc = 0x528B0Cu;
label_528b0c:
    // 0x528b0c: 0xc0b6dac  jal         func_2DB6B0
label_528b10:
    if (ctx->pc == 0x528B10u) {
        ctx->pc = 0x528B10u;
            // 0x528b10: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x528B14u;
        goto label_528b14;
    }
    ctx->pc = 0x528B0Cu;
    SET_GPR_U32(ctx, 31, 0x528B14u);
    ctx->pc = 0x528B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528B0Cu;
            // 0x528b10: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B14u; }
        if (ctx->pc != 0x528B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B14u; }
        if (ctx->pc != 0x528B14u) { return; }
    }
    ctx->pc = 0x528B14u;
label_528b14:
    // 0x528b14: 0xc0cac94  jal         func_32B250
label_528b18:
    if (ctx->pc == 0x528B18u) {
        ctx->pc = 0x528B18u;
            // 0x528b18: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x528B1Cu;
        goto label_528b1c;
    }
    ctx->pc = 0x528B14u;
    SET_GPR_U32(ctx, 31, 0x528B1Cu);
    ctx->pc = 0x528B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528B14u;
            // 0x528b18: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B1Cu; }
        if (ctx->pc != 0x528B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B1Cu; }
        if (ctx->pc != 0x528B1Cu) { return; }
    }
    ctx->pc = 0x528B1Cu;
label_528b1c:
    // 0x528b1c: 0xc0cac84  jal         func_32B210
label_528b20:
    if (ctx->pc == 0x528B20u) {
        ctx->pc = 0x528B20u;
            // 0x528b20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x528B24u;
        goto label_528b24;
    }
    ctx->pc = 0x528B1Cu;
    SET_GPR_U32(ctx, 31, 0x528B24u);
    ctx->pc = 0x528B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528B1Cu;
            // 0x528b20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B24u; }
        if (ctx->pc != 0x528B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B24u; }
        if (ctx->pc != 0x528B24u) { return; }
    }
    ctx->pc = 0x528B24u;
label_528b24:
    // 0x528b24: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x528b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_528b28:
    // 0x528b28: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x528b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_528b2c:
    // 0x528b2c: 0xc44cc920  lwc1        $f12, -0x36E0($v0)
    ctx->pc = 0x528b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_528b30:
    // 0x528b30: 0xc0a5a68  jal         func_2969A0
label_528b34:
    if (ctx->pc == 0x528B34u) {
        ctx->pc = 0x528B34u;
            // 0x528b34: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x528B38u;
        goto label_528b38;
    }
    ctx->pc = 0x528B30u;
    SET_GPR_U32(ctx, 31, 0x528B38u);
    ctx->pc = 0x528B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528B30u;
            // 0x528b34: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B38u; }
        if (ctx->pc != 0x528B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528B38u; }
        if (ctx->pc != 0x528B38u) { return; }
    }
    ctx->pc = 0x528B38u;
label_528b38:
    // 0x528b38: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x528b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_528b3c:
    // 0x528b3c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x528b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_528b40:
    // 0x528b40: 0x8c43b5f8  lw          $v1, -0x4A08($v0)
    ctx->pc = 0x528b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948344)));
label_528b44:
    // 0x528b44: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x528b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528b48:
    // 0x528b48: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x528b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_528b4c:
    // 0x528b4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x528b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_528b50:
    // 0x528b50: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x528b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528b54:
    // 0x528b54: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x528b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_528b58:
    // 0x528b58: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x528b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_528b5c:
    // 0x528b5c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x528b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_528b60:
    // 0x528b60: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x528b60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_528b64:
    // 0x528b64: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x528b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_528b68:
    // 0x528b68: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x528b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_528b6c:
    // 0x528b6c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x528b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_528b70:
    // 0x528b70: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x528b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_528b74:
    // 0x528b74: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x528b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_528b78:
    // 0x528b78: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x528b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_528b7c:
    // 0x528b7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_528b80:
    // 0x528b80: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x528b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_528b84:
    // 0x528b84: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x528b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_528b88:
    // 0x528b88: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x528b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_528b8c:
    // 0x528b8c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x528b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_528b90:
    // 0x528b90: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x528b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_528b94:
    // 0x528b94: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x528b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_528b98:
    // 0x528b98: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x528b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_528b9c:
    // 0x528b9c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x528b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_528ba0:
    // 0x528ba0: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x528ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_528ba4:
    // 0x528ba4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x528ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_528ba8:
    // 0x528ba8: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x528ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_528bac:
    // 0x528bac: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x528bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528bb0:
    // 0x528bb0: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x528bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_528bb4:
    // 0x528bb4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x528bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_528bb8:
    // 0x528bb8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x528bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_528bbc:
    // 0x528bbc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x528bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528bc0:
    // 0x528bc0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x528bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_528bc4:
    // 0x528bc4: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x528bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_528bc8:
    // 0x528bc8: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x528bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_528bcc:
    // 0x528bcc: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x528bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_528bd0:
    // 0x528bd0: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x528bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528bd4:
    // 0x528bd4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x528bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_528bd8:
    // 0x528bd8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x528bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528bdc:
    // 0x528bdc: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x528bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_528be0:
    // 0x528be0: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x528be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_528be4:
    // 0x528be4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x528be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_528be8:
    // 0x528be8: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x528be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_528bec:
    // 0x528bec: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x528becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_528bf0:
    // 0x528bf0: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x528bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_528bf4:
    // 0x528bf4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x528bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528bf8:
    // 0x528bf8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x528bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_528bfc:
    // 0x528bfc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x528bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528c00:
    // 0x528c00: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x528c00u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_528c04:
    // 0x528c04: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x528c04u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_528c08:
    // 0x528c08: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x528c08u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_528c0c:
    // 0x528c0c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x528c0cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_528c10:
    // 0x528c10: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x528c10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_528c14:
    // 0x528c14: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x528c14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_528c18:
    // 0x528c18: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x528c18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_528c1c:
    // 0x528c1c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x528c1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_528c20:
    // 0x528c20: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x528c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_528c24:
    // 0x528c24: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x528c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_528c28:
    // 0x528c28: 0xc0a7a88  jal         func_29EA20
label_528c2c:
    if (ctx->pc == 0x528C2Cu) {
        ctx->pc = 0x528C2Cu;
            // 0x528c2c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x528C30u;
        goto label_528c30;
    }
    ctx->pc = 0x528C28u;
    SET_GPR_U32(ctx, 31, 0x528C30u);
    ctx->pc = 0x528C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528C28u;
            // 0x528c2c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528C30u; }
        if (ctx->pc != 0x528C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528C30u; }
        if (ctx->pc != 0x528C30u) { return; }
    }
    ctx->pc = 0x528C30u;
label_528c30:
    // 0x528c30: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x528c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_528c34:
    // 0x528c34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x528c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_528c38:
    // 0x528c38: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_528c3c:
    if (ctx->pc == 0x528C3Cu) {
        ctx->pc = 0x528C3Cu;
            // 0x528c3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x528C40u;
        goto label_528c40;
    }
    ctx->pc = 0x528C38u;
    {
        const bool branch_taken_0x528c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x528C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528C38u;
            // 0x528c3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528c38) {
            ctx->pc = 0x528C88u;
            goto label_528c88;
        }
    }
    ctx->pc = 0x528C40u;
label_528c40:
    // 0x528c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x528c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528c44:
    // 0x528c44: 0xc088ef4  jal         func_223BD0
label_528c48:
    if (ctx->pc == 0x528C48u) {
        ctx->pc = 0x528C48u;
            // 0x528c48: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x528C4Cu;
        goto label_528c4c;
    }
    ctx->pc = 0x528C44u;
    SET_GPR_U32(ctx, 31, 0x528C4Cu);
    ctx->pc = 0x528C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528C44u;
            // 0x528c48: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528C4Cu; }
        if (ctx->pc != 0x528C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528C4Cu; }
        if (ctx->pc != 0x528C4Cu) { return; }
    }
    ctx->pc = 0x528C4Cu;
label_528c4c:
    // 0x528c4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x528c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_528c50:
    // 0x528c50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x528c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_528c54:
    // 0x528c54: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x528c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_528c58:
    // 0x528c58: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x528c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_528c5c:
    // 0x528c5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x528c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_528c60:
    // 0x528c60: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x528c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_528c64:
    // 0x528c64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_528c68:
    // 0x528c68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x528c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_528c6c:
    // 0x528c6c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x528c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_528c70:
    // 0x528c70: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x528c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_528c74:
    // 0x528c74: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x528c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_528c78:
    // 0x528c78: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x528c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_528c7c:
    // 0x528c7c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x528c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_528c80:
    // 0x528c80: 0xc088b38  jal         func_222CE0
label_528c84:
    if (ctx->pc == 0x528C84u) {
        ctx->pc = 0x528C84u;
            // 0x528c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528C88u;
        goto label_528c88;
    }
    ctx->pc = 0x528C80u;
    SET_GPR_U32(ctx, 31, 0x528C88u);
    ctx->pc = 0x528C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528C80u;
            // 0x528c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528C88u; }
        if (ctx->pc != 0x528C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528C88u; }
        if (ctx->pc != 0x528C88u) { return; }
    }
    ctx->pc = 0x528C88u;
label_528c88:
    // 0x528c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x528c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528c8c:
    // 0x528c8c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x528c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_528c90:
    // 0x528c90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x528c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_528c94:
    // 0x528c94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x528c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528c98:
    // 0x528c98: 0xc08914c  jal         func_224530
label_528c9c:
    if (ctx->pc == 0x528C9Cu) {
        ctx->pc = 0x528C9Cu;
            // 0x528c9c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x528CA0u;
        goto label_528ca0;
    }
    ctx->pc = 0x528C98u;
    SET_GPR_U32(ctx, 31, 0x528CA0u);
    ctx->pc = 0x528C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528C98u;
            // 0x528c9c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528CA0u; }
        if (ctx->pc != 0x528CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528CA0u; }
        if (ctx->pc != 0x528CA0u) { return; }
    }
    ctx->pc = 0x528CA0u;
label_528ca0:
    // 0x528ca0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x528ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528ca4:
    // 0x528ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x528ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528ca8:
    // 0x528ca8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x528ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_528cac:
    // 0x528cac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x528cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_528cb0:
    // 0x528cb0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x528cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528cb4:
    // 0x528cb4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x528cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_528cb8:
    // 0x528cb8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x528cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_528cbc:
    // 0x528cbc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x528cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_528cc0:
    // 0x528cc0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x528cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_528cc4:
    // 0x528cc4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x528cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_528cc8:
    // 0x528cc8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x528cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_528ccc:
    // 0x528ccc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x528cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528cd0:
    // 0x528cd0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x528cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_528cd4:
    // 0x528cd4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x528cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528cd8:
    // 0x528cd8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x528cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_528cdc:
    // 0x528cdc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x528cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_528ce0:
    // 0x528ce0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x528ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_528ce4:
    // 0x528ce4: 0xc0892b0  jal         func_224AC0
label_528ce8:
    if (ctx->pc == 0x528CE8u) {
        ctx->pc = 0x528CE8u;
            // 0x528ce8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x528CECu;
        goto label_528cec;
    }
    ctx->pc = 0x528CE4u;
    SET_GPR_U32(ctx, 31, 0x528CECu);
    ctx->pc = 0x528CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528CE4u;
            // 0x528ce8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528CECu; }
        if (ctx->pc != 0x528CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528CECu; }
        if (ctx->pc != 0x528CECu) { return; }
    }
    ctx->pc = 0x528CECu;
label_528cec:
    // 0x528cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x528cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528cf0:
    // 0x528cf0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x528cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_528cf4:
    // 0x528cf4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x528cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_528cf8:
    // 0x528cf8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x528cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_528cfc:
    // 0x528cfc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x528cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_528d00:
    // 0x528d00: 0xc0891d8  jal         func_224760
label_528d04:
    if (ctx->pc == 0x528D04u) {
        ctx->pc = 0x528D04u;
            // 0x528d04: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x528D08u;
        goto label_528d08;
    }
    ctx->pc = 0x528D00u;
    SET_GPR_U32(ctx, 31, 0x528D08u);
    ctx->pc = 0x528D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528D00u;
            // 0x528d04: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D08u; }
        if (ctx->pc != 0x528D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D08u; }
        if (ctx->pc != 0x528D08u) { return; }
    }
    ctx->pc = 0x528D08u;
label_528d08:
    // 0x528d08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_528d0c:
    // 0x528d0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x528d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528d10:
    // 0x528d10: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x528d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_528d14:
    // 0x528d14: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x528d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_528d18:
    // 0x528d18: 0xc08c164  jal         func_230590
label_528d1c:
    if (ctx->pc == 0x528D1Cu) {
        ctx->pc = 0x528D1Cu;
            // 0x528d1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x528D20u;
        goto label_528d20;
    }
    ctx->pc = 0x528D18u;
    SET_GPR_U32(ctx, 31, 0x528D20u);
    ctx->pc = 0x528D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528D18u;
            // 0x528d1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D20u; }
        if (ctx->pc != 0x528D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D20u; }
        if (ctx->pc != 0x528D20u) { return; }
    }
    ctx->pc = 0x528D20u;
label_528d20:
    // 0x528d20: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x528d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_528d24:
    // 0x528d24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_528d28:
    // 0x528d28: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x528d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_528d2c:
    // 0x528d2c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x528d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_528d30:
    // 0x528d30: 0xc0a7a88  jal         func_29EA20
label_528d34:
    if (ctx->pc == 0x528D34u) {
        ctx->pc = 0x528D34u;
            // 0x528d34: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x528D38u;
        goto label_528d38;
    }
    ctx->pc = 0x528D30u;
    SET_GPR_U32(ctx, 31, 0x528D38u);
    ctx->pc = 0x528D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528D30u;
            // 0x528d34: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D38u; }
        if (ctx->pc != 0x528D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D38u; }
        if (ctx->pc != 0x528D38u) { return; }
    }
    ctx->pc = 0x528D38u;
label_528d38:
    // 0x528d38: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x528d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_528d3c:
    // 0x528d3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x528d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_528d40:
    // 0x528d40: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_528d44:
    if (ctx->pc == 0x528D44u) {
        ctx->pc = 0x528D44u;
            // 0x528d44: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x528D48u;
        goto label_528d48;
    }
    ctx->pc = 0x528D40u;
    {
        const bool branch_taken_0x528d40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x528D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528D40u;
            // 0x528d44: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528d40) {
            ctx->pc = 0x528D64u;
            goto label_528d64;
        }
    }
    ctx->pc = 0x528D48u;
label_528d48:
    // 0x528d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x528d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_528d4c:
    // 0x528d4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x528d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528d50:
    // 0x528d50: 0xc0869d0  jal         func_21A740
label_528d54:
    if (ctx->pc == 0x528D54u) {
        ctx->pc = 0x528D54u;
            // 0x528d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528D58u;
        goto label_528d58;
    }
    ctx->pc = 0x528D50u;
    SET_GPR_U32(ctx, 31, 0x528D58u);
    ctx->pc = 0x528D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528D50u;
            // 0x528d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D58u; }
        if (ctx->pc != 0x528D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D58u; }
        if (ctx->pc != 0x528D58u) { return; }
    }
    ctx->pc = 0x528D58u;
label_528d58:
    // 0x528d58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x528d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_528d5c:
    // 0x528d5c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x528d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_528d60:
    // 0x528d60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x528d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_528d64:
    // 0x528d64: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x528d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_528d68:
    // 0x528d68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_528d6c:
    // 0x528d6c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x528d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_528d70:
    // 0x528d70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x528d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_528d74:
    // 0x528d74: 0xc08c650  jal         func_231940
label_528d78:
    if (ctx->pc == 0x528D78u) {
        ctx->pc = 0x528D78u;
            // 0x528d78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528D7Cu;
        goto label_528d7c;
    }
    ctx->pc = 0x528D74u;
    SET_GPR_U32(ctx, 31, 0x528D7Cu);
    ctx->pc = 0x528D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528D74u;
            // 0x528d78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D7Cu; }
        if (ctx->pc != 0x528D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528D7Cu; }
        if (ctx->pc != 0x528D7Cu) { return; }
    }
    ctx->pc = 0x528D7Cu;
label_528d7c:
    // 0x528d7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x528d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_528d80:
    // 0x528d80: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x528d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_528d84:
    // 0x528d84: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x528d84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_528d88:
    // 0x528d88: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x528d88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_528d8c:
    // 0x528d8c: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x528d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_528d90:
    // 0x528d90: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x528d90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_528d94:
    // 0x528d94: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x528d94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_528d98:
    // 0x528d98: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x528d98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_528d9c:
    // 0x528d9c: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x528d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_528da0:
    // 0x528da0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x528da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_528da4:
    // 0x528da4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x528da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_528da8:
    // 0x528da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x528da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_528dac:
    // 0x528dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_528db0:
    // 0x528db0: 0x3e00008  jr          $ra
label_528db4:
    if (ctx->pc == 0x528DB4u) {
        ctx->pc = 0x528DB4u;
            // 0x528db4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x528DB8u;
        goto label_528db8;
    }
    ctx->pc = 0x528DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528DB0u;
            // 0x528db4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528DB8u;
label_528db8:
    // 0x528db8: 0x0  nop
    ctx->pc = 0x528db8u;
    // NOP
label_528dbc:
    // 0x528dbc: 0x0  nop
    ctx->pc = 0x528dbcu;
    // NOP
label_528dc0:
    // 0x528dc0: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x528dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528dc4:
    // 0x528dc4: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x528dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
label_528dc8:
    // 0x528dc8: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x528dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528dcc:
    // 0x528dcc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x528dccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_528dd0:
    // 0x528dd0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x528dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_528dd4:
    // 0x528dd4: 0x3e00008  jr          $ra
label_528dd8:
    if (ctx->pc == 0x528DD8u) {
        ctx->pc = 0x528DD8u;
            // 0x528dd8: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x528DDCu;
        goto label_528ddc;
    }
    ctx->pc = 0x528DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528DD4u;
            // 0x528dd8: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528DDCu;
label_528ddc:
    // 0x528ddc: 0x0  nop
    ctx->pc = 0x528ddcu;
    // NOP
label_528de0:
    // 0x528de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x528de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_528de4:
    // 0x528de4: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x528de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_528de8:
    // 0x528de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x528de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_528dec:
    // 0x528dec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x528decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_528df0:
    // 0x528df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x528df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_528df4:
    // 0x528df4: 0x80a50e3f  lb          $a1, 0xE3F($a1)
    ctx->pc = 0x528df4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3647)));
label_528df8:
    // 0x528df8: 0x8c86b5f8  lw          $a2, -0x4A08($a0)
    ctx->pc = 0x528df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948344)));
label_528dfc:
    // 0x528dfc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x528dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_528e00:
    // 0x528e00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x528e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_528e04:
    // 0x528e04: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x528e04u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_528e08:
    // 0x528e08: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x528e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_528e0c:
    // 0x528e0c: 0x8cc50074  lw          $a1, 0x74($a2)
    ctx->pc = 0x528e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_528e10:
    // 0x528e10: 0xc462077c  lwc1        $f2, 0x77C($v1)
    ctx->pc = 0x528e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_528e14:
    // 0x528e14: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x528e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_528e18:
    // 0x528e18: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x528e18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_528e1c:
    // 0x528e1c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x528e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_528e20:
    // 0x528e20: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x528e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_528e24:
    // 0x528e24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x528e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_528e28:
    // 0x528e28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x528e28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_528e2c:
    // 0x528e2c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x528e2cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_528e30:
    // 0x528e30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x528e30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_528e34:
    // 0x528e34: 0x0  nop
    ctx->pc = 0x528e34u;
    // NOP
label_528e38:
    // 0x528e38: 0x0  nop
    ctx->pc = 0x528e38u;
    // NOP
label_528e3c:
    // 0x528e3c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x528e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_528e40:
    // 0x528e40: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
label_528e44:
    if (ctx->pc == 0x528E44u) {
        ctx->pc = 0x528E44u;
            // 0x528e44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x528E48u;
        goto label_528e48;
    }
    ctx->pc = 0x528E40u;
    {
        const bool branch_taken_0x528e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x528e40) {
            ctx->pc = 0x528E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x528E40u;
            // 0x528e44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x528E8Cu;
            goto label_528e8c;
        }
    }
    ctx->pc = 0x528E48u;
label_528e48:
    // 0x528e48: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x528e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_528e4c:
    // 0x528e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x528e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_528e50:
    // 0x528e50: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_528e54:
    if (ctx->pc == 0x528E54u) {
        ctx->pc = 0x528E58u;
        goto label_528e58;
    }
    ctx->pc = 0x528E50u;
    {
        const bool branch_taken_0x528e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x528e50) {
            ctx->pc = 0x528E88u;
            goto label_528e88;
        }
    }
    ctx->pc = 0x528E58u;
label_528e58:
    // 0x528e58: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x528e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_528e5c:
    // 0x528e5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_528e60:
    // 0x528e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x528e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528e64:
    // 0x528e64: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x528e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_528e68:
    // 0x528e68: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x528e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_528e6c:
    // 0x528e6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x528e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_528e70:
    // 0x528e70: 0xc08bff0  jal         func_22FFC0
label_528e74:
    if (ctx->pc == 0x528E74u) {
        ctx->pc = 0x528E74u;
            // 0x528e74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528E78u;
        goto label_528e78;
    }
    ctx->pc = 0x528E70u;
    SET_GPR_U32(ctx, 31, 0x528E78u);
    ctx->pc = 0x528E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528E70u;
            // 0x528e74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528E78u; }
        if (ctx->pc != 0x528E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528E78u; }
        if (ctx->pc != 0x528E78u) { return; }
    }
    ctx->pc = 0x528E78u;
label_528e78:
    // 0x528e78: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x528e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528e7c:
    // 0x528e7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x528e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_528e80:
    // 0x528e80: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x528e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_528e84:
    // 0x528e84: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x528e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_528e88:
    // 0x528e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x528e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_528e8c:
    // 0x528e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_528e90:
    // 0x528e90: 0x3e00008  jr          $ra
label_528e94:
    if (ctx->pc == 0x528E94u) {
        ctx->pc = 0x528E94u;
            // 0x528e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x528E98u;
        goto label_528e98;
    }
    ctx->pc = 0x528E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528E90u;
            // 0x528e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528E98u;
label_528e98:
    // 0x528e98: 0x0  nop
    ctx->pc = 0x528e98u;
    // NOP
label_528e9c:
    // 0x528e9c: 0x0  nop
    ctx->pc = 0x528e9cu;
    // NOP
label_528ea0:
    // 0x528ea0: 0x3e00008  jr          $ra
label_528ea4:
    if (ctx->pc == 0x528EA4u) {
        ctx->pc = 0x528EA4u;
            // 0x528ea4: 0x24025dd4  addiu       $v0, $zero, 0x5DD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24020));
        ctx->pc = 0x528EA8u;
        goto label_528ea8;
    }
    ctx->pc = 0x528EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528EA0u;
            // 0x528ea4: 0x24025dd4  addiu       $v0, $zero, 0x5DD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528EA8u;
label_528ea8:
    // 0x528ea8: 0x0  nop
    ctx->pc = 0x528ea8u;
    // NOP
label_528eac:
    // 0x528eac: 0x0  nop
    ctx->pc = 0x528eacu;
    // NOP
label_528eb0:
    // 0x528eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x528eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_528eb4:
    // 0x528eb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x528eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_528eb8:
    // 0x528eb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x528eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_528ebc:
    // 0x528ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x528ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_528ec0:
    // 0x528ec0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x528ec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_528ec4:
    // 0x528ec4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x528ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_528ec8:
    // 0x528ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x528ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_528ecc:
    // 0x528ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x528eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_528ed0:
    // 0x528ed0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x528ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_528ed4:
    // 0x528ed4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_528ed8:
    if (ctx->pc == 0x528ED8u) {
        ctx->pc = 0x528ED8u;
            // 0x528ed8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528EDCu;
        goto label_528edc;
    }
    ctx->pc = 0x528ED4u;
    {
        const bool branch_taken_0x528ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x528ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528ED4u;
            // 0x528ed8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528ed4) {
            ctx->pc = 0x528F18u;
            goto label_528f18;
        }
    }
    ctx->pc = 0x528EDCu;
label_528edc:
    // 0x528edc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x528edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528ee0:
    // 0x528ee0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x528ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528ee4:
    // 0x528ee4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x528ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528ee8:
    // 0x528ee8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x528ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_528eec:
    // 0x528eec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x528eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_528ef0:
    // 0x528ef0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x528ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_528ef4:
    // 0x528ef4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x528ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_528ef8:
    // 0x528ef8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x528ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_528efc:
    // 0x528efc: 0x320f809  jalr        $t9
label_528f00:
    if (ctx->pc == 0x528F00u) {
        ctx->pc = 0x528F04u;
        goto label_528f04;
    }
    ctx->pc = 0x528EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x528F04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x528F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x528F04u; }
            if (ctx->pc != 0x528F04u) { return; }
        }
        }
    }
    ctx->pc = 0x528F04u;
label_528f04:
    // 0x528f04: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x528f04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_528f08:
    // 0x528f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x528f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_528f0c:
    // 0x528f0c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x528f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_528f10:
    // 0x528f10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_528f14:
    if (ctx->pc == 0x528F14u) {
        ctx->pc = 0x528F14u;
            // 0x528f14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x528F18u;
        goto label_528f18;
    }
    ctx->pc = 0x528F10u;
    {
        const bool branch_taken_0x528f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x528F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528F10u;
            // 0x528f14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528f10) {
            ctx->pc = 0x528EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_528ee8;
        }
    }
    ctx->pc = 0x528F18u;
label_528f18:
    // 0x528f18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x528f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_528f1c:
    // 0x528f1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x528f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_528f20:
    // 0x528f20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x528f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_528f24:
    // 0x528f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x528f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_528f28:
    // 0x528f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x528f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_528f2c:
    // 0x528f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x528f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_528f30:
    // 0x528f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_528f34:
    // 0x528f34: 0x3e00008  jr          $ra
label_528f38:
    if (ctx->pc == 0x528F38u) {
        ctx->pc = 0x528F38u;
            // 0x528f38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x528F3Cu;
        goto label_528f3c;
    }
    ctx->pc = 0x528F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528F34u;
            // 0x528f38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528F3Cu;
label_528f3c:
    // 0x528f3c: 0x0  nop
    ctx->pc = 0x528f3cu;
    // NOP
label_528f40:
    // 0x528f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x528f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_528f44:
    // 0x528f44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x528f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_528f48:
    // 0x528f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x528f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_528f4c:
    // 0x528f4c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x528f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_528f50:
    // 0x528f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x528f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_528f54:
    // 0x528f54: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x528f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_528f58:
    // 0x528f58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x528f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_528f5c:
    // 0x528f5c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x528f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_528f60:
    // 0x528f60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x528f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_528f64:
    // 0x528f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x528f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_528f68:
    // 0x528f68: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x528f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_528f6c:
    // 0x528f6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x528f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_528f70:
    // 0x528f70: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x528f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_528f74:
    // 0x528f74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x528f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_528f78:
    // 0x528f78: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x528f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_528f7c:
    // 0x528f7c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x528f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_528f80:
    // 0x528f80: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x528f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_528f84:
    // 0x528f84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x528f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_528f88:
    // 0x528f88: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x528f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_528f8c:
    // 0x528f8c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x528f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_528f90:
    // 0x528f90: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x528f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_528f94:
    // 0x528f94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x528f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_528f98:
    // 0x528f98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x528f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_528f9c:
    // 0x528f9c: 0xc0a997c  jal         func_2A65F0
label_528fa0:
    if (ctx->pc == 0x528FA0u) {
        ctx->pc = 0x528FA0u;
            // 0x528fa0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x528FA4u;
        goto label_528fa4;
    }
    ctx->pc = 0x528F9Cu;
    SET_GPR_U32(ctx, 31, 0x528FA4u);
    ctx->pc = 0x528FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528F9Cu;
            // 0x528fa0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528FA4u; }
        if (ctx->pc != 0x528FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528FA4u; }
        if (ctx->pc != 0x528FA4u) { return; }
    }
    ctx->pc = 0x528FA4u;
label_528fa4:
    // 0x528fa4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x528fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_528fa8:
    // 0x528fa8: 0xc0d879c  jal         func_361E70
label_528fac:
    if (ctx->pc == 0x528FACu) {
        ctx->pc = 0x528FACu;
            // 0x528fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528FB0u;
        goto label_528fb0;
    }
    ctx->pc = 0x528FA8u;
    SET_GPR_U32(ctx, 31, 0x528FB0u);
    ctx->pc = 0x528FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528FA8u;
            // 0x528fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528FB0u; }
        if (ctx->pc != 0x528FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528FB0u; }
        if (ctx->pc != 0x528FB0u) { return; }
    }
    ctx->pc = 0x528FB0u;
label_528fb0:
    // 0x528fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x528fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_528fb4:
    // 0x528fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_528fb8:
    // 0x528fb8: 0x3e00008  jr          $ra
label_528fbc:
    if (ctx->pc == 0x528FBCu) {
        ctx->pc = 0x528FBCu;
            // 0x528fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x528FC0u;
        goto label_528fc0;
    }
    ctx->pc = 0x528FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528FB8u;
            // 0x528fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528FC0u;
label_528fc0:
    // 0x528fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x528fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_528fc4:
    // 0x528fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x528fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_528fc8:
    // 0x528fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x528fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_528fcc:
    // 0x528fcc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x528fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_528fd0:
    // 0x528fd0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_528fd4:
    if (ctx->pc == 0x528FD4u) {
        ctx->pc = 0x528FD4u;
            // 0x528fd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528FD8u;
        goto label_528fd8;
    }
    ctx->pc = 0x528FD0u;
    {
        const bool branch_taken_0x528fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x528FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528FD0u;
            // 0x528fd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528fd0) {
            ctx->pc = 0x5290F0u;
            goto label_5290f0;
        }
    }
    ctx->pc = 0x528FD8u;
label_528fd8:
    // 0x528fd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x528fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_528fdc:
    // 0x528fdc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x528fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_528fe0:
    // 0x528fe0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x528fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_528fe4:
    // 0x528fe4: 0xc075128  jal         func_1D44A0
label_528fe8:
    if (ctx->pc == 0x528FE8u) {
        ctx->pc = 0x528FE8u;
            // 0x528fe8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x528FECu;
        goto label_528fec;
    }
    ctx->pc = 0x528FE4u;
    SET_GPR_U32(ctx, 31, 0x528FECu);
    ctx->pc = 0x528FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528FE4u;
            // 0x528fe8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528FECu; }
        if (ctx->pc != 0x528FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528FECu; }
        if (ctx->pc != 0x528FECu) { return; }
    }
    ctx->pc = 0x528FECu;
label_528fec:
    // 0x528fec: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x528fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_528ff0:
    // 0x528ff0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_528ff4:
    // 0x528ff4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x528ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_528ff8:
    // 0x528ff8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x528ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_528ffc:
    // 0x528ffc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x528ffcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_529000:
    // 0x529000: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_529004:
    if (ctx->pc == 0x529004u) {
        ctx->pc = 0x529004u;
            // 0x529004: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x529008u;
        goto label_529008;
    }
    ctx->pc = 0x529000u;
    {
        const bool branch_taken_0x529000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x529004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529000u;
            // 0x529004: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529000) {
            ctx->pc = 0x529010u;
            goto label_529010;
        }
    }
    ctx->pc = 0x529008u;
label_529008:
    // 0x529008: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x529008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52900c:
    // 0x52900c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x52900cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_529010:
    // 0x529010: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x529010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_529014:
    // 0x529014: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x529014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_529018:
    // 0x529018: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x529018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_52901c:
    // 0x52901c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_529020:
    // 0x529020: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x529020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_529024:
    // 0x529024: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_529028:
    if (ctx->pc == 0x529028u) {
        ctx->pc = 0x529028u;
            // 0x529028: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52902Cu;
        goto label_52902c;
    }
    ctx->pc = 0x529024u;
    {
        const bool branch_taken_0x529024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x529024) {
            ctx->pc = 0x529028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529024u;
            // 0x529028: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529038u;
            goto label_529038;
        }
    }
    ctx->pc = 0x52902Cu;
label_52902c:
    // 0x52902c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52902cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_529030:
    // 0x529030: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x529030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_529034:
    // 0x529034: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x529034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_529038:
    // 0x529038: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x529038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52903c:
    // 0x52903c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x52903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_529040:
    // 0x529040: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x529040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_529044:
    // 0x529044: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x529044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_529048:
    // 0x529048: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52904c:
    if (ctx->pc == 0x52904Cu) {
        ctx->pc = 0x52904Cu;
            // 0x52904c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x529050u;
        goto label_529050;
    }
    ctx->pc = 0x529048u;
    {
        const bool branch_taken_0x529048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x529048) {
            ctx->pc = 0x52904Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529048u;
            // 0x52904c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52905Cu;
            goto label_52905c;
        }
    }
    ctx->pc = 0x529050u;
label_529050:
    // 0x529050: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x529050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_529054:
    // 0x529054: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x529054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_529058:
    // 0x529058: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x529058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52905c:
    // 0x52905c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52905cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_529060:
    // 0x529060: 0x320f809  jalr        $t9
label_529064:
    if (ctx->pc == 0x529064u) {
        ctx->pc = 0x529064u;
            // 0x529064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529068u;
        goto label_529068;
    }
    ctx->pc = 0x529060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x529068u);
        ctx->pc = 0x529064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529060u;
            // 0x529064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x529068u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x529068u; }
            if (ctx->pc != 0x529068u) { return; }
        }
        }
    }
    ctx->pc = 0x529068u;
label_529068:
    // 0x529068: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x529068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52906c:
    // 0x52906c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52906cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_529070:
    // 0x529070: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x529070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_529074:
    // 0x529074: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x529074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_529078:
    // 0x529078: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x529078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52907c:
    // 0x52907c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52907cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_529080:
    // 0x529080: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_529084:
    if (ctx->pc == 0x529084u) {
        ctx->pc = 0x529084u;
            // 0x529084: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x529088u;
        goto label_529088;
    }
    ctx->pc = 0x529080u;
    {
        const bool branch_taken_0x529080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x529080) {
            ctx->pc = 0x529084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529080u;
            // 0x529084: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529094u;
            goto label_529094;
        }
    }
    ctx->pc = 0x529088u;
label_529088:
    // 0x529088: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x529088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52908c:
    // 0x52908c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x52908cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_529090:
    // 0x529090: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x529090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_529094:
    // 0x529094: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x529094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_529098:
    // 0x529098: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x529098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_52909c:
    // 0x52909c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_5290a0:
    // 0x5290a0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x5290a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5290a4:
    // 0x5290a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5290a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5290a8:
    // 0x5290a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5290ac:
    if (ctx->pc == 0x5290ACu) {
        ctx->pc = 0x5290B0u;
        goto label_5290b0;
    }
    ctx->pc = 0x5290A8u;
    {
        const bool branch_taken_0x5290a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5290a8) {
            ctx->pc = 0x5290B8u;
            goto label_5290b8;
        }
    }
    ctx->pc = 0x5290B0u;
label_5290b0:
    // 0x5290b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5290b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5290b4:
    // 0x5290b4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x5290b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_5290b8:
    // 0x5290b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5290b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5290bc:
    // 0x5290bc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x5290bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_5290c0:
    // 0x5290c0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x5290c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5290c4:
    // 0x5290c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5290c8:
    if (ctx->pc == 0x5290C8u) {
        ctx->pc = 0x5290CCu;
        goto label_5290cc;
    }
    ctx->pc = 0x5290C4u;
    {
        const bool branch_taken_0x5290c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5290c4) {
            ctx->pc = 0x5290D4u;
            goto label_5290d4;
        }
    }
    ctx->pc = 0x5290CCu;
label_5290cc:
    // 0x5290cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5290ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5290d0:
    // 0x5290d0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x5290d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_5290d4:
    // 0x5290d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5290d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5290d8:
    // 0x5290d8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x5290d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_5290dc:
    // 0x5290dc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x5290dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5290e0:
    // 0x5290e0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5290e4:
    if (ctx->pc == 0x5290E4u) {
        ctx->pc = 0x5290E4u;
            // 0x5290e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x5290E8u;
        goto label_5290e8;
    }
    ctx->pc = 0x5290E0u;
    {
        const bool branch_taken_0x5290e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5290e0) {
            ctx->pc = 0x5290E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5290E0u;
            // 0x5290e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5290F4u;
            goto label_5290f4;
        }
    }
    ctx->pc = 0x5290E8u;
label_5290e8:
    // 0x5290e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5290e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5290ec:
    // 0x5290ec: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x5290ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_5290f0:
    // 0x5290f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5290f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5290f4:
    // 0x5290f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5290f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5290f8:
    // 0x5290f8: 0x3e00008  jr          $ra
label_5290fc:
    if (ctx->pc == 0x5290FCu) {
        ctx->pc = 0x5290FCu;
            // 0x5290fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x529100u;
        goto label_529100;
    }
    ctx->pc = 0x5290F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5290FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5290F8u;
            // 0x5290fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529100u;
label_529100:
    // 0x529100: 0x814a194  j           func_528650
label_529104:
    if (ctx->pc == 0x529104u) {
        ctx->pc = 0x529104u;
            // 0x529104: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x529108u;
        goto label_529108;
    }
    ctx->pc = 0x529100u;
    ctx->pc = 0x529104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529100u;
            // 0x529104: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x528650u;
    {
        auto targetFn = runtime->lookupFunction(0x528650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x529108u;
label_529108:
    // 0x529108: 0x0  nop
    ctx->pc = 0x529108u;
    // NOP
label_52910c:
    // 0x52910c: 0x0  nop
    ctx->pc = 0x52910cu;
    // NOP
label_529110:
    // 0x529110: 0x8149f28  j           func_527CA0
label_529114:
    if (ctx->pc == 0x529114u) {
        ctx->pc = 0x529114u;
            // 0x529114: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x529118u;
        goto label_529118;
    }
    ctx->pc = 0x529110u;
    ctx->pc = 0x529114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529110u;
            // 0x529114: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x527CA0u;
    if (runtime->hasFunction(0x527CA0u)) {
        auto targetFn = runtime->lookupFunction(0x527CA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00527CA0_0x527ca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x529118u;
label_529118:
    // 0x529118: 0x0  nop
    ctx->pc = 0x529118u;
    // NOP
label_52911c:
    // 0x52911c: 0x0  nop
    ctx->pc = 0x52911cu;
    // NOP
label_529120:
    // 0x529120: 0x8149f80  j           func_527E00
label_529124:
    if (ctx->pc == 0x529124u) {
        ctx->pc = 0x529124u;
            // 0x529124: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x529128u;
        goto label_529128;
    }
    ctx->pc = 0x529120u;
    ctx->pc = 0x529124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529120u;
            // 0x529124: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x527E00u;
    {
        auto targetFn = runtime->lookupFunction(0x527E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x529128u;
label_529128:
    // 0x529128: 0x0  nop
    ctx->pc = 0x529128u;
    // NOP
label_52912c:
    // 0x52912c: 0x0  nop
    ctx->pc = 0x52912cu;
    // NOP
label_529130:
    // 0x529130: 0x8149ee8  j           func_527BA0
label_529134:
    if (ctx->pc == 0x529134u) {
        ctx->pc = 0x529134u;
            // 0x529134: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x529138u;
        goto label_529138;
    }
    ctx->pc = 0x529130u;
    ctx->pc = 0x529134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529130u;
            // 0x529134: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x527BA0u;
    {
        auto targetFn = runtime->lookupFunction(0x527BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x529138u;
label_529138:
    // 0x529138: 0x0  nop
    ctx->pc = 0x529138u;
    // NOP
label_52913c:
    // 0x52913c: 0x0  nop
    ctx->pc = 0x52913cu;
    // NOP
label_529140:
    // 0x529140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x529140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_529144:
    // 0x529144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x529144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_529148:
    // 0x529148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x529148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52914c:
    // 0x52914c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_529150:
    // 0x529150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x529150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_529154:
    // 0x529154: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_529158:
    if (ctx->pc == 0x529158u) {
        ctx->pc = 0x529158u;
            // 0x529158: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52915Cu;
        goto label_52915c;
    }
    ctx->pc = 0x529154u;
    {
        const bool branch_taken_0x529154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x529158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529154u;
            // 0x529158: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529154) {
            ctx->pc = 0x5291B0u;
            goto label_5291b0;
        }
    }
    ctx->pc = 0x52915Cu;
label_52915c:
    // 0x52915c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52915cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_529160:
    // 0x529160: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_529164:
    // 0x529164: 0x24636710  addiu       $v1, $v1, 0x6710
    ctx->pc = 0x529164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26384));
label_529168:
    // 0x529168: 0x24426748  addiu       $v0, $v0, 0x6748
    ctx->pc = 0x529168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26440));
label_52916c:
    // 0x52916c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52916cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_529170:
    // 0x529170: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_529174:
    if (ctx->pc == 0x529174u) {
        ctx->pc = 0x529174u;
            // 0x529174: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x529178u;
        goto label_529178;
    }
    ctx->pc = 0x529170u;
    {
        const bool branch_taken_0x529170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x529174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529170u;
            // 0x529174: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529170) {
            ctx->pc = 0x529198u;
            goto label_529198;
        }
    }
    ctx->pc = 0x529178u;
label_529178:
    // 0x529178: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x529178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52917c:
    // 0x52917c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_529180:
    // 0x529180: 0x246367c0  addiu       $v1, $v1, 0x67C0
    ctx->pc = 0x529180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26560));
label_529184:
    // 0x529184: 0x244267f8  addiu       $v0, $v0, 0x67F8
    ctx->pc = 0x529184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26616));
label_529188:
    // 0x529188: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x529188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52918c:
    // 0x52918c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52918cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529190:
    // 0x529190: 0xc14a474  jal         func_5291D0
label_529194:
    if (ctx->pc == 0x529194u) {
        ctx->pc = 0x529194u;
            // 0x529194: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x529198u;
        goto label_529198;
    }
    ctx->pc = 0x529190u;
    SET_GPR_U32(ctx, 31, 0x529198u);
    ctx->pc = 0x529194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529190u;
            // 0x529194: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5291D0u;
    if (runtime->hasFunction(0x5291D0u)) {
        auto targetFn = runtime->lookupFunction(0x5291D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529198u; }
        if (ctx->pc != 0x529198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005291D0_0x5291d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529198u; }
        if (ctx->pc != 0x529198u) { return; }
    }
    ctx->pc = 0x529198u;
label_529198:
    // 0x529198: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x529198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_52919c:
    // 0x52919c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52919cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5291a0:
    // 0x5291a0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5291a4:
    if (ctx->pc == 0x5291A4u) {
        ctx->pc = 0x5291A4u;
            // 0x5291a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5291A8u;
        goto label_5291a8;
    }
    ctx->pc = 0x5291A0u;
    {
        const bool branch_taken_0x5291a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5291a0) {
            ctx->pc = 0x5291A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5291A0u;
            // 0x5291a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5291B4u;
            goto label_5291b4;
        }
    }
    ctx->pc = 0x5291A8u;
label_5291a8:
    // 0x5291a8: 0xc0400a8  jal         func_1002A0
label_5291ac:
    if (ctx->pc == 0x5291ACu) {
        ctx->pc = 0x5291ACu;
            // 0x5291ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5291B0u;
        goto label_5291b0;
    }
    ctx->pc = 0x5291A8u;
    SET_GPR_U32(ctx, 31, 0x5291B0u);
    ctx->pc = 0x5291ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5291A8u;
            // 0x5291ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5291B0u; }
        if (ctx->pc != 0x5291B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5291B0u; }
        if (ctx->pc != 0x5291B0u) { return; }
    }
    ctx->pc = 0x5291B0u;
label_5291b0:
    // 0x5291b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5291b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5291b4:
    // 0x5291b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5291b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5291b8:
    // 0x5291b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5291b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5291bc:
    // 0x5291bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5291bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5291c0:
    // 0x5291c0: 0x3e00008  jr          $ra
label_5291c4:
    if (ctx->pc == 0x5291C4u) {
        ctx->pc = 0x5291C4u;
            // 0x5291c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5291C8u;
        goto label_5291c8;
    }
    ctx->pc = 0x5291C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5291C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5291C0u;
            // 0x5291c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5291C8u;
label_5291c8:
    // 0x5291c8: 0x0  nop
    ctx->pc = 0x5291c8u;
    // NOP
label_5291cc:
    // 0x5291cc: 0x0  nop
    ctx->pc = 0x5291ccu;
    // NOP
}
