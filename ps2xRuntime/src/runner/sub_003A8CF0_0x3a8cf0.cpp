#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A8CF0
// Address: 0x3a8cf0 - 0x3a9620
void sub_003A8CF0_0x3a8cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8CF0_0x3a8cf0");
#endif

    switch (ctx->pc) {
        case 0x3a8cf0u: goto label_3a8cf0;
        case 0x3a8cf4u: goto label_3a8cf4;
        case 0x3a8cf8u: goto label_3a8cf8;
        case 0x3a8cfcu: goto label_3a8cfc;
        case 0x3a8d00u: goto label_3a8d00;
        case 0x3a8d04u: goto label_3a8d04;
        case 0x3a8d08u: goto label_3a8d08;
        case 0x3a8d0cu: goto label_3a8d0c;
        case 0x3a8d10u: goto label_3a8d10;
        case 0x3a8d14u: goto label_3a8d14;
        case 0x3a8d18u: goto label_3a8d18;
        case 0x3a8d1cu: goto label_3a8d1c;
        case 0x3a8d20u: goto label_3a8d20;
        case 0x3a8d24u: goto label_3a8d24;
        case 0x3a8d28u: goto label_3a8d28;
        case 0x3a8d2cu: goto label_3a8d2c;
        case 0x3a8d30u: goto label_3a8d30;
        case 0x3a8d34u: goto label_3a8d34;
        case 0x3a8d38u: goto label_3a8d38;
        case 0x3a8d3cu: goto label_3a8d3c;
        case 0x3a8d40u: goto label_3a8d40;
        case 0x3a8d44u: goto label_3a8d44;
        case 0x3a8d48u: goto label_3a8d48;
        case 0x3a8d4cu: goto label_3a8d4c;
        case 0x3a8d50u: goto label_3a8d50;
        case 0x3a8d54u: goto label_3a8d54;
        case 0x3a8d58u: goto label_3a8d58;
        case 0x3a8d5cu: goto label_3a8d5c;
        case 0x3a8d60u: goto label_3a8d60;
        case 0x3a8d64u: goto label_3a8d64;
        case 0x3a8d68u: goto label_3a8d68;
        case 0x3a8d6cu: goto label_3a8d6c;
        case 0x3a8d70u: goto label_3a8d70;
        case 0x3a8d74u: goto label_3a8d74;
        case 0x3a8d78u: goto label_3a8d78;
        case 0x3a8d7cu: goto label_3a8d7c;
        case 0x3a8d80u: goto label_3a8d80;
        case 0x3a8d84u: goto label_3a8d84;
        case 0x3a8d88u: goto label_3a8d88;
        case 0x3a8d8cu: goto label_3a8d8c;
        case 0x3a8d90u: goto label_3a8d90;
        case 0x3a8d94u: goto label_3a8d94;
        case 0x3a8d98u: goto label_3a8d98;
        case 0x3a8d9cu: goto label_3a8d9c;
        case 0x3a8da0u: goto label_3a8da0;
        case 0x3a8da4u: goto label_3a8da4;
        case 0x3a8da8u: goto label_3a8da8;
        case 0x3a8dacu: goto label_3a8dac;
        case 0x3a8db0u: goto label_3a8db0;
        case 0x3a8db4u: goto label_3a8db4;
        case 0x3a8db8u: goto label_3a8db8;
        case 0x3a8dbcu: goto label_3a8dbc;
        case 0x3a8dc0u: goto label_3a8dc0;
        case 0x3a8dc4u: goto label_3a8dc4;
        case 0x3a8dc8u: goto label_3a8dc8;
        case 0x3a8dccu: goto label_3a8dcc;
        case 0x3a8dd0u: goto label_3a8dd0;
        case 0x3a8dd4u: goto label_3a8dd4;
        case 0x3a8dd8u: goto label_3a8dd8;
        case 0x3a8ddcu: goto label_3a8ddc;
        case 0x3a8de0u: goto label_3a8de0;
        case 0x3a8de4u: goto label_3a8de4;
        case 0x3a8de8u: goto label_3a8de8;
        case 0x3a8decu: goto label_3a8dec;
        case 0x3a8df0u: goto label_3a8df0;
        case 0x3a8df4u: goto label_3a8df4;
        case 0x3a8df8u: goto label_3a8df8;
        case 0x3a8dfcu: goto label_3a8dfc;
        case 0x3a8e00u: goto label_3a8e00;
        case 0x3a8e04u: goto label_3a8e04;
        case 0x3a8e08u: goto label_3a8e08;
        case 0x3a8e0cu: goto label_3a8e0c;
        case 0x3a8e10u: goto label_3a8e10;
        case 0x3a8e14u: goto label_3a8e14;
        case 0x3a8e18u: goto label_3a8e18;
        case 0x3a8e1cu: goto label_3a8e1c;
        case 0x3a8e20u: goto label_3a8e20;
        case 0x3a8e24u: goto label_3a8e24;
        case 0x3a8e28u: goto label_3a8e28;
        case 0x3a8e2cu: goto label_3a8e2c;
        case 0x3a8e30u: goto label_3a8e30;
        case 0x3a8e34u: goto label_3a8e34;
        case 0x3a8e38u: goto label_3a8e38;
        case 0x3a8e3cu: goto label_3a8e3c;
        case 0x3a8e40u: goto label_3a8e40;
        case 0x3a8e44u: goto label_3a8e44;
        case 0x3a8e48u: goto label_3a8e48;
        case 0x3a8e4cu: goto label_3a8e4c;
        case 0x3a8e50u: goto label_3a8e50;
        case 0x3a8e54u: goto label_3a8e54;
        case 0x3a8e58u: goto label_3a8e58;
        case 0x3a8e5cu: goto label_3a8e5c;
        case 0x3a8e60u: goto label_3a8e60;
        case 0x3a8e64u: goto label_3a8e64;
        case 0x3a8e68u: goto label_3a8e68;
        case 0x3a8e6cu: goto label_3a8e6c;
        case 0x3a8e70u: goto label_3a8e70;
        case 0x3a8e74u: goto label_3a8e74;
        case 0x3a8e78u: goto label_3a8e78;
        case 0x3a8e7cu: goto label_3a8e7c;
        case 0x3a8e80u: goto label_3a8e80;
        case 0x3a8e84u: goto label_3a8e84;
        case 0x3a8e88u: goto label_3a8e88;
        case 0x3a8e8cu: goto label_3a8e8c;
        case 0x3a8e90u: goto label_3a8e90;
        case 0x3a8e94u: goto label_3a8e94;
        case 0x3a8e98u: goto label_3a8e98;
        case 0x3a8e9cu: goto label_3a8e9c;
        case 0x3a8ea0u: goto label_3a8ea0;
        case 0x3a8ea4u: goto label_3a8ea4;
        case 0x3a8ea8u: goto label_3a8ea8;
        case 0x3a8eacu: goto label_3a8eac;
        case 0x3a8eb0u: goto label_3a8eb0;
        case 0x3a8eb4u: goto label_3a8eb4;
        case 0x3a8eb8u: goto label_3a8eb8;
        case 0x3a8ebcu: goto label_3a8ebc;
        case 0x3a8ec0u: goto label_3a8ec0;
        case 0x3a8ec4u: goto label_3a8ec4;
        case 0x3a8ec8u: goto label_3a8ec8;
        case 0x3a8eccu: goto label_3a8ecc;
        case 0x3a8ed0u: goto label_3a8ed0;
        case 0x3a8ed4u: goto label_3a8ed4;
        case 0x3a8ed8u: goto label_3a8ed8;
        case 0x3a8edcu: goto label_3a8edc;
        case 0x3a8ee0u: goto label_3a8ee0;
        case 0x3a8ee4u: goto label_3a8ee4;
        case 0x3a8ee8u: goto label_3a8ee8;
        case 0x3a8eecu: goto label_3a8eec;
        case 0x3a8ef0u: goto label_3a8ef0;
        case 0x3a8ef4u: goto label_3a8ef4;
        case 0x3a8ef8u: goto label_3a8ef8;
        case 0x3a8efcu: goto label_3a8efc;
        case 0x3a8f00u: goto label_3a8f00;
        case 0x3a8f04u: goto label_3a8f04;
        case 0x3a8f08u: goto label_3a8f08;
        case 0x3a8f0cu: goto label_3a8f0c;
        case 0x3a8f10u: goto label_3a8f10;
        case 0x3a8f14u: goto label_3a8f14;
        case 0x3a8f18u: goto label_3a8f18;
        case 0x3a8f1cu: goto label_3a8f1c;
        case 0x3a8f20u: goto label_3a8f20;
        case 0x3a8f24u: goto label_3a8f24;
        case 0x3a8f28u: goto label_3a8f28;
        case 0x3a8f2cu: goto label_3a8f2c;
        case 0x3a8f30u: goto label_3a8f30;
        case 0x3a8f34u: goto label_3a8f34;
        case 0x3a8f38u: goto label_3a8f38;
        case 0x3a8f3cu: goto label_3a8f3c;
        case 0x3a8f40u: goto label_3a8f40;
        case 0x3a8f44u: goto label_3a8f44;
        case 0x3a8f48u: goto label_3a8f48;
        case 0x3a8f4cu: goto label_3a8f4c;
        case 0x3a8f50u: goto label_3a8f50;
        case 0x3a8f54u: goto label_3a8f54;
        case 0x3a8f58u: goto label_3a8f58;
        case 0x3a8f5cu: goto label_3a8f5c;
        case 0x3a8f60u: goto label_3a8f60;
        case 0x3a8f64u: goto label_3a8f64;
        case 0x3a8f68u: goto label_3a8f68;
        case 0x3a8f6cu: goto label_3a8f6c;
        case 0x3a8f70u: goto label_3a8f70;
        case 0x3a8f74u: goto label_3a8f74;
        case 0x3a8f78u: goto label_3a8f78;
        case 0x3a8f7cu: goto label_3a8f7c;
        case 0x3a8f80u: goto label_3a8f80;
        case 0x3a8f84u: goto label_3a8f84;
        case 0x3a8f88u: goto label_3a8f88;
        case 0x3a8f8cu: goto label_3a8f8c;
        case 0x3a8f90u: goto label_3a8f90;
        case 0x3a8f94u: goto label_3a8f94;
        case 0x3a8f98u: goto label_3a8f98;
        case 0x3a8f9cu: goto label_3a8f9c;
        case 0x3a8fa0u: goto label_3a8fa0;
        case 0x3a8fa4u: goto label_3a8fa4;
        case 0x3a8fa8u: goto label_3a8fa8;
        case 0x3a8facu: goto label_3a8fac;
        case 0x3a8fb0u: goto label_3a8fb0;
        case 0x3a8fb4u: goto label_3a8fb4;
        case 0x3a8fb8u: goto label_3a8fb8;
        case 0x3a8fbcu: goto label_3a8fbc;
        case 0x3a8fc0u: goto label_3a8fc0;
        case 0x3a8fc4u: goto label_3a8fc4;
        case 0x3a8fc8u: goto label_3a8fc8;
        case 0x3a8fccu: goto label_3a8fcc;
        case 0x3a8fd0u: goto label_3a8fd0;
        case 0x3a8fd4u: goto label_3a8fd4;
        case 0x3a8fd8u: goto label_3a8fd8;
        case 0x3a8fdcu: goto label_3a8fdc;
        case 0x3a8fe0u: goto label_3a8fe0;
        case 0x3a8fe4u: goto label_3a8fe4;
        case 0x3a8fe8u: goto label_3a8fe8;
        case 0x3a8fecu: goto label_3a8fec;
        case 0x3a8ff0u: goto label_3a8ff0;
        case 0x3a8ff4u: goto label_3a8ff4;
        case 0x3a8ff8u: goto label_3a8ff8;
        case 0x3a8ffcu: goto label_3a8ffc;
        case 0x3a9000u: goto label_3a9000;
        case 0x3a9004u: goto label_3a9004;
        case 0x3a9008u: goto label_3a9008;
        case 0x3a900cu: goto label_3a900c;
        case 0x3a9010u: goto label_3a9010;
        case 0x3a9014u: goto label_3a9014;
        case 0x3a9018u: goto label_3a9018;
        case 0x3a901cu: goto label_3a901c;
        case 0x3a9020u: goto label_3a9020;
        case 0x3a9024u: goto label_3a9024;
        case 0x3a9028u: goto label_3a9028;
        case 0x3a902cu: goto label_3a902c;
        case 0x3a9030u: goto label_3a9030;
        case 0x3a9034u: goto label_3a9034;
        case 0x3a9038u: goto label_3a9038;
        case 0x3a903cu: goto label_3a903c;
        case 0x3a9040u: goto label_3a9040;
        case 0x3a9044u: goto label_3a9044;
        case 0x3a9048u: goto label_3a9048;
        case 0x3a904cu: goto label_3a904c;
        case 0x3a9050u: goto label_3a9050;
        case 0x3a9054u: goto label_3a9054;
        case 0x3a9058u: goto label_3a9058;
        case 0x3a905cu: goto label_3a905c;
        case 0x3a9060u: goto label_3a9060;
        case 0x3a9064u: goto label_3a9064;
        case 0x3a9068u: goto label_3a9068;
        case 0x3a906cu: goto label_3a906c;
        case 0x3a9070u: goto label_3a9070;
        case 0x3a9074u: goto label_3a9074;
        case 0x3a9078u: goto label_3a9078;
        case 0x3a907cu: goto label_3a907c;
        case 0x3a9080u: goto label_3a9080;
        case 0x3a9084u: goto label_3a9084;
        case 0x3a9088u: goto label_3a9088;
        case 0x3a908cu: goto label_3a908c;
        case 0x3a9090u: goto label_3a9090;
        case 0x3a9094u: goto label_3a9094;
        case 0x3a9098u: goto label_3a9098;
        case 0x3a909cu: goto label_3a909c;
        case 0x3a90a0u: goto label_3a90a0;
        case 0x3a90a4u: goto label_3a90a4;
        case 0x3a90a8u: goto label_3a90a8;
        case 0x3a90acu: goto label_3a90ac;
        case 0x3a90b0u: goto label_3a90b0;
        case 0x3a90b4u: goto label_3a90b4;
        case 0x3a90b8u: goto label_3a90b8;
        case 0x3a90bcu: goto label_3a90bc;
        case 0x3a90c0u: goto label_3a90c0;
        case 0x3a90c4u: goto label_3a90c4;
        case 0x3a90c8u: goto label_3a90c8;
        case 0x3a90ccu: goto label_3a90cc;
        case 0x3a90d0u: goto label_3a90d0;
        case 0x3a90d4u: goto label_3a90d4;
        case 0x3a90d8u: goto label_3a90d8;
        case 0x3a90dcu: goto label_3a90dc;
        case 0x3a90e0u: goto label_3a90e0;
        case 0x3a90e4u: goto label_3a90e4;
        case 0x3a90e8u: goto label_3a90e8;
        case 0x3a90ecu: goto label_3a90ec;
        case 0x3a90f0u: goto label_3a90f0;
        case 0x3a90f4u: goto label_3a90f4;
        case 0x3a90f8u: goto label_3a90f8;
        case 0x3a90fcu: goto label_3a90fc;
        case 0x3a9100u: goto label_3a9100;
        case 0x3a9104u: goto label_3a9104;
        case 0x3a9108u: goto label_3a9108;
        case 0x3a910cu: goto label_3a910c;
        case 0x3a9110u: goto label_3a9110;
        case 0x3a9114u: goto label_3a9114;
        case 0x3a9118u: goto label_3a9118;
        case 0x3a911cu: goto label_3a911c;
        case 0x3a9120u: goto label_3a9120;
        case 0x3a9124u: goto label_3a9124;
        case 0x3a9128u: goto label_3a9128;
        case 0x3a912cu: goto label_3a912c;
        case 0x3a9130u: goto label_3a9130;
        case 0x3a9134u: goto label_3a9134;
        case 0x3a9138u: goto label_3a9138;
        case 0x3a913cu: goto label_3a913c;
        case 0x3a9140u: goto label_3a9140;
        case 0x3a9144u: goto label_3a9144;
        case 0x3a9148u: goto label_3a9148;
        case 0x3a914cu: goto label_3a914c;
        case 0x3a9150u: goto label_3a9150;
        case 0x3a9154u: goto label_3a9154;
        case 0x3a9158u: goto label_3a9158;
        case 0x3a915cu: goto label_3a915c;
        case 0x3a9160u: goto label_3a9160;
        case 0x3a9164u: goto label_3a9164;
        case 0x3a9168u: goto label_3a9168;
        case 0x3a916cu: goto label_3a916c;
        case 0x3a9170u: goto label_3a9170;
        case 0x3a9174u: goto label_3a9174;
        case 0x3a9178u: goto label_3a9178;
        case 0x3a917cu: goto label_3a917c;
        case 0x3a9180u: goto label_3a9180;
        case 0x3a9184u: goto label_3a9184;
        case 0x3a9188u: goto label_3a9188;
        case 0x3a918cu: goto label_3a918c;
        case 0x3a9190u: goto label_3a9190;
        case 0x3a9194u: goto label_3a9194;
        case 0x3a9198u: goto label_3a9198;
        case 0x3a919cu: goto label_3a919c;
        case 0x3a91a0u: goto label_3a91a0;
        case 0x3a91a4u: goto label_3a91a4;
        case 0x3a91a8u: goto label_3a91a8;
        case 0x3a91acu: goto label_3a91ac;
        case 0x3a91b0u: goto label_3a91b0;
        case 0x3a91b4u: goto label_3a91b4;
        case 0x3a91b8u: goto label_3a91b8;
        case 0x3a91bcu: goto label_3a91bc;
        case 0x3a91c0u: goto label_3a91c0;
        case 0x3a91c4u: goto label_3a91c4;
        case 0x3a91c8u: goto label_3a91c8;
        case 0x3a91ccu: goto label_3a91cc;
        case 0x3a91d0u: goto label_3a91d0;
        case 0x3a91d4u: goto label_3a91d4;
        case 0x3a91d8u: goto label_3a91d8;
        case 0x3a91dcu: goto label_3a91dc;
        case 0x3a91e0u: goto label_3a91e0;
        case 0x3a91e4u: goto label_3a91e4;
        case 0x3a91e8u: goto label_3a91e8;
        case 0x3a91ecu: goto label_3a91ec;
        case 0x3a91f0u: goto label_3a91f0;
        case 0x3a91f4u: goto label_3a91f4;
        case 0x3a91f8u: goto label_3a91f8;
        case 0x3a91fcu: goto label_3a91fc;
        case 0x3a9200u: goto label_3a9200;
        case 0x3a9204u: goto label_3a9204;
        case 0x3a9208u: goto label_3a9208;
        case 0x3a920cu: goto label_3a920c;
        case 0x3a9210u: goto label_3a9210;
        case 0x3a9214u: goto label_3a9214;
        case 0x3a9218u: goto label_3a9218;
        case 0x3a921cu: goto label_3a921c;
        case 0x3a9220u: goto label_3a9220;
        case 0x3a9224u: goto label_3a9224;
        case 0x3a9228u: goto label_3a9228;
        case 0x3a922cu: goto label_3a922c;
        case 0x3a9230u: goto label_3a9230;
        case 0x3a9234u: goto label_3a9234;
        case 0x3a9238u: goto label_3a9238;
        case 0x3a923cu: goto label_3a923c;
        case 0x3a9240u: goto label_3a9240;
        case 0x3a9244u: goto label_3a9244;
        case 0x3a9248u: goto label_3a9248;
        case 0x3a924cu: goto label_3a924c;
        case 0x3a9250u: goto label_3a9250;
        case 0x3a9254u: goto label_3a9254;
        case 0x3a9258u: goto label_3a9258;
        case 0x3a925cu: goto label_3a925c;
        case 0x3a9260u: goto label_3a9260;
        case 0x3a9264u: goto label_3a9264;
        case 0x3a9268u: goto label_3a9268;
        case 0x3a926cu: goto label_3a926c;
        case 0x3a9270u: goto label_3a9270;
        case 0x3a9274u: goto label_3a9274;
        case 0x3a9278u: goto label_3a9278;
        case 0x3a927cu: goto label_3a927c;
        case 0x3a9280u: goto label_3a9280;
        case 0x3a9284u: goto label_3a9284;
        case 0x3a9288u: goto label_3a9288;
        case 0x3a928cu: goto label_3a928c;
        case 0x3a9290u: goto label_3a9290;
        case 0x3a9294u: goto label_3a9294;
        case 0x3a9298u: goto label_3a9298;
        case 0x3a929cu: goto label_3a929c;
        case 0x3a92a0u: goto label_3a92a0;
        case 0x3a92a4u: goto label_3a92a4;
        case 0x3a92a8u: goto label_3a92a8;
        case 0x3a92acu: goto label_3a92ac;
        case 0x3a92b0u: goto label_3a92b0;
        case 0x3a92b4u: goto label_3a92b4;
        case 0x3a92b8u: goto label_3a92b8;
        case 0x3a92bcu: goto label_3a92bc;
        case 0x3a92c0u: goto label_3a92c0;
        case 0x3a92c4u: goto label_3a92c4;
        case 0x3a92c8u: goto label_3a92c8;
        case 0x3a92ccu: goto label_3a92cc;
        case 0x3a92d0u: goto label_3a92d0;
        case 0x3a92d4u: goto label_3a92d4;
        case 0x3a92d8u: goto label_3a92d8;
        case 0x3a92dcu: goto label_3a92dc;
        case 0x3a92e0u: goto label_3a92e0;
        case 0x3a92e4u: goto label_3a92e4;
        case 0x3a92e8u: goto label_3a92e8;
        case 0x3a92ecu: goto label_3a92ec;
        case 0x3a92f0u: goto label_3a92f0;
        case 0x3a92f4u: goto label_3a92f4;
        case 0x3a92f8u: goto label_3a92f8;
        case 0x3a92fcu: goto label_3a92fc;
        case 0x3a9300u: goto label_3a9300;
        case 0x3a9304u: goto label_3a9304;
        case 0x3a9308u: goto label_3a9308;
        case 0x3a930cu: goto label_3a930c;
        case 0x3a9310u: goto label_3a9310;
        case 0x3a9314u: goto label_3a9314;
        case 0x3a9318u: goto label_3a9318;
        case 0x3a931cu: goto label_3a931c;
        case 0x3a9320u: goto label_3a9320;
        case 0x3a9324u: goto label_3a9324;
        case 0x3a9328u: goto label_3a9328;
        case 0x3a932cu: goto label_3a932c;
        case 0x3a9330u: goto label_3a9330;
        case 0x3a9334u: goto label_3a9334;
        case 0x3a9338u: goto label_3a9338;
        case 0x3a933cu: goto label_3a933c;
        case 0x3a9340u: goto label_3a9340;
        case 0x3a9344u: goto label_3a9344;
        case 0x3a9348u: goto label_3a9348;
        case 0x3a934cu: goto label_3a934c;
        case 0x3a9350u: goto label_3a9350;
        case 0x3a9354u: goto label_3a9354;
        case 0x3a9358u: goto label_3a9358;
        case 0x3a935cu: goto label_3a935c;
        case 0x3a9360u: goto label_3a9360;
        case 0x3a9364u: goto label_3a9364;
        case 0x3a9368u: goto label_3a9368;
        case 0x3a936cu: goto label_3a936c;
        case 0x3a9370u: goto label_3a9370;
        case 0x3a9374u: goto label_3a9374;
        case 0x3a9378u: goto label_3a9378;
        case 0x3a937cu: goto label_3a937c;
        case 0x3a9380u: goto label_3a9380;
        case 0x3a9384u: goto label_3a9384;
        case 0x3a9388u: goto label_3a9388;
        case 0x3a938cu: goto label_3a938c;
        case 0x3a9390u: goto label_3a9390;
        case 0x3a9394u: goto label_3a9394;
        case 0x3a9398u: goto label_3a9398;
        case 0x3a939cu: goto label_3a939c;
        case 0x3a93a0u: goto label_3a93a0;
        case 0x3a93a4u: goto label_3a93a4;
        case 0x3a93a8u: goto label_3a93a8;
        case 0x3a93acu: goto label_3a93ac;
        case 0x3a93b0u: goto label_3a93b0;
        case 0x3a93b4u: goto label_3a93b4;
        case 0x3a93b8u: goto label_3a93b8;
        case 0x3a93bcu: goto label_3a93bc;
        case 0x3a93c0u: goto label_3a93c0;
        case 0x3a93c4u: goto label_3a93c4;
        case 0x3a93c8u: goto label_3a93c8;
        case 0x3a93ccu: goto label_3a93cc;
        case 0x3a93d0u: goto label_3a93d0;
        case 0x3a93d4u: goto label_3a93d4;
        case 0x3a93d8u: goto label_3a93d8;
        case 0x3a93dcu: goto label_3a93dc;
        case 0x3a93e0u: goto label_3a93e0;
        case 0x3a93e4u: goto label_3a93e4;
        case 0x3a93e8u: goto label_3a93e8;
        case 0x3a93ecu: goto label_3a93ec;
        case 0x3a93f0u: goto label_3a93f0;
        case 0x3a93f4u: goto label_3a93f4;
        case 0x3a93f8u: goto label_3a93f8;
        case 0x3a93fcu: goto label_3a93fc;
        case 0x3a9400u: goto label_3a9400;
        case 0x3a9404u: goto label_3a9404;
        case 0x3a9408u: goto label_3a9408;
        case 0x3a940cu: goto label_3a940c;
        case 0x3a9410u: goto label_3a9410;
        case 0x3a9414u: goto label_3a9414;
        case 0x3a9418u: goto label_3a9418;
        case 0x3a941cu: goto label_3a941c;
        case 0x3a9420u: goto label_3a9420;
        case 0x3a9424u: goto label_3a9424;
        case 0x3a9428u: goto label_3a9428;
        case 0x3a942cu: goto label_3a942c;
        case 0x3a9430u: goto label_3a9430;
        case 0x3a9434u: goto label_3a9434;
        case 0x3a9438u: goto label_3a9438;
        case 0x3a943cu: goto label_3a943c;
        case 0x3a9440u: goto label_3a9440;
        case 0x3a9444u: goto label_3a9444;
        case 0x3a9448u: goto label_3a9448;
        case 0x3a944cu: goto label_3a944c;
        case 0x3a9450u: goto label_3a9450;
        case 0x3a9454u: goto label_3a9454;
        case 0x3a9458u: goto label_3a9458;
        case 0x3a945cu: goto label_3a945c;
        case 0x3a9460u: goto label_3a9460;
        case 0x3a9464u: goto label_3a9464;
        case 0x3a9468u: goto label_3a9468;
        case 0x3a946cu: goto label_3a946c;
        case 0x3a9470u: goto label_3a9470;
        case 0x3a9474u: goto label_3a9474;
        case 0x3a9478u: goto label_3a9478;
        case 0x3a947cu: goto label_3a947c;
        case 0x3a9480u: goto label_3a9480;
        case 0x3a9484u: goto label_3a9484;
        case 0x3a9488u: goto label_3a9488;
        case 0x3a948cu: goto label_3a948c;
        case 0x3a9490u: goto label_3a9490;
        case 0x3a9494u: goto label_3a9494;
        case 0x3a9498u: goto label_3a9498;
        case 0x3a949cu: goto label_3a949c;
        case 0x3a94a0u: goto label_3a94a0;
        case 0x3a94a4u: goto label_3a94a4;
        case 0x3a94a8u: goto label_3a94a8;
        case 0x3a94acu: goto label_3a94ac;
        case 0x3a94b0u: goto label_3a94b0;
        case 0x3a94b4u: goto label_3a94b4;
        case 0x3a94b8u: goto label_3a94b8;
        case 0x3a94bcu: goto label_3a94bc;
        case 0x3a94c0u: goto label_3a94c0;
        case 0x3a94c4u: goto label_3a94c4;
        case 0x3a94c8u: goto label_3a94c8;
        case 0x3a94ccu: goto label_3a94cc;
        case 0x3a94d0u: goto label_3a94d0;
        case 0x3a94d4u: goto label_3a94d4;
        case 0x3a94d8u: goto label_3a94d8;
        case 0x3a94dcu: goto label_3a94dc;
        case 0x3a94e0u: goto label_3a94e0;
        case 0x3a94e4u: goto label_3a94e4;
        case 0x3a94e8u: goto label_3a94e8;
        case 0x3a94ecu: goto label_3a94ec;
        case 0x3a94f0u: goto label_3a94f0;
        case 0x3a94f4u: goto label_3a94f4;
        case 0x3a94f8u: goto label_3a94f8;
        case 0x3a94fcu: goto label_3a94fc;
        case 0x3a9500u: goto label_3a9500;
        case 0x3a9504u: goto label_3a9504;
        case 0x3a9508u: goto label_3a9508;
        case 0x3a950cu: goto label_3a950c;
        case 0x3a9510u: goto label_3a9510;
        case 0x3a9514u: goto label_3a9514;
        case 0x3a9518u: goto label_3a9518;
        case 0x3a951cu: goto label_3a951c;
        case 0x3a9520u: goto label_3a9520;
        case 0x3a9524u: goto label_3a9524;
        case 0x3a9528u: goto label_3a9528;
        case 0x3a952cu: goto label_3a952c;
        case 0x3a9530u: goto label_3a9530;
        case 0x3a9534u: goto label_3a9534;
        case 0x3a9538u: goto label_3a9538;
        case 0x3a953cu: goto label_3a953c;
        case 0x3a9540u: goto label_3a9540;
        case 0x3a9544u: goto label_3a9544;
        case 0x3a9548u: goto label_3a9548;
        case 0x3a954cu: goto label_3a954c;
        case 0x3a9550u: goto label_3a9550;
        case 0x3a9554u: goto label_3a9554;
        case 0x3a9558u: goto label_3a9558;
        case 0x3a955cu: goto label_3a955c;
        case 0x3a9560u: goto label_3a9560;
        case 0x3a9564u: goto label_3a9564;
        case 0x3a9568u: goto label_3a9568;
        case 0x3a956cu: goto label_3a956c;
        case 0x3a9570u: goto label_3a9570;
        case 0x3a9574u: goto label_3a9574;
        case 0x3a9578u: goto label_3a9578;
        case 0x3a957cu: goto label_3a957c;
        case 0x3a9580u: goto label_3a9580;
        case 0x3a9584u: goto label_3a9584;
        case 0x3a9588u: goto label_3a9588;
        case 0x3a958cu: goto label_3a958c;
        case 0x3a9590u: goto label_3a9590;
        case 0x3a9594u: goto label_3a9594;
        case 0x3a9598u: goto label_3a9598;
        case 0x3a959cu: goto label_3a959c;
        case 0x3a95a0u: goto label_3a95a0;
        case 0x3a95a4u: goto label_3a95a4;
        case 0x3a95a8u: goto label_3a95a8;
        case 0x3a95acu: goto label_3a95ac;
        case 0x3a95b0u: goto label_3a95b0;
        case 0x3a95b4u: goto label_3a95b4;
        case 0x3a95b8u: goto label_3a95b8;
        case 0x3a95bcu: goto label_3a95bc;
        case 0x3a95c0u: goto label_3a95c0;
        case 0x3a95c4u: goto label_3a95c4;
        case 0x3a95c8u: goto label_3a95c8;
        case 0x3a95ccu: goto label_3a95cc;
        case 0x3a95d0u: goto label_3a95d0;
        case 0x3a95d4u: goto label_3a95d4;
        case 0x3a95d8u: goto label_3a95d8;
        case 0x3a95dcu: goto label_3a95dc;
        case 0x3a95e0u: goto label_3a95e0;
        case 0x3a95e4u: goto label_3a95e4;
        case 0x3a95e8u: goto label_3a95e8;
        case 0x3a95ecu: goto label_3a95ec;
        case 0x3a95f0u: goto label_3a95f0;
        case 0x3a95f4u: goto label_3a95f4;
        case 0x3a95f8u: goto label_3a95f8;
        case 0x3a95fcu: goto label_3a95fc;
        case 0x3a9600u: goto label_3a9600;
        case 0x3a9604u: goto label_3a9604;
        case 0x3a9608u: goto label_3a9608;
        case 0x3a960cu: goto label_3a960c;
        case 0x3a9610u: goto label_3a9610;
        case 0x3a9614u: goto label_3a9614;
        case 0x3a9618u: goto label_3a9618;
        case 0x3a961cu: goto label_3a961c;
        default: break;
    }

    ctx->pc = 0x3a8cf0u;

