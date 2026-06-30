#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003189E0
// Address: 0x3189e0 - 0x319450
void sub_003189E0_0x3189e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003189E0_0x3189e0");
#endif

    switch (ctx->pc) {
        case 0x3189e0u: goto label_3189e0;
        case 0x3189e4u: goto label_3189e4;
        case 0x3189e8u: goto label_3189e8;
        case 0x3189ecu: goto label_3189ec;
        case 0x3189f0u: goto label_3189f0;
        case 0x3189f4u: goto label_3189f4;
        case 0x3189f8u: goto label_3189f8;
        case 0x3189fcu: goto label_3189fc;
        case 0x318a00u: goto label_318a00;
        case 0x318a04u: goto label_318a04;
        case 0x318a08u: goto label_318a08;
        case 0x318a0cu: goto label_318a0c;
        case 0x318a10u: goto label_318a10;
        case 0x318a14u: goto label_318a14;
        case 0x318a18u: goto label_318a18;
        case 0x318a1cu: goto label_318a1c;
        case 0x318a20u: goto label_318a20;
        case 0x318a24u: goto label_318a24;
        case 0x318a28u: goto label_318a28;
        case 0x318a2cu: goto label_318a2c;
        case 0x318a30u: goto label_318a30;
        case 0x318a34u: goto label_318a34;
        case 0x318a38u: goto label_318a38;
        case 0x318a3cu: goto label_318a3c;
        case 0x318a40u: goto label_318a40;
        case 0x318a44u: goto label_318a44;
        case 0x318a48u: goto label_318a48;
        case 0x318a4cu: goto label_318a4c;
        case 0x318a50u: goto label_318a50;
        case 0x318a54u: goto label_318a54;
        case 0x318a58u: goto label_318a58;
        case 0x318a5cu: goto label_318a5c;
        case 0x318a60u: goto label_318a60;
        case 0x318a64u: goto label_318a64;
        case 0x318a68u: goto label_318a68;
        case 0x318a6cu: goto label_318a6c;
        case 0x318a70u: goto label_318a70;
        case 0x318a74u: goto label_318a74;
        case 0x318a78u: goto label_318a78;
        case 0x318a7cu: goto label_318a7c;
        case 0x318a80u: goto label_318a80;
        case 0x318a84u: goto label_318a84;
        case 0x318a88u: goto label_318a88;
        case 0x318a8cu: goto label_318a8c;
        case 0x318a90u: goto label_318a90;
        case 0x318a94u: goto label_318a94;
        case 0x318a98u: goto label_318a98;
        case 0x318a9cu: goto label_318a9c;
        case 0x318aa0u: goto label_318aa0;
        case 0x318aa4u: goto label_318aa4;
        case 0x318aa8u: goto label_318aa8;
        case 0x318aacu: goto label_318aac;
        case 0x318ab0u: goto label_318ab0;
        case 0x318ab4u: goto label_318ab4;
        case 0x318ab8u: goto label_318ab8;
        case 0x318abcu: goto label_318abc;
        case 0x318ac0u: goto label_318ac0;
        case 0x318ac4u: goto label_318ac4;
        case 0x318ac8u: goto label_318ac8;
        case 0x318accu: goto label_318acc;
        case 0x318ad0u: goto label_318ad0;
        case 0x318ad4u: goto label_318ad4;
        case 0x318ad8u: goto label_318ad8;
        case 0x318adcu: goto label_318adc;
        case 0x318ae0u: goto label_318ae0;
        case 0x318ae4u: goto label_318ae4;
        case 0x318ae8u: goto label_318ae8;
        case 0x318aecu: goto label_318aec;
        case 0x318af0u: goto label_318af0;
        case 0x318af4u: goto label_318af4;
        case 0x318af8u: goto label_318af8;
        case 0x318afcu: goto label_318afc;
        case 0x318b00u: goto label_318b00;
        case 0x318b04u: goto label_318b04;
        case 0x318b08u: goto label_318b08;
        case 0x318b0cu: goto label_318b0c;
        case 0x318b10u: goto label_318b10;
        case 0x318b14u: goto label_318b14;
        case 0x318b18u: goto label_318b18;
        case 0x318b1cu: goto label_318b1c;
        case 0x318b20u: goto label_318b20;
        case 0x318b24u: goto label_318b24;
        case 0x318b28u: goto label_318b28;
        case 0x318b2cu: goto label_318b2c;
        case 0x318b30u: goto label_318b30;
        case 0x318b34u: goto label_318b34;
        case 0x318b38u: goto label_318b38;
        case 0x318b3cu: goto label_318b3c;
        case 0x318b40u: goto label_318b40;
        case 0x318b44u: goto label_318b44;
        case 0x318b48u: goto label_318b48;
        case 0x318b4cu: goto label_318b4c;
        case 0x318b50u: goto label_318b50;
        case 0x318b54u: goto label_318b54;
        case 0x318b58u: goto label_318b58;
        case 0x318b5cu: goto label_318b5c;
        case 0x318b60u: goto label_318b60;
        case 0x318b64u: goto label_318b64;
        case 0x318b68u: goto label_318b68;
        case 0x318b6cu: goto label_318b6c;
        case 0x318b70u: goto label_318b70;
        case 0x318b74u: goto label_318b74;
        case 0x318b78u: goto label_318b78;
        case 0x318b7cu: goto label_318b7c;
        case 0x318b80u: goto label_318b80;
        case 0x318b84u: goto label_318b84;
        case 0x318b88u: goto label_318b88;
        case 0x318b8cu: goto label_318b8c;
        case 0x318b90u: goto label_318b90;
        case 0x318b94u: goto label_318b94;
        case 0x318b98u: goto label_318b98;
        case 0x318b9cu: goto label_318b9c;
        case 0x318ba0u: goto label_318ba0;
        case 0x318ba4u: goto label_318ba4;
        case 0x318ba8u: goto label_318ba8;
        case 0x318bacu: goto label_318bac;
        case 0x318bb0u: goto label_318bb0;
        case 0x318bb4u: goto label_318bb4;
        case 0x318bb8u: goto label_318bb8;
        case 0x318bbcu: goto label_318bbc;
        case 0x318bc0u: goto label_318bc0;
        case 0x318bc4u: goto label_318bc4;
        case 0x318bc8u: goto label_318bc8;
        case 0x318bccu: goto label_318bcc;
        case 0x318bd0u: goto label_318bd0;
        case 0x318bd4u: goto label_318bd4;
        case 0x318bd8u: goto label_318bd8;
        case 0x318bdcu: goto label_318bdc;
        case 0x318be0u: goto label_318be0;
        case 0x318be4u: goto label_318be4;
        case 0x318be8u: goto label_318be8;
        case 0x318becu: goto label_318bec;
        case 0x318bf0u: goto label_318bf0;
        case 0x318bf4u: goto label_318bf4;
        case 0x318bf8u: goto label_318bf8;
        case 0x318bfcu: goto label_318bfc;
        case 0x318c00u: goto label_318c00;
        case 0x318c04u: goto label_318c04;
        case 0x318c08u: goto label_318c08;
        case 0x318c0cu: goto label_318c0c;
        case 0x318c10u: goto label_318c10;
        case 0x318c14u: goto label_318c14;
        case 0x318c18u: goto label_318c18;
        case 0x318c1cu: goto label_318c1c;
        case 0x318c20u: goto label_318c20;
        case 0x318c24u: goto label_318c24;
        case 0x318c28u: goto label_318c28;
        case 0x318c2cu: goto label_318c2c;
        case 0x318c30u: goto label_318c30;
        case 0x318c34u: goto label_318c34;
        case 0x318c38u: goto label_318c38;
        case 0x318c3cu: goto label_318c3c;
        case 0x318c40u: goto label_318c40;
        case 0x318c44u: goto label_318c44;
        case 0x318c48u: goto label_318c48;
        case 0x318c4cu: goto label_318c4c;
        case 0x318c50u: goto label_318c50;
        case 0x318c54u: goto label_318c54;
        case 0x318c58u: goto label_318c58;
        case 0x318c5cu: goto label_318c5c;
        case 0x318c60u: goto label_318c60;
        case 0x318c64u: goto label_318c64;
        case 0x318c68u: goto label_318c68;
        case 0x318c6cu: goto label_318c6c;
        case 0x318c70u: goto label_318c70;
        case 0x318c74u: goto label_318c74;
        case 0x318c78u: goto label_318c78;
        case 0x318c7cu: goto label_318c7c;
        case 0x318c80u: goto label_318c80;
        case 0x318c84u: goto label_318c84;
        case 0x318c88u: goto label_318c88;
        case 0x318c8cu: goto label_318c8c;
        case 0x318c90u: goto label_318c90;
        case 0x318c94u: goto label_318c94;
        case 0x318c98u: goto label_318c98;
        case 0x318c9cu: goto label_318c9c;
        case 0x318ca0u: goto label_318ca0;
        case 0x318ca4u: goto label_318ca4;
        case 0x318ca8u: goto label_318ca8;
        case 0x318cacu: goto label_318cac;
        case 0x318cb0u: goto label_318cb0;
        case 0x318cb4u: goto label_318cb4;
        case 0x318cb8u: goto label_318cb8;
        case 0x318cbcu: goto label_318cbc;
        case 0x318cc0u: goto label_318cc0;
        case 0x318cc4u: goto label_318cc4;
        case 0x318cc8u: goto label_318cc8;
        case 0x318cccu: goto label_318ccc;
        case 0x318cd0u: goto label_318cd0;
        case 0x318cd4u: goto label_318cd4;
        case 0x318cd8u: goto label_318cd8;
        case 0x318cdcu: goto label_318cdc;
        case 0x318ce0u: goto label_318ce0;
        case 0x318ce4u: goto label_318ce4;
        case 0x318ce8u: goto label_318ce8;
        case 0x318cecu: goto label_318cec;
        case 0x318cf0u: goto label_318cf0;
        case 0x318cf4u: goto label_318cf4;
        case 0x318cf8u: goto label_318cf8;
        case 0x318cfcu: goto label_318cfc;
        case 0x318d00u: goto label_318d00;
        case 0x318d04u: goto label_318d04;
        case 0x318d08u: goto label_318d08;
        case 0x318d0cu: goto label_318d0c;
        case 0x318d10u: goto label_318d10;
        case 0x318d14u: goto label_318d14;
        case 0x318d18u: goto label_318d18;
        case 0x318d1cu: goto label_318d1c;
        case 0x318d20u: goto label_318d20;
        case 0x318d24u: goto label_318d24;
        case 0x318d28u: goto label_318d28;
        case 0x318d2cu: goto label_318d2c;
        case 0x318d30u: goto label_318d30;
        case 0x318d34u: goto label_318d34;
        case 0x318d38u: goto label_318d38;
        case 0x318d3cu: goto label_318d3c;
        case 0x318d40u: goto label_318d40;
        case 0x318d44u: goto label_318d44;
        case 0x318d48u: goto label_318d48;
        case 0x318d4cu: goto label_318d4c;
        case 0x318d50u: goto label_318d50;
        case 0x318d54u: goto label_318d54;
        case 0x318d58u: goto label_318d58;
        case 0x318d5cu: goto label_318d5c;
        case 0x318d60u: goto label_318d60;
        case 0x318d64u: goto label_318d64;
        case 0x318d68u: goto label_318d68;
        case 0x318d6cu: goto label_318d6c;
        case 0x318d70u: goto label_318d70;
        case 0x318d74u: goto label_318d74;
        case 0x318d78u: goto label_318d78;
        case 0x318d7cu: goto label_318d7c;
        case 0x318d80u: goto label_318d80;
        case 0x318d84u: goto label_318d84;
        case 0x318d88u: goto label_318d88;
        case 0x318d8cu: goto label_318d8c;
        case 0x318d90u: goto label_318d90;
        case 0x318d94u: goto label_318d94;
        case 0x318d98u: goto label_318d98;
        case 0x318d9cu: goto label_318d9c;
        case 0x318da0u: goto label_318da0;
        case 0x318da4u: goto label_318da4;
        case 0x318da8u: goto label_318da8;
        case 0x318dacu: goto label_318dac;
        case 0x318db0u: goto label_318db0;
        case 0x318db4u: goto label_318db4;
        case 0x318db8u: goto label_318db8;
        case 0x318dbcu: goto label_318dbc;
        case 0x318dc0u: goto label_318dc0;
        case 0x318dc4u: goto label_318dc4;
        case 0x318dc8u: goto label_318dc8;
        case 0x318dccu: goto label_318dcc;
        case 0x318dd0u: goto label_318dd0;
        case 0x318dd4u: goto label_318dd4;
        case 0x318dd8u: goto label_318dd8;
        case 0x318ddcu: goto label_318ddc;
        case 0x318de0u: goto label_318de0;
        case 0x318de4u: goto label_318de4;
        case 0x318de8u: goto label_318de8;
        case 0x318decu: goto label_318dec;
        case 0x318df0u: goto label_318df0;
        case 0x318df4u: goto label_318df4;
        case 0x318df8u: goto label_318df8;
        case 0x318dfcu: goto label_318dfc;
        case 0x318e00u: goto label_318e00;
        case 0x318e04u: goto label_318e04;
        case 0x318e08u: goto label_318e08;
        case 0x318e0cu: goto label_318e0c;
        case 0x318e10u: goto label_318e10;
        case 0x318e14u: goto label_318e14;
        case 0x318e18u: goto label_318e18;
        case 0x318e1cu: goto label_318e1c;
        case 0x318e20u: goto label_318e20;
        case 0x318e24u: goto label_318e24;
        case 0x318e28u: goto label_318e28;
        case 0x318e2cu: goto label_318e2c;
        case 0x318e30u: goto label_318e30;
        case 0x318e34u: goto label_318e34;
        case 0x318e38u: goto label_318e38;
        case 0x318e3cu: goto label_318e3c;
        case 0x318e40u: goto label_318e40;
        case 0x318e44u: goto label_318e44;
        case 0x318e48u: goto label_318e48;
        case 0x318e4cu: goto label_318e4c;
        case 0x318e50u: goto label_318e50;
        case 0x318e54u: goto label_318e54;
        case 0x318e58u: goto label_318e58;
        case 0x318e5cu: goto label_318e5c;
        case 0x318e60u: goto label_318e60;
        case 0x318e64u: goto label_318e64;
        case 0x318e68u: goto label_318e68;
        case 0x318e6cu: goto label_318e6c;
        case 0x318e70u: goto label_318e70;
        case 0x318e74u: goto label_318e74;
        case 0x318e78u: goto label_318e78;
        case 0x318e7cu: goto label_318e7c;
        case 0x318e80u: goto label_318e80;
        case 0x318e84u: goto label_318e84;
        case 0x318e88u: goto label_318e88;
        case 0x318e8cu: goto label_318e8c;
        case 0x318e90u: goto label_318e90;
        case 0x318e94u: goto label_318e94;
        case 0x318e98u: goto label_318e98;
        case 0x318e9cu: goto label_318e9c;
        case 0x318ea0u: goto label_318ea0;
        case 0x318ea4u: goto label_318ea4;
        case 0x318ea8u: goto label_318ea8;
        case 0x318eacu: goto label_318eac;
        case 0x318eb0u: goto label_318eb0;
        case 0x318eb4u: goto label_318eb4;
        case 0x318eb8u: goto label_318eb8;
        case 0x318ebcu: goto label_318ebc;
        case 0x318ec0u: goto label_318ec0;
        case 0x318ec4u: goto label_318ec4;
        case 0x318ec8u: goto label_318ec8;
        case 0x318eccu: goto label_318ecc;
        case 0x318ed0u: goto label_318ed0;
        case 0x318ed4u: goto label_318ed4;
        case 0x318ed8u: goto label_318ed8;
        case 0x318edcu: goto label_318edc;
        case 0x318ee0u: goto label_318ee0;
        case 0x318ee4u: goto label_318ee4;
        case 0x318ee8u: goto label_318ee8;
        case 0x318eecu: goto label_318eec;
        case 0x318ef0u: goto label_318ef0;
        case 0x318ef4u: goto label_318ef4;
        case 0x318ef8u: goto label_318ef8;
        case 0x318efcu: goto label_318efc;
        case 0x318f00u: goto label_318f00;
        case 0x318f04u: goto label_318f04;
        case 0x318f08u: goto label_318f08;
        case 0x318f0cu: goto label_318f0c;
        case 0x318f10u: goto label_318f10;
        case 0x318f14u: goto label_318f14;
        case 0x318f18u: goto label_318f18;
        case 0x318f1cu: goto label_318f1c;
        case 0x318f20u: goto label_318f20;
        case 0x318f24u: goto label_318f24;
        case 0x318f28u: goto label_318f28;
        case 0x318f2cu: goto label_318f2c;
        case 0x318f30u: goto label_318f30;
        case 0x318f34u: goto label_318f34;
        case 0x318f38u: goto label_318f38;
        case 0x318f3cu: goto label_318f3c;
        case 0x318f40u: goto label_318f40;
        case 0x318f44u: goto label_318f44;
        case 0x318f48u: goto label_318f48;
        case 0x318f4cu: goto label_318f4c;
        case 0x318f50u: goto label_318f50;
        case 0x318f54u: goto label_318f54;
        case 0x318f58u: goto label_318f58;
        case 0x318f5cu: goto label_318f5c;
        case 0x318f60u: goto label_318f60;
        case 0x318f64u: goto label_318f64;
        case 0x318f68u: goto label_318f68;
        case 0x318f6cu: goto label_318f6c;
        case 0x318f70u: goto label_318f70;
        case 0x318f74u: goto label_318f74;
        case 0x318f78u: goto label_318f78;
        case 0x318f7cu: goto label_318f7c;
        case 0x318f80u: goto label_318f80;
        case 0x318f84u: goto label_318f84;
        case 0x318f88u: goto label_318f88;
        case 0x318f8cu: goto label_318f8c;
        case 0x318f90u: goto label_318f90;
        case 0x318f94u: goto label_318f94;
        case 0x318f98u: goto label_318f98;
        case 0x318f9cu: goto label_318f9c;
        case 0x318fa0u: goto label_318fa0;
        case 0x318fa4u: goto label_318fa4;
        case 0x318fa8u: goto label_318fa8;
        case 0x318facu: goto label_318fac;
        case 0x318fb0u: goto label_318fb0;
        case 0x318fb4u: goto label_318fb4;
        case 0x318fb8u: goto label_318fb8;
        case 0x318fbcu: goto label_318fbc;
        case 0x318fc0u: goto label_318fc0;
        case 0x318fc4u: goto label_318fc4;
        case 0x318fc8u: goto label_318fc8;
        case 0x318fccu: goto label_318fcc;
        case 0x318fd0u: goto label_318fd0;
        case 0x318fd4u: goto label_318fd4;
        case 0x318fd8u: goto label_318fd8;
        case 0x318fdcu: goto label_318fdc;
        case 0x318fe0u: goto label_318fe0;
        case 0x318fe4u: goto label_318fe4;
        case 0x318fe8u: goto label_318fe8;
        case 0x318fecu: goto label_318fec;
        case 0x318ff0u: goto label_318ff0;
        case 0x318ff4u: goto label_318ff4;
        case 0x318ff8u: goto label_318ff8;
        case 0x318ffcu: goto label_318ffc;
        case 0x319000u: goto label_319000;
        case 0x319004u: goto label_319004;
        case 0x319008u: goto label_319008;
        case 0x31900cu: goto label_31900c;
        case 0x319010u: goto label_319010;
        case 0x319014u: goto label_319014;
        case 0x319018u: goto label_319018;
        case 0x31901cu: goto label_31901c;
        case 0x319020u: goto label_319020;
        case 0x319024u: goto label_319024;
        case 0x319028u: goto label_319028;
        case 0x31902cu: goto label_31902c;
        case 0x319030u: goto label_319030;
        case 0x319034u: goto label_319034;
        case 0x319038u: goto label_319038;
        case 0x31903cu: goto label_31903c;
        case 0x319040u: goto label_319040;
        case 0x319044u: goto label_319044;
        case 0x319048u: goto label_319048;
        case 0x31904cu: goto label_31904c;
        case 0x319050u: goto label_319050;
        case 0x319054u: goto label_319054;
        case 0x319058u: goto label_319058;
        case 0x31905cu: goto label_31905c;
        case 0x319060u: goto label_319060;
        case 0x319064u: goto label_319064;
        case 0x319068u: goto label_319068;
        case 0x31906cu: goto label_31906c;
        case 0x319070u: goto label_319070;
        case 0x319074u: goto label_319074;
        case 0x319078u: goto label_319078;
        case 0x31907cu: goto label_31907c;
        case 0x319080u: goto label_319080;
        case 0x319084u: goto label_319084;
        case 0x319088u: goto label_319088;
        case 0x31908cu: goto label_31908c;
        case 0x319090u: goto label_319090;
        case 0x319094u: goto label_319094;
        case 0x319098u: goto label_319098;
        case 0x31909cu: goto label_31909c;
        case 0x3190a0u: goto label_3190a0;
        case 0x3190a4u: goto label_3190a4;
        case 0x3190a8u: goto label_3190a8;
        case 0x3190acu: goto label_3190ac;
        case 0x3190b0u: goto label_3190b0;
        case 0x3190b4u: goto label_3190b4;
        case 0x3190b8u: goto label_3190b8;
        case 0x3190bcu: goto label_3190bc;
        case 0x3190c0u: goto label_3190c0;
        case 0x3190c4u: goto label_3190c4;
        case 0x3190c8u: goto label_3190c8;
        case 0x3190ccu: goto label_3190cc;
        case 0x3190d0u: goto label_3190d0;
        case 0x3190d4u: goto label_3190d4;
        case 0x3190d8u: goto label_3190d8;
        case 0x3190dcu: goto label_3190dc;
        case 0x3190e0u: goto label_3190e0;
        case 0x3190e4u: goto label_3190e4;
        case 0x3190e8u: goto label_3190e8;
        case 0x3190ecu: goto label_3190ec;
        case 0x3190f0u: goto label_3190f0;
        case 0x3190f4u: goto label_3190f4;
        case 0x3190f8u: goto label_3190f8;
        case 0x3190fcu: goto label_3190fc;
        case 0x319100u: goto label_319100;
        case 0x319104u: goto label_319104;
        case 0x319108u: goto label_319108;
        case 0x31910cu: goto label_31910c;
        case 0x319110u: goto label_319110;
        case 0x319114u: goto label_319114;
        case 0x319118u: goto label_319118;
        case 0x31911cu: goto label_31911c;
        case 0x319120u: goto label_319120;
        case 0x319124u: goto label_319124;
        case 0x319128u: goto label_319128;
        case 0x31912cu: goto label_31912c;
        case 0x319130u: goto label_319130;
        case 0x319134u: goto label_319134;
        case 0x319138u: goto label_319138;
        case 0x31913cu: goto label_31913c;
        case 0x319140u: goto label_319140;
        case 0x319144u: goto label_319144;
        case 0x319148u: goto label_319148;
        case 0x31914cu: goto label_31914c;
        case 0x319150u: goto label_319150;
        case 0x319154u: goto label_319154;
        case 0x319158u: goto label_319158;
        case 0x31915cu: goto label_31915c;
        case 0x319160u: goto label_319160;
        case 0x319164u: goto label_319164;
        case 0x319168u: goto label_319168;
        case 0x31916cu: goto label_31916c;
        case 0x319170u: goto label_319170;
        case 0x319174u: goto label_319174;
        case 0x319178u: goto label_319178;
        case 0x31917cu: goto label_31917c;
        case 0x319180u: goto label_319180;
        case 0x319184u: goto label_319184;
        case 0x319188u: goto label_319188;
        case 0x31918cu: goto label_31918c;
        case 0x319190u: goto label_319190;
        case 0x319194u: goto label_319194;
        case 0x319198u: goto label_319198;
        case 0x31919cu: goto label_31919c;
        case 0x3191a0u: goto label_3191a0;
        case 0x3191a4u: goto label_3191a4;
        case 0x3191a8u: goto label_3191a8;
        case 0x3191acu: goto label_3191ac;
        case 0x3191b0u: goto label_3191b0;
        case 0x3191b4u: goto label_3191b4;
        case 0x3191b8u: goto label_3191b8;
        case 0x3191bcu: goto label_3191bc;
        case 0x3191c0u: goto label_3191c0;
        case 0x3191c4u: goto label_3191c4;
        case 0x3191c8u: goto label_3191c8;
        case 0x3191ccu: goto label_3191cc;
        case 0x3191d0u: goto label_3191d0;
        case 0x3191d4u: goto label_3191d4;
        case 0x3191d8u: goto label_3191d8;
        case 0x3191dcu: goto label_3191dc;
        case 0x3191e0u: goto label_3191e0;
        case 0x3191e4u: goto label_3191e4;
        case 0x3191e8u: goto label_3191e8;
        case 0x3191ecu: goto label_3191ec;
        case 0x3191f0u: goto label_3191f0;
        case 0x3191f4u: goto label_3191f4;
        case 0x3191f8u: goto label_3191f8;
        case 0x3191fcu: goto label_3191fc;
        case 0x319200u: goto label_319200;
        case 0x319204u: goto label_319204;
        case 0x319208u: goto label_319208;
        case 0x31920cu: goto label_31920c;
        case 0x319210u: goto label_319210;
        case 0x319214u: goto label_319214;
        case 0x319218u: goto label_319218;
        case 0x31921cu: goto label_31921c;
        case 0x319220u: goto label_319220;
        case 0x319224u: goto label_319224;
        case 0x319228u: goto label_319228;
        case 0x31922cu: goto label_31922c;
        case 0x319230u: goto label_319230;
        case 0x319234u: goto label_319234;
        case 0x319238u: goto label_319238;
        case 0x31923cu: goto label_31923c;
        case 0x319240u: goto label_319240;
        case 0x319244u: goto label_319244;
        case 0x319248u: goto label_319248;
        case 0x31924cu: goto label_31924c;
        case 0x319250u: goto label_319250;
        case 0x319254u: goto label_319254;
        case 0x319258u: goto label_319258;
        case 0x31925cu: goto label_31925c;
        case 0x319260u: goto label_319260;
        case 0x319264u: goto label_319264;
        case 0x319268u: goto label_319268;
        case 0x31926cu: goto label_31926c;
        case 0x319270u: goto label_319270;
        case 0x319274u: goto label_319274;
        case 0x319278u: goto label_319278;
        case 0x31927cu: goto label_31927c;
        case 0x319280u: goto label_319280;
        case 0x319284u: goto label_319284;
        case 0x319288u: goto label_319288;
        case 0x31928cu: goto label_31928c;
        case 0x319290u: goto label_319290;
        case 0x319294u: goto label_319294;
        case 0x319298u: goto label_319298;
        case 0x31929cu: goto label_31929c;
        case 0x3192a0u: goto label_3192a0;
        case 0x3192a4u: goto label_3192a4;
        case 0x3192a8u: goto label_3192a8;
        case 0x3192acu: goto label_3192ac;
        case 0x3192b0u: goto label_3192b0;
        case 0x3192b4u: goto label_3192b4;
        case 0x3192b8u: goto label_3192b8;
        case 0x3192bcu: goto label_3192bc;
        case 0x3192c0u: goto label_3192c0;
        case 0x3192c4u: goto label_3192c4;
        case 0x3192c8u: goto label_3192c8;
        case 0x3192ccu: goto label_3192cc;
        case 0x3192d0u: goto label_3192d0;
        case 0x3192d4u: goto label_3192d4;
        case 0x3192d8u: goto label_3192d8;
        case 0x3192dcu: goto label_3192dc;
        case 0x3192e0u: goto label_3192e0;
        case 0x3192e4u: goto label_3192e4;
        case 0x3192e8u: goto label_3192e8;
        case 0x3192ecu: goto label_3192ec;
        case 0x3192f0u: goto label_3192f0;
        case 0x3192f4u: goto label_3192f4;
        case 0x3192f8u: goto label_3192f8;
        case 0x3192fcu: goto label_3192fc;
        case 0x319300u: goto label_319300;
        case 0x319304u: goto label_319304;
        case 0x319308u: goto label_319308;
        case 0x31930cu: goto label_31930c;
        case 0x319310u: goto label_319310;
        case 0x319314u: goto label_319314;
        case 0x319318u: goto label_319318;
        case 0x31931cu: goto label_31931c;
        case 0x319320u: goto label_319320;
        case 0x319324u: goto label_319324;
        case 0x319328u: goto label_319328;
        case 0x31932cu: goto label_31932c;
        case 0x319330u: goto label_319330;
        case 0x319334u: goto label_319334;
        case 0x319338u: goto label_319338;
        case 0x31933cu: goto label_31933c;
        case 0x319340u: goto label_319340;
        case 0x319344u: goto label_319344;
        case 0x319348u: goto label_319348;
        case 0x31934cu: goto label_31934c;
        case 0x319350u: goto label_319350;
        case 0x319354u: goto label_319354;
        case 0x319358u: goto label_319358;
        case 0x31935cu: goto label_31935c;
        case 0x319360u: goto label_319360;
        case 0x319364u: goto label_319364;
        case 0x319368u: goto label_319368;
        case 0x31936cu: goto label_31936c;
        case 0x319370u: goto label_319370;
        case 0x319374u: goto label_319374;
        case 0x319378u: goto label_319378;
        case 0x31937cu: goto label_31937c;
        case 0x319380u: goto label_319380;
        case 0x319384u: goto label_319384;
        case 0x319388u: goto label_319388;
        case 0x31938cu: goto label_31938c;
        case 0x319390u: goto label_319390;
        case 0x319394u: goto label_319394;
        case 0x319398u: goto label_319398;
        case 0x31939cu: goto label_31939c;
        case 0x3193a0u: goto label_3193a0;
        case 0x3193a4u: goto label_3193a4;
        case 0x3193a8u: goto label_3193a8;
        case 0x3193acu: goto label_3193ac;
        case 0x3193b0u: goto label_3193b0;
        case 0x3193b4u: goto label_3193b4;
        case 0x3193b8u: goto label_3193b8;
        case 0x3193bcu: goto label_3193bc;
        case 0x3193c0u: goto label_3193c0;
        case 0x3193c4u: goto label_3193c4;
        case 0x3193c8u: goto label_3193c8;
        case 0x3193ccu: goto label_3193cc;
        case 0x3193d0u: goto label_3193d0;
        case 0x3193d4u: goto label_3193d4;
        case 0x3193d8u: goto label_3193d8;
        case 0x3193dcu: goto label_3193dc;
        case 0x3193e0u: goto label_3193e0;
        case 0x3193e4u: goto label_3193e4;
        case 0x3193e8u: goto label_3193e8;
        case 0x3193ecu: goto label_3193ec;
        case 0x3193f0u: goto label_3193f0;
        case 0x3193f4u: goto label_3193f4;
        case 0x3193f8u: goto label_3193f8;
        case 0x3193fcu: goto label_3193fc;
        case 0x319400u: goto label_319400;
        case 0x319404u: goto label_319404;
        case 0x319408u: goto label_319408;
        case 0x31940cu: goto label_31940c;
        case 0x319410u: goto label_319410;
        case 0x319414u: goto label_319414;
        case 0x319418u: goto label_319418;
        case 0x31941cu: goto label_31941c;
        case 0x319420u: goto label_319420;
        case 0x319424u: goto label_319424;
        case 0x319428u: goto label_319428;
        case 0x31942cu: goto label_31942c;
        case 0x319430u: goto label_319430;
        case 0x319434u: goto label_319434;
        case 0x319438u: goto label_319438;
        case 0x31943cu: goto label_31943c;
        case 0x319440u: goto label_319440;
        case 0x319444u: goto label_319444;
        case 0x319448u: goto label_319448;
        case 0x31944cu: goto label_31944c;
        default: break;
    }

    ctx->pc = 0x3189e0u;

