#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00237990
// Address: 0x237990 - 0x238810
void sub_00237990_0x237990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237990_0x237990");
#endif

    switch (ctx->pc) {
        case 0x237990u: goto label_237990;
        case 0x237994u: goto label_237994;
        case 0x237998u: goto label_237998;
        case 0x23799cu: goto label_23799c;
        case 0x2379a0u: goto label_2379a0;
        case 0x2379a4u: goto label_2379a4;
        case 0x2379a8u: goto label_2379a8;
        case 0x2379acu: goto label_2379ac;
        case 0x2379b0u: goto label_2379b0;
        case 0x2379b4u: goto label_2379b4;
        case 0x2379b8u: goto label_2379b8;
        case 0x2379bcu: goto label_2379bc;
        case 0x2379c0u: goto label_2379c0;
        case 0x2379c4u: goto label_2379c4;
        case 0x2379c8u: goto label_2379c8;
        case 0x2379ccu: goto label_2379cc;
        case 0x2379d0u: goto label_2379d0;
        case 0x2379d4u: goto label_2379d4;
        case 0x2379d8u: goto label_2379d8;
        case 0x2379dcu: goto label_2379dc;
        case 0x2379e0u: goto label_2379e0;
        case 0x2379e4u: goto label_2379e4;
        case 0x2379e8u: goto label_2379e8;
        case 0x2379ecu: goto label_2379ec;
        case 0x2379f0u: goto label_2379f0;
        case 0x2379f4u: goto label_2379f4;
        case 0x2379f8u: goto label_2379f8;
        case 0x2379fcu: goto label_2379fc;
        case 0x237a00u: goto label_237a00;
        case 0x237a04u: goto label_237a04;
        case 0x237a08u: goto label_237a08;
        case 0x237a0cu: goto label_237a0c;
        case 0x237a10u: goto label_237a10;
        case 0x237a14u: goto label_237a14;
        case 0x237a18u: goto label_237a18;
        case 0x237a1cu: goto label_237a1c;
        case 0x237a20u: goto label_237a20;
        case 0x237a24u: goto label_237a24;
        case 0x237a28u: goto label_237a28;
        case 0x237a2cu: goto label_237a2c;
        case 0x237a30u: goto label_237a30;
        case 0x237a34u: goto label_237a34;
        case 0x237a38u: goto label_237a38;
        case 0x237a3cu: goto label_237a3c;
        case 0x237a40u: goto label_237a40;
        case 0x237a44u: goto label_237a44;
        case 0x237a48u: goto label_237a48;
        case 0x237a4cu: goto label_237a4c;
        case 0x237a50u: goto label_237a50;
        case 0x237a54u: goto label_237a54;
        case 0x237a58u: goto label_237a58;
        case 0x237a5cu: goto label_237a5c;
        case 0x237a60u: goto label_237a60;
        case 0x237a64u: goto label_237a64;
        case 0x237a68u: goto label_237a68;
        case 0x237a6cu: goto label_237a6c;
        case 0x237a70u: goto label_237a70;
        case 0x237a74u: goto label_237a74;
        case 0x237a78u: goto label_237a78;
        case 0x237a7cu: goto label_237a7c;
        case 0x237a80u: goto label_237a80;
        case 0x237a84u: goto label_237a84;
        case 0x237a88u: goto label_237a88;
        case 0x237a8cu: goto label_237a8c;
        case 0x237a90u: goto label_237a90;
        case 0x237a94u: goto label_237a94;
        case 0x237a98u: goto label_237a98;
        case 0x237a9cu: goto label_237a9c;
        case 0x237aa0u: goto label_237aa0;
        case 0x237aa4u: goto label_237aa4;
        case 0x237aa8u: goto label_237aa8;
        case 0x237aacu: goto label_237aac;
        case 0x237ab0u: goto label_237ab0;
        case 0x237ab4u: goto label_237ab4;
        case 0x237ab8u: goto label_237ab8;
        case 0x237abcu: goto label_237abc;
        case 0x237ac0u: goto label_237ac0;
        case 0x237ac4u: goto label_237ac4;
        case 0x237ac8u: goto label_237ac8;
        case 0x237accu: goto label_237acc;
        case 0x237ad0u: goto label_237ad0;
        case 0x237ad4u: goto label_237ad4;
        case 0x237ad8u: goto label_237ad8;
        case 0x237adcu: goto label_237adc;
        case 0x237ae0u: goto label_237ae0;
        case 0x237ae4u: goto label_237ae4;
        case 0x237ae8u: goto label_237ae8;
        case 0x237aecu: goto label_237aec;
        case 0x237af0u: goto label_237af0;
        case 0x237af4u: goto label_237af4;
        case 0x237af8u: goto label_237af8;
        case 0x237afcu: goto label_237afc;
        case 0x237b00u: goto label_237b00;
        case 0x237b04u: goto label_237b04;
        case 0x237b08u: goto label_237b08;
        case 0x237b0cu: goto label_237b0c;
        case 0x237b10u: goto label_237b10;
        case 0x237b14u: goto label_237b14;
        case 0x237b18u: goto label_237b18;
        case 0x237b1cu: goto label_237b1c;
        case 0x237b20u: goto label_237b20;
        case 0x237b24u: goto label_237b24;
        case 0x237b28u: goto label_237b28;
        case 0x237b2cu: goto label_237b2c;
        case 0x237b30u: goto label_237b30;
        case 0x237b34u: goto label_237b34;
        case 0x237b38u: goto label_237b38;
        case 0x237b3cu: goto label_237b3c;
        case 0x237b40u: goto label_237b40;
        case 0x237b44u: goto label_237b44;
        case 0x237b48u: goto label_237b48;
        case 0x237b4cu: goto label_237b4c;
        case 0x237b50u: goto label_237b50;
        case 0x237b54u: goto label_237b54;
        case 0x237b58u: goto label_237b58;
        case 0x237b5cu: goto label_237b5c;
        case 0x237b60u: goto label_237b60;
        case 0x237b64u: goto label_237b64;
        case 0x237b68u: goto label_237b68;
        case 0x237b6cu: goto label_237b6c;
        case 0x237b70u: goto label_237b70;
        case 0x237b74u: goto label_237b74;
        case 0x237b78u: goto label_237b78;
        case 0x237b7cu: goto label_237b7c;
        case 0x237b80u: goto label_237b80;
        case 0x237b84u: goto label_237b84;
        case 0x237b88u: goto label_237b88;
        case 0x237b8cu: goto label_237b8c;
        case 0x237b90u: goto label_237b90;
        case 0x237b94u: goto label_237b94;
        case 0x237b98u: goto label_237b98;
        case 0x237b9cu: goto label_237b9c;
        case 0x237ba0u: goto label_237ba0;
        case 0x237ba4u: goto label_237ba4;
        case 0x237ba8u: goto label_237ba8;
        case 0x237bacu: goto label_237bac;
        case 0x237bb0u: goto label_237bb0;
        case 0x237bb4u: goto label_237bb4;
        case 0x237bb8u: goto label_237bb8;
        case 0x237bbcu: goto label_237bbc;
        case 0x237bc0u: goto label_237bc0;
        case 0x237bc4u: goto label_237bc4;
        case 0x237bc8u: goto label_237bc8;
        case 0x237bccu: goto label_237bcc;
        case 0x237bd0u: goto label_237bd0;
        case 0x237bd4u: goto label_237bd4;
        case 0x237bd8u: goto label_237bd8;
        case 0x237bdcu: goto label_237bdc;
        case 0x237be0u: goto label_237be0;
        case 0x237be4u: goto label_237be4;
        case 0x237be8u: goto label_237be8;
        case 0x237becu: goto label_237bec;
        case 0x237bf0u: goto label_237bf0;
        case 0x237bf4u: goto label_237bf4;
        case 0x237bf8u: goto label_237bf8;
        case 0x237bfcu: goto label_237bfc;
        case 0x237c00u: goto label_237c00;
        case 0x237c04u: goto label_237c04;
        case 0x237c08u: goto label_237c08;
        case 0x237c0cu: goto label_237c0c;
        case 0x237c10u: goto label_237c10;
        case 0x237c14u: goto label_237c14;
        case 0x237c18u: goto label_237c18;
        case 0x237c1cu: goto label_237c1c;
        case 0x237c20u: goto label_237c20;
        case 0x237c24u: goto label_237c24;
        case 0x237c28u: goto label_237c28;
        case 0x237c2cu: goto label_237c2c;
        case 0x237c30u: goto label_237c30;
        case 0x237c34u: goto label_237c34;
        case 0x237c38u: goto label_237c38;
        case 0x237c3cu: goto label_237c3c;
        case 0x237c40u: goto label_237c40;
        case 0x237c44u: goto label_237c44;
        case 0x237c48u: goto label_237c48;
        case 0x237c4cu: goto label_237c4c;
        case 0x237c50u: goto label_237c50;
        case 0x237c54u: goto label_237c54;
        case 0x237c58u: goto label_237c58;
        case 0x237c5cu: goto label_237c5c;
        case 0x237c60u: goto label_237c60;
        case 0x237c64u: goto label_237c64;
        case 0x237c68u: goto label_237c68;
        case 0x237c6cu: goto label_237c6c;
        case 0x237c70u: goto label_237c70;
        case 0x237c74u: goto label_237c74;
        case 0x237c78u: goto label_237c78;
        case 0x237c7cu: goto label_237c7c;
        case 0x237c80u: goto label_237c80;
        case 0x237c84u: goto label_237c84;
        case 0x237c88u: goto label_237c88;
        case 0x237c8cu: goto label_237c8c;
        case 0x237c90u: goto label_237c90;
        case 0x237c94u: goto label_237c94;
        case 0x237c98u: goto label_237c98;
        case 0x237c9cu: goto label_237c9c;
        case 0x237ca0u: goto label_237ca0;
        case 0x237ca4u: goto label_237ca4;
        case 0x237ca8u: goto label_237ca8;
        case 0x237cacu: goto label_237cac;
        case 0x237cb0u: goto label_237cb0;
        case 0x237cb4u: goto label_237cb4;
        case 0x237cb8u: goto label_237cb8;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cc0u: goto label_237cc0;
        case 0x237cc4u: goto label_237cc4;
        case 0x237cc8u: goto label_237cc8;
        case 0x237cccu: goto label_237ccc;
        case 0x237cd0u: goto label_237cd0;
        case 0x237cd4u: goto label_237cd4;
        case 0x237cd8u: goto label_237cd8;
        case 0x237cdcu: goto label_237cdc;
        case 0x237ce0u: goto label_237ce0;
        case 0x237ce4u: goto label_237ce4;
        case 0x237ce8u: goto label_237ce8;
        case 0x237cecu: goto label_237cec;
        case 0x237cf0u: goto label_237cf0;
        case 0x237cf4u: goto label_237cf4;
        case 0x237cf8u: goto label_237cf8;
        case 0x237cfcu: goto label_237cfc;
        case 0x237d00u: goto label_237d00;
        case 0x237d04u: goto label_237d04;
        case 0x237d08u: goto label_237d08;
        case 0x237d0cu: goto label_237d0c;
        case 0x237d10u: goto label_237d10;
        case 0x237d14u: goto label_237d14;
        case 0x237d18u: goto label_237d18;
        case 0x237d1cu: goto label_237d1c;
        case 0x237d20u: goto label_237d20;
        case 0x237d24u: goto label_237d24;
        case 0x237d28u: goto label_237d28;
        case 0x237d2cu: goto label_237d2c;
        case 0x237d30u: goto label_237d30;
        case 0x237d34u: goto label_237d34;
        case 0x237d38u: goto label_237d38;
        case 0x237d3cu: goto label_237d3c;
        case 0x237d40u: goto label_237d40;
        case 0x237d44u: goto label_237d44;
        case 0x237d48u: goto label_237d48;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d50u: goto label_237d50;
        case 0x237d54u: goto label_237d54;
        case 0x237d58u: goto label_237d58;
        case 0x237d5cu: goto label_237d5c;
        case 0x237d60u: goto label_237d60;
        case 0x237d64u: goto label_237d64;
        case 0x237d68u: goto label_237d68;
        case 0x237d6cu: goto label_237d6c;
        case 0x237d70u: goto label_237d70;
        case 0x237d74u: goto label_237d74;
        case 0x237d78u: goto label_237d78;
        case 0x237d7cu: goto label_237d7c;
        case 0x237d80u: goto label_237d80;
        case 0x237d84u: goto label_237d84;
        case 0x237d88u: goto label_237d88;
        case 0x237d8cu: goto label_237d8c;
        case 0x237d90u: goto label_237d90;
        case 0x237d94u: goto label_237d94;
        case 0x237d98u: goto label_237d98;
        case 0x237d9cu: goto label_237d9c;
        case 0x237da0u: goto label_237da0;
        case 0x237da4u: goto label_237da4;
        case 0x237da8u: goto label_237da8;
        case 0x237dacu: goto label_237dac;
        case 0x237db0u: goto label_237db0;
        case 0x237db4u: goto label_237db4;
        case 0x237db8u: goto label_237db8;
        case 0x237dbcu: goto label_237dbc;
        case 0x237dc0u: goto label_237dc0;
        case 0x237dc4u: goto label_237dc4;
        case 0x237dc8u: goto label_237dc8;
        case 0x237dccu: goto label_237dcc;
        case 0x237dd0u: goto label_237dd0;
        case 0x237dd4u: goto label_237dd4;
        case 0x237dd8u: goto label_237dd8;
        case 0x237ddcu: goto label_237ddc;
        case 0x237de0u: goto label_237de0;
        case 0x237de4u: goto label_237de4;
        case 0x237de8u: goto label_237de8;
        case 0x237decu: goto label_237dec;
        case 0x237df0u: goto label_237df0;
        case 0x237df4u: goto label_237df4;
        case 0x237df8u: goto label_237df8;
        case 0x237dfcu: goto label_237dfc;
        case 0x237e00u: goto label_237e00;
        case 0x237e04u: goto label_237e04;
        case 0x237e08u: goto label_237e08;
        case 0x237e0cu: goto label_237e0c;
        case 0x237e10u: goto label_237e10;
        case 0x237e14u: goto label_237e14;
        case 0x237e18u: goto label_237e18;
        case 0x237e1cu: goto label_237e1c;
        case 0x237e20u: goto label_237e20;
        case 0x237e24u: goto label_237e24;
        case 0x237e28u: goto label_237e28;
        case 0x237e2cu: goto label_237e2c;
        case 0x237e30u: goto label_237e30;
        case 0x237e34u: goto label_237e34;
        case 0x237e38u: goto label_237e38;
        case 0x237e3cu: goto label_237e3c;
        case 0x237e40u: goto label_237e40;
        case 0x237e44u: goto label_237e44;
        case 0x237e48u: goto label_237e48;
        case 0x237e4cu: goto label_237e4c;
        case 0x237e50u: goto label_237e50;
        case 0x237e54u: goto label_237e54;
        case 0x237e58u: goto label_237e58;
        case 0x237e5cu: goto label_237e5c;
        case 0x237e60u: goto label_237e60;
        case 0x237e64u: goto label_237e64;
        case 0x237e68u: goto label_237e68;
        case 0x237e6cu: goto label_237e6c;
        case 0x237e70u: goto label_237e70;
        case 0x237e74u: goto label_237e74;
        case 0x237e78u: goto label_237e78;
        case 0x237e7cu: goto label_237e7c;
        case 0x237e80u: goto label_237e80;
        case 0x237e84u: goto label_237e84;
        case 0x237e88u: goto label_237e88;
        case 0x237e8cu: goto label_237e8c;
        case 0x237e90u: goto label_237e90;
        case 0x237e94u: goto label_237e94;
        case 0x237e98u: goto label_237e98;
        case 0x237e9cu: goto label_237e9c;
        case 0x237ea0u: goto label_237ea0;
        case 0x237ea4u: goto label_237ea4;
        case 0x237ea8u: goto label_237ea8;
        case 0x237eacu: goto label_237eac;
        case 0x237eb0u: goto label_237eb0;
        case 0x237eb4u: goto label_237eb4;
        case 0x237eb8u: goto label_237eb8;
        case 0x237ebcu: goto label_237ebc;
        case 0x237ec0u: goto label_237ec0;
        case 0x237ec4u: goto label_237ec4;
        case 0x237ec8u: goto label_237ec8;
        case 0x237eccu: goto label_237ecc;
        case 0x237ed0u: goto label_237ed0;
        case 0x237ed4u: goto label_237ed4;
        case 0x237ed8u: goto label_237ed8;
        case 0x237edcu: goto label_237edc;
        case 0x237ee0u: goto label_237ee0;
        case 0x237ee4u: goto label_237ee4;
        case 0x237ee8u: goto label_237ee8;
        case 0x237eecu: goto label_237eec;
        case 0x237ef0u: goto label_237ef0;
        case 0x237ef4u: goto label_237ef4;
        case 0x237ef8u: goto label_237ef8;
        case 0x237efcu: goto label_237efc;
        case 0x237f00u: goto label_237f00;
        case 0x237f04u: goto label_237f04;
        case 0x237f08u: goto label_237f08;
        case 0x237f0cu: goto label_237f0c;
        case 0x237f10u: goto label_237f10;
        case 0x237f14u: goto label_237f14;
        case 0x237f18u: goto label_237f18;
        case 0x237f1cu: goto label_237f1c;
        case 0x237f20u: goto label_237f20;
        case 0x237f24u: goto label_237f24;
        case 0x237f28u: goto label_237f28;
        case 0x237f2cu: goto label_237f2c;
        case 0x237f30u: goto label_237f30;
        case 0x237f34u: goto label_237f34;
        case 0x237f38u: goto label_237f38;
        case 0x237f3cu: goto label_237f3c;
        case 0x237f40u: goto label_237f40;
        case 0x237f44u: goto label_237f44;
        case 0x237f48u: goto label_237f48;
        case 0x237f4cu: goto label_237f4c;
        case 0x237f50u: goto label_237f50;
        case 0x237f54u: goto label_237f54;
        case 0x237f58u: goto label_237f58;
        case 0x237f5cu: goto label_237f5c;
        case 0x237f60u: goto label_237f60;
        case 0x237f64u: goto label_237f64;
        case 0x237f68u: goto label_237f68;
        case 0x237f6cu: goto label_237f6c;
        case 0x237f70u: goto label_237f70;
        case 0x237f74u: goto label_237f74;
        case 0x237f78u: goto label_237f78;
        case 0x237f7cu: goto label_237f7c;
        case 0x237f80u: goto label_237f80;
        case 0x237f84u: goto label_237f84;
        case 0x237f88u: goto label_237f88;
        case 0x237f8cu: goto label_237f8c;
        case 0x237f90u: goto label_237f90;
        case 0x237f94u: goto label_237f94;
        case 0x237f98u: goto label_237f98;
        case 0x237f9cu: goto label_237f9c;
        case 0x237fa0u: goto label_237fa0;
        case 0x237fa4u: goto label_237fa4;
        case 0x237fa8u: goto label_237fa8;
        case 0x237facu: goto label_237fac;
        case 0x237fb0u: goto label_237fb0;
        case 0x237fb4u: goto label_237fb4;
        case 0x237fb8u: goto label_237fb8;
        case 0x237fbcu: goto label_237fbc;
        case 0x237fc0u: goto label_237fc0;
        case 0x237fc4u: goto label_237fc4;
        case 0x237fc8u: goto label_237fc8;
        case 0x237fccu: goto label_237fcc;
        case 0x237fd0u: goto label_237fd0;
        case 0x237fd4u: goto label_237fd4;
        case 0x237fd8u: goto label_237fd8;
        case 0x237fdcu: goto label_237fdc;
        case 0x237fe0u: goto label_237fe0;
        case 0x237fe4u: goto label_237fe4;
        case 0x237fe8u: goto label_237fe8;
        case 0x237fecu: goto label_237fec;
        case 0x237ff0u: goto label_237ff0;
        case 0x237ff4u: goto label_237ff4;
        case 0x237ff8u: goto label_237ff8;
        case 0x237ffcu: goto label_237ffc;
        case 0x238000u: goto label_238000;
        case 0x238004u: goto label_238004;
        case 0x238008u: goto label_238008;
        case 0x23800cu: goto label_23800c;
        case 0x238010u: goto label_238010;
        case 0x238014u: goto label_238014;
        case 0x238018u: goto label_238018;
        case 0x23801cu: goto label_23801c;
        case 0x238020u: goto label_238020;
        case 0x238024u: goto label_238024;
        case 0x238028u: goto label_238028;
        case 0x23802cu: goto label_23802c;
        case 0x238030u: goto label_238030;
        case 0x238034u: goto label_238034;
        case 0x238038u: goto label_238038;
        case 0x23803cu: goto label_23803c;
        case 0x238040u: goto label_238040;
        case 0x238044u: goto label_238044;
        case 0x238048u: goto label_238048;
        case 0x23804cu: goto label_23804c;
        case 0x238050u: goto label_238050;
        case 0x238054u: goto label_238054;
        case 0x238058u: goto label_238058;
        case 0x23805cu: goto label_23805c;
        case 0x238060u: goto label_238060;
        case 0x238064u: goto label_238064;
        case 0x238068u: goto label_238068;
        case 0x23806cu: goto label_23806c;
        case 0x238070u: goto label_238070;
        case 0x238074u: goto label_238074;
        case 0x238078u: goto label_238078;
        case 0x23807cu: goto label_23807c;
        case 0x238080u: goto label_238080;
        case 0x238084u: goto label_238084;
        case 0x238088u: goto label_238088;
        case 0x23808cu: goto label_23808c;
        case 0x238090u: goto label_238090;
        case 0x238094u: goto label_238094;
        case 0x238098u: goto label_238098;
        case 0x23809cu: goto label_23809c;
        case 0x2380a0u: goto label_2380a0;
        case 0x2380a4u: goto label_2380a4;
        case 0x2380a8u: goto label_2380a8;
        case 0x2380acu: goto label_2380ac;
        case 0x2380b0u: goto label_2380b0;
        case 0x2380b4u: goto label_2380b4;
        case 0x2380b8u: goto label_2380b8;
        case 0x2380bcu: goto label_2380bc;
        case 0x2380c0u: goto label_2380c0;
        case 0x2380c4u: goto label_2380c4;
        case 0x2380c8u: goto label_2380c8;
        case 0x2380ccu: goto label_2380cc;
        case 0x2380d0u: goto label_2380d0;
        case 0x2380d4u: goto label_2380d4;
        case 0x2380d8u: goto label_2380d8;
        case 0x2380dcu: goto label_2380dc;
        case 0x2380e0u: goto label_2380e0;
        case 0x2380e4u: goto label_2380e4;
        case 0x2380e8u: goto label_2380e8;
        case 0x2380ecu: goto label_2380ec;
        case 0x2380f0u: goto label_2380f0;
        case 0x2380f4u: goto label_2380f4;
        case 0x2380f8u: goto label_2380f8;
        case 0x2380fcu: goto label_2380fc;
        case 0x238100u: goto label_238100;
        case 0x238104u: goto label_238104;
        case 0x238108u: goto label_238108;
        case 0x23810cu: goto label_23810c;
        case 0x238110u: goto label_238110;
        case 0x238114u: goto label_238114;
        case 0x238118u: goto label_238118;
        case 0x23811cu: goto label_23811c;
        case 0x238120u: goto label_238120;
        case 0x238124u: goto label_238124;
        case 0x238128u: goto label_238128;
        case 0x23812cu: goto label_23812c;
        case 0x238130u: goto label_238130;
        case 0x238134u: goto label_238134;
        case 0x238138u: goto label_238138;
        case 0x23813cu: goto label_23813c;
        case 0x238140u: goto label_238140;
        case 0x238144u: goto label_238144;
        case 0x238148u: goto label_238148;
        case 0x23814cu: goto label_23814c;
        case 0x238150u: goto label_238150;
        case 0x238154u: goto label_238154;
        case 0x238158u: goto label_238158;
        case 0x23815cu: goto label_23815c;
        case 0x238160u: goto label_238160;
        case 0x238164u: goto label_238164;
        case 0x238168u: goto label_238168;
        case 0x23816cu: goto label_23816c;
        case 0x238170u: goto label_238170;
        case 0x238174u: goto label_238174;
        case 0x238178u: goto label_238178;
        case 0x23817cu: goto label_23817c;
        case 0x238180u: goto label_238180;
        case 0x238184u: goto label_238184;
        case 0x238188u: goto label_238188;
        case 0x23818cu: goto label_23818c;
        case 0x238190u: goto label_238190;
        case 0x238194u: goto label_238194;
        case 0x238198u: goto label_238198;
        case 0x23819cu: goto label_23819c;
        case 0x2381a0u: goto label_2381a0;
        case 0x2381a4u: goto label_2381a4;
        case 0x2381a8u: goto label_2381a8;
        case 0x2381acu: goto label_2381ac;
        case 0x2381b0u: goto label_2381b0;
        case 0x2381b4u: goto label_2381b4;
        case 0x2381b8u: goto label_2381b8;
        case 0x2381bcu: goto label_2381bc;
        case 0x2381c0u: goto label_2381c0;
        case 0x2381c4u: goto label_2381c4;
        case 0x2381c8u: goto label_2381c8;
        case 0x2381ccu: goto label_2381cc;
        case 0x2381d0u: goto label_2381d0;
        case 0x2381d4u: goto label_2381d4;
        case 0x2381d8u: goto label_2381d8;
        case 0x2381dcu: goto label_2381dc;
        case 0x2381e0u: goto label_2381e0;
        case 0x2381e4u: goto label_2381e4;
        case 0x2381e8u: goto label_2381e8;
        case 0x2381ecu: goto label_2381ec;
        case 0x2381f0u: goto label_2381f0;
        case 0x2381f4u: goto label_2381f4;
        case 0x2381f8u: goto label_2381f8;
        case 0x2381fcu: goto label_2381fc;
        case 0x238200u: goto label_238200;
        case 0x238204u: goto label_238204;
        case 0x238208u: goto label_238208;
        case 0x23820cu: goto label_23820c;
        case 0x238210u: goto label_238210;
        case 0x238214u: goto label_238214;
        case 0x238218u: goto label_238218;
        case 0x23821cu: goto label_23821c;
        case 0x238220u: goto label_238220;
        case 0x238224u: goto label_238224;
        case 0x238228u: goto label_238228;
        case 0x23822cu: goto label_23822c;
        case 0x238230u: goto label_238230;
        case 0x238234u: goto label_238234;
        case 0x238238u: goto label_238238;
        case 0x23823cu: goto label_23823c;
        case 0x238240u: goto label_238240;
        case 0x238244u: goto label_238244;
        case 0x238248u: goto label_238248;
        case 0x23824cu: goto label_23824c;
        case 0x238250u: goto label_238250;
        case 0x238254u: goto label_238254;
        case 0x238258u: goto label_238258;
        case 0x23825cu: goto label_23825c;
        case 0x238260u: goto label_238260;
        case 0x238264u: goto label_238264;
        case 0x238268u: goto label_238268;
        case 0x23826cu: goto label_23826c;
        case 0x238270u: goto label_238270;
        case 0x238274u: goto label_238274;
        case 0x238278u: goto label_238278;
        case 0x23827cu: goto label_23827c;
        case 0x238280u: goto label_238280;
        case 0x238284u: goto label_238284;
        case 0x238288u: goto label_238288;
        case 0x23828cu: goto label_23828c;
        case 0x238290u: goto label_238290;
        case 0x238294u: goto label_238294;
        case 0x238298u: goto label_238298;
        case 0x23829cu: goto label_23829c;
        case 0x2382a0u: goto label_2382a0;
        case 0x2382a4u: goto label_2382a4;
        case 0x2382a8u: goto label_2382a8;
        case 0x2382acu: goto label_2382ac;
        case 0x2382b0u: goto label_2382b0;
        case 0x2382b4u: goto label_2382b4;
        case 0x2382b8u: goto label_2382b8;
        case 0x2382bcu: goto label_2382bc;
        case 0x2382c0u: goto label_2382c0;
        case 0x2382c4u: goto label_2382c4;
        case 0x2382c8u: goto label_2382c8;
        case 0x2382ccu: goto label_2382cc;
        case 0x2382d0u: goto label_2382d0;
        case 0x2382d4u: goto label_2382d4;
        case 0x2382d8u: goto label_2382d8;
        case 0x2382dcu: goto label_2382dc;
        case 0x2382e0u: goto label_2382e0;
        case 0x2382e4u: goto label_2382e4;
        case 0x2382e8u: goto label_2382e8;
        case 0x2382ecu: goto label_2382ec;
        case 0x2382f0u: goto label_2382f0;
        case 0x2382f4u: goto label_2382f4;
        case 0x2382f8u: goto label_2382f8;
        case 0x2382fcu: goto label_2382fc;
        case 0x238300u: goto label_238300;
        case 0x238304u: goto label_238304;
        case 0x238308u: goto label_238308;
        case 0x23830cu: goto label_23830c;
        case 0x238310u: goto label_238310;
        case 0x238314u: goto label_238314;
        case 0x238318u: goto label_238318;
        case 0x23831cu: goto label_23831c;
        case 0x238320u: goto label_238320;
        case 0x238324u: goto label_238324;
        case 0x238328u: goto label_238328;
        case 0x23832cu: goto label_23832c;
        case 0x238330u: goto label_238330;
        case 0x238334u: goto label_238334;
        case 0x238338u: goto label_238338;
        case 0x23833cu: goto label_23833c;
        case 0x238340u: goto label_238340;
        case 0x238344u: goto label_238344;
        case 0x238348u: goto label_238348;
        case 0x23834cu: goto label_23834c;
        case 0x238350u: goto label_238350;
        case 0x238354u: goto label_238354;
        case 0x238358u: goto label_238358;
        case 0x23835cu: goto label_23835c;
        case 0x238360u: goto label_238360;
        case 0x238364u: goto label_238364;
        case 0x238368u: goto label_238368;
        case 0x23836cu: goto label_23836c;
        case 0x238370u: goto label_238370;
        case 0x238374u: goto label_238374;
        case 0x238378u: goto label_238378;
        case 0x23837cu: goto label_23837c;
        case 0x238380u: goto label_238380;
        case 0x238384u: goto label_238384;
        case 0x238388u: goto label_238388;
        case 0x23838cu: goto label_23838c;
        case 0x238390u: goto label_238390;
        case 0x238394u: goto label_238394;
        case 0x238398u: goto label_238398;
        case 0x23839cu: goto label_23839c;
        case 0x2383a0u: goto label_2383a0;
        case 0x2383a4u: goto label_2383a4;
        case 0x2383a8u: goto label_2383a8;
        case 0x2383acu: goto label_2383ac;
        case 0x2383b0u: goto label_2383b0;
        case 0x2383b4u: goto label_2383b4;
        case 0x2383b8u: goto label_2383b8;
        case 0x2383bcu: goto label_2383bc;
        case 0x2383c0u: goto label_2383c0;
        case 0x2383c4u: goto label_2383c4;
        case 0x2383c8u: goto label_2383c8;
        case 0x2383ccu: goto label_2383cc;
        case 0x2383d0u: goto label_2383d0;
        case 0x2383d4u: goto label_2383d4;
        case 0x2383d8u: goto label_2383d8;
        case 0x2383dcu: goto label_2383dc;
        case 0x2383e0u: goto label_2383e0;
        case 0x2383e4u: goto label_2383e4;
        case 0x2383e8u: goto label_2383e8;
        case 0x2383ecu: goto label_2383ec;
        case 0x2383f0u: goto label_2383f0;
        case 0x2383f4u: goto label_2383f4;
        case 0x2383f8u: goto label_2383f8;
        case 0x2383fcu: goto label_2383fc;
        case 0x238400u: goto label_238400;
        case 0x238404u: goto label_238404;
        case 0x238408u: goto label_238408;
        case 0x23840cu: goto label_23840c;
        case 0x238410u: goto label_238410;
        case 0x238414u: goto label_238414;
        case 0x238418u: goto label_238418;
        case 0x23841cu: goto label_23841c;
        case 0x238420u: goto label_238420;
        case 0x238424u: goto label_238424;
        case 0x238428u: goto label_238428;
        case 0x23842cu: goto label_23842c;
        case 0x238430u: goto label_238430;
        case 0x238434u: goto label_238434;
        case 0x238438u: goto label_238438;
        case 0x23843cu: goto label_23843c;
        case 0x238440u: goto label_238440;
        case 0x238444u: goto label_238444;
        case 0x238448u: goto label_238448;
        case 0x23844cu: goto label_23844c;
        case 0x238450u: goto label_238450;
        case 0x238454u: goto label_238454;
        case 0x238458u: goto label_238458;
        case 0x23845cu: goto label_23845c;
        case 0x238460u: goto label_238460;
        case 0x238464u: goto label_238464;
        case 0x238468u: goto label_238468;
        case 0x23846cu: goto label_23846c;
        case 0x238470u: goto label_238470;
        case 0x238474u: goto label_238474;
        case 0x238478u: goto label_238478;
        case 0x23847cu: goto label_23847c;
        case 0x238480u: goto label_238480;
        case 0x238484u: goto label_238484;
        case 0x238488u: goto label_238488;
        case 0x23848cu: goto label_23848c;
        case 0x238490u: goto label_238490;
        case 0x238494u: goto label_238494;
        case 0x238498u: goto label_238498;
        case 0x23849cu: goto label_23849c;
        case 0x2384a0u: goto label_2384a0;
        case 0x2384a4u: goto label_2384a4;
        case 0x2384a8u: goto label_2384a8;
        case 0x2384acu: goto label_2384ac;
        case 0x2384b0u: goto label_2384b0;
        case 0x2384b4u: goto label_2384b4;
        case 0x2384b8u: goto label_2384b8;
        case 0x2384bcu: goto label_2384bc;
        case 0x2384c0u: goto label_2384c0;
        case 0x2384c4u: goto label_2384c4;
        case 0x2384c8u: goto label_2384c8;
        case 0x2384ccu: goto label_2384cc;
        case 0x2384d0u: goto label_2384d0;
        case 0x2384d4u: goto label_2384d4;
        case 0x2384d8u: goto label_2384d8;
        case 0x2384dcu: goto label_2384dc;
        case 0x2384e0u: goto label_2384e0;
        case 0x2384e4u: goto label_2384e4;
        case 0x2384e8u: goto label_2384e8;
        case 0x2384ecu: goto label_2384ec;
        case 0x2384f0u: goto label_2384f0;
        case 0x2384f4u: goto label_2384f4;
        case 0x2384f8u: goto label_2384f8;
        case 0x2384fcu: goto label_2384fc;
        case 0x238500u: goto label_238500;
        case 0x238504u: goto label_238504;
        case 0x238508u: goto label_238508;
        case 0x23850cu: goto label_23850c;
        case 0x238510u: goto label_238510;
        case 0x238514u: goto label_238514;
        case 0x238518u: goto label_238518;
        case 0x23851cu: goto label_23851c;
        case 0x238520u: goto label_238520;
        case 0x238524u: goto label_238524;
        case 0x238528u: goto label_238528;
        case 0x23852cu: goto label_23852c;
        case 0x238530u: goto label_238530;
        case 0x238534u: goto label_238534;
        case 0x238538u: goto label_238538;
        case 0x23853cu: goto label_23853c;
        case 0x238540u: goto label_238540;
        case 0x238544u: goto label_238544;
        case 0x238548u: goto label_238548;
        case 0x23854cu: goto label_23854c;
        case 0x238550u: goto label_238550;
        case 0x238554u: goto label_238554;
        case 0x238558u: goto label_238558;
        case 0x23855cu: goto label_23855c;
        case 0x238560u: goto label_238560;
        case 0x238564u: goto label_238564;
        case 0x238568u: goto label_238568;
        case 0x23856cu: goto label_23856c;
        case 0x238570u: goto label_238570;
        case 0x238574u: goto label_238574;
        case 0x238578u: goto label_238578;
        case 0x23857cu: goto label_23857c;
        case 0x238580u: goto label_238580;
        case 0x238584u: goto label_238584;
        case 0x238588u: goto label_238588;
        case 0x23858cu: goto label_23858c;
        case 0x238590u: goto label_238590;
        case 0x238594u: goto label_238594;
        case 0x238598u: goto label_238598;
        case 0x23859cu: goto label_23859c;
        case 0x2385a0u: goto label_2385a0;
        case 0x2385a4u: goto label_2385a4;
        case 0x2385a8u: goto label_2385a8;
        case 0x2385acu: goto label_2385ac;
        case 0x2385b0u: goto label_2385b0;
        case 0x2385b4u: goto label_2385b4;
        case 0x2385b8u: goto label_2385b8;
        case 0x2385bcu: goto label_2385bc;
        case 0x2385c0u: goto label_2385c0;
        case 0x2385c4u: goto label_2385c4;
        case 0x2385c8u: goto label_2385c8;
        case 0x2385ccu: goto label_2385cc;
        case 0x2385d0u: goto label_2385d0;
        case 0x2385d4u: goto label_2385d4;
        case 0x2385d8u: goto label_2385d8;
        case 0x2385dcu: goto label_2385dc;
        case 0x2385e0u: goto label_2385e0;
        case 0x2385e4u: goto label_2385e4;
        case 0x2385e8u: goto label_2385e8;
        case 0x2385ecu: goto label_2385ec;
        case 0x2385f0u: goto label_2385f0;
        case 0x2385f4u: goto label_2385f4;
        case 0x2385f8u: goto label_2385f8;
        case 0x2385fcu: goto label_2385fc;
        case 0x238600u: goto label_238600;
        case 0x238604u: goto label_238604;
        case 0x238608u: goto label_238608;
        case 0x23860cu: goto label_23860c;
        case 0x238610u: goto label_238610;
        case 0x238614u: goto label_238614;
        case 0x238618u: goto label_238618;
        case 0x23861cu: goto label_23861c;
        case 0x238620u: goto label_238620;
        case 0x238624u: goto label_238624;
        case 0x238628u: goto label_238628;
        case 0x23862cu: goto label_23862c;
        case 0x238630u: goto label_238630;
        case 0x238634u: goto label_238634;
        case 0x238638u: goto label_238638;
        case 0x23863cu: goto label_23863c;
        case 0x238640u: goto label_238640;
        case 0x238644u: goto label_238644;
        case 0x238648u: goto label_238648;
        case 0x23864cu: goto label_23864c;
        case 0x238650u: goto label_238650;
        case 0x238654u: goto label_238654;
        case 0x238658u: goto label_238658;
        case 0x23865cu: goto label_23865c;
        case 0x238660u: goto label_238660;
        case 0x238664u: goto label_238664;
        case 0x238668u: goto label_238668;
        case 0x23866cu: goto label_23866c;
        case 0x238670u: goto label_238670;
        case 0x238674u: goto label_238674;
        case 0x238678u: goto label_238678;
        case 0x23867cu: goto label_23867c;
        case 0x238680u: goto label_238680;
        case 0x238684u: goto label_238684;
        case 0x238688u: goto label_238688;
        case 0x23868cu: goto label_23868c;
        case 0x238690u: goto label_238690;
        case 0x238694u: goto label_238694;
        case 0x238698u: goto label_238698;
        case 0x23869cu: goto label_23869c;
        case 0x2386a0u: goto label_2386a0;
        case 0x2386a4u: goto label_2386a4;
        case 0x2386a8u: goto label_2386a8;
        case 0x2386acu: goto label_2386ac;
        case 0x2386b0u: goto label_2386b0;
        case 0x2386b4u: goto label_2386b4;
        case 0x2386b8u: goto label_2386b8;
        case 0x2386bcu: goto label_2386bc;
        case 0x2386c0u: goto label_2386c0;
        case 0x2386c4u: goto label_2386c4;
        case 0x2386c8u: goto label_2386c8;
        case 0x2386ccu: goto label_2386cc;
        case 0x2386d0u: goto label_2386d0;
        case 0x2386d4u: goto label_2386d4;
        case 0x2386d8u: goto label_2386d8;
        case 0x2386dcu: goto label_2386dc;
        case 0x2386e0u: goto label_2386e0;
        case 0x2386e4u: goto label_2386e4;
        case 0x2386e8u: goto label_2386e8;
        case 0x2386ecu: goto label_2386ec;
        case 0x2386f0u: goto label_2386f0;
        case 0x2386f4u: goto label_2386f4;
        case 0x2386f8u: goto label_2386f8;
        case 0x2386fcu: goto label_2386fc;
        case 0x238700u: goto label_238700;
        case 0x238704u: goto label_238704;
        case 0x238708u: goto label_238708;
        case 0x23870cu: goto label_23870c;
        case 0x238710u: goto label_238710;
        case 0x238714u: goto label_238714;
        case 0x238718u: goto label_238718;
        case 0x23871cu: goto label_23871c;
        case 0x238720u: goto label_238720;
        case 0x238724u: goto label_238724;
        case 0x238728u: goto label_238728;
        case 0x23872cu: goto label_23872c;
        case 0x238730u: goto label_238730;
        case 0x238734u: goto label_238734;
        case 0x238738u: goto label_238738;
        case 0x23873cu: goto label_23873c;
        case 0x238740u: goto label_238740;
        case 0x238744u: goto label_238744;
        case 0x238748u: goto label_238748;
        case 0x23874cu: goto label_23874c;
        case 0x238750u: goto label_238750;
        case 0x238754u: goto label_238754;
        case 0x238758u: goto label_238758;
        case 0x23875cu: goto label_23875c;
        case 0x238760u: goto label_238760;
        case 0x238764u: goto label_238764;
        case 0x238768u: goto label_238768;
        case 0x23876cu: goto label_23876c;
        case 0x238770u: goto label_238770;
        case 0x238774u: goto label_238774;
        case 0x238778u: goto label_238778;
        case 0x23877cu: goto label_23877c;
        case 0x238780u: goto label_238780;
        case 0x238784u: goto label_238784;
        case 0x238788u: goto label_238788;
        case 0x23878cu: goto label_23878c;
        case 0x238790u: goto label_238790;
        case 0x238794u: goto label_238794;
        case 0x238798u: goto label_238798;
        case 0x23879cu: goto label_23879c;
        case 0x2387a0u: goto label_2387a0;
        case 0x2387a4u: goto label_2387a4;
        case 0x2387a8u: goto label_2387a8;
        case 0x2387acu: goto label_2387ac;
        case 0x2387b0u: goto label_2387b0;
        case 0x2387b4u: goto label_2387b4;
        case 0x2387b8u: goto label_2387b8;
        case 0x2387bcu: goto label_2387bc;
        case 0x2387c0u: goto label_2387c0;
        case 0x2387c4u: goto label_2387c4;
        case 0x2387c8u: goto label_2387c8;
        case 0x2387ccu: goto label_2387cc;
        case 0x2387d0u: goto label_2387d0;
        case 0x2387d4u: goto label_2387d4;
        case 0x2387d8u: goto label_2387d8;
        case 0x2387dcu: goto label_2387dc;
        case 0x2387e0u: goto label_2387e0;
        case 0x2387e4u: goto label_2387e4;
        case 0x2387e8u: goto label_2387e8;
        case 0x2387ecu: goto label_2387ec;
        case 0x2387f0u: goto label_2387f0;
        case 0x2387f4u: goto label_2387f4;
        case 0x2387f8u: goto label_2387f8;
        case 0x2387fcu: goto label_2387fc;
        case 0x238800u: goto label_238800;
        case 0x238804u: goto label_238804;
        case 0x238808u: goto label_238808;
        case 0x23880cu: goto label_23880c;
        default: break;
    }

    ctx->pc = 0x237990u;

