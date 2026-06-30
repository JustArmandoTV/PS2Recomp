#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C8D70
// Address: 0x3c8d70 - 0x3c93b0
void sub_003C8D70_0x3c8d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8D70_0x3c8d70");
#endif

    switch (ctx->pc) {
        case 0x3c8d70u: goto label_3c8d70;
        case 0x3c8d74u: goto label_3c8d74;
        case 0x3c8d78u: goto label_3c8d78;
        case 0x3c8d7cu: goto label_3c8d7c;
        case 0x3c8d80u: goto label_3c8d80;
        case 0x3c8d84u: goto label_3c8d84;
        case 0x3c8d88u: goto label_3c8d88;
        case 0x3c8d8cu: goto label_3c8d8c;
        case 0x3c8d90u: goto label_3c8d90;
        case 0x3c8d94u: goto label_3c8d94;
        case 0x3c8d98u: goto label_3c8d98;
        case 0x3c8d9cu: goto label_3c8d9c;
        case 0x3c8da0u: goto label_3c8da0;
        case 0x3c8da4u: goto label_3c8da4;
        case 0x3c8da8u: goto label_3c8da8;
        case 0x3c8dacu: goto label_3c8dac;
        case 0x3c8db0u: goto label_3c8db0;
        case 0x3c8db4u: goto label_3c8db4;
        case 0x3c8db8u: goto label_3c8db8;
        case 0x3c8dbcu: goto label_3c8dbc;
        case 0x3c8dc0u: goto label_3c8dc0;
        case 0x3c8dc4u: goto label_3c8dc4;
        case 0x3c8dc8u: goto label_3c8dc8;
        case 0x3c8dccu: goto label_3c8dcc;
        case 0x3c8dd0u: goto label_3c8dd0;
        case 0x3c8dd4u: goto label_3c8dd4;
        case 0x3c8dd8u: goto label_3c8dd8;
        case 0x3c8ddcu: goto label_3c8ddc;
        case 0x3c8de0u: goto label_3c8de0;
        case 0x3c8de4u: goto label_3c8de4;
        case 0x3c8de8u: goto label_3c8de8;
        case 0x3c8decu: goto label_3c8dec;
        case 0x3c8df0u: goto label_3c8df0;
        case 0x3c8df4u: goto label_3c8df4;
        case 0x3c8df8u: goto label_3c8df8;
        case 0x3c8dfcu: goto label_3c8dfc;
        case 0x3c8e00u: goto label_3c8e00;
        case 0x3c8e04u: goto label_3c8e04;
        case 0x3c8e08u: goto label_3c8e08;
        case 0x3c8e0cu: goto label_3c8e0c;
        case 0x3c8e10u: goto label_3c8e10;
        case 0x3c8e14u: goto label_3c8e14;
        case 0x3c8e18u: goto label_3c8e18;
        case 0x3c8e1cu: goto label_3c8e1c;
        case 0x3c8e20u: goto label_3c8e20;
        case 0x3c8e24u: goto label_3c8e24;
        case 0x3c8e28u: goto label_3c8e28;
        case 0x3c8e2cu: goto label_3c8e2c;
        case 0x3c8e30u: goto label_3c8e30;
        case 0x3c8e34u: goto label_3c8e34;
        case 0x3c8e38u: goto label_3c8e38;
        case 0x3c8e3cu: goto label_3c8e3c;
        case 0x3c8e40u: goto label_3c8e40;
        case 0x3c8e44u: goto label_3c8e44;
        case 0x3c8e48u: goto label_3c8e48;
        case 0x3c8e4cu: goto label_3c8e4c;
        case 0x3c8e50u: goto label_3c8e50;
        case 0x3c8e54u: goto label_3c8e54;
        case 0x3c8e58u: goto label_3c8e58;
        case 0x3c8e5cu: goto label_3c8e5c;
        case 0x3c8e60u: goto label_3c8e60;
        case 0x3c8e64u: goto label_3c8e64;
        case 0x3c8e68u: goto label_3c8e68;
        case 0x3c8e6cu: goto label_3c8e6c;
        case 0x3c8e70u: goto label_3c8e70;
        case 0x3c8e74u: goto label_3c8e74;
        case 0x3c8e78u: goto label_3c8e78;
        case 0x3c8e7cu: goto label_3c8e7c;
        case 0x3c8e80u: goto label_3c8e80;
        case 0x3c8e84u: goto label_3c8e84;
        case 0x3c8e88u: goto label_3c8e88;
        case 0x3c8e8cu: goto label_3c8e8c;
        case 0x3c8e90u: goto label_3c8e90;
        case 0x3c8e94u: goto label_3c8e94;
        case 0x3c8e98u: goto label_3c8e98;
        case 0x3c8e9cu: goto label_3c8e9c;
        case 0x3c8ea0u: goto label_3c8ea0;
        case 0x3c8ea4u: goto label_3c8ea4;
        case 0x3c8ea8u: goto label_3c8ea8;
        case 0x3c8eacu: goto label_3c8eac;
        case 0x3c8eb0u: goto label_3c8eb0;
        case 0x3c8eb4u: goto label_3c8eb4;
        case 0x3c8eb8u: goto label_3c8eb8;
        case 0x3c8ebcu: goto label_3c8ebc;
        case 0x3c8ec0u: goto label_3c8ec0;
        case 0x3c8ec4u: goto label_3c8ec4;
        case 0x3c8ec8u: goto label_3c8ec8;
        case 0x3c8eccu: goto label_3c8ecc;
        case 0x3c8ed0u: goto label_3c8ed0;
        case 0x3c8ed4u: goto label_3c8ed4;
        case 0x3c8ed8u: goto label_3c8ed8;
        case 0x3c8edcu: goto label_3c8edc;
        case 0x3c8ee0u: goto label_3c8ee0;
        case 0x3c8ee4u: goto label_3c8ee4;
        case 0x3c8ee8u: goto label_3c8ee8;
        case 0x3c8eecu: goto label_3c8eec;
        case 0x3c8ef0u: goto label_3c8ef0;
        case 0x3c8ef4u: goto label_3c8ef4;
        case 0x3c8ef8u: goto label_3c8ef8;
        case 0x3c8efcu: goto label_3c8efc;
        case 0x3c8f00u: goto label_3c8f00;
        case 0x3c8f04u: goto label_3c8f04;
        case 0x3c8f08u: goto label_3c8f08;
        case 0x3c8f0cu: goto label_3c8f0c;
        case 0x3c8f10u: goto label_3c8f10;
        case 0x3c8f14u: goto label_3c8f14;
        case 0x3c8f18u: goto label_3c8f18;
        case 0x3c8f1cu: goto label_3c8f1c;
        case 0x3c8f20u: goto label_3c8f20;
        case 0x3c8f24u: goto label_3c8f24;
        case 0x3c8f28u: goto label_3c8f28;
        case 0x3c8f2cu: goto label_3c8f2c;
        case 0x3c8f30u: goto label_3c8f30;
        case 0x3c8f34u: goto label_3c8f34;
        case 0x3c8f38u: goto label_3c8f38;
        case 0x3c8f3cu: goto label_3c8f3c;
        case 0x3c8f40u: goto label_3c8f40;
        case 0x3c8f44u: goto label_3c8f44;
        case 0x3c8f48u: goto label_3c8f48;
        case 0x3c8f4cu: goto label_3c8f4c;
        case 0x3c8f50u: goto label_3c8f50;
        case 0x3c8f54u: goto label_3c8f54;
        case 0x3c8f58u: goto label_3c8f58;
        case 0x3c8f5cu: goto label_3c8f5c;
        case 0x3c8f60u: goto label_3c8f60;
        case 0x3c8f64u: goto label_3c8f64;
        case 0x3c8f68u: goto label_3c8f68;
        case 0x3c8f6cu: goto label_3c8f6c;
        case 0x3c8f70u: goto label_3c8f70;
        case 0x3c8f74u: goto label_3c8f74;
        case 0x3c8f78u: goto label_3c8f78;
        case 0x3c8f7cu: goto label_3c8f7c;
        case 0x3c8f80u: goto label_3c8f80;
        case 0x3c8f84u: goto label_3c8f84;
        case 0x3c8f88u: goto label_3c8f88;
        case 0x3c8f8cu: goto label_3c8f8c;
        case 0x3c8f90u: goto label_3c8f90;
        case 0x3c8f94u: goto label_3c8f94;
        case 0x3c8f98u: goto label_3c8f98;
        case 0x3c8f9cu: goto label_3c8f9c;
        case 0x3c8fa0u: goto label_3c8fa0;
        case 0x3c8fa4u: goto label_3c8fa4;
        case 0x3c8fa8u: goto label_3c8fa8;
        case 0x3c8facu: goto label_3c8fac;
        case 0x3c8fb0u: goto label_3c8fb0;
        case 0x3c8fb4u: goto label_3c8fb4;
        case 0x3c8fb8u: goto label_3c8fb8;
        case 0x3c8fbcu: goto label_3c8fbc;
        case 0x3c8fc0u: goto label_3c8fc0;
        case 0x3c8fc4u: goto label_3c8fc4;
        case 0x3c8fc8u: goto label_3c8fc8;
        case 0x3c8fccu: goto label_3c8fcc;
        case 0x3c8fd0u: goto label_3c8fd0;
        case 0x3c8fd4u: goto label_3c8fd4;
        case 0x3c8fd8u: goto label_3c8fd8;
        case 0x3c8fdcu: goto label_3c8fdc;
        case 0x3c8fe0u: goto label_3c8fe0;
        case 0x3c8fe4u: goto label_3c8fe4;
        case 0x3c8fe8u: goto label_3c8fe8;
        case 0x3c8fecu: goto label_3c8fec;
        case 0x3c8ff0u: goto label_3c8ff0;
        case 0x3c8ff4u: goto label_3c8ff4;
        case 0x3c8ff8u: goto label_3c8ff8;
        case 0x3c8ffcu: goto label_3c8ffc;
        case 0x3c9000u: goto label_3c9000;
        case 0x3c9004u: goto label_3c9004;
        case 0x3c9008u: goto label_3c9008;
        case 0x3c900cu: goto label_3c900c;
        case 0x3c9010u: goto label_3c9010;
        case 0x3c9014u: goto label_3c9014;
        case 0x3c9018u: goto label_3c9018;
        case 0x3c901cu: goto label_3c901c;
        case 0x3c9020u: goto label_3c9020;
        case 0x3c9024u: goto label_3c9024;
        case 0x3c9028u: goto label_3c9028;
        case 0x3c902cu: goto label_3c902c;
        case 0x3c9030u: goto label_3c9030;
        case 0x3c9034u: goto label_3c9034;
        case 0x3c9038u: goto label_3c9038;
        case 0x3c903cu: goto label_3c903c;
        case 0x3c9040u: goto label_3c9040;
        case 0x3c9044u: goto label_3c9044;
        case 0x3c9048u: goto label_3c9048;
        case 0x3c904cu: goto label_3c904c;
        case 0x3c9050u: goto label_3c9050;
        case 0x3c9054u: goto label_3c9054;
        case 0x3c9058u: goto label_3c9058;
        case 0x3c905cu: goto label_3c905c;
        case 0x3c9060u: goto label_3c9060;
        case 0x3c9064u: goto label_3c9064;
        case 0x3c9068u: goto label_3c9068;
        case 0x3c906cu: goto label_3c906c;
        case 0x3c9070u: goto label_3c9070;
        case 0x3c9074u: goto label_3c9074;
        case 0x3c9078u: goto label_3c9078;
        case 0x3c907cu: goto label_3c907c;
        case 0x3c9080u: goto label_3c9080;
        case 0x3c9084u: goto label_3c9084;
        case 0x3c9088u: goto label_3c9088;
        case 0x3c908cu: goto label_3c908c;
        case 0x3c9090u: goto label_3c9090;
        case 0x3c9094u: goto label_3c9094;
        case 0x3c9098u: goto label_3c9098;
        case 0x3c909cu: goto label_3c909c;
        case 0x3c90a0u: goto label_3c90a0;
        case 0x3c90a4u: goto label_3c90a4;
        case 0x3c90a8u: goto label_3c90a8;
        case 0x3c90acu: goto label_3c90ac;
        case 0x3c90b0u: goto label_3c90b0;
        case 0x3c90b4u: goto label_3c90b4;
        case 0x3c90b8u: goto label_3c90b8;
        case 0x3c90bcu: goto label_3c90bc;
        case 0x3c90c0u: goto label_3c90c0;
        case 0x3c90c4u: goto label_3c90c4;
        case 0x3c90c8u: goto label_3c90c8;
        case 0x3c90ccu: goto label_3c90cc;
        case 0x3c90d0u: goto label_3c90d0;
        case 0x3c90d4u: goto label_3c90d4;
        case 0x3c90d8u: goto label_3c90d8;
        case 0x3c90dcu: goto label_3c90dc;
        case 0x3c90e0u: goto label_3c90e0;
        case 0x3c90e4u: goto label_3c90e4;
        case 0x3c90e8u: goto label_3c90e8;
        case 0x3c90ecu: goto label_3c90ec;
        case 0x3c90f0u: goto label_3c90f0;
        case 0x3c90f4u: goto label_3c90f4;
        case 0x3c90f8u: goto label_3c90f8;
        case 0x3c90fcu: goto label_3c90fc;
        case 0x3c9100u: goto label_3c9100;
        case 0x3c9104u: goto label_3c9104;
        case 0x3c9108u: goto label_3c9108;
        case 0x3c910cu: goto label_3c910c;
        case 0x3c9110u: goto label_3c9110;
        case 0x3c9114u: goto label_3c9114;
        case 0x3c9118u: goto label_3c9118;
        case 0x3c911cu: goto label_3c911c;
        case 0x3c9120u: goto label_3c9120;
        case 0x3c9124u: goto label_3c9124;
        case 0x3c9128u: goto label_3c9128;
        case 0x3c912cu: goto label_3c912c;
        case 0x3c9130u: goto label_3c9130;
        case 0x3c9134u: goto label_3c9134;
        case 0x3c9138u: goto label_3c9138;
        case 0x3c913cu: goto label_3c913c;
        case 0x3c9140u: goto label_3c9140;
        case 0x3c9144u: goto label_3c9144;
        case 0x3c9148u: goto label_3c9148;
        case 0x3c914cu: goto label_3c914c;
        case 0x3c9150u: goto label_3c9150;
        case 0x3c9154u: goto label_3c9154;
        case 0x3c9158u: goto label_3c9158;
        case 0x3c915cu: goto label_3c915c;
        case 0x3c9160u: goto label_3c9160;
        case 0x3c9164u: goto label_3c9164;
        case 0x3c9168u: goto label_3c9168;
        case 0x3c916cu: goto label_3c916c;
        case 0x3c9170u: goto label_3c9170;
        case 0x3c9174u: goto label_3c9174;
        case 0x3c9178u: goto label_3c9178;
        case 0x3c917cu: goto label_3c917c;
        case 0x3c9180u: goto label_3c9180;
        case 0x3c9184u: goto label_3c9184;
        case 0x3c9188u: goto label_3c9188;
        case 0x3c918cu: goto label_3c918c;
        case 0x3c9190u: goto label_3c9190;
        case 0x3c9194u: goto label_3c9194;
        case 0x3c9198u: goto label_3c9198;
        case 0x3c919cu: goto label_3c919c;
        case 0x3c91a0u: goto label_3c91a0;
        case 0x3c91a4u: goto label_3c91a4;
        case 0x3c91a8u: goto label_3c91a8;
        case 0x3c91acu: goto label_3c91ac;
        case 0x3c91b0u: goto label_3c91b0;
        case 0x3c91b4u: goto label_3c91b4;
        case 0x3c91b8u: goto label_3c91b8;
        case 0x3c91bcu: goto label_3c91bc;
        case 0x3c91c0u: goto label_3c91c0;
        case 0x3c91c4u: goto label_3c91c4;
        case 0x3c91c8u: goto label_3c91c8;
        case 0x3c91ccu: goto label_3c91cc;
        case 0x3c91d0u: goto label_3c91d0;
        case 0x3c91d4u: goto label_3c91d4;
        case 0x3c91d8u: goto label_3c91d8;
        case 0x3c91dcu: goto label_3c91dc;
        case 0x3c91e0u: goto label_3c91e0;
        case 0x3c91e4u: goto label_3c91e4;
        case 0x3c91e8u: goto label_3c91e8;
        case 0x3c91ecu: goto label_3c91ec;
        case 0x3c91f0u: goto label_3c91f0;
        case 0x3c91f4u: goto label_3c91f4;
        case 0x3c91f8u: goto label_3c91f8;
        case 0x3c91fcu: goto label_3c91fc;
        case 0x3c9200u: goto label_3c9200;
        case 0x3c9204u: goto label_3c9204;
        case 0x3c9208u: goto label_3c9208;
        case 0x3c920cu: goto label_3c920c;
        case 0x3c9210u: goto label_3c9210;
        case 0x3c9214u: goto label_3c9214;
        case 0x3c9218u: goto label_3c9218;
        case 0x3c921cu: goto label_3c921c;
        case 0x3c9220u: goto label_3c9220;
        case 0x3c9224u: goto label_3c9224;
        case 0x3c9228u: goto label_3c9228;
        case 0x3c922cu: goto label_3c922c;
        case 0x3c9230u: goto label_3c9230;
        case 0x3c9234u: goto label_3c9234;
        case 0x3c9238u: goto label_3c9238;
        case 0x3c923cu: goto label_3c923c;
        case 0x3c9240u: goto label_3c9240;
        case 0x3c9244u: goto label_3c9244;
        case 0x3c9248u: goto label_3c9248;
        case 0x3c924cu: goto label_3c924c;
        case 0x3c9250u: goto label_3c9250;
        case 0x3c9254u: goto label_3c9254;
        case 0x3c9258u: goto label_3c9258;
        case 0x3c925cu: goto label_3c925c;
        case 0x3c9260u: goto label_3c9260;
        case 0x3c9264u: goto label_3c9264;
        case 0x3c9268u: goto label_3c9268;
        case 0x3c926cu: goto label_3c926c;
        case 0x3c9270u: goto label_3c9270;
        case 0x3c9274u: goto label_3c9274;
        case 0x3c9278u: goto label_3c9278;
        case 0x3c927cu: goto label_3c927c;
        case 0x3c9280u: goto label_3c9280;
        case 0x3c9284u: goto label_3c9284;
        case 0x3c9288u: goto label_3c9288;
        case 0x3c928cu: goto label_3c928c;
        case 0x3c9290u: goto label_3c9290;
        case 0x3c9294u: goto label_3c9294;
        case 0x3c9298u: goto label_3c9298;
        case 0x3c929cu: goto label_3c929c;
        case 0x3c92a0u: goto label_3c92a0;
        case 0x3c92a4u: goto label_3c92a4;
        case 0x3c92a8u: goto label_3c92a8;
        case 0x3c92acu: goto label_3c92ac;
        case 0x3c92b0u: goto label_3c92b0;
        case 0x3c92b4u: goto label_3c92b4;
        case 0x3c92b8u: goto label_3c92b8;
        case 0x3c92bcu: goto label_3c92bc;
        case 0x3c92c0u: goto label_3c92c0;
        case 0x3c92c4u: goto label_3c92c4;
        case 0x3c92c8u: goto label_3c92c8;
        case 0x3c92ccu: goto label_3c92cc;
        case 0x3c92d0u: goto label_3c92d0;
        case 0x3c92d4u: goto label_3c92d4;
        case 0x3c92d8u: goto label_3c92d8;
        case 0x3c92dcu: goto label_3c92dc;
        case 0x3c92e0u: goto label_3c92e0;
        case 0x3c92e4u: goto label_3c92e4;
        case 0x3c92e8u: goto label_3c92e8;
        case 0x3c92ecu: goto label_3c92ec;
        case 0x3c92f0u: goto label_3c92f0;
        case 0x3c92f4u: goto label_3c92f4;
        case 0x3c92f8u: goto label_3c92f8;
        case 0x3c92fcu: goto label_3c92fc;
        case 0x3c9300u: goto label_3c9300;
        case 0x3c9304u: goto label_3c9304;
        case 0x3c9308u: goto label_3c9308;
        case 0x3c930cu: goto label_3c930c;
        case 0x3c9310u: goto label_3c9310;
        case 0x3c9314u: goto label_3c9314;
        case 0x3c9318u: goto label_3c9318;
        case 0x3c931cu: goto label_3c931c;
        case 0x3c9320u: goto label_3c9320;
        case 0x3c9324u: goto label_3c9324;
        case 0x3c9328u: goto label_3c9328;
        case 0x3c932cu: goto label_3c932c;
        case 0x3c9330u: goto label_3c9330;
        case 0x3c9334u: goto label_3c9334;
        case 0x3c9338u: goto label_3c9338;
        case 0x3c933cu: goto label_3c933c;
        case 0x3c9340u: goto label_3c9340;
        case 0x3c9344u: goto label_3c9344;
        case 0x3c9348u: goto label_3c9348;
        case 0x3c934cu: goto label_3c934c;
        case 0x3c9350u: goto label_3c9350;
        case 0x3c9354u: goto label_3c9354;
        case 0x3c9358u: goto label_3c9358;
        case 0x3c935cu: goto label_3c935c;
        case 0x3c9360u: goto label_3c9360;
        case 0x3c9364u: goto label_3c9364;
        case 0x3c9368u: goto label_3c9368;
        case 0x3c936cu: goto label_3c936c;
        case 0x3c9370u: goto label_3c9370;
        case 0x3c9374u: goto label_3c9374;
        case 0x3c9378u: goto label_3c9378;
        case 0x3c937cu: goto label_3c937c;
        case 0x3c9380u: goto label_3c9380;
        case 0x3c9384u: goto label_3c9384;
        case 0x3c9388u: goto label_3c9388;
        case 0x3c938cu: goto label_3c938c;
        case 0x3c9390u: goto label_3c9390;
        case 0x3c9394u: goto label_3c9394;
        case 0x3c9398u: goto label_3c9398;
        case 0x3c939cu: goto label_3c939c;
        case 0x3c93a0u: goto label_3c93a0;
        case 0x3c93a4u: goto label_3c93a4;
        case 0x3c93a8u: goto label_3c93a8;
        case 0x3c93acu: goto label_3c93ac;
        default: break;
    }

    ctx->pc = 0x3c8d70u;