label_3189e0:
    // 0x3189e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3189e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3189e4:
    // 0x3189e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3189e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3189e8:
    // 0x3189e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3189e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3189ec:
    // 0x3189ec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3189ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3189f0:
    // 0x3189f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3189f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3189f4:
    // 0x3189f4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x3189f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3189f8:
    // 0x3189f8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3189f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3189fc:
    // 0x3189fc: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_318a00:
    if (ctx->pc == 0x318A00u) {
        ctx->pc = 0x318A00u;
            // 0x318a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318A04u;
        goto label_318a04;
    }
    ctx->pc = 0x3189FCu;
    {
        const bool branch_taken_0x3189fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3189FCu;
            // 0x318a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189fc) {
            ctx->pc = 0x318A64u;
            goto label_318a64;
        }
    }
    ctx->pc = 0x318A04u;
label_318a04:
    // 0x318a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318a08:
    // 0x318a08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x318a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_318a0c:
    // 0x318a0c: 0xa2030038  sb          $v1, 0x38($s0)
    ctx->pc = 0x318a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 3));
label_318a10:
    // 0x318a10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318a14:
    // 0x318a14: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x318a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_318a18:
    // 0x318a18: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x318a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318a1c:
    // 0x318a1c: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x318a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318a20:
    // 0x318a20: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x318a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318a24:
    // 0x318a24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x318a24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_318a28:
    // 0x318a28: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x318a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_318a2c:
    // 0x318a2c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x318a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318a30:
    // 0x318a30: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_318a34:
    if (ctx->pc == 0x318A34u) {
        ctx->pc = 0x318A34u;
            // 0x318a34: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->pc = 0x318A38u;
        goto label_318a38;
    }
    ctx->pc = 0x318A30u;
    {
        const bool branch_taken_0x318a30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A30u;
            // 0x318a34: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a30) {
            ctx->pc = 0x318A3Cu;
            goto label_318a3c;
        }
    }
    ctx->pc = 0x318A38u;
