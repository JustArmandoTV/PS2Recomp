#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8C70
// Address: 0x1f8c70 - 0x1f9b90
void sub_001F8C70_0x1f8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8C70_0x1f8c70");
#endif

    switch (ctx->pc) {
        case 0x1f8c70u: goto label_1f8c70;
        case 0x1f8c74u: goto label_1f8c74;
        case 0x1f8c78u: goto label_1f8c78;
        case 0x1f8c7cu: goto label_1f8c7c;
        case 0x1f8c80u: goto label_1f8c80;
        case 0x1f8c84u: goto label_1f8c84;
        case 0x1f8c88u: goto label_1f8c88;
        case 0x1f8c8cu: goto label_1f8c8c;
        case 0x1f8c90u: goto label_1f8c90;
        case 0x1f8c94u: goto label_1f8c94;
        case 0x1f8c98u: goto label_1f8c98;
        case 0x1f8c9cu: goto label_1f8c9c;
        case 0x1f8ca0u: goto label_1f8ca0;
        case 0x1f8ca4u: goto label_1f8ca4;
        case 0x1f8ca8u: goto label_1f8ca8;
        case 0x1f8cacu: goto label_1f8cac;
        case 0x1f8cb0u: goto label_1f8cb0;
        case 0x1f8cb4u: goto label_1f8cb4;
        case 0x1f8cb8u: goto label_1f8cb8;
        case 0x1f8cbcu: goto label_1f8cbc;
        case 0x1f8cc0u: goto label_1f8cc0;
        case 0x1f8cc4u: goto label_1f8cc4;
        case 0x1f8cc8u: goto label_1f8cc8;
        case 0x1f8cccu: goto label_1f8ccc;
        case 0x1f8cd0u: goto label_1f8cd0;
        case 0x1f8cd4u: goto label_1f8cd4;
        case 0x1f8cd8u: goto label_1f8cd8;
        case 0x1f8cdcu: goto label_1f8cdc;
        case 0x1f8ce0u: goto label_1f8ce0;
        case 0x1f8ce4u: goto label_1f8ce4;
        case 0x1f8ce8u: goto label_1f8ce8;
        case 0x1f8cecu: goto label_1f8cec;
        case 0x1f8cf0u: goto label_1f8cf0;
        case 0x1f8cf4u: goto label_1f8cf4;
        case 0x1f8cf8u: goto label_1f8cf8;
        case 0x1f8cfcu: goto label_1f8cfc;
        case 0x1f8d00u: goto label_1f8d00;
        case 0x1f8d04u: goto label_1f8d04;
        case 0x1f8d08u: goto label_1f8d08;
        case 0x1f8d0cu: goto label_1f8d0c;
        case 0x1f8d10u: goto label_1f8d10;
        case 0x1f8d14u: goto label_1f8d14;
        case 0x1f8d18u: goto label_1f8d18;
        case 0x1f8d1cu: goto label_1f8d1c;
        case 0x1f8d20u: goto label_1f8d20;
        case 0x1f8d24u: goto label_1f8d24;
        case 0x1f8d28u: goto label_1f8d28;
        case 0x1f8d2cu: goto label_1f8d2c;
        case 0x1f8d30u: goto label_1f8d30;
        case 0x1f8d34u: goto label_1f8d34;
        case 0x1f8d38u: goto label_1f8d38;
        case 0x1f8d3cu: goto label_1f8d3c;
        case 0x1f8d40u: goto label_1f8d40;
        case 0x1f8d44u: goto label_1f8d44;
        case 0x1f8d48u: goto label_1f8d48;
        case 0x1f8d4cu: goto label_1f8d4c;
        case 0x1f8d50u: goto label_1f8d50;
        case 0x1f8d54u: goto label_1f8d54;
        case 0x1f8d58u: goto label_1f8d58;
        case 0x1f8d5cu: goto label_1f8d5c;
        case 0x1f8d60u: goto label_1f8d60;
        case 0x1f8d64u: goto label_1f8d64;
        case 0x1f8d68u: goto label_1f8d68;
        case 0x1f8d6cu: goto label_1f8d6c;
        case 0x1f8d70u: goto label_1f8d70;
        case 0x1f8d74u: goto label_1f8d74;
        case 0x1f8d78u: goto label_1f8d78;
        case 0x1f8d7cu: goto label_1f8d7c;
        case 0x1f8d80u: goto label_1f8d80;
        case 0x1f8d84u: goto label_1f8d84;
        case 0x1f8d88u: goto label_1f8d88;
        case 0x1f8d8cu: goto label_1f8d8c;
        case 0x1f8d90u: goto label_1f8d90;
        case 0x1f8d94u: goto label_1f8d94;
        case 0x1f8d98u: goto label_1f8d98;
        case 0x1f8d9cu: goto label_1f8d9c;
        case 0x1f8da0u: goto label_1f8da0;
        case 0x1f8da4u: goto label_1f8da4;
        case 0x1f8da8u: goto label_1f8da8;
        case 0x1f8dacu: goto label_1f8dac;
        case 0x1f8db0u: goto label_1f8db0;
        case 0x1f8db4u: goto label_1f8db4;
        case 0x1f8db8u: goto label_1f8db8;
        case 0x1f8dbcu: goto label_1f8dbc;
        case 0x1f8dc0u: goto label_1f8dc0;
        case 0x1f8dc4u: goto label_1f8dc4;
        case 0x1f8dc8u: goto label_1f8dc8;
        case 0x1f8dccu: goto label_1f8dcc;
        case 0x1f8dd0u: goto label_1f8dd0;
        case 0x1f8dd4u: goto label_1f8dd4;
        case 0x1f8dd8u: goto label_1f8dd8;
        case 0x1f8ddcu: goto label_1f8ddc;
        case 0x1f8de0u: goto label_1f8de0;
        case 0x1f8de4u: goto label_1f8de4;
        case 0x1f8de8u: goto label_1f8de8;
        case 0x1f8decu: goto label_1f8dec;
        case 0x1f8df0u: goto label_1f8df0;
        case 0x1f8df4u: goto label_1f8df4;
        case 0x1f8df8u: goto label_1f8df8;
        case 0x1f8dfcu: goto label_1f8dfc;
        case 0x1f8e00u: goto label_1f8e00;
        case 0x1f8e04u: goto label_1f8e04;
        case 0x1f8e08u: goto label_1f8e08;
        case 0x1f8e0cu: goto label_1f8e0c;
        case 0x1f8e10u: goto label_1f8e10;
        case 0x1f8e14u: goto label_1f8e14;
        case 0x1f8e18u: goto label_1f8e18;
        case 0x1f8e1cu: goto label_1f8e1c;
        case 0x1f8e20u: goto label_1f8e20;
        case 0x1f8e24u: goto label_1f8e24;
        case 0x1f8e28u: goto label_1f8e28;
        case 0x1f8e2cu: goto label_1f8e2c;
        case 0x1f8e30u: goto label_1f8e30;
        case 0x1f8e34u: goto label_1f8e34;
        case 0x1f8e38u: goto label_1f8e38;
        case 0x1f8e3cu: goto label_1f8e3c;
        case 0x1f8e40u: goto label_1f8e40;
        case 0x1f8e44u: goto label_1f8e44;
        case 0x1f8e48u: goto label_1f8e48;
        case 0x1f8e4cu: goto label_1f8e4c;
        case 0x1f8e50u: goto label_1f8e50;
        case 0x1f8e54u: goto label_1f8e54;
        case 0x1f8e58u: goto label_1f8e58;
        case 0x1f8e5cu: goto label_1f8e5c;
        case 0x1f8e60u: goto label_1f8e60;
        case 0x1f8e64u: goto label_1f8e64;
        case 0x1f8e68u: goto label_1f8e68;
        case 0x1f8e6cu: goto label_1f8e6c;
        case 0x1f8e70u: goto label_1f8e70;
        case 0x1f8e74u: goto label_1f8e74;
        case 0x1f8e78u: goto label_1f8e78;
        case 0x1f8e7cu: goto label_1f8e7c;
        case 0x1f8e80u: goto label_1f8e80;
        case 0x1f8e84u: goto label_1f8e84;
        case 0x1f8e88u: goto label_1f8e88;
        case 0x1f8e8cu: goto label_1f8e8c;
        case 0x1f8e90u: goto label_1f8e90;
        case 0x1f8e94u: goto label_1f8e94;
        case 0x1f8e98u: goto label_1f8e98;
        case 0x1f8e9cu: goto label_1f8e9c;
        case 0x1f8ea0u: goto label_1f8ea0;
        case 0x1f8ea4u: goto label_1f8ea4;
        case 0x1f8ea8u: goto label_1f8ea8;
        case 0x1f8eacu: goto label_1f8eac;
        case 0x1f8eb0u: goto label_1f8eb0;
        case 0x1f8eb4u: goto label_1f8eb4;
        case 0x1f8eb8u: goto label_1f8eb8;
        case 0x1f8ebcu: goto label_1f8ebc;
        case 0x1f8ec0u: goto label_1f8ec0;
        case 0x1f8ec4u: goto label_1f8ec4;
        case 0x1f8ec8u: goto label_1f8ec8;
        case 0x1f8eccu: goto label_1f8ecc;
        case 0x1f8ed0u: goto label_1f8ed0;
        case 0x1f8ed4u: goto label_1f8ed4;
        case 0x1f8ed8u: goto label_1f8ed8;
        case 0x1f8edcu: goto label_1f8edc;
        case 0x1f8ee0u: goto label_1f8ee0;
        case 0x1f8ee4u: goto label_1f8ee4;
        case 0x1f8ee8u: goto label_1f8ee8;
        case 0x1f8eecu: goto label_1f8eec;
        case 0x1f8ef0u: goto label_1f8ef0;
        case 0x1f8ef4u: goto label_1f8ef4;
        case 0x1f8ef8u: goto label_1f8ef8;
        case 0x1f8efcu: goto label_1f8efc;
        case 0x1f8f00u: goto label_1f8f00;
        case 0x1f8f04u: goto label_1f8f04;
        case 0x1f8f08u: goto label_1f8f08;
        case 0x1f8f0cu: goto label_1f8f0c;
        case 0x1f8f10u: goto label_1f8f10;
        case 0x1f8f14u: goto label_1f8f14;
        case 0x1f8f18u: goto label_1f8f18;
        case 0x1f8f1cu: goto label_1f8f1c;
        case 0x1f8f20u: goto label_1f8f20;
        case 0x1f8f24u: goto label_1f8f24;
        case 0x1f8f28u: goto label_1f8f28;
        case 0x1f8f2cu: goto label_1f8f2c;
        case 0x1f8f30u: goto label_1f8f30;
        case 0x1f8f34u: goto label_1f8f34;
        case 0x1f8f38u: goto label_1f8f38;
        case 0x1f8f3cu: goto label_1f8f3c;
        case 0x1f8f40u: goto label_1f8f40;
        case 0x1f8f44u: goto label_1f8f44;
        case 0x1f8f48u: goto label_1f8f48;
        case 0x1f8f4cu: goto label_1f8f4c;
        case 0x1f8f50u: goto label_1f8f50;
        case 0x1f8f54u: goto label_1f8f54;
        case 0x1f8f58u: goto label_1f8f58;
        case 0x1f8f5cu: goto label_1f8f5c;
        case 0x1f8f60u: goto label_1f8f60;
        case 0x1f8f64u: goto label_1f8f64;
        case 0x1f8f68u: goto label_1f8f68;
        case 0x1f8f6cu: goto label_1f8f6c;
        case 0x1f8f70u: goto label_1f8f70;
        case 0x1f8f74u: goto label_1f8f74;
        case 0x1f8f78u: goto label_1f8f78;
        case 0x1f8f7cu: goto label_1f8f7c;
        case 0x1f8f80u: goto label_1f8f80;
        case 0x1f8f84u: goto label_1f8f84;
        case 0x1f8f88u: goto label_1f8f88;
        case 0x1f8f8cu: goto label_1f8f8c;
        case 0x1f8f90u: goto label_1f8f90;
        case 0x1f8f94u: goto label_1f8f94;
        case 0x1f8f98u: goto label_1f8f98;
        case 0x1f8f9cu: goto label_1f8f9c;
        case 0x1f8fa0u: goto label_1f8fa0;
        case 0x1f8fa4u: goto label_1f8fa4;
        case 0x1f8fa8u: goto label_1f8fa8;
        case 0x1f8facu: goto label_1f8fac;
        case 0x1f8fb0u: goto label_1f8fb0;
        case 0x1f8fb4u: goto label_1f8fb4;
        case 0x1f8fb8u: goto label_1f8fb8;
        case 0x1f8fbcu: goto label_1f8fbc;
        case 0x1f8fc0u: goto label_1f8fc0;
        case 0x1f8fc4u: goto label_1f8fc4;
        case 0x1f8fc8u: goto label_1f8fc8;
        case 0x1f8fccu: goto label_1f8fcc;
        case 0x1f8fd0u: goto label_1f8fd0;
        case 0x1f8fd4u: goto label_1f8fd4;
        case 0x1f8fd8u: goto label_1f8fd8;
        case 0x1f8fdcu: goto label_1f8fdc;
        case 0x1f8fe0u: goto label_1f8fe0;
        case 0x1f8fe4u: goto label_1f8fe4;
        case 0x1f8fe8u: goto label_1f8fe8;
        case 0x1f8fecu: goto label_1f8fec;
        case 0x1f8ff0u: goto label_1f8ff0;
        case 0x1f8ff4u: goto label_1f8ff4;
        case 0x1f8ff8u: goto label_1f8ff8;
        case 0x1f8ffcu: goto label_1f8ffc;
        case 0x1f9000u: goto label_1f9000;
        case 0x1f9004u: goto label_1f9004;
        case 0x1f9008u: goto label_1f9008;
        case 0x1f900cu: goto label_1f900c;
        case 0x1f9010u: goto label_1f9010;
        case 0x1f9014u: goto label_1f9014;
        case 0x1f9018u: goto label_1f9018;
        case 0x1f901cu: goto label_1f901c;
        case 0x1f9020u: goto label_1f9020;
        case 0x1f9024u: goto label_1f9024;
        case 0x1f9028u: goto label_1f9028;
        case 0x1f902cu: goto label_1f902c;
        case 0x1f9030u: goto label_1f9030;
        case 0x1f9034u: goto label_1f9034;
        case 0x1f9038u: goto label_1f9038;
        case 0x1f903cu: goto label_1f903c;
        case 0x1f9040u: goto label_1f9040;
        case 0x1f9044u: goto label_1f9044;
        case 0x1f9048u: goto label_1f9048;
        case 0x1f904cu: goto label_1f904c;
        case 0x1f9050u: goto label_1f9050;
        case 0x1f9054u: goto label_1f9054;
        case 0x1f9058u: goto label_1f9058;
        case 0x1f905cu: goto label_1f905c;
        case 0x1f9060u: goto label_1f9060;
        case 0x1f9064u: goto label_1f9064;
        case 0x1f9068u: goto label_1f9068;
        case 0x1f906cu: goto label_1f906c;
        case 0x1f9070u: goto label_1f9070;
        case 0x1f9074u: goto label_1f9074;
        case 0x1f9078u: goto label_1f9078;
        case 0x1f907cu: goto label_1f907c;
        case 0x1f9080u: goto label_1f9080;
        case 0x1f9084u: goto label_1f9084;
        case 0x1f9088u: goto label_1f9088;
        case 0x1f908cu: goto label_1f908c;
        case 0x1f9090u: goto label_1f9090;
        case 0x1f9094u: goto label_1f9094;
        case 0x1f9098u: goto label_1f9098;
        case 0x1f909cu: goto label_1f909c;
        case 0x1f90a0u: goto label_1f90a0;
        case 0x1f90a4u: goto label_1f90a4;
        case 0x1f90a8u: goto label_1f90a8;
        case 0x1f90acu: goto label_1f90ac;
        case 0x1f90b0u: goto label_1f90b0;
        case 0x1f90b4u: goto label_1f90b4;
        case 0x1f90b8u: goto label_1f90b8;
        case 0x1f90bcu: goto label_1f90bc;
        case 0x1f90c0u: goto label_1f90c0;
        case 0x1f90c4u: goto label_1f90c4;
        case 0x1f90c8u: goto label_1f90c8;
        case 0x1f90ccu: goto label_1f90cc;
        case 0x1f90d0u: goto label_1f90d0;
        case 0x1f90d4u: goto label_1f90d4;
        case 0x1f90d8u: goto label_1f90d8;
        case 0x1f90dcu: goto label_1f90dc;
        case 0x1f90e0u: goto label_1f90e0;
        case 0x1f90e4u: goto label_1f90e4;
        case 0x1f90e8u: goto label_1f90e8;
        case 0x1f90ecu: goto label_1f90ec;
        case 0x1f90f0u: goto label_1f90f0;
        case 0x1f90f4u: goto label_1f90f4;
        case 0x1f90f8u: goto label_1f90f8;
        case 0x1f90fcu: goto label_1f90fc;
        case 0x1f9100u: goto label_1f9100;
        case 0x1f9104u: goto label_1f9104;
        case 0x1f9108u: goto label_1f9108;
        case 0x1f910cu: goto label_1f910c;
        case 0x1f9110u: goto label_1f9110;
        case 0x1f9114u: goto label_1f9114;
        case 0x1f9118u: goto label_1f9118;
        case 0x1f911cu: goto label_1f911c;
        case 0x1f9120u: goto label_1f9120;
        case 0x1f9124u: goto label_1f9124;
        case 0x1f9128u: goto label_1f9128;
        case 0x1f912cu: goto label_1f912c;
        case 0x1f9130u: goto label_1f9130;
        case 0x1f9134u: goto label_1f9134;
        case 0x1f9138u: goto label_1f9138;
        case 0x1f913cu: goto label_1f913c;
        case 0x1f9140u: goto label_1f9140;
        case 0x1f9144u: goto label_1f9144;
        case 0x1f9148u: goto label_1f9148;
        case 0x1f914cu: goto label_1f914c;
        case 0x1f9150u: goto label_1f9150;
        case 0x1f9154u: goto label_1f9154;
        case 0x1f9158u: goto label_1f9158;
        case 0x1f915cu: goto label_1f915c;
        case 0x1f9160u: goto label_1f9160;
        case 0x1f9164u: goto label_1f9164;
        case 0x1f9168u: goto label_1f9168;
        case 0x1f916cu: goto label_1f916c;
        case 0x1f9170u: goto label_1f9170;
        case 0x1f9174u: goto label_1f9174;
        case 0x1f9178u: goto label_1f9178;
        case 0x1f917cu: goto label_1f917c;
        case 0x1f9180u: goto label_1f9180;
        case 0x1f9184u: goto label_1f9184;
        case 0x1f9188u: goto label_1f9188;
        case 0x1f918cu: goto label_1f918c;
        case 0x1f9190u: goto label_1f9190;
        case 0x1f9194u: goto label_1f9194;
        case 0x1f9198u: goto label_1f9198;
        case 0x1f919cu: goto label_1f919c;
        case 0x1f91a0u: goto label_1f91a0;
        case 0x1f91a4u: goto label_1f91a4;
        case 0x1f91a8u: goto label_1f91a8;
        case 0x1f91acu: goto label_1f91ac;
        case 0x1f91b0u: goto label_1f91b0;
        case 0x1f91b4u: goto label_1f91b4;
        case 0x1f91b8u: goto label_1f91b8;
        case 0x1f91bcu: goto label_1f91bc;
        case 0x1f91c0u: goto label_1f91c0;
        case 0x1f91c4u: goto label_1f91c4;
        case 0x1f91c8u: goto label_1f91c8;
        case 0x1f91ccu: goto label_1f91cc;
        case 0x1f91d0u: goto label_1f91d0;
        case 0x1f91d4u: goto label_1f91d4;
        case 0x1f91d8u: goto label_1f91d8;
        case 0x1f91dcu: goto label_1f91dc;
        case 0x1f91e0u: goto label_1f91e0;
        case 0x1f91e4u: goto label_1f91e4;
        case 0x1f91e8u: goto label_1f91e8;
        case 0x1f91ecu: goto label_1f91ec;
        case 0x1f91f0u: goto label_1f91f0;
        case 0x1f91f4u: goto label_1f91f4;
        case 0x1f91f8u: goto label_1f91f8;
        case 0x1f91fcu: goto label_1f91fc;
        case 0x1f9200u: goto label_1f9200;
        case 0x1f9204u: goto label_1f9204;
        case 0x1f9208u: goto label_1f9208;
        case 0x1f920cu: goto label_1f920c;
        case 0x1f9210u: goto label_1f9210;
        case 0x1f9214u: goto label_1f9214;
        case 0x1f9218u: goto label_1f9218;
        case 0x1f921cu: goto label_1f921c;
        case 0x1f9220u: goto label_1f9220;
        case 0x1f9224u: goto label_1f9224;
        case 0x1f9228u: goto label_1f9228;
        case 0x1f922cu: goto label_1f922c;
        case 0x1f9230u: goto label_1f9230;
        case 0x1f9234u: goto label_1f9234;
        case 0x1f9238u: goto label_1f9238;
        case 0x1f923cu: goto label_1f923c;
        case 0x1f9240u: goto label_1f9240;
        case 0x1f9244u: goto label_1f9244;
        case 0x1f9248u: goto label_1f9248;
        case 0x1f924cu: goto label_1f924c;
        case 0x1f9250u: goto label_1f9250;
        case 0x1f9254u: goto label_1f9254;
        case 0x1f9258u: goto label_1f9258;
        case 0x1f925cu: goto label_1f925c;
        case 0x1f9260u: goto label_1f9260;
        case 0x1f9264u: goto label_1f9264;
        case 0x1f9268u: goto label_1f9268;
        case 0x1f926cu: goto label_1f926c;
        case 0x1f9270u: goto label_1f9270;
        case 0x1f9274u: goto label_1f9274;
        case 0x1f9278u: goto label_1f9278;
        case 0x1f927cu: goto label_1f927c;
        case 0x1f9280u: goto label_1f9280;
        case 0x1f9284u: goto label_1f9284;
        case 0x1f9288u: goto label_1f9288;
        case 0x1f928cu: goto label_1f928c;
        case 0x1f9290u: goto label_1f9290;
        case 0x1f9294u: goto label_1f9294;
        case 0x1f9298u: goto label_1f9298;
        case 0x1f929cu: goto label_1f929c;
        case 0x1f92a0u: goto label_1f92a0;
        case 0x1f92a4u: goto label_1f92a4;
        case 0x1f92a8u: goto label_1f92a8;
        case 0x1f92acu: goto label_1f92ac;
        case 0x1f92b0u: goto label_1f92b0;
        case 0x1f92b4u: goto label_1f92b4;
        case 0x1f92b8u: goto label_1f92b8;
        case 0x1f92bcu: goto label_1f92bc;
        case 0x1f92c0u: goto label_1f92c0;
        case 0x1f92c4u: goto label_1f92c4;
        case 0x1f92c8u: goto label_1f92c8;
        case 0x1f92ccu: goto label_1f92cc;
        case 0x1f92d0u: goto label_1f92d0;
        case 0x1f92d4u: goto label_1f92d4;
        case 0x1f92d8u: goto label_1f92d8;
        case 0x1f92dcu: goto label_1f92dc;
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f92e4u: goto label_1f92e4;
        case 0x1f92e8u: goto label_1f92e8;
        case 0x1f92ecu: goto label_1f92ec;
        case 0x1f92f0u: goto label_1f92f0;
        case 0x1f92f4u: goto label_1f92f4;
        case 0x1f92f8u: goto label_1f92f8;
        case 0x1f92fcu: goto label_1f92fc;
        case 0x1f9300u: goto label_1f9300;
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9308u: goto label_1f9308;
        case 0x1f930cu: goto label_1f930c;
        case 0x1f9310u: goto label_1f9310;
        case 0x1f9314u: goto label_1f9314;
        case 0x1f9318u: goto label_1f9318;
        case 0x1f931cu: goto label_1f931c;
        case 0x1f9320u: goto label_1f9320;
        case 0x1f9324u: goto label_1f9324;
        case 0x1f9328u: goto label_1f9328;
        case 0x1f932cu: goto label_1f932c;
        case 0x1f9330u: goto label_1f9330;
        case 0x1f9334u: goto label_1f9334;
        case 0x1f9338u: goto label_1f9338;
        case 0x1f933cu: goto label_1f933c;
        case 0x1f9340u: goto label_1f9340;
        case 0x1f9344u: goto label_1f9344;
        case 0x1f9348u: goto label_1f9348;
        case 0x1f934cu: goto label_1f934c;
        case 0x1f9350u: goto label_1f9350;
        case 0x1f9354u: goto label_1f9354;
        case 0x1f9358u: goto label_1f9358;
        case 0x1f935cu: goto label_1f935c;
        case 0x1f9360u: goto label_1f9360;
        case 0x1f9364u: goto label_1f9364;
        case 0x1f9368u: goto label_1f9368;
        case 0x1f936cu: goto label_1f936c;
        case 0x1f9370u: goto label_1f9370;
        case 0x1f9374u: goto label_1f9374;
        case 0x1f9378u: goto label_1f9378;
        case 0x1f937cu: goto label_1f937c;
        case 0x1f9380u: goto label_1f9380;
        case 0x1f9384u: goto label_1f9384;
        case 0x1f9388u: goto label_1f9388;
        case 0x1f938cu: goto label_1f938c;
        case 0x1f9390u: goto label_1f9390;
        case 0x1f9394u: goto label_1f9394;
        case 0x1f9398u: goto label_1f9398;
        case 0x1f939cu: goto label_1f939c;
        case 0x1f93a0u: goto label_1f93a0;
        case 0x1f93a4u: goto label_1f93a4;
        case 0x1f93a8u: goto label_1f93a8;
        case 0x1f93acu: goto label_1f93ac;
        case 0x1f93b0u: goto label_1f93b0;
        case 0x1f93b4u: goto label_1f93b4;
        case 0x1f93b8u: goto label_1f93b8;
        case 0x1f93bcu: goto label_1f93bc;
        case 0x1f93c0u: goto label_1f93c0;
        case 0x1f93c4u: goto label_1f93c4;
        case 0x1f93c8u: goto label_1f93c8;
        case 0x1f93ccu: goto label_1f93cc;
        case 0x1f93d0u: goto label_1f93d0;
        case 0x1f93d4u: goto label_1f93d4;
        case 0x1f93d8u: goto label_1f93d8;
        case 0x1f93dcu: goto label_1f93dc;
        case 0x1f93e0u: goto label_1f93e0;
        case 0x1f93e4u: goto label_1f93e4;
        case 0x1f93e8u: goto label_1f93e8;
        case 0x1f93ecu: goto label_1f93ec;
        case 0x1f93f0u: goto label_1f93f0;
        case 0x1f93f4u: goto label_1f93f4;
        case 0x1f93f8u: goto label_1f93f8;
        case 0x1f93fcu: goto label_1f93fc;
        case 0x1f9400u: goto label_1f9400;
        case 0x1f9404u: goto label_1f9404;
        case 0x1f9408u: goto label_1f9408;
        case 0x1f940cu: goto label_1f940c;
        case 0x1f9410u: goto label_1f9410;
        case 0x1f9414u: goto label_1f9414;
        case 0x1f9418u: goto label_1f9418;
        case 0x1f941cu: goto label_1f941c;
        case 0x1f9420u: goto label_1f9420;
        case 0x1f9424u: goto label_1f9424;
        case 0x1f9428u: goto label_1f9428;
        case 0x1f942cu: goto label_1f942c;
        case 0x1f9430u: goto label_1f9430;
        case 0x1f9434u: goto label_1f9434;
        case 0x1f9438u: goto label_1f9438;
        case 0x1f943cu: goto label_1f943c;
        case 0x1f9440u: goto label_1f9440;
        case 0x1f9444u: goto label_1f9444;
        case 0x1f9448u: goto label_1f9448;
        case 0x1f944cu: goto label_1f944c;
        case 0x1f9450u: goto label_1f9450;
        case 0x1f9454u: goto label_1f9454;
        case 0x1f9458u: goto label_1f9458;
        case 0x1f945cu: goto label_1f945c;
        case 0x1f9460u: goto label_1f9460;
        case 0x1f9464u: goto label_1f9464;
        case 0x1f9468u: goto label_1f9468;
        case 0x1f946cu: goto label_1f946c;
        case 0x1f9470u: goto label_1f9470;
        case 0x1f9474u: goto label_1f9474;
        case 0x1f9478u: goto label_1f9478;
        case 0x1f947cu: goto label_1f947c;
        case 0x1f9480u: goto label_1f9480;
        case 0x1f9484u: goto label_1f9484;
        case 0x1f9488u: goto label_1f9488;
        case 0x1f948cu: goto label_1f948c;
        case 0x1f9490u: goto label_1f9490;
        case 0x1f9494u: goto label_1f9494;
        case 0x1f9498u: goto label_1f9498;
        case 0x1f949cu: goto label_1f949c;
        case 0x1f94a0u: goto label_1f94a0;
        case 0x1f94a4u: goto label_1f94a4;
        case 0x1f94a8u: goto label_1f94a8;
        case 0x1f94acu: goto label_1f94ac;
        case 0x1f94b0u: goto label_1f94b0;
        case 0x1f94b4u: goto label_1f94b4;
        case 0x1f94b8u: goto label_1f94b8;
        case 0x1f94bcu: goto label_1f94bc;
        case 0x1f94c0u: goto label_1f94c0;
        case 0x1f94c4u: goto label_1f94c4;
        case 0x1f94c8u: goto label_1f94c8;
        case 0x1f94ccu: goto label_1f94cc;
        case 0x1f94d0u: goto label_1f94d0;
        case 0x1f94d4u: goto label_1f94d4;
        case 0x1f94d8u: goto label_1f94d8;
        case 0x1f94dcu: goto label_1f94dc;
        case 0x1f94e0u: goto label_1f94e0;
        case 0x1f94e4u: goto label_1f94e4;
        case 0x1f94e8u: goto label_1f94e8;
        case 0x1f94ecu: goto label_1f94ec;
        case 0x1f94f0u: goto label_1f94f0;
        case 0x1f94f4u: goto label_1f94f4;
        case 0x1f94f8u: goto label_1f94f8;
        case 0x1f94fcu: goto label_1f94fc;
        case 0x1f9500u: goto label_1f9500;
        case 0x1f9504u: goto label_1f9504;
        case 0x1f9508u: goto label_1f9508;
        case 0x1f950cu: goto label_1f950c;
        case 0x1f9510u: goto label_1f9510;
        case 0x1f9514u: goto label_1f9514;
        case 0x1f9518u: goto label_1f9518;
        case 0x1f951cu: goto label_1f951c;
        case 0x1f9520u: goto label_1f9520;
        case 0x1f9524u: goto label_1f9524;
        case 0x1f9528u: goto label_1f9528;
        case 0x1f952cu: goto label_1f952c;
        case 0x1f9530u: goto label_1f9530;
        case 0x1f9534u: goto label_1f9534;
        case 0x1f9538u: goto label_1f9538;
        case 0x1f953cu: goto label_1f953c;
        case 0x1f9540u: goto label_1f9540;
        case 0x1f9544u: goto label_1f9544;
        case 0x1f9548u: goto label_1f9548;
        case 0x1f954cu: goto label_1f954c;
        case 0x1f9550u: goto label_1f9550;
        case 0x1f9554u: goto label_1f9554;
        case 0x1f9558u: goto label_1f9558;
        case 0x1f955cu: goto label_1f955c;
        case 0x1f9560u: goto label_1f9560;
        case 0x1f9564u: goto label_1f9564;
        case 0x1f9568u: goto label_1f9568;
        case 0x1f956cu: goto label_1f956c;
        case 0x1f9570u: goto label_1f9570;
        case 0x1f9574u: goto label_1f9574;
        case 0x1f9578u: goto label_1f9578;
        case 0x1f957cu: goto label_1f957c;
        case 0x1f9580u: goto label_1f9580;
        case 0x1f9584u: goto label_1f9584;
        case 0x1f9588u: goto label_1f9588;
        case 0x1f958cu: goto label_1f958c;
        case 0x1f9590u: goto label_1f9590;
        case 0x1f9594u: goto label_1f9594;
        case 0x1f9598u: goto label_1f9598;
        case 0x1f959cu: goto label_1f959c;
        case 0x1f95a0u: goto label_1f95a0;
        case 0x1f95a4u: goto label_1f95a4;
        case 0x1f95a8u: goto label_1f95a8;
        case 0x1f95acu: goto label_1f95ac;
        case 0x1f95b0u: goto label_1f95b0;
        case 0x1f95b4u: goto label_1f95b4;
        case 0x1f95b8u: goto label_1f95b8;
        case 0x1f95bcu: goto label_1f95bc;
        case 0x1f95c0u: goto label_1f95c0;
        case 0x1f95c4u: goto label_1f95c4;
        case 0x1f95c8u: goto label_1f95c8;
        case 0x1f95ccu: goto label_1f95cc;
        case 0x1f95d0u: goto label_1f95d0;
        case 0x1f95d4u: goto label_1f95d4;
        case 0x1f95d8u: goto label_1f95d8;
        case 0x1f95dcu: goto label_1f95dc;
        case 0x1f95e0u: goto label_1f95e0;
        case 0x1f95e4u: goto label_1f95e4;
        case 0x1f95e8u: goto label_1f95e8;
        case 0x1f95ecu: goto label_1f95ec;
        case 0x1f95f0u: goto label_1f95f0;
        case 0x1f95f4u: goto label_1f95f4;
        case 0x1f95f8u: goto label_1f95f8;
        case 0x1f95fcu: goto label_1f95fc;
        case 0x1f9600u: goto label_1f9600;
        case 0x1f9604u: goto label_1f9604;
        case 0x1f9608u: goto label_1f9608;
        case 0x1f960cu: goto label_1f960c;
        case 0x1f9610u: goto label_1f9610;
        case 0x1f9614u: goto label_1f9614;
        case 0x1f9618u: goto label_1f9618;
        case 0x1f961cu: goto label_1f961c;
        case 0x1f9620u: goto label_1f9620;
        case 0x1f9624u: goto label_1f9624;
        case 0x1f9628u: goto label_1f9628;
        case 0x1f962cu: goto label_1f962c;
        case 0x1f9630u: goto label_1f9630;
        case 0x1f9634u: goto label_1f9634;
        case 0x1f9638u: goto label_1f9638;
        case 0x1f963cu: goto label_1f963c;
        case 0x1f9640u: goto label_1f9640;
        case 0x1f9644u: goto label_1f9644;
        case 0x1f9648u: goto label_1f9648;
        case 0x1f964cu: goto label_1f964c;
        case 0x1f9650u: goto label_1f9650;
        case 0x1f9654u: goto label_1f9654;
        case 0x1f9658u: goto label_1f9658;
        case 0x1f965cu: goto label_1f965c;
        case 0x1f9660u: goto label_1f9660;
        case 0x1f9664u: goto label_1f9664;
        case 0x1f9668u: goto label_1f9668;
        case 0x1f966cu: goto label_1f966c;
        case 0x1f9670u: goto label_1f9670;
        case 0x1f9674u: goto label_1f9674;
        case 0x1f9678u: goto label_1f9678;
        case 0x1f967cu: goto label_1f967c;
        case 0x1f9680u: goto label_1f9680;
        case 0x1f9684u: goto label_1f9684;
        case 0x1f9688u: goto label_1f9688;
        case 0x1f968cu: goto label_1f968c;
        case 0x1f9690u: goto label_1f9690;
        case 0x1f9694u: goto label_1f9694;
        case 0x1f9698u: goto label_1f9698;
        case 0x1f969cu: goto label_1f969c;
        case 0x1f96a0u: goto label_1f96a0;
        case 0x1f96a4u: goto label_1f96a4;
        case 0x1f96a8u: goto label_1f96a8;
        case 0x1f96acu: goto label_1f96ac;
        case 0x1f96b0u: goto label_1f96b0;
        case 0x1f96b4u: goto label_1f96b4;
        case 0x1f96b8u: goto label_1f96b8;
        case 0x1f96bcu: goto label_1f96bc;
        case 0x1f96c0u: goto label_1f96c0;
        case 0x1f96c4u: goto label_1f96c4;
        case 0x1f96c8u: goto label_1f96c8;
        case 0x1f96ccu: goto label_1f96cc;
        case 0x1f96d0u: goto label_1f96d0;
        case 0x1f96d4u: goto label_1f96d4;
        case 0x1f96d8u: goto label_1f96d8;
        case 0x1f96dcu: goto label_1f96dc;
        case 0x1f96e0u: goto label_1f96e0;
        case 0x1f96e4u: goto label_1f96e4;
        case 0x1f96e8u: goto label_1f96e8;
        case 0x1f96ecu: goto label_1f96ec;
        case 0x1f96f0u: goto label_1f96f0;
        case 0x1f96f4u: goto label_1f96f4;
        case 0x1f96f8u: goto label_1f96f8;
        case 0x1f96fcu: goto label_1f96fc;
        case 0x1f9700u: goto label_1f9700;
        case 0x1f9704u: goto label_1f9704;
        case 0x1f9708u: goto label_1f9708;
        case 0x1f970cu: goto label_1f970c;
        case 0x1f9710u: goto label_1f9710;
        case 0x1f9714u: goto label_1f9714;
        case 0x1f9718u: goto label_1f9718;
        case 0x1f971cu: goto label_1f971c;
        case 0x1f9720u: goto label_1f9720;
        case 0x1f9724u: goto label_1f9724;
        case 0x1f9728u: goto label_1f9728;
        case 0x1f972cu: goto label_1f972c;
        case 0x1f9730u: goto label_1f9730;
        case 0x1f9734u: goto label_1f9734;
        case 0x1f9738u: goto label_1f9738;
        case 0x1f973cu: goto label_1f973c;
        case 0x1f9740u: goto label_1f9740;
        case 0x1f9744u: goto label_1f9744;
        case 0x1f9748u: goto label_1f9748;
        case 0x1f974cu: goto label_1f974c;
        case 0x1f9750u: goto label_1f9750;
        case 0x1f9754u: goto label_1f9754;
        case 0x1f9758u: goto label_1f9758;
        case 0x1f975cu: goto label_1f975c;
        case 0x1f9760u: goto label_1f9760;
        case 0x1f9764u: goto label_1f9764;
        case 0x1f9768u: goto label_1f9768;
        case 0x1f976cu: goto label_1f976c;
        case 0x1f9770u: goto label_1f9770;
        case 0x1f9774u: goto label_1f9774;
        case 0x1f9778u: goto label_1f9778;
        case 0x1f977cu: goto label_1f977c;
        case 0x1f9780u: goto label_1f9780;
        case 0x1f9784u: goto label_1f9784;
        case 0x1f9788u: goto label_1f9788;
        case 0x1f978cu: goto label_1f978c;
        case 0x1f9790u: goto label_1f9790;
        case 0x1f9794u: goto label_1f9794;
        case 0x1f9798u: goto label_1f9798;
        case 0x1f979cu: goto label_1f979c;
        case 0x1f97a0u: goto label_1f97a0;
        case 0x1f97a4u: goto label_1f97a4;
        case 0x1f97a8u: goto label_1f97a8;
        case 0x1f97acu: goto label_1f97ac;
        case 0x1f97b0u: goto label_1f97b0;
        case 0x1f97b4u: goto label_1f97b4;
        case 0x1f97b8u: goto label_1f97b8;
        case 0x1f97bcu: goto label_1f97bc;
        case 0x1f97c0u: goto label_1f97c0;
        case 0x1f97c4u: goto label_1f97c4;
        case 0x1f97c8u: goto label_1f97c8;
        case 0x1f97ccu: goto label_1f97cc;
        case 0x1f97d0u: goto label_1f97d0;
        case 0x1f97d4u: goto label_1f97d4;
        case 0x1f97d8u: goto label_1f97d8;
        case 0x1f97dcu: goto label_1f97dc;
        case 0x1f97e0u: goto label_1f97e0;
        case 0x1f97e4u: goto label_1f97e4;
        case 0x1f97e8u: goto label_1f97e8;
        case 0x1f97ecu: goto label_1f97ec;
        case 0x1f97f0u: goto label_1f97f0;
        case 0x1f97f4u: goto label_1f97f4;
        case 0x1f97f8u: goto label_1f97f8;
        case 0x1f97fcu: goto label_1f97fc;
        case 0x1f9800u: goto label_1f9800;
        case 0x1f9804u: goto label_1f9804;
        case 0x1f9808u: goto label_1f9808;
        case 0x1f980cu: goto label_1f980c;
        case 0x1f9810u: goto label_1f9810;
        case 0x1f9814u: goto label_1f9814;
        case 0x1f9818u: goto label_1f9818;
        case 0x1f981cu: goto label_1f981c;
        case 0x1f9820u: goto label_1f9820;
        case 0x1f9824u: goto label_1f9824;
        case 0x1f9828u: goto label_1f9828;
        case 0x1f982cu: goto label_1f982c;
        case 0x1f9830u: goto label_1f9830;
        case 0x1f9834u: goto label_1f9834;
        case 0x1f9838u: goto label_1f9838;
        case 0x1f983cu: goto label_1f983c;
        case 0x1f9840u: goto label_1f9840;
        case 0x1f9844u: goto label_1f9844;
        case 0x1f9848u: goto label_1f9848;
        case 0x1f984cu: goto label_1f984c;
        case 0x1f9850u: goto label_1f9850;
        case 0x1f9854u: goto label_1f9854;
        case 0x1f9858u: goto label_1f9858;
        case 0x1f985cu: goto label_1f985c;
        case 0x1f9860u: goto label_1f9860;
        case 0x1f9864u: goto label_1f9864;
        case 0x1f9868u: goto label_1f9868;
        case 0x1f986cu: goto label_1f986c;
        case 0x1f9870u: goto label_1f9870;
        case 0x1f9874u: goto label_1f9874;
        case 0x1f9878u: goto label_1f9878;
        case 0x1f987cu: goto label_1f987c;
        case 0x1f9880u: goto label_1f9880;
        case 0x1f9884u: goto label_1f9884;
        case 0x1f9888u: goto label_1f9888;
        case 0x1f988cu: goto label_1f988c;
        case 0x1f9890u: goto label_1f9890;
        case 0x1f9894u: goto label_1f9894;
        case 0x1f9898u: goto label_1f9898;
        case 0x1f989cu: goto label_1f989c;
        case 0x1f98a0u: goto label_1f98a0;
        case 0x1f98a4u: goto label_1f98a4;
        case 0x1f98a8u: goto label_1f98a8;
        case 0x1f98acu: goto label_1f98ac;
        case 0x1f98b0u: goto label_1f98b0;
        case 0x1f98b4u: goto label_1f98b4;
        case 0x1f98b8u: goto label_1f98b8;
        case 0x1f98bcu: goto label_1f98bc;
        case 0x1f98c0u: goto label_1f98c0;
        case 0x1f98c4u: goto label_1f98c4;
        case 0x1f98c8u: goto label_1f98c8;
        case 0x1f98ccu: goto label_1f98cc;
        case 0x1f98d0u: goto label_1f98d0;
        case 0x1f98d4u: goto label_1f98d4;
        case 0x1f98d8u: goto label_1f98d8;
        case 0x1f98dcu: goto label_1f98dc;
        case 0x1f98e0u: goto label_1f98e0;
        case 0x1f98e4u: goto label_1f98e4;
        case 0x1f98e8u: goto label_1f98e8;
        case 0x1f98ecu: goto label_1f98ec;
        case 0x1f98f0u: goto label_1f98f0;
        case 0x1f98f4u: goto label_1f98f4;
        case 0x1f98f8u: goto label_1f98f8;
        case 0x1f98fcu: goto label_1f98fc;
        case 0x1f9900u: goto label_1f9900;
        case 0x1f9904u: goto label_1f9904;
        case 0x1f9908u: goto label_1f9908;
        case 0x1f990cu: goto label_1f990c;
        case 0x1f9910u: goto label_1f9910;
        case 0x1f9914u: goto label_1f9914;
        case 0x1f9918u: goto label_1f9918;
        case 0x1f991cu: goto label_1f991c;
        case 0x1f9920u: goto label_1f9920;
        case 0x1f9924u: goto label_1f9924;
        case 0x1f9928u: goto label_1f9928;
        case 0x1f992cu: goto label_1f992c;
        case 0x1f9930u: goto label_1f9930;
        case 0x1f9934u: goto label_1f9934;
        case 0x1f9938u: goto label_1f9938;
        case 0x1f993cu: goto label_1f993c;
        case 0x1f9940u: goto label_1f9940;
        case 0x1f9944u: goto label_1f9944;
        case 0x1f9948u: goto label_1f9948;
        case 0x1f994cu: goto label_1f994c;
        case 0x1f9950u: goto label_1f9950;
        case 0x1f9954u: goto label_1f9954;
        case 0x1f9958u: goto label_1f9958;
        case 0x1f995cu: goto label_1f995c;
        case 0x1f9960u: goto label_1f9960;
        case 0x1f9964u: goto label_1f9964;
        case 0x1f9968u: goto label_1f9968;
        case 0x1f996cu: goto label_1f996c;
        case 0x1f9970u: goto label_1f9970;
        case 0x1f9974u: goto label_1f9974;
        case 0x1f9978u: goto label_1f9978;
        case 0x1f997cu: goto label_1f997c;
        case 0x1f9980u: goto label_1f9980;
        case 0x1f9984u: goto label_1f9984;
        case 0x1f9988u: goto label_1f9988;
        case 0x1f998cu: goto label_1f998c;
        case 0x1f9990u: goto label_1f9990;
        case 0x1f9994u: goto label_1f9994;
        case 0x1f9998u: goto label_1f9998;
        case 0x1f999cu: goto label_1f999c;
        case 0x1f99a0u: goto label_1f99a0;
        case 0x1f99a4u: goto label_1f99a4;
        case 0x1f99a8u: goto label_1f99a8;
        case 0x1f99acu: goto label_1f99ac;
        case 0x1f99b0u: goto label_1f99b0;
        case 0x1f99b4u: goto label_1f99b4;
        case 0x1f99b8u: goto label_1f99b8;
        case 0x1f99bcu: goto label_1f99bc;
        case 0x1f99c0u: goto label_1f99c0;
        case 0x1f99c4u: goto label_1f99c4;
        case 0x1f99c8u: goto label_1f99c8;
        case 0x1f99ccu: goto label_1f99cc;
        case 0x1f99d0u: goto label_1f99d0;
        case 0x1f99d4u: goto label_1f99d4;
        case 0x1f99d8u: goto label_1f99d8;
        case 0x1f99dcu: goto label_1f99dc;
        case 0x1f99e0u: goto label_1f99e0;
        case 0x1f99e4u: goto label_1f99e4;
        case 0x1f99e8u: goto label_1f99e8;
        case 0x1f99ecu: goto label_1f99ec;
        case 0x1f99f0u: goto label_1f99f0;
        case 0x1f99f4u: goto label_1f99f4;
        case 0x1f99f8u: goto label_1f99f8;
        case 0x1f99fcu: goto label_1f99fc;
        case 0x1f9a00u: goto label_1f9a00;
        case 0x1f9a04u: goto label_1f9a04;
        case 0x1f9a08u: goto label_1f9a08;
        case 0x1f9a0cu: goto label_1f9a0c;
        case 0x1f9a10u: goto label_1f9a10;
        case 0x1f9a14u: goto label_1f9a14;
        case 0x1f9a18u: goto label_1f9a18;
        case 0x1f9a1cu: goto label_1f9a1c;
        case 0x1f9a20u: goto label_1f9a20;
        case 0x1f9a24u: goto label_1f9a24;
        case 0x1f9a28u: goto label_1f9a28;
        case 0x1f9a2cu: goto label_1f9a2c;
        case 0x1f9a30u: goto label_1f9a30;
        case 0x1f9a34u: goto label_1f9a34;
        case 0x1f9a38u: goto label_1f9a38;
        case 0x1f9a3cu: goto label_1f9a3c;
        case 0x1f9a40u: goto label_1f9a40;
        case 0x1f9a44u: goto label_1f9a44;
        case 0x1f9a48u: goto label_1f9a48;
        case 0x1f9a4cu: goto label_1f9a4c;
        case 0x1f9a50u: goto label_1f9a50;
        case 0x1f9a54u: goto label_1f9a54;
        case 0x1f9a58u: goto label_1f9a58;
        case 0x1f9a5cu: goto label_1f9a5c;
        case 0x1f9a60u: goto label_1f9a60;
        case 0x1f9a64u: goto label_1f9a64;
        case 0x1f9a68u: goto label_1f9a68;
        case 0x1f9a6cu: goto label_1f9a6c;
        case 0x1f9a70u: goto label_1f9a70;
        case 0x1f9a74u: goto label_1f9a74;
        case 0x1f9a78u: goto label_1f9a78;
        case 0x1f9a7cu: goto label_1f9a7c;
        case 0x1f9a80u: goto label_1f9a80;
        case 0x1f9a84u: goto label_1f9a84;
        case 0x1f9a88u: goto label_1f9a88;
        case 0x1f9a8cu: goto label_1f9a8c;
        case 0x1f9a90u: goto label_1f9a90;
        case 0x1f9a94u: goto label_1f9a94;
        case 0x1f9a98u: goto label_1f9a98;
        case 0x1f9a9cu: goto label_1f9a9c;
        case 0x1f9aa0u: goto label_1f9aa0;
        case 0x1f9aa4u: goto label_1f9aa4;
        case 0x1f9aa8u: goto label_1f9aa8;
        case 0x1f9aacu: goto label_1f9aac;
        case 0x1f9ab0u: goto label_1f9ab0;
        case 0x1f9ab4u: goto label_1f9ab4;
        case 0x1f9ab8u: goto label_1f9ab8;
        case 0x1f9abcu: goto label_1f9abc;
        case 0x1f9ac0u: goto label_1f9ac0;
        case 0x1f9ac4u: goto label_1f9ac4;
        case 0x1f9ac8u: goto label_1f9ac8;
        case 0x1f9accu: goto label_1f9acc;
        case 0x1f9ad0u: goto label_1f9ad0;
        case 0x1f9ad4u: goto label_1f9ad4;
        case 0x1f9ad8u: goto label_1f9ad8;
        case 0x1f9adcu: goto label_1f9adc;
        case 0x1f9ae0u: goto label_1f9ae0;
        case 0x1f9ae4u: goto label_1f9ae4;
        case 0x1f9ae8u: goto label_1f9ae8;
        case 0x1f9aecu: goto label_1f9aec;
        case 0x1f9af0u: goto label_1f9af0;
        case 0x1f9af4u: goto label_1f9af4;
        case 0x1f9af8u: goto label_1f9af8;
        case 0x1f9afcu: goto label_1f9afc;
        case 0x1f9b00u: goto label_1f9b00;
        case 0x1f9b04u: goto label_1f9b04;
        case 0x1f9b08u: goto label_1f9b08;
        case 0x1f9b0cu: goto label_1f9b0c;
        case 0x1f9b10u: goto label_1f9b10;
        case 0x1f9b14u: goto label_1f9b14;
        case 0x1f9b18u: goto label_1f9b18;
        case 0x1f9b1cu: goto label_1f9b1c;
        case 0x1f9b20u: goto label_1f9b20;
        case 0x1f9b24u: goto label_1f9b24;
        case 0x1f9b28u: goto label_1f9b28;
        case 0x1f9b2cu: goto label_1f9b2c;
        case 0x1f9b30u: goto label_1f9b30;
        case 0x1f9b34u: goto label_1f9b34;
        case 0x1f9b38u: goto label_1f9b38;
        case 0x1f9b3cu: goto label_1f9b3c;
        case 0x1f9b40u: goto label_1f9b40;
        case 0x1f9b44u: goto label_1f9b44;
        case 0x1f9b48u: goto label_1f9b48;
        case 0x1f9b4cu: goto label_1f9b4c;
        case 0x1f9b50u: goto label_1f9b50;
        case 0x1f9b54u: goto label_1f9b54;
        case 0x1f9b58u: goto label_1f9b58;
        case 0x1f9b5cu: goto label_1f9b5c;
        case 0x1f9b60u: goto label_1f9b60;
        case 0x1f9b64u: goto label_1f9b64;
        case 0x1f9b68u: goto label_1f9b68;
        case 0x1f9b6cu: goto label_1f9b6c;
        case 0x1f9b70u: goto label_1f9b70;
        case 0x1f9b74u: goto label_1f9b74;
        case 0x1f9b78u: goto label_1f9b78;
        case 0x1f9b7cu: goto label_1f9b7c;
        case 0x1f9b80u: goto label_1f9b80;
        case 0x1f9b84u: goto label_1f9b84;
        case 0x1f9b88u: goto label_1f9b88;
        case 0x1f9b8cu: goto label_1f9b8c;
        default: break;
    }

    ctx->pc = 0x1f8c70u;