label_237990:
    // 0x237990: 0x27bdcd90  addiu       $sp, $sp, -0x3270
    ctx->pc = 0x237990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294954384));
label_237994:
    // 0x237994: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x237994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_237998:
    // 0x237998: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x237998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_23799c:
    // 0x23799c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x23799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_2379a0:
    // 0x2379a0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2379a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2379a4:
    // 0x2379a4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2379a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2379a8:
    // 0x2379a8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2379a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2379ac:
    // 0x2379ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2379acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2379b0:
    // 0x2379b0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2379b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2379b4:
    // 0x2379b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2379b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2379b8:
    // 0x2379b8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2379b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2379bc:
    // 0x2379bc: 0x27a43250  addiu       $a0, $sp, 0x3250
    ctx->pc = 0x2379bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
label_2379c0:
    // 0x2379c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2379c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2379c4:
    // 0x2379c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2379c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2379c8:
    // 0x2379c8: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x2379c8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2379cc:
    // 0x2379cc: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x2379ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
label_2379d0:
    // 0x2379d0: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x2379d0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2379d4:
    // 0x2379d4: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x2379d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
label_2379d8:
    // 0x2379d8: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x2379d8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2379dc:
    // 0x2379dc: 0xafa90108  sw          $t1, 0x108($sp)
    ctx->pc = 0x2379dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 9));