label_3a8cf0:
    // 0x3a8cf0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3a8cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3a8cf4:
    // 0x3a8cf4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a8cf8:
    // 0x3a8cf8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3a8cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3a8cfc:
    // 0x3a8cfc: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3a8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3a8d00:
    // 0x3a8d00: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3a8d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3a8d04:
    // 0x3a8d04: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3a8d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3a8d08:
    // 0x3a8d08: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a8d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3a8d0c:
    // 0x3a8d0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a8d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3a8d10:
    // 0x3a8d10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a8d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a8d14:
    // 0x3a8d14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a8d14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d18:
    // 0x3a8d18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a8d1c:
    // 0x3a8d1c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3a8d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a8d20:
    // 0x3a8d20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a8d24:
    // 0x3a8d24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a8d24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d28:
    // 0x3a8d28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a8d2c:
    // 0x3a8d2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a8d30:
    // 0x3a8d30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a8d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a8d34:
    // 0x3a8d34: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x3a8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_3a8d38:
    // 0x3a8d38: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3a8d38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3a8d3c:
    // 0x3a8d3c: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x3a8d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_3a8d40:
    // 0x3a8d40: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3a8d40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a8d44:
    // 0x3a8d44: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a8d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a8d48:
    // 0x3a8d48: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a8d48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a8d4c:
    // 0x3a8d4c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x3a8d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_3a8d50:
    // 0x3a8d50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a8d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a8d54:
    // 0x3a8d54: 0x24900038  addiu       $s0, $a0, 0x38
    ctx->pc = 0x3a8d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_3a8d58:
    // 0x3a8d58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a8d5c:
    // 0x3a8d5c: 0x906411a1  lbu         $a0, 0x11A1($v1)
    ctx->pc = 0x3a8d5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4513)));