label_1f8c70:
    // 0x1f8c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f8c74:
    // 0x1f8c74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f8c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f8c78:
    // 0x1f8c78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f8c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f8c7c:
    // 0x1f8c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8c80:
    // 0x1f8c80: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1f8c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f8c84:
    // 0x1f8c84: 0xc07e278  jal         func_1F89E0
label_1f8c88:
    if (ctx->pc == 0x1F8C88u) {
        ctx->pc = 0x1F8C88u;
            // 0x1f8c88: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C8Cu;
        goto label_1f8c8c;
    }
    ctx->pc = 0x1F8C84u;
    SET_GPR_U32(ctx, 31, 0x1F8C8Cu);
    ctx->pc = 0x1F8C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C84u;
            // 0x1f8c88: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F89E0u;
    if (runtime->hasFunction(0x1F89E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F89E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C8Cu; }
        if (ctx->pc != 0x1F8C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F89E0_0x1f89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C8Cu; }
        if (ctx->pc != 0x1F8C8Cu) { return; }
    }
    ctx->pc = 0x1F8C8Cu;
label_1f8c8c:
    // 0x1f8c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8c90:
    // 0x1f8c90: 0x3e00008  jr          $ra
label_1f8c94:
    if (ctx->pc == 0x1F8C94u) {
        ctx->pc = 0x1F8C94u;
            // 0x1f8c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F8C98u;
        goto label_1f8c98;
    }
    ctx->pc = 0x1F8C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C90u;
            // 0x1f8c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8C98u;
