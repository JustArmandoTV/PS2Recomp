#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004667A0
// Address: 0x4667a0 - 0x467440
void sub_004667A0_0x4667a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004667A0_0x4667a0");
#endif

    switch (ctx->pc) {
        case 0x4667a0u: goto label_4667a0;
        case 0x4667a4u: goto label_4667a4;
        case 0x4667a8u: goto label_4667a8;
        case 0x4667acu: goto label_4667ac;
        case 0x4667b0u: goto label_4667b0;
        case 0x4667b4u: goto label_4667b4;
        case 0x4667b8u: goto label_4667b8;
        case 0x4667bcu: goto label_4667bc;
        case 0x4667c0u: goto label_4667c0;
        case 0x4667c4u: goto label_4667c4;
        case 0x4667c8u: goto label_4667c8;
        case 0x4667ccu: goto label_4667cc;
        case 0x4667d0u: goto label_4667d0;
        case 0x4667d4u: goto label_4667d4;
        case 0x4667d8u: goto label_4667d8;
        case 0x4667dcu: goto label_4667dc;
        case 0x4667e0u: goto label_4667e0;
        case 0x4667e4u: goto label_4667e4;
        case 0x4667e8u: goto label_4667e8;
        case 0x4667ecu: goto label_4667ec;
        case 0x4667f0u: goto label_4667f0;
        case 0x4667f4u: goto label_4667f4;
        case 0x4667f8u: goto label_4667f8;
        case 0x4667fcu: goto label_4667fc;
        case 0x466800u: goto label_466800;
        case 0x466804u: goto label_466804;
        case 0x466808u: goto label_466808;
        case 0x46680cu: goto label_46680c;
        case 0x466810u: goto label_466810;
        case 0x466814u: goto label_466814;
        case 0x466818u: goto label_466818;
        case 0x46681cu: goto label_46681c;
        case 0x466820u: goto label_466820;
        case 0x466824u: goto label_466824;
        case 0x466828u: goto label_466828;
        case 0x46682cu: goto label_46682c;
        case 0x466830u: goto label_466830;
        case 0x466834u: goto label_466834;
        case 0x466838u: goto label_466838;
        case 0x46683cu: goto label_46683c;
        case 0x466840u: goto label_466840;
        case 0x466844u: goto label_466844;
        case 0x466848u: goto label_466848;
        case 0x46684cu: goto label_46684c;
        case 0x466850u: goto label_466850;
        case 0x466854u: goto label_466854;
        case 0x466858u: goto label_466858;
        case 0x46685cu: goto label_46685c;
        case 0x466860u: goto label_466860;
        case 0x466864u: goto label_466864;
        case 0x466868u: goto label_466868;
        case 0x46686cu: goto label_46686c;
        case 0x466870u: goto label_466870;
        case 0x466874u: goto label_466874;
        case 0x466878u: goto label_466878;
        case 0x46687cu: goto label_46687c;
        case 0x466880u: goto label_466880;
        case 0x466884u: goto label_466884;
        case 0x466888u: goto label_466888;
        case 0x46688cu: goto label_46688c;
        case 0x466890u: goto label_466890;
        case 0x466894u: goto label_466894;
        case 0x466898u: goto label_466898;
        case 0x46689cu: goto label_46689c;
        case 0x4668a0u: goto label_4668a0;
        case 0x4668a4u: goto label_4668a4;
        case 0x4668a8u: goto label_4668a8;
        case 0x4668acu: goto label_4668ac;
        case 0x4668b0u: goto label_4668b0;
        case 0x4668b4u: goto label_4668b4;
        case 0x4668b8u: goto label_4668b8;
        case 0x4668bcu: goto label_4668bc;
        case 0x4668c0u: goto label_4668c0;
        case 0x4668c4u: goto label_4668c4;
        case 0x4668c8u: goto label_4668c8;
        case 0x4668ccu: goto label_4668cc;
        case 0x4668d0u: goto label_4668d0;
        case 0x4668d4u: goto label_4668d4;
        case 0x4668d8u: goto label_4668d8;
        case 0x4668dcu: goto label_4668dc;
        case 0x4668e0u: goto label_4668e0;
        case 0x4668e4u: goto label_4668e4;
        case 0x4668e8u: goto label_4668e8;
        case 0x4668ecu: goto label_4668ec;
        case 0x4668f0u: goto label_4668f0;
        case 0x4668f4u: goto label_4668f4;
        case 0x4668f8u: goto label_4668f8;
        case 0x4668fcu: goto label_4668fc;
        case 0x466900u: goto label_466900;
        case 0x466904u: goto label_466904;
        case 0x466908u: goto label_466908;
        case 0x46690cu: goto label_46690c;
        case 0x466910u: goto label_466910;
        case 0x466914u: goto label_466914;
        case 0x466918u: goto label_466918;
        case 0x46691cu: goto label_46691c;
        case 0x466920u: goto label_466920;
        case 0x466924u: goto label_466924;
        case 0x466928u: goto label_466928;
        case 0x46692cu: goto label_46692c;
        case 0x466930u: goto label_466930;
        case 0x466934u: goto label_466934;
        case 0x466938u: goto label_466938;
        case 0x46693cu: goto label_46693c;
        case 0x466940u: goto label_466940;
        case 0x466944u: goto label_466944;
        case 0x466948u: goto label_466948;
        case 0x46694cu: goto label_46694c;
        case 0x466950u: goto label_466950;
        case 0x466954u: goto label_466954;
        case 0x466958u: goto label_466958;
        case 0x46695cu: goto label_46695c;
        case 0x466960u: goto label_466960;
        case 0x466964u: goto label_466964;
        case 0x466968u: goto label_466968;
        case 0x46696cu: goto label_46696c;
        case 0x466970u: goto label_466970;
        case 0x466974u: goto label_466974;
        case 0x466978u: goto label_466978;
        case 0x46697cu: goto label_46697c;
        case 0x466980u: goto label_466980;
        case 0x466984u: goto label_466984;
        case 0x466988u: goto label_466988;
        case 0x46698cu: goto label_46698c;
        case 0x466990u: goto label_466990;
        case 0x466994u: goto label_466994;
        case 0x466998u: goto label_466998;
        case 0x46699cu: goto label_46699c;
        case 0x4669a0u: goto label_4669a0;
        case 0x4669a4u: goto label_4669a4;
        case 0x4669a8u: goto label_4669a8;
        case 0x4669acu: goto label_4669ac;
        case 0x4669b0u: goto label_4669b0;
        case 0x4669b4u: goto label_4669b4;
        case 0x4669b8u: goto label_4669b8;
        case 0x4669bcu: goto label_4669bc;
        case 0x4669c0u: goto label_4669c0;
        case 0x4669c4u: goto label_4669c4;
        case 0x4669c8u: goto label_4669c8;
        case 0x4669ccu: goto label_4669cc;
        case 0x4669d0u: goto label_4669d0;
        case 0x4669d4u: goto label_4669d4;
        case 0x4669d8u: goto label_4669d8;
        case 0x4669dcu: goto label_4669dc;
        case 0x4669e0u: goto label_4669e0;
        case 0x4669e4u: goto label_4669e4;
        case 0x4669e8u: goto label_4669e8;
        case 0x4669ecu: goto label_4669ec;
        case 0x4669f0u: goto label_4669f0;
        case 0x4669f4u: goto label_4669f4;
        case 0x4669f8u: goto label_4669f8;
        case 0x4669fcu: goto label_4669fc;
        case 0x466a00u: goto label_466a00;
        case 0x466a04u: goto label_466a04;
        case 0x466a08u: goto label_466a08;
        case 0x466a0cu: goto label_466a0c;
        case 0x466a10u: goto label_466a10;
        case 0x466a14u: goto label_466a14;
        case 0x466a18u: goto label_466a18;
        case 0x466a1cu: goto label_466a1c;
        case 0x466a20u: goto label_466a20;
        case 0x466a24u: goto label_466a24;
        case 0x466a28u: goto label_466a28;
        case 0x466a2cu: goto label_466a2c;
        case 0x466a30u: goto label_466a30;
        case 0x466a34u: goto label_466a34;
        case 0x466a38u: goto label_466a38;
        case 0x466a3cu: goto label_466a3c;
        case 0x466a40u: goto label_466a40;
        case 0x466a44u: goto label_466a44;
        case 0x466a48u: goto label_466a48;
        case 0x466a4cu: goto label_466a4c;
        case 0x466a50u: goto label_466a50;
        case 0x466a54u: goto label_466a54;
        case 0x466a58u: goto label_466a58;
        case 0x466a5cu: goto label_466a5c;
        case 0x466a60u: goto label_466a60;
        case 0x466a64u: goto label_466a64;
        case 0x466a68u: goto label_466a68;
        case 0x466a6cu: goto label_466a6c;
        case 0x466a70u: goto label_466a70;
        case 0x466a74u: goto label_466a74;
        case 0x466a78u: goto label_466a78;
        case 0x466a7cu: goto label_466a7c;
        case 0x466a80u: goto label_466a80;
        case 0x466a84u: goto label_466a84;
        case 0x466a88u: goto label_466a88;
        case 0x466a8cu: goto label_466a8c;
        case 0x466a90u: goto label_466a90;
        case 0x466a94u: goto label_466a94;
        case 0x466a98u: goto label_466a98;
        case 0x466a9cu: goto label_466a9c;
        case 0x466aa0u: goto label_466aa0;
        case 0x466aa4u: goto label_466aa4;
        case 0x466aa8u: goto label_466aa8;
        case 0x466aacu: goto label_466aac;
        case 0x466ab0u: goto label_466ab0;
        case 0x466ab4u: goto label_466ab4;
        case 0x466ab8u: goto label_466ab8;
        case 0x466abcu: goto label_466abc;
        case 0x466ac0u: goto label_466ac0;
        case 0x466ac4u: goto label_466ac4;
        case 0x466ac8u: goto label_466ac8;
        case 0x466accu: goto label_466acc;
        case 0x466ad0u: goto label_466ad0;
        case 0x466ad4u: goto label_466ad4;
        case 0x466ad8u: goto label_466ad8;
        case 0x466adcu: goto label_466adc;
        case 0x466ae0u: goto label_466ae0;
        case 0x466ae4u: goto label_466ae4;
        case 0x466ae8u: goto label_466ae8;
        case 0x466aecu: goto label_466aec;
        case 0x466af0u: goto label_466af0;
        case 0x466af4u: goto label_466af4;
        case 0x466af8u: goto label_466af8;
        case 0x466afcu: goto label_466afc;
        case 0x466b00u: goto label_466b00;
        case 0x466b04u: goto label_466b04;
        case 0x466b08u: goto label_466b08;
        case 0x466b0cu: goto label_466b0c;
        case 0x466b10u: goto label_466b10;
        case 0x466b14u: goto label_466b14;
        case 0x466b18u: goto label_466b18;
        case 0x466b1cu: goto label_466b1c;
        case 0x466b20u: goto label_466b20;
        case 0x466b24u: goto label_466b24;
        case 0x466b28u: goto label_466b28;
        case 0x466b2cu: goto label_466b2c;
        case 0x466b30u: goto label_466b30;
        case 0x466b34u: goto label_466b34;
        case 0x466b38u: goto label_466b38;
        case 0x466b3cu: goto label_466b3c;
        case 0x466b40u: goto label_466b40;
        case 0x466b44u: goto label_466b44;
        case 0x466b48u: goto label_466b48;
        case 0x466b4cu: goto label_466b4c;
        case 0x466b50u: goto label_466b50;
        case 0x466b54u: goto label_466b54;
        case 0x466b58u: goto label_466b58;
        case 0x466b5cu: goto label_466b5c;
        case 0x466b60u: goto label_466b60;
        case 0x466b64u: goto label_466b64;
        case 0x466b68u: goto label_466b68;
        case 0x466b6cu: goto label_466b6c;
        case 0x466b70u: goto label_466b70;
        case 0x466b74u: goto label_466b74;
        case 0x466b78u: goto label_466b78;
        case 0x466b7cu: goto label_466b7c;
        case 0x466b80u: goto label_466b80;
        case 0x466b84u: goto label_466b84;
        case 0x466b88u: goto label_466b88;
        case 0x466b8cu: goto label_466b8c;
        case 0x466b90u: goto label_466b90;
        case 0x466b94u: goto label_466b94;
        case 0x466b98u: goto label_466b98;
        case 0x466b9cu: goto label_466b9c;
        case 0x466ba0u: goto label_466ba0;
        case 0x466ba4u: goto label_466ba4;
        case 0x466ba8u: goto label_466ba8;
        case 0x466bacu: goto label_466bac;
        case 0x466bb0u: goto label_466bb0;
        case 0x466bb4u: goto label_466bb4;
        case 0x466bb8u: goto label_466bb8;
        case 0x466bbcu: goto label_466bbc;
        case 0x466bc0u: goto label_466bc0;
        case 0x466bc4u: goto label_466bc4;
        case 0x466bc8u: goto label_466bc8;
        case 0x466bccu: goto label_466bcc;
        case 0x466bd0u: goto label_466bd0;
        case 0x466bd4u: goto label_466bd4;
        case 0x466bd8u: goto label_466bd8;
        case 0x466bdcu: goto label_466bdc;
        case 0x466be0u: goto label_466be0;
        case 0x466be4u: goto label_466be4;
        case 0x466be8u: goto label_466be8;
        case 0x466becu: goto label_466bec;
        case 0x466bf0u: goto label_466bf0;
        case 0x466bf4u: goto label_466bf4;
        case 0x466bf8u: goto label_466bf8;
        case 0x466bfcu: goto label_466bfc;
        case 0x466c00u: goto label_466c00;
        case 0x466c04u: goto label_466c04;
        case 0x466c08u: goto label_466c08;
        case 0x466c0cu: goto label_466c0c;
        case 0x466c10u: goto label_466c10;
        case 0x466c14u: goto label_466c14;
        case 0x466c18u: goto label_466c18;
        case 0x466c1cu: goto label_466c1c;
        case 0x466c20u: goto label_466c20;
        case 0x466c24u: goto label_466c24;
        case 0x466c28u: goto label_466c28;
        case 0x466c2cu: goto label_466c2c;
        case 0x466c30u: goto label_466c30;
        case 0x466c34u: goto label_466c34;
        case 0x466c38u: goto label_466c38;
        case 0x466c3cu: goto label_466c3c;
        case 0x466c40u: goto label_466c40;
        case 0x466c44u: goto label_466c44;
        case 0x466c48u: goto label_466c48;
        case 0x466c4cu: goto label_466c4c;
        case 0x466c50u: goto label_466c50;
        case 0x466c54u: goto label_466c54;
        case 0x466c58u: goto label_466c58;
        case 0x466c5cu: goto label_466c5c;
        case 0x466c60u: goto label_466c60;
        case 0x466c64u: goto label_466c64;
        case 0x466c68u: goto label_466c68;
        case 0x466c6cu: goto label_466c6c;
        case 0x466c70u: goto label_466c70;
        case 0x466c74u: goto label_466c74;
        case 0x466c78u: goto label_466c78;
        case 0x466c7cu: goto label_466c7c;
        case 0x466c80u: goto label_466c80;
        case 0x466c84u: goto label_466c84;
        case 0x466c88u: goto label_466c88;
        case 0x466c8cu: goto label_466c8c;
        case 0x466c90u: goto label_466c90;
        case 0x466c94u: goto label_466c94;
        case 0x466c98u: goto label_466c98;
        case 0x466c9cu: goto label_466c9c;
        case 0x466ca0u: goto label_466ca0;
        case 0x466ca4u: goto label_466ca4;
        case 0x466ca8u: goto label_466ca8;
        case 0x466cacu: goto label_466cac;
        case 0x466cb0u: goto label_466cb0;
        case 0x466cb4u: goto label_466cb4;
        case 0x466cb8u: goto label_466cb8;
        case 0x466cbcu: goto label_466cbc;
        case 0x466cc0u: goto label_466cc0;
        case 0x466cc4u: goto label_466cc4;
        case 0x466cc8u: goto label_466cc8;
        case 0x466cccu: goto label_466ccc;
        case 0x466cd0u: goto label_466cd0;
        case 0x466cd4u: goto label_466cd4;
        case 0x466cd8u: goto label_466cd8;
        case 0x466cdcu: goto label_466cdc;
        case 0x466ce0u: goto label_466ce0;
        case 0x466ce4u: goto label_466ce4;
        case 0x466ce8u: goto label_466ce8;
        case 0x466cecu: goto label_466cec;
        case 0x466cf0u: goto label_466cf0;
        case 0x466cf4u: goto label_466cf4;
        case 0x466cf8u: goto label_466cf8;
        case 0x466cfcu: goto label_466cfc;
        case 0x466d00u: goto label_466d00;
        case 0x466d04u: goto label_466d04;
        case 0x466d08u: goto label_466d08;
        case 0x466d0cu: goto label_466d0c;
        case 0x466d10u: goto label_466d10;
        case 0x466d14u: goto label_466d14;
        case 0x466d18u: goto label_466d18;
        case 0x466d1cu: goto label_466d1c;
        case 0x466d20u: goto label_466d20;
        case 0x466d24u: goto label_466d24;
        case 0x466d28u: goto label_466d28;
        case 0x466d2cu: goto label_466d2c;
        case 0x466d30u: goto label_466d30;
        case 0x466d34u: goto label_466d34;
        case 0x466d38u: goto label_466d38;
        case 0x466d3cu: goto label_466d3c;
        case 0x466d40u: goto label_466d40;
        case 0x466d44u: goto label_466d44;
        case 0x466d48u: goto label_466d48;
        case 0x466d4cu: goto label_466d4c;
        case 0x466d50u: goto label_466d50;
        case 0x466d54u: goto label_466d54;
        case 0x466d58u: goto label_466d58;
        case 0x466d5cu: goto label_466d5c;
        case 0x466d60u: goto label_466d60;
        case 0x466d64u: goto label_466d64;
        case 0x466d68u: goto label_466d68;
        case 0x466d6cu: goto label_466d6c;
        case 0x466d70u: goto label_466d70;
        case 0x466d74u: goto label_466d74;
        case 0x466d78u: goto label_466d78;
        case 0x466d7cu: goto label_466d7c;
        case 0x466d80u: goto label_466d80;
        case 0x466d84u: goto label_466d84;
        case 0x466d88u: goto label_466d88;
        case 0x466d8cu: goto label_466d8c;
        case 0x466d90u: goto label_466d90;
        case 0x466d94u: goto label_466d94;
        case 0x466d98u: goto label_466d98;
        case 0x466d9cu: goto label_466d9c;
        case 0x466da0u: goto label_466da0;
        case 0x466da4u: goto label_466da4;
        case 0x466da8u: goto label_466da8;
        case 0x466dacu: goto label_466dac;
        case 0x466db0u: goto label_466db0;
        case 0x466db4u: goto label_466db4;
        case 0x466db8u: goto label_466db8;
        case 0x466dbcu: goto label_466dbc;
        case 0x466dc0u: goto label_466dc0;
        case 0x466dc4u: goto label_466dc4;
        case 0x466dc8u: goto label_466dc8;
        case 0x466dccu: goto label_466dcc;
        case 0x466dd0u: goto label_466dd0;
        case 0x466dd4u: goto label_466dd4;
        case 0x466dd8u: goto label_466dd8;
        case 0x466ddcu: goto label_466ddc;
        case 0x466de0u: goto label_466de0;
        case 0x466de4u: goto label_466de4;
        case 0x466de8u: goto label_466de8;
        case 0x466decu: goto label_466dec;
        case 0x466df0u: goto label_466df0;
        case 0x466df4u: goto label_466df4;
        case 0x466df8u: goto label_466df8;
        case 0x466dfcu: goto label_466dfc;
        case 0x466e00u: goto label_466e00;
        case 0x466e04u: goto label_466e04;
        case 0x466e08u: goto label_466e08;
        case 0x466e0cu: goto label_466e0c;
        case 0x466e10u: goto label_466e10;
        case 0x466e14u: goto label_466e14;
        case 0x466e18u: goto label_466e18;
        case 0x466e1cu: goto label_466e1c;
        case 0x466e20u: goto label_466e20;
        case 0x466e24u: goto label_466e24;
        case 0x466e28u: goto label_466e28;
        case 0x466e2cu: goto label_466e2c;
        case 0x466e30u: goto label_466e30;
        case 0x466e34u: goto label_466e34;
        case 0x466e38u: goto label_466e38;
        case 0x466e3cu: goto label_466e3c;
        case 0x466e40u: goto label_466e40;
        case 0x466e44u: goto label_466e44;
        case 0x466e48u: goto label_466e48;
        case 0x466e4cu: goto label_466e4c;
        case 0x466e50u: goto label_466e50;
        case 0x466e54u: goto label_466e54;
        case 0x466e58u: goto label_466e58;
        case 0x466e5cu: goto label_466e5c;
        case 0x466e60u: goto label_466e60;
        case 0x466e64u: goto label_466e64;
        case 0x466e68u: goto label_466e68;
        case 0x466e6cu: goto label_466e6c;
        case 0x466e70u: goto label_466e70;
        case 0x466e74u: goto label_466e74;
        case 0x466e78u: goto label_466e78;
        case 0x466e7cu: goto label_466e7c;
        case 0x466e80u: goto label_466e80;
        case 0x466e84u: goto label_466e84;
        case 0x466e88u: goto label_466e88;
        case 0x466e8cu: goto label_466e8c;
        case 0x466e90u: goto label_466e90;
        case 0x466e94u: goto label_466e94;
        case 0x466e98u: goto label_466e98;
        case 0x466e9cu: goto label_466e9c;
        case 0x466ea0u: goto label_466ea0;
        case 0x466ea4u: goto label_466ea4;
        case 0x466ea8u: goto label_466ea8;
        case 0x466eacu: goto label_466eac;
        case 0x466eb0u: goto label_466eb0;
        case 0x466eb4u: goto label_466eb4;
        case 0x466eb8u: goto label_466eb8;
        case 0x466ebcu: goto label_466ebc;
        case 0x466ec0u: goto label_466ec0;
        case 0x466ec4u: goto label_466ec4;
        case 0x466ec8u: goto label_466ec8;
        case 0x466eccu: goto label_466ecc;
        case 0x466ed0u: goto label_466ed0;
        case 0x466ed4u: goto label_466ed4;
        case 0x466ed8u: goto label_466ed8;
        case 0x466edcu: goto label_466edc;
        case 0x466ee0u: goto label_466ee0;
        case 0x466ee4u: goto label_466ee4;
        case 0x466ee8u: goto label_466ee8;
        case 0x466eecu: goto label_466eec;
        case 0x466ef0u: goto label_466ef0;
        case 0x466ef4u: goto label_466ef4;
        case 0x466ef8u: goto label_466ef8;
        case 0x466efcu: goto label_466efc;
        case 0x466f00u: goto label_466f00;
        case 0x466f04u: goto label_466f04;
        case 0x466f08u: goto label_466f08;
        case 0x466f0cu: goto label_466f0c;
        case 0x466f10u: goto label_466f10;
        case 0x466f14u: goto label_466f14;
        case 0x466f18u: goto label_466f18;
        case 0x466f1cu: goto label_466f1c;
        case 0x466f20u: goto label_466f20;
        case 0x466f24u: goto label_466f24;
        case 0x466f28u: goto label_466f28;
        case 0x466f2cu: goto label_466f2c;
        case 0x466f30u: goto label_466f30;
        case 0x466f34u: goto label_466f34;
        case 0x466f38u: goto label_466f38;
        case 0x466f3cu: goto label_466f3c;
        case 0x466f40u: goto label_466f40;
        case 0x466f44u: goto label_466f44;
        case 0x466f48u: goto label_466f48;
        case 0x466f4cu: goto label_466f4c;
        case 0x466f50u: goto label_466f50;
        case 0x466f54u: goto label_466f54;
        case 0x466f58u: goto label_466f58;
        case 0x466f5cu: goto label_466f5c;
        case 0x466f60u: goto label_466f60;
        case 0x466f64u: goto label_466f64;
        case 0x466f68u: goto label_466f68;
        case 0x466f6cu: goto label_466f6c;
        case 0x466f70u: goto label_466f70;
        case 0x466f74u: goto label_466f74;
        case 0x466f78u: goto label_466f78;
        case 0x466f7cu: goto label_466f7c;
        case 0x466f80u: goto label_466f80;
        case 0x466f84u: goto label_466f84;
        case 0x466f88u: goto label_466f88;
        case 0x466f8cu: goto label_466f8c;
        case 0x466f90u: goto label_466f90;
        case 0x466f94u: goto label_466f94;
        case 0x466f98u: goto label_466f98;
        case 0x466f9cu: goto label_466f9c;
        case 0x466fa0u: goto label_466fa0;
        case 0x466fa4u: goto label_466fa4;
        case 0x466fa8u: goto label_466fa8;
        case 0x466facu: goto label_466fac;
        case 0x466fb0u: goto label_466fb0;
        case 0x466fb4u: goto label_466fb4;
        case 0x466fb8u: goto label_466fb8;
        case 0x466fbcu: goto label_466fbc;
        case 0x466fc0u: goto label_466fc0;
        case 0x466fc4u: goto label_466fc4;
        case 0x466fc8u: goto label_466fc8;
        case 0x466fccu: goto label_466fcc;
        case 0x466fd0u: goto label_466fd0;
        case 0x466fd4u: goto label_466fd4;
        case 0x466fd8u: goto label_466fd8;
        case 0x466fdcu: goto label_466fdc;
        case 0x466fe0u: goto label_466fe0;
        case 0x466fe4u: goto label_466fe4;
        case 0x466fe8u: goto label_466fe8;
        case 0x466fecu: goto label_466fec;
        case 0x466ff0u: goto label_466ff0;
        case 0x466ff4u: goto label_466ff4;
        case 0x466ff8u: goto label_466ff8;
        case 0x466ffcu: goto label_466ffc;
        case 0x467000u: goto label_467000;
        case 0x467004u: goto label_467004;
        case 0x467008u: goto label_467008;
        case 0x46700cu: goto label_46700c;
        case 0x467010u: goto label_467010;
        case 0x467014u: goto label_467014;
        case 0x467018u: goto label_467018;
        case 0x46701cu: goto label_46701c;
        case 0x467020u: goto label_467020;
        case 0x467024u: goto label_467024;
        case 0x467028u: goto label_467028;
        case 0x46702cu: goto label_46702c;
        case 0x467030u: goto label_467030;
        case 0x467034u: goto label_467034;
        case 0x467038u: goto label_467038;
        case 0x46703cu: goto label_46703c;
        case 0x467040u: goto label_467040;
        case 0x467044u: goto label_467044;
        case 0x467048u: goto label_467048;
        case 0x46704cu: goto label_46704c;
        case 0x467050u: goto label_467050;
        case 0x467054u: goto label_467054;
        case 0x467058u: goto label_467058;
        case 0x46705cu: goto label_46705c;
        case 0x467060u: goto label_467060;
        case 0x467064u: goto label_467064;
        case 0x467068u: goto label_467068;
        case 0x46706cu: goto label_46706c;
        case 0x467070u: goto label_467070;
        case 0x467074u: goto label_467074;
        case 0x467078u: goto label_467078;
        case 0x46707cu: goto label_46707c;
        case 0x467080u: goto label_467080;
        case 0x467084u: goto label_467084;
        case 0x467088u: goto label_467088;
        case 0x46708cu: goto label_46708c;
        case 0x467090u: goto label_467090;
        case 0x467094u: goto label_467094;
        case 0x467098u: goto label_467098;
        case 0x46709cu: goto label_46709c;
        case 0x4670a0u: goto label_4670a0;
        case 0x4670a4u: goto label_4670a4;
        case 0x4670a8u: goto label_4670a8;
        case 0x4670acu: goto label_4670ac;
        case 0x4670b0u: goto label_4670b0;
        case 0x4670b4u: goto label_4670b4;
        case 0x4670b8u: goto label_4670b8;
        case 0x4670bcu: goto label_4670bc;
        case 0x4670c0u: goto label_4670c0;
        case 0x4670c4u: goto label_4670c4;
        case 0x4670c8u: goto label_4670c8;
        case 0x4670ccu: goto label_4670cc;
        case 0x4670d0u: goto label_4670d0;
        case 0x4670d4u: goto label_4670d4;
        case 0x4670d8u: goto label_4670d8;
        case 0x4670dcu: goto label_4670dc;
        case 0x4670e0u: goto label_4670e0;
        case 0x4670e4u: goto label_4670e4;
        case 0x4670e8u: goto label_4670e8;
        case 0x4670ecu: goto label_4670ec;
        case 0x4670f0u: goto label_4670f0;
        case 0x4670f4u: goto label_4670f4;
        case 0x4670f8u: goto label_4670f8;
        case 0x4670fcu: goto label_4670fc;
        case 0x467100u: goto label_467100;
        case 0x467104u: goto label_467104;
        case 0x467108u: goto label_467108;
        case 0x46710cu: goto label_46710c;
        case 0x467110u: goto label_467110;
        case 0x467114u: goto label_467114;
        case 0x467118u: goto label_467118;
        case 0x46711cu: goto label_46711c;
        case 0x467120u: goto label_467120;
        case 0x467124u: goto label_467124;
        case 0x467128u: goto label_467128;
        case 0x46712cu: goto label_46712c;
        case 0x467130u: goto label_467130;
        case 0x467134u: goto label_467134;
        case 0x467138u: goto label_467138;
        case 0x46713cu: goto label_46713c;
        case 0x467140u: goto label_467140;
        case 0x467144u: goto label_467144;
        case 0x467148u: goto label_467148;
        case 0x46714cu: goto label_46714c;
        case 0x467150u: goto label_467150;
        case 0x467154u: goto label_467154;
        case 0x467158u: goto label_467158;
        case 0x46715cu: goto label_46715c;
        case 0x467160u: goto label_467160;
        case 0x467164u: goto label_467164;
        case 0x467168u: goto label_467168;
        case 0x46716cu: goto label_46716c;
        case 0x467170u: goto label_467170;
        case 0x467174u: goto label_467174;
        case 0x467178u: goto label_467178;
        case 0x46717cu: goto label_46717c;
        case 0x467180u: goto label_467180;
        case 0x467184u: goto label_467184;
        case 0x467188u: goto label_467188;
        case 0x46718cu: goto label_46718c;
        case 0x467190u: goto label_467190;
        case 0x467194u: goto label_467194;
        case 0x467198u: goto label_467198;
        case 0x46719cu: goto label_46719c;
        case 0x4671a0u: goto label_4671a0;
        case 0x4671a4u: goto label_4671a4;
        case 0x4671a8u: goto label_4671a8;
        case 0x4671acu: goto label_4671ac;
        case 0x4671b0u: goto label_4671b0;
        case 0x4671b4u: goto label_4671b4;
        case 0x4671b8u: goto label_4671b8;
        case 0x4671bcu: goto label_4671bc;
        case 0x4671c0u: goto label_4671c0;
        case 0x4671c4u: goto label_4671c4;
        case 0x4671c8u: goto label_4671c8;
        case 0x4671ccu: goto label_4671cc;
        case 0x4671d0u: goto label_4671d0;
        case 0x4671d4u: goto label_4671d4;
        case 0x4671d8u: goto label_4671d8;
        case 0x4671dcu: goto label_4671dc;
        case 0x4671e0u: goto label_4671e0;
        case 0x4671e4u: goto label_4671e4;
        case 0x4671e8u: goto label_4671e8;
        case 0x4671ecu: goto label_4671ec;
        case 0x4671f0u: goto label_4671f0;
        case 0x4671f4u: goto label_4671f4;
        case 0x4671f8u: goto label_4671f8;
        case 0x4671fcu: goto label_4671fc;
        case 0x467200u: goto label_467200;
        case 0x467204u: goto label_467204;
        case 0x467208u: goto label_467208;
        case 0x46720cu: goto label_46720c;
        case 0x467210u: goto label_467210;
        case 0x467214u: goto label_467214;
        case 0x467218u: goto label_467218;
        case 0x46721cu: goto label_46721c;
        case 0x467220u: goto label_467220;
        case 0x467224u: goto label_467224;
        case 0x467228u: goto label_467228;
        case 0x46722cu: goto label_46722c;
        case 0x467230u: goto label_467230;
        case 0x467234u: goto label_467234;
        case 0x467238u: goto label_467238;
        case 0x46723cu: goto label_46723c;
        case 0x467240u: goto label_467240;
        case 0x467244u: goto label_467244;
        case 0x467248u: goto label_467248;
        case 0x46724cu: goto label_46724c;
        case 0x467250u: goto label_467250;
        case 0x467254u: goto label_467254;
        case 0x467258u: goto label_467258;
        case 0x46725cu: goto label_46725c;
        case 0x467260u: goto label_467260;
        case 0x467264u: goto label_467264;
        case 0x467268u: goto label_467268;
        case 0x46726cu: goto label_46726c;
        case 0x467270u: goto label_467270;
        case 0x467274u: goto label_467274;
        case 0x467278u: goto label_467278;
        case 0x46727cu: goto label_46727c;
        case 0x467280u: goto label_467280;
        case 0x467284u: goto label_467284;
        case 0x467288u: goto label_467288;
        case 0x46728cu: goto label_46728c;
        case 0x467290u: goto label_467290;
        case 0x467294u: goto label_467294;
        case 0x467298u: goto label_467298;
        case 0x46729cu: goto label_46729c;
        case 0x4672a0u: goto label_4672a0;
        case 0x4672a4u: goto label_4672a4;
        case 0x4672a8u: goto label_4672a8;
        case 0x4672acu: goto label_4672ac;
        case 0x4672b0u: goto label_4672b0;
        case 0x4672b4u: goto label_4672b4;
        case 0x4672b8u: goto label_4672b8;
        case 0x4672bcu: goto label_4672bc;
        case 0x4672c0u: goto label_4672c0;
        case 0x4672c4u: goto label_4672c4;
        case 0x4672c8u: goto label_4672c8;
        case 0x4672ccu: goto label_4672cc;
        case 0x4672d0u: goto label_4672d0;
        case 0x4672d4u: goto label_4672d4;
        case 0x4672d8u: goto label_4672d8;
        case 0x4672dcu: goto label_4672dc;
        case 0x4672e0u: goto label_4672e0;
        case 0x4672e4u: goto label_4672e4;
        case 0x4672e8u: goto label_4672e8;
        case 0x4672ecu: goto label_4672ec;
        case 0x4672f0u: goto label_4672f0;
        case 0x4672f4u: goto label_4672f4;
        case 0x4672f8u: goto label_4672f8;
        case 0x4672fcu: goto label_4672fc;
        case 0x467300u: goto label_467300;
        case 0x467304u: goto label_467304;
        case 0x467308u: goto label_467308;
        case 0x46730cu: goto label_46730c;
        case 0x467310u: goto label_467310;
        case 0x467314u: goto label_467314;
        case 0x467318u: goto label_467318;
        case 0x46731cu: goto label_46731c;
        case 0x467320u: goto label_467320;
        case 0x467324u: goto label_467324;
        case 0x467328u: goto label_467328;
        case 0x46732cu: goto label_46732c;
        case 0x467330u: goto label_467330;
        case 0x467334u: goto label_467334;
        case 0x467338u: goto label_467338;
        case 0x46733cu: goto label_46733c;
        case 0x467340u: goto label_467340;
        case 0x467344u: goto label_467344;
        case 0x467348u: goto label_467348;
        case 0x46734cu: goto label_46734c;
        case 0x467350u: goto label_467350;
        case 0x467354u: goto label_467354;
        case 0x467358u: goto label_467358;
        case 0x46735cu: goto label_46735c;
        case 0x467360u: goto label_467360;
        case 0x467364u: goto label_467364;
        case 0x467368u: goto label_467368;
        case 0x46736cu: goto label_46736c;
        case 0x467370u: goto label_467370;
        case 0x467374u: goto label_467374;
        case 0x467378u: goto label_467378;
        case 0x46737cu: goto label_46737c;
        case 0x467380u: goto label_467380;
        case 0x467384u: goto label_467384;
        case 0x467388u: goto label_467388;
        case 0x46738cu: goto label_46738c;
        case 0x467390u: goto label_467390;
        case 0x467394u: goto label_467394;
        case 0x467398u: goto label_467398;
        case 0x46739cu: goto label_46739c;
        case 0x4673a0u: goto label_4673a0;
        case 0x4673a4u: goto label_4673a4;
        case 0x4673a8u: goto label_4673a8;
        case 0x4673acu: goto label_4673ac;
        case 0x4673b0u: goto label_4673b0;
        case 0x4673b4u: goto label_4673b4;
        case 0x4673b8u: goto label_4673b8;
        case 0x4673bcu: goto label_4673bc;
        case 0x4673c0u: goto label_4673c0;
        case 0x4673c4u: goto label_4673c4;
        case 0x4673c8u: goto label_4673c8;
        case 0x4673ccu: goto label_4673cc;
        case 0x4673d0u: goto label_4673d0;
        case 0x4673d4u: goto label_4673d4;
        case 0x4673d8u: goto label_4673d8;
        case 0x4673dcu: goto label_4673dc;
        case 0x4673e0u: goto label_4673e0;
        case 0x4673e4u: goto label_4673e4;
        case 0x4673e8u: goto label_4673e8;
        case 0x4673ecu: goto label_4673ec;
        case 0x4673f0u: goto label_4673f0;
        case 0x4673f4u: goto label_4673f4;
        case 0x4673f8u: goto label_4673f8;
        case 0x4673fcu: goto label_4673fc;
        case 0x467400u: goto label_467400;
        case 0x467404u: goto label_467404;
        case 0x467408u: goto label_467408;
        case 0x46740cu: goto label_46740c;
        case 0x467410u: goto label_467410;
        case 0x467414u: goto label_467414;
        case 0x467418u: goto label_467418;
        case 0x46741cu: goto label_46741c;
        case 0x467420u: goto label_467420;
        case 0x467424u: goto label_467424;
        case 0x467428u: goto label_467428;
        case 0x46742cu: goto label_46742c;
        case 0x467430u: goto label_467430;
        case 0x467434u: goto label_467434;
        case 0x467438u: goto label_467438;
        case 0x46743cu: goto label_46743c;
        default: break;
    }

    ctx->pc = 0x4667a0u;