label_2379e0:
    // 0x2379e0: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x2379e0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2379e4:
    // 0x2379e4: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x2379e4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2379e8:
    // 0x2379e8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x2379e8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2379ec:
    // 0x2379ec: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2379ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2379f0:
    // 0x2379f0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2379f0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2379f4:
    // 0x2379f4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2379f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2379f8:
    // 0x2379f8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2379f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2379fc:
    // 0x2379fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2379fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_237a00:
    // 0x237a00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x237a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_237a04:
    // 0x237a04: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x237a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_237a08:
    // 0x237a08: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x237a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237a0c:
    // 0x237a0c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x237a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237a10:
    // 0x237a10: 0xe7a23260  swc1        $f2, 0x3260($sp)
    ctx->pc = 0x237a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12896), bits); }
label_237a14:
    // 0x237a14: 0xe7a13264  swc1        $f1, 0x3264($sp)
    ctx->pc = 0x237a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12900), bits); }
label_237a18:
    // 0x237a18: 0xc0a748c  jal         func_29D230
label_237a1c:
    if (ctx->pc == 0x237A1Cu) {
        ctx->pc = 0x237A1Cu;
            // 0x237a1c: 0xe7a03268  swc1        $f0, 0x3268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12904), bits); }
        ctx->pc = 0x237A20u;
        goto label_237a20;
    }
    ctx->pc = 0x237A18u;
    SET_GPR_U32(ctx, 31, 0x237A20u);
    ctx->pc = 0x237A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237A18u;
            // 0x237a1c: 0xe7a03268  swc1        $f0, 0x3268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12904), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D230u;
    if (runtime->hasFunction(0x29D230u)) {
        auto targetFn = runtime->lookupFunction(0x29D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A20u; }
        if (ctx->pc != 0x237A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D230_0x29d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A20u; }
        if (ctx->pc != 0x237A20u) { return; }
    }
    ctx->pc = 0x237A20u;
label_237a20:
    // 0x237a20: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x237a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_237a24:
    // 0x237a24: 0xc0a7328  jal         func_29CCA0
label_237a28:
    if (ctx->pc == 0x237A28u) {
        ctx->pc = 0x237A28u;
            // 0x237a28: 0x27a43250  addiu       $a0, $sp, 0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
        ctx->pc = 0x237A2Cu;
        goto label_237a2c;
    }
    ctx->pc = 0x237A24u;
    SET_GPR_U32(ctx, 31, 0x237A2Cu);
    ctx->pc = 0x237A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237A24u;
            // 0x237a28: 0x27a43250  addiu       $a0, $sp, 0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CCA0u;
    if (runtime->hasFunction(0x29CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x29CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A2Cu; }
        if (ctx->pc != 0x237A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CCA0_0x29cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A2Cu; }
        if (ctx->pc != 0x237A2Cu) { return; }
    }
    ctx->pc = 0x237A2Cu;
label_237a2c:
    // 0x237a2c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x237a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_237a30:
    // 0x237a30: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x237a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
label_237a34:
    // 0x237a34: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x237a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_237a38:
    // 0x237a38: 0xafa23220  sw          $v0, 0x3220($sp)
    ctx->pc = 0x237a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12832), GPR_U32(ctx, 2));
label_237a3c:
    // 0x237a3c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x237a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_237a40:
    // 0x237a40: 0x1840026b  blez        $v0, . + 4 + (0x26B << 2)
label_237a44:
    if (ctx->pc == 0x237A44u) {
        ctx->pc = 0x237A44u;
            // 0x237a44: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237A48u;
        goto label_237a48;
    }
    ctx->pc = 0x237A40u;
    {
        const bool branch_taken_0x237a40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A40u;
            // 0x237a44: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a40) {
            ctx->pc = 0x2383F0u;
            goto label_2383f0;
        }
    }
    ctx->pc = 0x237A48u;
label_237a48:
    // 0x237a48: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x237a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_237a4c:
    // 0x237a4c: 0x27a43250  addiu       $a0, $sp, 0x3250
    ctx->pc = 0x237a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
label_237a50:
    // 0x237a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237a54:
    // 0x237a54: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x237a54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_237a58:
    // 0x237a58: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x237a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_237a5c:
    // 0x237a5c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x237a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_237a60:
    // 0x237a60: 0xc0a7420  jal         func_29D080
label_237a64:
    if (ctx->pc == 0x237A64u) {
        ctx->pc = 0x237A64u;
            // 0x237a64: 0x70402e28  paddub      $a1, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x237A68u;
        goto label_237a68;
    }
    ctx->pc = 0x237A60u;
    SET_GPR_U32(ctx, 31, 0x237A68u);
    ctx->pc = 0x237A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237A60u;
            // 0x237a64: 0x70402e28  paddub      $a1, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D080u;
    if (runtime->hasFunction(0x29D080u)) {
        auto targetFn = runtime->lookupFunction(0x29D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A68u; }
        if (ctx->pc != 0x237A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D080_0x29d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A68u; }
        if (ctx->pc != 0x237A68u) { return; }
    }
    ctx->pc = 0x237A68u;
label_237a68:
    // 0x237a68: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x237a68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_237a6c:
    // 0x237a6c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x237a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_237a70:
    // 0x237a70: 0x18400257  blez        $v0, . + 4 + (0x257 << 2)
label_237a74:
    if (ctx->pc == 0x237A74u) {
        ctx->pc = 0x237A74u;
            // 0x237a74: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237A78u;
        goto label_237a78;
    }
    ctx->pc = 0x237A70u;
    {
        const bool branch_taken_0x237a70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A70u;
            // 0x237a74: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a70) {
            ctx->pc = 0x2383D0u;
            goto label_2383d0;
        }
    }
    ctx->pc = 0x237A78u;
label_237a78:
    // 0x237a78: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x237a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_237a7c:
    // 0x237a7c: 0x0  nop
    ctx->pc = 0x237a7cu;
    // NOP
label_237a80:
    // 0x237a80: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x237a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_237a84:
    // 0x237a84: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x237a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_237a88:
    // 0x237a88: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x237a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_237a8c:
    // 0x237a8c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x237a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_237a90:
    // 0x237a90: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x237a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_237a94:
    // 0x237a94: 0xc0a7400  jal         func_29D000
label_237a98:
    if (ctx->pc == 0x237A98u) {
        ctx->pc = 0x237A98u;
            // 0x237a98: 0x27a43250  addiu       $a0, $sp, 0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
        ctx->pc = 0x237A9Cu;
        goto label_237a9c;
    }
    ctx->pc = 0x237A94u;
    SET_GPR_U32(ctx, 31, 0x237A9Cu);
    ctx->pc = 0x237A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237A94u;
            // 0x237a98: 0x27a43250  addiu       $a0, $sp, 0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D000u;
    if (runtime->hasFunction(0x29D000u)) {
        auto targetFn = runtime->lookupFunction(0x29D000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A9Cu; }
        if (ctx->pc != 0x237A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D000_0x29d000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A9Cu; }
        if (ctx->pc != 0x237A9Cu) { return; }
    }
    ctx->pc = 0x237A9Cu;
label_237a9c:
    // 0x237a9c: 0x8fa33258  lw          $v1, 0x3258($sp)
    ctx->pc = 0x237a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12888)));
label_237aa0:
    // 0x237aa0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x237aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_237aa4:
    // 0x237aa4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x237aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_237aa8:
    // 0x237aa8: 0x54400241  bnel        $v0, $zero, . + 4 + (0x241 << 2)
label_237aac:
    if (ctx->pc == 0x237AACu) {
        ctx->pc = 0x237AACu;
            // 0x237aac: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x237AB0u;
        goto label_237ab0;
    }
    ctx->pc = 0x237AA8u;
    {
        const bool branch_taken_0x237aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237aa8) {
            ctx->pc = 0x237AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237AA8u;
            // 0x237aac: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2383B0u;
            goto label_2383b0;
        }
    }
    ctx->pc = 0x237AB0u;
label_237ab0:
    // 0x237ab0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x237ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_237ab4:
    // 0x237ab4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x237ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_237ab8:
    // 0x237ab8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x237ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_237abc:
    // 0x237abc: 0x80a40010  lb          $a0, 0x10($a1)
    ctx->pc = 0x237abcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_237ac0:
    // 0x237ac0: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x237ac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_237ac4:
    // 0x237ac4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x237ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_237ac8:
    // 0x237ac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_237acc:
    // 0x237acc: 0x908200a8  lbu         $v0, 0xA8($a0)
    ctx->pc = 0x237accu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_237ad0:
    // 0x237ad0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x237ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_237ad4:
    // 0x237ad4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x237ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_237ad8:
    // 0x237ad8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_237adc:
    if (ctx->pc == 0x237ADCu) {
        ctx->pc = 0x237ADCu;
            // 0x237adc: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->pc = 0x237AE0u;
        goto label_237ae0;
    }
    ctx->pc = 0x237AD8u;
    {
        const bool branch_taken_0x237ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237ad8) {
            ctx->pc = 0x237ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237AD8u;
            // 0x237adc: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237AE4u;
            goto label_237ae4;
        }
    }
    ctx->pc = 0x237AE0u;
label_237ae0:
    // 0x237ae0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x237ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_237ae4:
    // 0x237ae4: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x237ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_237ae8:
    // 0x237ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237aec:
    // 0x237aec: 0xc09241c  jal         func_249070
label_237af0:
    if (ctx->pc == 0x237AF0u) {
        ctx->pc = 0x237AF0u;
            // 0x237af0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237AF4u;
        goto label_237af4;
    }
    ctx->pc = 0x237AECu;
    SET_GPR_U32(ctx, 31, 0x237AF4u);
    ctx->pc = 0x237AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237AECu;
            // 0x237af0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249070u;
    if (runtime->hasFunction(0x249070u)) {
        auto targetFn = runtime->lookupFunction(0x249070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237AF4u; }
        if (ctx->pc != 0x237AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249070_0x249070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237AF4u; }
        if (ctx->pc != 0x237AF4u) { return; }
    }
    ctx->pc = 0x237AF4u;
label_237af4:
    // 0x237af4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x237af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_237af8:
    // 0x237af8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237afc:
    // 0x237afc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x237afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237b00:
    // 0x237b00: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x237b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_237b04:
    // 0x237b04: 0xc0408c8  jal         func_102320
label_237b08:
    if (ctx->pc == 0x237B08u) {
        ctx->pc = 0x237B08u;
            // 0x237b08: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->pc = 0x237B0Cu;
        goto label_237b0c;
    }
    ctx->pc = 0x237B04u;
    SET_GPR_U32(ctx, 31, 0x237B0Cu);
    ctx->pc = 0x237B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237B04u;
            // 0x237b08: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B0Cu; }
        if (ctx->pc != 0x237B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B0Cu; }
        if (ctx->pc != 0x237B0Cu) { return; }
    }
    ctx->pc = 0x237B0Cu;
label_237b0c:
    // 0x237b0c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x237b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_237b10:
    // 0x237b10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237b14:
    // 0x237b14: 0x1443021a  bne         $v0, $v1, . + 4 + (0x21A << 2)
label_237b18:
    if (ctx->pc == 0x237B18u) {
        ctx->pc = 0x237B1Cu;
        goto label_237b1c;
    }
    ctx->pc = 0x237B14u;
    {
        const bool branch_taken_0x237b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237b14) {
            ctx->pc = 0x238380u;
            goto label_238380;
        }
    }
    ctx->pc = 0x237B1Cu;
label_237b1c:
    // 0x237b1c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x237b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_237b20:
    // 0x237b20: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x237b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_237b24:
    // 0x237b24: 0x10620216  beq         $v1, $v0, . + 4 + (0x216 << 2)
label_237b28:
    if (ctx->pc == 0x237B28u) {
        ctx->pc = 0x237B2Cu;
        goto label_237b2c;
    }
    ctx->pc = 0x237B24u;
    {
        const bool branch_taken_0x237b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x237b24) {
            ctx->pc = 0x238380u;
            goto label_238380;
        }
    }
    ctx->pc = 0x237B2Cu;