label_3c8d70:
    // 0x3c8d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c8d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c8d74:
    // 0x3c8d74: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3c8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3c8d78:
    // 0x3c8d78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c8d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c8d7c:
    // 0x3c8d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c8d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c8d80:
    // 0x3c8d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c8d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c8d84:
    // 0x3c8d84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c8d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d88:
    // 0x3c8d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c8d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c8d8c:
    // 0x3c8d8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c8d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d90:
    // 0x3c8d90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c8d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d94:
    // 0x3c8d94: 0x3445aeec  ori         $a1, $v0, 0xAEEC
    ctx->pc = 0x3c8d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44780);
label_3c8d98:
    // 0x3c8d98: 0xc0ee760  jal         func_3B9D80
label_3c8d9c:
    if (ctx->pc == 0x3C8D9Cu) {
        ctx->pc = 0x3C8D9Cu;
            // 0x3c8d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8DA0u;
        goto label_3c8da0;
    }
    ctx->pc = 0x3C8D98u;
    SET_GPR_U32(ctx, 31, 0x3C8DA0u);
    ctx->pc = 0x3C8D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8D98u;
            // 0x3c8d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8DA0u; }
        if (ctx->pc != 0x3C8DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8DA0u; }
        if (ctx->pc != 0x3C8DA0u) { return; }
    }
    ctx->pc = 0x3C8DA0u;