label_4667a0:
    // 0x4667a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4667a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4667a4:
    // 0x4667a4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x4667a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_4667a8:
    // 0x4667a8: 0x2442e7c0  addiu       $v0, $v0, -0x1840
    ctx->pc = 0x4667a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
label_4667ac:
    // 0x4667ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4667acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4667b0:
    // 0x4667b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4667b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4667b4:
    // 0x4667b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4667b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4667b8:
    // 0x4667b8: 0x3e00008  jr          $ra
label_4667bc:
    if (ctx->pc == 0x4667BCu) {
        ctx->pc = 0x4667BCu;
            // 0x4667bc: 0xac6575e8  sw          $a1, 0x75E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30184), GPR_U32(ctx, 5));
        ctx->pc = 0x4667C0u;
        goto label_4667c0;
    }
    ctx->pc = 0x4667B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4667BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4667B8u;
            // 0x4667bc: 0xac6575e8  sw          $a1, 0x75E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30184), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4667C0u;
label_4667c0:
    // 0x4667c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4667c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4667c4:
    // 0x4667c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4667c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4667c8:
    // 0x4667c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4667c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4667cc:
    // 0x4667cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4667ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4667d0:
    // 0x4667d0: 0x8c900068  lw          $s0, 0x68($a0)
    ctx->pc = 0x4667d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_4667d4:
    // 0x4667d4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_4667d8:
    if (ctx->pc == 0x4667D8u) {
        ctx->pc = 0x4667D8u;
            // 0x4667d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4667DCu;
        goto label_4667dc;
    }
    ctx->pc = 0x4667D4u;
    {
        const bool branch_taken_0x4667d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4667D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4667D4u;
            // 0x4667d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4667d4) {
            ctx->pc = 0x466804u;
            goto label_466804;
        }
    }
    ctx->pc = 0x4667DCu;