label_237b2c:
    // 0x237b2c: 0xc6760120  lwc1        $f22, 0x120($s3)
    ctx->pc = 0x237b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_237b30:
    // 0x237b30: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x237b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_237b34:
    // 0x237b34: 0xc6770124  lwc1        $f23, 0x124($s3)
    ctx->pc = 0x237b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_237b38:
    // 0x237b38: 0xc6780128  lwc1        $f24, 0x128($s3)
    ctx->pc = 0x237b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_237b3c:
    // 0x237b3c: 0xc679012c  lwc1        $f25, 0x12C($s3)
    ctx->pc = 0x237b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_237b40:
    // 0x237b40: 0xc66f00b4  lwc1        $f15, 0xB4($s3)
    ctx->pc = 0x237b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_237b44:
    // 0x237b44: 0xc66e00b8  lwc1        $f14, 0xB8($s3)
    ctx->pc = 0x237b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_237b48:
    // 0x237b48: 0xc66d00bc  lwc1        $f13, 0xBC($s3)
    ctx->pc = 0x237b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_237b4c:
    // 0x237b4c: 0xc66c00c0  lwc1        $f12, 0xC0($s3)
    ctx->pc = 0x237b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_237b50:
    // 0x237b50: 0xc66b00c4  lwc1        $f11, 0xC4($s3)
    ctx->pc = 0x237b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_237b54:
    // 0x237b54: 0xc66a00c8  lwc1        $f10, 0xC8($s3)
    ctx->pc = 0x237b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_237b58:
    // 0x237b58: 0xc66900cc  lwc1        $f9, 0xCC($s3)
    ctx->pc = 0x237b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_237b5c:
    // 0x237b5c: 0xc66800d0  lwc1        $f8, 0xD0($s3)
    ctx->pc = 0x237b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_237b60:
    // 0x237b60: 0xc66700d4  lwc1        $f7, 0xD4($s3)
    ctx->pc = 0x237b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_237b64:
    // 0x237b64: 0xc66600d8  lwc1        $f6, 0xD8($s3)
    ctx->pc = 0x237b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_237b68:
    // 0x237b68: 0xc66500dc  lwc1        $f5, 0xDC($s3)
    ctx->pc = 0x237b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_237b6c:
    // 0x237b6c: 0xc66400e0  lwc1        $f4, 0xE0($s3)
    ctx->pc = 0x237b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_237b70:
    // 0x237b70: 0xc66300e4  lwc1        $f3, 0xE4($s3)
    ctx->pc = 0x237b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_237b74:
    // 0x237b74: 0xc66200e8  lwc1        $f2, 0xE8($s3)
    ctx->pc = 0x237b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_237b78:
    // 0x237b78: 0xc66100ec  lwc1        $f1, 0xEC($s3)
    ctx->pc = 0x237b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237b7c:
    // 0x237b7c: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x237b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237b80:
    // 0x237b80: 0xc7ba0210  lwc1        $f26, 0x210($sp)
    ctx->pc = 0x237b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_237b84:
    // 0x237b84: 0xc7bb0214  lwc1        $f27, 0x214($sp)
    ctx->pc = 0x237b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_237b88:
    // 0x237b88: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x237b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_237b8c:
    // 0x237b8c: 0xe7af01b4  swc1        $f15, 0x1B4($sp)
    ctx->pc = 0x237b8cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_237b90:
    // 0x237b90: 0xe7ae01b8  swc1        $f14, 0x1B8($sp)
    ctx->pc = 0x237b90u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_237b94:
    // 0x237b94: 0xe7ad01bc  swc1        $f13, 0x1BC($sp)
    ctx->pc = 0x237b94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_237b98:
    // 0x237b98: 0xe7ac01c0  swc1        $f12, 0x1C0($sp)
    ctx->pc = 0x237b98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_237b9c:
    // 0x237b9c: 0xe7ab01c4  swc1        $f11, 0x1C4($sp)
    ctx->pc = 0x237b9cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_237ba0:
    // 0x237ba0: 0xe7aa01c8  swc1        $f10, 0x1C8($sp)
    ctx->pc = 0x237ba0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_237ba4:
    // 0x237ba4: 0xe7a901cc  swc1        $f9, 0x1CC($sp)
    ctx->pc = 0x237ba4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_237ba8:
    // 0x237ba8: 0xe7a801d0  swc1        $f8, 0x1D0($sp)
    ctx->pc = 0x237ba8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_237bac:
    // 0x237bac: 0xe7a701d4  swc1        $f7, 0x1D4($sp)
    ctx->pc = 0x237bacu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_237bb0:
    // 0x237bb0: 0xe7a601d8  swc1        $f6, 0x1D8($sp)
    ctx->pc = 0x237bb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_237bb4:
    // 0x237bb4: 0xe7a501dc  swc1        $f5, 0x1DC($sp)
    ctx->pc = 0x237bb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_237bb8:
    // 0x237bb8: 0xe7a401e0  swc1        $f4, 0x1E0($sp)
    ctx->pc = 0x237bb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_237bbc:
    // 0x237bbc: 0xe7a301e4  swc1        $f3, 0x1E4($sp)
    ctx->pc = 0x237bbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_237bc0:
    // 0x237bc0: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x237bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_237bc4:
    // 0x237bc4: 0xe7a101ec  swc1        $f1, 0x1EC($sp)
    ctx->pc = 0x237bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_237bc8:
    // 0x237bc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x237bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_237bcc:
    // 0x237bcc: 0xc7bc0218  lwc1        $f28, 0x218($sp)
    ctx->pc = 0x237bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_237bd0:
    // 0x237bd0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x237bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_237bd4:
    // 0x237bd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_237bd8:
    if (ctx->pc == 0x237BD8u) {
        ctx->pc = 0x237BD8u;
            // 0x237bd8: 0x26700120  addiu       $s0, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->pc = 0x237BDCu;
        goto label_237bdc;
    }
    ctx->pc = 0x237BD4u;
    {
        const bool branch_taken_0x237bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BD4u;
            // 0x237bd8: 0x26700120  addiu       $s0, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bd4) {
            ctx->pc = 0x237BE8u;
            goto label_237be8;
        }
    }
    ctx->pc = 0x237BDCu;
label_237bdc:
    // 0x237bdc: 0x4600d687  neg.s       $f26, $f26
    ctx->pc = 0x237bdcu;
    ctx->f[26] = FPU_NEG_S(ctx->f[26]);
label_237be0:
    // 0x237be0: 0x4600dec7  neg.s       $f27, $f27
    ctx->pc = 0x237be0u;
    ctx->f[27] = FPU_NEG_S(ctx->f[27]);
label_237be4:
    // 0x237be4: 0x4600e707  neg.s       $f28, $f28
    ctx->pc = 0x237be4u;
    ctx->f[28] = FPU_NEG_S(ctx->f[28]);
label_237be8:
    // 0x237be8: 0x26710100  addiu       $s1, $s3, 0x100
    ctx->pc = 0x237be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_237bec:
    // 0x237bec: 0xc6650100  lwc1        $f5, 0x100($s3)
    ctx->pc = 0x237becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_237bf0:
    // 0x237bf0: 0xc7a40200  lwc1        $f4, 0x200($sp)
    ctx->pc = 0x237bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_237bf4:
    // 0x237bf4: 0xc6610108  lwc1        $f1, 0x108($s3)
    ctx->pc = 0x237bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237bf8:
    // 0x237bf8: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x237bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237bfc:
    // 0x237bfc: 0x46042981  sub.s       $f6, $f5, $f4
    ctx->pc = 0x237bfcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_237c00:
    // 0x237c00: 0xc6630104  lwc1        $f3, 0x104($s3)
    ctx->pc = 0x237c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_237c04:
    // 0x237c04: 0xc7a20204  lwc1        $f2, 0x204($sp)
    ctx->pc = 0x237c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_237c08:
    // 0x237c08: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x237c08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_237c0c:
    // 0x237c0c: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x237c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
label_237c10:
    // 0x237c10: 0x46021941  sub.s       $f5, $f3, $f2
    ctx->pc = 0x237c10u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_237c14:
    // 0x237c14: 0x4604d81a  mula.s      $f27, $f4
    ctx->pc = 0x237c14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[27], ctx->f[4]);
label_237c18:
    // 0x237c18: 0x4605e0dd  msub.s      $f3, $f28, $f5
    ctx->pc = 0x237c18u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[5]));
label_237c1c:
    // 0x237c1c: 0x4606e01a  mula.s      $f28, $f6
    ctx->pc = 0x237c1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[6]);
label_237c20:
    // 0x237c20: 0x4604d05d  msub.s      $f1, $f26, $f4
    ctx->pc = 0x237c20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[4]));
label_237c24:
    // 0x237c24: 0x4605d01a  mula.s      $f26, $f5
    ctx->pc = 0x237c24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[5]);
label_237c28:
    // 0x237c28: 0x4606d81d  msub.s      $f0, $f27, $f6
    ctx->pc = 0x237c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[6]));
label_237c2c:
    // 0x237c2c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x237c2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_237c30:
    // 0x237c30: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x237c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_237c34:
    // 0x237c34: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x237c34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_237c38:
    // 0x237c38: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x237c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_237c3c:
    // 0x237c3c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x237c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_237c40:
    // 0x237c40: 0x0  nop
    ctx->pc = 0x237c40u;
    // NOP
label_237c44:
    // 0x237c44: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x237c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_237c48:
    // 0x237c48: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x237c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_237c4c:
    // 0x237c4c: 0x460007c4  c1          0x7C4
    ctx->pc = 0x237c4cu;
    ctx->f[31] = FPU_SQRT_S(ctx->f[0]);
label_237c50:
    // 0x237c50: 0x4605d81a  mula.s      $f27, $f5
    ctx->pc = 0x237c50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[27], ctx->f[5]);
label_237c54:
    // 0x237c54: 0x4606d01e  madda.s     $f26, $f6
    ctx->pc = 0x237c54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[6]));
label_237c58:
    // 0x237c58: 0x4604e05c  madd.s      $f1, $f28, $f4
    ctx->pc = 0x237c58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[4]));
label_237c5c:
    // 0x237c5c: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x237c5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_237c60:
    // 0x237c60: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x237c60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_237c64:
    // 0x237c64: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x237c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_237c68:
    // 0x237c68: 0x460000c4  c1          0xC4
    ctx->pc = 0x237c68u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
label_237c6c:
    // 0x237c6c: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x237c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
label_237c70:
    // 0x237c70: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x237c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
label_237c74:
    // 0x237c74: 0x46030b03  div.s       $f12, $f1, $f3
    ctx->pc = 0x237c74u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[3];
label_237c78:
    // 0x237c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237c7c:
    // 0x237c7c: 0x0  nop
    ctx->pc = 0x237c7cu;
    // NOP
label_237c80:
    // 0x237c80: 0x4600f836  c.le.s      $f31, $f0
    ctx->pc = 0x237c80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[31], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_237c84:
    // 0x237c84: 0x0  nop
    ctx->pc = 0x237c84u;
    // NOP
label_237c88:
    // 0x237c88: 0x0  nop
    ctx->pc = 0x237c88u;
    // NOP
label_237c8c:
    // 0x237c8c: 0x450101bc  bc1t        . + 4 + (0x1BC << 2)
label_237c90:
    if (ctx->pc == 0x237C90u) {
        ctx->pc = 0x237C94u;
        goto label_237c94;
    }
    ctx->pc = 0x237C8Cu;
    {
        const bool branch_taken_0x237c8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237c8c) {
            ctx->pc = 0x238380u;
            goto label_238380;
        }
    }
    ctx->pc = 0x237C94u;
label_237c94:
    // 0x237c94: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x237c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_237c98:
    // 0x237c98: 0x3442f972  ori         $v0, $v0, 0xF972
    ctx->pc = 0x237c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63858);
label_237c9c:
    // 0x237c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237ca0:
    // 0x237ca0: 0x0  nop
    ctx->pc = 0x237ca0u;
    // NOP
label_237ca4:
    // 0x237ca4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x237ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_237ca8:
    // 0x237ca8: 0x450001b5  bc1f        . + 4 + (0x1B5 << 2)
label_237cac:
    if (ctx->pc == 0x237CACu) {
        ctx->pc = 0x237CB0u;
        goto label_237cb0;
    }
    ctx->pc = 0x237CA8u;
    {
        const bool branch_taken_0x237ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237ca8) {
            ctx->pc = 0x238380u;
            goto label_238380;
        }
    }
    ctx->pc = 0x237CB0u;
label_237cb0:
    // 0x237cb0: 0xc69e0004  lwc1        $f30, 0x4($s4)
    ctx->pc = 0x237cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_237cb4:
    // 0x237cb4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x237cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_237cb8:
    // 0x237cb8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x237cb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_237cbc:
    // 0x237cbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x237cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_237cc0:
    // 0x237cc0: 0x0  nop
    ctx->pc = 0x237cc0u;
    // NOP
label_237cc4:
    // 0x237cc4: 0x461e0842  mul.s       $f1, $f1, $f30
    ctx->pc = 0x237cc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[30]);
label_237cc8:
    // 0x237cc8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x237cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_237ccc:
    // 0x237ccc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x237cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_237cd0:
    // 0x237cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237cd4:
    // 0x237cd4: 0x0  nop
    ctx->pc = 0x237cd4u;
    // NOP
label_237cd8:
    // 0x237cd8: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x237cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_237cdc:
    // 0x237cdc: 0x46030743  div.s       $f29, $f0, $f3
    ctx->pc = 0x237cdcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[29] = ctx->f[0] / ctx->f[3];
label_237ce0:
    // 0x237ce0: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x237ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_237ce4:
    // 0x237ce4: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x237ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_237ce8:
    // 0x237ce8: 0x4602e836  c.le.s      $f29, $f2
    ctx->pc = 0x237ce8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[29], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_237cec:
    // 0x237cec: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x237cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_237cf0:
    // 0x237cf0: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x237cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_237cf4:
    // 0x237cf4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x237cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_237cf8:
    // 0x237cf8: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x237cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_237cfc:
    // 0x237cfc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_237d00:
    if (ctx->pc == 0x237D00u) {
        ctx->pc = 0x237D00u;
            // 0x237d00: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->pc = 0x237D04u;
        goto label_237d04;
    }
    ctx->pc = 0x237CFCu;
    {
        const bool branch_taken_0x237cfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x237D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CFCu;
            // 0x237d00: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cfc) {
            ctx->pc = 0x237D0Cu;
            goto label_237d0c;
        }
    }
    ctx->pc = 0x237D04u;
label_237d04:
    // 0x237d04: 0x10000003  b           . + 4 + (0x3 << 2)
label_237d08:
    if (ctx->pc == 0x237D08u) {
        ctx->pc = 0x237D08u;
            // 0x237d08: 0x46006045  abs.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_ABS_S(ctx->f[12]);
        ctx->pc = 0x237D0Cu;
        goto label_237d0c;
    }
    ctx->pc = 0x237D04u;
    {
        const bool branch_taken_0x237d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D04u;
            // 0x237d08: 0x46006045  abs.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_ABS_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d04) {
            ctx->pc = 0x237D14u;
            goto label_237d14;
        }
    }
    ctx->pc = 0x237D0Cu;
label_237d0c:
    // 0x237d0c: 0x46001746  mov.s       $f29, $f2
    ctx->pc = 0x237d0cu;
    ctx->f[29] = FPU_MOV_S(ctx->f[2]);
label_237d10:
    // 0x237d10: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x237d10u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
label_237d14:
    // 0x237d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_237d18:
    // 0x237d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d1c:
    // 0x237d1c: 0x0  nop
    ctx->pc = 0x237d1cu;
    // NOP
label_237d20:
    // 0x237d20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x237d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_237d24:
    // 0x237d24: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_237d28:
    if (ctx->pc == 0x237D28u) {
        ctx->pc = 0x237D2Cu;
        goto label_237d2c;
    }
    ctx->pc = 0x237D24u;
    {
        const bool branch_taken_0x237d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237d24) {
            ctx->pc = 0x237D64u;
            goto label_237d64;
        }
    }
    ctx->pc = 0x237D2Cu;
label_237d2c:
    // 0x237d2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d30:
    // 0x237d30: 0x0  nop
    ctx->pc = 0x237d30u;
    // NOP
label_237d34:
    // 0x237d34: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x237d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_237d38:
    // 0x237d38: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_237d3c:
    if (ctx->pc == 0x237D3Cu) {
        ctx->pc = 0x237D3Cu;
            // 0x237d3c: 0x3c02bfc9  lui         $v0, 0xBFC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
        ctx->pc = 0x237D40u;
        goto label_237d40;
    }
    ctx->pc = 0x237D38u;
    {
        const bool branch_taken_0x237d38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237d38) {
            ctx->pc = 0x237D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237D38u;
            // 0x237d3c: 0x3c02bfc9  lui         $v0, 0xBFC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237D54u;
            goto label_237d54;
        }
    }
    ctx->pc = 0x237D40u;
label_237d40:
    // 0x237d40: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x237d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_237d44:
    // 0x237d44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x237d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_237d48:
    // 0x237d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d4c:
    // 0x237d4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_237d50:
    if (ctx->pc == 0x237D50u) {
        ctx->pc = 0x237D54u;
        goto label_237d54;
    }
    ctx->pc = 0x237D4Cu;
    {
        const bool branch_taken_0x237d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237d4c) {
            ctx->pc = 0x237D5Cu;
            goto label_237d5c;
        }
    }
    ctx->pc = 0x237D54u;
label_237d54:
    // 0x237d54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x237d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_237d58:
    // 0x237d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d5c:
    // 0x237d5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_237d60:
    if (ctx->pc == 0x237D60u) {
        ctx->pc = 0x237D60u;
            // 0x237d60: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x237D64u;
        goto label_237d64;
    }
    ctx->pc = 0x237D5Cu;
    {
        const bool branch_taken_0x237d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D5Cu;
            // 0x237d60: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d5c) {
            ctx->pc = 0x237D70u;
            goto label_237d70;
        }
    }
    ctx->pc = 0x237D64u;
label_237d64:
    // 0x237d64: 0xc047804  jal         func_11E010
label_237d68:
    if (ctx->pc == 0x237D68u) {
        ctx->pc = 0x237D6Cu;
        goto label_237d6c;
    }
    ctx->pc = 0x237D64u;
    SET_GPR_U32(ctx, 31, 0x237D6Cu);
    ctx->pc = 0x11E010u;
    if (runtime->hasFunction(0x11E010u)) {
        auto targetFn = runtime->lookupFunction(0x11E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D6Cu; }
        if (ctx->pc != 0x237D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E010_0x11e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D6Cu; }
        if (ctx->pc != 0x237D6Cu) { return; }
    }
    ctx->pc = 0x237D6Cu;
label_237d6c:
    // 0x237d6c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x237d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_237d70:
    // 0x237d70: 0x4600e845  abs.s       $f1, $f29
    ctx->pc = 0x237d70u;
    ctx->f[1] = FPU_ABS_S(ctx->f[29]);
label_237d74:
    // 0x237d74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_237d78:
    // 0x237d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d7c:
    // 0x237d7c: 0x0  nop
    ctx->pc = 0x237d7cu;
    // NOP