label_318a38:
    // 0x318a38: 0xe6040030  swc1        $f4, 0x30($s0)
    ctx->pc = 0x318a38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_318a3c:
    // 0x318a3c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x318a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_318a40:
    // 0x318a40: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x318a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_318a44:
    // 0x318a44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x318a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_318a48:
    // 0x318a48: 0xc04c8f0  jal         func_1323C0
label_318a4c:
    if (ctx->pc == 0x318A4Cu) {
        ctx->pc = 0x318A4Cu;
            // 0x318a4c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x318A50u;
        goto label_318a50;
    }
    ctx->pc = 0x318A48u;
    SET_GPR_U32(ctx, 31, 0x318A50u);
    ctx->pc = 0x318A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318A48u;
            // 0x318a4c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318A50u; }
        if (ctx->pc != 0x318A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318A50u; }
        if (ctx->pc != 0x318A50u) { return; }
    }
    ctx->pc = 0x318A50u;
label_318a50:
    // 0x318a50: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x318a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_318a54:
    // 0x318a54: 0xc04c74c  jal         func_131D30
label_318a58:
    if (ctx->pc == 0x318A58u) {
        ctx->pc = 0x318A58u;
            // 0x318a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318A5Cu;
        goto label_318a5c;
    }
    ctx->pc = 0x318A54u;
    SET_GPR_U32(ctx, 31, 0x318A5Cu);
    ctx->pc = 0x318A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318A54u;
            // 0x318a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318A5Cu; }
        if (ctx->pc != 0x318A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318A5Cu; }
        if (ctx->pc != 0x318A5Cu) { return; }
    }
    ctx->pc = 0x318A5Cu;
label_318a5c:
    // 0x318a5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_318a60:
    if (ctx->pc == 0x318A60u) {
        ctx->pc = 0x318A60u;
            // 0x318a60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x318A64u;
        goto label_318a64;
    }
    ctx->pc = 0x318A5Cu;
    {
        const bool branch_taken_0x318a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A5Cu;
            // 0x318a60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a5c) {
            ctx->pc = 0x318A6Cu;
            goto label_318a6c;
        }
    }
    ctx->pc = 0x318A64u;
label_318a64:
    // 0x318a64: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x318a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
label_318a68:
    // 0x318a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x318a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_318a6c:
    // 0x318a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x318a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_318a70:
    // 0x318a70: 0x3e00008  jr          $ra
label_318a74:
    if (ctx->pc == 0x318A74u) {
        ctx->pc = 0x318A74u;
            // 0x318a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x318A78u;
        goto label_318a78;
    }
    ctx->pc = 0x318A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318A70u;
            // 0x318a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x318A78u;
label_318a78:
    // 0x318a78: 0x0  nop
    ctx->pc = 0x318a78u;
    // NOP
label_318a7c:
    // 0x318a7c: 0x0  nop
    ctx->pc = 0x318a7cu;
    // NOP
label_318a80:
    // 0x318a80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x318a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_318a84:
    // 0x318a84: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x318a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_318a88:
    // 0x318a88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x318a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_318a8c:
    // 0x318a8c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x318a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_318a90:
    // 0x318a90: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x318a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_318a94:
    // 0x318a94: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x318a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_318a98:
    // 0x318a98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x318a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_318a9c:
    // 0x318a9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x318a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_318aa0:
    // 0x318aa0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x318aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_318aa4:
    // 0x318aa4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x318aa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_318aa8:
    // 0x318aa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x318aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_318aac:
    // 0x318aac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x318aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_318ab0:
    // 0x318ab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x318ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_318ab4:
    // 0x318ab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x318ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_318ab8:
    // 0x318ab8: 0x8cbe0e80  lw          $fp, 0xE80($a1)
    ctx->pc = 0x318ab8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3712)));
label_318abc:
    // 0x318abc: 0x8c880044  lw          $t0, 0x44($a0)
    ctx->pc = 0x318abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_318ac0:
    // 0x318ac0: 0x8c650ea4  lw          $a1, 0xEA4($v1)
    ctx->pc = 0x318ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_318ac4:
    // 0x318ac4: 0x8d170d70  lw          $s7, 0xD70($t0)
    ctx->pc = 0x318ac4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3440)));
label_318ac8:
    // 0x318ac8: 0x94830094  lhu         $v1, 0x94($a0)
    ctx->pc = 0x318ac8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
label_318acc:
    // 0x318acc: 0x24b30130  addiu       $s3, $a1, 0x130
    ctx->pc = 0x318accu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
label_318ad0:
    // 0x318ad0: 0x8ca50138  lw          $a1, 0x138($a1)
    ctx->pc = 0x318ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 312)));
label_318ad4:
    // 0x318ad4: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x318ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_318ad8:
    // 0x318ad8: 0x94830072  lhu         $v1, 0x72($a0)
    ctx->pc = 0x318ad8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 114)));
label_318adc:
    // 0x318adc: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x318adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_318ae0:
    // 0x318ae0: 0x94840098  lhu         $a0, 0x98($a0)
    ctx->pc = 0x318ae0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
label_318ae4:
    // 0x318ae4: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x318ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_318ae8:
    // 0x318ae8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x318ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_318aec:
    // 0x318aec: 0xe59021  addu        $s2, $a3, $a1
    ctx->pc = 0x318aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_318af0:
    // 0x318af0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x318af0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_318af4:
    // 0x318af4: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x318af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_318af8:
    // 0x318af8: 0xe48821  addu        $s1, $a3, $a0
    ctx->pc = 0x318af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_318afc:
    // 0x318afc: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x318afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_318b00:
    // 0x318b00: 0x96240020  lhu         $a0, 0x20($s1)
    ctx->pc = 0x318b00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_318b04:
    // 0x318b04: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x318b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_318b08:
    // 0x318b08: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x318b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_318b0c:
    // 0x318b0c: 0x10800073  beqz        $a0, . + 4 + (0x73 << 2)
label_318b10:
    if (ctx->pc == 0x318B10u) {
        ctx->pc = 0x318B10u;
            // 0x318b10: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x318B14u;
        goto label_318b14;
    }
    ctx->pc = 0x318B0Cu;
    {
        const bool branch_taken_0x318b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318B0Cu;
            // 0x318b10: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b0c) {
            ctx->pc = 0x318CDCu;
            goto label_318cdc;
        }
    }
    ctx->pc = 0x318B14u;
label_318b14:
    // 0x318b14: 0x8d030da0  lw          $v1, 0xDA0($t0)
    ctx->pc = 0x318b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3488)));
label_318b18:
    // 0x318b18: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x318b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_318b1c:
    // 0x318b1c: 0x54600070  bnel        $v1, $zero, . + 4 + (0x70 << 2)
label_318b20:
    if (ctx->pc == 0x318B20u) {
        ctx->pc = 0x318B20u;
            // 0x318b20: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x318B24u;
        goto label_318b24;
    }
    ctx->pc = 0x318B1Cu;
    {
        const bool branch_taken_0x318b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318b1c) {
            ctx->pc = 0x318B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318B1Cu;
            // 0x318b20: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318CE0u;
            goto label_318ce0;
        }
    }
    ctx->pc = 0x318B24u;
label_318b24:
    // 0x318b24: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x318b24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_318b28:
    // 0x318b28: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x318b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_318b2c:
    // 0x318b2c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x318b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_318b30:
    // 0x318b30: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x318b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_318b34:
    // 0x318b34: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x318b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_318b38:
    // 0x318b38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x318b38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318b3c:
    // 0x318b3c: 0xc0788fc  jal         func_1E23F0
label_318b40:
    if (ctx->pc == 0x318B40u) {
        ctx->pc = 0x318B40u;
            // 0x318b40: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x318B44u;
        goto label_318b44;
    }
    ctx->pc = 0x318B3Cu;
    SET_GPR_U32(ctx, 31, 0x318B44u);
    ctx->pc = 0x318B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318B3Cu;
            // 0x318b40: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B44u; }
        if (ctx->pc != 0x318B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B44u; }
        if (ctx->pc != 0x318B44u) { return; }
    }
    ctx->pc = 0x318B44u;
label_318b44:
    // 0x318b44: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x318b44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_318b48:
    // 0x318b48: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x318b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_318b4c:
    // 0x318b4c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_318b50:
    if (ctx->pc == 0x318B50u) {
        ctx->pc = 0x318B54u;
        goto label_318b54;
    }
    ctx->pc = 0x318B4Cu;
    {
        const bool branch_taken_0x318b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318b4c) {
            ctx->pc = 0x318B80u;
            goto label_318b80;
        }
    }
    ctx->pc = 0x318B54u;
label_318b54:
    // 0x318b54: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x318b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_318b58:
    // 0x318b58: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x318b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_318b5c:
    // 0x318b5c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x318b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_318b60:
    // 0x318b60: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x318b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_318b64:
    // 0x318b64: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x318b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_318b68:
    // 0x318b68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x318b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318b6c:
    // 0x318b6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x318b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_318b70:
    // 0x318b70: 0x27a700f8  addiu       $a3, $sp, 0xF8
    ctx->pc = 0x318b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_318b74:
    // 0x318b74: 0xc0a997c  jal         func_2A65F0
label_318b78:
    if (ctx->pc == 0x318B78u) {
        ctx->pc = 0x318B78u;
            // 0x318b78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x318B7Cu;
        goto label_318b7c;
    }
    ctx->pc = 0x318B74u;
    SET_GPR_U32(ctx, 31, 0x318B7Cu);
    ctx->pc = 0x318B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318B74u;
            // 0x318b78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B7Cu; }
        if (ctx->pc != 0x318B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318B7Cu; }
        if (ctx->pc != 0x318B7Cu) { return; }
    }
    ctx->pc = 0x318B7Cu;
label_318b7c:
    // 0x318b7c: 0x0  nop
    ctx->pc = 0x318b7cu;
    // NOP
label_318b80:
    // 0x318b80: 0x101843  sra         $v1, $s0, 1
    ctx->pc = 0x318b80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
label_318b84:
    // 0x318b84: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x318b84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_318b88:
    // 0x318b88: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x318b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_318b8c:
    // 0x318b8c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_318b90:
    if (ctx->pc == 0x318B90u) {
        ctx->pc = 0x318B90u;
            // 0x318b90: 0x3074ffff  andi        $s4, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x318B94u;
        goto label_318b94;
    }
    ctx->pc = 0x318B8Cu;
    {
        const bool branch_taken_0x318b8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x318B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318B8Cu;
            // 0x318b90: 0x3074ffff  andi        $s4, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b8c) {
            ctx->pc = 0x318B44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318b44;
        }
    }
    ctx->pc = 0x318B94u;
label_318b94:
    // 0x318b94: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x318b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_318b98:
    // 0x318b98: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_318b9c:
    if (ctx->pc == 0x318B9Cu) {
        ctx->pc = 0x318BA0u;
        goto label_318ba0;
    }
    ctx->pc = 0x318B98u;
    {
        const bool branch_taken_0x318b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318b98) {
            ctx->pc = 0x318CC8u;
            goto label_318cc8;
        }
    }
    ctx->pc = 0x318BA0u;
label_318ba0:
    // 0x318ba0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x318ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_318ba4:
    // 0x318ba4: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x318ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_318ba8:
    // 0x318ba8: 0xc074740  jal         func_1D1D00
label_318bac:
    if (ctx->pc == 0x318BACu) {
        ctx->pc = 0x318BACu;
            // 0x318bac: 0x8fb000f0  lw          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x318BB0u;
        goto label_318bb0;
    }
    ctx->pc = 0x318BA8u;
    SET_GPR_U32(ctx, 31, 0x318BB0u);
    ctx->pc = 0x318BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318BA8u;
            // 0x318bac: 0x8fb000f0  lw          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318BB0u; }
        if (ctx->pc != 0x318BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318BB0u; }
        if (ctx->pc != 0x318BB0u) { return; }
    }
    ctx->pc = 0x318BB0u;
label_318bb0:
    // 0x318bb0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x318bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_318bb4:
    // 0x318bb4: 0x8eb90030  lw          $t9, 0x30($s5)
    ctx->pc = 0x318bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_318bb8:
    // 0x318bb8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x318bb8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_318bbc:
    // 0x318bbc: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x318bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_318bc0:
    // 0x318bc0: 0x8fd60968  lw          $s6, 0x968($fp)
    ctx->pc = 0x318bc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2408)));
label_318bc4:
    // 0x318bc4: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x318bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_318bc8:
    // 0x318bc8: 0x8c620d6c  lw          $v0, 0xD6C($v1)
    ctx->pc = 0x318bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
label_318bcc:
    // 0x318bcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_318bd0:
    // 0x318bd0: 0xa010  mfhi        $s4
    ctx->pc = 0x318bd0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_318bd4:
    // 0x318bd4: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x318bd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_318bd8:
    // 0x318bd8: 0x320f809  jalr        $t9