label_4667dc:
    // 0x4667dc: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_4667e0:
    if (ctx->pc == 0x4667E0u) {
        ctx->pc = 0x4667E0u;
            // 0x4667e0: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x4667E4u;
        goto label_4667e4;
    }
    ctx->pc = 0x4667DCu;
    {
        const bool branch_taken_0x4667dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4667dc) {
            ctx->pc = 0x4667E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4667DCu;
            // 0x4667e0: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466808u;
            goto label_466808;
        }
    }
    ctx->pc = 0x4667E4u;
label_4667e4:
    // 0x4667e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x4667e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_4667e8:
    // 0x4667e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4667e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4667ec:
    // 0x4667ec: 0x24a55440  addiu       $a1, $a1, 0x5440
    ctx->pc = 0x4667ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21568));
label_4667f0:
    // 0x4667f0: 0x24060310  addiu       $a2, $zero, 0x310
    ctx->pc = 0x4667f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_4667f4:
    // 0x4667f4: 0xc0407e8  jal         func_101FA0
label_4667f8:
    if (ctx->pc == 0x4667F8u) {
        ctx->pc = 0x4667F8u;
            // 0x4667f8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x4667FCu;
        goto label_4667fc;
    }
    ctx->pc = 0x4667F4u;
    SET_GPR_U32(ctx, 31, 0x4667FCu);
    ctx->pc = 0x4667F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4667F4u;
            // 0x4667f8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4667FCu; }
        if (ctx->pc != 0x4667FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4667FCu; }
        if (ctx->pc != 0x4667FCu) { return; }
    }
    ctx->pc = 0x4667FCu;
label_4667fc:
    // 0x4667fc: 0xc0400a8  jal         func_1002A0
label_466800:
    if (ctx->pc == 0x466800u) {
        ctx->pc = 0x466800u;
            // 0x466800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466804u;
        goto label_466804;
    }
    ctx->pc = 0x4667FCu;
    SET_GPR_U32(ctx, 31, 0x466804u);
    ctx->pc = 0x466800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4667FCu;
            // 0x466800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466804u; }
        if (ctx->pc != 0x466804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466804u; }
        if (ctx->pc != 0x466804u) { return; }
    }
    ctx->pc = 0x466804u;
label_466804:
    // 0x466804: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x466804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_466808:
    // 0x466808: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x466808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_46680c:
    // 0x46680c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_466810:
    if (ctx->pc == 0x466810u) {
        ctx->pc = 0x466810u;
            // 0x466810: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x466814u;
        goto label_466814;
    }
    ctx->pc = 0x46680Cu;
    {
        const bool branch_taken_0x46680c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46680c) {
            ctx->pc = 0x466810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46680Cu;
            // 0x466810: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466820u;
            goto label_466820;
        }
    }
    ctx->pc = 0x466814u;
label_466814:
    // 0x466814: 0xc04008c  jal         func_100230
label_466818:
    if (ctx->pc == 0x466818u) {
        ctx->pc = 0x46681Cu;
        goto label_46681c;
    }
    ctx->pc = 0x466814u;
    SET_GPR_U32(ctx, 31, 0x46681Cu);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46681Cu; }
        if (ctx->pc != 0x46681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46681Cu; }
        if (ctx->pc != 0x46681Cu) { return; }
    }
    ctx->pc = 0x46681Cu;
label_46681c:
    // 0x46681c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x46681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_466820:
    // 0x466820: 0xc0d37dc  jal         func_34DF70
label_466824:
    if (ctx->pc == 0x466824u) {
        ctx->pc = 0x466824u;
            // 0x466824: 0xae200064  sw          $zero, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x466828u;
        goto label_466828;
    }
    ctx->pc = 0x466820u;
    SET_GPR_U32(ctx, 31, 0x466828u);
    ctx->pc = 0x466824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466820u;
            // 0x466824: 0xae200064  sw          $zero, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466828u; }
        if (ctx->pc != 0x466828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466828u; }
        if (ctx->pc != 0x466828u) { return; }
    }
    ctx->pc = 0x466828u;
label_466828:
    // 0x466828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x466828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46682c:
    // 0x46682c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46682cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466830:
    // 0x466830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_466834:
    // 0x466834: 0x3e00008  jr          $ra
label_466838:
    if (ctx->pc == 0x466838u) {
        ctx->pc = 0x466838u;
            // 0x466838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x46683Cu;
        goto label_46683c;
    }
    ctx->pc = 0x466834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466834u;
            // 0x466838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46683Cu;
label_46683c:
    // 0x46683c: 0x0  nop
    ctx->pc = 0x46683cu;
    // NOP
label_466840:
    // 0x466840: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x466840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_466844:
    // 0x466844: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x466844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_466848:
    // 0x466848: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x466848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_46684c:
    // 0x46684c: 0x2442e7b0  addiu       $v0, $v0, -0x1850
    ctx->pc = 0x46684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
label_466850:
    // 0x466850: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x466850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_466854:
    // 0x466854: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x466854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_466858:
    // 0x466858: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x466858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46685c:
    // 0x46685c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x46685cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_466860:
    // 0x466860: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x466860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_466864:
    // 0x466864: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x466864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_466868:
    // 0x466868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x466868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46686c:
    // 0x46686c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_466870:
    // 0x466870: 0x9085006c  lbu         $a1, 0x6C($a0)
    ctx->pc = 0x466870u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
label_466874:
    // 0x466874: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x466874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_466878:
    // 0x466878: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x466878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46687c:
    // 0x46687c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x46687cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_466880:
    // 0x466880: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x466880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_466884:
    // 0x466884: 0x3b080  sll         $s6, $v1, 2
    ctx->pc = 0x466884u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_466888:
    // 0x466888: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x466888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46688c:
    // 0x46688c: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x46688cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_466890:
    // 0x466890: 0xc040180  jal         func_100600
label_466894:
    if (ctx->pc == 0x466894u) {
        ctx->pc = 0x466894u;
            // 0x466894: 0x24041eb0  addiu       $a0, $zero, 0x1EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7856));
        ctx->pc = 0x466898u;
        goto label_466898;
    }
    ctx->pc = 0x466890u;
    SET_GPR_U32(ctx, 31, 0x466898u);
    ctx->pc = 0x466894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466890u;
            // 0x466894: 0x24041eb0  addiu       $a0, $zero, 0x1EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466898u; }
        if (ctx->pc != 0x466898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466898u; }
        if (ctx->pc != 0x466898u) { return; }
    }
    ctx->pc = 0x466898u;
label_466898:
    // 0x466898: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_46689c:
    if (ctx->pc == 0x46689Cu) {
        ctx->pc = 0x46689Cu;
            // 0x46689c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4668A0u;
        goto label_4668a0;
    }
    ctx->pc = 0x466898u;
    {
        const bool branch_taken_0x466898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46689Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466898u;
            // 0x46689c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466898) {
            ctx->pc = 0x4668C0u;
            goto label_4668c0;
        }
    }
    ctx->pc = 0x4668A0u;
label_4668a0:
    // 0x4668a0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x4668a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_4668a4:
    // 0x4668a4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x4668a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_4668a8:
    // 0x4668a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4668a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4668ac:
    // 0x4668ac: 0x24a55550  addiu       $a1, $a1, 0x5550
    ctx->pc = 0x4668acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21840));
label_4668b0:
    // 0x4668b0: 0x24c65440  addiu       $a2, $a2, 0x5440
    ctx->pc = 0x4668b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21568));
label_4668b4:
    // 0x4668b4: 0x24070310  addiu       $a3, $zero, 0x310
    ctx->pc = 0x4668b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_4668b8:
    // 0x4668b8: 0xc040804  jal         func_102010
