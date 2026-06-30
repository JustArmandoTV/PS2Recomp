#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D97F0
// Address: 0x1d97f0 - 0x1d9f20
void sub_001D97F0_0x1d97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D97F0_0x1d97f0");
#endif

    switch (ctx->pc) {
        case 0x1d97f0u: goto label_1d97f0;
        case 0x1d97f4u: goto label_1d97f4;
        case 0x1d97f8u: goto label_1d97f8;
        case 0x1d97fcu: goto label_1d97fc;
        case 0x1d9800u: goto label_1d9800;
        case 0x1d9804u: goto label_1d9804;
        case 0x1d9808u: goto label_1d9808;
        case 0x1d980cu: goto label_1d980c;
        case 0x1d9810u: goto label_1d9810;
        case 0x1d9814u: goto label_1d9814;
        case 0x1d9818u: goto label_1d9818;
        case 0x1d981cu: goto label_1d981c;
        case 0x1d9820u: goto label_1d9820;
        case 0x1d9824u: goto label_1d9824;
        case 0x1d9828u: goto label_1d9828;
        case 0x1d982cu: goto label_1d982c;
        case 0x1d9830u: goto label_1d9830;
        case 0x1d9834u: goto label_1d9834;
        case 0x1d9838u: goto label_1d9838;
        case 0x1d983cu: goto label_1d983c;
        case 0x1d9840u: goto label_1d9840;
        case 0x1d9844u: goto label_1d9844;
        case 0x1d9848u: goto label_1d9848;
        case 0x1d984cu: goto label_1d984c;
        case 0x1d9850u: goto label_1d9850;
        case 0x1d9854u: goto label_1d9854;
        case 0x1d9858u: goto label_1d9858;
        case 0x1d985cu: goto label_1d985c;
        case 0x1d9860u: goto label_1d9860;
        case 0x1d9864u: goto label_1d9864;
        case 0x1d9868u: goto label_1d9868;
        case 0x1d986cu: goto label_1d986c;
        case 0x1d9870u: goto label_1d9870;
        case 0x1d9874u: goto label_1d9874;
        case 0x1d9878u: goto label_1d9878;
        case 0x1d987cu: goto label_1d987c;
        case 0x1d9880u: goto label_1d9880;
        case 0x1d9884u: goto label_1d9884;
        case 0x1d9888u: goto label_1d9888;
        case 0x1d988cu: goto label_1d988c;
        case 0x1d9890u: goto label_1d9890;
        case 0x1d9894u: goto label_1d9894;
        case 0x1d9898u: goto label_1d9898;
        case 0x1d989cu: goto label_1d989c;
        case 0x1d98a0u: goto label_1d98a0;
        case 0x1d98a4u: goto label_1d98a4;
        case 0x1d98a8u: goto label_1d98a8;
        case 0x1d98acu: goto label_1d98ac;
        case 0x1d98b0u: goto label_1d98b0;
        case 0x1d98b4u: goto label_1d98b4;
        case 0x1d98b8u: goto label_1d98b8;
        case 0x1d98bcu: goto label_1d98bc;
        case 0x1d98c0u: goto label_1d98c0;
        case 0x1d98c4u: goto label_1d98c4;
        case 0x1d98c8u: goto label_1d98c8;
        case 0x1d98ccu: goto label_1d98cc;
        case 0x1d98d0u: goto label_1d98d0;
        case 0x1d98d4u: goto label_1d98d4;
        case 0x1d98d8u: goto label_1d98d8;
        case 0x1d98dcu: goto label_1d98dc;
        case 0x1d98e0u: goto label_1d98e0;
        case 0x1d98e4u: goto label_1d98e4;
        case 0x1d98e8u: goto label_1d98e8;
        case 0x1d98ecu: goto label_1d98ec;
        case 0x1d98f0u: goto label_1d98f0;
        case 0x1d98f4u: goto label_1d98f4;
        case 0x1d98f8u: goto label_1d98f8;
        case 0x1d98fcu: goto label_1d98fc;
        case 0x1d9900u: goto label_1d9900;
        case 0x1d9904u: goto label_1d9904;
        case 0x1d9908u: goto label_1d9908;
        case 0x1d990cu: goto label_1d990c;
        case 0x1d9910u: goto label_1d9910;
        case 0x1d9914u: goto label_1d9914;
        case 0x1d9918u: goto label_1d9918;
        case 0x1d991cu: goto label_1d991c;
        case 0x1d9920u: goto label_1d9920;
        case 0x1d9924u: goto label_1d9924;
        case 0x1d9928u: goto label_1d9928;
        case 0x1d992cu: goto label_1d992c;
        case 0x1d9930u: goto label_1d9930;
        case 0x1d9934u: goto label_1d9934;
        case 0x1d9938u: goto label_1d9938;
        case 0x1d993cu: goto label_1d993c;
        case 0x1d9940u: goto label_1d9940;
        case 0x1d9944u: goto label_1d9944;
        case 0x1d9948u: goto label_1d9948;
        case 0x1d994cu: goto label_1d994c;
        case 0x1d9950u: goto label_1d9950;
        case 0x1d9954u: goto label_1d9954;
        case 0x1d9958u: goto label_1d9958;
        case 0x1d995cu: goto label_1d995c;
        case 0x1d9960u: goto label_1d9960;
        case 0x1d9964u: goto label_1d9964;
        case 0x1d9968u: goto label_1d9968;
        case 0x1d996cu: goto label_1d996c;
        case 0x1d9970u: goto label_1d9970;
        case 0x1d9974u: goto label_1d9974;
        case 0x1d9978u: goto label_1d9978;
        case 0x1d997cu: goto label_1d997c;
        case 0x1d9980u: goto label_1d9980;
        case 0x1d9984u: goto label_1d9984;
        case 0x1d9988u: goto label_1d9988;
        case 0x1d998cu: goto label_1d998c;
        case 0x1d9990u: goto label_1d9990;
        case 0x1d9994u: goto label_1d9994;
        case 0x1d9998u: goto label_1d9998;
        case 0x1d999cu: goto label_1d999c;
        case 0x1d99a0u: goto label_1d99a0;
        case 0x1d99a4u: goto label_1d99a4;
        case 0x1d99a8u: goto label_1d99a8;
        case 0x1d99acu: goto label_1d99ac;
        case 0x1d99b0u: goto label_1d99b0;
        case 0x1d99b4u: goto label_1d99b4;
        case 0x1d99b8u: goto label_1d99b8;
        case 0x1d99bcu: goto label_1d99bc;
        case 0x1d99c0u: goto label_1d99c0;
        case 0x1d99c4u: goto label_1d99c4;
        case 0x1d99c8u: goto label_1d99c8;
        case 0x1d99ccu: goto label_1d99cc;
        case 0x1d99d0u: goto label_1d99d0;
        case 0x1d99d4u: goto label_1d99d4;
        case 0x1d99d8u: goto label_1d99d8;
        case 0x1d99dcu: goto label_1d99dc;
        case 0x1d99e0u: goto label_1d99e0;
        case 0x1d99e4u: goto label_1d99e4;
        case 0x1d99e8u: goto label_1d99e8;
        case 0x1d99ecu: goto label_1d99ec;
        case 0x1d99f0u: goto label_1d99f0;
        case 0x1d99f4u: goto label_1d99f4;
        case 0x1d99f8u: goto label_1d99f8;
        case 0x1d99fcu: goto label_1d99fc;
        case 0x1d9a00u: goto label_1d9a00;
        case 0x1d9a04u: goto label_1d9a04;
        case 0x1d9a08u: goto label_1d9a08;
        case 0x1d9a0cu: goto label_1d9a0c;
        case 0x1d9a10u: goto label_1d9a10;
        case 0x1d9a14u: goto label_1d9a14;
        case 0x1d9a18u: goto label_1d9a18;
        case 0x1d9a1cu: goto label_1d9a1c;
        case 0x1d9a20u: goto label_1d9a20;
        case 0x1d9a24u: goto label_1d9a24;
        case 0x1d9a28u: goto label_1d9a28;
        case 0x1d9a2cu: goto label_1d9a2c;
        case 0x1d9a30u: goto label_1d9a30;
        case 0x1d9a34u: goto label_1d9a34;
        case 0x1d9a38u: goto label_1d9a38;
        case 0x1d9a3cu: goto label_1d9a3c;
        case 0x1d9a40u: goto label_1d9a40;
        case 0x1d9a44u: goto label_1d9a44;
        case 0x1d9a48u: goto label_1d9a48;
        case 0x1d9a4cu: goto label_1d9a4c;
        case 0x1d9a50u: goto label_1d9a50;
        case 0x1d9a54u: goto label_1d9a54;
        case 0x1d9a58u: goto label_1d9a58;
        case 0x1d9a5cu: goto label_1d9a5c;
        case 0x1d9a60u: goto label_1d9a60;
        case 0x1d9a64u: goto label_1d9a64;
        case 0x1d9a68u: goto label_1d9a68;
        case 0x1d9a6cu: goto label_1d9a6c;
        case 0x1d9a70u: goto label_1d9a70;
        case 0x1d9a74u: goto label_1d9a74;
        case 0x1d9a78u: goto label_1d9a78;
        case 0x1d9a7cu: goto label_1d9a7c;
        case 0x1d9a80u: goto label_1d9a80;
        case 0x1d9a84u: goto label_1d9a84;
        case 0x1d9a88u: goto label_1d9a88;
        case 0x1d9a8cu: goto label_1d9a8c;
        case 0x1d9a90u: goto label_1d9a90;
        case 0x1d9a94u: goto label_1d9a94;
        case 0x1d9a98u: goto label_1d9a98;
        case 0x1d9a9cu: goto label_1d9a9c;
        case 0x1d9aa0u: goto label_1d9aa0;
        case 0x1d9aa4u: goto label_1d9aa4;
        case 0x1d9aa8u: goto label_1d9aa8;
        case 0x1d9aacu: goto label_1d9aac;
        case 0x1d9ab0u: goto label_1d9ab0;
        case 0x1d9ab4u: goto label_1d9ab4;
        case 0x1d9ab8u: goto label_1d9ab8;
        case 0x1d9abcu: goto label_1d9abc;
        case 0x1d9ac0u: goto label_1d9ac0;
        case 0x1d9ac4u: goto label_1d9ac4;
        case 0x1d9ac8u: goto label_1d9ac8;
        case 0x1d9accu: goto label_1d9acc;
        case 0x1d9ad0u: goto label_1d9ad0;
        case 0x1d9ad4u: goto label_1d9ad4;
        case 0x1d9ad8u: goto label_1d9ad8;
        case 0x1d9adcu: goto label_1d9adc;
        case 0x1d9ae0u: goto label_1d9ae0;
        case 0x1d9ae4u: goto label_1d9ae4;
        case 0x1d9ae8u: goto label_1d9ae8;
        case 0x1d9aecu: goto label_1d9aec;
        case 0x1d9af0u: goto label_1d9af0;
        case 0x1d9af4u: goto label_1d9af4;
        case 0x1d9af8u: goto label_1d9af8;
        case 0x1d9afcu: goto label_1d9afc;
        case 0x1d9b00u: goto label_1d9b00;
        case 0x1d9b04u: goto label_1d9b04;
        case 0x1d9b08u: goto label_1d9b08;
        case 0x1d9b0cu: goto label_1d9b0c;
        case 0x1d9b10u: goto label_1d9b10;
        case 0x1d9b14u: goto label_1d9b14;
        case 0x1d9b18u: goto label_1d9b18;
        case 0x1d9b1cu: goto label_1d9b1c;
        case 0x1d9b20u: goto label_1d9b20;
        case 0x1d9b24u: goto label_1d9b24;
        case 0x1d9b28u: goto label_1d9b28;
        case 0x1d9b2cu: goto label_1d9b2c;
        case 0x1d9b30u: goto label_1d9b30;
        case 0x1d9b34u: goto label_1d9b34;
        case 0x1d9b38u: goto label_1d9b38;
        case 0x1d9b3cu: goto label_1d9b3c;
        case 0x1d9b40u: goto label_1d9b40;
        case 0x1d9b44u: goto label_1d9b44;
        case 0x1d9b48u: goto label_1d9b48;
        case 0x1d9b4cu: goto label_1d9b4c;
        case 0x1d9b50u: goto label_1d9b50;
        case 0x1d9b54u: goto label_1d9b54;
        case 0x1d9b58u: goto label_1d9b58;
        case 0x1d9b5cu: goto label_1d9b5c;
        case 0x1d9b60u: goto label_1d9b60;
        case 0x1d9b64u: goto label_1d9b64;
        case 0x1d9b68u: goto label_1d9b68;
        case 0x1d9b6cu: goto label_1d9b6c;
        case 0x1d9b70u: goto label_1d9b70;
        case 0x1d9b74u: goto label_1d9b74;
        case 0x1d9b78u: goto label_1d9b78;
        case 0x1d9b7cu: goto label_1d9b7c;
        case 0x1d9b80u: goto label_1d9b80;
        case 0x1d9b84u: goto label_1d9b84;
        case 0x1d9b88u: goto label_1d9b88;
        case 0x1d9b8cu: goto label_1d9b8c;
        case 0x1d9b90u: goto label_1d9b90;
        case 0x1d9b94u: goto label_1d9b94;
        case 0x1d9b98u: goto label_1d9b98;
        case 0x1d9b9cu: goto label_1d9b9c;
        case 0x1d9ba0u: goto label_1d9ba0;
        case 0x1d9ba4u: goto label_1d9ba4;
        case 0x1d9ba8u: goto label_1d9ba8;
        case 0x1d9bacu: goto label_1d9bac;
        case 0x1d9bb0u: goto label_1d9bb0;
        case 0x1d9bb4u: goto label_1d9bb4;
        case 0x1d9bb8u: goto label_1d9bb8;
        case 0x1d9bbcu: goto label_1d9bbc;
        case 0x1d9bc0u: goto label_1d9bc0;
        case 0x1d9bc4u: goto label_1d9bc4;
        case 0x1d9bc8u: goto label_1d9bc8;
        case 0x1d9bccu: goto label_1d9bcc;
        case 0x1d9bd0u: goto label_1d9bd0;
        case 0x1d9bd4u: goto label_1d9bd4;
        case 0x1d9bd8u: goto label_1d9bd8;
        case 0x1d9bdcu: goto label_1d9bdc;
        case 0x1d9be0u: goto label_1d9be0;
        case 0x1d9be4u: goto label_1d9be4;
        case 0x1d9be8u: goto label_1d9be8;
        case 0x1d9becu: goto label_1d9bec;
        case 0x1d9bf0u: goto label_1d9bf0;
        case 0x1d9bf4u: goto label_1d9bf4;
        case 0x1d9bf8u: goto label_1d9bf8;
        case 0x1d9bfcu: goto label_1d9bfc;
        case 0x1d9c00u: goto label_1d9c00;
        case 0x1d9c04u: goto label_1d9c04;
        case 0x1d9c08u: goto label_1d9c08;
        case 0x1d9c0cu: goto label_1d9c0c;
        case 0x1d9c10u: goto label_1d9c10;
        case 0x1d9c14u: goto label_1d9c14;
        case 0x1d9c18u: goto label_1d9c18;
        case 0x1d9c1cu: goto label_1d9c1c;
        case 0x1d9c20u: goto label_1d9c20;
        case 0x1d9c24u: goto label_1d9c24;
        case 0x1d9c28u: goto label_1d9c28;
        case 0x1d9c2cu: goto label_1d9c2c;
        case 0x1d9c30u: goto label_1d9c30;
        case 0x1d9c34u: goto label_1d9c34;
        case 0x1d9c38u: goto label_1d9c38;
        case 0x1d9c3cu: goto label_1d9c3c;
        case 0x1d9c40u: goto label_1d9c40;
        case 0x1d9c44u: goto label_1d9c44;
        case 0x1d9c48u: goto label_1d9c48;
        case 0x1d9c4cu: goto label_1d9c4c;
        case 0x1d9c50u: goto label_1d9c50;
        case 0x1d9c54u: goto label_1d9c54;
        case 0x1d9c58u: goto label_1d9c58;
        case 0x1d9c5cu: goto label_1d9c5c;
        case 0x1d9c60u: goto label_1d9c60;
        case 0x1d9c64u: goto label_1d9c64;
        case 0x1d9c68u: goto label_1d9c68;
        case 0x1d9c6cu: goto label_1d9c6c;
        case 0x1d9c70u: goto label_1d9c70;
        case 0x1d9c74u: goto label_1d9c74;
        case 0x1d9c78u: goto label_1d9c78;
        case 0x1d9c7cu: goto label_1d9c7c;
        case 0x1d9c80u: goto label_1d9c80;
        case 0x1d9c84u: goto label_1d9c84;
        case 0x1d9c88u: goto label_1d9c88;
        case 0x1d9c8cu: goto label_1d9c8c;
        case 0x1d9c90u: goto label_1d9c90;
        case 0x1d9c94u: goto label_1d9c94;
        case 0x1d9c98u: goto label_1d9c98;
        case 0x1d9c9cu: goto label_1d9c9c;
        case 0x1d9ca0u: goto label_1d9ca0;
        case 0x1d9ca4u: goto label_1d9ca4;
        case 0x1d9ca8u: goto label_1d9ca8;
        case 0x1d9cacu: goto label_1d9cac;
        case 0x1d9cb0u: goto label_1d9cb0;
        case 0x1d9cb4u: goto label_1d9cb4;
        case 0x1d9cb8u: goto label_1d9cb8;
        case 0x1d9cbcu: goto label_1d9cbc;
        case 0x1d9cc0u: goto label_1d9cc0;
        case 0x1d9cc4u: goto label_1d9cc4;
        case 0x1d9cc8u: goto label_1d9cc8;
        case 0x1d9cccu: goto label_1d9ccc;
        case 0x1d9cd0u: goto label_1d9cd0;
        case 0x1d9cd4u: goto label_1d9cd4;
        case 0x1d9cd8u: goto label_1d9cd8;
        case 0x1d9cdcu: goto label_1d9cdc;
        case 0x1d9ce0u: goto label_1d9ce0;
        case 0x1d9ce4u: goto label_1d9ce4;
        case 0x1d9ce8u: goto label_1d9ce8;
        case 0x1d9cecu: goto label_1d9cec;
        case 0x1d9cf0u: goto label_1d9cf0;
        case 0x1d9cf4u: goto label_1d9cf4;
        case 0x1d9cf8u: goto label_1d9cf8;
        case 0x1d9cfcu: goto label_1d9cfc;
        case 0x1d9d00u: goto label_1d9d00;
        case 0x1d9d04u: goto label_1d9d04;
        case 0x1d9d08u: goto label_1d9d08;
        case 0x1d9d0cu: goto label_1d9d0c;
        case 0x1d9d10u: goto label_1d9d10;
        case 0x1d9d14u: goto label_1d9d14;
        case 0x1d9d18u: goto label_1d9d18;
        case 0x1d9d1cu: goto label_1d9d1c;
        case 0x1d9d20u: goto label_1d9d20;
        case 0x1d9d24u: goto label_1d9d24;
        case 0x1d9d28u: goto label_1d9d28;
        case 0x1d9d2cu: goto label_1d9d2c;
        case 0x1d9d30u: goto label_1d9d30;
        case 0x1d9d34u: goto label_1d9d34;
        case 0x1d9d38u: goto label_1d9d38;
        case 0x1d9d3cu: goto label_1d9d3c;
        case 0x1d9d40u: goto label_1d9d40;
        case 0x1d9d44u: goto label_1d9d44;
        case 0x1d9d48u: goto label_1d9d48;
        case 0x1d9d4cu: goto label_1d9d4c;
        case 0x1d9d50u: goto label_1d9d50;
        case 0x1d9d54u: goto label_1d9d54;
        case 0x1d9d58u: goto label_1d9d58;
        case 0x1d9d5cu: goto label_1d9d5c;
        case 0x1d9d60u: goto label_1d9d60;
        case 0x1d9d64u: goto label_1d9d64;
        case 0x1d9d68u: goto label_1d9d68;
        case 0x1d9d6cu: goto label_1d9d6c;
        case 0x1d9d70u: goto label_1d9d70;
        case 0x1d9d74u: goto label_1d9d74;
        case 0x1d9d78u: goto label_1d9d78;
        case 0x1d9d7cu: goto label_1d9d7c;
        case 0x1d9d80u: goto label_1d9d80;
        case 0x1d9d84u: goto label_1d9d84;
        case 0x1d9d88u: goto label_1d9d88;
        case 0x1d9d8cu: goto label_1d9d8c;
        case 0x1d9d90u: goto label_1d9d90;
        case 0x1d9d94u: goto label_1d9d94;
        case 0x1d9d98u: goto label_1d9d98;
        case 0x1d9d9cu: goto label_1d9d9c;
        case 0x1d9da0u: goto label_1d9da0;
        case 0x1d9da4u: goto label_1d9da4;
        case 0x1d9da8u: goto label_1d9da8;
        case 0x1d9dacu: goto label_1d9dac;
        case 0x1d9db0u: goto label_1d9db0;
        case 0x1d9db4u: goto label_1d9db4;
        case 0x1d9db8u: goto label_1d9db8;
        case 0x1d9dbcu: goto label_1d9dbc;
        case 0x1d9dc0u: goto label_1d9dc0;
        case 0x1d9dc4u: goto label_1d9dc4;
        case 0x1d9dc8u: goto label_1d9dc8;
        case 0x1d9dccu: goto label_1d9dcc;
        case 0x1d9dd0u: goto label_1d9dd0;
        case 0x1d9dd4u: goto label_1d9dd4;
        case 0x1d9dd8u: goto label_1d9dd8;
        case 0x1d9ddcu: goto label_1d9ddc;
        case 0x1d9de0u: goto label_1d9de0;
        case 0x1d9de4u: goto label_1d9de4;
        case 0x1d9de8u: goto label_1d9de8;
        case 0x1d9decu: goto label_1d9dec;
        case 0x1d9df0u: goto label_1d9df0;
        case 0x1d9df4u: goto label_1d9df4;
        case 0x1d9df8u: goto label_1d9df8;
        case 0x1d9dfcu: goto label_1d9dfc;
        case 0x1d9e00u: goto label_1d9e00;
        case 0x1d9e04u: goto label_1d9e04;
        case 0x1d9e08u: goto label_1d9e08;
        case 0x1d9e0cu: goto label_1d9e0c;
        case 0x1d9e10u: goto label_1d9e10;
        case 0x1d9e14u: goto label_1d9e14;
        case 0x1d9e18u: goto label_1d9e18;
        case 0x1d9e1cu: goto label_1d9e1c;
        case 0x1d9e20u: goto label_1d9e20;
        case 0x1d9e24u: goto label_1d9e24;
        case 0x1d9e28u: goto label_1d9e28;
        case 0x1d9e2cu: goto label_1d9e2c;
        case 0x1d9e30u: goto label_1d9e30;
        case 0x1d9e34u: goto label_1d9e34;
        case 0x1d9e38u: goto label_1d9e38;
        case 0x1d9e3cu: goto label_1d9e3c;
        case 0x1d9e40u: goto label_1d9e40;
        case 0x1d9e44u: goto label_1d9e44;
        case 0x1d9e48u: goto label_1d9e48;
        case 0x1d9e4cu: goto label_1d9e4c;
        case 0x1d9e50u: goto label_1d9e50;
        case 0x1d9e54u: goto label_1d9e54;
        case 0x1d9e58u: goto label_1d9e58;
        case 0x1d9e5cu: goto label_1d9e5c;
        case 0x1d9e60u: goto label_1d9e60;
        case 0x1d9e64u: goto label_1d9e64;
        case 0x1d9e68u: goto label_1d9e68;
        case 0x1d9e6cu: goto label_1d9e6c;
        case 0x1d9e70u: goto label_1d9e70;
        case 0x1d9e74u: goto label_1d9e74;
        case 0x1d9e78u: goto label_1d9e78;
        case 0x1d9e7cu: goto label_1d9e7c;
        case 0x1d9e80u: goto label_1d9e80;
        case 0x1d9e84u: goto label_1d9e84;
        case 0x1d9e88u: goto label_1d9e88;
        case 0x1d9e8cu: goto label_1d9e8c;
        case 0x1d9e90u: goto label_1d9e90;
        case 0x1d9e94u: goto label_1d9e94;
        case 0x1d9e98u: goto label_1d9e98;
        case 0x1d9e9cu: goto label_1d9e9c;
        case 0x1d9ea0u: goto label_1d9ea0;
        case 0x1d9ea4u: goto label_1d9ea4;
        case 0x1d9ea8u: goto label_1d9ea8;
        case 0x1d9eacu: goto label_1d9eac;
        case 0x1d9eb0u: goto label_1d9eb0;
        case 0x1d9eb4u: goto label_1d9eb4;
        case 0x1d9eb8u: goto label_1d9eb8;
        case 0x1d9ebcu: goto label_1d9ebc;
        case 0x1d9ec0u: goto label_1d9ec0;
        case 0x1d9ec4u: goto label_1d9ec4;
        case 0x1d9ec8u: goto label_1d9ec8;
        case 0x1d9eccu: goto label_1d9ecc;
        case 0x1d9ed0u: goto label_1d9ed0;
        case 0x1d9ed4u: goto label_1d9ed4;
        case 0x1d9ed8u: goto label_1d9ed8;
        case 0x1d9edcu: goto label_1d9edc;
        case 0x1d9ee0u: goto label_1d9ee0;
        case 0x1d9ee4u: goto label_1d9ee4;
        case 0x1d9ee8u: goto label_1d9ee8;
        case 0x1d9eecu: goto label_1d9eec;
        case 0x1d9ef0u: goto label_1d9ef0;
        case 0x1d9ef4u: goto label_1d9ef4;
        case 0x1d9ef8u: goto label_1d9ef8;
        case 0x1d9efcu: goto label_1d9efc;
        case 0x1d9f00u: goto label_1d9f00;
        case 0x1d9f04u: goto label_1d9f04;
        case 0x1d9f08u: goto label_1d9f08;
        case 0x1d9f0cu: goto label_1d9f0c;
        case 0x1d9f10u: goto label_1d9f10;
        case 0x1d9f14u: goto label_1d9f14;
        case 0x1d9f18u: goto label_1d9f18;
        case 0x1d9f1cu: goto label_1d9f1c;
        default: break;
    }

    ctx->pc = 0x1d97f0u;