label_1f8c98:
    // 0x1f8c98: 0x0  nop
    ctx->pc = 0x1f8c98u;
    // NOP
label_1f8c9c:
    // 0x1f8c9c: 0x0  nop
    ctx->pc = 0x1f8c9cu;
    // NOP
label_1f8ca0:
    // 0x1f8ca0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1f8ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1f8ca4:
    // 0x1f8ca4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f8ca8:
    // 0x1f8ca8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f8cac:
    // 0x1f8cac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f8cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f8cb0:
    // 0x1f8cb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f8cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f8cb4:
    // 0x1f8cb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f8cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f8cb8:
    // 0x1f8cb8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1f8cb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f8cbc:
    // 0x1f8cbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f8cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f8cc0:
    // 0x1f8cc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f8cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f8cc4:
    // 0x1f8cc4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f8cc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f8cc8:
    // 0x1f8cc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f8cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f8ccc:
    // 0x1f8ccc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f8cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8cd0:
    // 0x1f8cd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f8cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f8cd4:
    // 0x1f8cd4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f8cd8:
    // 0x1f8cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f8cdc:
    // 0x1f8cdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f8cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f8ce0:
    // 0x1f8ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f8ce4:
    // 0x1f8ce4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f8ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f8ce8:
    // 0x1f8ce8: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f8cec:
    // 0x1f8cec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f8cf0:
    // 0x1f8cf0: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f8cf4:
    // 0x1f8cf4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f8cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f8cf8:
    // 0x1f8cf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f8cfc:
    if (ctx->pc == 0x1F8CFCu) {
        ctx->pc = 0x1F8CFCu;
            // 0x1f8cfc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F8D00u;
        goto label_1f8d00;
    }
    ctx->pc = 0x1F8CF8u;
    {
        const bool branch_taken_0x1f8cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CF8u;
            // 0x1f8cfc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cf8) {
            ctx->pc = 0x1F8D28u;
            goto label_1f8d28;
        }
    }
    ctx->pc = 0x1F8D00u;