label_4668bc:
    if (ctx->pc == 0x4668BCu) {
        ctx->pc = 0x4668BCu;
            // 0x4668bc: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x4668C0u;
        goto label_4668c0;
    }
    ctx->pc = 0x4668B8u;
    SET_GPR_U32(ctx, 31, 0x4668C0u);
    ctx->pc = 0x4668BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4668B8u;
            // 0x4668bc: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4668C0u; }
        if (ctx->pc != 0x4668C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4668C0u; }
        if (ctx->pc != 0x4668C0u) { return; }
    }
    ctx->pc = 0x4668C0u;
label_4668c0:
    // 0x4668c0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x4668c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4668c4:
    // 0x4668c4: 0xaeb10068  sw          $s1, 0x68($s5)
    ctx->pc = 0x4668c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 17));
label_4668c8:
    // 0x4668c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4668c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4668cc:
    // 0x4668cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4668ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4668d0:
    // 0x4668d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4668d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4668d4:
    // 0x4668d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4668d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4668d8:
    // 0x4668d8: 0xc040138  jal         func_1004E0
label_4668dc:
    if (ctx->pc == 0x4668DCu) {
        ctx->pc = 0x4668DCu;
            // 0x4668dc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x4668E0u;
        goto label_4668e0;
    }
    ctx->pc = 0x4668D8u;
    SET_GPR_U32(ctx, 31, 0x4668E0u);
    ctx->pc = 0x4668DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4668D8u;
            // 0x4668dc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4668E0u; }
        if (ctx->pc != 0x4668E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4668E0u; }
        if (ctx->pc != 0x4668E0u) { return; }
    }
    ctx->pc = 0x4668E0u;
label_4668e0:
    // 0x4668e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4668e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4668e4:
    // 0x4668e4: 0x321200ff  andi        $s2, $s0, 0xFF
    ctx->pc = 0x4668e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4668e8:
    // 0x4668e8: 0xaea20064  sw          $v0, 0x64($s5)
    ctx->pc = 0x4668e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
label_4668ec:
    // 0x4668ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4668ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4668f0:
    // 0x4668f0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x4668f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_4668f4:
    // 0x4668f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4668f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4668f8:
    // 0x4668f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4668f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4668fc:
    // 0x4668fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4668fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_466900:
    // 0x466900: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x466900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_466904:
    // 0x466904: 0xc04a576  jal         func_1295D8
label_466908:
    if (ctx->pc == 0x466908u) {
        ctx->pc = 0x466908u;
            // 0x466908: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x46690Cu;
        goto label_46690c;
    }
    ctx->pc = 0x466904u;
    SET_GPR_U32(ctx, 31, 0x46690Cu);
    ctx->pc = 0x466908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466904u;
            // 0x466908: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46690Cu; }
        if (ctx->pc != 0x46690Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46690Cu; }
        if (ctx->pc != 0x46690Cu) { return; }
    }
    ctx->pc = 0x46690Cu;
label_46690c:
    // 0x46690c: 0x8eb30068  lw          $s3, 0x68($s5)
    ctx->pc = 0x46690cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_466910:
    // 0x466910: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x466910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_466914:
    // 0x466914: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_466918:
    if (ctx->pc == 0x466918u) {
        ctx->pc = 0x466918u;
            // 0x466918: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x46691Cu;
        goto label_46691c;
    }
    ctx->pc = 0x466914u;
    {
        const bool branch_taken_0x466914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466914u;
            // 0x466918: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466914) {
            ctx->pc = 0x466938u;
            goto label_466938;
        }
    }
    ctx->pc = 0x46691Cu;
label_46691c:
    // 0x46691c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x46691cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_466920:
    // 0x466920: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x466920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_466924:
    // 0x466924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x466924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_466928:
    // 0x466928: 0x0  nop
    ctx->pc = 0x466928u;
    // NOP
label_46692c:
    // 0x46692c: 0x0  nop
    ctx->pc = 0x46692cu;
    // NOP
label_466930:
    // 0x466930: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_466934:
    if (ctx->pc == 0x466934u) {
        ctx->pc = 0x466938u;
        goto label_466938;
    }
    ctx->pc = 0x466930u;
    {
        const bool branch_taken_0x466930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466930) {
            ctx->pc = 0x46691Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46691c;
        }
    }
    ctx->pc = 0x466938u;
label_466938:
    // 0x466938: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46693c:
    // 0x46693c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x46693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466940:
    // 0x466940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466944:
    // 0x466944: 0x0  nop
    ctx->pc = 0x466944u;
    // NOP
label_466948:
    // 0x466948: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_46694c:
    // 0x46694c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_466950:
    if (ctx->pc == 0x466950u) {
        ctx->pc = 0x466950u;
            // 0x466950: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x466954u;
        goto label_466954;
    }
    ctx->pc = 0x46694Cu;
    {
        const bool branch_taken_0x46694c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x46694c) {
            ctx->pc = 0x466950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46694Cu;
            // 0x466950: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x466964u;
            goto label_466964;
        }
    }
    ctx->pc = 0x466954u;
label_466954:
    // 0x466954: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466958:
    // 0x466958: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_46695c:
    // 0x46695c: 0x10000007  b           . + 4 + (0x7 << 2)
label_466960:
    if (ctx->pc == 0x466960u) {
        ctx->pc = 0x466960u;
            // 0x466960: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x466964u;
        goto label_466964;
    }
    ctx->pc = 0x46695Cu;
    {
        const bool branch_taken_0x46695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46695Cu;
            // 0x466960: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46695c) {
            ctx->pc = 0x46697Cu;
            goto label_46697c;
        }
    }
    ctx->pc = 0x466964u;
label_466964:
    // 0x466964: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466968:
    // 0x466968: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_46696c:
    // 0x46696c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x46696cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466970:
    // 0x466970: 0x0  nop
    ctx->pc = 0x466970u;
    // NOP
label_466974:
    // 0x466974: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x466974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_466978:
    // 0x466978: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46697c:
    // 0x46697c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x46697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_466980:
    // 0x466980: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x466980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_466984:
    // 0x466984: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466988:
    // 0x466988: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x466988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_46698c:
    // 0x46698c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46698cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466990:
    // 0x466990: 0x0  nop
    ctx->pc = 0x466990u;
    // NOP
label_466994:
    // 0x466994: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466998:
    // 0x466998: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_46699c:
    if (ctx->pc == 0x46699Cu) {
        ctx->pc = 0x46699Cu;
            // 0x46699c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->pc = 0x4669A0u;
        goto label_4669a0;
    }
    ctx->pc = 0x466998u;
    {
        const bool branch_taken_0x466998 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x46699Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466998u;
            // 0x46699c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466998) {
            ctx->pc = 0x4669B0u;
            goto label_4669b0;
        }
    }
    ctx->pc = 0x4669A0u;
label_4669a0:
    // 0x4669a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4669a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4669a4:
    // 0x4669a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4669a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4669a8:
    // 0x4669a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_4669ac:
    if (ctx->pc == 0x4669ACu) {
        ctx->pc = 0x4669ACu;
            // 0x4669ac: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x4669B0u;
        goto label_4669b0;
    }
    ctx->pc = 0x4669A8u;
    {
        const bool branch_taken_0x4669a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4669ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4669A8u;
            // 0x4669ac: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4669a8) {
            ctx->pc = 0x4669CCu;
            goto label_4669cc;
        }
    }
    ctx->pc = 0x4669B0u;
label_4669b0:
    // 0x4669b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4669b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4669b4:
    // 0x4669b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4669b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4669b8:
    // 0x4669b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4669b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4669bc:
    // 0x4669bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4669bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4669c0:
    // 0x4669c0: 0x0  nop
    ctx->pc = 0x4669c0u;
    // NOP
label_4669c4:
    // 0x4669c4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4669c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4669c8:
    // 0x4669c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4669c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4669cc:
    // 0x4669cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4669ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4669d0:
    // 0x4669d0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x4669d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_4669d4:
    // 0x4669d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4669d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4669d8:
    // 0x4669d8: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x4669d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4669dc:
    // 0x4669dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4669dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4669e0:
    // 0x4669e0: 0x1010  mfhi        $v0
    ctx->pc = 0x4669e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4669e4:
    // 0x4669e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4669e8:
    if (ctx->pc == 0x4669E8u) {
        ctx->pc = 0x4669E8u;
            // 0x4669e8: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->pc = 0x4669ECu;
        goto label_4669ec;
    }
    ctx->pc = 0x4669E4u;
    {
        const bool branch_taken_0x4669e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4669E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4669E4u;
            // 0x4669e8: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4669e4) {
            ctx->pc = 0x4669FCu;
            goto label_4669fc;
        }
    }
    ctx->pc = 0x4669ECu;
label_4669ec:
    // 0x4669ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4669ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4669f0:
    // 0x4669f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4669f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4669f4:
    // 0x4669f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_4669f8:
    if (ctx->pc == 0x4669F8u) {
        ctx->pc = 0x4669F8u;
            // 0x4669f8: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4669FCu;
        goto label_4669fc;
    }
    ctx->pc = 0x4669F4u;
    {
        const bool branch_taken_0x4669f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4669F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4669F4u;
            // 0x4669f8: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4669f4) {
            ctx->pc = 0x466A18u;
            goto label_466a18;
        }
    }
    ctx->pc = 0x4669FCu;
label_4669fc:
    // 0x4669fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4669fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466a00:
    // 0x466a00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466a04:
    // 0x466a04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466a04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466a08:
    // 0x466a08: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466a0c:
    // 0x466a0c: 0x0  nop
    ctx->pc = 0x466a0cu;
    // NOP
label_466a10:
    // 0x466a10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x466a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_466a14:
    // 0x466a14: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466a18:
    // 0x466a18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x466a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_466a1c:
    // 0x466a1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x466a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_466a20:
    // 0x466a20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466a24:
    // 0x466a24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x466a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_466a28:
    // 0x466a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466a2c:
    // 0x466a2c: 0x0  nop
    ctx->pc = 0x466a2cu;
    // NOP
label_466a30:
    // 0x466a30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466a34:
    // 0x466a34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466a38:
    if (ctx->pc == 0x466A38u) {
        ctx->pc = 0x466A38u;
            // 0x466a38: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x466A3Cu;
        goto label_466a3c;
    }
    ctx->pc = 0x466A34u;
    {
        const bool branch_taken_0x466a34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x466A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466A34u;
            // 0x466a38: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466a34) {
            ctx->pc = 0x466A4Cu;
            goto label_466a4c;
        }
    }
    ctx->pc = 0x466A3Cu;
label_466a3c:
    // 0x466a3c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466a40:
    // 0x466a40: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x466a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_466a44:
    // 0x466a44: 0x10000008  b           . + 4 + (0x8 << 2)
label_466a48:
    if (ctx->pc == 0x466A48u) {
        ctx->pc = 0x466A48u;
            // 0x466a48: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x466A4Cu;
        goto label_466a4c;
    }
    ctx->pc = 0x466A44u;
    {
        const bool branch_taken_0x466a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466A44u;
            // 0x466a48: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466a44) {
            ctx->pc = 0x466A68u;
            goto label_466a68;
        }
    }
    ctx->pc = 0x466A4Cu;
label_466a4c:
    // 0x466a4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x466a4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466a50:
    // 0x466a50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466a54:
    // 0x466a54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466a54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466a58:
    // 0x466a58: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x466a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_466a5c:
    // 0x466a5c: 0x0  nop
    ctx->pc = 0x466a5cu;
    // NOP
label_466a60:
    // 0x466a60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x466a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_466a64:
    // 0x466a64: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x466a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_466a68:
    // 0x466a68: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466a6c:
    // 0x466a6c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x466a6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_466a70:
    // 0x466a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466a74:
    // 0x466a74: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466a78:
    // 0x466a78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466a7c:
    // 0x466a7c: 0x1010  mfhi        $v0
    ctx->pc = 0x466a7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_466a80:
    // 0x466a80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466a84:
    if (ctx->pc == 0x466A84u) {
        ctx->pc = 0x466A84u;
            // 0x466a84: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x466A88u;
        goto label_466a88;
    }
    ctx->pc = 0x466A80u;
    {
        const bool branch_taken_0x466a80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x466A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466A80u;
            // 0x466a84: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466a80) {
            ctx->pc = 0x466A98u;
            goto label_466a98;
        }
    }
    ctx->pc = 0x466A88u;
label_466a88:
    // 0x466a88: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466a88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466a8c:
    // 0x466a8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466a90:
    // 0x466a90: 0x10000008  b           . + 4 + (0x8 << 2)
label_466a94:
    if (ctx->pc == 0x466A94u) {
        ctx->pc = 0x466A94u;
            // 0x466a94: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x466A98u;
        goto label_466a98;
    }
    ctx->pc = 0x466A90u;
    {
        const bool branch_taken_0x466a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466A90u;
            // 0x466a94: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x466a90) {
            ctx->pc = 0x466AB4u;
            goto label_466ab4;
        }
    }
    ctx->pc = 0x466A98u;
label_466a98:
    // 0x466a98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x466a98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466a9c:
    // 0x466a9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466aa0:
    // 0x466aa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466aa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466aa4:
    // 0x466aa4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466aa8:
    // 0x466aa8: 0x0  nop
    ctx->pc = 0x466aa8u;
    // NOP
label_466aac:
    // 0x466aac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x466aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_466ab0:
    // 0x466ab0: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466ab4:
    // 0x466ab4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x466ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_466ab8:
    // 0x466ab8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x466ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_466abc:
    // 0x466abc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466ac0:
    // 0x466ac0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x466ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_466ac4:
    // 0x466ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466ac8:
    // 0x466ac8: 0x0  nop
    ctx->pc = 0x466ac8u;
    // NOP
label_466acc:
    // 0x466acc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466ad0:
    // 0x466ad0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466ad4:
    if (ctx->pc == 0x466AD4u) {
        ctx->pc = 0x466AD4u;
            // 0x466ad4: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x466AD8u;
        goto label_466ad8;
    }
    ctx->pc = 0x466AD0u;
    {
        const bool branch_taken_0x466ad0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x466AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466AD0u;
            // 0x466ad4: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466ad0) {
            ctx->pc = 0x466AE8u;
            goto label_466ae8;
        }
    }
    ctx->pc = 0x466AD8u;
label_466ad8:
    // 0x466ad8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466ad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466adc:
    // 0x466adc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x466adcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_466ae0:
    // 0x466ae0: 0x10000008  b           . + 4 + (0x8 << 2)
label_466ae4:
    if (ctx->pc == 0x466AE4u) {
        ctx->pc = 0x466AE4u;
            // 0x466ae4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x466AE8u;
        goto label_466ae8;
    }
    ctx->pc = 0x466AE0u;
    {
        const bool branch_taken_0x466ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466AE0u;
            // 0x466ae4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466ae0) {
            ctx->pc = 0x466B04u;
            goto label_466b04;
        }
    }
    ctx->pc = 0x466AE8u;
label_466ae8:
    // 0x466ae8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x466ae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466aec:
    // 0x466aec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466af0:
    // 0x466af0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466af0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466af4:
    // 0x466af4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x466af4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_466af8:
    // 0x466af8: 0x0  nop
    ctx->pc = 0x466af8u;
    // NOP
label_466afc:
    // 0x466afc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x466afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_466b00:
    // 0x466b00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x466b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_466b04:
    // 0x466b04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466b08:
    // 0x466b08: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x466b08u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_466b0c:
    // 0x466b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466b10:
    // 0x466b10: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466b14:
    // 0x466b14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466b18:
    // 0x466b18: 0x1010  mfhi        $v0
    ctx->pc = 0x466b18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_466b1c:
    // 0x466b1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466b20:
    if (ctx->pc == 0x466B20u) {
        ctx->pc = 0x466B20u;
            // 0x466b20: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x466B24u;
        goto label_466b24;
    }
    ctx->pc = 0x466B1Cu;
    {
        const bool branch_taken_0x466b1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x466B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466B1Cu;
            // 0x466b20: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466b1c) {
            ctx->pc = 0x466B34u;
            goto label_466b34;
        }
    }
    ctx->pc = 0x466B24u;