label_1d97f0:
    // 0x1d97f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d97f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d97f4:
    // 0x1d97f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d97f8:
    // 0x1d97f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d97f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d97fc:
    // 0x1d97fc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1d97fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9800:
    // 0x1d9800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d9800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d9804:
    // 0x1d9804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d9808:
    // 0x1d9808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d980c:
    // 0x1d980c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x1d980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_1d9810:
    // 0x1d9810: 0x8c880e38  lw          $t0, 0xE38($a0)
    ctx->pc = 0x1d9810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_1d9814:
    // 0x1d9814: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_1d9818:
    // 0x1d9818: 0x110701b8  beq         $t0, $a3, . + 4 + (0x1B8 << 2)
label_1d981c:
    if (ctx->pc == 0x1D981Cu) {
        ctx->pc = 0x1D981Cu;
            // 0x1d981c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9820u;
        goto label_1d9820;
    }
    ctx->pc = 0x1D9818u;
    {
        const bool branch_taken_0x1d9818 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9818u;
            // 0x1d981c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9818) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9820u;
label_1d9820:
    // 0x1d9820: 0x824911aa  lb          $t1, 0x11AA($s2)
    ctx->pc = 0x1d9820u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_1d9824:
    // 0x1d9824: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x1d9824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
label_1d9828:
    // 0x1d9828: 0x8ce7d120  lw          $a3, -0x2EE0($a3)
    ctx->pc = 0x1d9828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955296)));