label_318bdc:
    if (ctx->pc == 0x318BDCu) {
        ctx->pc = 0x318BDCu;
            // 0x318bdc: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->pc = 0x318BE0u;
        goto label_318be0;
    }
    ctx->pc = 0x318BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x318BE0u);
        ctx->pc = 0x318BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318BD8u;
            // 0x318bdc: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x318BE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x318BE0u; }
            if (ctx->pc != 0x318BE0u) { return; }
        }
        }
    }
    ctx->pc = 0x318BE0u;
label_318be0:
    // 0x318be0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x318be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_318be4:
    // 0x318be4: 0x1620c0  sll         $a0, $s6, 3
    ctx->pc = 0x318be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_318be8:
    // 0x318be8: 0x962023  subu        $a0, $a0, $s6
    ctx->pc = 0x318be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_318bec:
    // 0x318bec: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x318becu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_318bf0:
    // 0x318bf0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x318bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_318bf4:
    // 0x318bf4: 0x24c6eea0  addiu       $a2, $a2, -0x1160
    ctx->pc = 0x318bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962848));
label_318bf8:
    // 0x318bf8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x318bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_318bfc:
    // 0x318bfc: 0x963821  addu        $a3, $a0, $s6
    ctx->pc = 0x318bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_318c00:
    // 0x318c00: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x318c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_318c04:
    // 0x318c04: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x318c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_318c08:
    // 0x318c08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x318c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_318c0c:
    // 0x318c0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318c10:
    // 0x318c10: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x318c10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_318c14:
    // 0x318c14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x318c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_318c18:
    // 0x318c18: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x318c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_318c1c:
    // 0x318c1c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x318c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_318c20:
    // 0x318c20: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x318c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_318c24:
    // 0x318c24: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x318c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_318c28:
    // 0x318c28: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x318c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_318c2c:
    // 0x318c2c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x318c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_318c30:
    // 0x318c30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x318c30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_318c34:
    // 0x318c34: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x318c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_318c38:
    // 0x318c38: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x318c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_318c3c:
    // 0x318c3c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x318c3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_318c40:
    // 0x318c40: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x318c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_318c44:
    // 0x318c44: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x318c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_318c48:
    // 0x318c48: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x318c48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_318c4c:
    // 0x318c4c: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x318c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_318c50:
    // 0x318c50: 0x50200017  beql        $at, $zero, . + 4 + (0x17 << 2)
label_318c54:
    if (ctx->pc == 0x318C54u) {
        ctx->pc = 0x318C54u;
            // 0x318c54: 0x283a023  subu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x318C58u;
        goto label_318c58;
    }
    ctx->pc = 0x318C50u;
    {
        const bool branch_taken_0x318c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c50) {
            ctx->pc = 0x318C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318C50u;
            // 0x318c54: 0x283a023  subu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318CB0u;
            goto label_318cb0;
        }
    }
    ctx->pc = 0x318C58u;
label_318c58:
    // 0x318c58: 0xc0bd8fc  jal         func_2F63F0
label_318c5c:
    if (ctx->pc == 0x318C5Cu) {
        ctx->pc = 0x318C5Cu;
            // 0x318c5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318C60u;
        goto label_318c60;
    }
    ctx->pc = 0x318C58u;
    SET_GPR_U32(ctx, 31, 0x318C60u);
    ctx->pc = 0x318C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318C58u;
            // 0x318c5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63F0u;
    if (runtime->hasFunction(0x2F63F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C60u; }
        if (ctx->pc != 0x318C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F63F0_0x2f63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C60u; }
        if (ctx->pc != 0x318C60u) { return; }
    }
    ctx->pc = 0x318C60u;
label_318c60:
    // 0x318c60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x318c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_318c64:
    // 0x318c64: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
label_318c68:
    if (ctx->pc == 0x318C68u) {
        ctx->pc = 0x318C6Cu;
        goto label_318c6c;
    }
    ctx->pc = 0x318C64u;
    {
        const bool branch_taken_0x318c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x318c64) {
            ctx->pc = 0x318CC8u;
            goto label_318cc8;
        }
    }
    ctx->pc = 0x318C6Cu;
label_318c6c:
    // 0x318c6c: 0x8ee50050  lw          $a1, 0x50($s7)
    ctx->pc = 0x318c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
label_318c70:
    // 0x318c70: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x318c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_318c74:
    // 0x318c74: 0x24634df0  addiu       $v1, $v1, 0x4DF0
    ctx->pc = 0x318c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19952));
label_318c78:
    // 0x318c78: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x318c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_318c7c:
    // 0x318c7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x318c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_318c80:
    // 0x318c80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x318c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_318c84:
    // 0x318c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x318c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_318c88:
    // 0x318c88: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x318c88u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_318c8c:
    // 0x318c8c: 0xc075ecc  jal         func_1D7B30
label_318c90:
    if (ctx->pc == 0x318C90u) {
        ctx->pc = 0x318C90u;
            // 0x318c90: 0x8ea40044  lw          $a0, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->pc = 0x318C94u;
        goto label_318c94;
    }
    ctx->pc = 0x318C8Cu;
    SET_GPR_U32(ctx, 31, 0x318C94u);
    ctx->pc = 0x318C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318C8Cu;
            // 0x318c90: 0x8ea40044  lw          $a0, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C94u; }
        if (ctx->pc != 0x318C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318C94u; }
        if (ctx->pc != 0x318C94u) { return; }
    }
    ctx->pc = 0x318C94u;
label_318c94:
    // 0x318c94: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x318c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_318c98:
    // 0x318c98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x318c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_318c9c:
    // 0x318c9c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x318c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
label_318ca0:
    // 0x318ca0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x318ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_318ca4:
    // 0x318ca4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x318ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_318ca8:
    // 0x318ca8: 0x10000007  b           . + 4 + (0x7 << 2)
label_318cac:
    if (ctx->pc == 0x318CACu) {
        ctx->pc = 0x318CACu;
            // 0x318cac: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x318CB0u;
        goto label_318cb0;
    }
    ctx->pc = 0x318CA8u;
    {
        const bool branch_taken_0x318ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318CA8u;
            // 0x318cac: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ca8) {
            ctx->pc = 0x318CC8u;
            goto label_318cc8;
        }
    }
    ctx->pc = 0x318CB0u;
label_318cb0:
    // 0x318cb0: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x318cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_318cb4:
    // 0x318cb4: 0x2061826  xor         $v1, $s0, $a2
    ctx->pc = 0x318cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 6));
label_318cb8:
    // 0x318cb8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x318cb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_318cbc:
    // 0x318cbc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x318cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_318cc0:
    // 0x318cc0: 0x5460ffde  bnel        $v1, $zero, . + 4 + (-0x22 << 2)
label_318cc4:
    if (ctx->pc == 0x318CC4u) {
        ctx->pc = 0x318CC4u;
            // 0x318cc4: 0x10203c  dsll32      $a0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x318CC8u;
        goto label_318cc8;
    }
    ctx->pc = 0x318CC0u;
    {
        const bool branch_taken_0x318cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318cc0) {
            ctx->pc = 0x318CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318CC0u;
            // 0x318cc4: 0x10203c  dsll32      $a0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318c3c;
        }
    }
    ctx->pc = 0x318CC8u;
label_318cc8:
    // 0x318cc8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x318cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_318ccc:
    // 0x318ccc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_318cd0:
    if (ctx->pc == 0x318CD0u) {
        ctx->pc = 0x318CD4u;
        goto label_318cd4;
    }
    ctx->pc = 0x318CCCu;
    {
        const bool branch_taken_0x318ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ccc) {
            ctx->pc = 0x318CDCu;
            goto label_318cdc;
        }
    }
    ctx->pc = 0x318CD4u;
label_318cd4:
    // 0x318cd4: 0xc0400a8  jal         func_1002A0
label_318cd8:
    if (ctx->pc == 0x318CD8u) {
        ctx->pc = 0x318CDCu;
        goto label_318cdc;
    }
    ctx->pc = 0x318CD4u;
    SET_GPR_U32(ctx, 31, 0x318CDCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318CDCu; }
        if (ctx->pc != 0x318CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318CDCu; }
        if (ctx->pc != 0x318CDCu) { return; }
    }
    ctx->pc = 0x318CDCu;
label_318cdc:
    // 0x318cdc: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x318cdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_318ce0:
    // 0x318ce0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x318ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_318ce4:
    // 0x318ce4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_318ce8:
    if (ctx->pc == 0x318CE8u) {
        ctx->pc = 0x318CE8u;
            // 0x318ce8: 0xa2a00164  sb          $zero, 0x164($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 356), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x318CECu;
        goto label_318cec;
    }
    ctx->pc = 0x318CE4u;
    {
        const bool branch_taken_0x318ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ce4) {
            ctx->pc = 0x318CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318CE4u;
            // 0x318ce8: 0xa2a00164  sb          $zero, 0x164($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 356), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318D04u;
            goto label_318d04;
        }
    }
    ctx->pc = 0x318CECu;
label_318cec:
    // 0x318cec: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x318cecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_318cf0:
    // 0x318cf0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x318cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_318cf4:
    // 0x318cf4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_318cf8:
    if (ctx->pc == 0x318CF8u) {
        ctx->pc = 0x318CF8u;
            // 0x318cf8: 0x96240004  lhu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x318CFCu;
        goto label_318cfc;
    }
    ctx->pc = 0x318CF4u;
    {
        const bool branch_taken_0x318cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318cf4) {
            ctx->pc = 0x318CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318CF4u;
            // 0x318cf8: 0x96240004  lhu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318D08u;
            goto label_318d08;
        }
    }
    ctx->pc = 0x318CFCu;
label_318cfc:
    // 0x318cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318d00:
    // 0x318d00: 0xa2a30164  sb          $v1, 0x164($s5)
    ctx->pc = 0x318d00u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 356), (uint8_t)GPR_U32(ctx, 3));
label_318d04:
    // 0x318d04: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x318d04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_318d08:
    // 0x318d08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x318d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_318d0c:
    // 0x318d0c: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
label_318d10:
    if (ctx->pc == 0x318D10u) {
        ctx->pc = 0x318D10u;
            // 0x318d10: 0xa2a00165  sb          $zero, 0x165($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x318D14u;
        goto label_318d14;
    }
    ctx->pc = 0x318D0Cu;
    {
        const bool branch_taken_0x318d0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x318d0c) {
            ctx->pc = 0x318D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318D0Cu;
            // 0x318d10: 0xa2a00165  sb          $zero, 0x165($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318D34u;
            goto label_318d34;
        }
    }
    ctx->pc = 0x318D14u;
label_318d14:
    // 0x318d14: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x318d14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_318d18:
    // 0x318d18: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x318d18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_318d1c:
    // 0x318d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318d20:
    // 0x318d20: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_318d24:
    if (ctx->pc == 0x318D24u) {
        ctx->pc = 0x318D28u;
        goto label_318d28;
    }
    ctx->pc = 0x318D20u;
    {
        const bool branch_taken_0x318d20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x318d20) {
            ctx->pc = 0x318D30u;
            goto label_318d30;
        }
    }
    ctx->pc = 0x318D28u;
label_318d28:
    // 0x318d28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x318d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_318d2c:
    // 0x318d2c: 0xaea30084  sw          $v1, 0x84($s5)
    ctx->pc = 0x318d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_318d30:
    // 0x318d30: 0xa2a00165  sb          $zero, 0x165($s5)
    ctx->pc = 0x318d30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 0));
label_318d34:
    // 0x318d34: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x318d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_318d38:
    // 0x318d38: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x318d38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_318d3c:
    // 0x318d3c: 0x54830021  bnel        $a0, $v1, . + 4 + (0x21 << 2)
label_318d40:
    if (ctx->pc == 0x318D40u) {
        ctx->pc = 0x318D40u;
            // 0x318d40: 0xa2a00188  sb          $zero, 0x188($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x318D44u;
        goto label_318d44;
    }
    ctx->pc = 0x318D3Cu;
    {
        const bool branch_taken_0x318d3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x318d3c) {
            ctx->pc = 0x318D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318D3Cu;
            // 0x318d40: 0xa2a00188  sb          $zero, 0x188($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318DC4u;
            goto label_318dc4;
        }
    }
    ctx->pc = 0x318D44u;
label_318d44:
    // 0x318d44: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x318d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_318d48:
    // 0x318d48: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x318d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_318d4c:
    // 0x318d4c: 0x8c638b10  lw          $v1, -0x74F0($v1)
    ctx->pc = 0x318d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937360)));
label_318d50:
    // 0x318d50: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_318d54:
    if (ctx->pc == 0x318D54u) {
        ctx->pc = 0x318D54u;
            // 0x318d54: 0xc4810a7c  lwc1        $f1, 0xA7C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x318D58u;
        goto label_318d58;
    }
    ctx->pc = 0x318D50u;
    {
        const bool branch_taken_0x318d50 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x318D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D50u;
            // 0x318d54: 0xc4810a7c  lwc1        $f1, 0xA7C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d50) {
            ctx->pc = 0x318D64u;
            goto label_318d64;
        }
    }
    ctx->pc = 0x318D58u;
label_318d58:
    // 0x318d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318d5c:
    // 0x318d5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_318d60:
    if (ctx->pc == 0x318D60u) {
        ctx->pc = 0x318D60u;
            // 0x318d60: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x318D64u;
        goto label_318d64;
    }
    ctx->pc = 0x318D5Cu;
    {
        const bool branch_taken_0x318d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318D5Cu;
            // 0x318d60: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d5c) {
            ctx->pc = 0x318D80u;
            goto label_318d80;
        }
    }
    ctx->pc = 0x318D64u;
label_318d64:
    // 0x318d64: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x318d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_318d68:
    // 0x318d68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x318d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_318d6c:
    // 0x318d6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x318d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_318d70:
    // 0x318d70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x318d70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318d74:
    // 0x318d74: 0x0  nop
    ctx->pc = 0x318d74u;
    // NOP
label_318d78:
    // 0x318d78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_318d7c:
    // 0x318d7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_318d80:
    // 0x318d80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d84:
    // 0x318d84: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_318d88:
    if (ctx->pc == 0x318D88u) {
        ctx->pc = 0x318D8Cu;
        goto label_318d8c;
    }
    ctx->pc = 0x318D84u;
    {
        const bool branch_taken_0x318d84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318d84) {
            ctx->pc = 0x318DC0u;
            goto label_318dc0;
        }
    }
    ctx->pc = 0x318D8Cu;
label_318d8c:
    // 0x318d8c: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x318d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_318d90:
    // 0x318d90: 0x8c630d78  lw          $v1, 0xD78($v1)
    ctx->pc = 0x318d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
label_318d94:
    // 0x318d94: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x318d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_318d98:
    // 0x318d98: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x318d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_318d9c:
    // 0x318d9c: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_318da0:
    if (ctx->pc == 0x318DA0u) {
        ctx->pc = 0x318DA0u;
            // 0x318da0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x318DA4u;
        goto label_318da4;
    }
    ctx->pc = 0x318D9Cu;
    {
        const bool branch_taken_0x318d9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x318d9c) {
            ctx->pc = 0x318DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318D9Cu;
            // 0x318da0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318DBCu;
            goto label_318dbc;
        }
    }
    ctx->pc = 0x318DA4u;
label_318da4:
    // 0x318da4: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x318da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_318da8:
    // 0x318da8: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_318dac:
    if (ctx->pc == 0x318DACu) {
        ctx->pc = 0x318DB0u;
        goto label_318db0;
    }
    ctx->pc = 0x318DA8u;
    {
        const bool branch_taken_0x318da8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x318da8) {
            ctx->pc = 0x318DC0u;
            goto label_318dc0;
        }
    }
    ctx->pc = 0x318DB0u;
label_318db0:
    // 0x318db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318db4:
    // 0x318db4: 0x10000002  b           . + 4 + (0x2 << 2)