label_466b24:
    // 0x466b24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466b24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466b28:
    // 0x466b28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466b2c:
    // 0x466b2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_466b30:
    if (ctx->pc == 0x466B30u) {
        ctx->pc = 0x466B30u;
            // 0x466b30: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x466B34u;
        goto label_466b34;
    }
    ctx->pc = 0x466B2Cu;
    {
        const bool branch_taken_0x466b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466B2Cu;
            // 0x466b30: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x466b2c) {
            ctx->pc = 0x466B50u;
            goto label_466b50;
        }
    }
    ctx->pc = 0x466B34u;
label_466b34:
    // 0x466b34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x466b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466b38:
    // 0x466b38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466b3c:
    // 0x466b3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466b3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466b40:
    // 0x466b40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466b40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466b44:
    // 0x466b44: 0x0  nop
    ctx->pc = 0x466b44u;
    // NOP
label_466b48:
    // 0x466b48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x466b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_466b4c:
    // 0x466b4c: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466b50:
    // 0x466b50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x466b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_466b54:
    // 0x466b54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x466b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_466b58:
    // 0x466b58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466b5c:
    // 0x466b5c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x466b5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_466b60:
    // 0x466b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466b64:
    // 0x466b64: 0x0  nop
    ctx->pc = 0x466b64u;
    // NOP
label_466b68:
    // 0x466b68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466b68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466b6c:
    // 0x466b6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466b70:
    if (ctx->pc == 0x466B70u) {
        ctx->pc = 0x466B70u;
            // 0x466b70: 0xafa300d8  sw          $v1, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
        ctx->pc = 0x466B74u;
        goto label_466b74;
    }
    ctx->pc = 0x466B6Cu;
    {
        const bool branch_taken_0x466b6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x466B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466B6Cu;
            // 0x466b70: 0xafa300d8  sw          $v1, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466b6c) {
            ctx->pc = 0x466B84u;
            goto label_466b84;
        }
    }
    ctx->pc = 0x466B74u;
label_466b74:
    // 0x466b74: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466b74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466b78:
    // 0x466b78: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x466b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_466b7c:
    // 0x466b7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_466b80:
    if (ctx->pc == 0x466B80u) {
        ctx->pc = 0x466B80u;
            // 0x466b80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x466B84u;
        goto label_466b84;
    }
    ctx->pc = 0x466B7Cu;
    {
        const bool branch_taken_0x466b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466B7Cu;
            // 0x466b80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466b7c) {
            ctx->pc = 0x466BA0u;
            goto label_466ba0;
        }
    }
    ctx->pc = 0x466B84u;
label_466b84:
    // 0x466b84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x466b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466b88:
    // 0x466b88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466b8c:
    // 0x466b8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466b90:
    // 0x466b90: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x466b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_466b94:
    // 0x466b94: 0x0  nop
    ctx->pc = 0x466b94u;
    // NOP
label_466b98:
    // 0x466b98: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x466b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_466b9c:
    // 0x466b9c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x466b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_466ba0:
    // 0x466ba0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466ba4:
    // 0x466ba4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x466ba4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_466ba8:
    // 0x466ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466bac:
    // 0x466bac: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466bb0:
    // 0x466bb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466bb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466bb4:
    // 0x466bb4: 0x1010  mfhi        $v0
    ctx->pc = 0x466bb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_466bb8:
    // 0x466bb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466bbc:
    if (ctx->pc == 0x466BBCu) {
        ctx->pc = 0x466BBCu;
            // 0x466bbc: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x466BC0u;
        goto label_466bc0;
    }
    ctx->pc = 0x466BB8u;
    {
        const bool branch_taken_0x466bb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x466BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466BB8u;
            // 0x466bbc: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466bb8) {
            ctx->pc = 0x466BD0u;
            goto label_466bd0;
        }
    }
    ctx->pc = 0x466BC0u;
label_466bc0:
    // 0x466bc0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466bc4:
    // 0x466bc4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466bc8:
    // 0x466bc8: 0x10000008  b           . + 4 + (0x8 << 2)
label_466bcc:
    if (ctx->pc == 0x466BCCu) {
        ctx->pc = 0x466BCCu;
            // 0x466bcc: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x466BD0u;
        goto label_466bd0;
    }
    ctx->pc = 0x466BC8u;
    {
        const bool branch_taken_0x466bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466BC8u;
            // 0x466bcc: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x466bc8) {
            ctx->pc = 0x466BECu;
            goto label_466bec;
        }
    }
    ctx->pc = 0x466BD0u;
label_466bd0:
    // 0x466bd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x466bd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466bd4:
    // 0x466bd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466bd8:
    // 0x466bd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466bdc:
    // 0x466bdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466be0:
    // 0x466be0: 0x0  nop
    ctx->pc = 0x466be0u;
    // NOP
label_466be4:
    // 0x466be4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x466be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_466be8:
    // 0x466be8: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466bec:
    // 0x466bec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x466becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_466bf0:
    // 0x466bf0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x466bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_466bf4:
    // 0x466bf4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466bf8:
    // 0x466bf8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x466bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_466bfc:
    // 0x466bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466c00:
    // 0x466c00: 0x0  nop
    ctx->pc = 0x466c00u;
    // NOP
label_466c04:
    // 0x466c04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466c04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466c08:
    // 0x466c08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466c0c:
    if (ctx->pc == 0x466C0Cu) {
        ctx->pc = 0x466C0Cu;
            // 0x466c0c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x466C10u;
        goto label_466c10;
    }
    ctx->pc = 0x466C08u;
    {
        const bool branch_taken_0x466c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x466C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466C08u;
            // 0x466c0c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466c08) {
            ctx->pc = 0x466C20u;
            goto label_466c20;
        }
    }
    ctx->pc = 0x466C10u;
label_466c10:
    // 0x466c10: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466c14:
    // 0x466c14: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x466c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_466c18:
    // 0x466c18: 0x10000008  b           . + 4 + (0x8 << 2)
label_466c1c:
    if (ctx->pc == 0x466C1Cu) {
        ctx->pc = 0x466C1Cu;
            // 0x466c1c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x466C20u;
        goto label_466c20;
    }
    ctx->pc = 0x466C18u;
    {
        const bool branch_taken_0x466c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466C18u;
            // 0x466c1c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466c18) {
            ctx->pc = 0x466C3Cu;
            goto label_466c3c;
        }
    }
    ctx->pc = 0x466C20u;
label_466c20:
    // 0x466c20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x466c20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466c24:
    // 0x466c24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466c28:
    // 0x466c28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466c2c:
    // 0x466c2c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x466c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_466c30:
    // 0x466c30: 0x0  nop
    ctx->pc = 0x466c30u;
    // NOP
label_466c34:
    // 0x466c34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x466c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_466c38:
    // 0x466c38: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x466c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_466c3c:
    // 0x466c3c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x466c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_466c40:
    // 0x466c40: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x466c40u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_466c44:
    // 0x466c44: 0x2010  mfhi        $a0
    ctx->pc = 0x466c44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_466c48:
    // 0x466c48: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x466c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_466c4c:
    // 0x466c4c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_466c50:
    if (ctx->pc == 0x466C50u) {
        ctx->pc = 0x466C50u;
            // 0x466c50: 0xafa400e4  sw          $a0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
        ctx->pc = 0x466C54u;
        goto label_466c54;
    }
    ctx->pc = 0x466C4Cu;
    {
        const bool branch_taken_0x466c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466C4Cu;
            // 0x466c50: 0xafa400e4  sw          $a0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466c4c) {
            ctx->pc = 0x466C70u;
            goto label_466c70;
        }
    }
    ctx->pc = 0x466C54u;
label_466c54:
    // 0x466c54: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x466c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_466c58:
    // 0x466c58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x466c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_466c5c:
    // 0x466c5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x466c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_466c60:
    // 0x466c60: 0x0  nop
    ctx->pc = 0x466c60u;
    // NOP
label_466c64:
    // 0x466c64: 0x0  nop
    ctx->pc = 0x466c64u;
    // NOP
label_466c68:
    // 0x466c68: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_466c6c:
    if (ctx->pc == 0x466C6Cu) {
        ctx->pc = 0x466C70u;
        goto label_466c70;
    }
    ctx->pc = 0x466C68u;
    {
        const bool branch_taken_0x466c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466c68) {
            ctx->pc = 0x466C54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_466c54;
        }
    }
    ctx->pc = 0x466C70u;
label_466c70:
    // 0x466c70: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x466c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_466c74:
    // 0x466c74: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x466c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_466c78:
    // 0x466c78: 0x245100c0  addiu       $s1, $v0, 0xC0
    ctx->pc = 0x466c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_466c7c:
    // 0x466c7c: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x466c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_466c80:
    // 0x466c80: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x466c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466c84:
    // 0x466c84: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x466c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_466c88:
    // 0x466c88: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x466c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466c8c:
    // 0x466c8c: 0x2442e7b0  addiu       $v0, $v0, -0x1850
    ctx->pc = 0x466c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
label_466c90:
    // 0x466c90: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x466c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_466c94:
    // 0x466c94: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x466c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_466c98:
    // 0x466c98: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x466c98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_466c9c:
    // 0x466c9c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x466c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_466ca0:
    // 0x466ca0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x466ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_466ca4:
    // 0x466ca4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x466ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_466ca8:
    // 0x466ca8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x466ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_466cac:
    // 0x466cac: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x466cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_466cb0:
    // 0x466cb0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x466cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_466cb4:
    // 0x466cb4: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x466cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_466cb8:
    // 0x466cb8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x466cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_466cbc:
    // 0x466cbc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x466cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_466cc0:
    // 0x466cc0: 0x2403521c  addiu       $v1, $zero, 0x521C
    ctx->pc = 0x466cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21020));
label_466cc4:
    // 0x466cc4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x466cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_466cc8:
    // 0x466cc8: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x466cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
label_466ccc:
    // 0x466ccc: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x466cccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
label_466cd0:
    // 0x466cd0: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x466cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_466cd4:
    // 0x466cd4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_466cd8:
    if (ctx->pc == 0x466CD8u) {
        ctx->pc = 0x466CD8u;
            // 0x466cd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x466CDCu;
        goto label_466cdc;
    }
    ctx->pc = 0x466CD4u;
    {
        const bool branch_taken_0x466cd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x466cd4) {
            ctx->pc = 0x466CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466CD4u;
            // 0x466cd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466CE8u;
            goto label_466ce8;
        }
    }
    ctx->pc = 0x466CDCu;
label_466cdc:
    // 0x466cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466ce0:
    // 0x466ce0: 0x10000007  b           . + 4 + (0x7 << 2)
label_466ce4:
    if (ctx->pc == 0x466CE4u) {
        ctx->pc = 0x466CE4u;
            // 0x466ce4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x466CE8u;
        goto label_466ce8;
    }
    ctx->pc = 0x466CE0u;
    {
        const bool branch_taken_0x466ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466CE0u;
            // 0x466ce4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x466ce0) {
            ctx->pc = 0x466D00u;
            goto label_466d00;
        }
    }
    ctx->pc = 0x466CE8u;
label_466ce8:
    // 0x466ce8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x466ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_466cec:
    // 0x466cec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x466cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_466cf0:
    // 0x466cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x466cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466cf4:
    // 0x466cf4: 0x0  nop
    ctx->pc = 0x466cf4u;
    // NOP
label_466cf8:
    // 0x466cf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x466cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_466cfc:
    // 0x466cfc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x466cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_466d00:
    // 0x466d00: 0xc602fffc  lwc1        $f2, -0x4($s0)
    ctx->pc = 0x466d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_466d04:
    // 0x466d04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x466d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_466d08:
    // 0x466d08: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x466d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466d0c:
    // 0x466d0c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x466d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_466d10:
    // 0x466d10: 0xe6820028  swc1        $f2, 0x28($s4)
    ctx->pc = 0x466d10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_466d14:
    // 0x466d14: 0xe681002c  swc1        $f1, 0x2C($s4)
    ctx->pc = 0x466d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_466d18:
    // 0x466d18: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x466d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466d1c:
    // 0x466d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466d20:
    // 0x466d20: 0x0  nop
    ctx->pc = 0x466d20u;
    // NOP
label_466d24:
    // 0x466d24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x466d24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466d28:
    // 0x466d28: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_466d2c:
    if (ctx->pc == 0x466D2Cu) {
        ctx->pc = 0x466D2Cu;
            // 0x466d2c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x466D30u;
        goto label_466d30;
    }
    ctx->pc = 0x466D28u;
    {
        const bool branch_taken_0x466d28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x466d28) {
            ctx->pc = 0x466D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466D28u;
            // 0x466d2c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x466D40u;
            goto label_466d40;
        }
    }
    ctx->pc = 0x466D30u;
label_466d30:
    // 0x466d30: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466d30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466d34:
    // 0x466d34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466d38:
    // 0x466d38: 0x10000007  b           . + 4 + (0x7 << 2)
label_466d3c:
    if (ctx->pc == 0x466D3Cu) {
        ctx->pc = 0x466D3Cu;
            // 0x466d3c: 0x8e22fffc  lw          $v0, -0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
        ctx->pc = 0x466D40u;
        goto label_466d40;
    }
    ctx->pc = 0x466D38u;
    {
        const bool branch_taken_0x466d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466D38u;
            // 0x466d3c: 0x8e22fffc  lw          $v0, -0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466d38) {
            ctx->pc = 0x466D58u;
            goto label_466d58;
        }
    }
    ctx->pc = 0x466D40u;
label_466d40:
    // 0x466d40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x466d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_466d44:
    // 0x466d44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x466d44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_466d48:
    // 0x466d48: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x466d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_466d4c:
    // 0x466d4c: 0x0  nop
    ctx->pc = 0x466d4cu;
    // NOP
label_466d50:
    // 0x466d50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x466d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_466d54:
    // 0x466d54: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x466d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_466d58:
    // 0x466d58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x466d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_466d5c:
    // 0x466d5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x466d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_466d60:
    // 0x466d60: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x466d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_466d64:
    // 0x466d64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x466d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_466d68:
    // 0x466d68: 0xc0d879c  jal         func_361E70
label_466d6c:
    if (ctx->pc == 0x466D6Cu) {
        ctx->pc = 0x466D6Cu;
            // 0x466d6c: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x466D70u;
        goto label_466d70;
    }
    ctx->pc = 0x466D68u;
    SET_GPR_U32(ctx, 31, 0x466D70u);
    ctx->pc = 0x466D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466D68u;
            // 0x466d6c: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466D70u; }
        if (ctx->pc != 0x466D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466D70u; }
        if (ctx->pc != 0x466D70u) { return; }
    }
    ctx->pc = 0x466D70u;
label_466d70:
    // 0x466d70: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x466d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_466d74:
    // 0x466d74: 0x26940034  addiu       $s4, $s4, 0x34
    ctx->pc = 0x466d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_466d78:
    // 0x466d78: 0x26730310  addiu       $s3, $s3, 0x310
    ctx->pc = 0x466d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
label_466d7c:
    // 0x466d7c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x466d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_466d80:
    // 0x466d80: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x466d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_466d84:
    // 0x466d84: 0x1e40ffce  bgtz        $s2, . + 4 + (-0x32 << 2)
label_466d88:
    if (ctx->pc == 0x466D88u) {
        ctx->pc = 0x466D88u;
            // 0x466d88: 0x26d6fffc  addiu       $s6, $s6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
        ctx->pc = 0x466D8Cu;
        goto label_466d8c;
    }
    ctx->pc = 0x466D84u;
    {
        const bool branch_taken_0x466d84 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x466D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466D84u;
            // 0x466d88: 0x26d6fffc  addiu       $s6, $s6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466d84) {
            ctx->pc = 0x466CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_466cc0;
        }
    }
    ctx->pc = 0x466D8Cu;
label_466d8c:
    // 0x466d8c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x466d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_466d90:
    // 0x466d90: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x466d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_466d94:
    // 0x466d94: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x466d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_466d98:
    // 0x466d98: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x466d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_466d9c:
    // 0x466d9c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x466d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_466da0:
    // 0x466da0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x466da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_466da4:
    // 0x466da4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x466da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_466da8:
    // 0x466da8: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x466da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_466dac:
    // 0x466dac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x466dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_466db0:
    // 0x466db0: 0xc0a7a88  jal         func_29EA20