label_1f8d00:
    // 0x1f8d00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f8d04:
    // 0x1f8d04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f8d08:
    // 0x1f8d08: 0x2442d8f0  addiu       $v0, $v0, -0x2710
    ctx->pc = 0x1f8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957296));
label_1f8d0c:
    // 0x1f8d0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f8d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f8d10:
    // 0x1f8d10: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f8d14:
    // 0x1f8d14: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f8d18:
    // 0x1f8d18: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f8d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f8d1c:
    // 0x1f8d1c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f8d20:
    // 0x1f8d20: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f8d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f8d24:
    // 0x1f8d24: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f8d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f8d28:
    // 0x1f8d28: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1f8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f8d2c:
    // 0x1f8d2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8d30:
    // 0x1f8d30: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f8d34:
    // 0x1f8d34: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1f8d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1f8d38:
    // 0x1f8d38: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1f8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f8d3c:
    // 0x1f8d3c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f8d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8d40:
    // 0x1f8d40: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1f8d40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f8d44:
    // 0x1f8d44: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f8d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8d48:
    // 0x1f8d48: 0x26c30020  addiu       $v1, $s6, 0x20
    ctx->pc = 0x1f8d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_1f8d4c:
    // 0x1f8d4c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f8d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8d50:
    // 0x1f8d50: 0x8e7e0000  lw          $fp, 0x0($s3)
    ctx->pc = 0x1f8d50u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f8d54:
    // 0x1f8d54: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1f8d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1f8d58:
    // 0x1f8d58: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1f8d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1f8d5c:
    // 0x1f8d5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f8d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8d60:
    // 0x1f8d60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1f8d64:
    // 0x1f8d64: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1f8d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f8d68:
    // 0x1f8d68: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1f8d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f8d6c:
    // 0x1f8d6c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1f8d6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f8d70:
    // 0x1f8d70: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1f8d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f8d74:
    // 0x1f8d74: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1f8d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f8d78:
    // 0x1f8d78: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x1f8d78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f8d7c:
    // 0x1f8d7c: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1f8d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f8d80:
    // 0x1f8d80: 0xe7ab00b4  swc1        $f11, 0xB4($sp)
    ctx->pc = 0x1f8d80u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1f8d84:
    // 0x1f8d84: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1f8d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f8d88:
    // 0x1f8d88: 0xe7aa00b8  swc1        $f10, 0xB8($sp)
    ctx->pc = 0x1f8d88u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f8d8c:
    // 0x1f8d8c: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1f8d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f8d90:
    // 0x1f8d90: 0xe7a900bc  swc1        $f9, 0xBC($sp)
    ctx->pc = 0x1f8d90u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1f8d94:
    // 0x1f8d94: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1f8d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f8d98:
    // 0x1f8d98: 0xe7a800c0  swc1        $f8, 0xC0($sp)
    ctx->pc = 0x1f8d98u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f8d9c:
    // 0x1f8d9c: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1f8d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8da0:
    // 0x1f8da0: 0xe7a700c4  swc1        $f7, 0xC4($sp)
    ctx->pc = 0x1f8da0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f8da4:
    // 0x1f8da4: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1f8da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8da8:
    // 0x1f8da8: 0xe7a600c8  swc1        $f6, 0xC8($sp)
    ctx->pc = 0x1f8da8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f8dac:
    // 0x1f8dac: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1f8dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8db0:
    // 0x1f8db0: 0xe7a500cc  swc1        $f5, 0xCC($sp)
    ctx->pc = 0x1f8db0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f8db4:
    // 0x1f8db4: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1f8db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8db8:
    // 0x1f8db8: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x1f8db8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f8dbc:
    // 0x1f8dbc: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1f8dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8dc0:
    // 0x1f8dc0: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x1f8dc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f8dc4:
    // 0x1f8dc4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f8dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8dc8:
    // 0x1f8dc8: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x1f8dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f8dcc:
    // 0x1f8dcc: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x1f8dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f8dd0:
    // 0x1f8dd0: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1f8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f8dd4:
    // 0x1f8dd4: 0xc7ab00a0  lwc1        $f11, 0xA0($sp)
    ctx->pc = 0x1f8dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f8dd8:
    // 0x1f8dd8: 0xc7aa00b0  lwc1        $f10, 0xB0($sp)
    ctx->pc = 0x1f8dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f8ddc:
    // 0x1f8ddc: 0xc7a900d0  lwc1        $f9, 0xD0($sp)
    ctx->pc = 0x1f8ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f8de0:
    // 0x1f8de0: 0xc7a800c4  lwc1        $f8, 0xC4($sp)
    ctx->pc = 0x1f8de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f8de4:
    // 0x1f8de4: 0xc7a700a4  lwc1        $f7, 0xA4($sp)
    ctx->pc = 0x1f8de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f8de8:
    // 0x1f8de8: 0xc7a600b4  lwc1        $f6, 0xB4($sp)
    ctx->pc = 0x1f8de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8dec:
    // 0x1f8dec: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x1f8decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8df0:
    // 0x1f8df0: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1f8df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8df4:
    // 0x1f8df4: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1f8df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8df8:
    // 0x1f8df8: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1f8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8dfc:
    // 0x1f8dfc: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f8dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8e00:
    // 0x1f8e00: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1f8e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f8e04:
    // 0x1f8e04: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f8e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1f8e08:
    // 0x1f8e08: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1f8e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f8e0c:
    // 0x1f8e0c: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1f8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f8e10:
    // 0x1f8e10: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1f8e10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1f8e14:
    // 0x1f8e14: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1f8e14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1f8e18:
    // 0x1f8e18: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1f8e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1f8e1c:
    // 0x1f8e1c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1f8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1f8e20:
    // 0x1f8e20: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1f8e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1f8e24:
    // 0x1f8e24: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1f8e24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1f8e28:
    // 0x1f8e28: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f8e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f8e2c:
    // 0x1f8e2c: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1f8e2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1f8e30:
    // 0x1f8e30: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1f8e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1f8e34:
    // 0x1f8e34: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1f8e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1f8e38:
    // 0x1f8e38: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1f8e38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1f8e3c:
    // 0x1f8e3c: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1f8e3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1f8e40:
    // 0x1f8e40: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1f8e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1f8e44:
    // 0x1f8e44: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1f8e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1f8e48:
    // 0x1f8e48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f8e4c:
    // 0x1f8e4c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1f8e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1f8e50:
    // 0x1f8e50: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1f8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1f8e54:
    // 0x1f8e54: 0x4c1ffea  bgez        $a2, . + 4 + (-0x16 << 2)
label_1f8e58:
    if (ctx->pc == 0x1F8E58u) {
        ctx->pc = 0x1F8E58u;
            // 0x1f8e58: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->pc = 0x1F8E5Cu;
        goto label_1f8e5c;
    }
    ctx->pc = 0x1F8E54u;
    {
        const bool branch_taken_0x1f8e54 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1F8E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E54u;
            // 0x1f8e58: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e54) {
            ctx->pc = 0x1F8E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8e00;
        }
    }
    ctx->pc = 0x1F8E5Cu;
label_1f8e5c:
    // 0x1f8e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8e60:
    // 0x1f8e60: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1f8e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1f8e64:
    // 0x1f8e64: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1f8e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1f8e68:
    // 0x1f8e68: 0xc09e998  jal         func_27A660
label_1f8e6c:
    if (ctx->pc == 0x1F8E6Cu) {
        ctx->pc = 0x1F8E6Cu;
            // 0x1f8e6c: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1F8E70u;
        goto label_1f8e70;
    }
    ctx->pc = 0x1F8E68u;
    SET_GPR_U32(ctx, 31, 0x1F8E70u);
    ctx->pc = 0x1F8E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E68u;
            // 0x1f8e6c: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A660u;
    if (runtime->hasFunction(0x27A660u)) {
        auto targetFn = runtime->lookupFunction(0x27A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E70u; }
        if (ctx->pc != 0x1F8E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A660_0x27a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E70u; }
        if (ctx->pc != 0x1F8E70u) { return; }
    }
    ctx->pc = 0x1F8E70u;
label_1f8e70:
    // 0x1f8e70: 0xc7a600f0  lwc1        $f6, 0xF0($sp)
    ctx->pc = 0x1f8e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8e74:
    // 0x1f8e74: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x1f8e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f8e78:
    // 0x1f8e78: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x1f8e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8e7c:
    // 0x1f8e7c: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x1f8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8e80:
    // 0x1f8e80: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x1f8e80u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f8e84:
    // 0x1f8e84: 0x46042981  sub.s       $f6, $f5, $f4
    ctx->pc = 0x1f8e84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f8e88:
    // 0x1f8e88: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1f8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8e8c:
    // 0x1f8e8c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1f8e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8e90:
    // 0x1f8e90: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x1f8e90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_1f8e94:
    // 0x1f8e94: 0xc7c20010  lwc1        $f2, 0x10($fp)
    ctx->pc = 0x1f8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8e98:
    // 0x1f8e98: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x1f8e98u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f8e9c:
    // 0x1f8e9c: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x1f8e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8ea0:
    // 0x1f8ea0: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x1f8ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8ea4:
    // 0x1f8ea4: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x1f8ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8ea8:
    // 0x1f8ea8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f8ea8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1f8eac:
    // 0x1f8eac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f8eb0:
    // 0x1f8eb0: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x1f8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8eb4:
    // 0x1f8eb4: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1f8eb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1f8eb8:
    // 0x1f8eb8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1f8eb8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1f8ebc:
    // 0x1f8ebc: 0x4607381e  madda.s     $f7, $f7
    ctx->pc = 0x1f8ebcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
label_1f8ec0:
    // 0x1f8ec0: 0x460528dc  madd.s      $f3, $f5, $f5
    ctx->pc = 0x1f8ec0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_1f8ec4:
    // 0x1f8ec4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1f8ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8ec8:
    // 0x1f8ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8ecc:
    // 0x1f8ecc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f8ed0:
    if (ctx->pc == 0x1F8ED0u) {
        ctx->pc = 0x1F8ED4u;
        goto label_1f8ed4;
    }
    ctx->pc = 0x1F8ECCu;
    {
        const bool branch_taken_0x1f8ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8ecc) {
            ctx->pc = 0x1F8EDCu;
            goto label_1f8edc;
        }
    }
    ctx->pc = 0x1F8ED4u;
label_1f8ed4:
    // 0x1f8ed4: 0x10000074  b           . + 4 + (0x74 << 2)
label_1f8ed8:
    if (ctx->pc == 0x1F8ED8u) {
        ctx->pc = 0x1F8ED8u;
            // 0x1f8ed8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EDCu;
        goto label_1f8edc;
    }
    ctx->pc = 0x1F8ED4u;
    {
        const bool branch_taken_0x1f8ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8ED4u;
            // 0x1f8ed8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ed4) {
            ctx->pc = 0x1F90A8u;
            goto label_1f90a8;
        }
    }
    ctx->pc = 0x1F8EDCu;
label_1f8edc:
    // 0x1f8edc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f8edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8ee0:
    // 0x1f8ee0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_1f8ee4:
    if (ctx->pc == 0x1F8EE4u) {
        ctx->pc = 0x1F8EE4u;
            // 0x1f8ee4: 0xc7a30110  lwc1        $f3, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F8EE8u;
        goto label_1f8ee8;
    }
    ctx->pc = 0x1F8EE0u;
    {
        const bool branch_taken_0x1f8ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8ee0) {
            ctx->pc = 0x1F8EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8EE0u;
            // 0x1f8ee4: 0xc7a30110  lwc1        $f3, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8F08u;
            goto label_1f8f08;
        }
    }
    ctx->pc = 0x1F8EE8u;
label_1f8ee8:
    // 0x1f8ee8: 0x0  nop
    ctx->pc = 0x1f8ee8u;
    // NOP
label_1f8eec:
    // 0x1f8eec: 0x0  nop
    ctx->pc = 0x1f8eecu;
    // NOP
label_1f8ef0:
    // 0x1f8ef0: 0x46030004  c1          0x30004
    ctx->pc = 0x1f8ef0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1f8ef4:
    // 0x1f8ef4: 0xe6270010  swc1        $f7, 0x10($s1)
    ctx->pc = 0x1f8ef4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f8ef8:
    // 0x1f8ef8: 0xe6260014  swc1        $f6, 0x14($s1)
    ctx->pc = 0x1f8ef8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f8efc:
    // 0x1f8efc: 0xe6250018  swc1        $f5, 0x18($s1)
    ctx->pc = 0x1f8efcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1f8f00:
    // 0x1f8f00: 0x10000030  b           . + 4 + (0x30 << 2)
label_1f8f04:
    if (ctx->pc == 0x1F8F04u) {
        ctx->pc = 0x1F8F04u;
            // 0x1f8f04: 0xe624001c  swc1        $f4, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x1F8F08u;
        goto label_1f8f08;
    }
    ctx->pc = 0x1F8F00u;
    {
        const bool branch_taken_0x1f8f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F00u;
            // 0x1f8f04: 0xe624001c  swc1        $f4, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f00) {
            ctx->pc = 0x1F8FC4u;
            goto label_1f8fc4;
        }
    }
    ctx->pc = 0x1F8F08u;
label_1f8f08:
    // 0x1f8f08: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1f8f0c:
    // 0x1f8f0c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x1f8f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8f10:
    // 0x1f8f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f14:
    // 0x1f8f14: 0xc7a70114  lwc1        $f7, 0x114($sp)
    ctx->pc = 0x1f8f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f8f18:
    // 0x1f8f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8f1c:
    // 0x1f8f1c: 0xc7a60104  lwc1        $f6, 0x104($sp)
    ctx->pc = 0x1f8f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8f20:
    // 0x1f8f20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f8f24:
    // 0x1f8f24: 0x46021a01  sub.s       $f8, $f3, $f2
    ctx->pc = 0x1f8f24u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f8f28:
    // 0x1f8f28: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x1f8f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8f2c:
    // 0x1f8f2c: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x1f8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8f30:
    // 0x1f8f30: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x1f8f30u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f8f34:
    // 0x1f8f34: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1f8f34u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f8f38:
    // 0x1f8f38: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x1f8f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8f3c:
    // 0x1f8f3c: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x1f8f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8f40:
    // 0x1f8f40: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x1f8f40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f8f44:
    // 0x1f8f44: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x1f8f44u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f8f48:
    // 0x1f8f48: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1f8f48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f8f4c:
    // 0x1f8f4c: 0xe7a400e8  swc1        $f4, 0xE8($sp)
    ctx->pc = 0x1f8f4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f8f50:
    // 0x1f8f50: 0xe7a200ec  swc1        $f2, 0xEC($sp)
    ctx->pc = 0x1f8f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f8f54:
    // 0x1f8f54: 0x46004145  abs.s       $f5, $f8
    ctx->pc = 0x1f8f54u;
    ctx->f[5] = FPU_ABS_S(ctx->f[8]);
label_1f8f58:
    // 0x1f8f58: 0x460030c5  abs.s       $f3, $f6
    ctx->pc = 0x1f8f58u;
    ctx->f[3] = FPU_ABS_S(ctx->f[6]);
label_1f8f5c:
    // 0x1f8f5c: 0x46002085  abs.s       $f2, $f4
    ctx->pc = 0x1f8f5cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[4]);
label_1f8f60:
    // 0x1f8f60: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x1f8f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8f64:
    // 0x1f8f64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1f8f68:
    if (ctx->pc == 0x1F8F68u) {
        ctx->pc = 0x1F8F6Cu;
        goto label_1f8f6c;
    }
    ctx->pc = 0x1F8F64u;
    {
        const bool branch_taken_0x1f8f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8f64) {
            ctx->pc = 0x1F8F78u;
            goto label_1f8f78;
        }
    }
    ctx->pc = 0x1F8F6Cu;
label_1f8f6c:
    // 0x1f8f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f8f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f70:
    // 0x1f8f70: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x1f8f70u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_1f8f74:
    // 0x1f8f74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f78:
    // 0x1f8f78: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x1f8f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8f7c:
    // 0x1f8f7c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1f8f80:
    if (ctx->pc == 0x1F8F80u) {
        ctx->pc = 0x1F8F80u;
            // 0x1f8f80: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1F8F84u;
        goto label_1f8f84;
    }
    ctx->pc = 0x1F8F7Cu;
    {
        const bool branch_taken_0x1f8f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8f7c) {
            ctx->pc = 0x1F8F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F7Cu;
            // 0x1f8f80: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8F8Cu;
            goto label_1f8f8c;
        }
    }
    ctx->pc = 0x1F8F84u;