label_1d982c:
    // 0x1d982c: 0x2cc10008  sltiu       $at, $a2, 0x8
    ctx->pc = 0x1d982cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1d9830:
    // 0x1d9830: 0x8e480d74  lw          $t0, 0xD74($s2)
    ctx->pc = 0x1d9830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_1d9834:
    // 0x1d9834: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x1d9834u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1d9838:
    // 0x1d9838: 0x8ce90010  lw          $t1, 0x10($a3)
    ctx->pc = 0x1d9838u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1d983c:
    // 0x1d983c: 0x910702c5  lbu         $a3, 0x2C5($t0)
    ctx->pc = 0x1d983cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 709)));
label_1d9840:
    // 0x1d9840: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1d9840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1d9844:
    // 0x1d9844: 0x8d310000  lw          $s1, 0x0($t1)
    ctx->pc = 0x1d9844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1d9848:
    // 0x1d9848: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1d9848u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1d984c:
    // 0x1d984c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1d984cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1d9850:
    // 0x1d9850: 0x102001aa  beqz        $at, . + 4 + (0x1AA << 2)
label_1d9854:
    if (ctx->pc == 0x1D9854u) {
        ctx->pc = 0x1D9854u;
            // 0x1d9854: 0x24f00280  addiu       $s0, $a3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 640));
        ctx->pc = 0x1D9858u;
        goto label_1d9858;
    }
    ctx->pc = 0x1D9850u;
    {
        const bool branch_taken_0x1d9850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9850u;
            // 0x1d9854: 0x24f00280  addiu       $s0, $a3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9850) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9858u;
label_1d9858:
    // 0x1d9858: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x1d9858u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_1d985c:
    // 0x1d985c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d985cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1d9860:
    // 0x1d9860: 0x24e7c7a0  addiu       $a3, $a3, -0x3860
    ctx->pc = 0x1d9860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952864));
label_1d9864:
    // 0x1d9864: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1d9868:
    // 0x1d9868: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d986c:
    // 0x1d986c: 0xc00008  jr          $a2
label_1d9870:
    if (ctx->pc == 0x1D9870u) {
        ctx->pc = 0x1D9874u;
        goto label_1d9874;
    }
    ctx->pc = 0x1D986Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9874u: goto label_1d9874;
            case 0x1D9B54u: goto label_1d9b54;
            case 0x1D9C6Cu: goto label_1d9c6c;
            case 0x1D9C7Cu: goto label_1d9c7c;
            case 0x1D9C8Cu: goto label_1d9c8c;
            case 0x1D9D24u: goto label_1d9d24;
            case 0x1D9D34u: goto label_1d9d34;
            case 0x1D9EFCu: goto label_1d9efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9874u;
label_1d9874:
    // 0x1d9874: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1d9874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1d9878:
    // 0x1d9878: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d9878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d987c:
    // 0x1d987c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
label_1d9880:
    if (ctx->pc == 0x1D9880u) {
        ctx->pc = 0x1D9880u;
            // 0x1d9880: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->pc = 0x1D9884u;
        goto label_1d9884;
    }
    ctx->pc = 0x1D987Cu;
    {
        const bool branch_taken_0x1d987c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d987c) {
            ctx->pc = 0x1D9880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D987Cu;
            // 0x1d9880: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9890u;
            goto label_1d9890;
        }
    }
    ctx->pc = 0x1D9884u;
label_1d9884:
    // 0x1d9884: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1d9888:
    if (ctx->pc == 0x1D9888u) {
        ctx->pc = 0x1D9888u;
            // 0x1d9888: 0x92030007  lbu         $v1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->pc = 0x1D988Cu;
        goto label_1d988c;
    }
    ctx->pc = 0x1D9884u;
    {
        const bool branch_taken_0x1d9884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9884u;
            // 0x1d9888: 0x92030007  lbu         $v1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9884) {
            ctx->pc = 0x1D9A3Cu;
            goto label_1d9a3c;
        }
    }
    ctx->pc = 0x1D988Cu;
label_1d988c:
    // 0x1d988c: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x1d988cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_1d9890:
    // 0x1d9890: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d9890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d9894:
    // 0x1d9894: 0x50820017  beql        $a0, $v0, . + 4 + (0x17 << 2)
label_1d9898:
    if (ctx->pc == 0x1D9898u) {
        ctx->pc = 0x1D9898u;
            // 0x1d9898: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D989Cu;
        goto label_1d989c;
    }
    ctx->pc = 0x1D9894u;
    {
        const bool branch_taken_0x1d9894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9894) {
            ctx->pc = 0x1D9898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9894u;
            // 0x1d9898: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D98F4u;
            goto label_1d98f4;
        }
    }
    ctx->pc = 0x1D989Cu;
label_1d989c:
    // 0x1d989c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d98a0:
    // 0x1d98a0: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
label_1d98a4:
    if (ctx->pc == 0x1D98A4u) {
        ctx->pc = 0x1D98A4u;
            // 0x1d98a4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D98A8u;
        goto label_1d98a8;
    }
    ctx->pc = 0x1D98A0u;
    {
        const bool branch_taken_0x1d98a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d98a0) {
            ctx->pc = 0x1D98A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98A0u;
            // 0x1d98a4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D98C0u;
            goto label_1d98c0;
        }
    }
    ctx->pc = 0x1D98A8u;
label_1d98a8:
    // 0x1d98a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d98ac:
    // 0x1d98ac: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1d98b0:
    if (ctx->pc == 0x1D98B0u) {
        ctx->pc = 0x1D98B4u;
        goto label_1d98b4;
    }
    ctx->pc = 0x1D98ACu;
    {
        const bool branch_taken_0x1d98ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d98ac) {
            ctx->pc = 0x1D98BCu;
            goto label_1d98bc;
        }
    }
    ctx->pc = 0x1D98B4u;
label_1d98b4:
    // 0x1d98b4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d98b8:
    if (ctx->pc == 0x1D98B8u) {
        ctx->pc = 0x1D98B8u;
            // 0x1d98b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1D98BCu;
        goto label_1d98bc;
    }
    ctx->pc = 0x1D98B4u;
    {
        const bool branch_taken_0x1d98b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98B4u;
            // 0x1d98b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98b4) {
            ctx->pc = 0x1D9928u;
            goto label_1d9928;
        }
    }
    ctx->pc = 0x1D98BCu;
label_1d98bc:
    // 0x1d98bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d98bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d98c0:
    // 0x1d98c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d98c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d98c4:
    // 0x1d98c4: 0x320f809  jalr        $t9
label_1d98c8:
    if (ctx->pc == 0x1D98C8u) {
        ctx->pc = 0x1D98C8u;
            // 0x1d98c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D98CCu;
        goto label_1d98cc;
    }
    ctx->pc = 0x1D98C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D98CCu);
        ctx->pc = 0x1D98C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98C4u;
            // 0x1d98c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D98CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D98CCu; }
            if (ctx->pc != 0x1D98CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D98CCu;
label_1d98cc:
    // 0x1d98cc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d98ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d98d0:
    // 0x1d98d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d98d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d98d4:
    // 0x1d98d4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1d98d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d98d8:
    // 0x1d98d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d98d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d98dc:
    // 0x1d98dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d98dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d98e0:
    // 0x1d98e0: 0x320f809  jalr        $t9
label_1d98e4:
    if (ctx->pc == 0x1D98E4u) {
        ctx->pc = 0x1D98E4u;
            // 0x1d98e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D98E8u;
        goto label_1d98e8;
    }
    ctx->pc = 0x1D98E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D98E8u);
        ctx->pc = 0x1D98E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98E0u;
            // 0x1d98e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D98E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D98E8u; }
            if (ctx->pc != 0x1D98E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D98E8u;
label_1d98e8:
    // 0x1d98e8: 0x10000185  b           . + 4 + (0x185 << 2)
label_1d98ec:
    if (ctx->pc == 0x1D98ECu) {
        ctx->pc = 0x1D98ECu;
            // 0x1d98ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1D98F0u;
        goto label_1d98f0;
    }
    ctx->pc = 0x1D98E8u;
    {
        const bool branch_taken_0x1d98e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98E8u;
            // 0x1d98ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98e8) {
            ctx->pc = 0x1D9F00u;
            goto label_1d9f00;
        }
    }
    ctx->pc = 0x1D98F0u;
label_1d98f0:
    // 0x1d98f0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d98f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d98f4:
    // 0x1d98f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d98f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d98f8:
    // 0x1d98f8: 0x320f809  jalr        $t9