label_466db4:
    if (ctx->pc == 0x466DB4u) {
        ctx->pc = 0x466DB4u;
            // 0x466db4: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x466DB8u;
        goto label_466db8;
    }
    ctx->pc = 0x466DB0u;
    SET_GPR_U32(ctx, 31, 0x466DB8u);
    ctx->pc = 0x466DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466DB0u;
            // 0x466db4: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466DB8u; }
        if (ctx->pc != 0x466DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466DB8u; }
        if (ctx->pc != 0x466DB8u) { return; }
    }
    ctx->pc = 0x466DB8u;
label_466db8:
    // 0x466db8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x466db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_466dbc:
    // 0x466dbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x466dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_466dc0:
    // 0x466dc0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_466dc4:
    if (ctx->pc == 0x466DC4u) {
        ctx->pc = 0x466DC4u;
            // 0x466dc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x466DC8u;
        goto label_466dc8;
    }
    ctx->pc = 0x466DC0u;
    {
        const bool branch_taken_0x466dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x466DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466DC0u;
            // 0x466dc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466dc0) {
            ctx->pc = 0x466DE0u;
            goto label_466de0;
        }
    }
    ctx->pc = 0x466DC8u;
label_466dc8:
    // 0x466dc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x466dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_466dcc:
    // 0x466dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x466dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_466dd0:
    // 0x466dd0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x466dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_466dd4:
    // 0x466dd4: 0xc0804bc  jal         func_2012F0
label_466dd8:
    if (ctx->pc == 0x466DD8u) {
        ctx->pc = 0x466DD8u;
            // 0x466dd8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x466DDCu;
        goto label_466ddc;
    }
    ctx->pc = 0x466DD4u;
    SET_GPR_U32(ctx, 31, 0x466DDCu);
    ctx->pc = 0x466DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466DD4u;
            // 0x466dd8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466DDCu; }
        if (ctx->pc != 0x466DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466DDCu; }
        if (ctx->pc != 0x466DDCu) { return; }
    }
    ctx->pc = 0x466DDCu;
label_466ddc:
    // 0x466ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x466ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_466de0:
    // 0x466de0: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x466de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_466de4:
    // 0x466de4: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x466de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_466de8:
    // 0x466de8: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x466de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_466dec:
    // 0x466dec: 0xc0d37ec  jal         func_34DFB0
label_466df0:
    if (ctx->pc == 0x466DF0u) {
        ctx->pc = 0x466DF0u;
            // 0x466df0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466DF4u;
        goto label_466df4;
    }
    ctx->pc = 0x466DECu;
    SET_GPR_U32(ctx, 31, 0x466DF4u);
    ctx->pc = 0x466DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466DECu;
            // 0x466df0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466DF4u; }
        if (ctx->pc != 0x466DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466DF4u; }
        if (ctx->pc != 0x466DF4u) { return; }
    }
    ctx->pc = 0x466DF4u;
label_466df4:
    // 0x466df4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x466df4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_466df8:
    // 0x466df8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_466dfc:
    if (ctx->pc == 0x466DFCu) {
        ctx->pc = 0x466DFCu;
            // 0x466dfc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x466E00u;
        goto label_466e00;
    }
    ctx->pc = 0x466DF8u;
    {
        const bool branch_taken_0x466df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x466df8) {
            ctx->pc = 0x466DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466DF8u;
            // 0x466dfc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466E3Cu;
            goto label_466e3c;
        }
    }
    ctx->pc = 0x466E00u;
label_466e00:
    // 0x466e00: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x466e00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_466e04:
    // 0x466e04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x466e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_466e08:
    // 0x466e08: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x466e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_466e0c:
    // 0x466e0c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x466e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_466e10:
    // 0x466e10: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x466e10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_466e14:
    // 0x466e14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_466e18:
    if (ctx->pc == 0x466E18u) {
        ctx->pc = 0x466E1Cu;
        goto label_466e1c;
    }
    ctx->pc = 0x466E14u;
    {
        const bool branch_taken_0x466e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x466e14) {
            ctx->pc = 0x466E38u;
            goto label_466e38;
        }
    }
    ctx->pc = 0x466E1Cu;
label_466e1c:
    // 0x466e1c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_466e20:
    if (ctx->pc == 0x466E20u) {
        ctx->pc = 0x466E24u;
        goto label_466e24;
    }
    ctx->pc = 0x466E1Cu;
    {
        const bool branch_taken_0x466e1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x466e1c) {
            ctx->pc = 0x466E38u;
            goto label_466e38;
        }
    }
    ctx->pc = 0x466E24u;
label_466e24:
    // 0x466e24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x466e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_466e28:
    // 0x466e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x466e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_466e2c:
    // 0x466e2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x466e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_466e30:
    // 0x466e30: 0x320f809  jalr        $t9
label_466e34:
    if (ctx->pc == 0x466E34u) {
        ctx->pc = 0x466E34u;
            // 0x466e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x466E38u;
        goto label_466e38;
    }
    ctx->pc = 0x466E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x466E38u);
        ctx->pc = 0x466E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466E30u;
            // 0x466e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x466E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x466E38u; }
            if (ctx->pc != 0x466E38u) { return; }
        }
        }
    }
    ctx->pc = 0x466E38u;
label_466e38:
    // 0x466e38: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x466e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_466e3c:
    // 0x466e3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x466e3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_466e40:
    // 0x466e40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x466e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_466e44:
    // 0x466e44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x466e44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_466e48:
    // 0x466e48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x466e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_466e4c:
    // 0x466e4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x466e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_466e50:
    // 0x466e50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466e54:
    // 0x466e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_466e58:
    // 0x466e58: 0x3e00008  jr          $ra
label_466e5c:
    if (ctx->pc == 0x466E5Cu) {
        ctx->pc = 0x466E5Cu;
            // 0x466e5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x466E60u;
        goto label_466e60;
    }
    ctx->pc = 0x466E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466E58u;
            // 0x466e5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466E60u;
label_466e60:
    // 0x466e60: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x466e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_466e64:
    // 0x466e64: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x466e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_466e68:
    // 0x466e68: 0x3e00008  jr          $ra
label_466e6c:
    if (ctx->pc == 0x466E6Cu) {
        ctx->pc = 0x466E6Cu;
            // 0x466e6c: 0xa083006c  sb          $v1, 0x6C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x466E70u;
        goto label_466e70;
    }
    ctx->pc = 0x466E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466E68u;
            // 0x466e6c: 0xa083006c  sb          $v1, 0x6C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466E70u;
label_466e70:
    // 0x466e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x466e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_466e74:
    // 0x466e74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x466e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_466e78:
    // 0x466e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x466e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466e7c:
    // 0x466e7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x466e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_466e80:
    // 0x466e80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x466e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_466e84:
    // 0x466e84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x466e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_466e88:
    // 0x466e88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x466e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_466e8c:
    // 0x466e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x466e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_466e90:
    // 0x466e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x466e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_466e94:
    // 0x466e94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x466e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_466e98:
    // 0x466e98: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x466e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466e9c:
    // 0x466e9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x466e9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466ea0:
    // 0x466ea0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_466ea4:
    if (ctx->pc == 0x466EA4u) {
        ctx->pc = 0x466EA4u;
            // 0x466ea4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466EA8u;
        goto label_466ea8;
    }
    ctx->pc = 0x466EA0u;
    {
        const bool branch_taken_0x466ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x466EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466EA0u;
            // 0x466ea4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466ea0) {
            ctx->pc = 0x466F14u;
            goto label_466f14;
        }
    }
    ctx->pc = 0x466EA8u;
label_466ea8:
    // 0x466ea8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x466ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_466eac:
    // 0x466eac: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x466eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_466eb0:
    // 0x466eb0: 0x2484e7b0  addiu       $a0, $a0, -0x1850
    ctx->pc = 0x466eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961072));
label_466eb4:
    // 0x466eb4: 0x9066006c  lbu         $a2, 0x6C($v1)
    ctx->pc = 0x466eb4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
label_466eb8:
    // 0x466eb8: 0x8c710068  lw          $s1, 0x68($v1)
    ctx->pc = 0x466eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_466ebc:
    // 0x466ebc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x466ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_466ec0:
    // 0x466ec0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x466ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_466ec4:
    // 0x466ec4: 0x92231ea0  lbu         $v1, 0x1EA0($s1)
    ctx->pc = 0x466ec4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7840)));
label_466ec8:
    // 0x466ec8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x466ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_466ecc:
    // 0x466ecc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x466eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_466ed0:
    // 0x466ed0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x466ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_466ed4:
    // 0x466ed4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x466ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_466ed8:
    // 0x466ed8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_466edc:
    if (ctx->pc == 0x466EDCu) {
        ctx->pc = 0x466EDCu;
            // 0x466edc: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x466EE0u;
        goto label_466ee0;
    }
    ctx->pc = 0x466ED8u;
    {
        const bool branch_taken_0x466ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x466EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466ED8u;
            // 0x466edc: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466ed8) {
            ctx->pc = 0x466F0Cu;
            goto label_466f0c;
        }
    }
    ctx->pc = 0x466EE0u;
label_466ee0:
    // 0x466ee0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x466ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_466ee4:
    // 0x466ee4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x466ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466ee8:
    // 0x466ee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x466ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_466eec:
    // 0x466eec: 0xc119394  jal         func_464E50
label_466ef0:
    if (ctx->pc == 0x466EF0u) {
        ctx->pc = 0x466EF0u;
            // 0x466ef0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466EF4u;
        goto label_466ef4;
    }
    ctx->pc = 0x466EECu;
    SET_GPR_U32(ctx, 31, 0x466EF4u);
    ctx->pc = 0x466EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466EECu;
            // 0x466ef0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x464E50u;
    if (runtime->hasFunction(0x464E50u)) {
        auto targetFn = runtime->lookupFunction(0x464E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466EF4u; }
        if (ctx->pc != 0x466EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00464E50_0x464e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466EF4u; }
        if (ctx->pc != 0x466EF4u) { return; }
    }
    ctx->pc = 0x466EF4u;
label_466ef4:
    // 0x466ef4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x466ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_466ef8:
    // 0x466ef8: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x466ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_466efc:
    // 0x466efc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_466f00:
    if (ctx->pc == 0x466F00u) {
        ctx->pc = 0x466F00u;
            // 0x466f00: 0x26730310  addiu       $s3, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->pc = 0x466F04u;
        goto label_466f04;
    }
    ctx->pc = 0x466EFCu;
    {
        const bool branch_taken_0x466efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x466F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466EFCu;
            // 0x466f00: 0x26730310  addiu       $s3, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466efc) {
            ctx->pc = 0x466EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_466ee8;
        }
    }
    ctx->pc = 0x466F04u;
label_466f04:
    // 0x466f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x466f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_466f08:
    // 0x466f08: 0xa2231ea0  sb          $v1, 0x1EA0($s1)
    ctx->pc = 0x466f08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7840), (uint8_t)GPR_U32(ctx, 3));
label_466f0c:
    // 0x466f0c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x466f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_466f10:
    // 0x466f10: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x466f10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
label_466f14:
    // 0x466f14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x466f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_466f18:
    // 0x466f18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x466f18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_466f1c:
    // 0x466f1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x466f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_466f20:
    // 0x466f20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x466f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_466f24:
    // 0x466f24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x466f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_466f28:
    // 0x466f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466f2c:
    // 0x466f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_466f30:
    // 0x466f30: 0x3e00008  jr          $ra
label_466f34:
    if (ctx->pc == 0x466F34u) {
        ctx->pc = 0x466F34u;
            // 0x466f34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x466F38u;
        goto label_466f38;
    }
    ctx->pc = 0x466F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466F30u;
            // 0x466f34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466F38u;
label_466f38:
    // 0x466f38: 0x0  nop
    ctx->pc = 0x466f38u;
    // NOP
label_466f3c:
    // 0x466f3c: 0x0  nop
    ctx->pc = 0x466f3cu;
    // NOP
label_466f40:
    // 0x466f40: 0x3e00008  jr          $ra
label_466f44:
    if (ctx->pc == 0x466F44u) {
        ctx->pc = 0x466F44u;
            // 0x466f44: 0x2402521c  addiu       $v0, $zero, 0x521C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21020));
        ctx->pc = 0x466F48u;
        goto label_466f48;
    }
    ctx->pc = 0x466F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466F40u;
            // 0x466f44: 0x2402521c  addiu       $v0, $zero, 0x521C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466F48u;
label_466f48:
    // 0x466f48: 0x0  nop
    ctx->pc = 0x466f48u;
    // NOP
label_466f4c:
    // 0x466f4c: 0x0  nop
    ctx->pc = 0x466f4cu;
    // NOP
label_466f50:
    // 0x466f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_466f54:
    // 0x466f54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x466f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_466f58:
    // 0x466f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x466f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_466f5c:
    // 0x466f5c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x466f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_466f60:
    // 0x466f60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x466f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_466f64:
    // 0x466f64: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x466f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_466f68:
    // 0x466f68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x466f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_466f6c:
    // 0x466f6c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x466f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_466f70:
    // 0x466f70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x466f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_466f74:
    // 0x466f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x466f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_466f78:
    // 0x466f78: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x466f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_466f7c:
    // 0x466f7c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x466f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466f80:
    // 0x466f80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x466f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_466f84:
    // 0x466f84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x466f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_466f88:
    // 0x466f88: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x466f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_466f8c:
    // 0x466f8c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x466f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_466f90:
    // 0x466f90: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x466f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_466f94:
    // 0x466f94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x466f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_466f98:
    // 0x466f98: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x466f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_466f9c:
    // 0x466f9c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x466f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_466fa0:
    // 0x466fa0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x466fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_466fa4:
    // 0x466fa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x466fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_466fa8:
    // 0x466fa8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x466fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_466fac:
    // 0x466fac: 0xc0a997c  jal         func_2A65F0
label_466fb0:
    if (ctx->pc == 0x466FB0u) {
        ctx->pc = 0x466FB0u;
            // 0x466fb0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x466FB4u;
        goto label_466fb4;
    }
    ctx->pc = 0x466FACu;
    SET_GPR_U32(ctx, 31, 0x466FB4u);
    ctx->pc = 0x466FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466FACu;
            // 0x466fb0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466FB4u; }
        if (ctx->pc != 0x466FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466FB4u; }
        if (ctx->pc != 0x466FB4u) { return; }
    }
    ctx->pc = 0x466FB4u;
label_466fb4:
    // 0x466fb4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x466fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_466fb8:
    // 0x466fb8: 0xc0d879c  jal         func_361E70
label_466fbc:
    if (ctx->pc == 0x466FBCu) {
        ctx->pc = 0x466FBCu;
            // 0x466fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466FC0u;
        goto label_466fc0;
    }
    ctx->pc = 0x466FB8u;
    SET_GPR_U32(ctx, 31, 0x466FC0u);
    ctx->pc = 0x466FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466FB8u;
            // 0x466fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466FC0u; }
        if (ctx->pc != 0x466FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466FC0u; }
        if (ctx->pc != 0x466FC0u) { return; }
    }
    ctx->pc = 0x466FC0u;
label_466fc0:
    // 0x466fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x466fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_466fc4:
    // 0x466fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_466fc8:
    // 0x466fc8: 0x3e00008  jr          $ra
label_466fcc:
    if (ctx->pc == 0x466FCCu) {
        ctx->pc = 0x466FCCu;
            // 0x466fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x466FD0u;
        goto label_466fd0;
    }
    ctx->pc = 0x466FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466FC8u;
            // 0x466fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466FD0u;
label_466fd0:
    // 0x466fd0: 0x811990c  j           func_466430