label_3a8d60:
    // 0x3a8d60: 0x1080019d  beqz        $a0, . + 4 + (0x19D << 2)
label_3a8d64:
    if (ctx->pc == 0x3A8D64u) {
        ctx->pc = 0x3A8D64u;
            // 0x3a8d64: 0x26b60008  addiu       $s6, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x3A8D68u;
        goto label_3a8d68;
    }
    ctx->pc = 0x3A8D60u;
    {
        const bool branch_taken_0x3a8d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8D60u;
            // 0x3a8d64: 0x26b60008  addiu       $s6, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d60) {
            ctx->pc = 0x3A93D8u;
            goto label_3a93d8;
        }
    }
    ctx->pc = 0x3A8D68u;
label_3a8d68:
    // 0x3a8d68: 0x8c640da0  lw          $a0, 0xDA0($v1)
    ctx->pc = 0x3a8d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3a8d6c:
    // 0x3a8d6c: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x3a8d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_3a8d70:
    // 0x3a8d70: 0x5480019a  bnel        $a0, $zero, . + 4 + (0x19A << 2)
label_3a8d74:
    if (ctx->pc == 0x3A8D74u) {
        ctx->pc = 0x3A8D74u;
            // 0x3a8d74: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3A8D78u;
        goto label_3a8d78;
    }
    ctx->pc = 0x3A8D70u;
    {
        const bool branch_taken_0x3a8d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8d70) {
            ctx->pc = 0x3A8D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8D70u;
            // 0x3a8d74: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A93DCu;
            goto label_3a93dc;
        }
    }
    ctx->pc = 0x3A8D78u;
label_3a8d78:
    // 0x3a8d78: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3a8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a8d7c:
    // 0x3a8d7c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x3a8d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_3a8d80:
    // 0x3a8d80: 0x908400e4  lbu         $a0, 0xE4($a0)
    ctx->pc = 0x3a8d80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 228)));
label_3a8d84:
    // 0x3a8d84: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x3a8d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_3a8d88:
    // 0x3a8d88: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3a8d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3a8d8c:
    // 0x3a8d8c: 0x14800192  bnez        $a0, . + 4 + (0x192 << 2)
label_3a8d90:
    if (ctx->pc == 0x3A8D90u) {
        ctx->pc = 0x3A8D94u;
        goto label_3a8d94;
    }
    ctx->pc = 0x3A8D8Cu;
    {
        const bool branch_taken_0x3a8d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8d8c) {
            ctx->pc = 0x3A93D8u;
            goto label_3a93d8;
        }
    }
    ctx->pc = 0x3A8D94u;
label_3a8d94:
    // 0x3a8d94: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3a8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3a8d98:
    // 0x3a8d98: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x3a8d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_3a8d9c:
    // 0x3a8d9c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3a8d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3a8da0:
    // 0x3a8da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a8da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8da4:
    // 0x3a8da4: 0xc4610de4  lwc1        $f1, 0xDE4($v1)
    ctx->pc = 0x3a8da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8da8:
    // 0x3a8da8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x3a8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_3a8dac:
    // 0x3a8dac: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x3a8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_3a8db0:
    // 0x3a8db0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3a8db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a8db4:
    // 0x3a8db4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a8db4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8db8:
    // 0x3a8db8: 0x0  nop
    ctx->pc = 0x3a8db8u;
    // NOP
label_3a8dbc:
    // 0x3a8dbc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3a8dbcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_3a8dc0:
    // 0x3a8dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a8dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8dc4:
    // 0x3a8dc4: 0x0  nop
    ctx->pc = 0x3a8dc4u;
    // NOP
label_3a8dc8:
    // 0x3a8dc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a8dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3a8dcc:
    // 0x3a8dcc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8dccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8dd0:
    // 0x3a8dd0: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x3a8dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_3a8dd4:
    // 0x3a8dd4: 0x0  nop
    ctx->pc = 0x3a8dd4u;
    // NOP
label_3a8dd8:
    // 0x3a8dd8: 0x6e30003  bgezl       $s7, . + 4 + (0x3 << 2)
label_3a8ddc:
    if (ctx->pc == 0x3A8DDCu) {
        ctx->pc = 0x3A8DDCu;
            // 0x3a8ddc: 0x2ae103e8  slti        $at, $s7, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->pc = 0x3A8DE0u;
        goto label_3a8de0;
    }
    ctx->pc = 0x3A8DD8u;
    {
        const bool branch_taken_0x3a8dd8 = (GPR_S32(ctx, 23) >= 0);
        if (branch_taken_0x3a8dd8) {
            ctx->pc = 0x3A8DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8DD8u;
            // 0x3a8ddc: 0x2ae103e8  slti        $at, $s7, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8DE8u;
            goto label_3a8de8;
        }
    }
    ctx->pc = 0x3A8DE0u;
label_3a8de0:
    // 0x3a8de0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a8de4:
    if (ctx->pc == 0x3A8DE4u) {
        ctx->pc = 0x3A8DE4u;
            // 0x3a8de4: 0x17b823  negu        $s7, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
        ctx->pc = 0x3A8DE8u;
        goto label_3a8de8;
    }
    ctx->pc = 0x3A8DE0u;
    {
        const bool branch_taken_0x3a8de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8DE0u;
            // 0x3a8de4: 0x17b823  negu        $s7, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8de0) {
            ctx->pc = 0x3A8DF4u;
            goto label_3a8df4;
        }
    }
    ctx->pc = 0x3A8DE8u;
label_3a8de8:
    // 0x3a8de8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_3a8dec:
    if (ctx->pc == 0x3A8DECu) {
        ctx->pc = 0x3A8DECu;
            // 0x3a8dec: 0x8c650d6c  lw          $a1, 0xD6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
        ctx->pc = 0x3A8DF0u;
        goto label_3a8df0;
    }
    ctx->pc = 0x3A8DE8u;
    {
        const bool branch_taken_0x3a8de8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8de8) {
            ctx->pc = 0x3A8DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8DE8u;
            // 0x3a8dec: 0x8c650d6c  lw          $a1, 0xD6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8DF8u;
            goto label_3a8df8;
        }
    }
    ctx->pc = 0x3A8DF0u;
label_3a8df0:
    // 0x3a8df0: 0x241703e7  addiu       $s7, $zero, 0x3E7
    ctx->pc = 0x3a8df0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_3a8df4:
    // 0x3a8df4: 0x8c650d6c  lw          $a1, 0xD6C($v1)
    ctx->pc = 0x3a8df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