label_1d98fc:
    if (ctx->pc == 0x1D98FCu) {
        ctx->pc = 0x1D98FCu;
            // 0x1d98fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9900u;
        goto label_1d9900;
    }
    ctx->pc = 0x1D98F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9900u);
        ctx->pc = 0x1D98FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98F8u;
            // 0x1d98fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9900u; }
            if (ctx->pc != 0x1D9900u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9900u;
label_1d9900:
    // 0x1d9900: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9904:
    // 0x1d9904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9908:
    // 0x1d9908: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x1d9908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1d990c:
    // 0x1d990c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d990cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9910:
    // 0x1d9910: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9914:
    // 0x1d9914: 0x320f809  jalr        $t9
label_1d9918:
    if (ctx->pc == 0x1D9918u) {
        ctx->pc = 0x1D9918u;
            // 0x1d9918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D991Cu;
        goto label_1d991c;
    }
    ctx->pc = 0x1D9914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D991Cu);
        ctx->pc = 0x1D9918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9914u;
            // 0x1d9918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D991Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D991Cu; }
            if (ctx->pc != 0x1D991Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D991Cu;
label_1d991c:
    // 0x1d991c: 0x10000177  b           . + 4 + (0x177 << 2)
label_1d9920:
    if (ctx->pc == 0x1D9920u) {
        ctx->pc = 0x1D9924u;
        goto label_1d9924;
    }
    ctx->pc = 0x1D991Cu;
    {
        const bool branch_taken_0x1d991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d991c) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9924u;
label_1d9924:
    // 0x1d9924: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1d9924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d9928:
    // 0x1d9928: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
label_1d992c:
    if (ctx->pc == 0x1D992Cu) {
        ctx->pc = 0x1D992Cu;
            // 0x1d992c: 0x8e430d6c  lw          $v1, 0xD6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
        ctx->pc = 0x1D9930u;
        goto label_1d9930;
    }
    ctx->pc = 0x1D9928u;
    {
        const bool branch_taken_0x1d9928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9928) {
            ctx->pc = 0x1D992Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9928u;
            // 0x1d992c: 0x8e430d6c  lw          $v1, 0xD6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D99B8u;
            goto label_1d99b8;
        }
    }
    ctx->pc = 0x1D9930u;
label_1d9930:
    // 0x1d9930: 0x8e430d6c  lw          $v1, 0xD6C($s2)
    ctx->pc = 0x1d9930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_1d9934:
    // 0x1d9934: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d9934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d9938:
    // 0x1d9938: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1d9938u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_1d993c:
    // 0x1d993c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_1d9940:
    if (ctx->pc == 0x1D9940u) {
        ctx->pc = 0x1D9940u;
            // 0x1d9940: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9944u;
        goto label_1d9944;
    }
    ctx->pc = 0x1D993Cu;
    {
        const bool branch_taken_0x1d993c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d993c) {
            ctx->pc = 0x1D9940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D993Cu;
            // 0x1d9940: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9950u;
            goto label_1d9950;
        }
    }
    ctx->pc = 0x1D9944u;
label_1d9944:
    // 0x1d9944: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d9948:
    if (ctx->pc == 0x1D9948u) {
        ctx->pc = 0x1D9948u;
            // 0x1d9948: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D994Cu;
        goto label_1d994c;
    }
    ctx->pc = 0x1D9944u;
    {
        const bool branch_taken_0x1d9944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9944u;
            // 0x1d9948: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9944) {
            ctx->pc = 0x1D9984u;
            goto label_1d9984;
        }
    }
    ctx->pc = 0x1D994Cu;
label_1d994c:
    // 0x1d994c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d994cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9950:
    // 0x1d9950: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9954:
    // 0x1d9954: 0x320f809  jalr        $t9
label_1d9958:
    if (ctx->pc == 0x1D9958u) {
        ctx->pc = 0x1D9958u;
            // 0x1d9958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D995Cu;
        goto label_1d995c;
    }
    ctx->pc = 0x1D9954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D995Cu);
        ctx->pc = 0x1D9958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9954u;
            // 0x1d9958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D995Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D995Cu; }
            if (ctx->pc != 0x1D995Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D995Cu;
label_1d995c:
    // 0x1d995c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9960:
    // 0x1d9960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9964:
    // 0x1d9964: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1d9964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1d9968:
    // 0x1d9968: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d996c:
    // 0x1d996c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d996cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9970:
    // 0x1d9970: 0x320f809  jalr        $t9
label_1d9974:
    if (ctx->pc == 0x1D9974u) {
        ctx->pc = 0x1D9974u;
            // 0x1d9974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9978u;
        goto label_1d9978;
    }
    ctx->pc = 0x1D9970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9978u);
        ctx->pc = 0x1D9974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9970u;
            // 0x1d9974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9978u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9978u; }
            if (ctx->pc != 0x1D9978u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9978u;
label_1d9978:
    // 0x1d9978: 0x10000160  b           . + 4 + (0x160 << 2)
label_1d997c:
    if (ctx->pc == 0x1D997Cu) {
        ctx->pc = 0x1D9980u;
        goto label_1d9980;
    }
    ctx->pc = 0x1D9978u;
    {
        const bool branch_taken_0x1d9978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9978) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9980u;
label_1d9980:
    // 0x1d9980: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9984:
    // 0x1d9984: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9988:
    // 0x1d9988: 0x320f809  jalr        $t9
label_1d998c:
    if (ctx->pc == 0x1D998Cu) {
        ctx->pc = 0x1D998Cu;
            // 0x1d998c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9990u;
        goto label_1d9990;
    }
    ctx->pc = 0x1D9988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9990u);
        ctx->pc = 0x1D998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9988u;
            // 0x1d998c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9990u; }
            if (ctx->pc != 0x1D9990u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9990u;
label_1d9990:
    // 0x1d9990: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9994:
    // 0x1d9994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9998:
    // 0x1d9998: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d999c:
    // 0x1d999c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d99a0:
    // 0x1d99a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d99a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d99a4:
    // 0x1d99a4: 0x320f809  jalr        $t9
label_1d99a8:
    if (ctx->pc == 0x1D99A8u) {
        ctx->pc = 0x1D99A8u;
            // 0x1d99a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D99ACu;
        goto label_1d99ac;
    }
    ctx->pc = 0x1D99A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D99ACu);
        ctx->pc = 0x1D99A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99A4u;
            // 0x1d99a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D99ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D99ACu; }
            if (ctx->pc != 0x1D99ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D99ACu;
label_1d99ac:
    // 0x1d99ac: 0x10000153  b           . + 4 + (0x153 << 2)
label_1d99b0:
    if (ctx->pc == 0x1D99B0u) {
        ctx->pc = 0x1D99B4u;
        goto label_1d99b4;
    }
    ctx->pc = 0x1D99ACu;
    {
        const bool branch_taken_0x1d99ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99ac) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D99B4u;
label_1d99b4:
    // 0x1d99b4: 0x8e430d6c  lw          $v1, 0xD6C($s2)
    ctx->pc = 0x1d99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_1d99b8:
    // 0x1d99b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d99bc:
    // 0x1d99bc: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1d99bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_1d99c0:
    // 0x1d99c0: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_1d99c4:
    if (ctx->pc == 0x1D99C4u) {
        ctx->pc = 0x1D99C4u;
            // 0x1d99c4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D99C8u;
        goto label_1d99c8;
    }
    ctx->pc = 0x1D99C0u;
    {
        const bool branch_taken_0x1d99c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d99c0) {
            ctx->pc = 0x1D99C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99C0u;
            // 0x1d99c4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D99D4u;
            goto label_1d99d4;
        }
    }
    ctx->pc = 0x1D99C8u;
label_1d99c8:
    // 0x1d99c8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d99cc:
    if (ctx->pc == 0x1D99CCu) {
        ctx->pc = 0x1D99CCu;
            // 0x1d99cc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D99D0u;
        goto label_1d99d0;
    }
    ctx->pc = 0x1D99C8u;
    {
        const bool branch_taken_0x1d99c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D99CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99C8u;
            // 0x1d99cc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99c8) {
            ctx->pc = 0x1D9A08u;
            goto label_1d9a08;
        }
    }
    ctx->pc = 0x1D99D0u;
label_1d99d0:
    // 0x1d99d0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d99d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d99d4:
    // 0x1d99d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d99d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d99d8:
    // 0x1d99d8: 0x320f809  jalr        $t9
label_1d99dc:
    if (ctx->pc == 0x1D99DCu) {
        ctx->pc = 0x1D99DCu;
            // 0x1d99dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D99E0u;
        goto label_1d99e0;
    }
    ctx->pc = 0x1D99D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D99E0u);
        ctx->pc = 0x1D99DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99D8u;
            // 0x1d99dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D99E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D99E0u; }
            if (ctx->pc != 0x1D99E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D99E0u;
label_1d99e0:
    // 0x1d99e0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d99e4:
    // 0x1d99e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d99e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d99e8:
    // 0x1d99e8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1d99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d99ec:
    // 0x1d99ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d99ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d99f0:
    // 0x1d99f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d99f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d99f4:
    // 0x1d99f4: 0x320f809  jalr        $t9
label_1d99f8:
    if (ctx->pc == 0x1D99F8u) {
        ctx->pc = 0x1D99F8u;
            // 0x1d99f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D99FCu;
        goto label_1d99fc;
    }
    ctx->pc = 0x1D99F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D99FCu);
        ctx->pc = 0x1D99F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99F4u;
            // 0x1d99f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D99FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D99FCu; }
            if (ctx->pc != 0x1D99FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D99FCu;
label_1d99fc:
    // 0x1d99fc: 0x1000013f  b           . + 4 + (0x13F << 2)
label_1d9a00:
    if (ctx->pc == 0x1D9A00u) {
        ctx->pc = 0x1D9A04u;
        goto label_1d9a04;
    }
    ctx->pc = 0x1D99FCu;
    {
        const bool branch_taken_0x1d99fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99fc) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9A04u;
label_1d9a04:
    // 0x1d9a04: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9a08:
    // 0x1d9a08: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9a0c:
    // 0x1d9a0c: 0x320f809  jalr        $t9
label_1d9a10:
    if (ctx->pc == 0x1D9A10u) {
        ctx->pc = 0x1D9A10u;
            // 0x1d9a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A14u;
        goto label_1d9a14;
    }
    ctx->pc = 0x1D9A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9A14u);
        ctx->pc = 0x1D9A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A0Cu;
            // 0x1d9a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9A14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A14u; }
            if (ctx->pc != 0x1D9A14u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9A14u;
label_1d9a14:
    // 0x1d9a14: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9a14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9a18:
    // 0x1d9a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a1c:
    // 0x1d9a1c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1d9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d9a20:
    // 0x1d9a20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9a24:
    // 0x1d9a24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9a28:
    // 0x1d9a28: 0x320f809  jalr        $t9
label_1d9a2c:
    if (ctx->pc == 0x1D9A2Cu) {
        ctx->pc = 0x1D9A2Cu;
            // 0x1d9a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A30u;
        goto label_1d9a30;
    }
    ctx->pc = 0x1D9A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9A30u);
        ctx->pc = 0x1D9A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A28u;
            // 0x1d9a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A30u; }
            if (ctx->pc != 0x1D9A30u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9A30u;
label_1d9a30:
    // 0x1d9a30: 0x10000132  b           . + 4 + (0x132 << 2)
label_1d9a34:
    if (ctx->pc == 0x1D9A34u) {
        ctx->pc = 0x1D9A38u;
        goto label_1d9a38;
    }
    ctx->pc = 0x1D9A30u;
    {
        const bool branch_taken_0x1d9a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a30) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9A38u;
label_1d9a38:
    // 0x1d9a38: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x1d9a38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_1d9a3c:
    // 0x1d9a3c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d9a40:
    // 0x1d9a40: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_1d9a44:
    if (ctx->pc == 0x1D9A44u) {
        ctx->pc = 0x1D9A44u;
            // 0x1d9a44: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9A48u;
        goto label_1d9a48;
    }
    ctx->pc = 0x1D9A40u;
    {
        const bool branch_taken_0x1d9a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9a40) {
            ctx->pc = 0x1D9A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A40u;
            // 0x1d9a44: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AA0u;
            goto label_1d9aa0;
        }
    }
    ctx->pc = 0x1D9A48u;