label_3c8da0:
    // 0x3c8da0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c8da4:
    // 0x3c8da4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3c8da8:
    // 0x3c8da8: 0x24428e40  addiu       $v0, $v0, -0x71C0
    ctx->pc = 0x3c8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938176));
label_3c8dac:
    // 0x3c8dac: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x3c8dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_3c8db0:
    // 0x3c8db0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3c8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3c8db4:
    // 0x3c8db4: 0x3c04430c  lui         $a0, 0x430C
    ctx->pc = 0x3c8db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17164 << 16));
label_3c8db8:
    // 0x3c8db8: 0xae510058  sw          $s1, 0x58($s2)
    ctx->pc = 0x3c8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 17));
label_3c8dbc:
    // 0x3c8dbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8dc0:
    // 0x3c8dc0: 0xae50005c  sw          $s0, 0x5C($s2)
    ctx->pc = 0x3c8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 16));
label_3c8dc4:
    // 0x3c8dc4: 0xa2430060  sb          $v1, 0x60($s2)
    ctx->pc = 0x3c8dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 3));
label_3c8dc8:
    // 0x3c8dc8: 0x8c500eac  lw          $s0, 0xEAC($v0)
    ctx->pc = 0x3c8dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3c8dcc:
    // 0x3c8dcc: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3c8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_3c8dd0:
    // 0x3c8dd0: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x3c8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3c8dd4:
    // 0x3c8dd4: 0x8c470098  lw          $a3, 0x98($v0)
    ctx->pc = 0x3c8dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_3c8dd8:
    // 0x3c8dd8: 0x8c4600a0  lw          $a2, 0xA0($v0)
    ctx->pc = 0x3c8dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_3c8ddc:
    // 0x3c8ddc: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x3c8ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3c8de0:
    // 0x3c8de0: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3c8de0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3c8de4:
    // 0x3c8de4: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x3c8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_3c8de8:
    // 0x3c8de8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x3c8de8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_3c8dec:
    // 0x3c8dec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3c8decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3c8df0:
    // 0x3c8df0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3c8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3c8df4:
    // 0x3c8df4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3c8df4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3c8df8:
    // 0x3c8df8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3c8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3c8dfc:
    // 0x3c8dfc: 0xa6420062  sh          $v0, 0x62($s2)
    ctx->pc = 0x3c8dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 98), (uint16_t)GPR_U32(ctx, 2));
label_3c8e00:
    // 0x3c8e00: 0xa6460064  sh          $a2, 0x64($s2)
    ctx->pc = 0x3c8e00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 100), (uint16_t)GPR_U32(ctx, 6));
label_3c8e04:
    // 0x3c8e04: 0xae44006c  sw          $a0, 0x6C($s2)
    ctx->pc = 0x3c8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 4));
label_3c8e08:
    // 0x3c8e08: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x3c8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
label_3c8e0c:
    // 0x3c8e0c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x3c8e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_3c8e10:
    // 0x3c8e10: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_3c8e14:
    if (ctx->pc == 0x3C8E14u) {
        ctx->pc = 0x3C8E14u;
            // 0x3c8e14: 0x28410008  slti        $at, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->pc = 0x3C8E18u;
        goto label_3c8e18;
    }
    ctx->pc = 0x3C8E10u;
    {
        const bool branch_taken_0x3c8e10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3c8e10) {
            ctx->pc = 0x3C8E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8E10u;
            // 0x3c8e14: 0x28410008  slti        $at, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8E34u;
            goto label_3c8e34;
        }
    }
    ctx->pc = 0x3C8E18u;
label_3c8e18:
    // 0x3c8e18: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3c8e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c8e1c:
    // 0x3c8e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c8e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8e20:
    // 0x3c8e20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8e24:
    // 0x3c8e24: 0x320f809  jalr        $t9
label_3c8e28:
    if (ctx->pc == 0x3C8E28u) {
        ctx->pc = 0x3C8E28u;
            // 0x3c8e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E2Cu;
        goto label_3c8e2c;
    }
    ctx->pc = 0x3C8E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8E2Cu);
        ctx->pc = 0x3C8E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8E24u;
            // 0x3c8e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8E2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8E2Cu; }
            if (ctx->pc != 0x3C8E2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C8E2Cu;
label_3c8e2c:
    // 0x3c8e2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3c8e30:
    if (ctx->pc == 0x3C8E30u) {
        ctx->pc = 0x3C8E30u;
            // 0x3c8e30: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->pc = 0x3C8E34u;
        goto label_3c8e34;
    }
    ctx->pc = 0x3C8E2Cu;
    {
        const bool branch_taken_0x3c8e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8E2Cu;
            // 0x3c8e30: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e2c) {
            ctx->pc = 0x3C8E54u;
            goto label_3c8e54;
        }
    }
    ctx->pc = 0x3C8E34u;
label_3c8e34:
    // 0x3c8e34: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_3c8e38:
    if (ctx->pc == 0x3C8E38u) {
        ctx->pc = 0x3C8E3Cu;
        goto label_3c8e3c;
    }
    ctx->pc = 0x3C8E34u;
    {
        const bool branch_taken_0x3c8e34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8e34) {
            ctx->pc = 0x3C8E50u;
            goto label_3c8e50;
        }
    }
    ctx->pc = 0x3C8E3Cu;
label_3c8e3c:
    // 0x3c8e3c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3c8e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c8e40:
    // 0x3c8e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c8e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8e44:
    // 0x3c8e44: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8e48:
    // 0x3c8e48: 0x320f809  jalr        $t9
label_3c8e4c:
    if (ctx->pc == 0x3C8E4Cu) {
        ctx->pc = 0x3C8E4Cu;
            // 0x3c8e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E50u;
        goto label_3c8e50;
    }
    ctx->pc = 0x3C8E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8E50u);
        ctx->pc = 0x3C8E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8E48u;
            // 0x3c8e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8E50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8E50u; }
            if (ctx->pc != 0x3C8E50u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8E50u;
label_3c8e50:
    // 0x3c8e50: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x3c8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_3c8e54:
    // 0x3c8e54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c8e58:
    // 0x3c8e58: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
label_3c8e5c:
    if (ctx->pc == 0x3C8E5Cu) {
        ctx->pc = 0x3C8E5Cu;
            // 0x3c8e5c: 0x3c023fa0  lui         $v0, 0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
        ctx->pc = 0x3C8E60u;
        goto label_3c8e60;
    }
    ctx->pc = 0x3C8E58u;
    {
        const bool branch_taken_0x3c8e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c8e58) {
            ctx->pc = 0x3C8E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8E58u;
            // 0x3c8e5c: 0x3c023fa0  lui         $v0, 0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8EDCu;
            goto label_3c8edc;
        }
    }
    ctx->pc = 0x3C8E60u;
label_3c8e60:
    // 0x3c8e60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c8e64:
    // 0x3c8e64: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_3c8e68:
    if (ctx->pc == 0x3C8E68u) {
        ctx->pc = 0x3C8E6Cu;
        goto label_3c8e6c;
    }
    ctx->pc = 0x3C8E64u;
    {
        const bool branch_taken_0x3c8e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c8e64) {
            ctx->pc = 0x3C8ED8u;
            goto label_3c8ed8;
        }
    }
    ctx->pc = 0x3C8E6Cu;