label_3a8df8:
    // 0x3a8df8: 0xc4770a7c  lwc1        $f23, 0xA7C($v1)
    ctx->pc = 0x3a8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3a8dfc:
    // 0x3a8dfc: 0xc4760a84  lwc1        $f22, 0xA84($v1)
    ctx->pc = 0x3a8dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a8e00:
    // 0x3a8e00: 0x24640440  addiu       $a0, $v1, 0x440
    ctx->pc = 0x3a8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
label_3a8e04:
    // 0x3a8e04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3a8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3a8e08:
    // 0x3a8e08: 0x2442cd10  addiu       $v0, $v0, -0x32F0
    ctx->pc = 0x3a8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954256));
label_3a8e0c:
    // 0x3a8e0c: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x3a8e0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_3a8e10:
    // 0x3a8e10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a8e14:
    // 0x3a8e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a8e18:
    // 0x3a8e18: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x3a8e18u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a8e1c:
    // 0x3a8e1c: 0xc0754b4  jal         func_1D52D0
label_3a8e20:
    if (ctx->pc == 0x3A8E20u) {
        ctx->pc = 0x3A8E20u;
            // 0x3a8e20: 0xc6140024  lwc1        $f20, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x3A8E24u;
        goto label_3a8e24;
    }
    ctx->pc = 0x3A8E1Cu;
    SET_GPR_U32(ctx, 31, 0x3A8E24u);
    ctx->pc = 0x3A8E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8E1Cu;
            // 0x3a8e20: 0xc6140024  lwc1        $f20, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8E24u; }
        if (ctx->pc != 0x3A8E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8E24u; }
        if (ctx->pc != 0x3A8E24u) { return; }
    }
    ctx->pc = 0x3A8E24u;
label_3a8e24:
    // 0x3a8e24: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x3a8e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8e28:
    // 0x3a8e28: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3a8e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8e2c:
    // 0x3a8e2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a8e2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8e30:
    // 0x3a8e30: 0x0  nop
    ctx->pc = 0x3a8e30u;
    // NOP
label_3a8e34:
    // 0x3a8e34: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3a8e34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a8e38:
    // 0x3a8e38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3a8e3c:
    if (ctx->pc == 0x3A8E3Cu) {
        ctx->pc = 0x3A8E3Cu;
            // 0x3a8e3c: 0x46011541  sub.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x3A8E40u;
        goto label_3a8e40;
    }
    ctx->pc = 0x3A8E38u;
    {
        const bool branch_taken_0x3a8e38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A8E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8E38u;
            // 0x3a8e3c: 0x46011541  sub.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e38) {
            ctx->pc = 0x3A8E50u;
            goto label_3a8e50;
        }
    }
    ctx->pc = 0x3A8E40u;
label_3a8e40:
    // 0x3a8e40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a8e44:
    // 0x3a8e44: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3a8e44u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3a8e48:
    // 0x3a8e48: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3a8e48u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3a8e4c:
    // 0x3a8e4c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3a8e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a8e50:
    // 0x3a8e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a8e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8e54:
    // 0x3a8e54: 0x0  nop
    ctx->pc = 0x3a8e54u;
    // NOP
label_3a8e58:
    // 0x3a8e58: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x3a8e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a8e5c:
    // 0x3a8e5c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3a8e60:
    if (ctx->pc == 0x3A8E60u) {
        ctx->pc = 0x3A8E60u;
            // 0x3a8e60: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x3A8E64u;
        goto label_3a8e64;
    }
    ctx->pc = 0x3A8E5Cu;
    {
        const bool branch_taken_0x3a8e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a8e5c) {
            ctx->pc = 0x3A8E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8E5Cu;
            // 0x3a8e60: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E70u;
            goto label_3a8e70;
        }
    }
    ctx->pc = 0x3A8E64u;
label_3a8e64:
    // 0x3a8e64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a8e68:
    // 0x3a8e68: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x3a8e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3a8e6c:
    // 0x3a8e6c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3a8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3a8e70:
    // 0x3a8e70: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3a8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a8e74:
    // 0x3a8e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a8e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8e78:
    // 0x3a8e78: 0x8ed3000c  lw          $s3, 0xC($s6)
    ctx->pc = 0x3a8e78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_3a8e7c:
    // 0x3a8e7c: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x3a8e7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
label_3a8e80:
    // 0x3a8e80: 0x8ed20010  lw          $s2, 0x10($s6)
    ctx->pc = 0x3a8e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3a8e84:
    // 0x3a8e84: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3a8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_3a8e88:
    // 0x3a8e88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a8e8c:
    // 0x3a8e8c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a8e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8e90:
    // 0x3a8e90: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x3a8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8e94:
    // 0x3a8e94: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_3a8e98:
    if (ctx->pc == 0x3A8E98u) {
        ctx->pc = 0x3A8E98u;
            // 0x3a8e98: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A8E9Cu;
        goto label_3a8e9c;
    }
    ctx->pc = 0x3A8E94u;
    {
        const bool branch_taken_0x3a8e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8E94u;
            // 0x3a8e98: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e94) {
            ctx->pc = 0x3A8ED0u;
            goto label_3a8ed0;
        }
    }
    ctx->pc = 0x3A8E9Cu;
label_3a8e9c:
    // 0x3a8e9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a8ea0:
    // 0x3a8ea0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_3a8ea4:
    if (ctx->pc == 0x3A8EA4u) {
        ctx->pc = 0x3A8EA4u;
            // 0x3a8ea4: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3A8EA8u;
        goto label_3a8ea8;
    }
    ctx->pc = 0x3A8EA0u;
    {
        const bool branch_taken_0x3a8ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a8ea0) {
            ctx->pc = 0x3A8EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8EA0u;
            // 0x3a8ea4: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8ED4u;
            goto label_3a8ed4;
        }
    }
    ctx->pc = 0x3A8EA8u;
label_3a8ea8:
    // 0x3a8ea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a8eac:
    // 0x3a8eac: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_3a8eb0:
    if (ctx->pc == 0x3A8EB0u) {
        ctx->pc = 0x3A8EB0u;
            // 0x3a8eb0: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3A8EB4u;
        goto label_3a8eb4;
    }
    ctx->pc = 0x3A8EACu;
    {
        const bool branch_taken_0x3a8eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a8eac) {
            ctx->pc = 0x3A8EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8EACu;
            // 0x3a8eb0: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8EBCu;
            goto label_3a8ebc;
        }
    }
    ctx->pc = 0x3A8EB4u;
label_3a8eb4:
    // 0x3a8eb4: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a8eb8:
    if (ctx->pc == 0x3A8EB8u) {
        ctx->pc = 0x3A8EBCu;
        goto label_3a8ebc;
    }
    ctx->pc = 0x3A8EB4u;
    {
        const bool branch_taken_0x3a8eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8eb4) {
            ctx->pc = 0x3A8EFCu;
            goto label_3a8efc;
        }
    }
    ctx->pc = 0x3A8EBCu;
label_3a8ebc:
    // 0x3a8ebc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3a8ec0:
    if (ctx->pc == 0x3A8EC0u) {
        ctx->pc = 0x3A8EC4u;
        goto label_3a8ec4;
    }
    ctx->pc = 0x3A8EBCu;
    {
        const bool branch_taken_0x3a8ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8ebc) {
            ctx->pc = 0x3A8EFCu;
            goto label_3a8efc;
        }
    }
    ctx->pc = 0x3A8EC4u;
label_3a8ec4:
    // 0x3a8ec4: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3a8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3a8ec8:
    // 0x3a8ec8: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a8ecc:
    if (ctx->pc == 0x3A8ECCu) {
        ctx->pc = 0x3A8ECCu;
            // 0x3a8ecc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x3A8ED0u;
        goto label_3a8ed0;
    }
    ctx->pc = 0x3A8EC8u;
    {
        const bool branch_taken_0x3a8ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8EC8u;
            // 0x3a8ecc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ec8) {
            ctx->pc = 0x3A8EFCu;
            goto label_3a8efc;
        }
    }
    ctx->pc = 0x3A8ED0u;
label_3a8ed0:
    // 0x3a8ed0: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x3a8ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_3a8ed4:
    // 0x3a8ed4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a8ed8:
    if (ctx->pc == 0x3A8ED8u) {
        ctx->pc = 0x3A8ED8u;
            // 0x3a8ed8: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x3A8EDCu;
        goto label_3a8edc;
    }
    ctx->pc = 0x3A8ED4u;
    {
        const bool branch_taken_0x3a8ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8ed4) {
            ctx->pc = 0x3A8ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8ED4u;
            // 0x3a8ed8: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8EECu;
            goto label_3a8eec;
        }
    }
    ctx->pc = 0x3A8EDCu;
label_3a8edc:
    // 0x3a8edc: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x3a8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_3a8ee0:
    // 0x3a8ee0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x3a8ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a8ee4:
    // 0x3a8ee4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3a8ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3a8ee8:
    // 0x3a8ee8: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x3a8ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_3a8eec:
    // 0x3a8eec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a8ef0:
    if (ctx->pc == 0x3A8EF0u) {
        ctx->pc = 0x3A8EF4u;
        goto label_3a8ef4;
    }
    ctx->pc = 0x3A8EECu;
    {
        const bool branch_taken_0x3a8eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8eec) {
            ctx->pc = 0x3A8EFCu;
            goto label_3a8efc;
        }
    }
    ctx->pc = 0x3A8EF4u;
label_3a8ef4:
    // 0x3a8ef4: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3a8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3a8ef8:
    // 0x3a8ef8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3a8ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3a8efc:
    // 0x3a8efc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a8f00:
    // 0x3a8f00: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a8f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a8f04:
    // 0x3a8f04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a8f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a8f08:
    // 0x3a8f08: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a8f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a8f0c:
    // 0x3a8f0c: 0x320f809  jalr        $t9
label_3a8f10:
    if (ctx->pc == 0x3A8F10u) {
        ctx->pc = 0x3A8F10u;
            // 0x3a8f10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A8F14u;
        goto label_3a8f14;
    }
    ctx->pc = 0x3A8F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A8F14u);
        ctx->pc = 0x3A8F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8F0Cu;
            // 0x3a8f10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A8F14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A8F14u; }
            if (ctx->pc != 0x3A8F14u) { return; }
        }
        }
    }
    ctx->pc = 0x3A8F14u;
label_3a8f14:
    // 0x3a8f14: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3a8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_3a8f18:
    // 0x3a8f18: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x3a8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3a8f1c:
    // 0x3a8f1c: 0x84742102  lh          $s4, 0x2102($v1)
    ctx->pc = 0x3a8f1cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8450)));
label_3a8f20:
    // 0x3a8f20: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3a8f20u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8f24:
    // 0x3a8f24: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x3a8f24u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a8f28:
    // 0x3a8f28: 0x92a80029  lbu         $t0, 0x29($s5)
    ctx->pc = 0x3a8f28u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 41)));
label_3a8f2c:
    // 0x3a8f2c: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x3a8f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3a8f30:
    // 0x3a8f30: 0x84470020  lh          $a3, 0x20($v0)
    ctx->pc = 0x3a8f30u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_3a8f34:
    // 0x3a8f34: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3a8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_3a8f38:
    // 0x3a8f38: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a8f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a8f3c:
    // 0x3a8f3c: 0x84762100  lh          $s6, 0x2100($v1)
    ctx->pc = 0x3a8f3cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8448)));
label_3a8f40:
    // 0x3a8f40: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x3a8f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_3a8f44:
    // 0x3a8f44: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3a8f44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_3a8f48:
    // 0x3a8f48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a8f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a8f4c:
    // 0x3a8f4c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3a8f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3a8f50:
    // 0x3a8f50: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3a8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_3a8f54:
    // 0x3a8f54: 0x84662100  lh          $a2, 0x2100($v1)
    ctx->pc = 0x3a8f54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8448)));
label_3a8f58:
    // 0x3a8f58: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3a8f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3a8f5c:
    // 0x3a8f5c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3a8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3a8f60:
    // 0x3a8f60: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a8f60u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8f64:
    // 0x3a8f64: 0x0  nop
    ctx->pc = 0x3a8f64u;
    // NOP
label_3a8f68:
    // 0x3a8f68: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a8f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a8f6c:
    // 0x3a8f6c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x3a8f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a8f70:
    // 0x3a8f70: 0x90c60116  lbu         $a2, 0x116($a2)
    ctx->pc = 0x3a8f70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 278)));
label_3a8f74:
    // 0x3a8f74: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x3a8f74u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a8f78:
    // 0x3a8f78: 0x3c63025  or          $a2, $fp, $a2
    ctx->pc = 0x3a8f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
label_3a8f7c:
    // 0x3a8f7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a8f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a8f80:
    // 0x3a8f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a8f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8f84:
    // 0x3a8f84: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x3a8f84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a8f88:
    // 0x3a8f88: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x3a8f88u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a8f8c:
    // 0x3a8f8c: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x3a8f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8f90:
    // 0x3a8f90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a8f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a8f94:
    // 0x3a8f94: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3a8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8f98:
    // 0x3a8f98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a8f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a8f9c:
    // 0x3a8f9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3a8f9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3a8fa0:
    // 0x3a8fa0: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x3a8fa0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_3a8fa4:
    // 0x3a8fa4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3a8fa4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8fa8:
    // 0x3a8fa8: 0x0  nop
    ctx->pc = 0x3a8fa8u;
    // NOP