label_318db8:
    if (ctx->pc == 0x318DB8u) {
        ctx->pc = 0x318DB8u;
            // 0x318db8: 0xa2a30165  sb          $v1, 0x165($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x318DBCu;
        goto label_318dbc;
    }
    ctx->pc = 0x318DB4u;
    {
        const bool branch_taken_0x318db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318DB4u;
            // 0x318db8: 0xa2a30165  sb          $v1, 0x165($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318db4) {
            ctx->pc = 0x318DC0u;
            goto label_318dc0;
        }
    }
    ctx->pc = 0x318DBCu;
label_318dbc:
    // 0x318dbc: 0xa2a30165  sb          $v1, 0x165($s5)
    ctx->pc = 0x318dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 357), (uint8_t)GPR_U32(ctx, 3));
label_318dc0:
    // 0x318dc0: 0xa2a00188  sb          $zero, 0x188($s5)
    ctx->pc = 0x318dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 392), (uint8_t)GPR_U32(ctx, 0));
label_318dc4:
    // 0x318dc4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x318dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_318dc8:
    // 0x318dc8: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x318dc8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_318dcc:
    // 0x318dcc: 0x54830069  bnel        $a0, $v1, . + 4 + (0x69 << 2)
label_318dd0:
    if (ctx->pc == 0x318DD0u) {
        ctx->pc = 0x318DD0u;
            // 0x318dd0: 0x96460004  lhu         $a2, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x318DD4u;
        goto label_318dd4;
    }
    ctx->pc = 0x318DCCu;
    {
        const bool branch_taken_0x318dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x318dcc) {
            ctx->pc = 0x318DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318DCCu;
            // 0x318dd0: 0x96460004  lhu         $a2, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318F74u;
            goto label_318f74;
        }
    }
    ctx->pc = 0x318DD4u;
label_318dd4:
    // 0x318dd4: 0x8fc20968  lw          $v0, 0x968($fp)
    ctx->pc = 0x318dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2408)));
label_318dd8:
    // 0x318dd8: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x318dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
label_318ddc:
    // 0x318ddc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x318ddcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_318de0:
    // 0x318de0: 0x50200039  beql        $at, $zero, . + 4 + (0x39 << 2)
label_318de4:
    if (ctx->pc == 0x318DE4u) {
        ctx->pc = 0x318DE4u;
            // 0x318de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318DE8u;
        goto label_318de8;
    }
    ctx->pc = 0x318DE0u;
    {
        const bool branch_taken_0x318de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x318de0) {
            ctx->pc = 0x318DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318DE0u;
            // 0x318de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318EC8u;
            goto label_318ec8;
        }
    }
    ctx->pc = 0x318DE8u;
label_318de8:
    // 0x318de8: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x318de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_318dec:
    // 0x318dec: 0xc0bd780  jal         func_2F5E00
label_318df0:
    if (ctx->pc == 0x318DF0u) {
        ctx->pc = 0x318DF0u;
            // 0x318df0: 0x8c440d70  lw          $a0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->pc = 0x318DF4u;
        goto label_318df4;
    }
    ctx->pc = 0x318DECu;
    SET_GPR_U32(ctx, 31, 0x318DF4u);
    ctx->pc = 0x318DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318DECu;
            // 0x318df0: 0x8c440d70  lw          $a0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318DF4u; }
        if (ctx->pc != 0x318DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318DF4u; }
        if (ctx->pc != 0x318DF4u) { return; }
    }
    ctx->pc = 0x318DF4u;
label_318df4:
    // 0x318df4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x318df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_318df8:
    // 0x318df8: 0x1043005d  beq         $v0, $v1, . + 4 + (0x5D << 2)
label_318dfc:
    if (ctx->pc == 0x318DFCu) {
        ctx->pc = 0x318E00u;
        goto label_318e00;
    }
    ctx->pc = 0x318DF8u;
    {
        const bool branch_taken_0x318df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x318df8) {
            ctx->pc = 0x318F70u;
            goto label_318f70;
        }
    }
    ctx->pc = 0x318E00u;
label_318e00:
    // 0x318e00: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x318e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_318e04:
    // 0x318e04: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x318e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_318e08:
    // 0x318e08: 0x8c840518  lw          $a0, 0x518($a0)
    ctx->pc = 0x318e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1304)));
label_318e0c:
    // 0x318e0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x318e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_318e10:
    // 0x318e10: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
label_318e14:
    if (ctx->pc == 0x318E14u) {
        ctx->pc = 0x318E18u;
        goto label_318e18;
    }
    ctx->pc = 0x318E10u;
    {
        const bool branch_taken_0x318e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318e10) {
            ctx->pc = 0x318F70u;
            goto label_318f70;
        }
    }
    ctx->pc = 0x318E18u;
label_318e18:
    // 0x318e18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x318e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_318e1c:
    // 0x318e1c: 0xc0c5ad0  jal         func_316B40
label_318e20:
    if (ctx->pc == 0x318E20u) {
        ctx->pc = 0x318E20u;
            // 0x318e20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318E24u;
        goto label_318e24;
    }
    ctx->pc = 0x318E1Cu;
    SET_GPR_U32(ctx, 31, 0x318E24u);
    ctx->pc = 0x318E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318E1Cu;
            // 0x318e20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318E24u; }
        if (ctx->pc != 0x318E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316B40_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318E24u; }
        if (ctx->pc != 0x318E24u) { return; }
    }
    ctx->pc = 0x318E24u;
label_318e24:
    // 0x318e24: 0xaea2018c  sw          $v0, 0x18C($s5)
    ctx->pc = 0x318e24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
label_318e28:
    // 0x318e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318e2c:
    // 0x318e2c: 0xa2a30188  sb          $v1, 0x188($s5)
    ctx->pc = 0x318e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 392), (uint8_t)GPR_U32(ctx, 3));
label_318e30:
    // 0x318e30: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x318e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_318e34:
    // 0x318e34: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x318e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_318e38:
    // 0x318e38: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x318e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_318e3c:
    // 0x318e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318e40:
    // 0x318e40: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x318e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318e44:
    // 0x318e44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318e48:
    // 0x318e48: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_318e4c:
    if (ctx->pc == 0x318E4Cu) {
        ctx->pc = 0x318E50u;
        goto label_318e50;
    }
    ctx->pc = 0x318E48u;
    {
        const bool branch_taken_0x318e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318e48) {
            ctx->pc = 0x318E8Cu;
            goto label_318e8c;
        }
    }
    ctx->pc = 0x318E50u;
label_318e50:
    // 0x318e50: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x318e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_318e54:
    // 0x318e54: 0x8c638b20  lw          $v1, -0x74E0($v1)
    ctx->pc = 0x318e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937376)));
label_318e58:
    // 0x318e58: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_318e5c:
    if (ctx->pc == 0x318E5Cu) {
        ctx->pc = 0x318E5Cu;
            // 0x318e5c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x318E60u;
        goto label_318e60;
    }
    ctx->pc = 0x318E58u;
    {
        const bool branch_taken_0x318e58 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x318e58) {
            ctx->pc = 0x318E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318E58u;
            // 0x318e5c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318E6Cu;
            goto label_318e6c;
        }
    }
    ctx->pc = 0x318E60u;
label_318e60:
    // 0x318e60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318e64:
    // 0x318e64: 0x10000007  b           . + 4 + (0x7 << 2)
label_318e68:
    if (ctx->pc == 0x318E68u) {
        ctx->pc = 0x318E68u;
            // 0x318e68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x318E6Cu;
        goto label_318e6c;
    }
    ctx->pc = 0x318E64u;
    {
        const bool branch_taken_0x318e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318E64u;
            // 0x318e68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e64) {
            ctx->pc = 0x318E84u;
            goto label_318e84;
        }
    }
    ctx->pc = 0x318E6Cu;
label_318e6c:
    // 0x318e6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x318e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_318e70:
    // 0x318e70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x318e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_318e74:
    // 0x318e74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x318e74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318e78:
    // 0x318e78: 0x0  nop
    ctx->pc = 0x318e78u;
    // NOP
label_318e7c:
    // 0x318e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_318e80:
    // 0x318e80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_318e84:
    // 0x318e84: 0x1000003a  b           . + 4 + (0x3A << 2)
label_318e88:
    if (ctx->pc == 0x318E88u) {
        ctx->pc = 0x318E88u;
            // 0x318e88: 0xe6a00190  swc1        $f0, 0x190($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
        ctx->pc = 0x318E8Cu;
        goto label_318e8c;
    }
    ctx->pc = 0x318E84u;
    {
        const bool branch_taken_0x318e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318E84u;
            // 0x318e88: 0xe6a00190  swc1        $f0, 0x190($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e84) {
            ctx->pc = 0x318F70u;
            goto label_318f70;
        }
    }
    ctx->pc = 0x318E8Cu;
label_318e8c:
    // 0x318e8c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x318e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_318e90:
    // 0x318e90: 0x8c638b18  lw          $v1, -0x74E8($v1)
    ctx->pc = 0x318e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937368)));
label_318e94:
    // 0x318e94: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_318e98:
    if (ctx->pc == 0x318E98u) {
        ctx->pc = 0x318E98u;
            // 0x318e98: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x318E9Cu;
        goto label_318e9c;
    }
    ctx->pc = 0x318E94u;
    {
        const bool branch_taken_0x318e94 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x318e94) {
            ctx->pc = 0x318E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318E94u;
            // 0x318e98: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318EA8u;
            goto label_318ea8;
        }
    }
    ctx->pc = 0x318E9Cu;
label_318e9c:
    // 0x318e9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318ea0:
    // 0x318ea0: 0x10000007  b           . + 4 + (0x7 << 2)
label_318ea4:
    if (ctx->pc == 0x318EA4u) {
        ctx->pc = 0x318EA4u;
            // 0x318ea4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x318EA8u;
        goto label_318ea8;
    }
    ctx->pc = 0x318EA0u;
    {
        const bool branch_taken_0x318ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318EA0u;
            // 0x318ea4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ea0) {
            ctx->pc = 0x318EC0u;
            goto label_318ec0;
        }
    }
    ctx->pc = 0x318EA8u;
label_318ea8:
    // 0x318ea8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x318ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_318eac:
    // 0x318eac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x318eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_318eb0:
    // 0x318eb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x318eb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318eb4:
    // 0x318eb4: 0x0  nop
    ctx->pc = 0x318eb4u;
    // NOP
label_318eb8:
    // 0x318eb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_318ebc:
    // 0x318ebc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_318ec0:
    // 0x318ec0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_318ec4:
    if (ctx->pc == 0x318EC4u) {
        ctx->pc = 0x318EC4u;
            // 0x318ec4: 0xe6a00190  swc1        $f0, 0x190($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
        ctx->pc = 0x318EC8u;
        goto label_318ec8;
    }
    ctx->pc = 0x318EC0u;
    {
        const bool branch_taken_0x318ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318EC0u;
            // 0x318ec4: 0xe6a00190  swc1        $f0, 0x190($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ec0) {
            ctx->pc = 0x318F70u;
            goto label_318f70;
        }
    }
    ctx->pc = 0x318EC8u;
label_318ec8:
    // 0x318ec8: 0xc0c5ad0  jal         func_316B40
label_318ecc:
    if (ctx->pc == 0x318ECCu) {
        ctx->pc = 0x318ECCu;
            // 0x318ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318ED0u;
        goto label_318ed0;
    }
    ctx->pc = 0x318EC8u;
    SET_GPR_U32(ctx, 31, 0x318ED0u);
    ctx->pc = 0x318ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318EC8u;
            // 0x318ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318ED0u; }
        if (ctx->pc != 0x318ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316B40_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318ED0u; }
        if (ctx->pc != 0x318ED0u) { return; }
    }
    ctx->pc = 0x318ED0u;
label_318ed0:
    // 0x318ed0: 0xaea2018c  sw          $v0, 0x18C($s5)
    ctx->pc = 0x318ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
label_318ed4:
    // 0x318ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318ed8:
    // 0x318ed8: 0xa2a30188  sb          $v1, 0x188($s5)
    ctx->pc = 0x318ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 392), (uint8_t)GPR_U32(ctx, 3));
label_318edc:
    // 0x318edc: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x318edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_318ee0:
    // 0x318ee0: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x318ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_318ee4:
    // 0x318ee4: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x318ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_318ee8:
    // 0x318ee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318eec:
    // 0x318eec: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x318eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318ef0:
    // 0x318ef0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318ef4:
    // 0x318ef4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_318ef8:
    if (ctx->pc == 0x318EF8u) {
        ctx->pc = 0x318EFCu;
        goto label_318efc;
    }
    ctx->pc = 0x318EF4u;
    {
        const bool branch_taken_0x318ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318ef4) {
            ctx->pc = 0x318F38u;
            goto label_318f38;
        }
    }
    ctx->pc = 0x318EFCu;
label_318efc:
    // 0x318efc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x318efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_318f00:
    // 0x318f00: 0x8c638b20  lw          $v1, -0x74E0($v1)
    ctx->pc = 0x318f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937376)));
label_318f04:
    // 0x318f04: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_318f08:
    if (ctx->pc == 0x318F08u) {
        ctx->pc = 0x318F08u;
            // 0x318f08: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x318F0Cu;
        goto label_318f0c;
    }
    ctx->pc = 0x318F04u;
    {
        const bool branch_taken_0x318f04 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x318f04) {
            ctx->pc = 0x318F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318F04u;
            // 0x318f08: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318F18u;
            goto label_318f18;
        }
    }
    ctx->pc = 0x318F0Cu;
label_318f0c:
    // 0x318f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318f10:
    // 0x318f10: 0x10000007  b           . + 4 + (0x7 << 2)
label_318f14:
    if (ctx->pc == 0x318F14u) {
        ctx->pc = 0x318F14u;
            // 0x318f14: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x318F18u;
        goto label_318f18;
    }
    ctx->pc = 0x318F10u;
    {
        const bool branch_taken_0x318f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318F10u;
            // 0x318f14: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f10) {
            ctx->pc = 0x318F30u;
            goto label_318f30;
        }
    }
    ctx->pc = 0x318F18u;
label_318f18:
    // 0x318f18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x318f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_318f1c:
    // 0x318f1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x318f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_318f20:
    // 0x318f20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x318f20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318f24:
    // 0x318f24: 0x0  nop
    ctx->pc = 0x318f24u;
    // NOP
label_318f28:
    // 0x318f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_318f2c:
    // 0x318f2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318f2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_318f30:
    // 0x318f30: 0x1000000f  b           . + 4 + (0xF << 2)
label_318f34:
    if (ctx->pc == 0x318F34u) {
        ctx->pc = 0x318F34u;
            // 0x318f34: 0xe6a00190  swc1        $f0, 0x190($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
        ctx->pc = 0x318F38u;
        goto label_318f38;
    }
    ctx->pc = 0x318F30u;
    {
        const bool branch_taken_0x318f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318F30u;
            // 0x318f34: 0xe6a00190  swc1        $f0, 0x190($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f30) {
            ctx->pc = 0x318F70u;
            goto label_318f70;
        }
    }
    ctx->pc = 0x318F38u;
label_318f38:
    // 0x318f38: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x318f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_318f3c:
    // 0x318f3c: 0x8c638b18  lw          $v1, -0x74E8($v1)
    ctx->pc = 0x318f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937368)));
label_318f40:
    // 0x318f40: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_318f44:
    if (ctx->pc == 0x318F44u) {
        ctx->pc = 0x318F44u;
            // 0x318f44: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x318F48u;
        goto label_318f48;
    }
    ctx->pc = 0x318F40u;
    {
        const bool branch_taken_0x318f40 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x318f40) {
            ctx->pc = 0x318F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318F40u;
            // 0x318f44: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318F54u;
            goto label_318f54;
        }
    }
    ctx->pc = 0x318F48u;