label_3c8e6c:
    // 0x3c8e6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c8e70:
    // 0x3c8e70: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_3c8e74:
    if (ctx->pc == 0x3C8E74u) {
        ctx->pc = 0x3C8E74u;
            // 0x3c8e74: 0x3c023fa0  lui         $v0, 0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
        ctx->pc = 0x3C8E78u;
        goto label_3c8e78;
    }
    ctx->pc = 0x3C8E70u;
    {
        const bool branch_taken_0x3c8e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c8e70) {
            ctx->pc = 0x3C8E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8E70u;
            // 0x3c8e74: 0x3c023fa0  lui         $v0, 0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8ED0u;
            goto label_3c8ed0;
        }
    }
    ctx->pc = 0x3C8E78u;
label_3c8e78:
    // 0x3c8e78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8e7c:
    // 0x3c8e7c: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_3c8e80:
    if (ctx->pc == 0x3C8E80u) {
        ctx->pc = 0x3C8E80u;
            // 0x3c8e80: 0x3c033fa9  lui         $v1, 0x3FA9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16297 << 16));
        ctx->pc = 0x3C8E84u;
        goto label_3c8e84;
    }
    ctx->pc = 0x3C8E7Cu;
    {
        const bool branch_taken_0x3c8e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3c8e7c) {
            ctx->pc = 0x3C8E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8E7Cu;
            // 0x3c8e80: 0x3c033fa9  lui         $v1, 0x3FA9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16297 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8E8Cu;
            goto label_3c8e8c;
        }
    }
    ctx->pc = 0x3C8E84u;
label_3c8e84:
    // 0x3c8e84: 0x10000017  b           . + 4 + (0x17 << 2)
label_3c8e88:
    if (ctx->pc == 0x3C8E88u) {
        ctx->pc = 0x3C8E88u;
            // 0x3c8e88: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3C8E8Cu;
        goto label_3c8e8c;
    }
    ctx->pc = 0x3C8E84u;
    {
        const bool branch_taken_0x3c8e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8E84u;
            // 0x3c8e88: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e84) {
            ctx->pc = 0x3C8EE4u;
            goto label_3c8ee4;
        }
    }
    ctx->pc = 0x3C8E8Cu;
label_3c8e8c:
    // 0x3c8e8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8e90:
    // 0x3c8e90: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3c8e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_3c8e94:
    // 0x3c8e94: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x3c8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
label_3c8e98:
    // 0x3c8e98: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3c8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c8e9c:
    // 0x3c8e9c: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x3c8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_3c8ea0:
    // 0x3c8ea0: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
label_3c8ea4:
    if (ctx->pc == 0x3C8EA4u) {
        ctx->pc = 0x3C8EA4u;
            // 0x3c8ea4: 0x86420064  lh          $v0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->pc = 0x3C8EA8u;
        goto label_3c8ea8;
    }
    ctx->pc = 0x3C8EA0u;
    {
        const bool branch_taken_0x3c8ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c8ea0) {
            ctx->pc = 0x3C8EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8EA0u;
            // 0x3c8ea4: 0x86420064  lh          $v0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8EC4u;
            goto label_3c8ec4;
        }
    }
    ctx->pc = 0x3C8EA8u;
label_3c8ea8:
    // 0x3c8ea8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3c8ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c8eac:
    // 0x3c8eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c8eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8eb0:
    // 0x3c8eb0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8eb4:
    // 0x3c8eb4: 0x320f809  jalr        $t9
label_3c8eb8:
    if (ctx->pc == 0x3C8EB8u) {
        ctx->pc = 0x3C8EB8u;
            // 0x3c8eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EBCu;
        goto label_3c8ebc;
    }
    ctx->pc = 0x3C8EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8EBCu);
        ctx->pc = 0x3C8EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8EB4u;
            // 0x3c8eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8EBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8EBCu; }
            if (ctx->pc != 0x3C8EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C8EBCu;
label_3c8ebc:
    // 0x3c8ebc: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c8ec0:
    if (ctx->pc == 0x3C8EC0u) {
        ctx->pc = 0x3C8EC0u;
            // 0x3c8ec0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EC4u;
        goto label_3c8ec4;
    }
    ctx->pc = 0x3C8EBCu;
    {
        const bool branch_taken_0x3c8ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8EBCu;
            // 0x3c8ec0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ebc) {
            ctx->pc = 0x3C8EF8u;
            goto label_3c8ef8;
        }
    }
    ctx->pc = 0x3C8EC4u;
label_3c8ec4:
    // 0x3c8ec4: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x3c8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
label_3c8ec8:
    // 0x3c8ec8: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c8ecc:
    if (ctx->pc == 0x3C8ECCu) {
        ctx->pc = 0x3C8ECCu;
            // 0x3c8ecc: 0xa6420064  sh          $v0, 0x64($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3C8ED0u;
        goto label_3c8ed0;
    }
    ctx->pc = 0x3C8EC8u;
    {
        const bool branch_taken_0x3c8ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8EC8u;
            // 0x3c8ecc: 0xa6420064  sh          $v0, 0x64($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ec8) {
            ctx->pc = 0x3C8EF4u;
            goto label_3c8ef4;
        }
    }
    ctx->pc = 0x3C8ED0u;
label_3c8ed0:
    // 0x3c8ed0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c8ed4:
    if (ctx->pc == 0x3C8ED4u) {
        ctx->pc = 0x3C8ED4u;
            // 0x3c8ed4: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->pc = 0x3C8ED8u;
        goto label_3c8ed8;
    }
    ctx->pc = 0x3C8ED0u;
    {
        const bool branch_taken_0x3c8ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8ED0u;
            // 0x3c8ed4: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ed0) {
            ctx->pc = 0x3C8EF4u;
            goto label_3c8ef4;
        }
    }
    ctx->pc = 0x3C8ED8u;
label_3c8ed8:
    // 0x3c8ed8: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x3c8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_3c8edc:
    // 0x3c8edc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c8ee0:
    if (ctx->pc == 0x3C8EE0u) {
        ctx->pc = 0x3C8EE0u;
            // 0x3c8ee0: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->pc = 0x3C8EE4u;
        goto label_3c8ee4;
    }
    ctx->pc = 0x3C8EDCu;
    {
        const bool branch_taken_0x3c8edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8EDCu;
            // 0x3c8ee0: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8edc) {
            ctx->pc = 0x3C8EF4u;
            goto label_3c8ef4;
        }
    }
    ctx->pc = 0x3C8EE4u;
label_3c8ee4:
    // 0x3c8ee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c8ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ee8:
    // 0x3c8ee8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8eec:
    // 0x3c8eec: 0x320f809  jalr        $t9
label_3c8ef0:
    if (ctx->pc == 0x3C8EF0u) {
        ctx->pc = 0x3C8EF0u;
            // 0x3c8ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EF4u;
        goto label_3c8ef4;
    }
    ctx->pc = 0x3C8EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8EF4u);
        ctx->pc = 0x3C8EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8EECu;
            // 0x3c8ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8EF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8EF4u; }
            if (ctx->pc != 0x3C8EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8EF4u;
label_3c8ef4:
    // 0x3c8ef4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c8ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ef8:
    // 0x3c8ef8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c8ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c8efc:
    // 0x3c8efc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c8efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8f00:
    // 0x3c8f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c8f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8f04:
    // 0x3c8f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8f08:
    // 0x3c8f08: 0x3e00008  jr          $ra
label_3c8f0c:
    if (ctx->pc == 0x3C8F0Cu) {
        ctx->pc = 0x3C8F0Cu;
            // 0x3c8f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C8F10u;
        goto label_3c8f10;
    }
    ctx->pc = 0x3C8F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8F08u;
            // 0x3c8f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C8F10u;
label_3c8f10:
    // 0x3c8f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c8f14:
    // 0x3c8f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c8f18:
    // 0x3c8f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c8f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c8f1c:
    // 0x3c8f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c8f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c8f20:
    // 0x3c8f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c8f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f24:
    // 0x3c8f24: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3c8f28:
    if (ctx->pc == 0x3C8F28u) {
        ctx->pc = 0x3C8F28u;
            // 0x3c8f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F2Cu;
        goto label_3c8f2c;
    }
    ctx->pc = 0x3C8F24u;
    {
        const bool branch_taken_0x3c8f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8F24u;
            // 0x3c8f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f24) {
            ctx->pc = 0x3C8F68u;
            goto label_3c8f68;
        }
    }
    ctx->pc = 0x3C8F2Cu;
label_3c8f2c:
    // 0x3c8f2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c8f30:
    // 0x3c8f30: 0x24428e70  addiu       $v0, $v0, -0x7190
    ctx->pc = 0x3c8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938224));
label_3c8f34:
    // 0x3c8f34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3c8f38:
    if (ctx->pc == 0x3C8F38u) {
        ctx->pc = 0x3C8F38u;
            // 0x3c8f38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C8F3Cu;
        goto label_3c8f3c;
    }
    ctx->pc = 0x3C8F34u;
    {
        const bool branch_taken_0x3c8f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8F34u;
            // 0x3c8f38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f34) {
            ctx->pc = 0x3C8F50u;
            goto label_3c8f50;
        }
    }
    ctx->pc = 0x3C8F3Cu;
label_3c8f3c:
    // 0x3c8f3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c8f40:
    // 0x3c8f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c8f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f44:
    // 0x3c8f44: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x3c8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_3c8f48:
    // 0x3c8f48: 0xc075bf8  jal         func_1D6FE0
label_3c8f4c:
    if (ctx->pc == 0x3C8F4Cu) {
        ctx->pc = 0x3C8F4Cu;
            // 0x3c8f4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C8F50u;
        goto label_3c8f50;
    }
    ctx->pc = 0x3C8F48u;
    SET_GPR_U32(ctx, 31, 0x3C8F50u);
    ctx->pc = 0x3C8F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8F48u;
            // 0x3c8f4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8F50u; }
        if (ctx->pc != 0x3C8F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8F50u; }
        if (ctx->pc != 0x3C8F50u) { return; }
    }
    ctx->pc = 0x3C8F50u;