label_1d9a48:
    // 0x1d9a48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9a4c:
    // 0x1d9a4c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1d9a50:
    if (ctx->pc == 0x1D9A50u) {
        ctx->pc = 0x1D9A50u;
            // 0x1d9a50: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9A54u;
        goto label_1d9a54;
    }
    ctx->pc = 0x1D9A4Cu;
    {
        const bool branch_taken_0x1d9a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9a4c) {
            ctx->pc = 0x1D9A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A4Cu;
            // 0x1d9a50: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A6Cu;
            goto label_1d9a6c;
        }
    }
    ctx->pc = 0x1D9A54u;
label_1d9a54:
    // 0x1d9a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9a58:
    // 0x1d9a58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d9a5c:
    if (ctx->pc == 0x1D9A5Cu) {
        ctx->pc = 0x1D9A60u;
        goto label_1d9a60;
    }
    ctx->pc = 0x1D9A58u;
    {
        const bool branch_taken_0x1d9a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9a58) {
            ctx->pc = 0x1D9A68u;
            goto label_1d9a68;
        }
    }
    ctx->pc = 0x1D9A60u;
label_1d9a60:
    // 0x1d9a60: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d9a64:
    if (ctx->pc == 0x1D9A64u) {
        ctx->pc = 0x1D9A64u;
            // 0x1d9a64: 0x8e430d6c  lw          $v1, 0xD6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
        ctx->pc = 0x1D9A68u;
        goto label_1d9a68;
    }
    ctx->pc = 0x1D9A60u;
    {
        const bool branch_taken_0x1d9a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A60u;
            // 0x1d9a64: 0x8e430d6c  lw          $v1, 0xD6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a60) {
            ctx->pc = 0x1D9AD4u;
            goto label_1d9ad4;
        }
    }
    ctx->pc = 0x1D9A68u;
label_1d9a68:
    // 0x1d9a68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9a6c:
    // 0x1d9a6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9a70:
    // 0x1d9a70: 0x320f809  jalr        $t9
label_1d9a74:
    if (ctx->pc == 0x1D9A74u) {
        ctx->pc = 0x1D9A74u;
            // 0x1d9a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A78u;
        goto label_1d9a78;
    }
    ctx->pc = 0x1D9A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9A78u);
        ctx->pc = 0x1D9A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A70u;
            // 0x1d9a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9A78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A78u; }
            if (ctx->pc != 0x1D9A78u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9A78u;
label_1d9a78:
    // 0x1d9a78: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9a7c:
    // 0x1d9a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a80:
    // 0x1d9a80: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1d9a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1d9a84:
    // 0x1d9a84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9a88:
    // 0x1d9a88: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9a8c:
    // 0x1d9a8c: 0x320f809  jalr        $t9
label_1d9a90:
    if (ctx->pc == 0x1D9A90u) {
        ctx->pc = 0x1D9A90u;
            // 0x1d9a90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A94u;
        goto label_1d9a94;
    }
    ctx->pc = 0x1D9A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9A94u);
        ctx->pc = 0x1D9A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A8Cu;
            // 0x1d9a90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9A94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A94u; }
            if (ctx->pc != 0x1D9A94u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9A94u;
label_1d9a94:
    // 0x1d9a94: 0x10000119  b           . + 4 + (0x119 << 2)
label_1d9a98:
    if (ctx->pc == 0x1D9A98u) {
        ctx->pc = 0x1D9A9Cu;
        goto label_1d9a9c;
    }
    ctx->pc = 0x1D9A94u;
    {
        const bool branch_taken_0x1d9a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a94) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9A9Cu;
label_1d9a9c:
    // 0x1d9a9c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9aa0:
    // 0x1d9aa0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9aa4:
    // 0x1d9aa4: 0x320f809  jalr        $t9
label_1d9aa8:
    if (ctx->pc == 0x1D9AA8u) {
        ctx->pc = 0x1D9AA8u;
            // 0x1d9aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9AACu;
        goto label_1d9aac;
    }
    ctx->pc = 0x1D9AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9AACu);
        ctx->pc = 0x1D9AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9AA4u;
            // 0x1d9aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9AACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AACu; }
            if (ctx->pc != 0x1D9AACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9AACu;
label_1d9aac:
    // 0x1d9aac: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9ab0:
    // 0x1d9ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ab4:
    // 0x1d9ab4: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x1d9ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_1d9ab8:
    // 0x1d9ab8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9abc:
    // 0x1d9abc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9ac0:
    // 0x1d9ac0: 0x320f809  jalr        $t9
label_1d9ac4:
    if (ctx->pc == 0x1D9AC4u) {
        ctx->pc = 0x1D9AC4u;
            // 0x1d9ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9AC8u;
        goto label_1d9ac8;
    }
    ctx->pc = 0x1D9AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9AC8u);
        ctx->pc = 0x1D9AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9AC0u;
            // 0x1d9ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AC8u; }
            if (ctx->pc != 0x1D9AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9AC8u;
label_1d9ac8:
    // 0x1d9ac8: 0x1000010c  b           . + 4 + (0x10C << 2)
label_1d9acc:
    if (ctx->pc == 0x1D9ACCu) {
        ctx->pc = 0x1D9AD0u;
        goto label_1d9ad0;
    }
    ctx->pc = 0x1D9AC8u;
    {
        const bool branch_taken_0x1d9ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ac8) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9AD0u;
label_1d9ad0:
    // 0x1d9ad0: 0x8e430d6c  lw          $v1, 0xD6C($s2)
    ctx->pc = 0x1d9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_1d9ad4:
    // 0x1d9ad4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d9ad8:
    // 0x1d9ad8: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1d9ad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_1d9adc:
    // 0x1d9adc: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_1d9ae0:
    if (ctx->pc == 0x1D9AE0u) {
        ctx->pc = 0x1D9AE0u;
            // 0x1d9ae0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9AE4u;
        goto label_1d9ae4;
    }
    ctx->pc = 0x1D9ADCu;
    {
        const bool branch_taken_0x1d9adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9adc) {
            ctx->pc = 0x1D9AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9ADCu;
            // 0x1d9ae0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AF0u;
            goto label_1d9af0;
        }
    }
    ctx->pc = 0x1D9AE4u;
label_1d9ae4:
    // 0x1d9ae4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d9ae8:
    if (ctx->pc == 0x1D9AE8u) {
        ctx->pc = 0x1D9AE8u;
            // 0x1d9ae8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9AECu;
        goto label_1d9aec;
    }
    ctx->pc = 0x1D9AE4u;
    {
        const bool branch_taken_0x1d9ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9AE4u;
            // 0x1d9ae8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ae4) {
            ctx->pc = 0x1D9B24u;
            goto label_1d9b24;
        }
    }
    ctx->pc = 0x1D9AECu;
label_1d9aec:
    // 0x1d9aec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9af0:
    // 0x1d9af0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9af4:
    // 0x1d9af4: 0x320f809  jalr        $t9
label_1d9af8:
    if (ctx->pc == 0x1D9AF8u) {
        ctx->pc = 0x1D9AF8u;
            // 0x1d9af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9AFCu;
        goto label_1d9afc;
    }
    ctx->pc = 0x1D9AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9AFCu);
        ctx->pc = 0x1D9AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9AF4u;
            // 0x1d9af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9AFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AFCu; }
            if (ctx->pc != 0x1D9AFCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9AFCu;
label_1d9afc:
    // 0x1d9afc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9b00:
    // 0x1d9b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b04:
    // 0x1d9b04: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1d9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1d9b08:
    // 0x1d9b08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9b0c:
    // 0x1d9b0c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9b10:
    // 0x1d9b10: 0x320f809  jalr        $t9
label_1d9b14:
    if (ctx->pc == 0x1D9B14u) {
        ctx->pc = 0x1D9B14u;
            // 0x1d9b14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B18u;
        goto label_1d9b18;
    }
    ctx->pc = 0x1D9B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9B18u);
        ctx->pc = 0x1D9B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B10u;
            // 0x1d9b14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B18u; }
            if (ctx->pc != 0x1D9B18u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9B18u;
label_1d9b18:
    // 0x1d9b18: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_1d9b1c:
    if (ctx->pc == 0x1D9B1Cu) {
        ctx->pc = 0x1D9B20u;
        goto label_1d9b20;
    }
    ctx->pc = 0x1D9B18u;
    {
        const bool branch_taken_0x1d9b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b18) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9B20u;
label_1d9b20:
    // 0x1d9b20: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9b24:
    // 0x1d9b24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9b28:
    // 0x1d9b28: 0x320f809  jalr        $t9
label_1d9b2c:
    if (ctx->pc == 0x1D9B2Cu) {
        ctx->pc = 0x1D9B2Cu;
            // 0x1d9b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B30u;
        goto label_1d9b30;
    }
    ctx->pc = 0x1D9B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9B30u);
        ctx->pc = 0x1D9B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B28u;
            // 0x1d9b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B30u; }
            if (ctx->pc != 0x1D9B30u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9B30u;
label_1d9b30:
    // 0x1d9b30: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9b34:
    // 0x1d9b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b38:
    // 0x1d9b38: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1d9b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d9b3c:
    // 0x1d9b3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9b40:
    // 0x1d9b40: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9b44:
    // 0x1d9b44: 0x320f809  jalr        $t9
label_1d9b48:
    if (ctx->pc == 0x1D9B48u) {
        ctx->pc = 0x1D9B48u;
            // 0x1d9b48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B4Cu;
        goto label_1d9b4c;
    }
    ctx->pc = 0x1D9B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9B4Cu);
        ctx->pc = 0x1D9B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B44u;
            // 0x1d9b48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9B4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B4Cu; }
            if (ctx->pc != 0x1D9B4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9B4Cu;
label_1d9b4c:
    // 0x1d9b4c: 0x100000eb  b           . + 4 + (0xEB << 2)
label_1d9b50:
    if (ctx->pc == 0x1D9B50u) {
        ctx->pc = 0x1D9B54u;
        goto label_1d9b54;
    }
    ctx->pc = 0x1D9B4Cu;
    {
        const bool branch_taken_0x1d9b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b4c) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9B54u;
label_1d9b54:
    // 0x1d9b54: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x1d9b54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_1d9b58:
    // 0x1d9b58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d9b5c:
    // 0x1d9b5c: 0x50820017  beql        $a0, $v0, . + 4 + (0x17 << 2)
label_1d9b60:
    if (ctx->pc == 0x1D9B60u) {
        ctx->pc = 0x1D9B60u;
            // 0x1d9b60: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9B64u;
        goto label_1d9b64;
    }
    ctx->pc = 0x1D9B5Cu;
    {
        const bool branch_taken_0x1d9b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9b5c) {
            ctx->pc = 0x1D9B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B5Cu;
            // 0x1d9b60: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BBCu;
            goto label_1d9bbc;
        }
    }
    ctx->pc = 0x1D9B64u;
label_1d9b64:
    // 0x1d9b64: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d9b68:
    // 0x1d9b68: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
label_1d9b6c:
    if (ctx->pc == 0x1D9B6Cu) {
        ctx->pc = 0x1D9B6Cu;
            // 0x1d9b6c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9B70u;
        goto label_1d9b70;
    }
    ctx->pc = 0x1D9B68u;
    {
        const bool branch_taken_0x1d9b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9b68) {
            ctx->pc = 0x1D9B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B68u;
            // 0x1d9b6c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B88u;
            goto label_1d9b88;
        }
    }
    ctx->pc = 0x1D9B70u;
label_1d9b70:
    // 0x1d9b70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d9b74:
    // 0x1d9b74: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d9b78:
    if (ctx->pc == 0x1D9B78u) {
        ctx->pc = 0x1D9B7Cu;
        goto label_1d9b7c;
    }
    ctx->pc = 0x1D9B74u;
    {
        const bool branch_taken_0x1d9b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d9b74) {
            ctx->pc = 0x1D9B84u;
            goto label_1d9b84;
        }
    }
    ctx->pc = 0x1D9B7Cu;