label_318f48:
    // 0x318f48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318f4c:
    // 0x318f4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_318f50:
    if (ctx->pc == 0x318F50u) {
        ctx->pc = 0x318F50u;
            // 0x318f50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x318F54u;
        goto label_318f54;
    }
    ctx->pc = 0x318F4Cu;
    {
        const bool branch_taken_0x318f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318F4Cu;
            // 0x318f50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f4c) {
            ctx->pc = 0x318F6Cu;
            goto label_318f6c;
        }
    }
    ctx->pc = 0x318F54u;
label_318f54:
    // 0x318f54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x318f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_318f58:
    // 0x318f58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x318f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_318f5c:
    // 0x318f5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x318f5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318f60:
    // 0x318f60: 0x0  nop
    ctx->pc = 0x318f60u;
    // NOP
label_318f64:
    // 0x318f64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_318f68:
    // 0x318f68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_318f6c:
    // 0x318f6c: 0xe6a00190  swc1        $f0, 0x190($s5)
    ctx->pc = 0x318f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
label_318f70:
    // 0x318f70: 0x96460004  lhu         $a2, 0x4($s2)
    ctx->pc = 0x318f70u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_318f74:
    // 0x318f74: 0x30c50081  andi        $a1, $a2, 0x81
    ctx->pc = 0x318f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)129);
label_318f78:
    // 0x318f78: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
label_318f7c:
    if (ctx->pc == 0x318F7Cu) {
        ctx->pc = 0x318F80u;
        goto label_318f80;
    }
    ctx->pc = 0x318F78u;
    {
        const bool branch_taken_0x318f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x318f78) {
            ctx->pc = 0x3190A8u;
            goto label_3190a8;
        }
    }
    ctx->pc = 0x318F80u;
label_318f80:
    // 0x318f80: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x318f80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_318f84:
    // 0x318f84: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x318f84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_318f88:
    // 0x318f88: 0x10860047  beq         $a0, $a2, . + 4 + (0x47 << 2)
label_318f8c:
    if (ctx->pc == 0x318F8Cu) {
        ctx->pc = 0x318F90u;
        goto label_318f90;
    }
    ctx->pc = 0x318F88u;
    {
        const bool branch_taken_0x318f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x318f88) {
            ctx->pc = 0x3190A8u;
            goto label_3190a8;
        }
    }
    ctx->pc = 0x318F90u;
label_318f90:
    // 0x318f90: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x318f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_318f94:
    // 0x318f94: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
label_318f98:
    if (ctx->pc == 0x318F98u) {
        ctx->pc = 0x318F9Cu;
        goto label_318f9c;
    }
    ctx->pc = 0x318F94u;
    {
        const bool branch_taken_0x318f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x318f94) {
            ctx->pc = 0x3190A8u;
            goto label_3190a8;
        }
    }
    ctx->pc = 0x318F9Cu;
label_318f9c:
    // 0x318f9c: 0x92a30124  lbu         $v1, 0x124($s5)
    ctx->pc = 0x318f9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 292)));
label_318fa0:
    // 0x318fa0: 0x54600045  bnel        $v1, $zero, . + 4 + (0x45 << 2)
label_318fa4:
    if (ctx->pc == 0x318FA4u) {
        ctx->pc = 0x318FA4u;
            // 0x318fa4: 0x7ba300c0  lq          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x318FA8u;
        goto label_318fa8;
    }
    ctx->pc = 0x318FA0u;
    {
        const bool branch_taken_0x318fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318fa0) {
            ctx->pc = 0x318FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318FA0u;
            // 0x318fa4: 0x7ba300c0  lq          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3190B8u;
            goto label_3190b8;
        }
    }
    ctx->pc = 0x318FA8u;
label_318fa8:
    // 0x318fa8: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x318fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_318fac:
    // 0x318fac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x318facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318fb0:
    // 0x318fb0: 0xc0754b4  jal         func_1D52D0
label_318fb4:
    if (ctx->pc == 0x318FB4u) {
        ctx->pc = 0x318FB4u;
            // 0x318fb4: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x318FB8u;
        goto label_318fb8;
    }
    ctx->pc = 0x318FB0u;
    SET_GPR_U32(ctx, 31, 0x318FB8u);
    ctx->pc = 0x318FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318FB0u;
            // 0x318fb4: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318FB8u; }
        if (ctx->pc != 0x318FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318FB8u; }
        if (ctx->pc != 0x318FB8u) { return; }
    }
    ctx->pc = 0x318FB8u;
label_318fb8:
    // 0x318fb8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x318fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_318fbc:
    // 0x318fbc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x318fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_318fc0:
    // 0x318fc0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_318fc4:
    if (ctx->pc == 0x318FC4u) {
        ctx->pc = 0x318FC4u;
            // 0x318fc4: 0x8ea20044  lw          $v0, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->pc = 0x318FC8u;
        goto label_318fc8;
    }
    ctx->pc = 0x318FC0u;
    {
        const bool branch_taken_0x318fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318fc0) {
            ctx->pc = 0x318FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318FC0u;
            // 0x318fc4: 0x8ea20044  lw          $v0, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318FD0u;
            goto label_318fd0;
        }
    }
    ctx->pc = 0x318FC8u;
label_318fc8:
    // 0x318fc8: 0x10000008  b           . + 4 + (0x8 << 2)
label_318fcc:
    if (ctx->pc == 0x318FCCu) {
        ctx->pc = 0x318FCCu;
            // 0x318fcc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x318FD0u;
        goto label_318fd0;
    }
    ctx->pc = 0x318FC8u;
    {
        const bool branch_taken_0x318fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318FC8u;
            // 0x318fcc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fc8) {
            ctx->pc = 0x318FECu;
            goto label_318fec;
        }
    }
    ctx->pc = 0x318FD0u;
label_318fd0:
    // 0x318fd0: 0xc0754b4  jal         func_1D52D0
label_318fd4:
    if (ctx->pc == 0x318FD4u) {
        ctx->pc = 0x318FD4u;
            // 0x318fd4: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x318FD8u;
        goto label_318fd8;
    }
    ctx->pc = 0x318FD0u;
    SET_GPR_U32(ctx, 31, 0x318FD8u);
    ctx->pc = 0x318FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318FD0u;
            // 0x318fd4: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318FD8u; }
        if (ctx->pc != 0x318FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318FD8u; }
        if (ctx->pc != 0x318FD8u) { return; }
    }
    ctx->pc = 0x318FD8u;
label_318fd8:
    // 0x318fd8: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x318fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_318fdc:
    // 0x318fdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318fe0:
    // 0x318fe0: 0xc0c5a90  jal         func_316A40
label_318fe4:
    if (ctx->pc == 0x318FE4u) {
        ctx->pc = 0x318FE4u;
            // 0x318fe4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318FE8u;
        goto label_318fe8;
    }
    ctx->pc = 0x318FE0u;
    SET_GPR_U32(ctx, 31, 0x318FE8u);
    ctx->pc = 0x318FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318FE0u;
            // 0x318fe4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316A40u;
    if (runtime->hasFunction(0x316A40u)) {
        auto targetFn = runtime->lookupFunction(0x316A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318FE8u; }
        if (ctx->pc != 0x318FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316A40_0x316a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318FE8u; }
        if (ctx->pc != 0x318FE8u) { return; }
    }
    ctx->pc = 0x318FE8u;
label_318fe8:
    // 0x318fe8: 0xaea2011c  sw          $v0, 0x11C($s5)
    ctx->pc = 0x318fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 2));
label_318fec:
    // 0x318fec: 0x8ea3011c  lw          $v1, 0x11C($s5)
    ctx->pc = 0x318fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 284)));
label_318ff0:
    // 0x318ff0: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_318ff4:
    if (ctx->pc == 0x318FF4u) {
        ctx->pc = 0x318FF8u;
        goto label_318ff8;
    }
    ctx->pc = 0x318FF0u;
    {
        const bool branch_taken_0x318ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ff0) {
            ctx->pc = 0x3190B4u;
            goto label_3190b4;
        }
    }
    ctx->pc = 0x318FF8u;
label_318ff8:
    // 0x318ff8: 0x1600002e  bnez        $s0, . + 4 + (0x2E << 2)
label_318ffc:
    if (ctx->pc == 0x318FFCu) {
        ctx->pc = 0x319000u;
        goto label_319000;
    }
    ctx->pc = 0x318FF8u;
    {
        const bool branch_taken_0x318ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x318ff8) {
            ctx->pc = 0x3190B4u;
            goto label_3190b4;
        }
    }
    ctx->pc = 0x319000u;
label_319000:
    // 0x319000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319004:
    // 0x319004: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x319004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_319008:
    // 0x319008: 0xa2a40124  sb          $a0, 0x124($s5)
    ctx->pc = 0x319008u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 292), (uint8_t)GPR_U32(ctx, 4));
label_31900c:
    // 0x31900c: 0xaea30084  sw          $v1, 0x84($s5)
    ctx->pc = 0x31900cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_319010:
    // 0x319010: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x319010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_319014:
    // 0x319014: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x319014u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_319018:
    // 0x319018: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x319018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_31901c:
    // 0x31901c: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_319020:
    if (ctx->pc == 0x319020u) {
        ctx->pc = 0x319020u;
            // 0x319020: 0xc6a10120  lwc1        $f1, 0x120($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x319024u;
        goto label_319024;
    }
    ctx->pc = 0x31901Cu;
    {
        const bool branch_taken_0x31901c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31901c) {
            ctx->pc = 0x319020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31901Cu;
            // 0x319020: 0xc6a10120  lwc1        $f1, 0x120($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x319058u;
            goto label_319058;
        }
    }
    ctx->pc = 0x319024u;
label_319024:
    // 0x319024: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_319028:
    if (ctx->pc == 0x319028u) {
        ctx->pc = 0x319028u;
            // 0x319028: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x31902Cu;
        goto label_31902c;
    }
    ctx->pc = 0x319024u;
    {
        const bool branch_taken_0x319024 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x319024) {
            ctx->pc = 0x319028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x319024u;
            // 0x319028: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x319038u;
            goto label_319038;
        }
    }
    ctx->pc = 0x31902Cu;
label_31902c:
    // 0x31902c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31902cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319030:
    // 0x319030: 0x10000007  b           . + 4 + (0x7 << 2)
label_319034:
    if (ctx->pc == 0x319034u) {
        ctx->pc = 0x319034u;
            // 0x319034: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x319038u;
        goto label_319038;
    }
    ctx->pc = 0x319030u;
    {
        const bool branch_taken_0x319030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319030u;
            // 0x319034: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319030) {
            ctx->pc = 0x319050u;
            goto label_319050;
        }
    }
    ctx->pc = 0x319038u;
label_319038:
    // 0x319038: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x319038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_31903c:
    // 0x31903c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31903cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_319040:
    // 0x319040: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319040u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319044:
    // 0x319044: 0x0  nop
    ctx->pc = 0x319044u;
    // NOP
label_319048:
    // 0x319048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31904c:
    // 0x31904c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31904cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_319050:
    // 0x319050: 0x10000018  b           . + 4 + (0x18 << 2)
label_319054:
    if (ctx->pc == 0x319054u) {
        ctx->pc = 0x319054u;
            // 0x319054: 0xe6a00120  swc1        $f0, 0x120($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
        ctx->pc = 0x319058u;
        goto label_319058;
    }
    ctx->pc = 0x319050u;
    {
        const bool branch_taken_0x319050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319050u;
            // 0x319054: 0xe6a00120  swc1        $f0, 0x120($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319050) {
            ctx->pc = 0x3190B4u;
            goto label_3190b4;
        }
    }
    ctx->pc = 0x319058u;
label_319058:
    // 0x319058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31905c:
    // 0x31905c: 0x0  nop
    ctx->pc = 0x31905cu;
    // NOP
label_319060:
    // 0x319060: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319064:
    // 0x319064: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_319068:
    if (ctx->pc == 0x319068u) {
        ctx->pc = 0x31906Cu;
        goto label_31906c;
    }
    ctx->pc = 0x319064u;
    {
        const bool branch_taken_0x319064 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319064) {
            ctx->pc = 0x3190B4u;
            goto label_3190b4;
        }
    }
    ctx->pc = 0x31906Cu;
label_31906c:
    // 0x31906c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x31906cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_319070:
    // 0x319070: 0x8c638b30  lw          $v1, -0x74D0($v1)
    ctx->pc = 0x319070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937392)));
label_319074:
    // 0x319074: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_319078:
    if (ctx->pc == 0x319078u) {
        ctx->pc = 0x319078u;
            // 0x319078: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x31907Cu;
        goto label_31907c;
    }
    ctx->pc = 0x319074u;
    {
        const bool branch_taken_0x319074 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x319074) {
            ctx->pc = 0x319078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x319074u;
            // 0x319078: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x319088u;
            goto label_319088;
        }
    }
    ctx->pc = 0x31907Cu;
label_31907c:
    // 0x31907c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31907cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319080:
    // 0x319080: 0x10000007  b           . + 4 + (0x7 << 2)
label_319084:
    if (ctx->pc == 0x319084u) {
        ctx->pc = 0x319084u;
            // 0x319084: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x319088u;
        goto label_319088;
    }
    ctx->pc = 0x319080u;
    {
        const bool branch_taken_0x319080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319080u;
            // 0x319084: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319080) {
            ctx->pc = 0x3190A0u;
            goto label_3190a0;
        }
    }
    ctx->pc = 0x319088u;
label_319088:
    // 0x319088: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x319088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_31908c:
    // 0x31908c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31908cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_319090:
    // 0x319090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319094:
    // 0x319094: 0x0  nop
    ctx->pc = 0x319094u;
    // NOP
label_319098:
    // 0x319098: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31909c:
    // 0x31909c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31909cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3190a0:
    // 0x3190a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3190a4:
    if (ctx->pc == 0x3190A4u) {
        ctx->pc = 0x3190A4u;
            // 0x3190a4: 0xe6a00120  swc1        $f0, 0x120($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
        ctx->pc = 0x3190A8u;
        goto label_3190a8;
    }
    ctx->pc = 0x3190A0u;
    {
        const bool branch_taken_0x3190a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3190A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3190A0u;
            // 0x3190a4: 0xe6a00120  swc1        $f0, 0x120($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190a0) {
            ctx->pc = 0x3190B4u;
            goto label_3190b4;
        }
    }
    ctx->pc = 0x3190A8u;
label_3190a8:
    // 0x3190a8: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
label_3190ac:
    if (ctx->pc == 0x3190ACu) {
        ctx->pc = 0x3190B0u;
        goto label_3190b0;
    }
    ctx->pc = 0x3190A8u;
    {
        const bool branch_taken_0x3190a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3190a8) {
            ctx->pc = 0x3190B4u;
            goto label_3190b4;
        }
    }
    ctx->pc = 0x3190B0u;
label_3190b0:
    // 0x3190b0: 0xa2a00124  sb          $zero, 0x124($s5)
    ctx->pc = 0x3190b0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 292), (uint8_t)GPR_U32(ctx, 0));
label_3190b4:
    // 0x3190b4: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3190b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3190b8:
    // 0x3190b8: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x3190b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_3190bc:
    // 0x3190bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3190bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3190c0:
    // 0x3190c0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_3190c4:
    if (ctx->pc == 0x3190C4u) {
        ctx->pc = 0x3190C4u;
            // 0x3190c4: 0xa2a00166  sb          $zero, 0x166($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 358), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3190C8u;
        goto label_3190c8;
    }
    ctx->pc = 0x3190C0u;
    {
        const bool branch_taken_0x3190c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3190c0) {
            ctx->pc = 0x3190C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3190C0u;
            // 0x3190c4: 0xa2a00166  sb          $zero, 0x166($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 358), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3190D0u;
            goto label_3190d0;
        }
    }
    ctx->pc = 0x3190C8u;