label_3c8f50:
    // 0x3c8f50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c8f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c8f54:
    // 0x3c8f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c8f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c8f58:
    // 0x3c8f58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c8f5c:
    if (ctx->pc == 0x3C8F5Cu) {
        ctx->pc = 0x3C8F5Cu;
            // 0x3c8f5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F60u;
        goto label_3c8f60;
    }
    ctx->pc = 0x3C8F58u;
    {
        const bool branch_taken_0x3c8f58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c8f58) {
            ctx->pc = 0x3C8F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8F58u;
            // 0x3c8f5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8F6Cu;
            goto label_3c8f6c;
        }
    }
    ctx->pc = 0x3C8F60u;
label_3c8f60:
    // 0x3c8f60: 0xc0400a8  jal         func_1002A0
label_3c8f64:
    if (ctx->pc == 0x3C8F64u) {
        ctx->pc = 0x3C8F64u;
            // 0x3c8f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F68u;
        goto label_3c8f68;
    }
    ctx->pc = 0x3C8F60u;
    SET_GPR_U32(ctx, 31, 0x3C8F68u);
    ctx->pc = 0x3C8F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8F60u;
            // 0x3c8f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8F68u; }
        if (ctx->pc != 0x3C8F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8F68u; }
        if (ctx->pc != 0x3C8F68u) { return; }
    }
    ctx->pc = 0x3C8F68u;
label_3c8f68:
    // 0x3c8f68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c8f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f6c:
    // 0x3c8f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c8f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8f70:
    // 0x3c8f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c8f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8f74:
    // 0x3c8f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8f78:
    // 0x3c8f78: 0x3e00008  jr          $ra
label_3c8f7c:
    if (ctx->pc == 0x3C8F7Cu) {
        ctx->pc = 0x3C8F7Cu;
            // 0x3c8f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C8F80u;
        goto label_3c8f80;
    }
    ctx->pc = 0x3C8F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8F78u;
            // 0x3c8f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C8F80u;
label_3c8f80:
    // 0x3c8f80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3c8f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3c8f84:
    // 0x3c8f84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c8f88:
    // 0x3c8f88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c8f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c8f8c:
    // 0x3c8f8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c8f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c8f90:
    // 0x3c8f90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c8f94:
    // 0x3c8f94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c8f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8f98:
    // 0x3c8f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c8f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c8f9c:
    // 0x3c8f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c8fa0:
    // 0x3c8fa0: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3c8fa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c8fa4:
    // 0x3c8fa4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_3c8fa8:
    if (ctx->pc == 0x3C8FA8u) {
        ctx->pc = 0x3C8FA8u;
            // 0x3c8fa8: 0x8e6400c0  lw          $a0, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->pc = 0x3C8FACu;
        goto label_3c8fac;
    }
    ctx->pc = 0x3C8FA4u;
    {
        const bool branch_taken_0x3c8fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8fa4) {
            ctx->pc = 0x3C8FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8FA4u;
            // 0x3c8fa8: 0x8e6400c0  lw          $a0, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8FB4u;
            goto label_3c8fb4;
        }
    }
    ctx->pc = 0x3C8FACu;
label_3c8fac:
    // 0x3c8fac: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_3c8fb0:
    if (ctx->pc == 0x3C8FB0u) {
        ctx->pc = 0x3C8FB0u;
            // 0x3c8fb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3C8FB4u;
        goto label_3c8fb4;
    }
    ctx->pc = 0x3C8FACu;
    {
        const bool branch_taken_0x3c8fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8FACu;
            // 0x3c8fb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8fac) {
            ctx->pc = 0x3C9334u;
            goto label_3c9334;
        }
    }
    ctx->pc = 0x3C8FB4u;
label_3c8fb4:
    // 0x3c8fb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c8fb8:
    // 0x3c8fb8: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_3c8fbc:
    if (ctx->pc == 0x3C8FBCu) {
        ctx->pc = 0x3C8FBCu;
            // 0x3c8fbc: 0xc66100a8  lwc1        $f1, 0xA8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C8FC0u;
        goto label_3c8fc0;
    }
    ctx->pc = 0x3C8FB8u;
    {
        const bool branch_taken_0x3c8fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8fb8) {
            ctx->pc = 0x3C8FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8FB8u;
            // 0x3c8fbc: 0xc66100a8  lwc1        $f1, 0xA8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8FD8u;
            goto label_3c8fd8;
        }
    }
    ctx->pc = 0x3C8FC0u;
label_3c8fc0:
    // 0x3c8fc0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3c8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3c8fc4:
    // 0x3c8fc4: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x3c8fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3c8fc8:
    // 0x3c8fc8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3c8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3c8fcc:
    // 0x3c8fcc: 0x148300d8  bne         $a0, $v1, . + 4 + (0xD8 << 2)
label_3c8fd0:
    if (ctx->pc == 0x3C8FD0u) {
        ctx->pc = 0x3C8FD4u;
        goto label_3c8fd4;
    }
    ctx->pc = 0x3C8FCCu;
    {
        const bool branch_taken_0x3c8fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c8fcc) {
            ctx->pc = 0x3C9330u;
            goto label_3c9330;
        }
    }
    ctx->pc = 0x3C8FD4u;
label_3c8fd4:
    // 0x3c8fd4: 0xc66100a8  lwc1        $f1, 0xA8($s3)
    ctx->pc = 0x3c8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c8fd8:
    // 0x3c8fd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c8fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8fdc:
    // 0x3c8fdc: 0x0  nop
    ctx->pc = 0x3c8fdcu;
    // NOP
label_3c8fe0:
    // 0x3c8fe0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c8fe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c8fe4:
    // 0x3c8fe4: 0x450000d2  bc1f        . + 4 + (0xD2 << 2)
label_3c8fe8:
    if (ctx->pc == 0x3C8FE8u) {
        ctx->pc = 0x3C8FECu;
        goto label_3c8fec;
    }
    ctx->pc = 0x3C8FE4u;
    {
        const bool branch_taken_0x3c8fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c8fe4) {
            ctx->pc = 0x3C9330u;
            goto label_3c9330;
        }
    }
    ctx->pc = 0x3C8FECu;
label_3c8fec:
    // 0x3c8fec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c8ff0:
    // 0x3c8ff0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3c8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3c8ff4:
    // 0x3c8ff4: 0x8c52e378  lw          $s2, -0x1C88($v0)
    ctx->pc = 0x3c8ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3c8ff8:
    // 0x3c8ff8: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x3c8ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3c8ffc:
    // 0x3c8ffc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3c9000:
    // 0x3c9000: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x3c9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3c9004:
    // 0x3c9004: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9008:
    // 0x3c9008: 0x8c71e370  lw          $s1, -0x1C90($v1)
    ctx->pc = 0x3c9008u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_3c900c:
    // 0x3c900c: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x3c900cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3c9010:
    // 0x3c9010: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3c9010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3c9014:
    // 0x3c9014: 0xc442f650  lwc1        $f2, -0x9B0($v0)
    ctx->pc = 0x3c9014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9018:
    // 0x3c9018: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3c9018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3c901c:
    // 0x3c901c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3c901cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3c9020:
    // 0x3c9020: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3c9020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3c9024:
    // 0x3c9024: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3c9024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3c9028:
    // 0x3c9028: 0xc441f654  lwc1        $f1, -0x9AC($v0)
    ctx->pc = 0x3c9028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c902c:
    // 0x3c902c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c9030:
    // 0x3c9030: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x3c9030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_3c9034:
    // 0x3c9034: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3c9034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3c9038:
    // 0x3c9038: 0xc440f658  lwc1        $f0, -0x9A8($v0)
    ctx->pc = 0x3c9038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c903c:
    // 0x3c903c: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x3c903cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3c9040:
    // 0x3c9040: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x3c9040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_3c9044:
    // 0x3c9044: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x3c9044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3c9048:
    // 0x3c9048: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x3c9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_3c904c:
    // 0x3c904c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3c904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c9050:
    // 0x3c9050: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x3c9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3c9054:
    // 0x3c9054: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3c9054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3c9058:
    // 0x3c9058: 0xc04f3fc  jal         func_13CFF0
label_3c905c:
    if (ctx->pc == 0x3C905Cu) {
        ctx->pc = 0x3C905Cu;
            // 0x3c905c: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x3C9060u;
        goto label_3c9060;
    }
    ctx->pc = 0x3C9058u;
    SET_GPR_U32(ctx, 31, 0x3C9060u);
    ctx->pc = 0x3C905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9058u;
            // 0x3c905c: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9060u; }
        if (ctx->pc != 0x3C9060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9060u; }
        if (ctx->pc != 0x3C9060u) { return; }
    }
    ctx->pc = 0x3C9060u;
label_3c9060:
    // 0x3c9060: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c9060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c9064:
    // 0x3c9064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9068:
    // 0x3c9068: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3c9068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c906c:
    // 0x3c906c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3c906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3c9070:
    // 0x3c9070: 0xc04e4a4  jal         func_139290
label_3c9074:
    if (ctx->pc == 0x3C9074u) {
        ctx->pc = 0x3C9074u;
            // 0x3c9074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9078u;
        goto label_3c9078;
    }
    ctx->pc = 0x3C9070u;
    SET_GPR_U32(ctx, 31, 0x3C9078u);
    ctx->pc = 0x3C9074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9070u;
            // 0x3c9074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9078u; }
        if (ctx->pc != 0x3C9078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9078u; }
        if (ctx->pc != 0x3C9078u) { return; }
    }
    ctx->pc = 0x3C9078u;
label_3c9078:
    // 0x3c9078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c907c:
    // 0x3c907c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9080:
    // 0x3c9080: 0xc04cd60  jal         func_133580
label_3c9084:
    if (ctx->pc == 0x3C9084u) {
        ctx->pc = 0x3C9084u;
            // 0x3c9084: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->pc = 0x3C9088u;
        goto label_3c9088;
    }
    ctx->pc = 0x3C9080u;
    SET_GPR_U32(ctx, 31, 0x3C9088u);
    ctx->pc = 0x3C9084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9080u;
            // 0x3c9084: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9088u; }
        if (ctx->pc != 0x3C9088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9088u; }
        if (ctx->pc != 0x3C9088u) { return; }
    }
    ctx->pc = 0x3C9088u;
label_3c9088:
    // 0x3c9088: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x3c9088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_3c908c:
    // 0x3c908c: 0xc04f278  jal         func_13C9E0