label_1f8f84:
    // 0x1f8f84: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f8f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f88:
    // 0x1f8f88: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1f8f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f8f8c:
    // 0x1f8f8c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1f8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1f8f90:
    // 0x1f8f90: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1f8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_1f8f94:
    // 0x1f8f94: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1f8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1f8f98:
    // 0x1f8f98: 0xc46200e0  lwc1        $f2, 0xE0($v1)
    ctx->pc = 0x1f8f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8f9c:
    // 0x1f8f9c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1f8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1f8fa0:
    // 0x1f8fa0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f8fa4:
    // 0x1f8fa4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1f8fa8:
    // 0x1f8fa8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1f8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1f8fac:
    // 0x1f8fac: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1f8facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f8fb0:
    // 0x1f8fb0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1f8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1f8fb4:
    // 0x1f8fb4: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x1f8fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f8fb8:
    // 0x1f8fb8: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1f8fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8fbc:
    // 0x1f8fbc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1f8fbcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1f8fc0:
    // 0x1f8fc0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1f8fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1f8fc4:
    // 0x1f8fc4: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x1f8fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8fc8:
    // 0x1f8fc8: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1f8fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8fcc:
    // 0x1f8fcc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1f8fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8fd0:
    // 0x1f8fd0: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f8fd0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1f8fd4:
    // 0x1f8fd4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f8fd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_1f8fd8:
    // 0x1f8fd8: 0x460210dc  madd.s      $f3, $f2, $f2
    ctx->pc = 0x1f8fd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1f8fdc:
    // 0x1f8fdc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1f8fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f8fe0:
    // 0x1f8fe0: 0x0  nop
    ctx->pc = 0x1f8fe0u;
    // NOP
label_1f8fe4:
    // 0x1f8fe4: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x1f8fe4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8fe8:
    // 0x1f8fe8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1f8fec:
    if (ctx->pc == 0x1F8FECu) {
        ctx->pc = 0x1F8FECu;
            // 0x1f8fec: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1F8FF0u;
        goto label_1f8ff0;
    }
    ctx->pc = 0x1F8FE8u;
    {
        const bool branch_taken_0x1f8fe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8FE8u;
            // 0x1f8fec: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fe8) {
            ctx->pc = 0x1F900Cu;
            goto label_1f900c;
        }
    }
    ctx->pc = 0x1F8FF0u;
label_1f8ff0:
    // 0x1f8ff0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f8ff4:
    // 0x1f8ff4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f8ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f8ff8:
    // 0x1f8ff8: 0x0  nop
    ctx->pc = 0x1f8ff8u;
    // NOP
label_1f8ffc:
    // 0x1f8ffc: 0x46031116  rsqrt.s     $f4, $f2, $f3
    ctx->pc = 0x1f8ffcu;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[2]);
label_1f9000:
    // 0x1f9000: 0x0  nop
    ctx->pc = 0x1f9000u;
    // NOP
label_1f9004:
    // 0x1f9004: 0x0  nop
    ctx->pc = 0x1f9004u;
    // NOP
label_1f9008:
    // 0x1f9008: 0x0  nop
    ctx->pc = 0x1f9008u;
    // NOP
label_1f900c:
    // 0x1f900c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1f900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9010:
    // 0x1f9010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9014:
    // 0x1f9014: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1f9014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f9018:
    // 0x1f9018: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f9018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1f901c:
    // 0x1f901c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1f901cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f9020:
    // 0x1f9020: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1f9020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9024:
    // 0x1f9024: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f9024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f9028:
    // 0x1f9028: 0x0  nop
    ctx->pc = 0x1f9028u;
    // NOP
label_1f902c:
    // 0x1f902c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f902cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1f9030:
    // 0x1f9030: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1f9030u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1f9034:
    // 0x1f9034: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1f9034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9038:
    // 0x1f9038: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f9038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1f903c:
    // 0x1f903c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x1f903cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1f9040:
    // 0x1f9040: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1f9040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9044:
    // 0x1f9044: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f9044u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1f9048:
    // 0x1f9048: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1f9048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1f904c:
    // 0x1f904c: 0xc6c50010  lwc1        $f5, 0x10($s6)
    ctx->pc = 0x1f904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9050:
    // 0x1f9050: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1f9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9054:
    // 0x1f9054: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x1f9054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9058:
    // 0x1f9058: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1f9058u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1f905c:
    // 0x1f905c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x1f905cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1f9060:
    // 0x1f9060: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1f9060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1f9064:
    // 0x1f9064: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f9064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1f9068:
    // 0x1f9068: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1f9068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f906c:
    // 0x1f906c: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1f906cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9070:
    // 0x1f9070: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f9070u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f9074:
    // 0x1f9074: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f9074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f9078:
    // 0x1f9078: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1f9078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1f907c:
    // 0x1f907c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9080:
    // 0x1f9080: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1f9080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9084:
    // 0x1f9084: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f9084u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f9088:
    // 0x1f9088: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f9088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f908c:
    // 0x1f908c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f908cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1f9090:
    // 0x1f9090: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1f9090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9094:
    // 0x1f9094: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x1f9094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9098:
    // 0x1f9098: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f9098u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f909c:
    // 0x1f909c: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f909cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f90a0:
    // 0x1f90a0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1f90a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f90a4:
    // 0x1f90a4: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x1f90a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1f90a8:
    // 0x1f90a8: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
label_1f90ac:
    if (ctx->pc == 0x1F90ACu) {
        ctx->pc = 0x1F90ACu;
            // 0x1f90ac: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1F90B0u;
        goto label_1f90b0;
    }
    ctx->pc = 0x1F90A8u;
    {
        const bool branch_taken_0x1f90a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f90a8) {
            ctx->pc = 0x1F90ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90A8u;
            // 0x1f90ac: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9114u;
            goto label_1f9114;
        }
    }
    ctx->pc = 0x1F90B0u;
label_1f90b0:
    // 0x1f90b0: 0x9684000c  lhu         $a0, 0xC($s4)
    ctx->pc = 0x1f90b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1f90b4:
    // 0x1f90b4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f90b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f90b8:
    // 0x1f90b8: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
label_1f90bc:
    if (ctx->pc == 0x1F90BCu) {
        ctx->pc = 0x1F90BCu;
            // 0x1f90bc: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1F90C0u;
        goto label_1f90c0;
    }
    ctx->pc = 0x1F90B8u;
    {
        const bool branch_taken_0x1f90b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f90b8) {
            ctx->pc = 0x1F90BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90B8u;
            // 0x1f90bc: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F90F0u;
            goto label_1f90f0;
        }
    }
    ctx->pc = 0x1F90C0u;
label_1f90c0:
    // 0x1f90c0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f90c4:
    // 0x1f90c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f90c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f90c8:
    // 0x1f90c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f90c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f90cc:
    // 0x1f90cc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1f90ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f90d0:
    // 0x1f90d0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f90d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f90d4:
    // 0x1f90d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f90d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f90d8:
    // 0x1f90d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f90d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f90dc:
    // 0x1f90dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f90e0:
    // 0x1f90e0: 0x320f809  jalr        $t9
label_1f90e4:
    if (ctx->pc == 0x1F90E4u) {
        ctx->pc = 0x1F90E4u;
            // 0x1f90e4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F90E8u;
        goto label_1f90e8;
    }
    ctx->pc = 0x1F90E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F90E8u);
        ctx->pc = 0x1F90E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90E0u;
            // 0x1f90e4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F90E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F90E8u; }
            if (ctx->pc != 0x1F90E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F90E8u;
label_1f90e8:
    // 0x1f90e8: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x1f90e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
label_1f90ec:
    // 0x1f90ec: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x1f90ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1f90f0:
    // 0x1f90f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f90f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f90f4:
    // 0x1f90f4: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_1f90f8:
    if (ctx->pc == 0x1F90F8u) {
        ctx->pc = 0x1F90FCu;
        goto label_1f90fc;
    }
    ctx->pc = 0x1F90F4u;
    {
        const bool branch_taken_0x1f90f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f90f4) {
            ctx->pc = 0x1F9148u;
            goto label_1f9148;
        }
    }
    ctx->pc = 0x1F90FCu;
label_1f90fc:
    // 0x1f90fc: 0xc07af98  jal         func_1EBE60
label_1f9100:
    if (ctx->pc == 0x1F9100u) {
        ctx->pc = 0x1F9100u;
            // 0x1f9100: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1F9104u;
        goto label_1f9104;
    }
    ctx->pc = 0x1F90FCu;
    SET_GPR_U32(ctx, 31, 0x1F9104u);
    ctx->pc = 0x1F9100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90FCu;
            // 0x1f9100: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE60u;
    if (runtime->hasFunction(0x1EBE60u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9104u; }
        if (ctx->pc != 0x1F9104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE60_0x1ebe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9104u; }
        if (ctx->pc != 0x1F9104u) { return; }
    }
    ctx->pc = 0x1F9104u;
label_1f9104:
    // 0x1f9104: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f9104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9108:
    // 0x1f9108: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1f9108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1f910c:
    // 0x1f910c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f9110:
    if (ctx->pc == 0x1F9110u) {
        ctx->pc = 0x1F9110u;
            // 0x1f9110: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1F9114u;
        goto label_1f9114;
    }
    ctx->pc = 0x1F910Cu;
    {
        const bool branch_taken_0x1f910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F910Cu;
            // 0x1f9110: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f910c) {
            ctx->pc = 0x1F9148u;
            goto label_1f9148;
        }
    }
    ctx->pc = 0x1F9114u;
label_1f9114:
    // 0x1f9114: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9118:
    // 0x1f9118: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1f911c:
    if (ctx->pc == 0x1F911Cu) {
        ctx->pc = 0x1F9120u;
        goto label_1f9120;
    }
    ctx->pc = 0x1F9118u;
    {
        const bool branch_taken_0x1f9118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9118) {
            ctx->pc = 0x1F9148u;
            goto label_1f9148;
        }
    }
    ctx->pc = 0x1F9120u;
label_1f9120:
    // 0x1f9120: 0xc07af94  jal         func_1EBE50
label_1f9124:
    if (ctx->pc == 0x1F9124u) {
        ctx->pc = 0x1F9124u;
            // 0x1f9124: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1F9128u;
        goto label_1f9128;
    }
    ctx->pc = 0x1F9120u;
    SET_GPR_U32(ctx, 31, 0x1F9128u);
    ctx->pc = 0x1F9124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9120u;
            // 0x1f9124: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE50u;
    if (runtime->hasFunction(0x1EBE50u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9128u; }
        if (ctx->pc != 0x1F9128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE50_0x1ebe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9128u; }
        if (ctx->pc != 0x1F9128u) { return; }
    }
    ctx->pc = 0x1F9128u;
label_1f9128:
    // 0x1f9128: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f9128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f912c:
    // 0x1f912c: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x1f912cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1f9130:
    // 0x1f9130: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9134:
    // 0x1f9134: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f9134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f9138:
    // 0x1f9138: 0x320f809  jalr        $t9
label_1f913c:
    if (ctx->pc == 0x1F913Cu) {
        ctx->pc = 0x1F913Cu;
            // 0x1f913c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9140u;
        goto label_1f9140;
    }
    ctx->pc = 0x1F9138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9140u);
        ctx->pc = 0x1F913Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9138u;
            // 0x1f913c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9140u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9140u; }
            if (ctx->pc != 0x1F9140u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9140u;
label_1f9140:
    // 0x1f9140: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9144:
    // 0x1f9144: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x1f9144u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_1f9148:
    // 0x1f9148: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f9148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f914c:
    // 0x1f914c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f914cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f9150:
    // 0x1f9150: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f9150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f9154:
    // 0x1f9154: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f9154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f9158:
    // 0x1f9158: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f915c:
    // 0x1f915c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f915cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f9160:
    // 0x1f9160: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f9164:
    if (ctx->pc == 0x1F9164u) {
        ctx->pc = 0x1F9164u;
            // 0x1f9164: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F9168u;
        goto label_1f9168;
    }
    ctx->pc = 0x1F9160u;
    {
        const bool branch_taken_0x1f9160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9160u;
            // 0x1f9164: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9160) {
            ctx->pc = 0x1F9190u;
            goto label_1f9190;
        }
    }
    ctx->pc = 0x1F9168u;
label_1f9168:
    // 0x1f9168: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f9168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f916c:
    // 0x1f916c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1f916cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1f9170:
    // 0x1f9170: 0x2463d8e8  addiu       $v1, $v1, -0x2718
    ctx->pc = 0x1f9170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957288));
label_1f9174:
    // 0x1f9174: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f9174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f9178:
    // 0x1f9178: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f9178u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f917c:
    // 0x1f917c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f917cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f9180:
    // 0x1f9180: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f9180u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f9184:
    // 0x1f9184: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f9184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f9188:
    // 0x1f9188: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f9188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f918c:
    // 0x1f918c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f918cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f9190:
    // 0x1f9190: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f9190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f9194:
    // 0x1f9194: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f9194u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f9198:
    // 0x1f9198: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f9198u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f919c:
    // 0x1f919c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f919cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f91a0:
    // 0x1f91a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f91a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f91a4:
    // 0x1f91a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f91a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f91a8:
    // 0x1f91a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f91a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f91ac:
    // 0x1f91ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f91acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f91b0:
    // 0x1f91b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f91b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f91b4:
    // 0x1f91b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f91b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f91b8:
    // 0x1f91b8: 0x3e00008  jr          $ra
label_1f91bc:
    if (ctx->pc == 0x1F91BCu) {
        ctx->pc = 0x1F91BCu;
            // 0x1f91bc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1F91C0u;
        goto label_1f91c0;
    }
    ctx->pc = 0x1F91B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F91BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91B8u;
            // 0x1f91bc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F91C0u;
label_1f91c0:
    // 0x1f91c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f91c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f91c4:
    // 0x1f91c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f91c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f91c8:
    // 0x1f91c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f91c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f91cc:
    // 0x1f91cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f91ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f91d0:
    // 0x1f91d0: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_1f91d4:
    if (ctx->pc == 0x1F91D4u) {
        ctx->pc = 0x1F91D4u;
            // 0x1f91d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F91D8u;
        goto label_1f91d8;
    }
    ctx->pc = 0x1F91D0u;
    {
        const bool branch_taken_0x1f91d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f91d0) {
            ctx->pc = 0x1F91D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91D0u;
            // 0x1f91d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9260u;
            goto label_1f9260;
        }
    }
    ctx->pc = 0x1F91D8u;
label_1f91d8:
    // 0x1f91d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f91dc:
    // 0x1f91dc: 0x2442dd90  addiu       $v0, $v0, -0x2270
    ctx->pc = 0x1f91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958480));
label_1f91e0:
    // 0x1f91e0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1f91e4:
    if (ctx->pc == 0x1F91E4u) {
        ctx->pc = 0x1F91E4u;
            // 0x1f91e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F91E8u;
        goto label_1f91e8;
    }
    ctx->pc = 0x1F91E0u;
    {
        const bool branch_taken_0x1f91e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91E0u;
            // 0x1f91e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91e0) {
            ctx->pc = 0x1F9234u;
            goto label_1f9234;
        }
    }
    ctx->pc = 0x1F91E8u;
label_1f91e8:
    // 0x1f91e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f91ec:
    // 0x1f91ec: 0x2442dd50  addiu       $v0, $v0, -0x22B0
    ctx->pc = 0x1f91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958416));
label_1f91f0:
    // 0x1f91f0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1f91f4:
    if (ctx->pc == 0x1F91F4u) {
        ctx->pc = 0x1F91F4u;
            // 0x1f91f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F91F8u;
        goto label_1f91f8;
    }
    ctx->pc = 0x1F91F0u;
    {
        const bool branch_taken_0x1f91f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91F0u;
            // 0x1f91f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91f0) {
            ctx->pc = 0x1F9234u;
            goto label_1f9234;
        }
    }
    ctx->pc = 0x1F91F8u;
label_1f91f8:
    // 0x1f91f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f91fc:
    // 0x1f91fc: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1f91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1f9200:
    // 0x1f9200: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1f9204:
    if (ctx->pc == 0x1F9204u) {
        ctx->pc = 0x1F9204u;
            // 0x1f9204: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F9208u;
        goto label_1f9208;
    }
    ctx->pc = 0x1F9200u;
    {
        const bool branch_taken_0x1f9200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9200u;
            // 0x1f9204: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9200) {
            ctx->pc = 0x1F9234u;
            goto label_1f9234;
        }
    }
    ctx->pc = 0x1F9208u;
label_1f9208:
    // 0x1f9208: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f920c:
    // 0x1f920c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f9210:
    // 0x1f9210: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1f9214:
    if (ctx->pc == 0x1F9214u) {
        ctx->pc = 0x1F9214u;
            // 0x1f9214: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F9218u;
        goto label_1f9218;
    }
    ctx->pc = 0x1F9210u;
    {
        const bool branch_taken_0x1f9210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9210u;
            // 0x1f9214: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9210) {
            ctx->pc = 0x1F9234u;
            goto label_1f9234;
        }
    }
    ctx->pc = 0x1F9218u;
label_1f9218:
    // 0x1f9218: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f921c:
    // 0x1f921c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f9220:
    // 0x1f9220: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1f9224:
    if (ctx->pc == 0x1F9224u) {
        ctx->pc = 0x1F9224u;
            // 0x1f9224: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F9228u;
        goto label_1f9228;
    }
    ctx->pc = 0x1F9220u;
    {
        const bool branch_taken_0x1f9220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9220u;
            // 0x1f9224: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9220) {
            ctx->pc = 0x1F9234u;
            goto label_1f9234;
        }
    }
    ctx->pc = 0x1F9228u;
label_1f9228:
    // 0x1f9228: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f922c:
    // 0x1f922c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f9230:
    // 0x1f9230: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f9230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f9234:
    // 0x1f9234: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f9234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1f9238:
    // 0x1f9238: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f9238u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f923c:
    // 0x1f923c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1f9240:
    if (ctx->pc == 0x1F9240u) {
        ctx->pc = 0x1F9244u;
        goto label_1f9244;
    }
    ctx->pc = 0x1F923Cu;
    {
        const bool branch_taken_0x1f923c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f923c) {
            ctx->pc = 0x1F925Cu;
            goto label_1f925c;
        }
    }
    ctx->pc = 0x1F9244u;
label_1f9244:
    // 0x1f9244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f9244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f9248:
    // 0x1f9248: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f9248u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1f924c:
    // 0x1f924c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f9250:
    // 0x1f9250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9254:
    // 0x1f9254: 0xc0a7ab4  jal         func_29EAD0
label_1f9258:
    if (ctx->pc == 0x1F9258u) {
        ctx->pc = 0x1F9258u;
            // 0x1f9258: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F925Cu;
        goto label_1f925c;
    }
    ctx->pc = 0x1F9254u;
    SET_GPR_U32(ctx, 31, 0x1F925Cu);
    ctx->pc = 0x1F9258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9254u;
            // 0x1f9258: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F925Cu; }
        if (ctx->pc != 0x1F925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F925Cu; }
        if (ctx->pc != 0x1F925Cu) { return; }
    }
    ctx->pc = 0x1F925Cu;
label_1f925c:
    // 0x1f925c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f925cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9260:
    // 0x1f9260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9264:
    // 0x1f9264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9268:
    // 0x1f9268: 0x3e00008  jr          $ra