label_466fd4:
    if (ctx->pc == 0x466FD4u) {
        ctx->pc = 0x466FD4u;
            // 0x466fd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x466FD8u;
        goto label_466fd8;
    }
    ctx->pc = 0x466FD0u;
    ctx->pc = 0x466FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466FD0u;
            // 0x466fd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x466430u;
    {
        auto targetFn = runtime->lookupFunction(0x466430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x466FD8u;
label_466fd8:
    // 0x466fd8: 0x0  nop
    ctx->pc = 0x466fd8u;
    // NOP
label_466fdc:
    // 0x466fdc: 0x0  nop
    ctx->pc = 0x466fdcu;
    // NOP
label_466fe0:
    // 0x466fe0: 0x81195f0  j           func_4657C0
label_466fe4:
    if (ctx->pc == 0x466FE4u) {
        ctx->pc = 0x466FE4u;
            // 0x466fe4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x466FE8u;
        goto label_466fe8;
    }
    ctx->pc = 0x466FE0u;
    ctx->pc = 0x466FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466FE0u;
            // 0x466fe4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4657C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4657C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x466FE8u;
label_466fe8:
    // 0x466fe8: 0x0  nop
    ctx->pc = 0x466fe8u;
    // NOP
label_466fec:
    // 0x466fec: 0x0  nop
    ctx->pc = 0x466fecu;
    // NOP
label_466ff0:
    // 0x466ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x466ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_466ff4:
    // 0x466ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x466ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_466ff8:
    // 0x466ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x466ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466ffc:
    // 0x466ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x466ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467000:
    // 0x467000: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x467000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_467004:
    // 0x467004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x467004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_467008:
    // 0x467008: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_46700c:
    if (ctx->pc == 0x46700Cu) {
        ctx->pc = 0x46700Cu;
            // 0x46700c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467010u;
        goto label_467010;
    }
    ctx->pc = 0x467008u;
    {
        const bool branch_taken_0x467008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x46700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467008u;
            // 0x46700c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467008) {
            ctx->pc = 0x46706Cu;
            goto label_46706c;
        }
    }
    ctx->pc = 0x467010u;
label_467010:
    // 0x467010: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x467010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_467014:
    // 0x467014: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x467014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_467018:
    // 0x467018: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x467018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_46701c:
    // 0x46701c: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x46701cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_467020:
    // 0x467020: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
label_467024:
    if (ctx->pc == 0x467024u) {
        ctx->pc = 0x467024u;
            // 0x467024: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x467028u;
        goto label_467028;
    }
    ctx->pc = 0x467020u;
    {
        const bool branch_taken_0x467020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x467020) {
            ctx->pc = 0x467024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467020u;
            // 0x467024: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467058u;
            goto label_467058;
        }
    }
    ctx->pc = 0x467028u;
label_467028:
    // 0x467028: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x467028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_46702c:
    // 0x46702c: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_467030:
    if (ctx->pc == 0x467030u) {
        ctx->pc = 0x467034u;
        goto label_467034;
    }
    ctx->pc = 0x46702Cu;
    {
        const bool branch_taken_0x46702c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x46702c) {
            ctx->pc = 0x467054u;
            goto label_467054;
        }
    }
    ctx->pc = 0x467034u;
label_467034:
    // 0x467034: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x467034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_467038:
    // 0x467038: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_46703c:
    if (ctx->pc == 0x46703Cu) {
        ctx->pc = 0x467040u;
        goto label_467040;
    }
    ctx->pc = 0x467038u;
    {
        const bool branch_taken_0x467038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x467038) {
            ctx->pc = 0x467054u;
            goto label_467054;
        }
    }
    ctx->pc = 0x467040u;
label_467040:
    // 0x467040: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x467040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_467044:
    // 0x467044: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_467048:
    if (ctx->pc == 0x467048u) {
        ctx->pc = 0x46704Cu;
        goto label_46704c;
    }
    ctx->pc = 0x467044u;
    {
        const bool branch_taken_0x467044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x467044) {
            ctx->pc = 0x467054u;
            goto label_467054;
        }
    }
    ctx->pc = 0x46704Cu;
label_46704c:
    // 0x46704c: 0x10000006  b           . + 4 + (0x6 << 2)
label_467050:
    if (ctx->pc == 0x467050u) {
        ctx->pc = 0x467050u;
            // 0x467050: 0x3c034270  lui         $v1, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
        ctx->pc = 0x467054u;
        goto label_467054;
    }
    ctx->pc = 0x46704Cu;
    {
        const bool branch_taken_0x46704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46704Cu;
            // 0x467050: 0x3c034270  lui         $v1, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46704c) {
            ctx->pc = 0x467068u;
            goto label_467068;
        }
    }
    ctx->pc = 0x467054u;
label_467054:
    // 0x467054: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x467054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_467058:
    // 0x467058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46705c:
    // 0x46705c: 0xc122d2c  jal         func_48B4B0
label_467060:
    if (ctx->pc == 0x467060u) {
        ctx->pc = 0x467060u;
            // 0x467060: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x467064u;
        goto label_467064;
    }
    ctx->pc = 0x46705Cu;
    SET_GPR_U32(ctx, 31, 0x467064u);
    ctx->pc = 0x467060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46705Cu;
            // 0x467060: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467064u; }
        if (ctx->pc != 0x467064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467064u; }
        if (ctx->pc != 0x467064u) { return; }
    }
    ctx->pc = 0x467064u;
label_467064:
    // 0x467064: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x467064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_467068:
    // 0x467068: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x467068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_46706c:
    // 0x46706c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46706cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_467070:
    // 0x467070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467074:
    // 0x467074: 0x3e00008  jr          $ra
label_467078:
    if (ctx->pc == 0x467078u) {
        ctx->pc = 0x467078u;
            // 0x467078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x46707Cu;
        goto label_46707c;
    }
    ctx->pc = 0x467074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467074u;
            // 0x467078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46707Cu;
label_46707c:
    // 0x46707c: 0x0  nop
    ctx->pc = 0x46707cu;
    // NOP
label_467080:
    // 0x467080: 0x3e00008  jr          $ra
label_467084:
    if (ctx->pc == 0x467084u) {
        ctx->pc = 0x467084u;
            // 0x467084: 0x24020836  addiu       $v0, $zero, 0x836 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2102));
        ctx->pc = 0x467088u;
        goto label_467088;
    }
    ctx->pc = 0x467080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467080u;
            // 0x467084: 0x24020836  addiu       $v0, $zero, 0x836 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2102));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467088u;
label_467088:
    // 0x467088: 0x0  nop
    ctx->pc = 0x467088u;
    // NOP
label_46708c:
    // 0x46708c: 0x0  nop
    ctx->pc = 0x46708cu;
    // NOP
label_467090:
    // 0x467090: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x467090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_467094:
    // 0x467094: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x467094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_467098:
    // 0x467098: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x467098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_46709c:
    // 0x46709c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x46709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4670a0:
    // 0x4670a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4670a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4670a4:
    // 0x4670a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4670a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4670a8:
    // 0x4670a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4670a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4670ac:
    // 0x4670ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4670acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4670b0:
    // 0x4670b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4670b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4670b4:
    // 0x4670b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4670b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4670b8:
    // 0x4670b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4670b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4670bc:
    // 0x4670bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4670bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4670c0:
    // 0x4670c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4670c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4670c4:
    // 0x4670c4: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x4670c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_4670c8:
    // 0x4670c8: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
label_4670cc:
    if (ctx->pc == 0x4670CCu) {
        ctx->pc = 0x4670CCu;
            // 0x4670cc: 0x8eb0007c  lw          $s0, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->pc = 0x4670D0u;
        goto label_4670d0;
    }
    ctx->pc = 0x4670C8u;
    {
        const bool branch_taken_0x4670c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4670c8) {
            ctx->pc = 0x4670CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4670C8u;
            // 0x4670cc: 0x8eb0007c  lw          $s0, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46711Cu;
            goto label_46711c;
        }
    }
    ctx->pc = 0x4670D0u;
label_4670d0:
    // 0x4670d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4670d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4670d4:
    // 0x4670d4: 0x5083004f  beql        $a0, $v1, . + 4 + (0x4F << 2)
label_4670d8:
    if (ctx->pc == 0x4670D8u) {
        ctx->pc = 0x4670D8u;
            // 0x4670d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4670DCu;
        goto label_4670dc;
    }
    ctx->pc = 0x4670D4u;
    {
        const bool branch_taken_0x4670d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4670d4) {
            ctx->pc = 0x4670D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4670D4u;
            // 0x4670d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467214u;
            goto label_467214;
        }
    }
    ctx->pc = 0x4670DCu;
label_4670dc:
    // 0x4670dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4670dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4670e0:
    // 0x4670e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4670e4:
    if (ctx->pc == 0x4670E4u) {
        ctx->pc = 0x4670E8u;
        goto label_4670e8;
    }
    ctx->pc = 0x4670E0u;
    {
        const bool branch_taken_0x4670e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4670e0) {
            ctx->pc = 0x4670F0u;
            goto label_4670f0;
        }
    }
    ctx->pc = 0x4670E8u;
label_4670e8:
    // 0x4670e8: 0x10000049  b           . + 4 + (0x49 << 2)
label_4670ec:
    if (ctx->pc == 0x4670ECu) {
        ctx->pc = 0x4670F0u;
        goto label_4670f0;
    }
    ctx->pc = 0x4670E8u;
    {
        const bool branch_taken_0x4670e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4670e8) {
            ctx->pc = 0x467210u;
            goto label_467210;
        }
    }
    ctx->pc = 0x4670F0u;
label_4670f0:
    // 0x4670f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4670f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4670f4:
    // 0x4670f4: 0x8eb9000c  lw          $t9, 0xC($s5)
    ctx->pc = 0x4670f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4670f8:
    // 0x4670f8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4670f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4670fc:
    // 0x4670fc: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x4670fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_467100:
    // 0x467100: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x467100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_467104:
    // 0x467104: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x467104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_467108:
    // 0x467108: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x467108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_46710c:
    // 0x46710c: 0x320f809  jalr        $t9
label_467110:
    if (ctx->pc == 0x467110u) {
        ctx->pc = 0x467110u;
            // 0x467110: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x467114u;
        goto label_467114;
    }
    ctx->pc = 0x46710Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467114u);
        ctx->pc = 0x467110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46710Cu;
            // 0x467110: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x467114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467114u; }
            if (ctx->pc != 0x467114u) { return; }
        }
        }
    }
    ctx->pc = 0x467114u;
label_467114:
    // 0x467114: 0x1000003e  b           . + 4 + (0x3E << 2)
label_467118:
    if (ctx->pc == 0x467118u) {
        ctx->pc = 0x46711Cu;
        goto label_46711c;
    }
    ctx->pc = 0x467114u;
    {
        const bool branch_taken_0x467114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467114) {
            ctx->pc = 0x467210u;
            goto label_467210;
        }
    }
    ctx->pc = 0x46711Cu;
label_46711c:
    // 0x46711c: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_467120:
    if (ctx->pc == 0x467120u) {
        ctx->pc = 0x467124u;
        goto label_467124;
    }
    ctx->pc = 0x46711Cu;
    {
        const bool branch_taken_0x46711c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46711c) {
            ctx->pc = 0x467210u;
            goto label_467210;
        }
    }
    ctx->pc = 0x467124u;
label_467124:
    // 0x467124: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x467124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_467128:
    // 0x467128: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x467128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_46712c:
    // 0x46712c: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x46712cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_467130:
    // 0x467130: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x467130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467134:
    // 0x467134: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x467134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_467138:
    // 0x467138: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x467138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46713c:
    // 0x46713c: 0x8eb30094  lw          $s3, 0x94($s5)
    ctx->pc = 0x46713cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_467140:
    // 0x467140: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x467140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_467144:
    // 0x467144: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x467144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_467148:
    // 0x467148: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x467148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46714c:
    // 0x46714c: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x46714cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_467150:
    // 0x467150: 0x8c7ee370  lw          $fp, -0x1C90($v1)
    ctx->pc = 0x467150u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_467154:
    // 0x467154: 0x26a2009c  addiu       $v0, $s5, 0x9C
    ctx->pc = 0x467154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 156));
label_467158:
    // 0x467158: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x467158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_46715c:
    // 0x46715c: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x46715cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_467160:
    // 0x467160: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x467160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_467164:
    // 0x467164: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x467164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_467168:
    // 0x467168: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x467168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46716c:
    // 0x46716c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x46716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_467170:
    // 0x467170: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x467170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_467174:
    // 0x467174: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x467174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_467178:
    // 0x467178: 0xaea4009c  sw          $a0, 0x9C($s5)
    ctx->pc = 0x467178u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 4));
label_46717c:
    // 0x46717c: 0x24b70010  addiu       $s7, $a1, 0x10
    ctx->pc = 0x46717cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_467180:
    // 0x467180: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x467180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_467184:
    // 0x467184: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x467184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_467188:
    // 0x467188: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x467188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_46718c:
    // 0x46718c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46718cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_467190:
    // 0x467190: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x467190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_467194:
    // 0x467194: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x467194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_467198:
    // 0x467198: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x467198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46719c:
    // 0x46719c: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x46719cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4671a0:
    // 0x4671a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4671a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4671a4:
    // 0x4671a4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4671a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4671a8:
    // 0x4671a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4671a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4671ac:
    // 0x4671ac: 0xc119d10  jal         func_467440
label_4671b0:
    if (ctx->pc == 0x4671B0u) {
        ctx->pc = 0x4671B0u;
            // 0x4671b0: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4671B4u;
        goto label_4671b4;
    }
    ctx->pc = 0x4671ACu;
    SET_GPR_U32(ctx, 31, 0x4671B4u);
    ctx->pc = 0x4671B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4671ACu;
            // 0x4671b0: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x467440u;
    if (runtime->hasFunction(0x467440u)) {
        auto targetFn = runtime->lookupFunction(0x467440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4671B4u; }
        if (ctx->pc != 0x4671B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00467440_0x467440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4671B4u; }
        if (ctx->pc != 0x4671B4u) { return; }
    }
    ctx->pc = 0x4671B4u;
label_4671b4:
    // 0x4671b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4671b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4671b8:
    // 0x4671b8: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4671b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4671bc:
    // 0x4671bc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_4671c0:
    if (ctx->pc == 0x4671C0u) {
        ctx->pc = 0x4671C0u;
            // 0x4671c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4671C4u;
        goto label_4671c4;
    }
    ctx->pc = 0x4671BCu;
    {
        const bool branch_taken_0x4671bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4671C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4671BCu;
            // 0x4671c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4671bc) {
            ctx->pc = 0x467188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_467188;
        }
    }
    ctx->pc = 0x4671C4u;
label_4671c4:
    // 0x4671c4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x4671c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4671c8:
    // 0x4671c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4671c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4671cc:
    // 0x4671cc: 0x8ea30090  lw          $v1, 0x90($s5)
    ctx->pc = 0x4671ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_4671d0:
    // 0x4671d0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_4671d4:
    if (ctx->pc == 0x4671D4u) {
        ctx->pc = 0x4671D8u;
        goto label_4671d8;
    }
    ctx->pc = 0x4671D0u;
    {
        const bool branch_taken_0x4671d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4671d0) {
            ctx->pc = 0x467210u;
            goto label_467210;
        }
    }
    ctx->pc = 0x4671D8u;
label_4671d8:
    // 0x4671d8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4671d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4671dc:
    // 0x4671dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4671dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4671e0:
    // 0x4671e0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x4671e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_4671e4:
    // 0x4671e4: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4671e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4671e8:
    // 0x4671e8: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4671ec:
    if (ctx->pc == 0x4671ECu) {
        ctx->pc = 0x4671ECu;
            // 0x4671ec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4671F0u;
        goto label_4671f0;
    }
    ctx->pc = 0x4671E8u;
    {
        const bool branch_taken_0x4671e8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4671ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4671E8u;
            // 0x4671ec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4671e8) {
            ctx->pc = 0x467210u;
            goto label_467210;
        }
    }
    ctx->pc = 0x4671F0u;
label_4671f0:
    // 0x4671f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4671f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4671f4:
    // 0x4671f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4671f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4671f8:
    // 0x4671f8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4671f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4671fc:
    // 0x4671fc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4671fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_467200:
    // 0x467200: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x467200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_467204:
    // 0x467204: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x467204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_467208:
    // 0x467208: 0xc055ea8  jal         func_157AA0