label_3c9090:
    if (ctx->pc == 0x3C9090u) {
        ctx->pc = 0x3C9090u;
            // 0x3c9090: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3C9094u;
        goto label_3c9094;
    }
    ctx->pc = 0x3C908Cu;
    SET_GPR_U32(ctx, 31, 0x3C9094u);
    ctx->pc = 0x3C9090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C908Cu;
            // 0x3c9090: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9094u; }
        if (ctx->pc != 0x3C9094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9094u; }
        if (ctx->pc != 0x3C9094u) { return; }
    }
    ctx->pc = 0x3C9094u;
label_3c9094:
    // 0x3c9094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9098:
    // 0x3c9098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c9098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c909c:
    // 0x3c909c: 0xc04cd60  jal         func_133580
label_3c90a0:
    if (ctx->pc == 0x3C90A0u) {
        ctx->pc = 0x3C90A0u;
            // 0x3c90a0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3C90A4u;
        goto label_3c90a4;
    }
    ctx->pc = 0x3C909Cu;
    SET_GPR_U32(ctx, 31, 0x3C90A4u);
    ctx->pc = 0x3C90A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C909Cu;
            // 0x3c90a0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C90A4u; }
        if (ctx->pc != 0x3C90A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C90A4u; }
        if (ctx->pc != 0x3C90A4u) { return; }
    }
    ctx->pc = 0x3C90A4u;
label_3c90a4:
    // 0x3c90a4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3c90a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3c90a8:
    // 0x3c90a8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3c90a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3c90ac:
    // 0x3c90ac: 0xc04cbbc  jal         func_132EF0
label_3c90b0:
    if (ctx->pc == 0x3C90B0u) {
        ctx->pc = 0x3C90B0u;
            // 0x3c90b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C90B4u;
        goto label_3c90b4;
    }
    ctx->pc = 0x3C90ACu;
    SET_GPR_U32(ctx, 31, 0x3C90B4u);
    ctx->pc = 0x3C90B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C90ACu;
            // 0x3c90b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C90B4u; }
        if (ctx->pc != 0x3C90B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C90B4u; }
        if (ctx->pc != 0x3C90B4u) { return; }
    }
    ctx->pc = 0x3C90B4u;
label_3c90b4:
    // 0x3c90b4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3c90b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c90b8:
    // 0x3c90b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c90b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c90bc:
    // 0x3c90bc: 0x0  nop
    ctx->pc = 0x3c90bcu;
    // NOP
label_3c90c0:
    // 0x3c90c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c90c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c90c4:
    // 0x3c90c4: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
label_3c90c8:
    if (ctx->pc == 0x3C90C8u) {
        ctx->pc = 0x3C90C8u;
            // 0x3c90c8: 0xc7a000f0  lwc1        $f0, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3C90CCu;
        goto label_3c90cc;
    }
    ctx->pc = 0x3C90C4u;
    {
        const bool branch_taken_0x3c90c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c90c4) {
            ctx->pc = 0x3C90C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C90C4u;
            // 0x3c90c8: 0xc7a000f0  lwc1        $f0, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9128u;
            goto label_3c9128;
        }
    }
    ctx->pc = 0x3C90CCu;
label_3c90cc:
    // 0x3c90cc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3c90ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c90d0:
    // 0x3c90d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c90d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c90d4:
    // 0x3c90d4: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_3c90d8:
    if (ctx->pc == 0x3C90D8u) {
        ctx->pc = 0x3C90D8u;
            // 0x3c90d8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x3C90DCu;
        goto label_3c90dc;
    }
    ctx->pc = 0x3C90D4u;
    {
        const bool branch_taken_0x3c90d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c90d4) {
            ctx->pc = 0x3C90D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C90D4u;
            // 0x3c90d8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9104u;
            goto label_3c9104;
        }
    }
    ctx->pc = 0x3C90DCu;
label_3c90dc:
    // 0x3c90dc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3c90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3c90e0:
    // 0x3c90e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c90e4:
    // 0x3c90e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c90e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c90e8:
    // 0x3c90e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c90e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c90ec:
    // 0x3c90ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c90ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c90f0:
    // 0x3c90f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c90f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c90f4:
    // 0x3c90f4: 0xc04ce50  jal         func_133940
label_3c90f8:
    if (ctx->pc == 0x3C90F8u) {
        ctx->pc = 0x3C90F8u;
            // 0x3c90f8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3C90FCu;
        goto label_3c90fc;
    }
    ctx->pc = 0x3C90F4u;
    SET_GPR_U32(ctx, 31, 0x3C90FCu);
    ctx->pc = 0x3C90F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C90F4u;
            // 0x3c90f8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C90FCu; }
        if (ctx->pc != 0x3C90FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C90FCu; }
        if (ctx->pc != 0x3C90FCu) { return; }
    }
    ctx->pc = 0x3C90FCu;
label_3c90fc:
    // 0x3c90fc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3c9100:
    if (ctx->pc == 0x3C9100u) {
        ctx->pc = 0x3C9100u;
            // 0x3c9100: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->pc = 0x3C9104u;
        goto label_3c9104;
    }
    ctx->pc = 0x3C90FCu;
    {
        const bool branch_taken_0x3c90fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C90FCu;
            // 0x3c9100: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c90fc) {
            ctx->pc = 0x3C917Cu;
            goto label_3c917c;
        }
    }
    ctx->pc = 0x3C9104u;
label_3c9104:
    // 0x3c9104: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c9104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c9108:
    // 0x3c9108: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c9108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c910c:
    // 0x3c910c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9110:
    // 0x3c9110: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3c9110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3c9114:
    // 0x3c9114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c9114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9118:
    // 0x3c9118: 0xc04ce50  jal         func_133940
label_3c911c:
    if (ctx->pc == 0x3C911Cu) {
        ctx->pc = 0x3C911Cu;
            // 0x3c911c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3C9120u;
        goto label_3c9120;
    }
    ctx->pc = 0x3C9118u;
    SET_GPR_U32(ctx, 31, 0x3C9120u);
    ctx->pc = 0x3C911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9118u;
            // 0x3c911c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9120u; }
        if (ctx->pc != 0x3C9120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9120u; }
        if (ctx->pc != 0x3C9120u) { return; }
    }
    ctx->pc = 0x3C9120u;
label_3c9120:
    // 0x3c9120: 0x10000015  b           . + 4 + (0x15 << 2)
label_3c9124:
    if (ctx->pc == 0x3C9124u) {
        ctx->pc = 0x3C9128u;
        goto label_3c9128;
    }
    ctx->pc = 0x3C9120u;
    {
        const bool branch_taken_0x3c9120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9120) {
            ctx->pc = 0x3C9178u;
            goto label_3c9178;
        }
    }
    ctx->pc = 0x3C9128u;
label_3c9128:
    // 0x3c9128: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c9128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c912c:
    // 0x3c912c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_3c9130:
    if (ctx->pc == 0x3C9130u) {
        ctx->pc = 0x3C9130u;
            // 0x3c9130: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x3C9134u;
        goto label_3c9134;
    }
    ctx->pc = 0x3C912Cu;
    {
        const bool branch_taken_0x3c912c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c912c) {
            ctx->pc = 0x3C9130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C912Cu;
            // 0x3c9130: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C915Cu;
            goto label_3c915c;
        }
    }
    ctx->pc = 0x3C9134u;
label_3c9134:
    // 0x3c9134: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3c9134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3c9138:
    // 0x3c9138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c9138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c913c:
    // 0x3c913c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c913cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9140:
    // 0x3c9140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9144:
    // 0x3c9144: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c9144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c9148:
    // 0x3c9148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c9148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c914c:
    // 0x3c914c: 0xc04ce50  jal         func_133940
label_3c9150:
    if (ctx->pc == 0x3C9150u) {
        ctx->pc = 0x3C9150u;
            // 0x3c9150: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3C9154u;
        goto label_3c9154;
    }
    ctx->pc = 0x3C914Cu;
    SET_GPR_U32(ctx, 31, 0x3C9154u);
    ctx->pc = 0x3C9150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C914Cu;
            // 0x3c9150: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9154u; }
        if (ctx->pc != 0x3C9154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9154u; }
        if (ctx->pc != 0x3C9154u) { return; }
    }
    ctx->pc = 0x3C9154u;
label_3c9154:
    // 0x3c9154: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c9158:
    if (ctx->pc == 0x3C9158u) {
        ctx->pc = 0x3C915Cu;
        goto label_3c915c;
    }
    ctx->pc = 0x3C9154u;
    {
        const bool branch_taken_0x3c9154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9154) {
            ctx->pc = 0x3C9178u;
            goto label_3c9178;
        }
    }
    ctx->pc = 0x3C915Cu;
label_3c915c:
    // 0x3c915c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c915cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c9160:
    // 0x3c9160: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c9160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9164:
    // 0x3c9164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9168:
    // 0x3c9168: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3c9168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3c916c:
    // 0x3c916c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c916cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9170:
    // 0x3c9170: 0xc04ce50  jal         func_133940
label_3c9174:
    if (ctx->pc == 0x3C9174u) {
        ctx->pc = 0x3C9174u;
            // 0x3c9174: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3C9178u;
        goto label_3c9178;
    }
    ctx->pc = 0x3C9170u;
    SET_GPR_U32(ctx, 31, 0x3C9178u);
    ctx->pc = 0x3C9174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9170u;
            // 0x3c9174: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9178u; }
        if (ctx->pc != 0x3C9178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9178u; }
        if (ctx->pc != 0x3C9178u) { return; }
    }
    ctx->pc = 0x3C9178u;
label_3c9178:
    // 0x3c9178: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c917c:
    // 0x3c917c: 0xc04e738  jal         func_139CE0
label_3c9180:
    if (ctx->pc == 0x3C9180u) {
        ctx->pc = 0x3C9180u;
            // 0x3c9180: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3C9184u;
        goto label_3c9184;
    }
    ctx->pc = 0x3C917Cu;
    SET_GPR_U32(ctx, 31, 0x3C9184u);
    ctx->pc = 0x3C9180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C917Cu;
            // 0x3c9180: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9184u; }
        if (ctx->pc != 0x3C9184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9184u; }
        if (ctx->pc != 0x3C9184u) { return; }
    }
    ctx->pc = 0x3C9184u;
label_3c9184:
    // 0x3c9184: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x3c9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c9188:
    // 0x3c9188: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3c9188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3c918c:
    // 0x3c918c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3c9190:
    if (ctx->pc == 0x3C9190u) {
        ctx->pc = 0x3C9190u;
            // 0x3c9190: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x3C9194u;
        goto label_3c9194;
    }
    ctx->pc = 0x3C918Cu;
    {
        const bool branch_taken_0x3c918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c918c) {
            ctx->pc = 0x3C9190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C918Cu;
            // 0x3c9190: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C91D0u;
            goto label_3c91d0;
        }
    }
    ctx->pc = 0x3C9194u;