label_3a8fac:
    // 0x3a8fac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a8facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a8fb0:
    // 0x3a8fb0: 0x46011b01  sub.s       $f12, $f3, $f1
    ctx->pc = 0x3a8fb0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_3a8fb4:
    // 0x3a8fb4: 0x46011b80  add.s       $f14, $f3, $f1
    ctx->pc = 0x3a8fb4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3a8fb8:
    // 0x3a8fb8: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x3a8fb8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3a8fbc:
    // 0x3a8fbc: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x3a8fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a8fc0:
    // 0x3a8fc0: 0xc0bc284  jal         func_2F0A10
label_3a8fc4:
    if (ctx->pc == 0x3A8FC4u) {
        ctx->pc = 0x3A8FC4u;
            // 0x3a8fc4: 0x460113c0  add.s       $f15, $f2, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x3A8FC8u;
        goto label_3a8fc8;
    }
    ctx->pc = 0x3A8FC0u;
    SET_GPR_U32(ctx, 31, 0x3A8FC8u);
    ctx->pc = 0x3A8FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8FC0u;
            // 0x3a8fc4: 0x460113c0  add.s       $f15, $f2, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8FC8u; }
        if (ctx->pc != 0x3A8FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8FC8u; }
        if (ctx->pc != 0x3A8FC8u) { return; }
    }
    ctx->pc = 0x3A8FC8u;
label_3a8fc8:
    // 0x3a8fc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a8fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a8fcc:
    // 0x3a8fcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a8fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8fd0:
    // 0x3a8fd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a8fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8fd4:
    // 0x3a8fd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a8fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a8fd8:
    // 0x3a8fd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a8fd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a8fdc:
    // 0x3a8fdc: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a8fdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3a8fe0:
    // 0x3a8fe0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a8fe0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3a8fe4:
    // 0x3a8fe4: 0xc0eac24  jal         func_3AB090
label_3a8fe8:
    if (ctx->pc == 0x3A8FE8u) {
        ctx->pc = 0x3A8FE8u;
            // 0x3a8fe8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3A8FECu;
        goto label_3a8fec;
    }
    ctx->pc = 0x3A8FE4u;
    SET_GPR_U32(ctx, 31, 0x3A8FECu);
    ctx->pc = 0x3A8FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8FE4u;
            // 0x3a8fe8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AB090u;
    if (runtime->hasFunction(0x3AB090u)) {
        auto targetFn = runtime->lookupFunction(0x3AB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8FECu; }
        if (ctx->pc != 0x3A8FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AB090_0x3ab090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8FECu; }
        if (ctx->pc != 0x3A8FECu) { return; }
    }
    ctx->pc = 0x3A8FECu;
label_3a8fec:
    // 0x3a8fec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a8ff0:
    // 0x3a8ff0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a8ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a8ff4:
    // 0x3a8ff4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a8ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a8ff8:
    // 0x3a8ff8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a8ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a8ffc:
    // 0x3a8ffc: 0x320f809  jalr        $t9
label_3a9000:
    if (ctx->pc == 0x3A9000u) {
        ctx->pc = 0x3A9004u;
        goto label_3a9004;
    }
    ctx->pc = 0x3A8FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A9004u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A9004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A9004u; }
            if (ctx->pc != 0x3A9004u) { return; }
        }
        }
    }
    ctx->pc = 0x3A9004u;
label_3a9004:
    // 0x3a9004: 0xc05068c  jal         func_141A30
label_3a9008:
    if (ctx->pc == 0x3A9008u) {
        ctx->pc = 0x3A9008u;
            // 0x3a9008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A900Cu;
        goto label_3a900c;
    }
    ctx->pc = 0x3A9004u;
    SET_GPR_U32(ctx, 31, 0x3A900Cu);
    ctx->pc = 0x3A9008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9004u;
            // 0x3a9008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A900Cu; }
        if (ctx->pc != 0x3A900Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A900Cu; }
        if (ctx->pc != 0x3A900Cu) { return; }
    }
    ctx->pc = 0x3A900Cu;
label_3a900c:
    // 0x3a900c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a9010:
    // 0x3a9010: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a9010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a9014:
    // 0x3a9014: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a9014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9018:
    // 0x3a9018: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a9018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a901c:
    // 0x3a901c: 0x320f809  jalr        $t9
label_3a9020:
    if (ctx->pc == 0x3A9020u) {
        ctx->pc = 0x3A9020u;
            // 0x3a9020: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A9024u;
        goto label_3a9024;
    }
    ctx->pc = 0x3A901Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A9024u);
        ctx->pc = 0x3A9020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A901Cu;
            // 0x3a9020: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A9024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A9024u; }
            if (ctx->pc != 0x3A9024u) { return; }
        }
        }
    }
    ctx->pc = 0x3A9024u;
label_3a9024:
    // 0x3a9024: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a9024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a9028:
    // 0x3a9028: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a9028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a902c:
    // 0x3a902c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a902cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9030:
    // 0x3a9030: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a9030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9034:
    // 0x3a9034: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a9034u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a9038:
    // 0x3a9038: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a9038u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3a903c:
    // 0x3a903c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a903cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3a9040:
    // 0x3a9040: 0xc0eaa84  jal         func_3AAA10
label_3a9044:
    if (ctx->pc == 0x3A9044u) {
        ctx->pc = 0x3A9044u;
            // 0x3a9044: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3A9048u;
        goto label_3a9048;
    }
    ctx->pc = 0x3A9040u;
    SET_GPR_U32(ctx, 31, 0x3A9048u);
    ctx->pc = 0x3A9044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9040u;
            // 0x3a9044: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AAA10u;
    if (runtime->hasFunction(0x3AAA10u)) {
        auto targetFn = runtime->lookupFunction(0x3AAA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9048u; }
        if (ctx->pc != 0x3A9048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AAA10_0x3aaa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9048u; }
        if (ctx->pc != 0x3A9048u) { return; }
    }
    ctx->pc = 0x3A9048u;
label_3a9048:
    // 0x3a9048: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3a9048u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a904c:
    // 0x3a904c: 0x8ea80034  lw          $t0, 0x34($s5)
    ctx->pc = 0x3a904cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3a9050:
    // 0x3a9050: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x3a9050u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a9054:
    // 0x3a9054: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3a9054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a9058:
    // 0x3a9058: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3a9058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a905c:
    // 0x3a905c: 0x92a40029  lbu         $a0, 0x29($s5)
    ctx->pc = 0x3a905cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 41)));
label_3a9060:
    // 0x3a9060: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3a9060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_3a9064:
    // 0x3a9064: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x3a9064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_3a9068:
    // 0x3a9068: 0x85020020  lh          $v0, 0x20($t0)
    ctx->pc = 0x3a9068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
label_3a906c:
    // 0x3a906c: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3a906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_3a9070:
    // 0x3a9070: 0x92090010  lbu         $t1, 0x10($s0)
    ctx->pc = 0x3a9070u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3a9074:
    // 0x3a9074: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3a9074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3a9078:
    // 0x3a9078: 0x90a60116  lbu         $a2, 0x116($a1)
    ctx->pc = 0x3a9078u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
label_3a907c:
    // 0x3a907c: 0x24e72100  addiu       $a3, $a3, 0x2100
    ctx->pc = 0x3a907cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8448));
label_3a9080:
    // 0x3a9080: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3a9080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3a9084:
    // 0x3a9084: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x3a9084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3a9088:
    // 0x3a9088: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3a9088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a908c:
    // 0x3a908c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a908cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a9090:
    // 0x3a9090: 0x0  nop
    ctx->pc = 0x3a9090u;
    // NOP
label_3a9094:
    // 0x3a9094: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3a9094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_3a9098:
    // 0x3a9098: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a9098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a909c:
    // 0x3a909c: 0x0  nop
    ctx->pc = 0x3a909cu;
    // NOP
label_3a90a0:
    // 0x3a90a0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3a90a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3a90a4:
    // 0x3a90a4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x3a90a4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a90a8:
    // 0x3a90a8: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x3a90a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a90ac:
    // 0x3a90ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a90acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a90b0:
    // 0x3a90b0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3a90b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a90b4:
    // 0x3a90b4: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x3a90b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3a90b8:
    // 0x3a90b8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a90bc:
    if (ctx->pc == 0x3A90BCu) {
        ctx->pc = 0x3A90BCu;
            // 0x3a90bc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A90C0u;
        goto label_3a90c0;
    }
    ctx->pc = 0x3A90B8u;
    {
        const bool branch_taken_0x3a90b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A90BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A90B8u;
            // 0x3a90bc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90b8) {
            ctx->pc = 0x3A90C4u;
            goto label_3a90c4;
        }
    }
    ctx->pc = 0x3A90C0u;
label_3a90c0:
    // 0x3a90c0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3a90c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a90c4:
    // 0x3a90c4: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x3a90c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_3a90c8:
    // 0x3a90c8: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3a90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a90cc:
    // 0x3a90cc: 0x84e90000  lh          $t1, 0x0($a3)
    ctx->pc = 0x3a90ccu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3a90d0:
    // 0x3a90d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a90d4:
    // 0x3a90d4: 0x84e80002  lh          $t0, 0x2($a3)
    ctx->pc = 0x3a90d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_3a90d8:
    // 0x3a90d8: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3a90d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a90dc:
    // 0x3a90dc: 0x46051301  sub.s       $f12, $f2, $f5
    ctx->pc = 0x3a90dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_3a90e0:
    // 0x3a90e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a90e4:
    // 0x3a90e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a90e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a90e8:
    // 0x3a90e8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a90e8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a90ec:
    // 0x3a90ec: 0x0  nop
    ctx->pc = 0x3a90ecu;
    // NOP
label_3a90f0:
    // 0x3a90f0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a90f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a90f4:
    // 0x3a90f4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a90f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a90f8:
    // 0x3a90f8: 0x0  nop
    ctx->pc = 0x3a90f8u;
    // NOP
label_3a90fc:
    // 0x3a90fc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a90fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a9100:
    // 0x3a9100: 0x46051380  add.s       $f14, $f2, $f5
    ctx->pc = 0x3a9100u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_3a9104:
    // 0x3a9104: 0x46050b41  sub.s       $f13, $f1, $f5
    ctx->pc = 0x3a9104u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_3a9108:
    // 0x3a9108: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a910c:
    // 0x3a910c: 0xc0bc284  jal         func_2F0A10
label_3a9110:
    if (ctx->pc == 0x3A9110u) {
        ctx->pc = 0x3A9110u;
            // 0x3a9110: 0x46050bc0  add.s       $f15, $f1, $f5 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->pc = 0x3A9114u;
        goto label_3a9114;
    }
    ctx->pc = 0x3A910Cu;
    SET_GPR_U32(ctx, 31, 0x3A9114u);
    ctx->pc = 0x3A9110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A910Cu;
            // 0x3a9110: 0x46050bc0  add.s       $f15, $f1, $f5 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9114u; }
        if (ctx->pc != 0x3A9114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9114u; }
        if (ctx->pc != 0x3A9114u) { return; }
    }
    ctx->pc = 0x3A9114u;
label_3a9114:
    // 0x3a9114: 0x92080010  lbu         $t0, 0x10($s0)
    ctx->pc = 0x3a9114u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3a9118:
    // 0x3a9118: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a9118u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3a911c:
    // 0x3a911c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a911cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3a9120:
    // 0x3a9120: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a9120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a9124:
    // 0x3a9124: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x3a9124u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_3a9128:
    // 0x3a9128: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a9128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a912c:
    // 0x3a912c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a912cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9130:
    // 0x3a9130: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a9130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9134:
    // 0x3a9134: 0xc0ea9f0  jal         func_3AA7C0
label_3a9138:
    if (ctx->pc == 0x3A9138u) {
        ctx->pc = 0x3A9138u;
            // 0x3a9138: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3A913Cu;
        goto label_3a913c;
    }
    ctx->pc = 0x3A9134u;
    SET_GPR_U32(ctx, 31, 0x3A913Cu);
    ctx->pc = 0x3A9138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9134u;
            // 0x3a9138: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AA7C0u;
    if (runtime->hasFunction(0x3AA7C0u)) {
        auto targetFn = runtime->lookupFunction(0x3AA7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A913Cu; }
        if (ctx->pc != 0x3A913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AA7C0_0x3aa7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A913Cu; }
        if (ctx->pc != 0x3A913Cu) { return; }
    }
    ctx->pc = 0x3A913Cu;
label_3a913c:
    // 0x3a913c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a913cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a9140:
    // 0x3a9140: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a9140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a9144:
    // 0x3a9144: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a9144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9148:
    // 0x3a9148: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a9148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a914c:
    // 0x3a914c: 0x320f809  jalr        $t9
label_3a9150:
    if (ctx->pc == 0x3A9150u) {
        ctx->pc = 0x3A9154u;
        goto label_3a9154;
    }
    ctx->pc = 0x3A914Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A9154u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A9154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A9154u; }
            if (ctx->pc != 0x3A9154u) { return; }
        }
        }
    }
    ctx->pc = 0x3A9154u;
label_3a9154:
    // 0x3a9154: 0xc05068c  jal         func_141A30
label_3a9158:
    if (ctx->pc == 0x3A9158u) {
        ctx->pc = 0x3A9158u;
            // 0x3a9158: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A915Cu;
        goto label_3a915c;
    }
    ctx->pc = 0x3A9154u;
    SET_GPR_U32(ctx, 31, 0x3A915Cu);
    ctx->pc = 0x3A9158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9154u;
            // 0x3a9158: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A915Cu; }
        if (ctx->pc != 0x3A915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A915Cu; }
        if (ctx->pc != 0x3A915Cu) { return; }
    }
    ctx->pc = 0x3A915Cu;