label_237d80:
    // 0x237d80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x237d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_237d84:
    // 0x237d84: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_237d88:
    if (ctx->pc == 0x237D88u) {
        ctx->pc = 0x237D88u;
            // 0x237d88: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[29]);
        ctx->pc = 0x237D8Cu;
        goto label_237d8c;
    }
    ctx->pc = 0x237D84u;
    {
        const bool branch_taken_0x237d84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237d84) {
            ctx->pc = 0x237D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237D84u;
            // 0x237d88: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x237DC4u;
            goto label_237dc4;
        }
    }
    ctx->pc = 0x237D8Cu;
label_237d8c:
    // 0x237d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d90:
    // 0x237d90: 0x0  nop
    ctx->pc = 0x237d90u;
    // NOP
label_237d94:
    // 0x237d94: 0x4600e836  c.le.s      $f29, $f0
    ctx->pc = 0x237d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[29], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_237d98:
    // 0x237d98: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_237d9c:
    if (ctx->pc == 0x237D9Cu) {
        ctx->pc = 0x237D9Cu;
            // 0x237d9c: 0x3c02bfc9  lui         $v0, 0xBFC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
        ctx->pc = 0x237DA0u;
        goto label_237da0;
    }
    ctx->pc = 0x237D98u;
    {
        const bool branch_taken_0x237d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237d98) {
            ctx->pc = 0x237D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237D98u;
            // 0x237d9c: 0x3c02bfc9  lui         $v0, 0xBFC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237DB4u;
            goto label_237db4;
        }
    }
    ctx->pc = 0x237DA0u;
label_237da0:
    // 0x237da0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x237da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_237da4:
    // 0x237da4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x237da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_237da8:
    // 0x237da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237dac:
    // 0x237dac: 0x10000003  b           . + 4 + (0x3 << 2)
label_237db0:
    if (ctx->pc == 0x237DB0u) {
        ctx->pc = 0x237DB4u;
        goto label_237db4;
    }
    ctx->pc = 0x237DACu;
    {
        const bool branch_taken_0x237dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237dac) {
            ctx->pc = 0x237DBCu;
            goto label_237dbc;
        }
    }
    ctx->pc = 0x237DB4u;
label_237db4:
    // 0x237db4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x237db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_237db8:
    // 0x237db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237dbc:
    // 0x237dbc: 0x10000004  b           . + 4 + (0x4 << 2)
label_237dc0:
    if (ctx->pc == 0x237DC0u) {
        ctx->pc = 0x237DC0u;
            // 0x237dc0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x237DC4u;
        goto label_237dc4;
    }
    ctx->pc = 0x237DBCu;
    {
        const bool branch_taken_0x237dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237DBCu;
            // 0x237dc0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dbc) {
            ctx->pc = 0x237DD0u;
            goto label_237dd0;
        }
    }
    ctx->pc = 0x237DC4u;
label_237dc4:
    // 0x237dc4: 0xc047804  jal         func_11E010
label_237dc8:
    if (ctx->pc == 0x237DC8u) {
        ctx->pc = 0x237DCCu;
        goto label_237dcc;
    }
    ctx->pc = 0x237DC4u;
    SET_GPR_U32(ctx, 31, 0x237DCCu);
    ctx->pc = 0x11E010u;
    if (runtime->hasFunction(0x11E010u)) {
        auto targetFn = runtime->lookupFunction(0x11E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DCCu; }
        if (ctx->pc != 0x237DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E010_0x11e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DCCu; }
        if (ctx->pc != 0x237DCCu) { return; }
    }
    ctx->pc = 0x237DCCu;
label_237dcc:
    // 0x237dcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_237dd0:
    // 0x237dd0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x237dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_237dd4:
    // 0x237dd4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x237dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_237dd8:
    // 0x237dd8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x237dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_237ddc:
    // 0x237ddc: 0x461f2103  div.s       $f4, $f4, $f31
    ctx->pc = 0x237ddcu;
    if (ctx->f[31] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[31];
label_237de0:
    // 0x237de0: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x237de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237de4:
    // 0x237de4: 0xc7a301a0  lwc1        $f3, 0x1A0($sp)
    ctx->pc = 0x237de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_237de8:
    // 0x237de8: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x237de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_237dec:
    // 0x237dec: 0x46000f41  sub.s       $f29, $f1, $f0
    ctx->pc = 0x237decu;
    ctx->f[29] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_237df0:
    // 0x237df0: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x237df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237df4:
    // 0x237df4: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x237df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237df8:
    // 0x237df8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x237df8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_237dfc:
    // 0x237dfc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x237dfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_237e00:
    // 0x237e00: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x237e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_237e04:
    // 0x237e04: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x237e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_237e08:
    // 0x237e08: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x237e08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
label_237e0c:
    // 0x237e0c: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x237e0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_237e10:
    // 0x237e10: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x237e10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_237e14:
    // 0x237e14: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x237e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_237e18:
    // 0x237e18: 0xc0a3788  jal         func_28DE20
label_237e1c:
    if (ctx->pc == 0x237E1Cu) {
        ctx->pc = 0x237E1Cu;
            // 0x237e1c: 0xe7a001ac  swc1        $f0, 0x1AC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
        ctx->pc = 0x237E20u;
        goto label_237e20;
    }
    ctx->pc = 0x237E18u;
    SET_GPR_U32(ctx, 31, 0x237E20u);
    ctx->pc = 0x237E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237E18u;
            // 0x237e1c: 0xe7a001ac  swc1        $f0, 0x1AC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DE20u;
    if (runtime->hasFunction(0x28DE20u)) {
        auto targetFn = runtime->lookupFunction(0x28DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E20u; }
        if (ctx->pc != 0x237E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DE20_0x28de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E20u; }
        if (ctx->pc != 0x237E20u) { return; }
    }
    ctx->pc = 0x237E20u;
label_237e20:
    // 0x237e20: 0xc60b0008  lwc1        $f11, 0x8($s0)
    ctx->pc = 0x237e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_237e24:
    // 0x237e24: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x237e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_237e28:
    // 0x237e28: 0xc7aa0194  lwc1        $f10, 0x194($sp)
    ctx->pc = 0x237e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_237e2c:
    // 0x237e2c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x237e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_237e30:
    // 0x237e30: 0xc7ac0198  lwc1        $f12, 0x198($sp)
    ctx->pc = 0x237e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_237e34:
    // 0x237e34: 0x460b501a  mula.s      $f10, $f11
    ctx->pc = 0x237e34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
label_237e38:
    // 0x237e38: 0xc6080000  lwc1        $f8, 0x0($s0)
    ctx->pc = 0x237e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_237e3c:
    // 0x237e3c: 0x460d605d  msub.s      $f1, $f12, $f13
    ctx->pc = 0x237e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[13]));
label_237e40:
    // 0x237e40: 0xc7a70190  lwc1        $f7, 0x190($sp)
    ctx->pc = 0x237e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_237e44:
    // 0x237e44: 0x4608601a  mula.s      $f12, $f8
    ctx->pc = 0x237e44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
label_237e48:
    // 0x237e48: 0xc7a6019c  lwc1        $f6, 0x19C($sp)
    ctx->pc = 0x237e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_237e4c:
    // 0x237e4c: 0x460b391d  msub.s      $f4, $f7, $f11
    ctx->pc = 0x237e4cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[11]));
label_237e50:
    // 0x237e50: 0x460d381a  mula.s      $f7, $f13
    ctx->pc = 0x237e50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
label_237e54:
    // 0x237e54: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x237e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_237e58:
    // 0x237e58: 0x0  nop
    ctx->pc = 0x237e58u;
    // NOP
label_237e5c:
    // 0x237e5c: 0x4608509d  msub.s      $f2, $f10, $f8
    ctx->pc = 0x237e5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[8]));
label_237e60:
    // 0x237e60: 0x46014818  adda.s      $f9, $f1
    ctx->pc = 0x237e60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
label_237e64:
    // 0x237e64: 0x4608305c  madd.s      $f1, $f6, $f8
    ctx->pc = 0x237e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[8]));
label_237e68:
    // 0x237e68: 0x46044818  adda.s      $f9, $f4
    ctx->pc = 0x237e68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
label_237e6c:
    // 0x237e6c: 0x460d315c  madd.s      $f5, $f6, $f13
    ctx->pc = 0x237e6cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[13]));
label_237e70:
    // 0x237e70: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x237e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_237e74:
    // 0x237e74: 0x46024818  adda.s      $f9, $f2
    ctx->pc = 0x237e74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
label_237e78:
    // 0x237e78: 0x460b311c  madd.s      $f4, $f6, $f11
    ctx->pc = 0x237e78u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[11]));
label_237e7c:
    // 0x237e7c: 0x46094818  adda.s      $f9, $f9
    ctx->pc = 0x237e7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
label_237e80:
    // 0x237e80: 0x267000b0  addiu       $s0, $s3, 0xB0
    ctx->pc = 0x237e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_237e84:
    // 0x237e84: 0x4603309c  madd.s      $f2, $f6, $f3
    ctx->pc = 0x237e84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_237e88:
    // 0x237e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237e8c:
    // 0x237e8c: 0x46014818  adda.s      $f9, $f1
    ctx->pc = 0x237e8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
label_237e90:
    // 0x237e90: 0x4607185c  madd.s      $f1, $f3, $f7
    ctx->pc = 0x237e90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
label_237e94:
    // 0x237e94: 0x46054818  adda.s      $f9, $f5
    ctx->pc = 0x237e94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
label_237e98:
    // 0x237e98: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x237e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_237e9c:
    // 0x237e9c: 0x460a185c  madd.s      $f1, $f3, $f10
    ctx->pc = 0x237e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[10]));
label_237ea0:
    // 0x237ea0: 0x46044818  adda.s      $f9, $f4
    ctx->pc = 0x237ea0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
label_237ea4:
    // 0x237ea4: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x237ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_237ea8:
    // 0x237ea8: 0x460c185c  madd.s      $f1, $f3, $f12
    ctx->pc = 0x237ea8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[12]));
label_237eac:
    // 0x237eac: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x237eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237eb0:
    // 0x237eb0: 0x46024818  adda.s      $f9, $f2
    ctx->pc = 0x237eb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
label_237eb4:
    // 0x237eb4: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x237eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_237eb8:
    // 0x237eb8: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x237eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_237ebc:
    // 0x237ebc: 0x460d501a  mula.s      $f10, $f13
    ctx->pc = 0x237ebcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
label_237ec0:
    // 0x237ec0: 0x4608001e  madda.s     $f0, $f8
    ctx->pc = 0x237ec0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
label_237ec4:
    // 0x237ec4: 0xe7a1018c  swc1        $f1, 0x18C($sp)
    ctx->pc = 0x237ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_237ec8:
    // 0x237ec8: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x237ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_237ecc:
    // 0x237ecc: 0x460b605c  madd.s      $f1, $f12, $f11
    ctx->pc = 0x237eccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[11]));
label_237ed0:
    // 0x237ed0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x237ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_237ed4:
    // 0x237ed4: 0xc0a3830  jal         func_28E0C0
label_237ed8:
    if (ctx->pc == 0x237ED8u) {
        ctx->pc = 0x237ED8u;
            // 0x237ed8: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->pc = 0x237EDCu;
        goto label_237edc;
    }
    ctx->pc = 0x237ED4u;
    SET_GPR_U32(ctx, 31, 0x237EDCu);
    ctx->pc = 0x237ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237ED4u;
            // 0x237ed8: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EDCu; }
        if (ctx->pc != 0x237EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EDCu; }
        if (ctx->pc != 0x237EDCu) { return; }
    }
    ctx->pc = 0x237EDCu;
label_237edc:
    // 0x237edc: 0xc6680134  lwc1        $f8, 0x134($s3)
    ctx->pc = 0x237edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_237ee0:
    // 0x237ee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237ee4:
    // 0x237ee4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x237ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237ee8:
    // 0x237ee8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237eec:
    // 0x237eec: 0xc6690130  lwc1        $f9, 0x130($s3)
    ctx->pc = 0x237eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_237ef0:
    // 0x237ef0: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x237ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_237ef4:
    // 0x237ef4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x237ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237ef8:
    // 0x237ef8: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x237ef8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_237efc:
    // 0x237efc: 0xc6670138  lwc1        $f7, 0x138($s3)
    ctx->pc = 0x237efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_237f00:
    // 0x237f00: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x237f00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_237f04:
    // 0x237f04: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x237f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_237f08:
    // 0x237f08: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x237f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237f0c:
    // 0x237f0c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x237f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237f10:
    // 0x237f10: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x237f10u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_237f14:
    // 0x237f14: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x237f14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_237f18:
    // 0x237f18: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x237f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237f1c:
    // 0x237f1c: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x237f1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_237f20:
    // 0x237f20: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x237f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_237f24:
    // 0x237f24: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x237f24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_237f28:
    // 0x237f28: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x237f28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_237f2c:
    // 0x237f2c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x237f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237f30:
    // 0x237f30: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x237f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_237f34:
    // 0x237f34: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x237f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_237f38:
    // 0x237f38: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x237f38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_237f3c:
    // 0x237f3c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x237f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_237f40:
    // 0x237f40: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x237f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_237f44:
    // 0x237f44: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x237f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237f48:
    // 0x237f48: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x237f48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_237f4c:
    // 0x237f4c: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x237f4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_237f50:
    // 0x237f50: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x237f50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_237f54:
    // 0x237f54: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x237f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_237f58:
    // 0x237f58: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x237f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237f5c:
    // 0x237f5c: 0xe7a50140  swc1        $f5, 0x140($sp)
    ctx->pc = 0x237f5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_237f60:
    // 0x237f60: 0xe7a40144  swc1        $f4, 0x144($sp)
    ctx->pc = 0x237f60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_237f64:
    // 0x237f64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x237f64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_237f68:
    // 0x237f68: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x237f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_237f6c:
    // 0x237f6c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x237f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237f70:
    // 0x237f70: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x237f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_237f74:
    // 0x237f74: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x237f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_237f78:
    // 0x237f78: 0xc09241c  jal         func_249070
label_237f7c:
    if (ctx->pc == 0x237F7Cu) {
        ctx->pc = 0x237F7Cu;
            // 0x237f7c: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->pc = 0x237F80u;
        goto label_237f80;
    }
    ctx->pc = 0x237F78u;
    SET_GPR_U32(ctx, 31, 0x237F80u);
    ctx->pc = 0x237F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237F78u;
            // 0x237f7c: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x249070u;
    if (runtime->hasFunction(0x249070u)) {
        auto targetFn = runtime->lookupFunction(0x249070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F80u; }
        if (ctx->pc != 0x237F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249070_0x249070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F80u; }
        if (ctx->pc != 0x237F80u) { return; }
    }
    ctx->pc = 0x237F80u;
label_237f80:
    // 0x237f80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x237f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_237f84:
    // 0x237f84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237f88:
    // 0x237f88: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x237f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237f8c:
    // 0x237f8c: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x237f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_237f90:
    // 0x237f90: 0xc0408c8  jal         func_102320
label_237f94:
    if (ctx->pc == 0x237F94u) {
        ctx->pc = 0x237F94u;
            // 0x237f94: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->pc = 0x237F98u;
        goto label_237f98;
    }
    ctx->pc = 0x237F90u;
    SET_GPR_U32(ctx, 31, 0x237F98u);
    ctx->pc = 0x237F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237F90u;
            // 0x237f94: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F98u; }
        if (ctx->pc != 0x237F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F98u; }
        if (ctx->pc != 0x237F98u) { return; }
    }
    ctx->pc = 0x237F98u;
label_237f98:
    // 0x237f98: 0xc7a301a4  lwc1        $f3, 0x1A4($sp)
    ctx->pc = 0x237f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_237f9c:
    // 0x237f9c: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x237f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_237fa0:
    // 0x237fa0: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x237fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_237fa4:
    // 0x237fa4: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x237fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237fa8:
    // 0x237fa8: 0x461c181a  mula.s      $f3, $f28
    ctx->pc = 0x237fa8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[28]);
label_237fac:
    // 0x237fac: 0x461b089d  msub.s      $f2, $f1, $f27
    ctx->pc = 0x237facu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[27]));
label_237fb0:
    // 0x237fb0: 0x461a081a  mula.s      $f1, $f26
    ctx->pc = 0x237fb0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
label_237fb4:
    // 0x237fb4: 0x461c005d  msub.s      $f1, $f0, $f28
    ctx->pc = 0x237fb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[28]));
label_237fb8:
    // 0x237fb8: 0x461b001a  mula.s      $f0, $f27
    ctx->pc = 0x237fb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
label_237fbc:
    // 0x237fbc: 0x461a181d  msub.s      $f0, $f3, $f26
    ctx->pc = 0x237fbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[26]));
label_237fc0:
    // 0x237fc0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x237fc0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_237fc4:
    // 0x237fc4: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x237fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_237fc8:
    // 0x237fc8: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x237fc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_237fcc:
    // 0x237fcc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x237fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_237fd0:
    // 0x237fd0: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x237fd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_237fd4:
    // 0x237fd4: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x237fd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_237fd8:
    // 0x237fd8: 0xe7a20170  swc1        $f2, 0x170($sp)
    ctx->pc = 0x237fd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_237fdc:
    // 0x237fdc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_237fe0:
    if (ctx->pc == 0x237FE0u) {
        ctx->pc = 0x237FE0u;
            // 0x237fe0: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->pc = 0x237FE4u;
        goto label_237fe4;
    }
    ctx->pc = 0x237FDCu;
    {
        const bool branch_taken_0x237fdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x237FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237FDCu;
            // 0x237fe0: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fdc) {
            ctx->pc = 0x238008u;
            goto label_238008;
        }
    }
    ctx->pc = 0x237FE4u;
label_237fe4:
    // 0x237fe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_237fe8:
    // 0x237fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237fec:
    // 0x237fec: 0x0  nop
    ctx->pc = 0x237fecu;
    // NOP
label_237ff0:
    // 0x237ff0: 0x46010116  rsqrt.s     $f4, $f0, $f1
    ctx->pc = 0x237ff0u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[0]);
label_237ff4:
    // 0x237ff4: 0x0  nop
    ctx->pc = 0x237ff4u;
    // NOP
label_237ff8:
    // 0x237ff8: 0x0  nop
    ctx->pc = 0x237ff8u;
    // NOP
label_237ffc:
    // 0x237ffc: 0x10000002  b           . + 4 + (0x2 << 2)
label_238000:
    if (ctx->pc == 0x238000u) {
        ctx->pc = 0x238004u;
        goto label_238004;
    }
    ctx->pc = 0x237FFCu;
    {
        const bool branch_taken_0x237ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237ffc) {
            ctx->pc = 0x238008u;
            goto label_238008;
        }
    }
    ctx->pc = 0x238004u;
label_238004:
    // 0x238004: 0x0  nop
    ctx->pc = 0x238004u;
    // NOP
label_238008:
    // 0x238008: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x238008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_23800c:
    // 0x23800c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x23800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238010:
    // 0x238010: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x238010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_238014:
    // 0x238014: 0xc7a20174  lwc1        $f2, 0x174($sp)
    ctx->pc = 0x238014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238018:
    // 0x238018: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x238018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23801c:
    // 0x23801c: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x23801cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_238020:
    // 0x238020: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x238020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238024:
    // 0x238024: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x238024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_238028:
    // 0x238028: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x238028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_23802c:
    // 0x23802c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x23802cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_238030:
    // 0x238030: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x238030u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