label_3c9194:
    // 0x3c9194: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x3c9194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9198:
    // 0x3c9198: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3c9198u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3c919c:
    // 0x3c919c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c91a0:
    // 0x3c91a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c91a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c91a4:
    // 0x3c91a4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3c91a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c91a8:
    // 0x3c91a8: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3c91a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_3c91ac:
    // 0x3c91ac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3c91acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3c91b0:
    // 0x3c91b0: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c91b4:
    // 0x3c91b4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3c91b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c91b8:
    // 0x3c91b8: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x3c91b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c91bc:
    // 0x3c91bc: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3c91bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3c91c0:
    // 0x3c91c0: 0xc04cff4  jal         func_133FD0
label_3c91c4:
    if (ctx->pc == 0x3C91C4u) {
        ctx->pc = 0x3C91C4u;
            // 0x3c91c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C91C8u;
        goto label_3c91c8;
    }
    ctx->pc = 0x3C91C0u;
    SET_GPR_U32(ctx, 31, 0x3C91C8u);
    ctx->pc = 0x3C91C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C91C0u;
            // 0x3c91c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C91C8u; }
        if (ctx->pc != 0x3C91C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C91C8u; }
        if (ctx->pc != 0x3C91C8u) { return; }
    }
    ctx->pc = 0x3C91C8u;
label_3c91c8:
    // 0x3c91c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c91cc:
    if (ctx->pc == 0x3C91CCu) {
        ctx->pc = 0x3C91D0u;
        goto label_3c91d0;
    }
    ctx->pc = 0x3C91C8u;
    {
        const bool branch_taken_0x3c91c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c91c8) {
            ctx->pc = 0x3C91ECu;
            goto label_3c91ec;
        }
    }
    ctx->pc = 0x3C91D0u;
label_3c91d0:
    // 0x3c91d0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3c91d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3c91d4:
    // 0x3c91d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c91d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c91d8:
    // 0x3c91d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c91d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c91dc:
    // 0x3c91dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3c91dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c91e0:
    // 0x3c91e0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3c91e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_3c91e4:
    // 0x3c91e4: 0xc04cfcc  jal         func_133F30
label_3c91e8:
    if (ctx->pc == 0x3C91E8u) {
        ctx->pc = 0x3C91E8u;
            // 0x3c91e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C91ECu;
        goto label_3c91ec;
    }
    ctx->pc = 0x3C91E4u;
    SET_GPR_U32(ctx, 31, 0x3C91ECu);
    ctx->pc = 0x3C91E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C91E4u;
            // 0x3c91e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C91ECu; }
        if (ctx->pc != 0x3C91ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C91ECu; }
        if (ctx->pc != 0x3C91ECu) { return; }
    }
    ctx->pc = 0x3C91ECu;
label_3c91ec:
    // 0x3c91ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3c91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3c91f0:
    // 0x3c91f0: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x3c91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_3c91f4:
    // 0x3c91f4: 0x8c42f660  lw          $v0, -0x9A0($v0)
    ctx->pc = 0x3c91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964832)));
label_3c91f8:
    // 0x3c91f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3c91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c91fc:
    // 0x3c91fc: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_3c9200:
    if (ctx->pc == 0x3C9200u) {
        ctx->pc = 0x3C9200u;
            // 0x3c9200: 0x8e6300b0  lw          $v1, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->pc = 0x3C9204u;
        goto label_3c9204;
    }
    ctx->pc = 0x3C91FCu;
    {
        const bool branch_taken_0x3c91fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c91fc) {
            ctx->pc = 0x3C9200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C91FCu;
            // 0x3c9200: 0x8e6300b0  lw          $v1, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C92CCu;
            goto label_3c92cc;
        }
    }
    ctx->pc = 0x3C9204u;
label_3c9204:
    // 0x3c9204: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x3c9204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c9208:
    // 0x3c9208: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3c9208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c920c:
    // 0x3c920c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_3c9210:
    if (ctx->pc == 0x3C9210u) {
        ctx->pc = 0x3C9210u;
            // 0x3c9210: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x3C9214u;
        goto label_3c9214;
    }
    ctx->pc = 0x3C920Cu;
    {
        const bool branch_taken_0x3c920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c920c) {
            ctx->pc = 0x3C9210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C920Cu;
            // 0x3c9210: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9284u;
            goto label_3c9284;
        }
    }
    ctx->pc = 0x3C9214u;
label_3c9214:
    // 0x3c9214: 0xc66000a4  lwc1        $f0, 0xA4($s3)
    ctx->pc = 0x3c9214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9218:
    // 0x3c9218: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3c9218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3c921c:
    // 0x3c921c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c921cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c9220:
    // 0x3c9220: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x3c9220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_3c9224:
    // 0x3c9224: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c9224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c9228:
    // 0x3c9228: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3c9228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3c922c:
    // 0x3c922c: 0xc074840  jal         func_1D2100
label_3c9230:
    if (ctx->pc == 0x3C9230u) {
        ctx->pc = 0x3C9230u;
            // 0x3c9230: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3C9234u;
        goto label_3c9234;
    }
    ctx->pc = 0x3C922Cu;
    SET_GPR_U32(ctx, 31, 0x3C9234u);
    ctx->pc = 0x3C9230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C922Cu;
            // 0x3c9230: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2100u;
    if (runtime->hasFunction(0x1D2100u)) {
        auto targetFn = runtime->lookupFunction(0x1D2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9234u; }
        if (ctx->pc != 0x3C9234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2100_0x1d2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9234u; }
        if (ctx->pc != 0x3C9234u) { return; }
    }
    ctx->pc = 0x3C9234u;
label_3c9234:
    // 0x3c9234: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c9234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c9238:
    // 0x3c9238: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x3c9238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c923c:
    // 0x3c923c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3c923cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c9240:
    // 0x3c9240: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x3c9240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3c9244:
    // 0x3c9244: 0xc054bbc  jal         func_152EF0
label_3c9248:
    if (ctx->pc == 0x3C9248u) {
        ctx->pc = 0x3C9248u;
            // 0x3c9248: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x3C924Cu;
        goto label_3c924c;
    }
    ctx->pc = 0x3C9244u;
    SET_GPR_U32(ctx, 31, 0x3C924Cu);
    ctx->pc = 0x3C9248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9244u;
            // 0x3c9248: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C924Cu; }
        if (ctx->pc != 0x3C924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C924Cu; }
        if (ctx->pc != 0x3C924Cu) { return; }
    }
    ctx->pc = 0x3C924Cu;
label_3c924c:
    // 0x3c924c: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x3c924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c9250:
    // 0x3c9250: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3c9250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3c9254:
    // 0x3c9254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c9254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9258:
    // 0x3c9258: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c9258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c925c:
    // 0x3c925c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3c925cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3c9260:
    // 0x3c9260: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3c9260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3c9264:
    // 0x3c9264: 0xc054c2c  jal         func_1530B0
label_3c9268:
    if (ctx->pc == 0x3C9268u) {
        ctx->pc = 0x3C9268u;
            // 0x3c9268: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x3C926Cu;
        goto label_3c926c;
    }
    ctx->pc = 0x3C9264u;
    SET_GPR_U32(ctx, 31, 0x3C926Cu);
    ctx->pc = 0x3C9268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9264u;
            // 0x3c9268: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C926Cu; }
        if (ctx->pc != 0x3C926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C926Cu; }
        if (ctx->pc != 0x3C926Cu) { return; }
    }
    ctx->pc = 0x3C926Cu;
label_3c926c:
    // 0x3c926c: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c9270:
    // 0x3c9270: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3c9270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3c9274:
    // 0x3c9274: 0xc0747e8  jal         func_1D1FA0
label_3c9278:
    if (ctx->pc == 0x3C9278u) {
        ctx->pc = 0x3C9278u;
            // 0x3c9278: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3C927Cu;
        goto label_3c927c;
    }
    ctx->pc = 0x3C9274u;
    SET_GPR_U32(ctx, 31, 0x3C927Cu);
    ctx->pc = 0x3C9278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9274u;
            // 0x3c9278: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C927Cu; }
        if (ctx->pc != 0x3C927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C927Cu; }
        if (ctx->pc != 0x3C927Cu) { return; }
    }
    ctx->pc = 0x3C927Cu;
label_3c927c:
    // 0x3c927c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3c9280:
    if (ctx->pc == 0x3C9280u) {
        ctx->pc = 0x3C9284u;
        goto label_3c9284;
    }
    ctx->pc = 0x3C927Cu;
    {
        const bool branch_taken_0x3c927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c927c) {
            ctx->pc = 0x3C9330u;
            goto label_3c9330;
        }
    }
    ctx->pc = 0x3C9284u;
label_3c9284:
    // 0x3c9284: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3c9284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3c9288:
    // 0x3c9288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c9288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c928c:
    // 0x3c928c: 0xc074840  jal         func_1D2100
label_3c9290:
    if (ctx->pc == 0x3C9290u) {
        ctx->pc = 0x3C9290u;
            // 0x3c9290: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3C9294u;
        goto label_3c9294;
    }
    ctx->pc = 0x3C928Cu;
    SET_GPR_U32(ctx, 31, 0x3C9294u);
    ctx->pc = 0x3C9290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C928Cu;
            // 0x3c9290: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2100u;
    if (runtime->hasFunction(0x1D2100u)) {
        auto targetFn = runtime->lookupFunction(0x1D2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9294u; }
        if (ctx->pc != 0x3C9294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2100_0x1d2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9294u; }
        if (ctx->pc != 0x3C9294u) { return; }
    }
    ctx->pc = 0x3C9294u;
label_3c9294:
    // 0x3c9294: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x3c9294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c9298:
    // 0x3c9298: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3c9298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3c929c:
    // 0x3c929c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c929cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c92a0:
    // 0x3c92a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c92a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c92a4:
    // 0x3c92a4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3c92a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3c92a8:
    // 0x3c92a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c92ac:
    // 0x3c92ac: 0xc0538d8  jal         func_14E360