label_3a915c:
    // 0x3a915c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9160:
    // 0x3a9160: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a9160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3a9164:
    // 0x3a9164: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3a9168:
    if (ctx->pc == 0x3A9168u) {
        ctx->pc = 0x3A916Cu;
        goto label_3a916c;
    }
    ctx->pc = 0x3A9164u;
    {
        const bool branch_taken_0x3a9164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9164) {
            ctx->pc = 0x3A91D4u;
            goto label_3a91d4;
        }
    }
    ctx->pc = 0x3A916Cu;
label_3a916c:
    // 0x3a916c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a9170:
    // 0x3a9170: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a9170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a9174:
    // 0x3a9174: 0xc0506ac  jal         func_141AB0
label_3a9178:
    if (ctx->pc == 0x3A9178u) {
        ctx->pc = 0x3A9178u;
            // 0x3a9178: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3A917Cu;
        goto label_3a917c;
    }
    ctx->pc = 0x3A9174u;
    SET_GPR_U32(ctx, 31, 0x3A917Cu);
    ctx->pc = 0x3A9178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9174u;
            // 0x3a9178: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A917Cu; }
        if (ctx->pc != 0x3A917Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A917Cu; }
        if (ctx->pc != 0x3A917Cu) { return; }
    }
    ctx->pc = 0x3A917Cu;
label_3a917c:
    // 0x3a917c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a9180:
    // 0x3a9180: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a9180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a9184:
    // 0x3a9184: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a9184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9188:
    // 0x3a9188: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a9188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a918c:
    // 0x3a918c: 0x320f809  jalr        $t9
label_3a9190:
    if (ctx->pc == 0x3A9190u) {
        ctx->pc = 0x3A9190u;
            // 0x3a9190: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A9194u;
        goto label_3a9194;
    }
    ctx->pc = 0x3A918Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A9194u);
        ctx->pc = 0x3A9190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A918Cu;
            // 0x3a9190: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A9194u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A9194u; }
            if (ctx->pc != 0x3A9194u) { return; }
        }
        }
    }
    ctx->pc = 0x3A9194u;
label_3a9194:
    // 0x3a9194: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a9194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a9198:
    // 0x3a9198: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a9198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a919c:
    // 0x3a919c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a919cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a91a0:
    // 0x3a91a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a91a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a91a4:
    // 0x3a91a4: 0xc0ea588  jal         func_3A9620
label_3a91a8:
    if (ctx->pc == 0x3A91A8u) {
        ctx->pc = 0x3A91A8u;
            // 0x3a91a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A91ACu;
        goto label_3a91ac;
    }
    ctx->pc = 0x3A91A4u;
    SET_GPR_U32(ctx, 31, 0x3A91ACu);
    ctx->pc = 0x3A91A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A91A4u;
            // 0x3a91a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9620u;
    if (runtime->hasFunction(0x3A9620u)) {
        auto targetFn = runtime->lookupFunction(0x3A9620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A91ACu; }
        if (ctx->pc != 0x3A91ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9620_0x3a9620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A91ACu; }
        if (ctx->pc != 0x3A91ACu) { return; }
    }
    ctx->pc = 0x3A91ACu;
label_3a91ac:
    // 0x3a91ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a91acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a91b0:
    // 0x3a91b0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a91b4:
    // 0x3a91b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a91b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a91b8:
    // 0x3a91b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a91b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a91bc:
    // 0x3a91bc: 0x320f809  jalr        $t9
label_3a91c0:
    if (ctx->pc == 0x3A91C0u) {
        ctx->pc = 0x3A91C4u;
        goto label_3a91c4;
    }
    ctx->pc = 0x3A91BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A91C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A91C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A91C4u; }
            if (ctx->pc != 0x3A91C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A91C4u;
label_3a91c4:
    // 0x3a91c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a91c8:
    // 0x3a91c8: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a91cc:
    // 0x3a91cc: 0xc0506ac  jal         func_141AB0
label_3a91d0:
    if (ctx->pc == 0x3A91D0u) {
        ctx->pc = 0x3A91D0u;
            // 0x3a91d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A91D4u;
        goto label_3a91d4;
    }
    ctx->pc = 0x3A91CCu;
    SET_GPR_U32(ctx, 31, 0x3A91D4u);
    ctx->pc = 0x3A91D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A91CCu;
            // 0x3a91d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A91D4u; }
        if (ctx->pc != 0x3A91D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A91D4u; }
        if (ctx->pc != 0x3A91D4u) { return; }
    }
    ctx->pc = 0x3A91D4u;
label_3a91d4:
    // 0x3a91d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a91d8:
    // 0x3a91d8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a91d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a91dc:
    // 0x3a91dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a91dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a91e0:
    // 0x3a91e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a91e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a91e4:
    // 0x3a91e4: 0x320f809  jalr        $t9
label_3a91e8:
    if (ctx->pc == 0x3A91E8u) {
        ctx->pc = 0x3A91E8u;
            // 0x3a91e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A91ECu;
        goto label_3a91ec;
    }
    ctx->pc = 0x3A91E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A91ECu);
        ctx->pc = 0x3A91E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A91E4u;
            // 0x3a91e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A91ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A91ECu; }
            if (ctx->pc != 0x3A91ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3A91ECu;
label_3a91ec:
    // 0x3a91ec: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x3a91ecu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a91f0:
    // 0x3a91f0: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x3a91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3a91f4:
    // 0x3a91f4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3a91f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a91f8:
    // 0x3a91f8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3a91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a91fc:
    // 0x3a91fc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3a91fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a9200:
    // 0x3a9200: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3a9200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3a9204:
    // 0x3a9204: 0x90420116  lbu         $v0, 0x116($v0)
    ctx->pc = 0x3a9204u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_3a9208:
    // 0x3a9208: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3a9208u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a920c:
    // 0x3a920c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3a9210:
    // 0x3a9210: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3a9210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3a9214:
    // 0x3a9214: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a9214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a9218:
    // 0x3a9218: 0x0  nop
    ctx->pc = 0x3a9218u;
    // NOP
label_3a921c:
    // 0x3a921c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3a921cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3a9220:
    // 0x3a9220: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x3a9220u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a9224:
    // 0x3a9224: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x3a9224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a9228:
    // 0x3a9228: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a9228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a922c:
    // 0x3a922c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3a922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9230:
    // 0x3a9230: 0x4603255c  madd.s      $f21, $f4, $f3
    ctx->pc = 0x3a9230u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3a9234:
    // 0x3a9234: 0xc04f2d4  jal         func_13CB50
label_3a9238:
    if (ctx->pc == 0x3A9238u) {
        ctx->pc = 0x3A9238u;
            // 0x3a9238: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A923Cu;
        goto label_3a923c;
    }
    ctx->pc = 0x3A9234u;
    SET_GPR_U32(ctx, 31, 0x3A923Cu);
    ctx->pc = 0x3A9238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9234u;
            // 0x3a9238: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A923Cu; }
        if (ctx->pc != 0x3A923Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A923Cu; }
        if (ctx->pc != 0x3A923Cu) { return; }
    }
    ctx->pc = 0x3A923Cu;
label_3a923c:
    // 0x3a923c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3a923cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a9240:
    // 0x3a9240: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a9240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a9244:
    // 0x3a9244: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a9248:
    // 0x3a9248: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a9248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a924c:
    // 0x3a924c: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x3a924cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_3a9250:
    // 0x3a9250: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x3a9250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_3a9254:
    // 0x3a9254: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3a9254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3a9258:
    // 0x3a9258: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x3a9258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_3a925c:
    // 0x3a925c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a9260:
    // 0x3a9260: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x3a9260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3a9264:
    // 0x3a9264: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3a9264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a9268:
    // 0x3a9268: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a926c:
    // 0x3a926c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3a926cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a9270:
    // 0x3a9270: 0xe7b500f0  swc1        $f21, 0xF0($sp)
    ctx->pc = 0x3a9270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3a9274:
    // 0x3a9274: 0xe7b600f4  swc1        $f22, 0xF4($sp)
    ctx->pc = 0x3a9274u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_3a9278:
    // 0x3a9278: 0x92a4002a  lbu         $a0, 0x2A($s5)
    ctx->pc = 0x3a9278u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 42)));
label_3a927c:
    // 0x3a927c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a927cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a9280:
    // 0x3a9280: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x3a9280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3a9284:
    // 0x3a9284: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3a9284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a9288:
    // 0x3a9288: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a928c:
    // 0x3a928c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3a928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a9290:
    // 0x3a9290: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x3a9290u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a9294:
    // 0x3a9294: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a9294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9298:
    // 0x3a9298: 0x46011382  mul.s       $f14, $f2, $f1
    ctx->pc = 0x3a9298u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3a929c:
    // 0x3a929c: 0x460013c2  mul.s       $f15, $f2, $f0
    ctx->pc = 0x3a929cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3a92a0:
    // 0x3a92a0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a92a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a92a4:
    // 0x3a92a4: 0x46007307  neg.s       $f12, $f14
    ctx->pc = 0x3a92a4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[14]);
label_3a92a8:
    // 0x3a92a8: 0xc0bc284  jal         func_2F0A10
label_3a92ac:
    if (ctx->pc == 0x3A92ACu) {
        ctx->pc = 0x3A92ACu;
            // 0x3a92ac: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->pc = 0x3A92B0u;
        goto label_3a92b0;
    }
    ctx->pc = 0x3A92A8u;
    SET_GPR_U32(ctx, 31, 0x3A92B0u);
    ctx->pc = 0x3A92ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A92A8u;
            // 0x3a92ac: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A92B0u; }
        if (ctx->pc != 0x3A92B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A92B0u; }
        if (ctx->pc != 0x3A92B0u) { return; }
    }
    ctx->pc = 0x3A92B0u;
label_3a92b0:
    // 0x3a92b0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x3a92b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a92b4:
    // 0x3a92b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a92b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a92b8:
    // 0x3a92b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a92b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a92bc:
    // 0x3a92bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a92bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a92c0:
    // 0x3a92c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a92c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a92c4:
    // 0x3a92c4: 0xc0ea924  jal         func_3AA490
label_3a92c8:
    if (ctx->pc == 0x3A92C8u) {
        ctx->pc = 0x3A92C8u;
            // 0x3a92c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3A92CCu;
        goto label_3a92cc;
    }
    ctx->pc = 0x3A92C4u;
    SET_GPR_U32(ctx, 31, 0x3A92CCu);
    ctx->pc = 0x3A92C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A92C4u;
            // 0x3a92c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AA490u;
    if (runtime->hasFunction(0x3AA490u)) {
        auto targetFn = runtime->lookupFunction(0x3AA490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A92CCu; }
        if (ctx->pc != 0x3A92CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AA490_0x3aa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A92CCu; }
        if (ctx->pc != 0x3A92CCu) { return; }
    }
    ctx->pc = 0x3A92CCu;
label_3a92cc:
    // 0x3a92cc: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x3a92ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a92d0:
    // 0x3a92d0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3a92d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a92d4:
    // 0x3a92d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a92d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a92d8:
    // 0x3a92d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a92d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a92dc:
    // 0x3a92dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a92dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a92e0:
    // 0x3a92e0: 0xc0ea800  jal         func_3AA000
label_3a92e4:
    if (ctx->pc == 0x3A92E4u) {
        ctx->pc = 0x3A92E4u;
            // 0x3a92e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A92E8u;
        goto label_3a92e8;
    }
    ctx->pc = 0x3A92E0u;
    SET_GPR_U32(ctx, 31, 0x3A92E8u);
    ctx->pc = 0x3A92E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A92E0u;
            // 0x3a92e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AA000u;
    if (runtime->hasFunction(0x3AA000u)) {
        auto targetFn = runtime->lookupFunction(0x3AA000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A92E8u; }
        if (ctx->pc != 0x3A92E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AA000_0x3aa000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A92E8u; }
        if (ctx->pc != 0x3A92E8u) { return; }
    }
    ctx->pc = 0x3A92E8u;
label_3a92e8:
    // 0x3a92e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a92e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a92ec:
    // 0x3a92ec: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x3a92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_3a92f0:
    // 0x3a92f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a92f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a92f4:
    // 0x3a92f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a92f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a92f8:
    // 0x3a92f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3a92f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a92fc:
    // 0x3a92fc: 0xc0ea73c  jal         func_3A9CF0
label_3a9300:
    if (ctx->pc == 0x3A9300u) {
        ctx->pc = 0x3A9300u;
            // 0x3a9300: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3A9304u;
        goto label_3a9304;
    }
    ctx->pc = 0x3A92FCu;
    SET_GPR_U32(ctx, 31, 0x3A9304u);
    ctx->pc = 0x3A9300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A92FCu;
            // 0x3a9300: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9CF0u;
    if (runtime->hasFunction(0x3A9CF0u)) {
        auto targetFn = runtime->lookupFunction(0x3A9CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9304u; }
        if (ctx->pc != 0x3A9304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9CF0_0x3a9cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9304u; }
        if (ctx->pc != 0x3A9304u) { return; }
    }
    ctx->pc = 0x3A9304u;
label_3a9304:
    // 0x3a9304: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a9308:
    // 0x3a9308: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a9308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a930c:
    // 0x3a930c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a930cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9310:
    // 0x3a9310: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a9310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a9314:
    // 0x3a9314: 0x320f809  jalr        $t9
label_3a9318:
    if (ctx->pc == 0x3A9318u) {
        ctx->pc = 0x3A931Cu;
        goto label_3a931c;
    }
    ctx->pc = 0x3A9314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A931Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A931Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A931Cu; }
            if (ctx->pc != 0x3A931Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A931Cu;
label_3a931c:
    // 0x3a931c: 0xc05068c  jal         func_141A30
label_3a9320:
    if (ctx->pc == 0x3A9320u) {
        ctx->pc = 0x3A9320u;
            // 0x3a9320: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9324u;
        goto label_3a9324;
    }
    ctx->pc = 0x3A931Cu;
    SET_GPR_U32(ctx, 31, 0x3A9324u);
    ctx->pc = 0x3A9320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A931Cu;
            // 0x3a9320: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9324u; }
        if (ctx->pc != 0x3A9324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9324u; }
        if (ctx->pc != 0x3A9324u) { return; }
    }
    ctx->pc = 0x3A9324u;