label_238034:
    // 0x238034: 0xe7a30170  swc1        $f3, 0x170($sp)
    ctx->pc = 0x238034u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_238038:
    // 0x238038: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x238038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_23803c:
    // 0x23803c: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x23803cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_238040:
    // 0x238040: 0xc0a3788  jal         func_28DE20
label_238044:
    if (ctx->pc == 0x238044u) {
        ctx->pc = 0x238044u;
            // 0x238044: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->pc = 0x238048u;
        goto label_238048;
    }
    ctx->pc = 0x238040u;
    SET_GPR_U32(ctx, 31, 0x238048u);
    ctx->pc = 0x238044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238040u;
            // 0x238044: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DE20u;
    if (runtime->hasFunction(0x28DE20u)) {
        auto targetFn = runtime->lookupFunction(0x28DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238048u; }
        if (ctx->pc != 0x238048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DE20_0x28de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238048u; }
        if (ctx->pc != 0x238048u) { return; }
    }
    ctx->pc = 0x238048u;
label_238048:
    // 0x238048: 0xc7a80164  lwc1        $f8, 0x164($sp)
    ctx->pc = 0x238048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_23804c:
    // 0x23804c: 0x267100b0  addiu       $s1, $s3, 0xB0
    ctx->pc = 0x23804cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_238050:
    // 0x238050: 0xc7a90168  lwc1        $f9, 0x168($sp)
    ctx->pc = 0x238050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_238054:
    // 0x238054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238058:
    // 0x238058: 0xc7a60160  lwc1        $f6, 0x160($sp)
    ctx->pc = 0x238058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_23805c:
    // 0x23805c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x23805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_238060:
    // 0x238060: 0x4618401a  mula.s      $f8, $f24
    ctx->pc = 0x238060u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[24]);
label_238064:
    // 0x238064: 0x4617485d  msub.s      $f1, $f9, $f23
    ctx->pc = 0x238064u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[23]));
label_238068:
    // 0x238068: 0x4616481a  mula.s      $f9, $f22
    ctx->pc = 0x238068u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[22]);
label_23806c:
    // 0x23806c: 0x461830dd  msub.s      $f3, $f6, $f24
    ctx->pc = 0x23806cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[24]));
label_238070:
    // 0x238070: 0x4617301a  mula.s      $f6, $f23
    ctx->pc = 0x238070u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
label_238074:
    // 0x238074: 0xc7a5016c  lwc1        $f5, 0x16C($sp)
    ctx->pc = 0x238074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_238078:
    // 0x238078: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x238078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_23807c:
    // 0x23807c: 0x4616409d  msub.s      $f2, $f8, $f22
    ctx->pc = 0x23807cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[22]));
label_238080:
    // 0x238080: 0x46013818  adda.s      $f7, $f1
    ctx->pc = 0x238080u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_238084:
    // 0x238084: 0x4616285c  madd.s      $f1, $f5, $f22
    ctx->pc = 0x238084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[22]));
label_238088:
    // 0x238088: 0x46033818  adda.s      $f7, $f3
    ctx->pc = 0x238088u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
label_23808c:
    // 0x23808c: 0x4617291c  madd.s      $f4, $f5, $f23
    ctx->pc = 0x23808cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[23]));
label_238090:
    // 0x238090: 0x46023818  adda.s      $f7, $f2
    ctx->pc = 0x238090u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_238094:
    // 0x238094: 0x461828dc  madd.s      $f3, $f5, $f24
    ctx->pc = 0x238094u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[24]));
label_238098:
    // 0x238098: 0x46073818  adda.s      $f7, $f7
    ctx->pc = 0x238098u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_23809c:
    // 0x23809c: 0x4619289c  madd.s      $f2, $f5, $f25
    ctx->pc = 0x23809cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[25]));
label_2380a0:
    // 0x2380a0: 0x46013818  adda.s      $f7, $f1
    ctx->pc = 0x2380a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_2380a4:
    // 0x2380a4: 0x4606c85c  madd.s      $f1, $f25, $f6
    ctx->pc = 0x2380a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[6]));
label_2380a8:
    // 0x2380a8: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x2380a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
label_2380ac:
    // 0x2380ac: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x2380acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2380b0:
    // 0x2380b0: 0x4608c85c  madd.s      $f1, $f25, $f8
    ctx->pc = 0x2380b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[8]));
label_2380b4:
    // 0x2380b4: 0x46033818  adda.s      $f7, $f3
    ctx->pc = 0x2380b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
label_2380b8:
    // 0x2380b8: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x2380b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2380bc:
    // 0x2380bc: 0x4609c85c  madd.s      $f1, $f25, $f9
    ctx->pc = 0x2380bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[9]));
label_2380c0:
    // 0x2380c0: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2380c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2380c4:
    // 0x2380c4: 0x46023818  adda.s      $f7, $f2
    ctx->pc = 0x2380c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_2380c8:
    // 0x2380c8: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x2380c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2380cc:
    // 0x2380cc: 0x4605c85c  madd.s      $f1, $f25, $f5
    ctx->pc = 0x2380ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[5]));
label_2380d0:
    // 0x2380d0: 0x4617401a  mula.s      $f8, $f23
    ctx->pc = 0x2380d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[23]);
label_2380d4:
    // 0x2380d4: 0x4616001e  madda.s     $f0, $f22
    ctx->pc = 0x2380d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_2380d8:
    // 0x2380d8: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x2380d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_2380dc:
    // 0x2380dc: 0x46192802  mul.s       $f0, $f5, $f25
    ctx->pc = 0x2380dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[25]);
label_2380e0:
    // 0x2380e0: 0x4618485c  madd.s      $f1, $f9, $f24
    ctx->pc = 0x2380e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[24]));
label_2380e4:
    // 0x2380e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2380e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2380e8:
    // 0x2380e8: 0xc0a3830  jal         func_28E0C0
label_2380ec:
    if (ctx->pc == 0x2380ECu) {
        ctx->pc = 0x2380ECu;
            // 0x2380ec: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->pc = 0x2380F0u;
        goto label_2380f0;
    }
    ctx->pc = 0x2380E8u;
    SET_GPR_U32(ctx, 31, 0x2380F0u);
    ctx->pc = 0x2380ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2380E8u;
            // 0x2380ec: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380F0u; }
        if (ctx->pc != 0x2380F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380F0u; }
        if (ctx->pc != 0x2380F0u) { return; }
    }
    ctx->pc = 0x2380F0u;
label_2380f0:
    // 0x2380f0: 0xc6680134  lwc1        $f8, 0x134($s3)
    ctx->pc = 0x2380f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2380f4:
    // 0x2380f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2380f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2380f8:
    // 0x2380f8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2380f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2380fc:
    // 0x2380fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2380fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238100:
    // 0x238100: 0xc6690130  lwc1        $f9, 0x130($s3)
    ctx->pc = 0x238100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_238104:
    // 0x238104: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x238104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_238108:
    // 0x238108: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x238108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23810c:
    // 0x23810c: 0x26760130  addiu       $s6, $s3, 0x130
    ctx->pc = 0x23810cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
label_238110:
    // 0x238110: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x238110u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_238114:
    // 0x238114: 0x26700100  addiu       $s0, $s3, 0x100
    ctx->pc = 0x238114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_238118:
    // 0x238118: 0xc6670138  lwc1        $f7, 0x138($s3)
    ctx->pc = 0x238118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_23811c:
    // 0x23811c: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x23811cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_238120:
    // 0x238120: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x238120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238124:
    // 0x238124: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x238124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238128:
    // 0x238128: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x238128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23812c:
    // 0x23812c: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x23812cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_238130:
    // 0x238130: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x238130u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_238134:
    // 0x238134: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x238134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238138:
    // 0x238138: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x238138u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_23813c:
    // 0x23813c: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x23813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_238140:
    // 0x238140: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x238140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_238144:
    // 0x238144: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x238144u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_238148:
    // 0x238148: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x238148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23814c:
    // 0x23814c: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x23814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_238150:
    // 0x238150: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x238150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238154:
    // 0x238154: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x238154u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_238158:
    // 0x238158: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x238158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_23815c:
    // 0x23815c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x23815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_238160:
    // 0x238160: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x238160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238164:
    // 0x238164: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x238164u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_238168:
    // 0x238168: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x238168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_23816c:
    // 0x23816c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x23816cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_238170:
    // 0x238170: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x238170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_238174:
    // 0x238174: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x238174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238178:
    // 0x238178: 0xe7a50130  swc1        $f5, 0x130($sp)
    ctx->pc = 0x238178u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_23817c:
    // 0x23817c: 0xe7a40134  swc1        $f4, 0x134($sp)
    ctx->pc = 0x23817cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_238180:
    // 0x238180: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x238180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_238184:
    // 0x238184: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x238184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_238188:
    // 0x238188: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x238188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23818c:
    // 0x23818c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x23818cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_238190:
    // 0x238190: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x238190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_238194:
    // 0x238194: 0xc09241c  jal         func_249070
label_238198:
    if (ctx->pc == 0x238198u) {
        ctx->pc = 0x238198u;
            // 0x238198: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->pc = 0x23819Cu;
        goto label_23819c;
    }
    ctx->pc = 0x238194u;
    SET_GPR_U32(ctx, 31, 0x23819Cu);
    ctx->pc = 0x238198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238194u;
            // 0x238198: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x249070u;
    if (runtime->hasFunction(0x249070u)) {
        auto targetFn = runtime->lookupFunction(0x249070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23819Cu; }
        if (ctx->pc != 0x23819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249070_0x249070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23819Cu; }
        if (ctx->pc != 0x23819Cu) { return; }
    }
    ctx->pc = 0x23819Cu;
label_23819c:
    // 0x23819c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2381a0:
    // 0x2381a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2381a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2381a4:
    // 0x2381a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2381a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2381a8:
    // 0x2381a8: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x2381a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2381ac:
    // 0x2381ac: 0xc0408c8  jal         func_102320
label_2381b0:
    if (ctx->pc == 0x2381B0u) {
        ctx->pc = 0x2381B0u;
            // 0x2381b0: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->pc = 0x2381B4u;
        goto label_2381b4;
    }
    ctx->pc = 0x2381ACu;
    SET_GPR_U32(ctx, 31, 0x2381B4u);
    ctx->pc = 0x2381B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2381ACu;
            // 0x2381b0: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381B4u; }
        if (ctx->pc != 0x2381B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381B4u; }
        if (ctx->pc != 0x2381B4u) { return; }
    }
    ctx->pc = 0x2381B4u;
label_2381b4:
    // 0x2381b4: 0xc7a80168  lwc1        $f8, 0x168($sp)
    ctx->pc = 0x2381b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2381b8:
    // 0x2381b8: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x2381b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_2381bc:
    // 0x2381bc: 0xc7a90164  lwc1        $f9, 0x164($sp)
    ctx->pc = 0x2381bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2381c0:
    // 0x2381c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2381c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2381c4:
    // 0x2381c4: 0xc7a60160  lwc1        $f6, 0x160($sp)
    ctx->pc = 0x2381c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2381c8:
    // 0x2381c8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2381c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2381cc:
    // 0x2381cc: 0x4608b81a  mula.s      $f23, $f8
    ctx->pc = 0x2381ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[8]);
label_2381d0:
    // 0x2381d0: 0x4609c05d  msub.s      $f1, $f24, $f9
    ctx->pc = 0x2381d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[9]));
label_2381d4:
    // 0x2381d4: 0x4606c01a  mula.s      $f24, $f6
    ctx->pc = 0x2381d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[24], ctx->f[6]);
label_2381d8:
    // 0x2381d8: 0x4608b0dd  msub.s      $f3, $f22, $f8
    ctx->pc = 0x2381d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[8]));
label_2381dc:
    // 0x2381dc: 0x4609b01a  mula.s      $f22, $f9
    ctx->pc = 0x2381dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[9]);
label_2381e0:
    // 0x2381e0: 0x4606b89d  msub.s      $f2, $f23, $f6
    ctx->pc = 0x2381e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[6]));
label_2381e4:
    // 0x2381e4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2381e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_2381e8:
    // 0x2381e8: 0xc7a5016c  lwc1        $f5, 0x16C($sp)
    ctx->pc = 0x2381e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2381ec:
    // 0x2381ec: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x2381ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2381f0:
    // 0x2381f0: 0x46013818  adda.s      $f7, $f1
    ctx->pc = 0x2381f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_2381f4:
    // 0x2381f4: 0x4616285c  madd.s      $f1, $f5, $f22
    ctx->pc = 0x2381f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[22]));
label_2381f8:
    // 0x2381f8: 0x46033818  adda.s      $f7, $f3
    ctx->pc = 0x2381f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
label_2381fc:
    // 0x2381fc: 0x4617291c  madd.s      $f4, $f5, $f23
    ctx->pc = 0x2381fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[23]));
label_238200:
    // 0x238200: 0xe7a30154  swc1        $f3, 0x154($sp)
    ctx->pc = 0x238200u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_238204:
    // 0x238204: 0x46023818  adda.s      $f7, $f2
    ctx->pc = 0x238204u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_238208:
    // 0x238208: 0x461828dc  madd.s      $f3, $f5, $f24
    ctx->pc = 0x238208u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[24]));
label_23820c:
    // 0x23820c: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x23820cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_238210:
    // 0x238210: 0x46073818  adda.s      $f7, $f7
    ctx->pc = 0x238210u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_238214:
    // 0x238214: 0x4619289c  madd.s      $f2, $f5, $f25
    ctx->pc = 0x238214u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[25]));
label_238218:
    // 0x238218: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x238218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_23821c:
    // 0x23821c: 0x46013818  adda.s      $f7, $f1
    ctx->pc = 0x23821cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_238220:
    // 0x238220: 0x4606c85d  msub.s      $f1, $f25, $f6
    ctx->pc = 0x238220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[6]));
label_238224:
    // 0x238224: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x238224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_238228:
    // 0x238228: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x238228u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
label_23822c:
    // 0x23822c: 0x4609c85d  msub.s      $f1, $f25, $f9
    ctx->pc = 0x23822cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[9]));
label_238230:
    // 0x238230: 0xe7a40154  swc1        $f4, 0x154($sp)
    ctx->pc = 0x238230u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_238234:
    // 0x238234: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x238234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_238238:
    // 0x238238: 0x46033818  adda.s      $f7, $f3
    ctx->pc = 0x238238u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
label_23823c:
    // 0x23823c: 0x4608c85d  msub.s      $f1, $f25, $f8
    ctx->pc = 0x23823cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[8]));
label_238240:
    // 0x238240: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x238240u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_238244:
    // 0x238244: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x238244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238248:
    // 0x238248: 0x46023818  adda.s      $f7, $f2
    ctx->pc = 0x238248u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_23824c:
    // 0x23824c: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x23824cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_238250:
    // 0x238250: 0x4605c85d  msub.s      $f1, $f25, $f5
    ctx->pc = 0x238250u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[5]));
label_238254:
    // 0x238254: 0x4617481a  mula.s      $f9, $f23
    ctx->pc = 0x238254u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[23]);
label_238258:
    // 0x238258: 0x4616001e  madda.s     $f0, $f22
    ctx->pc = 0x238258u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_23825c:
    // 0x23825c: 0xe7a2015c  swc1        $f2, 0x15C($sp)
    ctx->pc = 0x23825cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_238260:
    // 0x238260: 0x4618401e  madda.s     $f8, $f24
    ctx->pc = 0x238260u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[24]));
label_238264:
    // 0x238264: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x238264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_238268:
    // 0x238268: 0x4619281c  madd.s      $f0, $f5, $f25
    ctx->pc = 0x238268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[25]));
label_23826c:
    // 0x23826c: 0xc0a3830  jal         func_28E0C0
label_238270:
    if (ctx->pc == 0x238270u) {
        ctx->pc = 0x238270u;
            // 0x238270: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->pc = 0x238274u;
        goto label_238274;
    }
    ctx->pc = 0x23826Cu;
    SET_GPR_U32(ctx, 31, 0x238274u);
    ctx->pc = 0x238270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23826Cu;
            // 0x238270: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238274u; }
        if (ctx->pc != 0x238274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238274u; }
        if (ctx->pc != 0x238274u) { return; }
    }
    ctx->pc = 0x238274u;
label_238274:
    // 0x238274: 0xc6c80004  lwc1        $f8, 0x4($s6)
    ctx->pc = 0x238274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_238278:
    // 0x238278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x238278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23827c:
    // 0x23827c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x23827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238280:
    // 0x238280: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x238280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238284:
    // 0x238284: 0xc6c90000  lwc1        $f9, 0x0($s6)
    ctx->pc = 0x238284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_238288:
    // 0x238288: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x238288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_23828c:
    // 0x23828c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x23828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238290:
    // 0x238290: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x238290u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_238294:
    // 0x238294: 0xc6c70008  lwc1        $f7, 0x8($s6)
    ctx->pc = 0x238294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_238298:
    // 0x238298: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x238298u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_23829c:
    // 0x23829c: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x23829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2382a0:
    // 0x2382a0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2382a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2382a4:
    // 0x2382a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2382a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2382a8:
    // 0x2382a8: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x2382a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_2382ac:
    // 0x2382ac: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x2382acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_2382b0:
    // 0x2382b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2382b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2382b4:
    // 0x2382b4: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x2382b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_2382b8:
    // 0x2382b8: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x2382b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2382bc:
    // 0x2382bc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2382bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2382c0:
    // 0x2382c0: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x2382c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_2382c4:
    // 0x2382c4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2382c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2382c8:
    // 0x2382c8: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x2382c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2382cc:
    // 0x2382cc: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2382ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2382d0:
    // 0x2382d0: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x2382d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_2382d4:
    // 0x2382d4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2382d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2382d8:
    // 0x2382d8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2382d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_2382dc:
    // 0x2382dc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2382dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2382e0:
    // 0x2382e0: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x2382e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_2382e4:
    // 0x2382e4: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x2382e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_2382e8:
    // 0x2382e8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2382e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2382ec:
    // 0x2382ec: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2382ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_2382f0:
    // 0x2382f0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2382f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2382f4:
    // 0x2382f4: 0xe7a50120  swc1        $f5, 0x120($sp)
    ctx->pc = 0x2382f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2382f8:
    // 0x2382f8: 0xe7a40124  swc1        $f4, 0x124($sp)
    ctx->pc = 0x2382f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_2382fc:
    // 0x2382fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2382fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_238300:
    // 0x238300: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x238300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_238304:
    // 0x238304: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x238304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238308:
    // 0x238308: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x238308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_23830c:
    // 0x23830c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x23830cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_238310:
    // 0x238310: 0xc09241c  jal         func_249070
label_238314:
    if (ctx->pc == 0x238314u) {
        ctx->pc = 0x238314u;
            // 0x238314: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->pc = 0x238318u;
        goto label_238318;
    }
    ctx->pc = 0x238310u;
    SET_GPR_U32(ctx, 31, 0x238318u);
    ctx->pc = 0x238314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238310u;
            // 0x238314: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x249070u;
    if (runtime->hasFunction(0x249070u)) {
        auto targetFn = runtime->lookupFunction(0x249070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238318u; }
        if (ctx->pc != 0x238318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249070_0x249070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238318u; }
        if (ctx->pc != 0x238318u) { return; }
    }
    ctx->pc = 0x238318u;