label_3190c8:
    // 0x3190c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3190c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3190cc:
    // 0x3190cc: 0xa2a30166  sb          $v1, 0x166($s5)
    ctx->pc = 0x3190ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 358), (uint8_t)GPR_U32(ctx, 3));
label_3190d0:
    // 0x3190d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3190d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3190d4:
    // 0x3190d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3190d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3190d8:
    // 0x3190d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3190d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3190dc:
    // 0x3190dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3190dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3190e0:
    // 0x3190e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3190e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3190e4:
    // 0x3190e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3190e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3190e8:
    // 0x3190e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3190e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3190ec:
    // 0x3190ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3190ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3190f0:
    // 0x3190f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3190f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3190f4:
    // 0x3190f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3190f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3190f8:
    // 0x3190f8: 0x3e00008  jr          $ra
label_3190fc:
    if (ctx->pc == 0x3190FCu) {
        ctx->pc = 0x3190FCu;
            // 0x3190fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x319100u;
        goto label_319100;
    }
    ctx->pc = 0x3190F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3190FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3190F8u;
            // 0x3190fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319100u;
label_319100:
    // 0x319100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x319100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_319104:
    // 0x319104: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x319104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_319108:
    // 0x319108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x319108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_31910c:
    // 0x31910c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_319110:
    // 0x319110: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x319110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_319114:
    // 0x319114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x319114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_319118:
    // 0x319118: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x319118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_31911c:
    // 0x31911c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31911cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_319120:
    // 0x319120: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x319120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_319124:
    // 0x319124: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x319124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_319128:
    // 0x319128: 0x8c710db0  lw          $s1, 0xDB0($v1)
    ctx->pc = 0x319128u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_31912c:
    // 0x31912c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31912cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_319130:
    // 0x319130: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x319130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
label_319134:
    // 0x319134: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x319134u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
label_319138:
    // 0x319138: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x319138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_31913c:
    // 0x31913c: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x31913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_319140:
    // 0x319140: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x319140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_319144:
    // 0x319144: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_319148:
    if (ctx->pc == 0x319148u) {
        ctx->pc = 0x319148u;
            // 0x319148: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x31914Cu;
        goto label_31914c;
    }
    ctx->pc = 0x319144u;
    {
        const bool branch_taken_0x319144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319144) {
            ctx->pc = 0x319148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x319144u;
            // 0x319148: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x319228u;
            goto label_319228;
        }
    }
    ctx->pc = 0x31914Cu;
label_31914c:
    // 0x31914c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_319150:
    // 0x319150: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x319150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_319154:
    // 0x319154: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x319154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_319158:
    // 0x319158: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x319158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_31915c:
    // 0x31915c: 0x14200031  bnez        $at, . + 4 + (0x31 << 2)
label_319160:
    if (ctx->pc == 0x319160u) {
        ctx->pc = 0x319164u;
        goto label_319164;
    }
    ctx->pc = 0x31915Cu;
    {
        const bool branch_taken_0x31915c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31915c) {
            ctx->pc = 0x319224u;
            goto label_319224;
        }
    }
    ctx->pc = 0x319164u;
label_319164:
    // 0x319164: 0x8c820d70  lw          $v0, 0xD70($a0)
    ctx->pc = 0x319164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_319168:
    // 0x319168: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x319168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_31916c:
    // 0x31916c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_319170:
    if (ctx->pc == 0x319170u) {
        ctx->pc = 0x319174u;
        goto label_319174;
    }
    ctx->pc = 0x31916Cu;
    {
        const bool branch_taken_0x31916c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31916c) {
            ctx->pc = 0x319224u;
            goto label_319224;
        }
    }
    ctx->pc = 0x319174u;
label_319174:
    // 0x319174: 0x8ca30968  lw          $v1, 0x968($a1)
    ctx->pc = 0x319174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2408)));
label_319178:
    // 0x319178: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x319178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_31917c:
    // 0x31917c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_319180:
    if (ctx->pc == 0x319180u) {
        ctx->pc = 0x319184u;
        goto label_319184;
    }
    ctx->pc = 0x31917Cu;
    {
        const bool branch_taken_0x31917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31917c) {
            ctx->pc = 0x31919Cu;
            goto label_31919c;
        }
    }
    ctx->pc = 0x319184u;
label_319184:
    // 0x319184: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x319184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_319188:
    // 0x319188: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_31918c:
    if (ctx->pc == 0x31918Cu) {
        ctx->pc = 0x319190u;
        goto label_319190;
    }
    ctx->pc = 0x319188u;
    {
        const bool branch_taken_0x319188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x319188) {
            ctx->pc = 0x31919Cu;
            goto label_31919c;
        }
    }
    ctx->pc = 0x319190u;
label_319190:
    // 0x319190: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x319190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_319194:
    // 0x319194: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_319198:
    if (ctx->pc == 0x319198u) {
        ctx->pc = 0x31919Cu;
        goto label_31919c;
    }
    ctx->pc = 0x319194u;
    {
        const bool branch_taken_0x319194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x319194) {
            ctx->pc = 0x319224u;
            goto label_319224;
        }
    }
    ctx->pc = 0x31919Cu;
label_31919c:
    // 0x31919c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3191a0:
    // 0x3191a0: 0x94830c7e  lhu         $v1, 0xC7E($a0)
    ctx->pc = 0x3191a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3198)));
label_3191a4:
    // 0x3191a4: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3191a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3191a8:
    // 0x3191a8: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x3191a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3191ac:
    // 0x3191ac: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3191acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3191b0:
    // 0x3191b0: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x3191b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_3191b4:
    // 0x3191b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3191b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3191b8:
    // 0x3191b8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3191b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3191bc:
    // 0x3191bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3191bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3191c0:
    // 0x3191c0: 0xc4540020  lwc1        $f20, 0x20($v0)
    ctx->pc = 0x3191c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3191c4:
    // 0x3191c4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x3191c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3191c8:
    // 0x3191c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3191cc:
    if (ctx->pc == 0x3191CCu) {
        ctx->pc = 0x3191D0u;
        goto label_3191d0;
    }
    ctx->pc = 0x3191C8u;
    {
        const bool branch_taken_0x3191c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3191c8) {
            ctx->pc = 0x3191D8u;
            goto label_3191d8;
        }
    }
    ctx->pc = 0x3191D0u;
label_3191d0:
    // 0x3191d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_3191d4:
    if (ctx->pc == 0x3191D4u) {
        ctx->pc = 0x3191D4u;
            // 0x3191d4: 0xae4000f4  sw          $zero, 0xF4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x3191D8u;
        goto label_3191d8;
    }
    ctx->pc = 0x3191D0u;
    {
        const bool branch_taken_0x3191d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3191D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3191D0u;
            // 0x3191d4: 0xae4000f4  sw          $zero, 0xF4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191d0) {
            ctx->pc = 0x319220u;
            goto label_319220;
        }
    }
    ctx->pc = 0x3191D8u;
label_3191d8:
    // 0x3191d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3191d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3191dc:
    // 0x3191dc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3191dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3191e0:
    // 0x3191e0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3191e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3191e4:
    // 0x3191e4: 0xc64100f4  lwc1        $f1, 0xF4($s2)
    ctx->pc = 0x3191e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3191e8:
    // 0x3191e8: 0xc4408b48  lwc1        $f0, -0x74B8($v0)
    ctx->pc = 0x3191e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3191ec:
    // 0x3191ec: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3191ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3191f0:
    // 0x3191f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3191f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3191f4:
    // 0x3191f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3191f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3191f8:
    // 0x3191f8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_3191fc:
    if (ctx->pc == 0x3191FCu) {
        ctx->pc = 0x3191FCu;
            // 0x3191fc: 0xe64100f4  swc1        $f1, 0xF4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
        ctx->pc = 0x319200u;
        goto label_319200;
    }
    ctx->pc = 0x3191F8u;
    {
        const bool branch_taken_0x3191f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3191FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3191F8u;
            // 0x3191fc: 0xe64100f4  swc1        $f1, 0xF4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191f8) {
            ctx->pc = 0x319220u;
            goto label_319220;
        }
    }
    ctx->pc = 0x319200u;
label_319200:
    // 0x319200: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x319200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_319204:
    // 0x319204: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x319204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_319208:
    // 0x319208: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x319208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_31920c:
    // 0x31920c: 0x320f809  jalr        $t9
label_319210:
    if (ctx->pc == 0x319210u) {
        ctx->pc = 0x319210u;
            // 0x319210: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x319214u;
        goto label_319214;
    }
    ctx->pc = 0x31920Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x319214u);
        ctx->pc = 0x319210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31920Cu;
            // 0x319210: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x319214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x319214u; }
            if (ctx->pc != 0x319214u) { return; }
        }
        }
    }
    ctx->pc = 0x319214u;
label_319214:
    // 0x319214: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x319214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
label_319218:
    // 0x319218: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x319218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_31921c:
    // 0x31921c: 0x8c510db0  lw          $s1, 0xDB0($v0)
    ctx->pc = 0x31921cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3504)));
label_319220:
    // 0x319220: 0xe6540100  swc1        $f20, 0x100($s2)
    ctx->pc = 0x319220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
label_319224:
    // 0x319224: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x319224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_319228:
    // 0x319228: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x319228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
label_31922c:
    // 0x31922c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x31922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_319230:
    // 0x319230: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_319234:
    if (ctx->pc == 0x319234u) {
        ctx->pc = 0x319234u;
            // 0x319234: 0x96430072  lhu         $v1, 0x72($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
        ctx->pc = 0x319238u;
        goto label_319238;
    }
    ctx->pc = 0x319230u;
    {
        const bool branch_taken_0x319230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319230) {
            ctx->pc = 0x319234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x319230u;
            // 0x319234: 0x96430072  lhu         $v1, 0x72($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x319268u;
            goto label_319268;
        }
    }
    ctx->pc = 0x319238u;
label_319238:
    // 0x319238: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x319238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_31923c:
    // 0x31923c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x31923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_319240:
    // 0x319240: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_319244:
    if (ctx->pc == 0x319244u) {
        ctx->pc = 0x319248u;
        goto label_319248;
    }
    ctx->pc = 0x319240u;
    {
        const bool branch_taken_0x319240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x319240) {
            ctx->pc = 0x319264u;
            goto label_319264;
        }
    }
    ctx->pc = 0x319248u;
label_319248:
    // 0x319248: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x319248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_31924c:
    // 0x31924c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_319250:
    if (ctx->pc == 0x319250u) {
        ctx->pc = 0x319254u;
        goto label_319254;
    }
    ctx->pc = 0x31924Cu;
    {
        const bool branch_taken_0x31924c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31924c) {
            ctx->pc = 0x319264u;
            goto label_319264;
        }
    }
    ctx->pc = 0x319254u;
label_319254:
    // 0x319254: 0xc13ee1c  jal         func_4FB870
label_319258:
    if (ctx->pc == 0x319258u) {
        ctx->pc = 0x319258u;
            // 0x319258: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x31925Cu;
        goto label_31925c;
    }
    ctx->pc = 0x319254u;
    SET_GPR_U32(ctx, 31, 0x31925Cu);
    ctx->pc = 0x319258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319254u;
            // 0x319258: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FB870u;
    if (runtime->hasFunction(0x4FB870u)) {
        auto targetFn = runtime->lookupFunction(0x4FB870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31925Cu; }
        if (ctx->pc != 0x31925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FB870_0x4fb870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31925Cu; }
        if (ctx->pc != 0x31925Cu) { return; }
    }
    ctx->pc = 0x31925Cu;
label_31925c:
    // 0x31925c: 0xc13eb60  jal         func_4FAD80
label_319260:
    if (ctx->pc == 0x319260u) {
        ctx->pc = 0x319260u;
            // 0x319260: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x319264u;
        goto label_319264;
    }
    ctx->pc = 0x31925Cu;
    SET_GPR_U32(ctx, 31, 0x319264u);
    ctx->pc = 0x319260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31925Cu;
            // 0x319260: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FAD80u;
    if (runtime->hasFunction(0x4FAD80u)) {
        auto targetFn = runtime->lookupFunction(0x4FAD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319264u; }
        if (ctx->pc != 0x319264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FAD80_0x4fad80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319264u; }
        if (ctx->pc != 0x319264u) { return; }
    }
    ctx->pc = 0x319264u;
label_319264:
    // 0x319264: 0x96430072  lhu         $v1, 0x72($s2)
    ctx->pc = 0x319264u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
label_319268:
    // 0x319268: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x319268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_31926c:
    // 0x31926c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_319270:
    // 0x319270: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x319270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_319274:
    // 0x319274: 0x2484bea0  addiu       $a0, $a0, -0x4160
    ctx->pc = 0x319274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950560));
label_319278:
    // 0x319278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x319278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31927c:
    // 0x31927c: 0xa6430094  sh          $v1, 0x94($s2)
    ctx->pc = 0x31927cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 148), (uint16_t)GPR_U32(ctx, 3));
label_319280:
    // 0x319280: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x319280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_319284:
    // 0x319284: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x319284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_319288:
    // 0x319288: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31928c:
    // 0x31928c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31928cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_319290:
    // 0x319290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x319290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_319294:
    // 0x319294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x319294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_319298:
    // 0x319298: 0xc0408d8  jal         func_102360
label_31929c:
    if (ctx->pc == 0x31929Cu) {
        ctx->pc = 0x31929Cu;
            // 0x31929c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x3192A0u;
        goto label_3192a0;
    }
    ctx->pc = 0x319298u;
    SET_GPR_U32(ctx, 31, 0x3192A0u);
    ctx->pc = 0x31929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319298u;
            // 0x31929c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102360u;
    if (runtime->hasFunction(0x102360u)) {
        auto targetFn = runtime->lookupFunction(0x102360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3192A0u; }
        if (ctx->pc != 0x3192A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102360_0x102360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3192A0u; }
        if (ctx->pc != 0x3192A0u) { return; }
    }
    ctx->pc = 0x3192A0u;
label_3192a0:
    // 0x3192a0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_3192a4:
    if (ctx->pc == 0x3192A4u) {
        ctx->pc = 0x3192A4u;
            // 0x3192a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3192A8u;
        goto label_3192a8;
    }
    ctx->pc = 0x3192A0u;
    {
        const bool branch_taken_0x3192a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3192a0) {
            ctx->pc = 0x3192A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3192A0u;
            // 0x3192a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x319304u;
            goto label_319304;
        }
    }
    ctx->pc = 0x3192A8u;
label_3192a8:
    // 0x3192a8: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x3192a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_3192ac:
    // 0x3192ac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3192acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3192b0:
    // 0x3192b0: 0x2442bea0  addiu       $v0, $v0, -0x4160
    ctx->pc = 0x3192b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950560));
label_3192b4:
    // 0x3192b4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3192b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3192b8:
    // 0x3192b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3192b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3192bc:
    // 0x3192bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3192bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3192c0:
    // 0x3192c0: 0xc0408ec  jal         func_1023B0