label_1f926c:
    if (ctx->pc == 0x1F926Cu) {
        ctx->pc = 0x1F926Cu;
            // 0x1f926c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9270u;
        goto label_1f9270;
    }
    ctx->pc = 0x1F9268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9268u;
            // 0x1f926c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9270u;
label_1f9270:
    // 0x1f9270: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1f9270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1f9274:
    // 0x1f9274: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f9274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f9278:
    // 0x1f9278: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f9278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1f927c:
    // 0x1f927c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1f927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1f9280:
    // 0x1f9280: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1f9280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1f9284:
    // 0x1f9284: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1f9284u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f9288:
    // 0x1f9288: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1f9288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1f928c:
    // 0x1f928c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1f928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1f9290:
    // 0x1f9290: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1f9290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f9294:
    // 0x1f9294: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f9294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1f9298:
    // 0x1f9298: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f9298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f929c:
    // 0x1f929c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f92a0:
    // 0x1f92a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f92a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f92a4:
    // 0x1f92a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f92a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f92a8:
    // 0x1f92a8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f92ac:
    // 0x1f92ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f92acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f92b0:
    // 0x1f92b0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1f92b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f92b4:
    // 0x1f92b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f92b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f92b8:
    // 0x1f92b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f92b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f92bc:
    // 0x1f92bc: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f92c0:
    // 0x1f92c0: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1f92c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f92c4:
    // 0x1f92c4: 0x8d120000  lw          $s2, 0x0($t0)
    ctx->pc = 0x1f92c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f92c8:
    // 0x1f92c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f92cc:
    // 0x1f92cc: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f92d0:
    // 0x1f92d0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f92d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f92d4:
    // 0x1f92d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f92d8:
    if (ctx->pc == 0x1F92D8u) {
        ctx->pc = 0x1F92D8u;
            // 0x1f92d8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F92DCu;
        goto label_1f92dc;
    }
    ctx->pc = 0x1F92D4u;
    {
        const bool branch_taken_0x1f92d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92D4u;
            // 0x1f92d8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92d4) {
            ctx->pc = 0x1F9304u;
            goto label_1f9304;
        }
    }
    ctx->pc = 0x1F92DCu;
label_1f92dc:
    // 0x1f92dc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f92e0:
    // 0x1f92e0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f92e4:
    // 0x1f92e4: 0x2442d8f0  addiu       $v0, $v0, -0x2710
    ctx->pc = 0x1f92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957296));
label_1f92e8:
    // 0x1f92e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f92ec:
    // 0x1f92ec: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f92f0:
    // 0x1f92f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f92f4:
    // 0x1f92f4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f92f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f92f8:
    // 0x1f92f8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f92fc:
    // 0x1f92fc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f92fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f9300:
    // 0x1f9300: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f9300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f9304:
    // 0x1f9304: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1f9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1f9308:
    // 0x1f9308: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f930c:
    // 0x1f930c: 0x8eb70000  lw          $s7, 0x0($s5)
    ctx->pc = 0x1f930cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f9310:
    // 0x1f9310: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1f9314:
    // 0x1f9314: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x1f9314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1f9318:
    // 0x1f9318: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1f9318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1f931c:
    // 0x1f931c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1f931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f9320:
    // 0x1f9320: 0x26e30020  addiu       $v1, $s7, 0x20
    ctx->pc = 0x1f9320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_1f9324:
    // 0x1f9324: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1f9324u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f9328:
    // 0x1f9328: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1f9328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1f932c:
    // 0x1f932c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1f9330:
    // 0x1f9330: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f9330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9334:
    // 0x1f9334: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f9334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9338:
    // 0x1f9338: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f9338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f933c:
    // 0x1f933c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f933cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f9340:
    // 0x1f9340: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f9340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9344:
    // 0x1f9344: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1f9344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f9348:
    // 0x1f9348: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1f9348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f934c:
    // 0x1f934c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x1f934cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f9350:
    // 0x1f9350: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1f9350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f9354:
    // 0x1f9354: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f9354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f9358:
    // 0x1f9358: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x1f9358u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f935c:
    // 0x1f935c: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1f935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f9360:
    // 0x1f9360: 0xe7ab00d4  swc1        $f11, 0xD4($sp)
    ctx->pc = 0x1f9360u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f9364:
    // 0x1f9364: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1f9364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f9368:
    // 0x1f9368: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x1f9368u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f936c:
    // 0x1f936c: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1f936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f9370:
    // 0x1f9370: 0xe7a900dc  swc1        $f9, 0xDC($sp)
    ctx->pc = 0x1f9370u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f9374:
    // 0x1f9374: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1f9374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f9378:
    // 0x1f9378: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x1f9378u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f937c:
    // 0x1f937c: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1f937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f9380:
    // 0x1f9380: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x1f9380u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f9384:
    // 0x1f9384: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1f9384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9388:
    // 0x1f9388: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x1f9388u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f938c:
    // 0x1f938c: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1f938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9390:
    // 0x1f9390: 0xe7a500ec  swc1        $f5, 0xEC($sp)
    ctx->pc = 0x1f9390u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f9394:
    // 0x1f9394: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1f9394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9398:
    // 0x1f9398: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x1f9398u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f939c:
    // 0x1f939c: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1f939cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f93a0:
    // 0x1f93a0: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x1f93a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f93a4:
    // 0x1f93a4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f93a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f93a8:
    // 0x1f93a8: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f93a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f93ac:
    // 0x1f93ac: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1f93acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f93b0:
    // 0x1f93b0: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1f93b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f93b4:
    // 0x1f93b4: 0xc7ab00c0  lwc1        $f11, 0xC0($sp)
    ctx->pc = 0x1f93b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f93b8:
    // 0x1f93b8: 0xc7aa00d0  lwc1        $f10, 0xD0($sp)
    ctx->pc = 0x1f93b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f93bc:
    // 0x1f93bc: 0xc7a900f0  lwc1        $f9, 0xF0($sp)
    ctx->pc = 0x1f93bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f93c0:
    // 0x1f93c0: 0xc7a800e4  lwc1        $f8, 0xE4($sp)
    ctx->pc = 0x1f93c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f93c4:
    // 0x1f93c4: 0xc7a700c4  lwc1        $f7, 0xC4($sp)
    ctx->pc = 0x1f93c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f93c8:
    // 0x1f93c8: 0xc7a600d4  lwc1        $f6, 0xD4($sp)
    ctx->pc = 0x1f93c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f93cc:
    // 0x1f93cc: 0xc7a500f4  lwc1        $f5, 0xF4($sp)
    ctx->pc = 0x1f93ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f93d0:
    // 0x1f93d0: 0xc7a400e8  lwc1        $f4, 0xE8($sp)
    ctx->pc = 0x1f93d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f93d4:
    // 0x1f93d4: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x1f93d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f93d8:
    // 0x1f93d8: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1f93d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f93dc:
    // 0x1f93dc: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1f93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f93e0:
    // 0x1f93e0: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1f93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f93e4:
    // 0x1f93e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f93e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1f93e8:
    // 0x1f93e8: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1f93e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f93ec:
    // 0x1f93ec: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1f93ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f93f0:
    // 0x1f93f0: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1f93f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1f93f4:
    // 0x1f93f4: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1f93f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1f93f8:
    // 0x1f93f8: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1f93f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1f93fc:
    // 0x1f93fc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1f93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1f9400:
    // 0x1f9400: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1f9400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1f9404:
    // 0x1f9404: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1f9404u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1f9408:
    // 0x1f9408: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f9408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f940c:
    // 0x1f940c: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1f940cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1f9410:
    // 0x1f9410: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1f9410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1f9414:
    // 0x1f9414: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1f9414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1f9418:
    // 0x1f9418: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1f9418u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1f941c:
    // 0x1f941c: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1f941cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1f9420:
    // 0x1f9420: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1f9420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1f9424:
    // 0x1f9424: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1f9424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1f9428:
    // 0x1f9428: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f9428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f942c:
    // 0x1f942c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1f942cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1f9430:
    // 0x1f9430: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1f9430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1f9434:
    // 0x1f9434: 0x4c1ffea  bgez        $a2, . + 4 + (-0x16 << 2)
label_1f9438:
    if (ctx->pc == 0x1F9438u) {
        ctx->pc = 0x1F9438u;
            // 0x1f9438: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->pc = 0x1F943Cu;
        goto label_1f943c;
    }
    ctx->pc = 0x1F9434u;
    {
        const bool branch_taken_0x1f9434 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1F9438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9434u;
            // 0x1f9438: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9434) {
            ctx->pc = 0x1F93E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f93e0;
        }
    }
    ctx->pc = 0x1F943Cu;
label_1f943c:
    // 0x1f943c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9440:
    // 0x1f9440: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1f9440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1f9444:
    // 0x1f9444: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1f9444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1f9448:
    // 0x1f9448: 0xc09e998  jal         func_27A660
label_1f944c:
    if (ctx->pc == 0x1F944Cu) {
        ctx->pc = 0x1F944Cu;
            // 0x1f944c: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1F9450u;
        goto label_1f9450;
    }
    ctx->pc = 0x1F9448u;
    SET_GPR_U32(ctx, 31, 0x1F9450u);
    ctx->pc = 0x1F944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9448u;
            // 0x1f944c: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A660u;
    if (runtime->hasFunction(0x27A660u)) {
        auto targetFn = runtime->lookupFunction(0x27A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9450u; }
        if (ctx->pc != 0x1F9450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A660_0x27a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9450u; }
        if (ctx->pc != 0x1F9450u) { return; }
    }
    ctx->pc = 0x1F9450u;
label_1f9450:
    // 0x1f9450: 0xc7a60110  lwc1        $f6, 0x110($sp)
    ctx->pc = 0x1f9450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f9454:
    // 0x1f9454: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1f9454u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f9458:
    // 0x1f9458: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x1f9458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f945c:
    // 0x1f945c: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x1f945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9460:
    // 0x1f9460: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x1f9460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9464:
    // 0x1f9464: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x1f9464u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f9468:
    // 0x1f9468: 0x46042981  sub.s       $f6, $f5, $f4
    ctx->pc = 0x1f9468u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f946c:
    // 0x1f946c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x1f946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9470:
    // 0x1f9470: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1f9470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9474:
    // 0x1f9474: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x1f9474u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_1f9478:
    // 0x1f9478: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x1f9478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f947c:
    // 0x1f947c: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x1f947cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f9480:
    // 0x1f9480: 0xc6e10010  lwc1        $f1, 0x10($s7)
    ctx->pc = 0x1f9480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9484:
    // 0x1f9484: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x1f9484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9488:
    // 0x1f9488: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x1f9488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f948c:
    // 0x1f948c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f948cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1f9490:
    // 0x1f9490: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f9490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f9494:
    // 0x1f9494: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x1f9494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9498:
    // 0x1f9498: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1f9498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1f949c:
    // 0x1f949c: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1f949cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1f94a0:
    // 0x1f94a0: 0x4607381e  madda.s     $f7, $f7
    ctx->pc = 0x1f94a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
label_1f94a4:
    // 0x1f94a4: 0x460528dc  madd.s      $f3, $f5, $f5
    ctx->pc = 0x1f94a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_1f94a8:
    // 0x1f94a8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1f94a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f94ac:
    // 0x1f94ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f94acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f94b0:
    // 0x1f94b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f94b4:
    if (ctx->pc == 0x1F94B4u) {
        ctx->pc = 0x1F94B8u;
        goto label_1f94b8;
    }
    ctx->pc = 0x1F94B0u;
    {
        const bool branch_taken_0x1f94b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f94b0) {
            ctx->pc = 0x1F94C0u;
            goto label_1f94c0;
        }
    }
    ctx->pc = 0x1F94B8u;
label_1f94b8:
    // 0x1f94b8: 0x10000074  b           . + 4 + (0x74 << 2)
label_1f94bc:
    if (ctx->pc == 0x1F94BCu) {
        ctx->pc = 0x1F94BCu;
            // 0x1f94bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F94C0u;
        goto label_1f94c0;
    }
    ctx->pc = 0x1F94B8u;
    {
        const bool branch_taken_0x1f94b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94B8u;
            // 0x1f94bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94b8) {
            ctx->pc = 0x1F968Cu;
            goto label_1f968c;
        }
    }
    ctx->pc = 0x1F94C0u;
label_1f94c0:
    // 0x1f94c0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f94c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f94c4:
    // 0x1f94c4: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_1f94c8:
    if (ctx->pc == 0x1F94C8u) {
        ctx->pc = 0x1F94C8u;
            // 0x1f94c8: 0xc7a30130  lwc1        $f3, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F94CCu;
        goto label_1f94cc;
    }
    ctx->pc = 0x1F94C4u;
    {
        const bool branch_taken_0x1f94c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f94c4) {
            ctx->pc = 0x1F94C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94C4u;
            // 0x1f94c8: 0xc7a30130  lwc1        $f3, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F94ECu;
            goto label_1f94ec;
        }
    }
    ctx->pc = 0x1F94CCu;
label_1f94cc:
    // 0x1f94cc: 0x0  nop
    ctx->pc = 0x1f94ccu;
    // NOP
label_1f94d0:
    // 0x1f94d0: 0x0  nop
    ctx->pc = 0x1f94d0u;
    // NOP
label_1f94d4:
    // 0x1f94d4: 0x46030004  c1          0x30004
    ctx->pc = 0x1f94d4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1f94d8:
    // 0x1f94d8: 0xe6270010  swc1        $f7, 0x10($s1)
    ctx->pc = 0x1f94d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f94dc:
    // 0x1f94dc: 0xe6260014  swc1        $f6, 0x14($s1)
    ctx->pc = 0x1f94dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f94e0:
    // 0x1f94e0: 0xe6250018  swc1        $f5, 0x18($s1)
    ctx->pc = 0x1f94e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1f94e4:
    // 0x1f94e4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1f94e8:
    if (ctx->pc == 0x1F94E8u) {
        ctx->pc = 0x1F94E8u;
            // 0x1f94e8: 0xe624001c  swc1        $f4, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x1F94ECu;
        goto label_1f94ec;
    }
    ctx->pc = 0x1F94E4u;
    {
        const bool branch_taken_0x1f94e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94E4u;
            // 0x1f94e8: 0xe624001c  swc1        $f4, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94e4) {
            ctx->pc = 0x1F95A8u;
            goto label_1f95a8;
        }
    }
    ctx->pc = 0x1F94ECu;
label_1f94ec:
    // 0x1f94ec: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1f94ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1f94f0:
    // 0x1f94f0: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x1f94f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f94f4:
    // 0x1f94f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f94f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f94f8:
    // 0x1f94f8: 0xc7a70134  lwc1        $f7, 0x134($sp)
    ctx->pc = 0x1f94f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f94fc:
    // 0x1f94fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9500:
    // 0x1f9500: 0xc7a60124  lwc1        $f6, 0x124($sp)
    ctx->pc = 0x1f9500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f9504:
    // 0x1f9504: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f9504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f9508:
    // 0x1f9508: 0x46021a01  sub.s       $f8, $f3, $f2
    ctx->pc = 0x1f9508u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f950c:
    // 0x1f950c: 0xc7a50138  lwc1        $f5, 0x138($sp)
    ctx->pc = 0x1f950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9510:
    // 0x1f9510: 0xc7a40128  lwc1        $f4, 0x128($sp)
    ctx->pc = 0x1f9510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9514:
    // 0x1f9514: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x1f9514u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f9518:
    // 0x1f9518: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1f9518u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f951c:
    // 0x1f951c: 0xc7a3013c  lwc1        $f3, 0x13C($sp)
    ctx->pc = 0x1f951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9520:
    // 0x1f9520: 0xc7a2012c  lwc1        $f2, 0x12C($sp)
    ctx->pc = 0x1f9520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9524:
    // 0x1f9524: 0xe7a80100  swc1        $f8, 0x100($sp)
    ctx->pc = 0x1f9524u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f9528:
    // 0x1f9528: 0xe7a60104  swc1        $f6, 0x104($sp)
    ctx->pc = 0x1f9528u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f952c:
    // 0x1f952c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1f952cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f9530:
    // 0x1f9530: 0xe7a40108  swc1        $f4, 0x108($sp)
    ctx->pc = 0x1f9530u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f9534:
    // 0x1f9534: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x1f9534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f9538:
    // 0x1f9538: 0x46004145  abs.s       $f5, $f8
    ctx->pc = 0x1f9538u;
    ctx->f[5] = FPU_ABS_S(ctx->f[8]);
label_1f953c:
    // 0x1f953c: 0x460030c5  abs.s       $f3, $f6
    ctx->pc = 0x1f953cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[6]);
label_1f9540:
    // 0x1f9540: 0x46002085  abs.s       $f2, $f4
    ctx->pc = 0x1f9540u;
    ctx->f[2] = FPU_ABS_S(ctx->f[4]);
label_1f9544:
    // 0x1f9544: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x1f9544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9548:
    // 0x1f9548: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1f954c:
    if (ctx->pc == 0x1F954Cu) {
        ctx->pc = 0x1F9550u;
        goto label_1f9550;
    }
    ctx->pc = 0x1F9548u;
    {
        const bool branch_taken_0x1f9548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9548) {
            ctx->pc = 0x1F955Cu;
            goto label_1f955c;
        }
    }
    ctx->pc = 0x1F9550u;
label_1f9550:
    // 0x1f9550: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f9550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9554:
    // 0x1f9554: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x1f9554u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_1f9558:
    // 0x1f9558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f955c:
    // 0x1f955c: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x1f955cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9560:
    // 0x1f9560: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1f9564:
    if (ctx->pc == 0x1F9564u) {
        ctx->pc = 0x1F9564u;
            // 0x1f9564: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1F9568u;
        goto label_1f9568;
    }
    ctx->pc = 0x1F9560u;
    {
        const bool branch_taken_0x1f9560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9560) {
            ctx->pc = 0x1F9564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9560u;
            // 0x1f9564: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9570u;
            goto label_1f9570;
        }
    }
    ctx->pc = 0x1F9568u;