label_238318:
    // 0x238318: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x238318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23831c:
    // 0x23831c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23831cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238320:
    // 0x238320: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x238320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238324:
    // 0x238324: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x238324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_238328:
    // 0x238328: 0xc0408c8  jal         func_102320
label_23832c:
    if (ctx->pc == 0x23832Cu) {
        ctx->pc = 0x23832Cu;
            // 0x23832c: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->pc = 0x238330u;
        goto label_238330;
    }
    ctx->pc = 0x238328u;
    SET_GPR_U32(ctx, 31, 0x238330u);
    ctx->pc = 0x23832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238328u;
            // 0x23832c: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238330u; }
        if (ctx->pc != 0x238330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238330u; }
        if (ctx->pc != 0x238330u) { return; }
    }
    ctx->pc = 0x238330u;
label_238330:
    // 0x238330: 0xe69e0004  swc1        $f30, 0x4($s4)
    ctx->pc = 0x238330u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_238334:
    // 0x238334: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x238334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_238338:
    // 0x238338: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_23833c:
    // 0x23833c: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x23833cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_238340:
    // 0x238340: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x238340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_238344:
    // 0x238344: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x238344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_238348:
    // 0x238348: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x238348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_23834c:
    // 0x23834c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x23834cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_238350:
    // 0x238350: 0x320f809  jalr        $t9
label_238354:
    if (ctx->pc == 0x238354u) {
        ctx->pc = 0x238354u;
            // 0x238354: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x238358u;
        goto label_238358;
    }
    ctx->pc = 0x238350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x238358u);
        ctx->pc = 0x238354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238350u;
            // 0x238354: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238358u; }
            if (ctx->pc != 0x238358u) { return; }
        }
        }
    }
    ctx->pc = 0x238358u;
label_238358:
    // 0x238358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x238358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23835c:
    // 0x23835c: 0xc09241c  jal         func_249070
label_238360:
    if (ctx->pc == 0x238360u) {
        ctx->pc = 0x238360u;
            // 0x238360: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238364u;
        goto label_238364;
    }
    ctx->pc = 0x23835Cu;
    SET_GPR_U32(ctx, 31, 0x238364u);
    ctx->pc = 0x238360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23835Cu;
            // 0x238360: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249070u;
    if (runtime->hasFunction(0x249070u)) {
        auto targetFn = runtime->lookupFunction(0x249070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238364u; }
        if (ctx->pc != 0x238364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249070_0x249070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238364u; }
        if (ctx->pc != 0x238364u) { return; }
    }
    ctx->pc = 0x238364u;
label_238364:
    // 0x238364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x238364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238368:
    // 0x238368: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x238368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23836c:
    // 0x23836c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23836cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238370:
    // 0x238370: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x238370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_238374:
    // 0x238374: 0xc0408c8  jal         func_102320
label_238378:
    if (ctx->pc == 0x238378u) {
        ctx->pc = 0x238378u;
            // 0x238378: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->pc = 0x23837Cu;
        goto label_23837c;
    }
    ctx->pc = 0x238374u;
    SET_GPR_U32(ctx, 31, 0x23837Cu);
    ctx->pc = 0x238378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238374u;
            // 0x238378: 0x27b93260  addiu       $t9, $sp, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23837Cu; }
        if (ctx->pc != 0x23837Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23837Cu; }
        if (ctx->pc != 0x23837Cu) { return; }
    }
    ctx->pc = 0x23837Cu;
label_23837c:
    // 0x23837c: 0x0  nop
    ctx->pc = 0x23837cu;
    // NOP
label_238380:
    // 0x238380: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x238380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_238384:
    // 0x238384: 0x8c43ea20  lw          $v1, -0x15E0($v0)
    ctx->pc = 0x238384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961696)));
label_238388:
    // 0x238388: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x238388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23838c:
    // 0x23838c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238390:
    // 0x238390: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_238394:
    if (ctx->pc == 0x238394u) {
        ctx->pc = 0x238398u;
        goto label_238398;
    }
    ctx->pc = 0x238390u;
    {
        const bool branch_taken_0x238390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238390) {
            ctx->pc = 0x2383ACu;
            goto label_2383ac;
        }
    }
    ctx->pc = 0x238398u;
label_238398:
    // 0x238398: 0x27a43250  addiu       $a0, $sp, 0x3250
    ctx->pc = 0x238398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
label_23839c:
    // 0x23839c: 0xc0a745c  jal         func_29D170
label_2383a0:
    if (ctx->pc == 0x2383A0u) {
        ctx->pc = 0x2383A0u;
            // 0x2383a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2383A4u;
        goto label_2383a4;
    }
    ctx->pc = 0x23839Cu;
    SET_GPR_U32(ctx, 31, 0x2383A4u);
    ctx->pc = 0x2383A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23839Cu;
            // 0x2383a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D170u;
    if (runtime->hasFunction(0x29D170u)) {
        auto targetFn = runtime->lookupFunction(0x29D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383A4u; }
        if (ctx->pc != 0x2383A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D170_0x29d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383A4u; }
        if (ctx->pc != 0x2383A4u) { return; }
    }
    ctx->pc = 0x2383A4u;
label_2383a4:
    // 0x2383a4: 0x10000016  b           . + 4 + (0x16 << 2)
label_2383a8:
    if (ctx->pc == 0x2383A8u) {
        ctx->pc = 0x2383A8u;
            // 0x2383a8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x2383ACu;
        goto label_2383ac;
    }
    ctx->pc = 0x2383A4u;
    {
        const bool branch_taken_0x2383a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383A4u;
            // 0x2383a8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383a4) {
            ctx->pc = 0x238400u;
            goto label_238400;
        }
    }
    ctx->pc = 0x2383ACu;
label_2383ac:
    // 0x2383ac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2383acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2383b0:
    // 0x2383b0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2383b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2383b4:
    // 0x2383b4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2383b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2383b8:
    // 0x2383b8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2383b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_2383bc:
    // 0x2383bc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2383bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2383c0:
    // 0x2383c0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2383c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2383c4:
    // 0x2383c4: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2383c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2383c8:
    // 0x2383c8: 0x1440fdad  bnez        $v0, . + 4 + (-0x253 << 2)
label_2383cc:
    if (ctx->pc == 0x2383CCu) {
        ctx->pc = 0x2383D0u;
        goto label_2383d0;
    }
    ctx->pc = 0x2383C8u;
    {
        const bool branch_taken_0x2383c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2383c8) {
            ctx->pc = 0x237A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237a80;
        }
    }
    ctx->pc = 0x2383D0u;
label_2383d0:
    // 0x2383d0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2383d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2383d4:
    // 0x2383d4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2383d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2383d8:
    // 0x2383d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2383d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2383dc:
    // 0x2383dc: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2383dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_2383e0:
    // 0x2383e0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2383e4:
    // 0x2383e4: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x2383e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2383e8:
    // 0x2383e8: 0x5440fd98  bnel        $v0, $zero, . + 4 + (-0x268 << 2)
label_2383ec:
    if (ctx->pc == 0x2383ECu) {
        ctx->pc = 0x2383ECu;
            // 0x2383ec: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->pc = 0x2383F0u;
        goto label_2383f0;
    }
    ctx->pc = 0x2383E8u;
    {
        const bool branch_taken_0x2383e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2383e8) {
            ctx->pc = 0x2383ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2383E8u;
            // 0x2383ec: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237a4c;
        }
    }
    ctx->pc = 0x2383F0u;
label_2383f0:
    // 0x2383f0: 0x27a43250  addiu       $a0, $sp, 0x3250
    ctx->pc = 0x2383f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
label_2383f4:
    // 0x2383f4: 0xc0a745c  jal         func_29D170
label_2383f8:
    if (ctx->pc == 0x2383F8u) {
        ctx->pc = 0x2383F8u;
            // 0x2383f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2383FCu;
        goto label_2383fc;
    }
    ctx->pc = 0x2383F4u;
    SET_GPR_U32(ctx, 31, 0x2383FCu);
    ctx->pc = 0x2383F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2383F4u;
            // 0x2383f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D170u;
    if (runtime->hasFunction(0x29D170u)) {
        auto targetFn = runtime->lookupFunction(0x29D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383FCu; }
        if (ctx->pc != 0x2383FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D170_0x29d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383FCu; }
        if (ctx->pc != 0x2383FCu) { return; }
    }
    ctx->pc = 0x2383FCu;
label_2383fc:
    // 0x2383fc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2383fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_238400:
    // 0x238400: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x238400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_238404:
    // 0x238404: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x238404u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_238408:
    // 0x238408: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x238408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_23840c:
    // 0x23840c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x23840cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_238410:
    // 0x238410: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x238410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_238414:
    // 0x238414: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x238414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_238418:
    // 0x238418: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x238418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_23841c:
    // 0x23841c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x23841cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_238420:
    // 0x238420: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x238420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_238424:
    // 0x238424: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x238424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_238428:
    // 0x238428: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x238428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_23842c:
    // 0x23842c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x23842cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_238430:
    // 0x238430: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x238430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_238434:
    // 0x238434: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x238434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_238438:
    // 0x238438: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x238438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_23843c:
    // 0x23843c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x23843cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_238440:
    // 0x238440: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x238440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_238444:
    // 0x238444: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x238444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_238448:
    // 0x238448: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x238448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_23844c:
    // 0x23844c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x23844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_238450:
    // 0x238450: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x238450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238454:
    // 0x238454: 0x3e00008  jr          $ra
label_238458:
    if (ctx->pc == 0x238458u) {
        ctx->pc = 0x238458u;
            // 0x238458: 0x27bd3270  addiu       $sp, $sp, 0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12912));
        ctx->pc = 0x23845Cu;
        goto label_23845c;
    }
    ctx->pc = 0x238454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238454u;
            // 0x238458: 0x27bd3270  addiu       $sp, $sp, 0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23845Cu;
label_23845c:
    // 0x23845c: 0x0  nop
    ctx->pc = 0x23845cu;
    // NOP
label_238460:
    // 0x238460: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x238460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_238464:
    // 0x238464: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x238464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_238468:
    // 0x238468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23846c:
    // 0x23846c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_238470:
    // 0x238470: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x238470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_238474:
    // 0x238474: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x238474u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238478:
    // 0x238478: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x238478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23847c:
    // 0x23847c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_238480:
    // 0x238480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_238484:
    // 0x238484: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x238484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238488:
    // 0x238488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23848c:
    // 0x23848c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23848cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_238490:
    // 0x238490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238494:
    // 0x238494: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x238494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_238498:
    // 0x238498: 0x8ce30084  lw          $v1, 0x84($a3)
    ctx->pc = 0x238498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
label_23849c:
    // 0x23849c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x23849cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2384a0:
    // 0x2384a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2384a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2384a4:
    // 0x2384a4: 0xace30084  sw          $v1, 0x84($a3)
    ctx->pc = 0x2384a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 3));
label_2384a8:
    // 0x2384a8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2384a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2384ac:
    // 0x2384ac: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x2384acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2384b0:
    // 0x2384b0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2384b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2384b4:
    // 0x2384b4: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2384b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2384b8:
    // 0x2384b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2384b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2384bc:
    // 0x2384bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2384bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2384c0:
    // 0x2384c0: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2384c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2384c4:
    // 0x2384c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2384c8:
    if (ctx->pc == 0x2384C8u) {
        ctx->pc = 0x2384C8u;
            // 0x2384c8: 0xe7a10088  swc1        $f1, 0x88($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x2384CCu;
        goto label_2384cc;
    }
    ctx->pc = 0x2384C4u;
    {
        const bool branch_taken_0x2384c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2384C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2384C4u;
            // 0x2384c8: 0xe7a10088  swc1        $f1, 0x88($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384c4) {
            ctx->pc = 0x2384D4u;
            goto label_2384d4;
        }
    }
    ctx->pc = 0x2384CCu;
label_2384cc:
    // 0x2384cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2384d0:
    if (ctx->pc == 0x2384D0u) {
        ctx->pc = 0x2384D0u;
            // 0x2384d0: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x2384D4u;
        goto label_2384d4;
    }
    ctx->pc = 0x2384CCu;
    {
        const bool branch_taken_0x2384cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2384CCu;
            // 0x2384d0: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384cc) {
            ctx->pc = 0x2384E8u;
            goto label_2384e8;
        }
    }
    ctx->pc = 0x2384D4u;
label_2384d4:
    // 0x2384d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2384d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2384d8:
    // 0x2384d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2384d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2384dc:
    // 0x2384dc: 0x0  nop
    ctx->pc = 0x2384dcu;
    // NOP
label_2384e0:
    // 0x2384e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2384e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_2384e4:
    // 0x2384e4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2384e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2384e8:
    // 0x2384e8: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2384e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2384ec:
    // 0x2384ec: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x2384ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2384f0:
    // 0x2384f0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2384f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2384f4:
    // 0x2384f4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2384f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2384f8:
    // 0x2384f8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2384f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2384fc:
    // 0x2384fc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2384fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_238500:
    // 0x238500: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x238500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238504:
    // 0x238504: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x238504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_238508:
    // 0x238508: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x238508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23850c:
    // 0x23850c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_238510:
    if (ctx->pc == 0x238510u) {
        ctx->pc = 0x238510u;
            // 0x238510: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->pc = 0x238514u;
        goto label_238514;
    }
    ctx->pc = 0x23850Cu;
    {
        const bool branch_taken_0x23850c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23850Cu;
            // 0x238510: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23850c) {
            ctx->pc = 0x23855Cu;
            goto label_23855c;
        }
    }
    ctx->pc = 0x238514u;
label_238514:
    // 0x238514: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_238518:
    if (ctx->pc == 0x238518u) {
        ctx->pc = 0x238518u;
            // 0x238518: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23851Cu;
        goto label_23851c;
    }
    ctx->pc = 0x238514u;
    {
        const bool branch_taken_0x238514 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x238518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238514u;
            // 0x238518: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238514) {
            ctx->pc = 0x238548u;
            goto label_238548;
        }
    }
    ctx->pc = 0x23851Cu;
label_23851c:
    // 0x23851c: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x23851cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238520:
    // 0x238520: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x238520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_238524:
    // 0x238524: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x238524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_238528:
    // 0x238528: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x238528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23852c:
    // 0x23852c: 0xc0a3f04  jal         func_28FC10
label_238530:
    if (ctx->pc == 0x238530u) {
        ctx->pc = 0x238530u;
            // 0x238530: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->pc = 0x238534u;
        goto label_238534;
    }
    ctx->pc = 0x23852Cu;
    SET_GPR_U32(ctx, 31, 0x238534u);
    ctx->pc = 0x238530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23852Cu;
            // 0x238530: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28FC10u;
    if (runtime->hasFunction(0x28FC10u)) {
        auto targetFn = runtime->lookupFunction(0x28FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238534u; }
        if (ctx->pc != 0x238534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028FC10_0x28fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238534u; }
        if (ctx->pc != 0x238534u) { return; }
    }
    ctx->pc = 0x238534u;
label_238534:
    // 0x238534: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x238534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_238538:
    // 0x238538: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x238538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_23853c:
    // 0x23853c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_238540:
    if (ctx->pc == 0x238540u) {
        ctx->pc = 0x238540u;
            // 0x238540: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x238544u;
        goto label_238544;
    }
    ctx->pc = 0x23853Cu;
    {
        const bool branch_taken_0x23853c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23853Cu;
            // 0x238540: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23853c) {
            ctx->pc = 0x238520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238520;
        }
    }
    ctx->pc = 0x238544u;
label_238544:
    // 0x238544: 0x0  nop
    ctx->pc = 0x238544u;
    // NOP
label_238548:
    // 0x238548: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x238548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23854c:
    // 0x23854c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238550:
    // 0x238550: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x238550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238554:
    // 0x238554: 0xc089c04  jal         func_227010
label_238558:
    if (ctx->pc == 0x238558u) {
        ctx->pc = 0x238558u;
            // 0x238558: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x23855Cu;
        goto label_23855c;
    }
    ctx->pc = 0x238554u;
    SET_GPR_U32(ctx, 31, 0x23855Cu);
    ctx->pc = 0x238558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238554u;
            // 0x238558: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227010u;
    if (runtime->hasFunction(0x227010u)) {
        auto targetFn = runtime->lookupFunction(0x227010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23855Cu; }
        if (ctx->pc != 0x23855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227010_0x227010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23855Cu; }
        if (ctx->pc != 0x23855Cu) { return; }
    }
    ctx->pc = 0x23855Cu;
label_23855c:
    // 0x23855c: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x23855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_238560:
    // 0x238560: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_238564:
    if (ctx->pc == 0x238564u) {
        ctx->pc = 0x238564u;
            // 0x238564: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238568u;
        goto label_238568;
    }
    ctx->pc = 0x238560u;
    {
        const bool branch_taken_0x238560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238560) {
            ctx->pc = 0x238564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238560u;
            // 0x238564: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23857Cu;
            goto label_23857c;
        }
    }
    ctx->pc = 0x238568u;
label_238568:
    // 0x238568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x238568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23856c:
    // 0x23856c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23856cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238570:
    // 0x238570: 0xc08d8d4  jal         func_236350
label_238574:
    if (ctx->pc == 0x238574u) {
        ctx->pc = 0x238574u;
            // 0x238574: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238578u;
        goto label_238578;
    }
    ctx->pc = 0x238570u;
    SET_GPR_U32(ctx, 31, 0x238578u);
    ctx->pc = 0x238574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238570u;
            // 0x238574: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236350u;
    if (runtime->hasFunction(0x236350u)) {
        auto targetFn = runtime->lookupFunction(0x236350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238578u; }
        if (ctx->pc != 0x238578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00236350_0x236350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238578u; }
        if (ctx->pc != 0x238578u) { return; }
    }
    ctx->pc = 0x238578u;
label_238578:
    // 0x238578: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x238578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23857c:
    // 0x23857c: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_238580:
    if (ctx->pc == 0x238580u) {
        ctx->pc = 0x238584u;
        goto label_238584;
    }
    ctx->pc = 0x23857Cu;
    {
        const bool branch_taken_0x23857c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x23857c) {
            ctx->pc = 0x2385A8u;
            goto label_2385a8;
        }
    }
    ctx->pc = 0x238584u;
label_238584:
    // 0x238584: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x238584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238588:
    // 0x238588: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x238588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_23858c:
    // 0x23858c: 0xc08e330  jal         func_238CC0
label_238590:
    if (ctx->pc == 0x238590u) {
        ctx->pc = 0x238590u;
            // 0x238590: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x238594u;
        goto label_238594;
    }
    ctx->pc = 0x23858Cu;
    SET_GPR_U32(ctx, 31, 0x238594u);
    ctx->pc = 0x238590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23858Cu;
            // 0x238590: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238594u; }
        if (ctx->pc != 0x238594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238594u; }
        if (ctx->pc != 0x238594u) { return; }
    }
    ctx->pc = 0x238594u;