label_3192c4:
    if (ctx->pc == 0x3192C4u) {
        ctx->pc = 0x3192C4u;
            // 0x3192c4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3192C8u;
        goto label_3192c8;
    }
    ctx->pc = 0x3192C0u;
    SET_GPR_U32(ctx, 31, 0x3192C8u);
    ctx->pc = 0x3192C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3192C0u;
            // 0x3192c4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023B0u;
    if (runtime->hasFunction(0x1023B0u)) {
        auto targetFn = runtime->lookupFunction(0x1023B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3192C8u; }
        if (ctx->pc != 0x3192C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023B0_0x1023b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3192C8u; }
        if (ctx->pc != 0x3192C8u) { return; }
    }
    ctx->pc = 0x3192C8u;
label_3192c8:
    // 0x3192c8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3192cc:
    if (ctx->pc == 0x3192CCu) {
        ctx->pc = 0x3192CCu;
            // 0x3192cc: 0xa6400096  sh          $zero, 0x96($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3192D0u;
        goto label_3192d0;
    }
    ctx->pc = 0x3192C8u;
    {
        const bool branch_taken_0x3192c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3192c8) {
            ctx->pc = 0x3192CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3192C8u;
            // 0x3192cc: 0xa6400096  sh          $zero, 0x96($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x319300u;
            goto label_319300;
        }
    }
    ctx->pc = 0x3192D0u;
label_3192d0:
    // 0x3192d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3192d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3192d4:
    // 0x3192d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3192d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3192d8:
    // 0x3192d8: 0xa6420096  sh          $v0, 0x96($s2)
    ctx->pc = 0x3192d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 2));
label_3192dc:
    // 0x3192dc: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x3192dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_3192e0:
    // 0x3192e0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3192e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3192e4:
    // 0x3192e4: 0x2442bea0  addiu       $v0, $v0, -0x4160
    ctx->pc = 0x3192e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950560));
label_3192e8:
    // 0x3192e8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3192e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3192ec:
    // 0x3192ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3192ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3192f0:
    // 0x3192f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3192f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3192f4:
    // 0x3192f4: 0xc0408c8  jal         func_102320
label_3192f8:
    if (ctx->pc == 0x3192F8u) {
        ctx->pc = 0x3192F8u;
            // 0x3192f8: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3192FCu;
        goto label_3192fc;
    }
    ctx->pc = 0x3192F4u;
    SET_GPR_U32(ctx, 31, 0x3192FCu);
    ctx->pc = 0x3192F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3192F4u;
            // 0x3192f8: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3192FCu; }
        if (ctx->pc != 0x3192FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3192FCu; }
        if (ctx->pc != 0x3192FCu) { return; }
    }
    ctx->pc = 0x3192FCu;
label_3192fc:
    // 0x3192fc: 0xa6400096  sh          $zero, 0x96($s2)
    ctx->pc = 0x3192fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 0));
label_319300:
    // 0x319300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319304:
    // 0x319304: 0xc0408ec  jal         func_1023B0
label_319308:
    if (ctx->pc == 0x319308u) {
        ctx->pc = 0x31930Cu;
        goto label_31930c;
    }
    ctx->pc = 0x319304u;
    SET_GPR_U32(ctx, 31, 0x31930Cu);
    ctx->pc = 0x1023B0u;
    if (runtime->hasFunction(0x1023B0u)) {
        auto targetFn = runtime->lookupFunction(0x1023B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31930Cu; }
        if (ctx->pc != 0x31930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023B0_0x1023b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31930Cu; }
        if (ctx->pc != 0x31930Cu) { return; }
    }
    ctx->pc = 0x31930Cu;
label_31930c:
    // 0x31930c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_319310:
    if (ctx->pc == 0x319310u) {
        ctx->pc = 0x319310u;
            // 0x319310: 0xae510080  sw          $s1, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 17));
        ctx->pc = 0x319314u;
        goto label_319314;
    }
    ctx->pc = 0x31930Cu;
    {
        const bool branch_taken_0x31930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31930c) {
            ctx->pc = 0x319310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31930Cu;
            // 0x319310: 0xae510080  sw          $s1, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x319324u;
            goto label_319324;
        }
    }
    ctx->pc = 0x319314u;
label_319314:
    // 0x319314: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x319314u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319318:
    // 0x319318: 0xc0408c8  jal         func_102320
label_31931c:
    if (ctx->pc == 0x31931Cu) {
        ctx->pc = 0x31931Cu;
            // 0x31931c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x319320u;
        goto label_319320;
    }
    ctx->pc = 0x319318u;
    SET_GPR_U32(ctx, 31, 0x319320u);
    ctx->pc = 0x31931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319318u;
            // 0x31931c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319320u; }
        if (ctx->pc != 0x319320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319320u; }
        if (ctx->pc != 0x319320u) { return; }
    }
    ctx->pc = 0x319320u;
label_319320:
    // 0x319320: 0xae510080  sw          $s1, 0x80($s2)
    ctx->pc = 0x319320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 17));
label_319324:
    // 0x319324: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x319324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_319328:
    // 0x319328: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x319328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31932c:
    // 0x31932c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x31932cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319330:
    // 0x319330: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
label_319334:
    if (ctx->pc == 0x319334u) {
        ctx->pc = 0x319334u;
            // 0x319334: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x319338u;
        goto label_319338;
    }
    ctx->pc = 0x319330u;
    {
        const bool branch_taken_0x319330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319330) {
            ctx->pc = 0x319334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x319330u;
            // 0x319334: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3193A0u;
            goto label_3193a0;
        }
    }
    ctx->pc = 0x319338u;
label_319338:
    // 0x319338: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x319338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_31933c:
    // 0x31933c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x31933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_319340:
    // 0x319340: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x319340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319344:
    // 0x319344: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x319344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_319348:
    // 0x319348: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x319348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31934c:
    // 0x31934c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_319350:
    if (ctx->pc == 0x319350u) {
        ctx->pc = 0x319350u;
            // 0x319350: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->pc = 0x319354u;
        goto label_319354;
    }
    ctx->pc = 0x31934Cu;
    {
        const bool branch_taken_0x31934c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31934Cu;
            // 0x319350: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31934c) {
            ctx->pc = 0x31935Cu;
            goto label_31935c;
        }
    }
    ctx->pc = 0x319354u;
label_319354:
    // 0x319354: 0x10000011  b           . + 4 + (0x11 << 2)
label_319358:
    if (ctx->pc == 0x319358u) {
        ctx->pc = 0x319358u;
            // 0x319358: 0xe6410010  swc1        $f1, 0x10($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->pc = 0x31935Cu;
        goto label_31935c;
    }
    ctx->pc = 0x319354u;
    {
        const bool branch_taken_0x319354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319354u;
            // 0x319358: 0xe6410010  swc1        $f1, 0x10($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319354) {
            ctx->pc = 0x31939Cu;
            goto label_31939c;
        }
    }
    ctx->pc = 0x31935Cu;
label_31935c:
    // 0x31935c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x31935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_319360:
    // 0x319360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x319360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319364:
    // 0x319364: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_319368:
    if (ctx->pc == 0x319368u) {
        ctx->pc = 0x319368u;
            // 0x319368: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x31936Cu;
        goto label_31936c;
    }
    ctx->pc = 0x319364u;
    {
        const bool branch_taken_0x319364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x319364) {
            ctx->pc = 0x319368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x319364u;
            // 0x319368: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x319388u;
            goto label_319388;
        }
    }
    ctx->pc = 0x31936Cu;
label_31936c:
    // 0x31936c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_319370:
    if (ctx->pc == 0x319370u) {
        ctx->pc = 0x319370u;
            // 0x319370: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x319374u;
        goto label_319374;
    }
    ctx->pc = 0x31936Cu;
    {
        const bool branch_taken_0x31936c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31936c) {
            ctx->pc = 0x319370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31936Cu;
            // 0x319370: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31937Cu;
            goto label_31937c;
        }
    }
    ctx->pc = 0x319374u;
label_319374:
    // 0x319374: 0x10000009  b           . + 4 + (0x9 << 2)
label_319378:
    if (ctx->pc == 0x319378u) {
        ctx->pc = 0x31937Cu;
        goto label_31937c;
    }
    ctx->pc = 0x319374u;
    {
        const bool branch_taken_0x319374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319374) {
            ctx->pc = 0x31939Cu;
            goto label_31939c;
        }
    }
    ctx->pc = 0x31937Cu;
label_31937c:
    // 0x31937c: 0xa2400004  sb          $zero, 0x4($s2)
    ctx->pc = 0x31937cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
label_319380:
    // 0x319380: 0x10000006  b           . + 4 + (0x6 << 2)
label_319384:
    if (ctx->pc == 0x319384u) {
        ctx->pc = 0x319384u;
            // 0x319384: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x319388u;
        goto label_319388;
    }
    ctx->pc = 0x319380u;
    {
        const bool branch_taken_0x319380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319380u;
            // 0x319384: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319380) {
            ctx->pc = 0x31939Cu;
            goto label_31939c;
        }
    }
    ctx->pc = 0x319388u;
label_319388:
    // 0x319388: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x319388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_31938c:
    // 0x31938c: 0xa2400004  sb          $zero, 0x4($s2)
    ctx->pc = 0x31938cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
label_319390:
    // 0x319390: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x319390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_319394:
    // 0x319394: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x319394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_319398:
    // 0x319398: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x319398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_31939c:
    // 0x31939c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3193a0:
    // 0x3193a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3193a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3193a4:
    // 0x3193a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3193a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3193a8:
    // 0x3193a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3193a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3193ac:
    // 0x3193ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3193acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3193b0:
    // 0x3193b0: 0x3e00008  jr          $ra
label_3193b4:
    if (ctx->pc == 0x3193B4u) {
        ctx->pc = 0x3193B4u;
            // 0x3193b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3193B8u;
        goto label_3193b8;
    }
    ctx->pc = 0x3193B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3193B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3193B0u;
            // 0x3193b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3193B8u;
label_3193b8:
    // 0x3193b8: 0x0  nop
    ctx->pc = 0x3193b8u;
    // NOP
label_3193bc:
    // 0x3193bc: 0x0  nop
    ctx->pc = 0x3193bcu;
    // NOP
label_3193c0:
    // 0x3193c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3193c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3193c4:
    // 0x3193c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3193c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3193c8:
    // 0x3193c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3193c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3193cc:
    // 0x3193cc: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x3193ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_3193d0:
    // 0x3193d0: 0xc075eb4  jal         func_1D7AD0
label_3193d4:
    if (ctx->pc == 0x3193D4u) {
        ctx->pc = 0x3193D4u;
            // 0x3193d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3193D8u;
        goto label_3193d8;
    }
    ctx->pc = 0x3193D0u;
    SET_GPR_U32(ctx, 31, 0x3193D8u);
    ctx->pc = 0x3193D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3193D0u;
            // 0x3193d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3193D8u; }
        if (ctx->pc != 0x3193D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3193D8u; }
        if (ctx->pc != 0x3193D8u) { return; }
    }
    ctx->pc = 0x3193D8u;
label_3193d8:
    // 0x3193d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3193dc:
    if (ctx->pc == 0x3193DCu) {
        ctx->pc = 0x3193DCu;
            // 0x3193dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3193E0u;
        goto label_3193e0;
    }
    ctx->pc = 0x3193D8u;
    {
        const bool branch_taken_0x3193d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3193d8) {
            ctx->pc = 0x3193DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3193D8u;
            // 0x3193dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3193ECu;
            goto label_3193ec;
        }
    }
    ctx->pc = 0x3193E0u;
label_3193e0:
    // 0x3193e0: 0xc073234  jal         func_1CC8D0
label_3193e4:
    if (ctx->pc == 0x3193E4u) {
        ctx->pc = 0x3193E4u;
            // 0x3193e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3193E8u;
        goto label_3193e8;
    }
    ctx->pc = 0x3193E0u;
    SET_GPR_U32(ctx, 31, 0x3193E8u);
    ctx->pc = 0x3193E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3193E0u;
            // 0x3193e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3193E8u; }
        if (ctx->pc != 0x3193E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3193E8u; }
        if (ctx->pc != 0x3193E8u) { return; }
    }
    ctx->pc = 0x3193E8u;
label_3193e8:
    // 0x3193e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3193e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3193ec:
    // 0x3193ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3193ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3193f0:
    // 0x3193f0: 0x3e00008  jr          $ra
label_3193f4:
    if (ctx->pc == 0x3193F4u) {
        ctx->pc = 0x3193F4u;
            // 0x3193f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3193F8u;
        goto label_3193f8;
    }
    ctx->pc = 0x3193F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3193F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3193F0u;
            // 0x3193f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3193F8u;
label_3193f8:
    // 0x3193f8: 0x0  nop
    ctx->pc = 0x3193f8u;
    // NOP
label_3193fc:
    // 0x3193fc: 0x0  nop
    ctx->pc = 0x3193fcu;
    // NOP
label_319400:
    // 0x319400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_319404:
    // 0x319404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_319408:
    // 0x319408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31940c:
    // 0x31940c: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x31940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_319410:
    // 0x319410: 0xc075eb4  jal         func_1D7AD0
label_319414:
    if (ctx->pc == 0x319414u) {
        ctx->pc = 0x319414u;
            // 0x319414: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x319418u;
        goto label_319418;
    }
    ctx->pc = 0x319410u;
    SET_GPR_U32(ctx, 31, 0x319418u);
    ctx->pc = 0x319414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319410u;
            // 0x319414: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319418u; }
        if (ctx->pc != 0x319418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319418u; }
        if (ctx->pc != 0x319418u) { return; }
    }
    ctx->pc = 0x319418u;
label_319418:
    // 0x319418: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_31941c:
    if (ctx->pc == 0x31941Cu) {
        ctx->pc = 0x31941Cu;
            // 0x31941c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x319420u;
        goto label_319420;
    }
    ctx->pc = 0x319418u;
    {
        const bool branch_taken_0x319418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319418) {
            ctx->pc = 0x31941Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x319418u;
            // 0x31941c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31942Cu;
            goto label_31942c;
        }
    }
    ctx->pc = 0x319420u;
label_319420:
    // 0x319420: 0xc073234  jal         func_1CC8D0
label_319424:
    if (ctx->pc == 0x319424u) {
        ctx->pc = 0x319424u;
            // 0x319424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x319428u;
        goto label_319428;
    }
    ctx->pc = 0x319420u;
    SET_GPR_U32(ctx, 31, 0x319428u);
    ctx->pc = 0x319424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319420u;
            // 0x319424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319428u; }
        if (ctx->pc != 0x319428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319428u; }
        if (ctx->pc != 0x319428u) { return; }
    }
    ctx->pc = 0x319428u;
label_319428:
    // 0x319428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31942c:
    // 0x31942c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31942cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_319430:
    // 0x319430: 0x3e00008  jr          $ra
label_319434:
    if (ctx->pc == 0x319434u) {
        ctx->pc = 0x319434u;
            // 0x319434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x319438u;
        goto label_319438;
    }
    ctx->pc = 0x319430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319430u;
            // 0x319434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319438u;
label_319438:
    // 0x319438: 0x0  nop
    ctx->pc = 0x319438u;
    // NOP
label_31943c:
    // 0x31943c: 0x0  nop
    ctx->pc = 0x31943cu;
    // NOP
label_319440:
    // 0x319440: 0x80777b8  j           func_1DDEE0
label_319444:
    if (ctx->pc == 0x319444u) {
        ctx->pc = 0x319444u;
            // 0x319444: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->pc = 0x319448u;
        goto label_319448;
    }
    ctx->pc = 0x319440u;
    ctx->pc = 0x319444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319440u;
            // 0x319444: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEE0u;
    {
        auto targetFn = runtime->lookupFunction(0x1DDEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x319448u;
label_319448:
    // 0x319448: 0x0  nop
    ctx->pc = 0x319448u;
    // NOP
label_31944c:
    // 0x31944c: 0x0  nop
    ctx->pc = 0x31944cu;
    // NOP
}