label_3a9324:
    // 0x3a9324: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a9328:
    // 0x3a9328: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a9328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a932c:
    // 0x3a932c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a932cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9330:
    // 0x3a9330: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a9330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a9334:
    // 0x3a9334: 0x320f809  jalr        $t9
label_3a9338:
    if (ctx->pc == 0x3A9338u) {
        ctx->pc = 0x3A9338u;
            // 0x3a9338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A933Cu;
        goto label_3a933c;
    }
    ctx->pc = 0x3A9334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A933Cu);
        ctx->pc = 0x3A9338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9334u;
            // 0x3a9338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A933Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A933Cu; }
            if (ctx->pc != 0x3A933Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A933Cu;
label_3a933c:
    // 0x3a933c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9340:
    // 0x3a9340: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a9340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3a9344:
    // 0x3a9344: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3a9348:
    if (ctx->pc == 0x3A9348u) {
        ctx->pc = 0x3A9348u;
            // 0x3a9348: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3A934Cu;
        goto label_3a934c;
    }
    ctx->pc = 0x3A9344u;
    {
        const bool branch_taken_0x3a9344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9344) {
            ctx->pc = 0x3A9348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9344u;
            // 0x3a9348: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A936Cu;
            goto label_3a936c;
        }
    }
    ctx->pc = 0x3A934Cu;
label_3a934c:
    // 0x3a934c: 0x92080011  lbu         $t0, 0x11($s0)
    ctx->pc = 0x3a934cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_3a9350:
    // 0x3a9350: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a9350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a9354:
    // 0x3a9354: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a9354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a9358:
    // 0x3a9358: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a9358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a935c:
    // 0x3a935c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a935cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9360:
    // 0x3a9360: 0xc0ea6f8  jal         func_3A9BE0
label_3a9364:
    if (ctx->pc == 0x3A9364u) {
        ctx->pc = 0x3A9364u;
            // 0x3a9364: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9368u;
        goto label_3a9368;
    }
    ctx->pc = 0x3A9360u;
    SET_GPR_U32(ctx, 31, 0x3A9368u);
    ctx->pc = 0x3A9364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9360u;
            // 0x3a9364: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9BE0u;
    if (runtime->hasFunction(0x3A9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x3A9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9368u; }
        if (ctx->pc != 0x3A9368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9BE0_0x3a9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9368u; }
        if (ctx->pc != 0x3A9368u) { return; }
    }
    ctx->pc = 0x3A9368u;
label_3a9368:
    // 0x3a9368: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a9368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a936c:
    // 0x3a936c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3a936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3a9370:
    // 0x3a9370: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3a9374:
    if (ctx->pc == 0x3A9374u) {
        ctx->pc = 0x3A9374u;
            // 0x3a9374: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x3A9378u;
        goto label_3a9378;
    }
    ctx->pc = 0x3A9370u;
    {
        const bool branch_taken_0x3a9370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9370) {
            ctx->pc = 0x3A9374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9370u;
            // 0x3a9374: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A9398u;
            goto label_3a9398;
        }
    }
    ctx->pc = 0x3A9378u;
label_3a9378:
    // 0x3a9378: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a9378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a937c:
    // 0x3a937c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9380:
    // 0x3a9380: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a9380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9384:
    // 0x3a9384: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a9384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9388:
    // 0x3a9388: 0xc0ea688  jal         func_3A9A20
label_3a938c:
    if (ctx->pc == 0x3A938Cu) {
        ctx->pc = 0x3A938Cu;
            // 0x3a938c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9390u;
        goto label_3a9390;
    }
    ctx->pc = 0x3A9388u;
    SET_GPR_U32(ctx, 31, 0x3A9390u);
    ctx->pc = 0x3A938Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9388u;
            // 0x3a938c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9A20u;
    if (runtime->hasFunction(0x3A9A20u)) {
        auto targetFn = runtime->lookupFunction(0x3A9A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9390u; }
        if (ctx->pc != 0x3A9390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9A20_0x3a9a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9390u; }
        if (ctx->pc != 0x3A9390u) { return; }
    }
    ctx->pc = 0x3A9390u;
label_3a9390:
    // 0x3a9390: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a9394:
    if (ctx->pc == 0x3A9394u) {
        ctx->pc = 0x3A9398u;
        goto label_3a9398;
    }
    ctx->pc = 0x3A9390u;
    {
        const bool branch_taken_0x3a9390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9390) {
            ctx->pc = 0x3A93B8u;
            goto label_3a93b8;
        }
    }
    ctx->pc = 0x3A9398u;
label_3a9398:
    // 0x3a9398: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a939c:
    if (ctx->pc == 0x3A939Cu) {
        ctx->pc = 0x3A93A0u;
        goto label_3a93a0;
    }
    ctx->pc = 0x3A9398u;
    {
        const bool branch_taken_0x3a9398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9398) {
            ctx->pc = 0x3A93B8u;
            goto label_3a93b8;
        }
    }
    ctx->pc = 0x3A93A0u;
label_3a93a0:
    // 0x3a93a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a93a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a93a4:
    // 0x3a93a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a93a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a93a8:
    // 0x3a93a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a93a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a93ac:
    // 0x3a93ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a93acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a93b0:
    // 0x3a93b0: 0xc0ea5c0  jal         func_3A9700
label_3a93b4:
    if (ctx->pc == 0x3A93B4u) {
        ctx->pc = 0x3A93B4u;
            // 0x3a93b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A93B8u;
        goto label_3a93b8;
    }
    ctx->pc = 0x3A93B0u;
    SET_GPR_U32(ctx, 31, 0x3A93B8u);
    ctx->pc = 0x3A93B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A93B0u;
            // 0x3a93b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9700u;
    if (runtime->hasFunction(0x3A9700u)) {
        auto targetFn = runtime->lookupFunction(0x3A9700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A93B8u; }
        if (ctx->pc != 0x3A93B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9700_0x3a9700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A93B8u; }
        if (ctx->pc != 0x3A93B8u) { return; }
    }
    ctx->pc = 0x3A93B8u;
label_3a93b8:
    // 0x3a93b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a93bc:
    // 0x3a93bc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a93bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a93c0:
    // 0x3a93c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a93c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a93c4:
    // 0x3a93c4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a93c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a93c8:
    // 0x3a93c8: 0x320f809  jalr        $t9
label_3a93cc:
    if (ctx->pc == 0x3A93CCu) {
        ctx->pc = 0x3A93D0u;
        goto label_3a93d0;
    }
    ctx->pc = 0x3A93C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A93D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A93D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A93D0u; }
            if (ctx->pc != 0x3A93D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A93D0u;
label_3a93d0:
    // 0x3a93d0: 0xc05068c  jal         func_141A30
label_3a93d4:
    if (ctx->pc == 0x3A93D4u) {
        ctx->pc = 0x3A93D4u;
            // 0x3a93d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A93D8u;
        goto label_3a93d8;
    }
    ctx->pc = 0x3A93D0u;
    SET_GPR_U32(ctx, 31, 0x3A93D8u);
    ctx->pc = 0x3A93D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A93D0u;
            // 0x3a93d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A93D8u; }
        if (ctx->pc != 0x3A93D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A93D8u; }
        if (ctx->pc != 0x3A93D8u) { return; }
    }
    ctx->pc = 0x3A93D8u;
label_3a93d8:
    // 0x3a93d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3a93d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3a93dc:
    // 0x3a93dc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3a93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3a93e0:
    // 0x3a93e0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3a93e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a93e4:
    // 0x3a93e4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3a93e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a93e8:
    // 0x3a93e8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3a93e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a93ec:
    // 0x3a93ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a93ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a93f0:
    // 0x3a93f0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3a93f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a93f4:
    // 0x3a93f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a93f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a93f8:
    // 0x3a93f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a93f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a93fc:
    // 0x3a93fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a93fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a9400:
    // 0x3a9400: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a9400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a9404:
    // 0x3a9404: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a9404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a9408:
    // 0x3a9408: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a9408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a940c:
    // 0x3a940c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a940cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9410:
    // 0x3a9410: 0x3e00008  jr          $ra
label_3a9414:
    if (ctx->pc == 0x3A9414u) {
        ctx->pc = 0x3A9414u;
            // 0x3a9414: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3A9418u;
        goto label_3a9418;
    }
    ctx->pc = 0x3A9410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9410u;
            // 0x3a9414: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A9418u;
label_3a9418:
    // 0x3a9418: 0x0  nop
    ctx->pc = 0x3a9418u;
    // NOP
label_3a941c:
    // 0x3a941c: 0x0  nop
    ctx->pc = 0x3a941cu;
    // NOP
label_3a9420:
    // 0x3a9420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a9420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a9424:
    // 0x3a9424: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a9424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a9428:
    // 0x3a9428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a942c:
    // 0x3a942c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a9430:
    // 0x3a9430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a9430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a9434:
    // 0x3a9434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a9434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9438:
    // 0x3a9438: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a9438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a943c:
    // 0x3a943c: 0xc0506ac  jal         func_141AB0
label_3a9440:
    if (ctx->pc == 0x3A9440u) {
        ctx->pc = 0x3A9440u;
            // 0x3a9440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9444u;
        goto label_3a9444;
    }
    ctx->pc = 0x3A943Cu;
    SET_GPR_U32(ctx, 31, 0x3A9444u);
    ctx->pc = 0x3A9440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A943Cu;
            // 0x3a9440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9444u; }
        if (ctx->pc != 0x3A9444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9444u; }
        if (ctx->pc != 0x3A9444u) { return; }
    }
    ctx->pc = 0x3A9444u;
label_3a9444:
    // 0x3a9444: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a9444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_3a9448:
    // 0x3a9448: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a9448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a944c:
    // 0x3a944c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9450:
    // 0x3a9450: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9454:
    // 0x3a9454: 0xc0ea2a4  jal         func_3A8A90
label_3a9458:
    if (ctx->pc == 0x3A9458u) {
        ctx->pc = 0x3A9458u;
            // 0x3a9458: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A945Cu;
        goto label_3a945c;
    }
    ctx->pc = 0x3A9454u;
    SET_GPR_U32(ctx, 31, 0x3A945Cu);
    ctx->pc = 0x3A9458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9454u;
            // 0x3a9458: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A8A90u;
    if (runtime->hasFunction(0x3A8A90u)) {
        auto targetFn = runtime->lookupFunction(0x3A8A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A945Cu; }
        if (ctx->pc != 0x3A945Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A8A90_0x3a8a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A945Cu; }
        if (ctx->pc != 0x3A945Cu) { return; }
    }
    ctx->pc = 0x3A945Cu;
label_3a945c:
    // 0x3a945c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9460:
    // 0x3a9460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a9464:
    // 0x3a9464: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3a9464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3a9468:
    // 0x3a9468: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3a9468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a946c:
    // 0x3a946c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a9470:
    if (ctx->pc == 0x3A9470u) {
        ctx->pc = 0x3A9470u;
            // 0x3a9470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9474u;
        goto label_3a9474;
    }
    ctx->pc = 0x3A946Cu;
    {
        const bool branch_taken_0x3a946c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a946c) {
            ctx->pc = 0x3A9470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A946Cu;
            // 0x3a9470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A9450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a9450;
        }
    }
    ctx->pc = 0x3A9474u;
label_3a9474:
    // 0x3a9474: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x3a9474u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_3a9478:
    // 0x3a9478: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3a947c:
    if (ctx->pc == 0x3A947Cu) {
        ctx->pc = 0x3A947Cu;
            // 0x3a947c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9480u;
        goto label_3a9480;
    }
    ctx->pc = 0x3A9478u;
    {
        const bool branch_taken_0x3a9478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9478) {
            ctx->pc = 0x3A947Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9478u;
            // 0x3a947c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A94A0u;
            goto label_3a94a0;
        }
    }
    ctx->pc = 0x3A9480u;
label_3a9480:
    // 0x3a9480: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a9484:
    // 0x3a9484: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a9484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a9488:
    // 0x3a9488: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a9488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a948c:
    // 0x3a948c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a948cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a9490:
    // 0x3a9490: 0x320f809  jalr        $t9
label_3a9494:
    if (ctx->pc == 0x3A9494u) {
        ctx->pc = 0x3A9498u;
        goto label_3a9498;
    }
    ctx->pc = 0x3A9490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A9498u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A9498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A9498u; }
            if (ctx->pc != 0x3A9498u) { return; }
        }
        }
    }
    ctx->pc = 0x3A9498u;
label_3a9498:
    // 0x3a9498: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a9498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_3a949c:
    // 0x3a949c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a949cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a94a0:
    // 0x3a94a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a94a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a94a4:
    // 0x3a94a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a94a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a94a8:
    // 0x3a94a8: 0xc0ea200  jal         func_3A8800
label_3a94ac:
    if (ctx->pc == 0x3A94ACu) {
        ctx->pc = 0x3A94ACu;
            // 0x3a94ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A94B0u;
        goto label_3a94b0;
    }
    ctx->pc = 0x3A94A8u;
    SET_GPR_U32(ctx, 31, 0x3A94B0u);
    ctx->pc = 0x3A94ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A94A8u;
            // 0x3a94ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A8800u;
    if (runtime->hasFunction(0x3A8800u)) {
        auto targetFn = runtime->lookupFunction(0x3A8800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A94B0u; }
        if (ctx->pc != 0x3A94B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A8800_0x3a8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A94B0u; }
        if (ctx->pc != 0x3A94B0u) { return; }
    }
    ctx->pc = 0x3A94B0u;