label_1d9b7c:
    // 0x1d9b7c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d9b80:
    if (ctx->pc == 0x1D9B80u) {
        ctx->pc = 0x1D9B80u;
            // 0x1d9b80: 0x8e420d6c  lw          $v0, 0xD6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
        ctx->pc = 0x1D9B84u;
        goto label_1d9b84;
    }
    ctx->pc = 0x1D9B7Cu;
    {
        const bool branch_taken_0x1d9b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B7Cu;
            // 0x1d9b80: 0x8e420d6c  lw          $v0, 0xD6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b7c) {
            ctx->pc = 0x1D9BF0u;
            goto label_1d9bf0;
        }
    }
    ctx->pc = 0x1D9B84u;
label_1d9b84:
    // 0x1d9b84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9b88:
    // 0x1d9b88: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9b8c:
    // 0x1d9b8c: 0x320f809  jalr        $t9
label_1d9b90:
    if (ctx->pc == 0x1D9B90u) {
        ctx->pc = 0x1D9B90u;
            // 0x1d9b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B94u;
        goto label_1d9b94;
    }
    ctx->pc = 0x1D9B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9B94u);
        ctx->pc = 0x1D9B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B8Cu;
            // 0x1d9b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9B94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B94u; }
            if (ctx->pc != 0x1D9B94u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9B94u;
label_1d9b94:
    // 0x1d9b94: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9b98:
    // 0x1d9b98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b9c:
    // 0x1d9b9c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1d9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1d9ba0:
    // 0x1d9ba0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9ba4:
    // 0x1d9ba4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9ba8:
    // 0x1d9ba8: 0x320f809  jalr        $t9
label_1d9bac:
    if (ctx->pc == 0x1D9BACu) {
        ctx->pc = 0x1D9BACu;
            // 0x1d9bac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BB0u;
        goto label_1d9bb0;
    }
    ctx->pc = 0x1D9BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9BB0u);
        ctx->pc = 0x1D9BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BA8u;
            // 0x1d9bac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9BB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BB0u; }
            if (ctx->pc != 0x1D9BB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9BB0u;
label_1d9bb0:
    // 0x1d9bb0: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_1d9bb4:
    if (ctx->pc == 0x1D9BB4u) {
        ctx->pc = 0x1D9BB8u;
        goto label_1d9bb8;
    }
    ctx->pc = 0x1D9BB0u;
    {
        const bool branch_taken_0x1d9bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9bb0) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9BB8u;
label_1d9bb8:
    // 0x1d9bb8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9bbc:
    // 0x1d9bbc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9bc0:
    // 0x1d9bc0: 0x320f809  jalr        $t9
label_1d9bc4:
    if (ctx->pc == 0x1D9BC4u) {
        ctx->pc = 0x1D9BC4u;
            // 0x1d9bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BC8u;
        goto label_1d9bc8;
    }
    ctx->pc = 0x1D9BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9BC8u);
        ctx->pc = 0x1D9BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BC0u;
            // 0x1d9bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BC8u; }
            if (ctx->pc != 0x1D9BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9BC8u;
label_1d9bc8:
    // 0x1d9bc8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9bcc:
    // 0x1d9bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9bd0:
    // 0x1d9bd0: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1d9bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1d9bd4:
    // 0x1d9bd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9bd8:
    // 0x1d9bd8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9bdc:
    // 0x1d9bdc: 0x320f809  jalr        $t9
label_1d9be0:
    if (ctx->pc == 0x1D9BE0u) {
        ctx->pc = 0x1D9BE0u;
            // 0x1d9be0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BE4u;
        goto label_1d9be4;
    }
    ctx->pc = 0x1D9BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9BE4u);
        ctx->pc = 0x1D9BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BDCu;
            // 0x1d9be0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BE4u; }
            if (ctx->pc != 0x1D9BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9BE4u;
label_1d9be4:
    // 0x1d9be4: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_1d9be8:
    if (ctx->pc == 0x1D9BE8u) {
        ctx->pc = 0x1D9BECu;
        goto label_1d9bec;
    }
    ctx->pc = 0x1D9BE4u;
    {
        const bool branch_taken_0x1d9be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9be4) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9BECu;
label_1d9bec:
    // 0x1d9bec: 0x8e420d6c  lw          $v0, 0xD6C($s2)
    ctx->pc = 0x1d9becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_1d9bf0:
    // 0x1d9bf0: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x1d9bf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1d9bf4:
    // 0x1d9bf4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_1d9bf8:
    if (ctx->pc == 0x1D9BF8u) {
        ctx->pc = 0x1D9BF8u;
            // 0x1d9bf8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9BFCu;
        goto label_1d9bfc;
    }
    ctx->pc = 0x1D9BF4u;
    {
        const bool branch_taken_0x1d9bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d9bf4) {
            ctx->pc = 0x1D9BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BF4u;
            // 0x1d9bf8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C08u;
            goto label_1d9c08;
        }
    }
    ctx->pc = 0x1D9BFCu;
label_1d9bfc:
    // 0x1d9bfc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d9c00:
    if (ctx->pc == 0x1D9C00u) {
        ctx->pc = 0x1D9C00u;
            // 0x1d9c00: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9C04u;
        goto label_1d9c04;
    }
    ctx->pc = 0x1D9BFCu;
    {
        const bool branch_taken_0x1d9bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BFCu;
            // 0x1d9c00: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bfc) {
            ctx->pc = 0x1D9C3Cu;
            goto label_1d9c3c;
        }
    }
    ctx->pc = 0x1D9C04u;
label_1d9c04:
    // 0x1d9c04: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9c08:
    // 0x1d9c08: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9c0c:
    // 0x1d9c0c: 0x320f809  jalr        $t9
label_1d9c10:
    if (ctx->pc == 0x1D9C10u) {
        ctx->pc = 0x1D9C10u;
            // 0x1d9c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C14u;
        goto label_1d9c14;
    }
    ctx->pc = 0x1D9C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9C14u);
        ctx->pc = 0x1D9C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C0Cu;
            // 0x1d9c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C14u; }
            if (ctx->pc != 0x1D9C14u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9C14u;
label_1d9c14:
    // 0x1d9c14: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9c18:
    // 0x1d9c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c1c:
    // 0x1d9c1c: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x1d9c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1d9c20:
    // 0x1d9c20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9c24:
    // 0x1d9c24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9c28:
    // 0x1d9c28: 0x320f809  jalr        $t9
label_1d9c2c:
    if (ctx->pc == 0x1D9C2Cu) {
        ctx->pc = 0x1D9C2Cu;
            // 0x1d9c2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C30u;
        goto label_1d9c30;
    }
    ctx->pc = 0x1D9C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9C30u);
        ctx->pc = 0x1D9C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C28u;
            // 0x1d9c2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C30u; }
            if (ctx->pc != 0x1D9C30u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9C30u;
label_1d9c30:
    // 0x1d9c30: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_1d9c34:
    if (ctx->pc == 0x1D9C34u) {
        ctx->pc = 0x1D9C38u;
        goto label_1d9c38;
    }
    ctx->pc = 0x1D9C30u;
    {
        const bool branch_taken_0x1d9c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c30) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9C38u;
label_1d9c38:
    // 0x1d9c38: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9c3c:
    // 0x1d9c3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9c40:
    // 0x1d9c40: 0x320f809  jalr        $t9
label_1d9c44:
    if (ctx->pc == 0x1D9C44u) {
        ctx->pc = 0x1D9C44u;
            // 0x1d9c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C48u;
        goto label_1d9c48;
    }
    ctx->pc = 0x1D9C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9C48u);
        ctx->pc = 0x1D9C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C40u;
            // 0x1d9c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9C48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C48u; }
            if (ctx->pc != 0x1D9C48u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9C48u;
label_1d9c48:
    // 0x1d9c48: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9c4c:
    // 0x1d9c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c50:
    // 0x1d9c50: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x1d9c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1d9c54:
    // 0x1d9c54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9c58:
    // 0x1d9c58: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9c5c:
    // 0x1d9c5c: 0x320f809  jalr        $t9
label_1d9c60:
    if (ctx->pc == 0x1D9C60u) {
        ctx->pc = 0x1D9C60u;
            // 0x1d9c60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C64u;
        goto label_1d9c64;
    }
    ctx->pc = 0x1D9C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9C64u);
        ctx->pc = 0x1D9C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C5Cu;
            // 0x1d9c60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C64u; }
            if (ctx->pc != 0x1D9C64u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9C64u;
label_1d9c64:
    // 0x1d9c64: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_1d9c68:
    if (ctx->pc == 0x1D9C68u) {
        ctx->pc = 0x1D9C6Cu;
        goto label_1d9c6c;
    }
    ctx->pc = 0x1D9C64u;
    {
        const bool branch_taken_0x1d9c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c64) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9C6Cu;
label_1d9c6c:
    // 0x1d9c6c: 0xc07649c  jal         func_1D9270
label_1d9c70:
    if (ctx->pc == 0x1D9C70u) {
        ctx->pc = 0x1D9C70u;
            // 0x1d9c70: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x1D9C74u;
        goto label_1d9c74;
    }
    ctx->pc = 0x1D9C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D9C74u);
    ctx->pc = 0x1D9C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C6Cu;
            // 0x1d9c70: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C74u; }
        if (ctx->pc != 0x1D9C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C74u; }
        if (ctx->pc != 0x1D9C74u) { return; }
    }
    ctx->pc = 0x1D9C74u;
label_1d9c74:
    // 0x1d9c74: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1d9c78:
    if (ctx->pc == 0x1D9C78u) {
        ctx->pc = 0x1D9C7Cu;
        goto label_1d9c7c;
    }
    ctx->pc = 0x1D9C74u;
    {
        const bool branch_taken_0x1d9c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c74) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9C7Cu;
label_1d9c7c:
    // 0x1d9c7c: 0xc07649c  jal         func_1D9270
label_1d9c80:
    if (ctx->pc == 0x1D9C80u) {
        ctx->pc = 0x1D9C80u;
            // 0x1d9c80: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x1D9C84u;
        goto label_1d9c84;
    }
    ctx->pc = 0x1D9C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D9C84u);
    ctx->pc = 0x1D9C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C7Cu;
            // 0x1d9c80: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C84u; }
        if (ctx->pc != 0x1D9C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C84u; }
        if (ctx->pc != 0x1D9C84u) { return; }
    }
    ctx->pc = 0x1D9C84u;
label_1d9c84:
    // 0x1d9c84: 0x1000009d  b           . + 4 + (0x9D << 2)
label_1d9c88:
    if (ctx->pc == 0x1D9C88u) {
        ctx->pc = 0x1D9C8Cu;
        goto label_1d9c8c;
    }
    ctx->pc = 0x1D9C84u;
    {
        const bool branch_taken_0x1d9c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c84) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9C8Cu;
label_1d9c8c:
    // 0x1d9c8c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1d9c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1d9c90:
    // 0x1d9c90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d9c94:
    // 0x1d9c94: 0x10830099  beq         $a0, $v1, . + 4 + (0x99 << 2)
label_1d9c98:
    if (ctx->pc == 0x1D9C98u) {
        ctx->pc = 0x1D9C9Cu;
        goto label_1d9c9c;
    }
    ctx->pc = 0x1D9C94u;
    {
        const bool branch_taken_0x1d9c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d9c94) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9C9Cu;
label_1d9c9c:
    // 0x1d9c9c: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x1d9c9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_1d9ca0:
    // 0x1d9ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9ca4:
    // 0x1d9ca4: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
label_1d9ca8:
    if (ctx->pc == 0x1D9CA8u) {
        ctx->pc = 0x1D9CA8u;
            // 0x1d9ca8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9CACu;
        goto label_1d9cac;
    }
    ctx->pc = 0x1D9CA4u;
    {
        const bool branch_taken_0x1d9ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d9ca4) {
            ctx->pc = 0x1D9CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CA4u;
            // 0x1d9ca8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9CF4u;
            goto label_1d9cf4;
        }
    }
    ctx->pc = 0x1D9CACu;