label_3c92b0:
    if (ctx->pc == 0x3C92B0u) {
        ctx->pc = 0x3C92B0u;
            // 0x3c92b0: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x3C92B4u;
        goto label_3c92b4;
    }
    ctx->pc = 0x3C92ACu;
    SET_GPR_U32(ctx, 31, 0x3C92B4u);
    ctx->pc = 0x3C92B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C92ACu;
            // 0x3c92b0: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C92B4u; }
        if (ctx->pc != 0x3C92B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C92B4u; }
        if (ctx->pc != 0x3C92B4u) { return; }
    }
    ctx->pc = 0x3C92B4u;
label_3c92b4:
    // 0x3c92b4: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c92b8:
    // 0x3c92b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c92bc:
    // 0x3c92bc: 0xc0747e8  jal         func_1D1FA0
label_3c92c0:
    if (ctx->pc == 0x3C92C0u) {
        ctx->pc = 0x3C92C0u;
            // 0x3c92c0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3C92C4u;
        goto label_3c92c4;
    }
    ctx->pc = 0x3C92BCu;
    SET_GPR_U32(ctx, 31, 0x3C92C4u);
    ctx->pc = 0x3C92C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C92BCu;
            // 0x3c92c0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C92C4u; }
        if (ctx->pc != 0x3C92C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C92C4u; }
        if (ctx->pc != 0x3C92C4u) { return; }
    }
    ctx->pc = 0x3C92C4u;
label_3c92c4:
    // 0x3c92c4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3c92c8:
    if (ctx->pc == 0x3C92C8u) {
        ctx->pc = 0x3C92CCu;
        goto label_3c92cc;
    }
    ctx->pc = 0x3C92C4u;
    {
        const bool branch_taken_0x3c92c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c92c4) {
            ctx->pc = 0x3C9330u;
            goto label_3c9330;
        }
    }
    ctx->pc = 0x3C92CCu;
label_3c92cc:
    // 0x3c92cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3c92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c92d0:
    // 0x3c92d0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_3c92d4:
    if (ctx->pc == 0x3C92D4u) {
        ctx->pc = 0x3C92D4u;
            // 0x3c92d4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x3C92D8u;
        goto label_3c92d8;
    }
    ctx->pc = 0x3C92D0u;
    {
        const bool branch_taken_0x3c92d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c92d0) {
            ctx->pc = 0x3C92D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C92D0u;
            // 0x3c92d4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C931Cu;
            goto label_3c931c;
        }
    }
    ctx->pc = 0x3C92D8u;
label_3c92d8:
    // 0x3c92d8: 0xc66000a4  lwc1        $f0, 0xA4($s3)
    ctx->pc = 0x3c92d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c92dc:
    // 0x3c92dc: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x3c92dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_3c92e0:
    // 0x3c92e0: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c92e4:
    // 0x3c92e4: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x3c92e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c92e8:
    // 0x3c92e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3c92e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c92ec:
    // 0x3c92ec: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x3c92ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3c92f0:
    // 0x3c92f0: 0xc054bbc  jal         func_152EF0
label_3c92f4:
    if (ctx->pc == 0x3C92F4u) {
        ctx->pc = 0x3C92F4u;
            // 0x3c92f4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x3C92F8u;
        goto label_3c92f8;
    }
    ctx->pc = 0x3C92F0u;
    SET_GPR_U32(ctx, 31, 0x3C92F8u);
    ctx->pc = 0x3C92F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C92F0u;
            // 0x3c92f4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C92F8u; }
        if (ctx->pc != 0x3C92F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C92F8u; }
        if (ctx->pc != 0x3C92F8u) { return; }
    }
    ctx->pc = 0x3C92F8u;
label_3c92f8:
    // 0x3c92f8: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3c92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c92fc:
    // 0x3c92fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c92fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9300:
    // 0x3c9300: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c9300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9304:
    // 0x3c9304: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3c9304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3c9308:
    // 0x3c9308: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3c9308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3c930c:
    // 0x3c930c: 0xc054c2c  jal         func_1530B0
label_3c9310:
    if (ctx->pc == 0x3C9310u) {
        ctx->pc = 0x3C9310u;
            // 0x3c9310: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3C9314u;
        goto label_3c9314;
    }
    ctx->pc = 0x3C930Cu;
    SET_GPR_U32(ctx, 31, 0x3C9314u);
    ctx->pc = 0x3C9310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C930Cu;
            // 0x3c9310: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9314u; }
        if (ctx->pc != 0x3C9314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9314u; }
        if (ctx->pc != 0x3C9314u) { return; }
    }
    ctx->pc = 0x3C9314u;
label_3c9314:
    // 0x3c9314: 0x10000006  b           . + 4 + (0x6 << 2)
label_3c9318:
    if (ctx->pc == 0x3C9318u) {
        ctx->pc = 0x3C931Cu;
        goto label_3c931c;
    }
    ctx->pc = 0x3C9314u;
    {
        const bool branch_taken_0x3c9314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9314) {
            ctx->pc = 0x3C9330u;
            goto label_3c9330;
        }
    }
    ctx->pc = 0x3C931Cu;
label_3c931c:
    // 0x3c931c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c931cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9320:
    // 0x3c9320: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c9320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9324:
    // 0x3c9324: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3c9324u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3c9328:
    // 0x3c9328: 0xc0538d8  jal         func_14E360
label_3c932c:
    if (ctx->pc == 0x3C932Cu) {
        ctx->pc = 0x3C932Cu;
            // 0x3c932c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3C9330u;
        goto label_3c9330;
    }
    ctx->pc = 0x3C9328u;
    SET_GPR_U32(ctx, 31, 0x3C9330u);
    ctx->pc = 0x3C932Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9328u;
            // 0x3c932c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9330u; }
        if (ctx->pc != 0x3C9330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9330u; }
        if (ctx->pc != 0x3C9330u) { return; }
    }
    ctx->pc = 0x3C9330u;
label_3c9330:
    // 0x3c9330: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c9330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c9334:
    // 0x3c9334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c9334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9338:
    // 0x3c9338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c9338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c933c:
    // 0x3c933c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c933cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9340:
    // 0x3c9340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9344:
    // 0x3c9344: 0x3e00008  jr          $ra
label_3c9348:
    if (ctx->pc == 0x3C9348u) {
        ctx->pc = 0x3C9348u;
            // 0x3c9348: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3C934Cu;
        goto label_3c934c;
    }
    ctx->pc = 0x3C9344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9344u;
            // 0x3c9348: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C934Cu;
label_3c934c:
    // 0x3c934c: 0x0  nop
    ctx->pc = 0x3c934cu;
    // NOP
label_3c9350:
    // 0x3c9350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c9350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c9354:
    // 0x3c9354: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c9354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c9358:
    // 0x3c9358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c9358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c935c:
    // 0x3c935c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c9360:
    // 0x3c9360: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c9360u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c9364:
    // 0x3c9364: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_3c9368:
    if (ctx->pc == 0x3C9368u) {
        ctx->pc = 0x3C9368u;
            // 0x3c9368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C936Cu;
        goto label_3c936c;
    }
    ctx->pc = 0x3C9364u;
    {
        const bool branch_taken_0x3c9364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C9368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9364u;
            // 0x3c9368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9364) {
            ctx->pc = 0x3C938Cu;
            goto label_3c938c;
        }
    }
    ctx->pc = 0x3C936Cu;
label_3c936c:
    // 0x3c936c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c9370:
    // 0x3c9370: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3c9374:
    if (ctx->pc == 0x3C9374u) {
        ctx->pc = 0x3C9374u;
            // 0x3c9374: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C9378u;
        goto label_3c9378;
    }
    ctx->pc = 0x3C9370u;
    {
        const bool branch_taken_0x3c9370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9370) {
            ctx->pc = 0x3C9374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9370u;
            // 0x3c9374: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9380u;
            goto label_3c9380;
        }
    }
    ctx->pc = 0x3C9378u;
label_3c9378:
    // 0x3c9378: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c937c:
    if (ctx->pc == 0x3C937Cu) {
        ctx->pc = 0x3C937Cu;
            // 0x3c937c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3C9380u;
        goto label_3c9380;
    }
    ctx->pc = 0x3C9378u;
    {
        const bool branch_taken_0x3c9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C937Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9378u;
            // 0x3c937c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9378) {
            ctx->pc = 0x3C9398u;
            goto label_3c9398;
        }
    }
    ctx->pc = 0x3C9380u;
label_3c9380:
    // 0x3c9380: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c9380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c9384:
    // 0x3c9384: 0x320f809  jalr        $t9
label_3c9388:
    if (ctx->pc == 0x3C9388u) {
        ctx->pc = 0x3C938Cu;
        goto label_3c938c;
    }
    ctx->pc = 0x3C9384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C938Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C938Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C938Cu; }
            if (ctx->pc != 0x3C938Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C938Cu;
label_3c938c:
    // 0x3c938c: 0xc0b93ac  jal         func_2E4EB0
label_3c9390:
    if (ctx->pc == 0x3C9390u) {
        ctx->pc = 0x3C9390u;
            // 0x3c9390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9394u;
        goto label_3c9394;
    }
    ctx->pc = 0x3C938Cu;
    SET_GPR_U32(ctx, 31, 0x3C9394u);
    ctx->pc = 0x3C9390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C938Cu;
            // 0x3c9390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4EB0u;
    if (runtime->hasFunction(0x2E4EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2E4EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9394u; }
        if (ctx->pc != 0x3C9394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4EB0_0x2e4eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9394u; }
        if (ctx->pc != 0x3C9394u) { return; }
    }
    ctx->pc = 0x3C9394u;
label_3c9394:
    // 0x3c9394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c9394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9398:
    // 0x3c9398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c939c:
    // 0x3c939c: 0x3e00008  jr          $ra
label_3c93a0:
    if (ctx->pc == 0x3C93A0u) {
        ctx->pc = 0x3C93A0u;
            // 0x3c93a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3C93A4u;
        goto label_3c93a4;
    }
    ctx->pc = 0x3C939Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C939Cu;
            // 0x3c93a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C93A4u;
label_3c93a4:
    // 0x3c93a4: 0x0  nop
    ctx->pc = 0x3c93a4u;
    // NOP
label_3c93a8:
    // 0x3c93a8: 0x0  nop
    ctx->pc = 0x3c93a8u;
    // NOP
label_3c93ac:
    // 0x3c93ac: 0x0  nop
    ctx->pc = 0x3c93acu;
    // NOP
}