label_3a94b0:
    // 0x3a94b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a94b4:
    // 0x3a94b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a94b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a94b8:
    // 0x3a94b8: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3a94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3a94bc:
    // 0x3a94bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3a94bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a94c0:
    // 0x3a94c0: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a94c4:
    if (ctx->pc == 0x3A94C4u) {
        ctx->pc = 0x3A94C4u;
            // 0x3a94c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A94C8u;
        goto label_3a94c8;
    }
    ctx->pc = 0x3A94C0u;
    {
        const bool branch_taken_0x3a94c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a94c0) {
            ctx->pc = 0x3A94C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A94C0u;
            // 0x3a94c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A94A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a94a4;
        }
    }
    ctx->pc = 0x3A94C8u;
label_3a94c8:
    // 0x3a94c8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x3a94c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_3a94cc:
    // 0x3a94cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3a94d0:
    if (ctx->pc == 0x3A94D0u) {
        ctx->pc = 0x3A94D0u;
            // 0x3a94d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A94D4u;
        goto label_3a94d4;
    }
    ctx->pc = 0x3A94CCu;
    {
        const bool branch_taken_0x3a94cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a94cc) {
            ctx->pc = 0x3A94D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A94CCu;
            // 0x3a94d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A94FCu;
            goto label_3a94fc;
        }
    }
    ctx->pc = 0x3A94D4u;
label_3a94d4:
    // 0x3a94d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a94d8:
    // 0x3a94d8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a94d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a94dc:
    // 0x3a94dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a94dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a94e0:
    // 0x3a94e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a94e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a94e4:
    // 0x3a94e4: 0x320f809  jalr        $t9
label_3a94e8:
    if (ctx->pc == 0x3A94E8u) {
        ctx->pc = 0x3A94ECu;
        goto label_3a94ec;
    }
    ctx->pc = 0x3A94E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A94ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A94ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A94ECu; }
            if (ctx->pc != 0x3A94ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3A94ECu;
label_3a94ec:
    // 0x3a94ec: 0xc05068c  jal         func_141A30
label_3a94f0:
    if (ctx->pc == 0x3A94F0u) {
        ctx->pc = 0x3A94F0u;
            // 0x3a94f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A94F4u;
        goto label_3a94f4;
    }
    ctx->pc = 0x3A94ECu;
    SET_GPR_U32(ctx, 31, 0x3A94F4u);
    ctx->pc = 0x3A94F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A94ECu;
            // 0x3a94f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A94F4u; }
        if (ctx->pc != 0x3A94F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A94F4u; }
        if (ctx->pc != 0x3A94F4u) { return; }
    }
    ctx->pc = 0x3A94F4u;
label_3a94f4:
    // 0x3a94f4: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a94f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_3a94f8:
    // 0x3a94f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a94f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a94fc:
    // 0x3a94fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a94fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9500:
    // 0x3a9500: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9504:
    // 0x3a9504: 0xc0ea1bc  jal         func_3A86F0
label_3a9508:
    if (ctx->pc == 0x3A9508u) {
        ctx->pc = 0x3A9508u;
            // 0x3a9508: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A950Cu;
        goto label_3a950c;
    }
    ctx->pc = 0x3A9504u;
    SET_GPR_U32(ctx, 31, 0x3A950Cu);
    ctx->pc = 0x3A9508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9504u;
            // 0x3a9508: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A86F0u;
    if (runtime->hasFunction(0x3A86F0u)) {
        auto targetFn = runtime->lookupFunction(0x3A86F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A950Cu; }
        if (ctx->pc != 0x3A950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A86F0_0x3a86f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A950Cu; }
        if (ctx->pc != 0x3A950Cu) { return; }
    }
    ctx->pc = 0x3A950Cu;
label_3a950c:
    // 0x3a950c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9510:
    // 0x3a9510: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a9514:
    // 0x3a9514: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3a9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3a9518:
    // 0x3a9518: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3a9518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a951c:
    // 0x3a951c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a9520:
    if (ctx->pc == 0x3A9520u) {
        ctx->pc = 0x3A9520u;
            // 0x3a9520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9524u;
        goto label_3a9524;
    }
    ctx->pc = 0x3A951Cu;
    {
        const bool branch_taken_0x3a951c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a951c) {
            ctx->pc = 0x3A9520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A951Cu;
            // 0x3a9520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A9500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a9500;
        }
    }
    ctx->pc = 0x3A9524u;
label_3a9524:
    // 0x3a9524: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x3a9524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_3a9528:
    // 0x3a9528: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3a952c:
    if (ctx->pc == 0x3A952Cu) {
        ctx->pc = 0x3A952Cu;
            // 0x3a952c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9530u;
        goto label_3a9530;
    }
    ctx->pc = 0x3A9528u;
    {
        const bool branch_taken_0x3a9528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9528) {
            ctx->pc = 0x3A952Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9528u;
            // 0x3a952c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A9560u;
            goto label_3a9560;
        }
    }
    ctx->pc = 0x3A9530u;
label_3a9530:
    // 0x3a9530: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a9534:
    // 0x3a9534: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a9534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a9538:
    // 0x3a9538: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a9538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a953c:
    // 0x3a953c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a953cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a9540:
    // 0x3a9540: 0x320f809  jalr        $t9
label_3a9544:
    if (ctx->pc == 0x3A9544u) {
        ctx->pc = 0x3A9548u;
        goto label_3a9548;
    }
    ctx->pc = 0x3A9540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A9548u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A9548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A9548u; }
            if (ctx->pc != 0x3A9548u) { return; }
        }
        }
    }
    ctx->pc = 0x3A9548u;
label_3a9548:
    // 0x3a9548: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a9548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a954c:
    // 0x3a954c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a9550:
    // 0x3a9550: 0xc0506ac  jal         func_141AB0
label_3a9554:
    if (ctx->pc == 0x3A9554u) {
        ctx->pc = 0x3A9554u;
            // 0x3a9554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9558u;
        goto label_3a9558;
    }
    ctx->pc = 0x3A9550u;
    SET_GPR_U32(ctx, 31, 0x3A9558u);
    ctx->pc = 0x3A9554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9550u;
            // 0x3a9554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9558u; }
        if (ctx->pc != 0x3A9558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9558u; }
        if (ctx->pc != 0x3A9558u) { return; }
    }
    ctx->pc = 0x3A9558u;
label_3a9558:
    // 0x3a9558: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a9558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_3a955c:
    // 0x3a955c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a955cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9560:
    // 0x3a9560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9564:
    // 0x3a9564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9568:
    // 0x3a9568: 0xc0ea104  jal         func_3A8410
label_3a956c:
    if (ctx->pc == 0x3A956Cu) {
        ctx->pc = 0x3A956Cu;
            // 0x3a956c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9570u;
        goto label_3a9570;
    }
    ctx->pc = 0x3A9568u;
    SET_GPR_U32(ctx, 31, 0x3A9570u);
    ctx->pc = 0x3A956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9568u;
            // 0x3a956c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A8410u;
    if (runtime->hasFunction(0x3A8410u)) {
        auto targetFn = runtime->lookupFunction(0x3A8410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9570u; }
        if (ctx->pc != 0x3A9570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A8410_0x3a8410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9570u; }
        if (ctx->pc != 0x3A9570u) { return; }
    }
    ctx->pc = 0x3A9570u;
label_3a9570:
    // 0x3a9570: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a9570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9574:
    // 0x3a9574: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a9578:
    // 0x3a9578: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3a9578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3a957c:
    // 0x3a957c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3a957cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a9580:
    // 0x3a9580: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a9584:
    if (ctx->pc == 0x3A9584u) {
        ctx->pc = 0x3A9584u;
            // 0x3a9584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9588u;
        goto label_3a9588;
    }
    ctx->pc = 0x3A9580u;
    {
        const bool branch_taken_0x3a9580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9580) {
            ctx->pc = 0x3A9584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9580u;
            // 0x3a9584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A9564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a9564;
        }
    }
    ctx->pc = 0x3A9588u;
label_3a9588:
    // 0x3a9588: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x3a9588u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_3a958c:
    // 0x3a958c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3a9590:
    if (ctx->pc == 0x3A9590u) {
        ctx->pc = 0x3A9590u;
            // 0x3a9590: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A9594u;
        goto label_3a9594;
    }
    ctx->pc = 0x3A958Cu;
    {
        const bool branch_taken_0x3a958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a958c) {
            ctx->pc = 0x3A9590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A958Cu;
            // 0x3a9590: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A95B4u;
            goto label_3a95b4;
        }
    }
    ctx->pc = 0x3A9594u;
label_3a9594:
    // 0x3a9594: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a9598:
    // 0x3a9598: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a9598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a959c:
    // 0x3a959c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a959cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a95a0:
    // 0x3a95a0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a95a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a95a4:
    // 0x3a95a4: 0x320f809  jalr        $t9
label_3a95a8:
    if (ctx->pc == 0x3A95A8u) {
        ctx->pc = 0x3A95ACu;
        goto label_3a95ac;
    }
    ctx->pc = 0x3A95A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A95ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A95ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A95ACu; }
            if (ctx->pc != 0x3A95ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3A95ACu;
label_3a95ac:
    // 0x3a95ac: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a95acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_3a95b0:
    // 0x3a95b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a95b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a95b4:
    // 0x3a95b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a95b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a95b8:
    // 0x3a95b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a95b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a95bc:
    // 0x3a95bc: 0xc0ea09c  jal         func_3A8270
label_3a95c0:
    if (ctx->pc == 0x3A95C0u) {
        ctx->pc = 0x3A95C0u;
            // 0x3a95c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A95C4u;
        goto label_3a95c4;
    }
    ctx->pc = 0x3A95BCu;
    SET_GPR_U32(ctx, 31, 0x3A95C4u);
    ctx->pc = 0x3A95C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A95BCu;
            // 0x3a95c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A8270u;
    if (runtime->hasFunction(0x3A8270u)) {
        auto targetFn = runtime->lookupFunction(0x3A8270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A95C4u; }
        if (ctx->pc != 0x3A95C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A8270_0x3a8270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A95C4u; }
        if (ctx->pc != 0x3A95C4u) { return; }
    }
    ctx->pc = 0x3A95C4u;
label_3a95c4:
    // 0x3a95c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a95c8:
    // 0x3a95c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a95c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a95cc:
    // 0x3a95cc: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3a95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_3a95d0:
    // 0x3a95d0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3a95d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3a95d4:
    // 0x3a95d4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_3a95d8:
    if (ctx->pc == 0x3A95D8u) {
        ctx->pc = 0x3A95D8u;
            // 0x3a95d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A95DCu;
        goto label_3a95dc;
    }
    ctx->pc = 0x3A95D4u;
    {
        const bool branch_taken_0x3a95d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a95d4) {
            ctx->pc = 0x3A95D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A95D4u;
            // 0x3a95d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A95B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a95b8;
        }
    }
    ctx->pc = 0x3A95DCu;
label_3a95dc:
    // 0x3a95dc: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x3a95dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_3a95e0:
    // 0x3a95e0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_3a95e4:
    if (ctx->pc == 0x3A95E4u) {
        ctx->pc = 0x3A95E4u;
            // 0x3a95e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3A95E8u;
        goto label_3a95e8;
    }
    ctx->pc = 0x3A95E0u;
    {
        const bool branch_taken_0x3a95e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a95e0) {
            ctx->pc = 0x3A95E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A95E0u;
            // 0x3a95e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A9610u;
            goto label_3a9610;
        }
    }
    ctx->pc = 0x3A95E8u;
label_3a95e8:
    // 0x3a95e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a95ec:
    // 0x3a95ec: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a95f0:
    // 0x3a95f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a95f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a95f4:
    // 0x3a95f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a95f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a95f8:
    // 0x3a95f8: 0x320f809  jalr        $t9
label_3a95fc:
    if (ctx->pc == 0x3A95FCu) {
        ctx->pc = 0x3A9600u;
        goto label_3a9600;
    }
    ctx->pc = 0x3A95F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A9600u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A9600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A9600u; }
            if (ctx->pc != 0x3A9600u) { return; }
        }
        }
    }
    ctx->pc = 0x3A9600u;
label_3a9600:
    // 0x3a9600: 0xc05068c  jal         func_141A30
label_3a9604:
    if (ctx->pc == 0x3A9604u) {
        ctx->pc = 0x3A9604u;
            // 0x3a9604: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A9608u;
        goto label_3a9608;
    }
    ctx->pc = 0x3A9600u;
    SET_GPR_U32(ctx, 31, 0x3A9608u);
    ctx->pc = 0x3A9604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9600u;
            // 0x3a9604: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9608u; }
        if (ctx->pc != 0x3A9608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9608u; }
        if (ctx->pc != 0x3A9608u) { return; }
    }
    ctx->pc = 0x3A9608u;
label_3a9608:
    // 0x3a9608: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a9608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_3a960c:
    // 0x3a960c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a960cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9610:
    // 0x3a9610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a9610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9614:
    // 0x3a9614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a9614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9618:
    // 0x3a9618: 0x3e00008  jr          $ra
label_3a961c:
    if (ctx->pc == 0x3A961Cu) {
        ctx->pc = 0x3A961Cu;
            // 0x3a961c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A9620u;
        goto label_fallthrough_0x3a9618;
    }
    ctx->pc = 0x3A9618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9618u;
            // 0x3a961c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3a9618:
    ctx->pc = 0x3A9620u;
}