label_46720c:
    if (ctx->pc == 0x46720Cu) {
        ctx->pc = 0x46720Cu;
            // 0x46720c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x467210u;
        goto label_467210;
    }
    ctx->pc = 0x467208u;
    SET_GPR_U32(ctx, 31, 0x467210u);
    ctx->pc = 0x46720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467208u;
            // 0x46720c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467210u; }
        if (ctx->pc != 0x467210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467210u; }
        if (ctx->pc != 0x467210u) { return; }
    }
    ctx->pc = 0x467210u;
label_467210:
    // 0x467210: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x467210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_467214:
    // 0x467214: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x467214u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_467218:
    // 0x467218: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x467218u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46721c:
    // 0x46721c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46721cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_467220:
    // 0x467220: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x467220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_467224:
    // 0x467224: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x467224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_467228:
    // 0x467228: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x467228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46722c:
    // 0x46722c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46722cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_467230:
    // 0x467230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x467230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_467234:
    // 0x467234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467238:
    // 0x467238: 0x3e00008  jr          $ra
label_46723c:
    if (ctx->pc == 0x46723Cu) {
        ctx->pc = 0x46723Cu;
            // 0x46723c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x467240u;
        goto label_467240;
    }
    ctx->pc = 0x467238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467238u;
            // 0x46723c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467240u;
label_467240:
    // 0x467240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x467240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_467244:
    // 0x467244: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x467244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_467248:
    // 0x467248: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x467248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_46724c:
    // 0x46724c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_467250:
    // 0x467250: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x467250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_467254:
    // 0x467254: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x467254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_467258:
    // 0x467258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46725c:
    // 0x46725c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46725cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_467260:
    // 0x467260: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x467260u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_467264:
    // 0x467264: 0x5083003a  beql        $a0, $v1, . + 4 + (0x3A << 2)
label_467268:
    if (ctx->pc == 0x467268u) {
        ctx->pc = 0x467268u;
            // 0x467268: 0x8e30007c  lw          $s0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->pc = 0x46726Cu;
        goto label_46726c;
    }
    ctx->pc = 0x467264u;
    {
        const bool branch_taken_0x467264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x467264) {
            ctx->pc = 0x467268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467264u;
            // 0x467268: 0x8e30007c  lw          $s0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467350u;
            goto label_467350;
        }
    }
    ctx->pc = 0x46726Cu;
label_46726c:
    // 0x46726c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x46726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_467270:
    // 0x467270: 0x50830033  beql        $a0, $v1, . + 4 + (0x33 << 2)
label_467274:
    if (ctx->pc == 0x467274u) {
        ctx->pc = 0x467274u;
            // 0x467274: 0x8e39000c  lw          $t9, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x467278u;
        goto label_467278;
    }
    ctx->pc = 0x467270u;
    {
        const bool branch_taken_0x467270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x467270) {
            ctx->pc = 0x467274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x467270u;
            // 0x467274: 0x8e39000c  lw          $t9, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x467340u;
            goto label_467340;
        }
    }
    ctx->pc = 0x467278u;
label_467278:
    // 0x467278: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x467278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46727c:
    // 0x46727c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_467280:
    if (ctx->pc == 0x467280u) {
        ctx->pc = 0x467284u;
        goto label_467284;
    }
    ctx->pc = 0x46727Cu;
    {
        const bool branch_taken_0x46727c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46727c) {
            ctx->pc = 0x46728Cu;
            goto label_46728c;
        }
    }
    ctx->pc = 0x467284u;
label_467284:
    // 0x467284: 0x10000044  b           . + 4 + (0x44 << 2)
label_467288:
    if (ctx->pc == 0x467288u) {
        ctx->pc = 0x46728Cu;
        goto label_46728c;
    }
    ctx->pc = 0x467284u;
    {
        const bool branch_taken_0x467284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467284) {
            ctx->pc = 0x467398u;
            goto label_467398;
        }
    }
    ctx->pc = 0x46728Cu;
label_46728c:
    // 0x46728c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x46728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_467290:
    // 0x467290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x467290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467294:
    // 0x467294: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x467294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_467298:
    // 0x467298: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x467298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_46729c:
    // 0x46729c: 0x1064003e  beq         $v1, $a0, . + 4 + (0x3E << 2)
label_4672a0:
    if (ctx->pc == 0x4672A0u) {
        ctx->pc = 0x4672A4u;
        goto label_4672a4;
    }
    ctx->pc = 0x46729Cu;
    {
        const bool branch_taken_0x46729c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x46729c) {
            ctx->pc = 0x467398u;
            goto label_467398;
        }
    }
    ctx->pc = 0x4672A4u;
label_4672a4:
    // 0x4672a4: 0x8e270090  lw          $a3, 0x90($s1)
    ctx->pc = 0x4672a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_4672a8:
    // 0x4672a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4672a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4672ac:
    // 0x4672ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4672acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4672b0:
    // 0x4672b0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4672b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4672b4:
    // 0x4672b4: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x4672b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_4672b8:
    // 0x4672b8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x4672b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_4672bc:
    // 0x4672bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4672bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4672c0:
    // 0x4672c0: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x4672c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4672c4:
    // 0x4672c4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4672c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4672c8:
    // 0x4672c8: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x4672c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_4672cc:
    // 0x4672cc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4672d0:
    if (ctx->pc == 0x4672D0u) {
        ctx->pc = 0x4672D4u;
        goto label_4672d4;
    }
    ctx->pc = 0x4672CCu;
    {
        const bool branch_taken_0x4672cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4672cc) {
            ctx->pc = 0x4672E8u;
            goto label_4672e8;
        }
    }
    ctx->pc = 0x4672D4u;
label_4672d4:
    // 0x4672d4: 0x8c6506a0  lw          $a1, 0x6A0($v1)
    ctx->pc = 0x4672d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1696)));
label_4672d8:
    // 0x4672d8: 0x8cc40120  lw          $a0, 0x120($a2)
    ctx->pc = 0x4672d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
label_4672dc:
    // 0x4672dc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4672dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4672e0:
    // 0x4672e0: 0xacc40120  sw          $a0, 0x120($a2)
    ctx->pc = 0x4672e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 4));
label_4672e4:
    // 0x4672e4: 0x0  nop
    ctx->pc = 0x4672e4u;
    // NOP
label_4672e8:
    // 0x4672e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4672e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4672ec:
    // 0x4672ec: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x4672ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_4672f0:
    // 0x4672f0: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
label_4672f4:
    if (ctx->pc == 0x4672F4u) {
        ctx->pc = 0x4672F4u;
            // 0x4672f4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x4672F8u;
        goto label_4672f8;
    }
    ctx->pc = 0x4672F0u;
    {
        const bool branch_taken_0x4672f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4672F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4672F0u;
            // 0x4672f4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4672f0) {
            ctx->pc = 0x4672B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4672b4;
        }
    }
    ctx->pc = 0x4672F8u;
label_4672f8:
    // 0x4672f8: 0x8e30007c  lw          $s0, 0x7C($s1)
    ctx->pc = 0x4672f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_4672fc:
    // 0x4672fc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_467300:
    if (ctx->pc == 0x467300u) {
        ctx->pc = 0x467304u;
        goto label_467304;
    }
    ctx->pc = 0x4672FCu;
    {
        const bool branch_taken_0x4672fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4672fc) {
            ctx->pc = 0x467398u;
            goto label_467398;
        }
    }
    ctx->pc = 0x467304u;
label_467304:
    // 0x467304: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x467304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467308:
    // 0x467308: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x467308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46730c:
    // 0x46730c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x46730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_467310:
    // 0x467310: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x467310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_467314:
    // 0x467314: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x467314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_467318:
    // 0x467318: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x467318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46731c:
    // 0x46731c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x46731cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_467320:
    // 0x467320: 0x320f809  jalr        $t9
label_467324:
    if (ctx->pc == 0x467324u) {
        ctx->pc = 0x467328u;
        goto label_467328;
    }
    ctx->pc = 0x467320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467328u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x467328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467328u; }
            if (ctx->pc != 0x467328u) { return; }
        }
        }
    }
    ctx->pc = 0x467328u;
label_467328:
    // 0x467328: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x467328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_46732c:
    // 0x46732c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x46732cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_467330:
    // 0x467330: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_467334:
    if (ctx->pc == 0x467334u) {
        ctx->pc = 0x467334u;
            // 0x467334: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x467338u;
        goto label_467338;
    }
    ctx->pc = 0x467330u;
    {
        const bool branch_taken_0x467330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467330u;
            // 0x467334: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467330) {
            ctx->pc = 0x46730Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46730c;
        }
    }
    ctx->pc = 0x467338u;
label_467338:
    // 0x467338: 0x10000017  b           . + 4 + (0x17 << 2)
label_46733c:
    if (ctx->pc == 0x46733Cu) {
        ctx->pc = 0x467340u;
        goto label_467340;
    }
    ctx->pc = 0x467338u;
    {
        const bool branch_taken_0x467338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467338) {
            ctx->pc = 0x467398u;
            goto label_467398;
        }
    }
    ctx->pc = 0x467340u;
label_467340:
    // 0x467340: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x467340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_467344:
    // 0x467344: 0x320f809  jalr        $t9
label_467348:
    if (ctx->pc == 0x467348u) {
        ctx->pc = 0x467348u;
            // 0x467348: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x46734Cu;
        goto label_46734c;
    }
    ctx->pc = 0x467344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46734Cu);
        ctx->pc = 0x467348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467344u;
            // 0x467348: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46734Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46734Cu; }
            if (ctx->pc != 0x46734Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46734Cu;
label_46734c:
    // 0x46734c: 0x8e30007c  lw          $s0, 0x7C($s1)
    ctx->pc = 0x46734cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_467350:
    // 0x467350: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_467354:
    if (ctx->pc == 0x467354u) {
        ctx->pc = 0x467358u;
        goto label_467358;
    }
    ctx->pc = 0x467350u;
    {
        const bool branch_taken_0x467350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x467350) {
            ctx->pc = 0x467398u;
            goto label_467398;
        }
    }
    ctx->pc = 0x467358u;
label_467358:
    // 0x467358: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x467358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_46735c:
    // 0x46735c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x46735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_467360:
    // 0x467360: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x467360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_467364:
    // 0x467364: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x467364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_467368:
    // 0x467368: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_46736c:
    if (ctx->pc == 0x46736Cu) {
        ctx->pc = 0x467370u;
        goto label_467370;
    }
    ctx->pc = 0x467368u;
    {
        const bool branch_taken_0x467368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x467368) {
            ctx->pc = 0x467398u;
            goto label_467398;
        }
    }
    ctx->pc = 0x467370u;
label_467370:
    // 0x467370: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x467370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467374:
    // 0x467374: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x467374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467378:
    // 0x467378: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x467378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_46737c:
    // 0x46737c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x46737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_467380:
    // 0x467380: 0xc0e3658  jal         func_38D960
label_467384:
    if (ctx->pc == 0x467384u) {
        ctx->pc = 0x467384u;
            // 0x467384: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x467388u;
        goto label_467388;
    }
    ctx->pc = 0x467380u;
    SET_GPR_U32(ctx, 31, 0x467388u);
    ctx->pc = 0x467384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x467380u;
            // 0x467384: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467388u; }
        if (ctx->pc != 0x467388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x467388u; }
        if (ctx->pc != 0x467388u) { return; }
    }
    ctx->pc = 0x467388u;
label_467388:
    // 0x467388: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x467388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_46738c:
    // 0x46738c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x46738cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_467390:
    // 0x467390: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_467394:
    if (ctx->pc == 0x467394u) {
        ctx->pc = 0x467394u;
            // 0x467394: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x467398u;
        goto label_467398;
    }
    ctx->pc = 0x467390u;
    {
        const bool branch_taken_0x467390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467390u;
            // 0x467394: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467390) {
            ctx->pc = 0x467378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_467378;
        }
    }
    ctx->pc = 0x467398u;
label_467398:
    // 0x467398: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x467398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_46739c:
    // 0x46739c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46739cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4673a0:
    // 0x4673a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4673a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4673a4:
    // 0x4673a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4673a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4673a8:
    // 0x4673a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4673a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4673ac:
    // 0x4673ac: 0x3e00008  jr          $ra
label_4673b0:
    if (ctx->pc == 0x4673B0u) {
        ctx->pc = 0x4673B0u;
            // 0x4673b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4673B4u;
        goto label_4673b4;
    }
    ctx->pc = 0x4673ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4673B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4673ACu;
            // 0x4673b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4673B4u;
label_4673b4:
    // 0x4673b4: 0x0  nop
    ctx->pc = 0x4673b4u;
    // NOP
label_4673b8:
    // 0x4673b8: 0x0  nop
    ctx->pc = 0x4673b8u;
    // NOP
label_4673bc:
    // 0x4673bc: 0x0  nop
    ctx->pc = 0x4673bcu;
    // NOP
label_4673c0:
    // 0x4673c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4673c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4673c4:
    // 0x4673c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4673c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4673c8:
    // 0x4673c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4673c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4673cc:
    // 0x4673cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4673ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4673d0:
    // 0x4673d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4673d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4673d4:
    // 0x4673d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4673d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4673d8:
    // 0x4673d8: 0x8c91007c  lw          $s1, 0x7C($a0)
    ctx->pc = 0x4673d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4673dc:
    // 0x4673dc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4673e0:
    if (ctx->pc == 0x4673E0u) {
        ctx->pc = 0x4673E0u;
            // 0x4673e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4673E4u;
        goto label_4673e4;
    }
    ctx->pc = 0x4673DCu;
    {
        const bool branch_taken_0x4673dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4673E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4673DCu;
            // 0x4673e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4673dc) {
            ctx->pc = 0x467418u;
            goto label_467418;
        }
    }
    ctx->pc = 0x4673E4u;
label_4673e4:
    // 0x4673e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4673e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4673e8:
    // 0x4673e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4673e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4673ec:
    // 0x4673ec: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x4673ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_4673f0:
    // 0x4673f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4673f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4673f4:
    // 0x4673f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4673f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4673f8:
    // 0x4673f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4673f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4673fc:
    // 0x4673fc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4673fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_467400:
    // 0x467400: 0x320f809  jalr        $t9
label_467404:
    if (ctx->pc == 0x467404u) {
        ctx->pc = 0x467408u;
        goto label_467408;
    }
    ctx->pc = 0x467400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467408u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x467408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x467408u; }
            if (ctx->pc != 0x467408u) { return; }
        }
        }
    }
    ctx->pc = 0x467408u;
label_467408:
    // 0x467408: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x467408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_46740c:
    // 0x46740c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x46740cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_467410:
    // 0x467410: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_467414:
    if (ctx->pc == 0x467414u) {
        ctx->pc = 0x467414u;
            // 0x467414: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x467418u;
        goto label_467418;
    }
    ctx->pc = 0x467410u;
    {
        const bool branch_taken_0x467410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x467410u;
            // 0x467414: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467410) {
            ctx->pc = 0x4673ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4673ec;
        }
    }
    ctx->pc = 0x467418u;
label_467418:
    // 0x467418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x467418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_46741c:
    // 0x46741c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46741cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_467420:
    // 0x467420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x467420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_467424:
    // 0x467424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x467424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_467428:
    // 0x467428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46742c:
    // 0x46742c: 0x3e00008  jr          $ra
label_467430:
    if (ctx->pc == 0x467430u) {
        ctx->pc = 0x467430u;
            // 0x467430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x467434u;
        goto label_467434;
    }
    ctx->pc = 0x46742Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46742Cu;
            // 0x467430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x467434u;
label_467434:
    // 0x467434: 0x0  nop
    ctx->pc = 0x467434u;
    // NOP
label_467438:
    // 0x467438: 0x0  nop
    ctx->pc = 0x467438u;
    // NOP
label_46743c:
    // 0x46743c: 0x0  nop
    ctx->pc = 0x46743cu;
    // NOP
}