label_1f9568:
    // 0x1f9568: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f9568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f956c:
    // 0x1f956c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1f956cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f9570:
    // 0x1f9570: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1f9570u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1f9574:
    // 0x1f9574: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1f9574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_1f9578:
    // 0x1f9578: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1f9578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1f957c:
    // 0x1f957c: 0xc4620100  lwc1        $f2, 0x100($v1)
    ctx->pc = 0x1f957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9580:
    // 0x1f9580: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1f9580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1f9584:
    // 0x1f9584: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f9584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f9588:
    // 0x1f9588: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f9588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1f958c:
    // 0x1f958c: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1f958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1f9590:
    // 0x1f9590: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1f9590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f9594:
    // 0x1f9594: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1f9594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1f9598:
    // 0x1f9598: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x1f9598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f959c:
    // 0x1f959c: 0xc4820100  lwc1        $f2, 0x100($a0)
    ctx->pc = 0x1f959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f95a0:
    // 0x1f95a0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1f95a0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1f95a4:
    // 0x1f95a4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1f95a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1f95a8:
    // 0x1f95a8: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x1f95a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f95ac:
    // 0x1f95ac: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1f95acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f95b0:
    // 0x1f95b0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1f95b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f95b4:
    // 0x1f95b4: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f95b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1f95b8:
    // 0x1f95b8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f95b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_1f95bc:
    // 0x1f95bc: 0x460210dc  madd.s      $f3, $f2, $f2
    ctx->pc = 0x1f95bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1f95c0:
    // 0x1f95c0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1f95c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f95c4:
    // 0x1f95c4: 0x0  nop
    ctx->pc = 0x1f95c4u;
    // NOP
label_1f95c8:
    // 0x1f95c8: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x1f95c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f95cc:
    // 0x1f95cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1f95d0:
    if (ctx->pc == 0x1F95D0u) {
        ctx->pc = 0x1F95D0u;
            // 0x1f95d0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1F95D4u;
        goto label_1f95d4;
    }
    ctx->pc = 0x1F95CCu;
    {
        const bool branch_taken_0x1f95cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F95D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F95CCu;
            // 0x1f95d0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95cc) {
            ctx->pc = 0x1F95F0u;
            goto label_1f95f0;
        }
    }
    ctx->pc = 0x1F95D4u;
label_1f95d4:
    // 0x1f95d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f95d8:
    // 0x1f95d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f95d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f95dc:
    // 0x1f95dc: 0x0  nop
    ctx->pc = 0x1f95dcu;
    // NOP
label_1f95e0:
    // 0x1f95e0: 0x46031116  rsqrt.s     $f4, $f2, $f3
    ctx->pc = 0x1f95e0u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[2]);
label_1f95e4:
    // 0x1f95e4: 0x0  nop
    ctx->pc = 0x1f95e4u;
    // NOP
label_1f95e8:
    // 0x1f95e8: 0x0  nop
    ctx->pc = 0x1f95e8u;
    // NOP
label_1f95ec:
    // 0x1f95ec: 0x0  nop
    ctx->pc = 0x1f95ecu;
    // NOP
label_1f95f0:
    // 0x1f95f0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1f95f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f95f4:
    // 0x1f95f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f95f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f95f8:
    // 0x1f95f8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1f95f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f95fc:
    // 0x1f95fc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f95fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1f9600:
    // 0x1f9600: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1f9600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f9604:
    // 0x1f9604: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1f9604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9608:
    // 0x1f9608: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f9608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f960c:
    // 0x1f960c: 0x0  nop
    ctx->pc = 0x1f960cu;
    // NOP
label_1f9610:
    // 0x1f9610: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f9610u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1f9614:
    // 0x1f9614: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1f9614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1f9618:
    // 0x1f9618: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1f9618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f961c:
    // 0x1f961c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f961cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1f9620:
    // 0x1f9620: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x1f9620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1f9624:
    // 0x1f9624: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1f9624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9628:
    // 0x1f9628: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1f9628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1f962c:
    // 0x1f962c: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1f962cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1f9630:
    // 0x1f9630: 0xc6e50010  lwc1        $f5, 0x10($s7)
    ctx->pc = 0x1f9630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9634:
    // 0x1f9634: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1f9634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9638:
    // 0x1f9638: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x1f9638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f963c:
    // 0x1f963c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1f963cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1f9640:
    // 0x1f9640: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x1f9640u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1f9644:
    // 0x1f9644: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1f9644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1f9648:
    // 0x1f9648: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f9648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1f964c:
    // 0x1f964c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1f964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9650:
    // 0x1f9650: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1f9650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9654:
    // 0x1f9654: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f9654u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f9658:
    // 0x1f9658: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f9658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f965c:
    // 0x1f965c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1f965cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1f9660:
    // 0x1f9660: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f9660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9664:
    // 0x1f9664: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1f9664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9668:
    // 0x1f9668: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f9668u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f966c:
    // 0x1f966c: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f966cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f9670:
    // 0x1f9670: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f9670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1f9674:
    // 0x1f9674: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1f9674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9678:
    // 0x1f9678: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x1f9678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f967c:
    // 0x1f967c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f967cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f9680:
    // 0x1f9680: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f9680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f9684:
    // 0x1f9684: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1f9684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f9688:
    // 0x1f9688: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x1f9688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1f968c:
    // 0x1f968c: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
label_1f9690:
    if (ctx->pc == 0x1F9690u) {
        ctx->pc = 0x1F9690u;
            // 0x1f9690: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1F9694u;
        goto label_1f9694;
    }
    ctx->pc = 0x1F968Cu;
    {
        const bool branch_taken_0x1f968c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f968c) {
            ctx->pc = 0x1F9690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F968Cu;
            // 0x1f9690: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F96F8u;
            goto label_1f96f8;
        }
    }
    ctx->pc = 0x1F9694u;
label_1f9694:
    // 0x1f9694: 0x9684000c  lhu         $a0, 0xC($s4)
    ctx->pc = 0x1f9694u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1f9698:
    // 0x1f9698: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f969c:
    // 0x1f969c: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
label_1f96a0:
    if (ctx->pc == 0x1F96A0u) {
        ctx->pc = 0x1F96A0u;
            // 0x1f96a0: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1F96A4u;
        goto label_1f96a4;
    }
    ctx->pc = 0x1F969Cu;
    {
        const bool branch_taken_0x1f969c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f969c) {
            ctx->pc = 0x1F96A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F969Cu;
            // 0x1f96a0: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F96D4u;
            goto label_1f96d4;
        }
    }
    ctx->pc = 0x1F96A4u;
label_1f96a4:
    // 0x1f96a4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f96a8:
    // 0x1f96a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f96a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f96ac:
    // 0x1f96ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f96acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f96b0:
    // 0x1f96b0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1f96b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f96b4:
    // 0x1f96b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1f96b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f96b8:
    // 0x1f96b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f96b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f96bc:
    // 0x1f96bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f96bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f96c0:
    // 0x1f96c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f96c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f96c4:
    // 0x1f96c4: 0x320f809  jalr        $t9
label_1f96c8:
    if (ctx->pc == 0x1F96C8u) {
        ctx->pc = 0x1F96C8u;
            // 0x1f96c8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F96CCu;
        goto label_1f96cc;
    }
    ctx->pc = 0x1F96C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F96CCu);
        ctx->pc = 0x1F96C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96C4u;
            // 0x1f96c8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F96CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F96CCu; }
            if (ctx->pc != 0x1F96CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1F96CCu;
label_1f96cc:
    // 0x1f96cc: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x1f96ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
label_1f96d0:
    // 0x1f96d0: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x1f96d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1f96d4:
    // 0x1f96d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f96d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f96d8:
    // 0x1f96d8: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_1f96dc:
    if (ctx->pc == 0x1F96DCu) {
        ctx->pc = 0x1F96E0u;
        goto label_1f96e0;
    }
    ctx->pc = 0x1F96D8u;
    {
        const bool branch_taken_0x1f96d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f96d8) {
            ctx->pc = 0x1F972Cu;
            goto label_1f972c;
        }
    }
    ctx->pc = 0x1F96E0u;
label_1f96e0:
    // 0x1f96e0: 0xc07af98  jal         func_1EBE60
label_1f96e4:
    if (ctx->pc == 0x1F96E4u) {
        ctx->pc = 0x1F96E4u;
            // 0x1f96e4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1F96E8u;
        goto label_1f96e8;
    }
    ctx->pc = 0x1F96E0u;
    SET_GPR_U32(ctx, 31, 0x1F96E8u);
    ctx->pc = 0x1F96E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96E0u;
            // 0x1f96e4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE60u;
    if (runtime->hasFunction(0x1EBE60u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96E8u; }
        if (ctx->pc != 0x1F96E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE60_0x1ebe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96E8u; }
        if (ctx->pc != 0x1F96E8u) { return; }
    }
    ctx->pc = 0x1F96E8u;
label_1f96e8:
    // 0x1f96e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f96e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f96ec:
    // 0x1f96ec: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1f96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1f96f0:
    // 0x1f96f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f96f4:
    if (ctx->pc == 0x1F96F4u) {
        ctx->pc = 0x1F96F4u;
            // 0x1f96f4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1F96F8u;
        goto label_1f96f8;
    }
    ctx->pc = 0x1F96F0u;
    {
        const bool branch_taken_0x1f96f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96F0u;
            // 0x1f96f4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96f0) {
            ctx->pc = 0x1F972Cu;
            goto label_1f972c;
        }
    }
    ctx->pc = 0x1F96F8u;
label_1f96f8:
    // 0x1f96f8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f96f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f96fc:
    // 0x1f96fc: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1f9700:
    if (ctx->pc == 0x1F9700u) {
        ctx->pc = 0x1F9704u;
        goto label_1f9704;
    }
    ctx->pc = 0x1F96FCu;
    {
        const bool branch_taken_0x1f96fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f96fc) {
            ctx->pc = 0x1F972Cu;
            goto label_1f972c;
        }
    }
    ctx->pc = 0x1F9704u;
label_1f9704:
    // 0x1f9704: 0xc07af94  jal         func_1EBE50
label_1f9708:
    if (ctx->pc == 0x1F9708u) {
        ctx->pc = 0x1F9708u;
            // 0x1f9708: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x1F970Cu;
        goto label_1f970c;
    }
    ctx->pc = 0x1F9704u;
    SET_GPR_U32(ctx, 31, 0x1F970Cu);
    ctx->pc = 0x1F9708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9704u;
            // 0x1f9708: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE50u;
    if (runtime->hasFunction(0x1EBE50u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F970Cu; }
        if (ctx->pc != 0x1F970Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE50_0x1ebe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F970Cu; }
        if (ctx->pc != 0x1F970Cu) { return; }
    }
    ctx->pc = 0x1F970Cu;
label_1f970c:
    // 0x1f970c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f970cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f9710:
    // 0x1f9710: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x1f9710u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1f9714:
    // 0x1f9714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9718:
    // 0x1f9718: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f9718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f971c:
    // 0x1f971c: 0x320f809  jalr        $t9
label_1f9720:
    if (ctx->pc == 0x1F9720u) {
        ctx->pc = 0x1F9720u;
            // 0x1f9720: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9724u;
        goto label_1f9724;
    }
    ctx->pc = 0x1F971Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9724u);
        ctx->pc = 0x1F9720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F971Cu;
            // 0x1f9720: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9724u; }
            if (ctx->pc != 0x1F9724u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9724u;
label_1f9724:
    // 0x1f9724: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9728:
    // 0x1f9728: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x1f9728u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_1f972c:
    // 0x1f972c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f972cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f9730:
    // 0x1f9730: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f9730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f9734:
    // 0x1f9734: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f9734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f9738:
    // 0x1f9738: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f9738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f973c:
    // 0x1f973c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f9740:
    // 0x1f9740: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f9740u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f9744:
    // 0x1f9744: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f9748:
    if (ctx->pc == 0x1F9748u) {
        ctx->pc = 0x1F9748u;
            // 0x1f9748: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F974Cu;
        goto label_1f974c;
    }
    ctx->pc = 0x1F9744u;
    {
        const bool branch_taken_0x1f9744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9744u;
            // 0x1f9748: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9744) {
            ctx->pc = 0x1F9774u;
            goto label_1f9774;
        }
    }
    ctx->pc = 0x1F974Cu;
label_1f974c:
    // 0x1f974c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f9750:
    // 0x1f9750: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1f9750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1f9754:
    // 0x1f9754: 0x2463d8e8  addiu       $v1, $v1, -0x2718
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957288));
label_1f9758:
    // 0x1f9758: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f9758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f975c:
    // 0x1f975c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f9760:
    // 0x1f9760: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f9760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f9764:
    // 0x1f9764: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f9768:
    // 0x1f9768: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f9768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f976c:
    // 0x1f976c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f976cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f9770:
    // 0x1f9770: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f9770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f9774:
    // 0x1f9774: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f9774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f9778:
    // 0x1f9778: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x1f9778u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f977c:
    // 0x1f977c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1f9780:
    if (ctx->pc == 0x1F9780u) {
        ctx->pc = 0x1F9784u;
        goto label_1f9784;
    }
    ctx->pc = 0x1F977Cu;
    {
        const bool branch_taken_0x1f977c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f977c) {
            ctx->pc = 0x1F9820u;
            goto label_1f9820;
        }
    }
    ctx->pc = 0x1F9784u;
label_1f9784:
    // 0x1f9784: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f9784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f9788:
    // 0x1f9788: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f9788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f978c:
    // 0x1f978c: 0xc643001c  lwc1        $f3, 0x1C($s2)
    ctx->pc = 0x1f978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9790:
    // 0x1f9790: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1f9790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9794:
    // 0x1f9794: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f9794u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f9798:
    // 0x1f9798: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f9798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f979c:
    // 0x1f979c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f979cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1f97a0:
    // 0x1f97a0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f97a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f97a4:
    // 0x1f97a4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1f97a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f97a8:
    // 0x1f97a8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f97a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f97ac:
    // 0x1f97ac: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f97acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f97b0:
    // 0x1f97b0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1f97b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1f97b4:
    // 0x1f97b4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f97b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f97b8:
    // 0x1f97b8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1f97b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f97bc:
    // 0x1f97bc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f97bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f97c0:
    // 0x1f97c0: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f97c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f97c4:
    // 0x1f97c4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f97c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1f97c8:
    // 0x1f97c8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1f97c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f97cc:
    // 0x1f97cc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1f97ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f97d0:
    // 0x1f97d0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f97d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f97d4:
    // 0x1f97d4: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f97d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f97d8:
    // 0x1f97d8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1f97d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1f97dc:
    // 0x1f97dc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1f97dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f97e0:
    // 0x1f97e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f97e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f97e4:
    // 0x1f97e4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1f97e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1f97e8:
    // 0x1f97e8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1f97e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f97ec:
    // 0x1f97ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f97ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f97f0:
    // 0x1f97f0: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1f97f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1f97f4:
    // 0x1f97f4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1f97f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f97f8:
    // 0x1f97f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f97f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f97fc:
    // 0x1f97fc: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1f97fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_1f9800:
    // 0x1f9800: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1f9800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9804:
    // 0x1f9804: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1f9804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_1f9808:
    // 0x1f9808: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f9808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f980c:
    // 0x1f980c: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1f980cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1f9810:
    // 0x1f9810: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1f9810u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f9814:
    // 0x1f9814: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1f9818:
    if (ctx->pc == 0x1F9818u) {
        ctx->pc = 0x1F9818u;
            // 0x1f9818: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1F981Cu;
        goto label_1f981c;
    }
    ctx->pc = 0x1F9814u;
    {
        const bool branch_taken_0x1f9814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9814) {
            ctx->pc = 0x1F9818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9814u;
            // 0x1f9818: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F978Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F981Cu;
label_1f981c:
    // 0x1f981c: 0x0  nop
    ctx->pc = 0x1f981cu;
    // NOP
label_1f9820:
    // 0x1f9820: 0xc6603030  lwc1        $f0, 0x3030($s3)
    ctx->pc = 0x1f9820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9824:
    // 0x1f9824: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f9824u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9828:
    // 0x1f9828: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1f982c:
    if (ctx->pc == 0x1F982Cu) {
        ctx->pc = 0x1F982Cu;
            // 0x1f982c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x1F9830u;
        goto label_1f9830;
    }
    ctx->pc = 0x1F9828u;
    {
        const bool branch_taken_0x1f9828 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9828) {
            ctx->pc = 0x1F982Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9828u;
            // 0x1f982c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F98D0u;
            goto label_1f98d0;
        }
    }
    ctx->pc = 0x1F9830u;
label_1f9830:
    // 0x1f9830: 0xc6603020  lwc1        $f0, 0x3020($s3)
    ctx->pc = 0x1f9830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9834:
    // 0x1f9834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f9834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f9838:
    // 0x1f9838: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f9838u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f983c:
    // 0x1f983c: 0xe6603020  swc1        $f0, 0x3020($s3)
    ctx->pc = 0x1f983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12320), bits); }
label_1f9840:
    // 0x1f9840: 0xc6603024  lwc1        $f0, 0x3024($s3)
    ctx->pc = 0x1f9840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9844:
    // 0x1f9844: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f9844u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f9848:
    // 0x1f9848: 0xe6603024  swc1        $f0, 0x3024($s3)
    ctx->pc = 0x1f9848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12324), bits); }
label_1f984c:
    // 0x1f984c: 0xc6603028  lwc1        $f0, 0x3028($s3)
    ctx->pc = 0x1f984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9850:
    // 0x1f9850: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f9850u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f9854:
    // 0x1f9854: 0xe6603028  swc1        $f0, 0x3028($s3)
    ctx->pc = 0x1f9854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12328), bits); }
label_1f9858:
    // 0x1f9858: 0xc660302c  lwc1        $f0, 0x302C($s3)
    ctx->pc = 0x1f9858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f985c:
    // 0x1f985c: 0xe660302c  swc1        $f0, 0x302C($s3)
    ctx->pc = 0x1f985cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12332), bits); }
label_1f9860:
    // 0x1f9860: 0x92653042  lbu         $a1, 0x3042($s3)
    ctx->pc = 0x1f9860u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12354)));
label_1f9864:
    // 0x1f9864: 0x92643043  lbu         $a0, 0x3043($s3)
    ctx->pc = 0x1f9864u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12355)));
label_1f9868:
    // 0x1f9868: 0xa2643042  sb          $a0, 0x3042($s3)
    ctx->pc = 0x1f9868u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1f986c:
    // 0x1f986c: 0xa2653043  sb          $a1, 0x3043($s3)
    ctx->pc = 0x1f986cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1f9870:
    // 0x1f9870: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x1f9870u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_1f9874:
    // 0x1f9874: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x1f9874u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_1f9878:
    // 0x1f9878: 0xa2643040  sb          $a0, 0x3040($s3)
    ctx->pc = 0x1f9878u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1f987c:
    // 0x1f987c: 0xa2653041  sb          $a1, 0x3041($s3)
    ctx->pc = 0x1f987cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1f9880:
    // 0x1f9880: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x1f9880u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_1f9884:
    // 0x1f9884: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x1f9884u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_1f9888:
    // 0x1f9888: 0x96663038  lhu         $a2, 0x3038($s3)
    ctx->pc = 0x1f9888u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12344)));