label_1d9cac:
    // 0x1d9cac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1d9cb0:
    if (ctx->pc == 0x1D9CB0u) {
        ctx->pc = 0x1D9CB0u;
            // 0x1d9cb0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9CB4u;
        goto label_1d9cb4;
    }
    ctx->pc = 0x1D9CACu;
    {
        const bool branch_taken_0x1d9cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9cac) {
            ctx->pc = 0x1D9CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CACu;
            // 0x1d9cb0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9CB4u;
label_1d9cb4:
    // 0x1d9cb4: 0x10000091  b           . + 4 + (0x91 << 2)
label_1d9cb8:
    if (ctx->pc == 0x1D9CB8u) {
        ctx->pc = 0x1D9CBCu;
        goto label_1d9cbc;
    }
    ctx->pc = 0x1D9CB4u;
    {
        const bool branch_taken_0x1d9cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9cb4) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9CBCu;
label_1d9cbc:
    // 0x1d9cbc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9cc0:
    // 0x1d9cc0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9cc4:
    // 0x1d9cc4: 0x320f809  jalr        $t9
label_1d9cc8:
    if (ctx->pc == 0x1D9CC8u) {
        ctx->pc = 0x1D9CC8u;
            // 0x1d9cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9CCCu;
        goto label_1d9ccc;
    }
    ctx->pc = 0x1D9CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9CCCu);
        ctx->pc = 0x1D9CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CC4u;
            // 0x1d9cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9CCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CCCu; }
            if (ctx->pc != 0x1D9CCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9CCCu;
label_1d9ccc:
    // 0x1d9ccc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9cd0:
    // 0x1d9cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9cd4:
    // 0x1d9cd4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1d9cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1d9cd8:
    // 0x1d9cd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9cdc:
    // 0x1d9cdc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9ce0:
    // 0x1d9ce0: 0x320f809  jalr        $t9
label_1d9ce4:
    if (ctx->pc == 0x1D9CE4u) {
        ctx->pc = 0x1D9CE4u;
            // 0x1d9ce4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9CE8u;
        goto label_1d9ce8;
    }
    ctx->pc = 0x1D9CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9CE8u);
        ctx->pc = 0x1D9CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CE0u;
            // 0x1d9ce4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9CE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CE8u; }
            if (ctx->pc != 0x1D9CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9CE8u;
label_1d9ce8:
    // 0x1d9ce8: 0x10000084  b           . + 4 + (0x84 << 2)
label_1d9cec:
    if (ctx->pc == 0x1D9CECu) {
        ctx->pc = 0x1D9CF0u;
        goto label_1d9cf0;
    }
    ctx->pc = 0x1D9CE8u;
    {
        const bool branch_taken_0x1d9ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ce8) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9CF0u;
label_1d9cf0:
    // 0x1d9cf0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9cf4:
    // 0x1d9cf4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9cf8:
    // 0x1d9cf8: 0x320f809  jalr        $t9
label_1d9cfc:
    if (ctx->pc == 0x1D9CFCu) {
        ctx->pc = 0x1D9CFCu;
            // 0x1d9cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D00u;
        goto label_1d9d00;
    }
    ctx->pc = 0x1D9CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9D00u);
        ctx->pc = 0x1D9CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CF8u;
            // 0x1d9cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9D00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D00u; }
            if (ctx->pc != 0x1D9D00u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9D00u;
label_1d9d00:
    // 0x1d9d00: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9d04:
    // 0x1d9d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d08:
    // 0x1d9d08: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1d9d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d9d0c:
    // 0x1d9d0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9d10:
    // 0x1d9d10: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9d14:
    // 0x1d9d14: 0x320f809  jalr        $t9
label_1d9d18:
    if (ctx->pc == 0x1D9D18u) {
        ctx->pc = 0x1D9D18u;
            // 0x1d9d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D1Cu;
        goto label_1d9d1c;
    }
    ctx->pc = 0x1D9D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9D1Cu);
        ctx->pc = 0x1D9D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D14u;
            // 0x1d9d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9D1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D1Cu; }
            if (ctx->pc != 0x1D9D1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9D1Cu;
label_1d9d1c:
    // 0x1d9d1c: 0x10000077  b           . + 4 + (0x77 << 2)
label_1d9d20:
    if (ctx->pc == 0x1D9D20u) {
        ctx->pc = 0x1D9D24u;
        goto label_1d9d24;
    }
    ctx->pc = 0x1D9D1Cu;
    {
        const bool branch_taken_0x1d9d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d1c) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9D24u;
label_1d9d24:
    // 0x1d9d24: 0xc07649c  jal         func_1D9270
label_1d9d28:
    if (ctx->pc == 0x1D9D28u) {
        ctx->pc = 0x1D9D28u;
            // 0x1d9d28: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x1D9D2Cu;
        goto label_1d9d2c;
    }
    ctx->pc = 0x1D9D24u;
    SET_GPR_U32(ctx, 31, 0x1D9D2Cu);
    ctx->pc = 0x1D9D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D24u;
            // 0x1d9d28: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D2Cu; }
        if (ctx->pc != 0x1D9D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D2Cu; }
        if (ctx->pc != 0x1D9D2Cu) { return; }
    }
    ctx->pc = 0x1D9D2Cu;
label_1d9d2c:
    // 0x1d9d2c: 0x10000073  b           . + 4 + (0x73 << 2)
label_1d9d30:
    if (ctx->pc == 0x1D9D30u) {
        ctx->pc = 0x1D9D34u;
        goto label_1d9d34;
    }
    ctx->pc = 0x1D9D2Cu;
    {
        const bool branch_taken_0x1d9d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d2c) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9D34u;
label_1d9d34:
    // 0x1d9d34: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1d9d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1d9d38:
    // 0x1d9d38: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d9d3c:
    // 0x1d9d3c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1d9d40:
    if (ctx->pc == 0x1D9D40u) {
        ctx->pc = 0x1D9D40u;
            // 0x1d9d40: 0x92030007  lbu         $v1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->pc = 0x1D9D44u;
        goto label_1d9d44;
    }
    ctx->pc = 0x1D9D3Cu;
    {
        const bool branch_taken_0x1d9d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9d3c) {
            ctx->pc = 0x1D9D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D3Cu;
            // 0x1d9d40: 0x92030007  lbu         $v1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9D5Cu;
            goto label_1d9d5c;
        }
    }
    ctx->pc = 0x1D9D44u;
label_1d9d44:
    // 0x1d9d44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d9d48:
    // 0x1d9d48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d9d4c:
    if (ctx->pc == 0x1D9D4Cu) {
        ctx->pc = 0x1D9D50u;
        goto label_1d9d50;
    }
    ctx->pc = 0x1D9D48u;
    {
        const bool branch_taken_0x1d9d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9d48) {
            ctx->pc = 0x1D9D58u;
            goto label_1d9d58;
        }
    }
    ctx->pc = 0x1D9D50u;
label_1d9d50:
    // 0x1d9d50: 0x10000026  b           . + 4 + (0x26 << 2)
label_1d9d54:
    if (ctx->pc == 0x1D9D54u) {
        ctx->pc = 0x1D9D54u;
            // 0x1d9d54: 0x92030007  lbu         $v1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->pc = 0x1D9D58u;
        goto label_1d9d58;
    }
    ctx->pc = 0x1D9D50u;
    {
        const bool branch_taken_0x1d9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D50u;
            // 0x1d9d54: 0x92030007  lbu         $v1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d50) {
            ctx->pc = 0x1D9DECu;
            goto label_1d9dec;
        }
    }
    ctx->pc = 0x1D9D58u;
label_1d9d58:
    // 0x1d9d58: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x1d9d58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_1d9d5c:
    // 0x1d9d5c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d9d60:
    // 0x1d9d60: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_1d9d64:
    if (ctx->pc == 0x1D9D64u) {
        ctx->pc = 0x1D9D64u;
            // 0x1d9d64: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9D68u;
        goto label_1d9d68;
    }
    ctx->pc = 0x1D9D60u;
    {
        const bool branch_taken_0x1d9d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9d60) {
            ctx->pc = 0x1D9D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D60u;
            // 0x1d9d64: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9DC0u;
            goto label_1d9dc0;
        }
    }
    ctx->pc = 0x1D9D68u;
label_1d9d68:
    // 0x1d9d68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9d6c:
    // 0x1d9d6c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1d9d70:
    if (ctx->pc == 0x1D9D70u) {
        ctx->pc = 0x1D9D70u;
            // 0x1d9d70: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9D74u;
        goto label_1d9d74;
    }
    ctx->pc = 0x1D9D6Cu;
    {
        const bool branch_taken_0x1d9d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9d6c) {
            ctx->pc = 0x1D9D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D6Cu;
            // 0x1d9d70: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9D8Cu;
            goto label_1d9d8c;
        }
    }
    ctx->pc = 0x1D9D74u;
label_1d9d74:
    // 0x1d9d74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9d78:
    // 0x1d9d78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d9d7c:
    if (ctx->pc == 0x1D9D7Cu) {
        ctx->pc = 0x1D9D80u;
        goto label_1d9d80;
    }
    ctx->pc = 0x1D9D78u;
    {
        const bool branch_taken_0x1d9d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9d78) {
            ctx->pc = 0x1D9D88u;
            goto label_1d9d88;
        }
    }
    ctx->pc = 0x1D9D80u;
label_1d9d80:
    // 0x1d9d80: 0x10000019  b           . + 4 + (0x19 << 2)
label_1d9d84:
    if (ctx->pc == 0x1D9D84u) {
        ctx->pc = 0x1D9D88u;
        goto label_1d9d88;
    }
    ctx->pc = 0x1D9D80u;
    {
        const bool branch_taken_0x1d9d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d80) {
            ctx->pc = 0x1D9DE8u;
            goto label_1d9de8;
        }
    }
    ctx->pc = 0x1D9D88u;
label_1d9d88:
    // 0x1d9d88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9d8c:
    // 0x1d9d8c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9d90:
    // 0x1d9d90: 0x320f809  jalr        $t9
label_1d9d94:
    if (ctx->pc == 0x1D9D94u) {
        ctx->pc = 0x1D9D94u;
            // 0x1d9d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D98u;
        goto label_1d9d98;
    }
    ctx->pc = 0x1D9D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9D98u);
        ctx->pc = 0x1D9D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D90u;
            // 0x1d9d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9D98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D98u; }
            if (ctx->pc != 0x1D9D98u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9D98u;
label_1d9d98:
    // 0x1d9d98: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9d9c:
    // 0x1d9d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9da0:
    // 0x1d9da0: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1d9da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d9da4:
    // 0x1d9da4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9da8:
    // 0x1d9da8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9dac:
    // 0x1d9dac: 0x320f809  jalr        $t9
label_1d9db0:
    if (ctx->pc == 0x1D9DB0u) {
        ctx->pc = 0x1D9DB0u;
            // 0x1d9db0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DB4u;
        goto label_1d9db4;
    }
    ctx->pc = 0x1D9DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9DB4u);
        ctx->pc = 0x1D9DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DACu;
            // 0x1d9db0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9DB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DB4u; }
            if (ctx->pc != 0x1D9DB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9DB4u;
label_1d9db4:
    // 0x1d9db4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d9db8:
    if (ctx->pc == 0x1D9DB8u) {
        ctx->pc = 0x1D9DBCu;
        goto label_1d9dbc;
    }
    ctx->pc = 0x1D9DB4u;
    {
        const bool branch_taken_0x1d9db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9db4) {
            ctx->pc = 0x1D9DE8u;
            goto label_1d9de8;
        }
    }
    ctx->pc = 0x1D9DBCu;
label_1d9dbc:
    // 0x1d9dbc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9dc0:
    // 0x1d9dc0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9dc4:
    // 0x1d9dc4: 0x320f809  jalr        $t9