label_238594:
    // 0x238594: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x238594u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_238598:
    // 0x238598: 0x2b2182a  slt         $v1, $s5, $s2
    ctx->pc = 0x238598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_23859c:
    // 0x23859c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2385a0:
    if (ctx->pc == 0x2385A0u) {
        ctx->pc = 0x2385A0u;
            // 0x2385a0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x2385A4u;
        goto label_2385a4;
    }
    ctx->pc = 0x23859Cu;
    {
        const bool branch_taken_0x23859c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2385A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23859Cu;
            // 0x2385a0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23859c) {
            ctx->pc = 0x238588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238588;
        }
    }
    ctx->pc = 0x2385A4u;
label_2385a4:
    // 0x2385a4: 0x0  nop
    ctx->pc = 0x2385a4u;
    // NOP
label_2385a8:
    // 0x2385a8: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x2385a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_2385ac:
    // 0x2385ac: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_2385b0:
    if (ctx->pc == 0x2385B0u) {
        ctx->pc = 0x2385B0u;
            // 0x2385b0: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x2385B4u;
        goto label_2385b4;
    }
    ctx->pc = 0x2385ACu;
    {
        const bool branch_taken_0x2385ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2385ac) {
            ctx->pc = 0x2385B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2385ACu;
            // 0x2385b0: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2385D0u;
            goto label_2385d0;
        }
    }
    ctx->pc = 0x2385B4u;
label_2385b4:
    // 0x2385b4: 0x8e27006c  lw          $a3, 0x6C($s1)
    ctx->pc = 0x2385b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2385b8:
    // 0x2385b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2385b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2385bc:
    // 0x2385bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2385bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2385c0:
    // 0x2385c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2385c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2385c4:
    // 0x2385c4: 0xc08ddf8  jal         func_2377E0
label_2385c8:
    if (ctx->pc == 0x2385C8u) {
        ctx->pc = 0x2385C8u;
            // 0x2385c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2385CCu;
        goto label_2385cc;
    }
    ctx->pc = 0x2385C4u;
    SET_GPR_U32(ctx, 31, 0x2385CCu);
    ctx->pc = 0x2385C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2385C4u;
            // 0x2385c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2377E0u;
    if (runtime->hasFunction(0x2377E0u)) {
        auto targetFn = runtime->lookupFunction(0x2377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2385CCu; }
        if (ctx->pc != 0x2385CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002377E0_0x2377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2385CCu; }
        if (ctx->pc != 0x2385CCu) { return; }
    }
    ctx->pc = 0x2385CCu;
label_2385cc:
    // 0x2385cc: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2385ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2385d0:
    // 0x2385d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2385d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2385d4:
    // 0x2385d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2385d8:
    if (ctx->pc == 0x2385D8u) {
        ctx->pc = 0x2385D8u;
            // 0x2385d8: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x2385DCu;
        goto label_2385dc;
    }
    ctx->pc = 0x2385D4u;
    {
        const bool branch_taken_0x2385d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2385D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2385D4u;
            // 0x2385d8: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385d4) {
            ctx->pc = 0x2385FCu;
            goto label_2385fc;
        }
    }
    ctx->pc = 0x2385DCu;
label_2385dc:
    // 0x2385dc: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2385dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2385e0:
    // 0x2385e0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_2385e4:
    if (ctx->pc == 0x2385E4u) {
        ctx->pc = 0x2385E4u;
            // 0x2385e4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2385E8u;
        goto label_2385e8;
    }
    ctx->pc = 0x2385E0u;
    {
        const bool branch_taken_0x2385e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2385e0) {
            ctx->pc = 0x2385E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2385E0u;
            // 0x2385e4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238600u;
            goto label_238600;
        }
    }
    ctx->pc = 0x2385E8u;
label_2385e8:
    // 0x2385e8: 0x8223008c  lb          $v1, 0x8C($s1)
    ctx->pc = 0x2385e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_2385ec:
    // 0x2385ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2385f0:
    if (ctx->pc == 0x2385F0u) {
        ctx->pc = 0x2385F4u;
        goto label_2385f4;
    }
    ctx->pc = 0x2385ECu;
    {
        const bool branch_taken_0x2385ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2385ec) {
            ctx->pc = 0x2385FCu;
            goto label_2385fc;
        }
    }
    ctx->pc = 0x2385F4u;
label_2385f4:
    // 0x2385f4: 0xc08d1c4  jal         func_234710
label_2385f8:
    if (ctx->pc == 0x2385F8u) {
        ctx->pc = 0x2385F8u;
            // 0x2385f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2385FCu;
        goto label_2385fc;
    }
    ctx->pc = 0x2385F4u;
    SET_GPR_U32(ctx, 31, 0x2385FCu);
    ctx->pc = 0x2385F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2385F4u;
            // 0x2385f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2385FCu; }
        if (ctx->pc != 0x2385FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2385FCu; }
        if (ctx->pc != 0x2385FCu) { return; }
    }
    ctx->pc = 0x2385FCu;
label_2385fc:
    // 0x2385fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2385fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_238600:
    // 0x238600: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x238600u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_238604:
    // 0x238604: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x238604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_238608:
    // 0x238608: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x238608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23860c:
    // 0x23860c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23860cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_238610:
    // 0x238610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238614:
    // 0x238614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_238618:
    // 0x238618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23861c:
    // 0x23861c: 0x3e00008  jr          $ra
label_238620:
    if (ctx->pc == 0x238620u) {
        ctx->pc = 0x238620u;
            // 0x238620: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x238624u;
        goto label_238624;
    }
    ctx->pc = 0x23861Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23861Cu;
            // 0x238620: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238624u;
label_238624:
    // 0x238624: 0x0  nop
    ctx->pc = 0x238624u;
    // NOP
label_238628:
    // 0x238628: 0x0  nop
    ctx->pc = 0x238628u;
    // NOP
label_23862c:
    // 0x23862c: 0x0  nop
    ctx->pc = 0x23862cu;
    // NOP
label_238630:
    // 0x238630: 0x3e00008  jr          $ra
label_238634:
    if (ctx->pc == 0x238634u) {
        ctx->pc = 0x238638u;
        goto label_238638;
    }
    ctx->pc = 0x238630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238638u;
label_238638:
    // 0x238638: 0x0  nop
    ctx->pc = 0x238638u;
    // NOP
label_23863c:
    // 0x23863c: 0x0  nop
    ctx->pc = 0x23863cu;
    // NOP
label_238640:
    // 0x238640: 0x3e00008  jr          $ra
label_238644:
    if (ctx->pc == 0x238644u) {
        ctx->pc = 0x238648u;
        goto label_238648;
    }
    ctx->pc = 0x238640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238648u;
label_238648:
    // 0x238648: 0x0  nop
    ctx->pc = 0x238648u;
    // NOP
label_23864c:
    // 0x23864c: 0x0  nop
    ctx->pc = 0x23864cu;
    // NOP
label_238650:
    // 0x238650: 0x3e00008  jr          $ra
label_238654:
    if (ctx->pc == 0x238654u) {
        ctx->pc = 0x238658u;
        goto label_238658;
    }
    ctx->pc = 0x238650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238658u;
label_238658:
    // 0x238658: 0x0  nop
    ctx->pc = 0x238658u;
    // NOP
label_23865c:
    // 0x23865c: 0x0  nop
    ctx->pc = 0x23865cu;
    // NOP
label_238660:
    // 0x238660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238664:
    // 0x238664: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x238664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238668:
    // 0x238668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23866c:
    // 0x23866c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238670:
    // 0x238670: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x238670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_238674:
    // 0x238674: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238678:
    // 0x238678: 0x80c50004  lb          $a1, 0x4($a2)
    ctx->pc = 0x238678u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_23867c:
    // 0x23867c: 0x54a40006  bnel        $a1, $a0, . + 4 + (0x6 << 2)
label_238680:
    if (ctx->pc == 0x238680u) {
        ctx->pc = 0x238680u;
            // 0x238680: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x238684u;
        goto label_238684;
    }
    ctx->pc = 0x23867Cu;
    {
        const bool branch_taken_0x23867c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x23867c) {
            ctx->pc = 0x238680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23867Cu;
            // 0x238680: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238684u;
label_238684:
    // 0x238684: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_238688:
    // 0x238688: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x238688u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_23868c:
    // 0x23868c: 0x50640020  beql        $v1, $a0, . + 4 + (0x20 << 2)
label_238690:
    if (ctx->pc == 0x238690u) {
        ctx->pc = 0x238690u;
            // 0x238690: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x238694u;
        goto label_238694;
    }
    ctx->pc = 0x23868Cu;
    {
        const bool branch_taken_0x23868c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23868c) {
            ctx->pc = 0x238690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23868Cu;
            // 0x238690: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238710u;
            goto label_238710;
        }
    }
    ctx->pc = 0x238694u;
label_238694:
    // 0x238694: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x238694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238698:
    // 0x238698: 0x54a3000c  bnel        $a1, $v1, . + 4 + (0xC << 2)
label_23869c:
    if (ctx->pc == 0x23869Cu) {
        ctx->pc = 0x23869Cu;
            // 0x23869c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2386A0u;
        goto label_2386a0;
    }
    ctx->pc = 0x238698u;
    {
        const bool branch_taken_0x238698 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x238698) {
            ctx->pc = 0x23869Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238698u;
            // 0x23869c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2386CCu;
            goto label_2386cc;
        }
    }
    ctx->pc = 0x2386A0u;
label_2386a0:
    // 0x2386a0: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x2386a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_2386a4:
    // 0x2386a4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2386a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2386a8:
    // 0x2386a8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x2386a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2386ac:
    // 0x2386ac: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x2386acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2386b0:
    // 0x2386b0: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x2386b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_2386b4:
    // 0x2386b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2386b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2386b8:
    // 0x2386b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2386b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2386bc:
    // 0x2386bc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2386bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2386c0:
    // 0x2386c0: 0x320f809  jalr        $t9
label_2386c4:
    if (ctx->pc == 0x2386C4u) {
        ctx->pc = 0x2386C4u;
            // 0x2386c4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x2386C8u;
        goto label_2386c8;
    }
    ctx->pc = 0x2386C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2386C8u);
        ctx->pc = 0x2386C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2386C0u;
            // 0x2386c4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2386C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2386C8u; }
            if (ctx->pc != 0x2386C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2386C8u;
label_2386c8:
    // 0x2386c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2386c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2386cc:
    // 0x2386cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2386ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2386d0:
    // 0x2386d0: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x2386d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_2386d4:
    // 0x2386d4: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_2386d8:
    if (ctx->pc == 0x2386D8u) {
        ctx->pc = 0x2386DCu;
        goto label_2386dc;
    }
    ctx->pc = 0x2386D4u;
    {
        const bool branch_taken_0x2386d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2386d4) {
            ctx->pc = 0x23870Cu;
            goto label_23870c;
        }
    }
    ctx->pc = 0x2386DCu;
label_2386dc:
    // 0x2386dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2386dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2386e0:
    // 0x2386e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2386e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2386e4:
    // 0x2386e4: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x2386e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_2386e8:
    // 0x2386e8: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x2386e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_2386ec:
    // 0x2386ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2386ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2386f0:
    // 0x2386f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2386f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2386f4:
    // 0x2386f4: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x2386f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_2386f8:
    // 0x2386f8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2386fc:
    // 0x2386fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2386fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_238700:
    // 0x238700: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x238700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_238704:
    // 0x238704: 0x320f809  jalr        $t9
label_238708:
    if (ctx->pc == 0x238708u) {
        ctx->pc = 0x23870Cu;
        goto label_23870c;
    }
    ctx->pc = 0x238704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23870Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23870Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23870Cu; }
            if (ctx->pc != 0x23870Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23870Cu;
label_23870c:
    // 0x23870c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23870cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238710:
    // 0x238710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_238714:
    // 0x238714: 0x3e00008  jr          $ra
label_238718:
    if (ctx->pc == 0x238718u) {
        ctx->pc = 0x238718u;
            // 0x238718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x23871Cu;
        goto label_23871c;
    }
    ctx->pc = 0x238714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238714u;
            // 0x238718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23871Cu;
label_23871c:
    // 0x23871c: 0x0  nop
    ctx->pc = 0x23871cu;
    // NOP
label_238720:
    // 0x238720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238724:
    // 0x238724: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x238724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238728:
    // 0x238728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23872c:
    // 0x23872c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238730:
    // 0x238730: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x238730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_238734:
    // 0x238734: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238738:
    // 0x238738: 0x80c50004  lb          $a1, 0x4($a2)
    ctx->pc = 0x238738u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_23873c:
    // 0x23873c: 0x54a40006  bnel        $a1, $a0, . + 4 + (0x6 << 2)
label_238740:
    if (ctx->pc == 0x238740u) {
        ctx->pc = 0x238740u;
            // 0x238740: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x238744u;
        goto label_238744;
    }
    ctx->pc = 0x23873Cu;
    {
        const bool branch_taken_0x23873c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x23873c) {
            ctx->pc = 0x238740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23873Cu;
            // 0x238740: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238758u;
            goto label_238758;
        }
    }
    ctx->pc = 0x238744u;
label_238744:
    // 0x238744: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_238748:
    // 0x238748: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x238748u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_23874c:
    // 0x23874c: 0x50640020  beql        $v1, $a0, . + 4 + (0x20 << 2)
label_238750:
    if (ctx->pc == 0x238750u) {
        ctx->pc = 0x238750u;
            // 0x238750: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x238754u;
        goto label_238754;
    }
    ctx->pc = 0x23874Cu;
    {
        const bool branch_taken_0x23874c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23874c) {
            ctx->pc = 0x238750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23874Cu;
            // 0x238750: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2387D0u;
            goto label_2387d0;
        }
    }
    ctx->pc = 0x238754u;
label_238754:
    // 0x238754: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x238754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238758:
    // 0x238758: 0x54a3000c  bnel        $a1, $v1, . + 4 + (0xC << 2)
label_23875c:
    if (ctx->pc == 0x23875Cu) {
        ctx->pc = 0x23875Cu;
            // 0x23875c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x238760u;
        goto label_238760;
    }
    ctx->pc = 0x238758u;
    {
        const bool branch_taken_0x238758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x238758) {
            ctx->pc = 0x23875Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238758u;
            // 0x23875c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x238760u;
label_238760:
    // 0x238760: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x238760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_238764:
    // 0x238764: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x238764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_238768:
    // 0x238768: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x238768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_23876c:
    // 0x23876c: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x23876cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_238770:
    // 0x238770: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x238770u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_238774:
    // 0x238774: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x238774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_238778:
    // 0x238778: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x238778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23877c:
    // 0x23877c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x23877cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_238780:
    // 0x238780: 0x320f809  jalr        $t9
label_238784:
    if (ctx->pc == 0x238784u) {
        ctx->pc = 0x238784u;
            // 0x238784: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x238788u;
        goto label_238788;
    }
    ctx->pc = 0x238780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x238788u);
        ctx->pc = 0x238784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238780u;
            // 0x238784: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238788u; }
            if (ctx->pc != 0x238788u) { return; }
        }
        }
    }
    ctx->pc = 0x238788u;
label_238788:
    // 0x238788: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x238788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23878c:
    // 0x23878c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238790:
    // 0x238790: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_238794:
    // 0x238794: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_238798:
    if (ctx->pc == 0x238798u) {
        ctx->pc = 0x23879Cu;
        goto label_23879c;
    }
    ctx->pc = 0x238794u;
    {
        const bool branch_taken_0x238794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x238794) {
            ctx->pc = 0x2387CCu;
            goto label_2387cc;
        }
    }
    ctx->pc = 0x23879Cu;
label_23879c:
    // 0x23879c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x23879cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2387a0:
    // 0x2387a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2387a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2387a4:
    // 0x2387a4: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x2387a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_2387a8:
    // 0x2387a8: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x2387a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_2387ac:
    // 0x2387ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2387acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2387b0:
    // 0x2387b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2387b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2387b4:
    // 0x2387b4: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x2387b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_2387b8:
    // 0x2387b8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2387b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2387bc:
    // 0x2387bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2387bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2387c0:
    // 0x2387c0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2387c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2387c4:
    // 0x2387c4: 0x320f809  jalr        $t9
label_2387c8:
    if (ctx->pc == 0x2387C8u) {
        ctx->pc = 0x2387CCu;
        goto label_2387cc;
    }
    ctx->pc = 0x2387C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2387CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2387CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2387CCu; }
            if (ctx->pc != 0x2387CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2387CCu;
label_2387cc:
    // 0x2387cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2387ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2387d0:
    // 0x2387d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2387d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2387d4:
    // 0x2387d4: 0x3e00008  jr          $ra
label_2387d8:
    if (ctx->pc == 0x2387D8u) {
        ctx->pc = 0x2387D8u;
            // 0x2387d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2387DCu;
        goto label_2387dc;
    }
    ctx->pc = 0x2387D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2387D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2387D4u;
            // 0x2387d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2387DCu;
label_2387dc:
    // 0x2387dc: 0x0  nop
    ctx->pc = 0x2387dcu;
    // NOP
label_2387e0:
    // 0x2387e0: 0x808e1c8  j           func_238720
label_2387e4:
    if (ctx->pc == 0x2387E4u) {
        ctx->pc = 0x2387E4u;
            // 0x2387e4: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x2387E8u;
        goto label_2387e8;
    }
    ctx->pc = 0x2387E0u;
    ctx->pc = 0x2387E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2387E0u;
            // 0x2387e4: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238720u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_238720;
    ctx->pc = 0x2387E8u;
label_2387e8:
    // 0x2387e8: 0x0  nop
    ctx->pc = 0x2387e8u;
    // NOP
label_2387ec:
    // 0x2387ec: 0x0  nop
    ctx->pc = 0x2387ecu;
    // NOP
label_2387f0:
    // 0x2387f0: 0x808e198  j           func_238660
label_2387f4:
    if (ctx->pc == 0x2387F4u) {
        ctx->pc = 0x2387F4u;
            // 0x2387f4: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x2387F8u;
        goto label_2387f8;
    }
    ctx->pc = 0x2387F0u;
    ctx->pc = 0x2387F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2387F0u;
            // 0x2387f4: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238660u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_238660;
    ctx->pc = 0x2387F8u;
label_2387f8:
    // 0x2387f8: 0x0  nop
    ctx->pc = 0x2387f8u;
    // NOP
label_2387fc:
    // 0x2387fc: 0x0  nop
    ctx->pc = 0x2387fcu;
    // NOP
label_238800:
    // 0x238800: 0x808bc64  j           func_22F190
label_238804:
    if (ctx->pc == 0x238804u) {
        ctx->pc = 0x238804u;
            // 0x238804: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x238808u;
        goto label_238808;
    }
    ctx->pc = 0x238800u;
    ctx->pc = 0x238804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238800u;
            // 0x238804: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F190u;
    {
        auto targetFn = runtime->lookupFunction(0x22F190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x238808u;
label_238808:
    // 0x238808: 0x0  nop
    ctx->pc = 0x238808u;
    // NOP
label_23880c:
    // 0x23880c: 0x0  nop
    ctx->pc = 0x23880cu;
    // NOP
}