label_1f988c:
    // 0x1f988c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f9890:
    // 0x1f9890: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f9890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f9894:
    // 0x1f9894: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1f9894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f9898:
    // 0x1f9898: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x1f9898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1f989c:
    // 0x1f989c: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1f989cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1f98a0:
    // 0x1f98a0: 0xa6643038  sh          $a0, 0x3038($s3)
    ctx->pc = 0x1f98a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1f98a4:
    // 0x1f98a4: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1f98a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1f98a8:
    // 0x1f98a8: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x1f98a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_1f98ac:
    // 0x1f98ac: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x1f98acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_1f98b0:
    // 0x1f98b0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1f98b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1f98b4:
    // 0x1f98b4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1f98b8:
    if (ctx->pc == 0x1F98B8u) {
        ctx->pc = 0x1F98BCu;
        goto label_1f98bc;
    }
    ctx->pc = 0x1F98B4u;
    {
        const bool branch_taken_0x1f98b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f98b4) {
            ctx->pc = 0x1F98CCu;
            goto label_1f98cc;
        }
    }
    ctx->pc = 0x1F98BCu;
label_1f98bc:
    // 0x1f98bc: 0x9664303a  lhu         $a0, 0x303A($s3)
    ctx->pc = 0x1f98bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12346)));
label_1f98c0:
    // 0x1f98c0: 0x9663303c  lhu         $v1, 0x303C($s3)
    ctx->pc = 0x1f98c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12348)));
label_1f98c4:
    // 0x1f98c4: 0xa663303a  sh          $v1, 0x303A($s3)
    ctx->pc = 0x1f98c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1f98c8:
    // 0x1f98c8: 0xa664303c  sh          $a0, 0x303C($s3)
    ctx->pc = 0x1f98c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1f98cc:
    // 0x1f98cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f98ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1f98d0:
    // 0x1f98d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f98d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f98d4:
    // 0x1f98d4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1f98d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f98d8:
    // 0x1f98d8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1f98d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f98dc:
    // 0x1f98dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1f98dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f98e0:
    // 0x1f98e0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1f98e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f98e4:
    // 0x1f98e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f98e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f98e8:
    // 0x1f98e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f98e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f98ec:
    // 0x1f98ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f98ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f98f0:
    // 0x1f98f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f98f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f98f4:
    // 0x1f98f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f98f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f98f8:
    // 0x1f98f8: 0x3e00008  jr          $ra
label_1f98fc:
    if (ctx->pc == 0x1F98FCu) {
        ctx->pc = 0x1F98FCu;
            // 0x1f98fc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1F9900u;
        goto label_1f9900;
    }
    ctx->pc = 0x1F98F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F98FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98F8u;
            // 0x1f98fc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9900u;
label_1f9900:
    // 0x1f9900: 0x3e00008  jr          $ra
label_1f9904:
    if (ctx->pc == 0x1F9904u) {
        ctx->pc = 0x1F9908u;
        goto label_1f9908;
    }
    ctx->pc = 0x1F9900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9908u;
label_1f9908:
    // 0x1f9908: 0x0  nop
    ctx->pc = 0x1f9908u;
    // NOP
label_1f990c:
    // 0x1f990c: 0x0  nop
    ctx->pc = 0x1f990cu;
    // NOP
label_1f9910:
    // 0x1f9910: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f9914:
    // 0x1f9914: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f9914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f9918:
    // 0x1f9918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f991c:
    // 0x1f991c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1f991cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9920:
    // 0x1f9920: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9924:
    // 0x1f9924: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f9924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f9928:
    // 0x1f9928: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f992c:
    // 0x1f992c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1f992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1f9930:
    // 0x1f9930: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1f9930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1f9934:
    // 0x1f9934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9938:
    // 0x1f9938: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1f9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f993c:
    // 0x1f993c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1f993cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f9940:
    // 0x1f9940: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1f9940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f9944:
    // 0x1f9944: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1f9944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_1f9948:
    // 0x1f9948: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1f9948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1f994c:
    // 0x1f994c: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1f994cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_1f9950:
    // 0x1f9950: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1f9950u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1f9954:
    // 0x1f9954: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1f9954u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
label_1f9958:
    // 0x1f9958: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1f9958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f995c:
    // 0x1f995c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1f995cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f9960:
    // 0x1f9960: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1f9960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f9964:
    // 0x1f9964: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1f9964u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1f9968:
    // 0x1f9968: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1f9968u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f996c:
    // 0x1f996c: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1f996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f9970:
    // 0x1f9970: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1f9970u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1f9974:
    // 0x1f9974: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1f9974u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f9978:
    // 0x1f9978: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1f9978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f997c:
    // 0x1f997c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1f997cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1f9980:
    // 0x1f9980: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1f9980u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f9984:
    // 0x1f9984: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1f9984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9988:
    // 0x1f9988: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1f9988u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1f998c:
    // 0x1f998c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f998cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f9990:
    // 0x1f9990: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1f9990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9994:
    // 0x1f9994: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1f9994u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f9998:
    // 0x1f9998: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1f9998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1f999c:
    // 0x1f999c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1f999cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1f99a0:
    // 0x1f99a0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1f99a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f99a4:
    // 0x1f99a4: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f99a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f99a8:
    // 0x1f99a8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1f99a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1f99ac:
    // 0x1f99ac: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f99acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f99b0:
    // 0x1f99b0: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1f99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
label_1f99b4:
    // 0x1f99b4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f99b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f99b8:
    // 0x1f99b8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1f99bc:
    // 0x1f99bc: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1f99bcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f99c0:
    // 0x1f99c0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1f99c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f99c4:
    // 0x1f99c4: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1f99c4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f99c8:
    // 0x1f99c8: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
label_1f99cc:
    if (ctx->pc == 0x1F99CCu) {
        ctx->pc = 0x1F99CCu;
            // 0x1f99cc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1F99D0u;
        goto label_1f99d0;
    }
    ctx->pc = 0x1F99C8u;
    {
        const bool branch_taken_0x1f99c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99C8u;
            // 0x1f99cc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99c8) {
            ctx->pc = 0x1F9A14u;
            goto label_1f9a14;
        }
    }
    ctx->pc = 0x1F99D0u;
label_1f99d0:
    // 0x1f99d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f99d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f99d4:
    // 0x1f99d4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1f99d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
label_1f99d8:
    // 0x1f99d8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f99d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1f99dc:
    // 0x1f99dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f99dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f99e0:
    // 0x1f99e0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f99e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f99e4:
    // 0x1f99e4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f99e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f99e8:
    // 0x1f99e8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1f99e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f99ec:
    // 0x1f99ec: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f99ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f99f0:
    // 0x1f99f0: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1f99f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1f99f4:
    // 0x1f99f4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1f99f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f99f8:
    // 0x1f99f8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1f99f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1f99fc:
    // 0x1f99fc: 0xc07c364  jal         func_1F0D90
label_1f9a00:
    if (ctx->pc == 0x1F9A00u) {
        ctx->pc = 0x1F9A00u;
            // 0x1f9a00: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1F9A04u;
        goto label_1f9a04;
    }
    ctx->pc = 0x1F99FCu;
    SET_GPR_U32(ctx, 31, 0x1F9A04u);
    ctx->pc = 0x1F9A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99FCu;
            // 0x1f9a00: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D90u;
    if (runtime->hasFunction(0x1F0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1F0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A04u; }
        if (ctx->pc != 0x1F9A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0D90_0x1f0d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A04u; }
        if (ctx->pc != 0x1F9A04u) { return; }
    }
    ctx->pc = 0x1F9A04u;
label_1f9a04:
    // 0x1f9a04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f9a08:
    // 0x1f9a08: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f9a0c:
    // 0x1f9a0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f9a10:
    if (ctx->pc == 0x1F9A10u) {
        ctx->pc = 0x1F9A10u;
            // 0x1f9a10: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1F9A14u;
        goto label_1f9a14;
    }
    ctx->pc = 0x1F9A0Cu;
    {
        const bool branch_taken_0x1f9a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A0Cu;
            // 0x1f9a10: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a0c) {
            ctx->pc = 0x1F9A2Cu;
            goto label_1f9a2c;
        }
    }
    ctx->pc = 0x1F9A14u;
label_1f9a14:
    // 0x1f9a14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a18:
    // 0x1f9a18: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f9a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f9a1c:
    // 0x1f9a1c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f9a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a20:
    // 0x1f9a20: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f9a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f9a24:
    // 0x1f9a24: 0xc07c364  jal         func_1F0D90
label_1f9a28:
    if (ctx->pc == 0x1F9A28u) {
        ctx->pc = 0x1F9A28u;
            // 0x1f9a28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A2Cu;
        goto label_1f9a2c;
    }
    ctx->pc = 0x1F9A24u;
    SET_GPR_U32(ctx, 31, 0x1F9A2Cu);
    ctx->pc = 0x1F9A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A24u;
            // 0x1f9a28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D90u;
    if (runtime->hasFunction(0x1F0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1F0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A2Cu; }
        if (ctx->pc != 0x1F9A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0D90_0x1f0d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A2Cu; }
        if (ctx->pc != 0x1F9A2Cu) { return; }
    }
    ctx->pc = 0x1F9A2Cu;
label_1f9a2c:
    // 0x1f9a2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f9a30:
    // 0x1f9a30: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f9a34:
    // 0x1f9a34: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1f9a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1f9a38:
    // 0x1f9a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9a3c:
    // 0x1f9a3c: 0x3e00008  jr          $ra
label_1f9a40:
    if (ctx->pc == 0x1F9A40u) {
        ctx->pc = 0x1F9A40u;
            // 0x1f9a40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F9A44u;
        goto label_1f9a44;
    }
    ctx->pc = 0x1F9A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A3Cu;
            // 0x1f9a40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9A44u;
label_1f9a44:
    // 0x1f9a44: 0x0  nop
    ctx->pc = 0x1f9a44u;
    // NOP
label_1f9a48:
    // 0x1f9a48: 0x0  nop
    ctx->pc = 0x1f9a48u;
    // NOP
label_1f9a4c:
    // 0x1f9a4c: 0x0  nop
    ctx->pc = 0x1f9a4cu;
    // NOP
label_1f9a50:
    // 0x1f9a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f9a54:
    // 0x1f9a54: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f9a58:
    // 0x1f9a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9a5c:
    // 0x1f9a5c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f9a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f9a60:
    // 0x1f9a60: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1f9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1f9a64:
    // 0x1f9a64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9a68:
    // 0x1f9a68: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f9a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a6c:
    // 0x1f9a6c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1f9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1f9a70:
    // 0x1f9a70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f9a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a74:
    // 0x1f9a74: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1f9a78:
    // 0x1f9a78: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f9a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a7c:
    // 0x1f9a7c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f9a80:
    // 0x1f9a80: 0xc07e15c  jal         func_1F8570
label_1f9a84:
    if (ctx->pc == 0x1F9A84u) {
        ctx->pc = 0x1F9A84u;
            // 0x1f9a84: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F9A88u;
        goto label_1f9a88;
    }
    ctx->pc = 0x1F9A80u;
    SET_GPR_U32(ctx, 31, 0x1F9A88u);
    ctx->pc = 0x1F9A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A80u;
            // 0x1f9a84: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8570u;
    if (runtime->hasFunction(0x1F8570u)) {
        auto targetFn = runtime->lookupFunction(0x1F8570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A88u; }
        if (ctx->pc != 0x1F9A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8570_0x1f8570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A88u; }
        if (ctx->pc != 0x1F9A88u) { return; }
    }
    ctx->pc = 0x1F9A88u;
label_1f9a88:
    // 0x1f9a88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f9a8c:
    // 0x1f9a8c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f9a90:
    // 0x1f9a90: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f9a94:
    // 0x1f9a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9a98:
    // 0x1f9a98: 0x3e00008  jr          $ra
label_1f9a9c:
    if (ctx->pc == 0x1F9A9Cu) {
        ctx->pc = 0x1F9A9Cu;
            // 0x1f9a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9AA0u;
        goto label_1f9aa0;
    }
    ctx->pc = 0x1F9A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A98u;
            // 0x1f9a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9AA0u;
label_1f9aa0:
    // 0x1f9aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f9aa4:
    // 0x1f9aa4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f9aa8:
    // 0x1f9aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9aac:
    // 0x1f9aac: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f9aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f9ab0:
    // 0x1f9ab0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1f9ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1f9ab4:
    // 0x1f9ab4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9ab8:
    // 0x1f9ab8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1f9ab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9abc:
    // 0x1f9abc: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1f9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1f9ac0:
    // 0x1f9ac0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f9ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f9ac4:
    // 0x1f9ac4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1f9ac8:
    // 0x1f9ac8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1f9ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f9acc:
    // 0x1f9acc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f9accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f9ad0:
    // 0x1f9ad0: 0xc07e040  jal         func_1F8100
label_1f9ad4:
    if (ctx->pc == 0x1F9AD4u) {
        ctx->pc = 0x1F9AD4u;
            // 0x1f9ad4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F9AD8u;
        goto label_1f9ad8;
    }
    ctx->pc = 0x1F9AD0u;
    SET_GPR_U32(ctx, 31, 0x1F9AD8u);
    ctx->pc = 0x1F9AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AD0u;
            // 0x1f9ad4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8100u;
    if (runtime->hasFunction(0x1F8100u)) {
        auto targetFn = runtime->lookupFunction(0x1F8100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AD8u; }
        if (ctx->pc != 0x1F9AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8100_0x1f8100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AD8u; }
        if (ctx->pc != 0x1F9AD8u) { return; }
    }
    ctx->pc = 0x1F9AD8u;
label_1f9ad8:
    // 0x1f9ad8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f9adc:
    // 0x1f9adc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f9ae0:
    // 0x1f9ae0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f9ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f9ae4:
    // 0x1f9ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9ae8:
    // 0x1f9ae8: 0x3e00008  jr          $ra
label_1f9aec:
    if (ctx->pc == 0x1F9AECu) {
        ctx->pc = 0x1F9AECu;
            // 0x1f9aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9AF0u;
        goto label_1f9af0;
    }
    ctx->pc = 0x1F9AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AE8u;
            // 0x1f9aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9AF0u;
label_1f9af0:
    // 0x1f9af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f9af4:
    // 0x1f9af4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f9af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9af8:
    // 0x1f9af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9afc:
    // 0x1f9afc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9b00:
    // 0x1f9b00: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1f9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1f9b04:
    // 0x1f9b04: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1f9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1f9b08:
    // 0x1f9b08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f9b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9b0c:
    // 0x1f9b0c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f9b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f9b10:
    // 0x1f9b10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f9b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f9b14:
    // 0x1f9b14: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1f9b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f9b18:
    // 0x1f9b18: 0xc07e278  jal         func_1F89E0
label_1f9b1c:
    if (ctx->pc == 0x1F9B1Cu) {
        ctx->pc = 0x1F9B1Cu;
            // 0x1f9b1c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F9B20u;
        goto label_1f9b20;
    }
    ctx->pc = 0x1F9B18u;
    SET_GPR_U32(ctx, 31, 0x1F9B20u);
    ctx->pc = 0x1F9B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B18u;
            // 0x1f9b1c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F89E0u;
    if (runtime->hasFunction(0x1F89E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F89E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B20u; }
        if (ctx->pc != 0x1F9B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F89E0_0x1f89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B20u; }
        if (ctx->pc != 0x1F9B20u) { return; }
    }
    ctx->pc = 0x1F9B20u;
label_1f9b20:
    // 0x1f9b20: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f9b24:
    // 0x1f9b24: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1f9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1f9b28:
    // 0x1f9b28: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f9b2c:
    // 0x1f9b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9b30:
    // 0x1f9b30: 0x3e00008  jr          $ra
label_1f9b34:
    if (ctx->pc == 0x1F9B34u) {
        ctx->pc = 0x1F9B34u;
            // 0x1f9b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9B38u;
        goto label_1f9b38;
    }
    ctx->pc = 0x1F9B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B30u;
            // 0x1f9b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9B38u;
label_1f9b38:
    // 0x1f9b38: 0x0  nop
    ctx->pc = 0x1f9b38u;
    // NOP
label_1f9b3c:
    // 0x1f9b3c: 0x0  nop
    ctx->pc = 0x1f9b3cu;
    // NOP
label_1f9b40:
    // 0x1f9b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f9b44:
    // 0x1f9b44: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f9b44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9b48:
    // 0x1f9b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9b4c:
    // 0x1f9b4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9b50:
    // 0x1f9b50: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1f9b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1f9b54:
    // 0x1f9b54: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1f9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1f9b58:
    // 0x1f9b58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f9b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f9b5c:
    // 0x1f9b5c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f9b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f9b60:
    // 0x1f9b60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f9b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f9b64:
    // 0x1f9b64: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1f9b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f9b68:
    // 0x1f9b68: 0xc07e31c  jal         func_1F8C70
label_1f9b6c:
    if (ctx->pc == 0x1F9B6Cu) {
        ctx->pc = 0x1F9B6Cu;
            // 0x1f9b6c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F9B70u;
        goto label_1f9b70;
    }
    ctx->pc = 0x1F9B68u;
    SET_GPR_U32(ctx, 31, 0x1F9B70u);
    ctx->pc = 0x1F9B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B68u;
            // 0x1f9b6c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8C70u;
    goto label_1f8c70;
    ctx->pc = 0x1F9B70u;
label_1f9b70:
    // 0x1f9b70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f9b74:
    // 0x1f9b74: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1f9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1f9b78:
    // 0x1f9b78: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f9b7c:
    // 0x1f9b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9b80:
    // 0x1f9b80: 0x3e00008  jr          $ra
label_1f9b84:
    if (ctx->pc == 0x1F9B84u) {
        ctx->pc = 0x1F9B84u;
            // 0x1f9b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9B88u;
        goto label_1f9b88;
    }
    ctx->pc = 0x1F9B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B80u;
            // 0x1f9b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9B88u;
label_1f9b88:
    // 0x1f9b88: 0x0  nop
    ctx->pc = 0x1f9b88u;
    // NOP
label_1f9b8c:
    // 0x1f9b8c: 0x0  nop
    ctx->pc = 0x1f9b8cu;
    // NOP
}