label_1d9dc8:
    if (ctx->pc == 0x1D9DC8u) {
        ctx->pc = 0x1D9DC8u;
            // 0x1d9dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DCCu;
        goto label_1d9dcc;
    }
    ctx->pc = 0x1D9DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9DCCu);
        ctx->pc = 0x1D9DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DC4u;
            // 0x1d9dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9DCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DCCu; }
            if (ctx->pc != 0x1D9DCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9DCCu;
label_1d9dcc:
    // 0x1d9dcc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9dd0:
    // 0x1d9dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9dd4:
    // 0x1d9dd4: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x1d9dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1d9dd8:
    // 0x1d9dd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9ddc:
    // 0x1d9ddc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9de0:
    // 0x1d9de0: 0x320f809  jalr        $t9
label_1d9de4:
    if (ctx->pc == 0x1D9DE4u) {
        ctx->pc = 0x1D9DE4u;
            // 0x1d9de4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DE8u;
        goto label_1d9de8;
    }
    ctx->pc = 0x1D9DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9DE8u);
        ctx->pc = 0x1D9DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DE0u;
            // 0x1d9de4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9DE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DE8u; }
            if (ctx->pc != 0x1D9DE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9DE8u;
label_1d9de8:
    // 0x1d9de8: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x1d9de8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_1d9dec:
    // 0x1d9dec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d9df0:
    // 0x1d9df0: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_1d9df4:
    if (ctx->pc == 0x1D9DF4u) {
        ctx->pc = 0x1D9DF4u;
            // 0x1d9df4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9DF8u;
        goto label_1d9df8;
    }
    ctx->pc = 0x1D9DF0u;
    {
        const bool branch_taken_0x1d9df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9df0) {
            ctx->pc = 0x1D9DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DF0u;
            // 0x1d9df4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9E50u;
            goto label_1d9e50;
        }
    }
    ctx->pc = 0x1D9DF8u;
label_1d9df8:
    // 0x1d9df8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9dfc:
    // 0x1d9dfc: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1d9e00:
    if (ctx->pc == 0x1D9E00u) {
        ctx->pc = 0x1D9E00u;
            // 0x1d9e00: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9E04u;
        goto label_1d9e04;
    }
    ctx->pc = 0x1D9DFCu;
    {
        const bool branch_taken_0x1d9dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9dfc) {
            ctx->pc = 0x1D9E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DFCu;
            // 0x1d9e00: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9E1Cu;
            goto label_1d9e1c;
        }
    }
    ctx->pc = 0x1D9E04u;
label_1d9e04:
    // 0x1d9e04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9e08:
    // 0x1d9e08: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d9e0c:
    if (ctx->pc == 0x1D9E0Cu) {
        ctx->pc = 0x1D9E10u;
        goto label_1d9e10;
    }
    ctx->pc = 0x1D9E08u;
    {
        const bool branch_taken_0x1d9e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9e08) {
            ctx->pc = 0x1D9E18u;
            goto label_1d9e18;
        }
    }
    ctx->pc = 0x1D9E10u;
label_1d9e10:
    // 0x1d9e10: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d9e14:
    if (ctx->pc == 0x1D9E14u) {
        ctx->pc = 0x1D9E14u;
            // 0x1d9e14: 0x8e430d6c  lw          $v1, 0xD6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
        ctx->pc = 0x1D9E18u;
        goto label_1d9e18;
    }
    ctx->pc = 0x1D9E10u;
    {
        const bool branch_taken_0x1d9e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E10u;
            // 0x1d9e14: 0x8e430d6c  lw          $v1, 0xD6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e10) {
            ctx->pc = 0x1D9E84u;
            goto label_1d9e84;
        }
    }
    ctx->pc = 0x1D9E18u;
label_1d9e18:
    // 0x1d9e18: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9e1c:
    // 0x1d9e1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9e20:
    // 0x1d9e20: 0x320f809  jalr        $t9
label_1d9e24:
    if (ctx->pc == 0x1D9E24u) {
        ctx->pc = 0x1D9E24u;
            // 0x1d9e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E28u;
        goto label_1d9e28;
    }
    ctx->pc = 0x1D9E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9E28u);
        ctx->pc = 0x1D9E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E20u;
            // 0x1d9e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9E28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E28u; }
            if (ctx->pc != 0x1D9E28u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9E28u;
label_1d9e28:
    // 0x1d9e28: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9e2c:
    // 0x1d9e2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e30:
    // 0x1d9e30: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1d9e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1d9e34:
    // 0x1d9e34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9e38:
    // 0x1d9e38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9e3c:
    // 0x1d9e3c: 0x320f809  jalr        $t9
label_1d9e40:
    if (ctx->pc == 0x1D9E40u) {
        ctx->pc = 0x1D9E40u;
            // 0x1d9e40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E44u;
        goto label_1d9e44;
    }
    ctx->pc = 0x1D9E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9E44u);
        ctx->pc = 0x1D9E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E3Cu;
            // 0x1d9e40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9E44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E44u; }
            if (ctx->pc != 0x1D9E44u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9E44u;
label_1d9e44:
    // 0x1d9e44: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1d9e48:
    if (ctx->pc == 0x1D9E48u) {
        ctx->pc = 0x1D9E4Cu;
        goto label_1d9e4c;
    }
    ctx->pc = 0x1D9E44u;
    {
        const bool branch_taken_0x1d9e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e44) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9E4Cu;
label_1d9e4c:
    // 0x1d9e4c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9e50:
    // 0x1d9e50: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9e54:
    // 0x1d9e54: 0x320f809  jalr        $t9
label_1d9e58:
    if (ctx->pc == 0x1D9E58u) {
        ctx->pc = 0x1D9E58u;
            // 0x1d9e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E5Cu;
        goto label_1d9e5c;
    }
    ctx->pc = 0x1D9E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9E5Cu);
        ctx->pc = 0x1D9E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E54u;
            // 0x1d9e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E5Cu; }
            if (ctx->pc != 0x1D9E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9E5Cu;
label_1d9e5c:
    // 0x1d9e5c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9e60:
    // 0x1d9e60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e64:
    // 0x1d9e64: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x1d9e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_1d9e68:
    // 0x1d9e68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9e6c:
    // 0x1d9e6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9e70:
    // 0x1d9e70: 0x320f809  jalr        $t9
label_1d9e74:
    if (ctx->pc == 0x1D9E74u) {
        ctx->pc = 0x1D9E74u;
            // 0x1d9e74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E78u;
        goto label_1d9e78;
    }
    ctx->pc = 0x1D9E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9E78u);
        ctx->pc = 0x1D9E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E70u;
            // 0x1d9e74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9E78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E78u; }
            if (ctx->pc != 0x1D9E78u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9E78u;
label_1d9e78:
    // 0x1d9e78: 0x10000020  b           . + 4 + (0x20 << 2)
label_1d9e7c:
    if (ctx->pc == 0x1D9E7Cu) {
        ctx->pc = 0x1D9E80u;
        goto label_1d9e80;
    }
    ctx->pc = 0x1D9E78u;
    {
        const bool branch_taken_0x1d9e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e78) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9E80u;
label_1d9e80:
    // 0x1d9e80: 0x8e430d6c  lw          $v1, 0xD6C($s2)
    ctx->pc = 0x1d9e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_1d9e84:
    // 0x1d9e84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d9e88:
    // 0x1d9e88: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1d9e88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_1d9e8c:
    // 0x1d9e8c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_1d9e90:
    if (ctx->pc == 0x1D9E90u) {
        ctx->pc = 0x1D9E90u;
            // 0x1d9e90: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9E94u;
        goto label_1d9e94;
    }
    ctx->pc = 0x1D9E8Cu;
    {
        const bool branch_taken_0x1d9e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9e8c) {
            ctx->pc = 0x1D9E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E8Cu;
            // 0x1d9e90: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9EA0u;
            goto label_1d9ea0;
        }
    }
    ctx->pc = 0x1D9E94u;
label_1d9e94:
    // 0x1d9e94: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d9e98:
    if (ctx->pc == 0x1D9E98u) {
        ctx->pc = 0x1D9E98u;
            // 0x1d9e98: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9E9Cu;
        goto label_1d9e9c;
    }
    ctx->pc = 0x1D9E94u;
    {
        const bool branch_taken_0x1d9e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E94u;
            // 0x1d9e98: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e94) {
            ctx->pc = 0x1D9ED4u;
            goto label_1d9ed4;
        }
    }
    ctx->pc = 0x1D9E9Cu;
label_1d9e9c:
    // 0x1d9e9c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9ea0:
    // 0x1d9ea0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9ea4:
    // 0x1d9ea4: 0x320f809  jalr        $t9
label_1d9ea8:
    if (ctx->pc == 0x1D9EA8u) {
        ctx->pc = 0x1D9EA8u;
            // 0x1d9ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EACu;
        goto label_1d9eac;
    }
    ctx->pc = 0x1D9EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9EACu);
        ctx->pc = 0x1D9EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9EA4u;
            // 0x1d9ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EACu; }
            if (ctx->pc != 0x1D9EACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9EACu;
label_1d9eac:
    // 0x1d9eac: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9eb0:
    // 0x1d9eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9eb4:
    // 0x1d9eb4: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1d9eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1d9eb8:
    // 0x1d9eb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9ebc:
    // 0x1d9ebc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9ec0:
    // 0x1d9ec0: 0x320f809  jalr        $t9
label_1d9ec4:
    if (ctx->pc == 0x1D9EC4u) {
        ctx->pc = 0x1D9EC4u;
            // 0x1d9ec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EC8u;
        goto label_1d9ec8;
    }
    ctx->pc = 0x1D9EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9EC8u);
        ctx->pc = 0x1D9EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9EC0u;
            // 0x1d9ec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9EC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EC8u; }
            if (ctx->pc != 0x1D9EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9EC8u;
label_1d9ec8:
    // 0x1d9ec8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d9ecc:
    if (ctx->pc == 0x1D9ECCu) {
        ctx->pc = 0x1D9ED0u;
        goto label_1d9ed0;
    }
    ctx->pc = 0x1D9EC8u;
    {
        const bool branch_taken_0x1d9ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ec8) {
            ctx->pc = 0x1D9EFCu;
            goto label_1d9efc;
        }
    }
    ctx->pc = 0x1D9ED0u;
label_1d9ed0:
    // 0x1d9ed0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9ed4:
    // 0x1d9ed4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9ed8:
    // 0x1d9ed8: 0x320f809  jalr        $t9
label_1d9edc:
    if (ctx->pc == 0x1D9EDCu) {
        ctx->pc = 0x1D9EDCu;
            // 0x1d9edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EE0u;
        goto label_1d9ee0;
    }
    ctx->pc = 0x1D9ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9EE0u);
        ctx->pc = 0x1D9EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9ED8u;
            // 0x1d9edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9EE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EE0u; }
            if (ctx->pc != 0x1D9EE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9EE0u;
label_1d9ee0:
    // 0x1d9ee0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9ee4:
    // 0x1d9ee4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ee8:
    // 0x1d9ee8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1d9ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d9eec:
    // 0x1d9eec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9ef0:
    // 0x1d9ef0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9ef4:
    // 0x1d9ef4: 0x320f809  jalr        $t9
label_1d9ef8:
    if (ctx->pc == 0x1D9EF8u) {
        ctx->pc = 0x1D9EF8u;
            // 0x1d9ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EFCu;
        goto label_1d9efc;
    }
    ctx->pc = 0x1D9EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9EFCu);
        ctx->pc = 0x1D9EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9EF4u;
            // 0x1d9ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9EFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EFCu; }
            if (ctx->pc != 0x1D9EFCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D9EFCu;
label_1d9efc:
    // 0x1d9efc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d9efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9f00:
    // 0x1d9f00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d9f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9f04:
    // 0x1d9f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9f08:
    // 0x1d9f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9f0c:
    // 0x1d9f0c: 0x3e00008  jr          $ra
label_1d9f10:
    if (ctx->pc == 0x1D9F10u) {
        ctx->pc = 0x1D9F10u;
            // 0x1d9f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D9F14u;
        goto label_1d9f14;
    }
    ctx->pc = 0x1D9F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F0Cu;
            // 0x1d9f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9F14u;
label_1d9f14:
    // 0x1d9f14: 0x0  nop
    ctx->pc = 0x1d9f14u;
    // NOP
label_1d9f18:
    // 0x1d9f18: 0x0  nop
    ctx->pc = 0x1d9f18u;
    // NOP
label_1d9f1c:
    // 0x1d9f1c: 0x0  nop
    ctx->pc = 0x1d9f1cu;
    // NOP
}
