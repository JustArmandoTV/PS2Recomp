#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E8D70
// Address: 0x4e8d70 - 0x4e9480
void sub_004E8D70_0x4e8d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8D70_0x4e8d70");
#endif

    switch (ctx->pc) {
        case 0x4e8d70u: goto label_4e8d70;
        case 0x4e8d74u: goto label_4e8d74;
        case 0x4e8d78u: goto label_4e8d78;
        case 0x4e8d7cu: goto label_4e8d7c;
        case 0x4e8d80u: goto label_4e8d80;
        case 0x4e8d84u: goto label_4e8d84;
        case 0x4e8d88u: goto label_4e8d88;
        case 0x4e8d8cu: goto label_4e8d8c;
        case 0x4e8d90u: goto label_4e8d90;
        case 0x4e8d94u: goto label_4e8d94;
        case 0x4e8d98u: goto label_4e8d98;
        case 0x4e8d9cu: goto label_4e8d9c;
        case 0x4e8da0u: goto label_4e8da0;
        case 0x4e8da4u: goto label_4e8da4;
        case 0x4e8da8u: goto label_4e8da8;
        case 0x4e8dacu: goto label_4e8dac;
        case 0x4e8db0u: goto label_4e8db0;
        case 0x4e8db4u: goto label_4e8db4;
        case 0x4e8db8u: goto label_4e8db8;
        case 0x4e8dbcu: goto label_4e8dbc;
        case 0x4e8dc0u: goto label_4e8dc0;
        case 0x4e8dc4u: goto label_4e8dc4;
        case 0x4e8dc8u: goto label_4e8dc8;
        case 0x4e8dccu: goto label_4e8dcc;
        case 0x4e8dd0u: goto label_4e8dd0;
        case 0x4e8dd4u: goto label_4e8dd4;
        case 0x4e8dd8u: goto label_4e8dd8;
        case 0x4e8ddcu: goto label_4e8ddc;
        case 0x4e8de0u: goto label_4e8de0;
        case 0x4e8de4u: goto label_4e8de4;
        case 0x4e8de8u: goto label_4e8de8;
        case 0x4e8decu: goto label_4e8dec;
        case 0x4e8df0u: goto label_4e8df0;
        case 0x4e8df4u: goto label_4e8df4;
        case 0x4e8df8u: goto label_4e8df8;
        case 0x4e8dfcu: goto label_4e8dfc;
        case 0x4e8e00u: goto label_4e8e00;
        case 0x4e8e04u: goto label_4e8e04;
        case 0x4e8e08u: goto label_4e8e08;
        case 0x4e8e0cu: goto label_4e8e0c;
        case 0x4e8e10u: goto label_4e8e10;
        case 0x4e8e14u: goto label_4e8e14;
        case 0x4e8e18u: goto label_4e8e18;
        case 0x4e8e1cu: goto label_4e8e1c;
        case 0x4e8e20u: goto label_4e8e20;
        case 0x4e8e24u: goto label_4e8e24;
        case 0x4e8e28u: goto label_4e8e28;
        case 0x4e8e2cu: goto label_4e8e2c;
        case 0x4e8e30u: goto label_4e8e30;
        case 0x4e8e34u: goto label_4e8e34;
        case 0x4e8e38u: goto label_4e8e38;
        case 0x4e8e3cu: goto label_4e8e3c;
        case 0x4e8e40u: goto label_4e8e40;
        case 0x4e8e44u: goto label_4e8e44;
        case 0x4e8e48u: goto label_4e8e48;
        case 0x4e8e4cu: goto label_4e8e4c;
        case 0x4e8e50u: goto label_4e8e50;
        case 0x4e8e54u: goto label_4e8e54;
        case 0x4e8e58u: goto label_4e8e58;
        case 0x4e8e5cu: goto label_4e8e5c;
        case 0x4e8e60u: goto label_4e8e60;
        case 0x4e8e64u: goto label_4e8e64;
        case 0x4e8e68u: goto label_4e8e68;
        case 0x4e8e6cu: goto label_4e8e6c;
        case 0x4e8e70u: goto label_4e8e70;
        case 0x4e8e74u: goto label_4e8e74;
        case 0x4e8e78u: goto label_4e8e78;
        case 0x4e8e7cu: goto label_4e8e7c;
        case 0x4e8e80u: goto label_4e8e80;
        case 0x4e8e84u: goto label_4e8e84;
        case 0x4e8e88u: goto label_4e8e88;
        case 0x4e8e8cu: goto label_4e8e8c;
        case 0x4e8e90u: goto label_4e8e90;
        case 0x4e8e94u: goto label_4e8e94;
        case 0x4e8e98u: goto label_4e8e98;
        case 0x4e8e9cu: goto label_4e8e9c;
        case 0x4e8ea0u: goto label_4e8ea0;
        case 0x4e8ea4u: goto label_4e8ea4;
        case 0x4e8ea8u: goto label_4e8ea8;
        case 0x4e8eacu: goto label_4e8eac;
        case 0x4e8eb0u: goto label_4e8eb0;
        case 0x4e8eb4u: goto label_4e8eb4;
        case 0x4e8eb8u: goto label_4e8eb8;
        case 0x4e8ebcu: goto label_4e8ebc;
        case 0x4e8ec0u: goto label_4e8ec0;
        case 0x4e8ec4u: goto label_4e8ec4;
        case 0x4e8ec8u: goto label_4e8ec8;
        case 0x4e8eccu: goto label_4e8ecc;
        case 0x4e8ed0u: goto label_4e8ed0;
        case 0x4e8ed4u: goto label_4e8ed4;
        case 0x4e8ed8u: goto label_4e8ed8;
        case 0x4e8edcu: goto label_4e8edc;
        case 0x4e8ee0u: goto label_4e8ee0;
        case 0x4e8ee4u: goto label_4e8ee4;
        case 0x4e8ee8u: goto label_4e8ee8;
        case 0x4e8eecu: goto label_4e8eec;
        case 0x4e8ef0u: goto label_4e8ef0;
        case 0x4e8ef4u: goto label_4e8ef4;
        case 0x4e8ef8u: goto label_4e8ef8;
        case 0x4e8efcu: goto label_4e8efc;
        case 0x4e8f00u: goto label_4e8f00;
        case 0x4e8f04u: goto label_4e8f04;
        case 0x4e8f08u: goto label_4e8f08;
        case 0x4e8f0cu: goto label_4e8f0c;
        case 0x4e8f10u: goto label_4e8f10;
        case 0x4e8f14u: goto label_4e8f14;
        case 0x4e8f18u: goto label_4e8f18;
        case 0x4e8f1cu: goto label_4e8f1c;
        case 0x4e8f20u: goto label_4e8f20;
        case 0x4e8f24u: goto label_4e8f24;
        case 0x4e8f28u: goto label_4e8f28;
        case 0x4e8f2cu: goto label_4e8f2c;
        case 0x4e8f30u: goto label_4e8f30;
        case 0x4e8f34u: goto label_4e8f34;
        case 0x4e8f38u: goto label_4e8f38;
        case 0x4e8f3cu: goto label_4e8f3c;
        case 0x4e8f40u: goto label_4e8f40;
        case 0x4e8f44u: goto label_4e8f44;
        case 0x4e8f48u: goto label_4e8f48;
        case 0x4e8f4cu: goto label_4e8f4c;
        case 0x4e8f50u: goto label_4e8f50;
        case 0x4e8f54u: goto label_4e8f54;
        case 0x4e8f58u: goto label_4e8f58;
        case 0x4e8f5cu: goto label_4e8f5c;
        case 0x4e8f60u: goto label_4e8f60;
        case 0x4e8f64u: goto label_4e8f64;
        case 0x4e8f68u: goto label_4e8f68;
        case 0x4e8f6cu: goto label_4e8f6c;
        case 0x4e8f70u: goto label_4e8f70;
        case 0x4e8f74u: goto label_4e8f74;
        case 0x4e8f78u: goto label_4e8f78;
        case 0x4e8f7cu: goto label_4e8f7c;
        case 0x4e8f80u: goto label_4e8f80;
        case 0x4e8f84u: goto label_4e8f84;
        case 0x4e8f88u: goto label_4e8f88;
        case 0x4e8f8cu: goto label_4e8f8c;
        case 0x4e8f90u: goto label_4e8f90;
        case 0x4e8f94u: goto label_4e8f94;
        case 0x4e8f98u: goto label_4e8f98;
        case 0x4e8f9cu: goto label_4e8f9c;
        case 0x4e8fa0u: goto label_4e8fa0;
        case 0x4e8fa4u: goto label_4e8fa4;
        case 0x4e8fa8u: goto label_4e8fa8;
        case 0x4e8facu: goto label_4e8fac;
        case 0x4e8fb0u: goto label_4e8fb0;
        case 0x4e8fb4u: goto label_4e8fb4;
        case 0x4e8fb8u: goto label_4e8fb8;
        case 0x4e8fbcu: goto label_4e8fbc;
        case 0x4e8fc0u: goto label_4e8fc0;
        case 0x4e8fc4u: goto label_4e8fc4;
        case 0x4e8fc8u: goto label_4e8fc8;
        case 0x4e8fccu: goto label_4e8fcc;
        case 0x4e8fd0u: goto label_4e8fd0;
        case 0x4e8fd4u: goto label_4e8fd4;
        case 0x4e8fd8u: goto label_4e8fd8;
        case 0x4e8fdcu: goto label_4e8fdc;
        case 0x4e8fe0u: goto label_4e8fe0;
        case 0x4e8fe4u: goto label_4e8fe4;
        case 0x4e8fe8u: goto label_4e8fe8;
        case 0x4e8fecu: goto label_4e8fec;
        case 0x4e8ff0u: goto label_4e8ff0;
        case 0x4e8ff4u: goto label_4e8ff4;
        case 0x4e8ff8u: goto label_4e8ff8;
        case 0x4e8ffcu: goto label_4e8ffc;
        case 0x4e9000u: goto label_4e9000;
        case 0x4e9004u: goto label_4e9004;
        case 0x4e9008u: goto label_4e9008;
        case 0x4e900cu: goto label_4e900c;
        case 0x4e9010u: goto label_4e9010;
        case 0x4e9014u: goto label_4e9014;
        case 0x4e9018u: goto label_4e9018;
        case 0x4e901cu: goto label_4e901c;
        case 0x4e9020u: goto label_4e9020;
        case 0x4e9024u: goto label_4e9024;
        case 0x4e9028u: goto label_4e9028;
        case 0x4e902cu: goto label_4e902c;
        case 0x4e9030u: goto label_4e9030;
        case 0x4e9034u: goto label_4e9034;
        case 0x4e9038u: goto label_4e9038;
        case 0x4e903cu: goto label_4e903c;
        case 0x4e9040u: goto label_4e9040;
        case 0x4e9044u: goto label_4e9044;
        case 0x4e9048u: goto label_4e9048;
        case 0x4e904cu: goto label_4e904c;
        case 0x4e9050u: goto label_4e9050;
        case 0x4e9054u: goto label_4e9054;
        case 0x4e9058u: goto label_4e9058;
        case 0x4e905cu: goto label_4e905c;
        case 0x4e9060u: goto label_4e9060;
        case 0x4e9064u: goto label_4e9064;
        case 0x4e9068u: goto label_4e9068;
        case 0x4e906cu: goto label_4e906c;
        case 0x4e9070u: goto label_4e9070;
        case 0x4e9074u: goto label_4e9074;
        case 0x4e9078u: goto label_4e9078;
        case 0x4e907cu: goto label_4e907c;
        case 0x4e9080u: goto label_4e9080;
        case 0x4e9084u: goto label_4e9084;
        case 0x4e9088u: goto label_4e9088;
        case 0x4e908cu: goto label_4e908c;
        case 0x4e9090u: goto label_4e9090;
        case 0x4e9094u: goto label_4e9094;
        case 0x4e9098u: goto label_4e9098;
        case 0x4e909cu: goto label_4e909c;
        case 0x4e90a0u: goto label_4e90a0;
        case 0x4e90a4u: goto label_4e90a4;
        case 0x4e90a8u: goto label_4e90a8;
        case 0x4e90acu: goto label_4e90ac;
        case 0x4e90b0u: goto label_4e90b0;
        case 0x4e90b4u: goto label_4e90b4;
        case 0x4e90b8u: goto label_4e90b8;
        case 0x4e90bcu: goto label_4e90bc;
        case 0x4e90c0u: goto label_4e90c0;
        case 0x4e90c4u: goto label_4e90c4;
        case 0x4e90c8u: goto label_4e90c8;
        case 0x4e90ccu: goto label_4e90cc;
        case 0x4e90d0u: goto label_4e90d0;
        case 0x4e90d4u: goto label_4e90d4;
        case 0x4e90d8u: goto label_4e90d8;
        case 0x4e90dcu: goto label_4e90dc;
        case 0x4e90e0u: goto label_4e90e0;
        case 0x4e90e4u: goto label_4e90e4;
        case 0x4e90e8u: goto label_4e90e8;
        case 0x4e90ecu: goto label_4e90ec;
        case 0x4e90f0u: goto label_4e90f0;
        case 0x4e90f4u: goto label_4e90f4;
        case 0x4e90f8u: goto label_4e90f8;
        case 0x4e90fcu: goto label_4e90fc;
        case 0x4e9100u: goto label_4e9100;
        case 0x4e9104u: goto label_4e9104;
        case 0x4e9108u: goto label_4e9108;
        case 0x4e910cu: goto label_4e910c;
        case 0x4e9110u: goto label_4e9110;
        case 0x4e9114u: goto label_4e9114;
        case 0x4e9118u: goto label_4e9118;
        case 0x4e911cu: goto label_4e911c;
        case 0x4e9120u: goto label_4e9120;
        case 0x4e9124u: goto label_4e9124;
        case 0x4e9128u: goto label_4e9128;
        case 0x4e912cu: goto label_4e912c;
        case 0x4e9130u: goto label_4e9130;
        case 0x4e9134u: goto label_4e9134;
        case 0x4e9138u: goto label_4e9138;
        case 0x4e913cu: goto label_4e913c;
        case 0x4e9140u: goto label_4e9140;
        case 0x4e9144u: goto label_4e9144;
        case 0x4e9148u: goto label_4e9148;
        case 0x4e914cu: goto label_4e914c;
        case 0x4e9150u: goto label_4e9150;
        case 0x4e9154u: goto label_4e9154;
        case 0x4e9158u: goto label_4e9158;
        case 0x4e915cu: goto label_4e915c;
        case 0x4e9160u: goto label_4e9160;
        case 0x4e9164u: goto label_4e9164;
        case 0x4e9168u: goto label_4e9168;
        case 0x4e916cu: goto label_4e916c;
        case 0x4e9170u: goto label_4e9170;
        case 0x4e9174u: goto label_4e9174;
        case 0x4e9178u: goto label_4e9178;
        case 0x4e917cu: goto label_4e917c;
        case 0x4e9180u: goto label_4e9180;
        case 0x4e9184u: goto label_4e9184;
        case 0x4e9188u: goto label_4e9188;
        case 0x4e918cu: goto label_4e918c;
        case 0x4e9190u: goto label_4e9190;
        case 0x4e9194u: goto label_4e9194;
        case 0x4e9198u: goto label_4e9198;
        case 0x4e919cu: goto label_4e919c;
        case 0x4e91a0u: goto label_4e91a0;
        case 0x4e91a4u: goto label_4e91a4;
        case 0x4e91a8u: goto label_4e91a8;
        case 0x4e91acu: goto label_4e91ac;
        case 0x4e91b0u: goto label_4e91b0;
        case 0x4e91b4u: goto label_4e91b4;
        case 0x4e91b8u: goto label_4e91b8;
        case 0x4e91bcu: goto label_4e91bc;
        case 0x4e91c0u: goto label_4e91c0;
        case 0x4e91c4u: goto label_4e91c4;
        case 0x4e91c8u: goto label_4e91c8;
        case 0x4e91ccu: goto label_4e91cc;
        case 0x4e91d0u: goto label_4e91d0;
        case 0x4e91d4u: goto label_4e91d4;
        case 0x4e91d8u: goto label_4e91d8;
        case 0x4e91dcu: goto label_4e91dc;
        case 0x4e91e0u: goto label_4e91e0;
        case 0x4e91e4u: goto label_4e91e4;
        case 0x4e91e8u: goto label_4e91e8;
        case 0x4e91ecu: goto label_4e91ec;
        case 0x4e91f0u: goto label_4e91f0;
        case 0x4e91f4u: goto label_4e91f4;
        case 0x4e91f8u: goto label_4e91f8;
        case 0x4e91fcu: goto label_4e91fc;
        case 0x4e9200u: goto label_4e9200;
        case 0x4e9204u: goto label_4e9204;
        case 0x4e9208u: goto label_4e9208;
        case 0x4e920cu: goto label_4e920c;
        case 0x4e9210u: goto label_4e9210;
        case 0x4e9214u: goto label_4e9214;
        case 0x4e9218u: goto label_4e9218;
        case 0x4e921cu: goto label_4e921c;
        case 0x4e9220u: goto label_4e9220;
        case 0x4e9224u: goto label_4e9224;
        case 0x4e9228u: goto label_4e9228;
        case 0x4e922cu: goto label_4e922c;
        case 0x4e9230u: goto label_4e9230;
        case 0x4e9234u: goto label_4e9234;
        case 0x4e9238u: goto label_4e9238;
        case 0x4e923cu: goto label_4e923c;
        case 0x4e9240u: goto label_4e9240;
        case 0x4e9244u: goto label_4e9244;
        case 0x4e9248u: goto label_4e9248;
        case 0x4e924cu: goto label_4e924c;
        case 0x4e9250u: goto label_4e9250;
        case 0x4e9254u: goto label_4e9254;
        case 0x4e9258u: goto label_4e9258;
        case 0x4e925cu: goto label_4e925c;
        case 0x4e9260u: goto label_4e9260;
        case 0x4e9264u: goto label_4e9264;
        case 0x4e9268u: goto label_4e9268;
        case 0x4e926cu: goto label_4e926c;
        case 0x4e9270u: goto label_4e9270;
        case 0x4e9274u: goto label_4e9274;
        case 0x4e9278u: goto label_4e9278;
        case 0x4e927cu: goto label_4e927c;
        case 0x4e9280u: goto label_4e9280;
        case 0x4e9284u: goto label_4e9284;
        case 0x4e9288u: goto label_4e9288;
        case 0x4e928cu: goto label_4e928c;
        case 0x4e9290u: goto label_4e9290;
        case 0x4e9294u: goto label_4e9294;
        case 0x4e9298u: goto label_4e9298;
        case 0x4e929cu: goto label_4e929c;
        case 0x4e92a0u: goto label_4e92a0;
        case 0x4e92a4u: goto label_4e92a4;
        case 0x4e92a8u: goto label_4e92a8;
        case 0x4e92acu: goto label_4e92ac;
        case 0x4e92b0u: goto label_4e92b0;
        case 0x4e92b4u: goto label_4e92b4;
        case 0x4e92b8u: goto label_4e92b8;
        case 0x4e92bcu: goto label_4e92bc;
        case 0x4e92c0u: goto label_4e92c0;
        case 0x4e92c4u: goto label_4e92c4;
        case 0x4e92c8u: goto label_4e92c8;
        case 0x4e92ccu: goto label_4e92cc;
        case 0x4e92d0u: goto label_4e92d0;
        case 0x4e92d4u: goto label_4e92d4;
        case 0x4e92d8u: goto label_4e92d8;
        case 0x4e92dcu: goto label_4e92dc;
        case 0x4e92e0u: goto label_4e92e0;
        case 0x4e92e4u: goto label_4e92e4;
        case 0x4e92e8u: goto label_4e92e8;
        case 0x4e92ecu: goto label_4e92ec;
        case 0x4e92f0u: goto label_4e92f0;
        case 0x4e92f4u: goto label_4e92f4;
        case 0x4e92f8u: goto label_4e92f8;
        case 0x4e92fcu: goto label_4e92fc;
        case 0x4e9300u: goto label_4e9300;
        case 0x4e9304u: goto label_4e9304;
        case 0x4e9308u: goto label_4e9308;
        case 0x4e930cu: goto label_4e930c;
        case 0x4e9310u: goto label_4e9310;
        case 0x4e9314u: goto label_4e9314;
        case 0x4e9318u: goto label_4e9318;
        case 0x4e931cu: goto label_4e931c;
        case 0x4e9320u: goto label_4e9320;
        case 0x4e9324u: goto label_4e9324;
        case 0x4e9328u: goto label_4e9328;
        case 0x4e932cu: goto label_4e932c;
        case 0x4e9330u: goto label_4e9330;
        case 0x4e9334u: goto label_4e9334;
        case 0x4e9338u: goto label_4e9338;
        case 0x4e933cu: goto label_4e933c;
        case 0x4e9340u: goto label_4e9340;
        case 0x4e9344u: goto label_4e9344;
        case 0x4e9348u: goto label_4e9348;
        case 0x4e934cu: goto label_4e934c;
        case 0x4e9350u: goto label_4e9350;
        case 0x4e9354u: goto label_4e9354;
        case 0x4e9358u: goto label_4e9358;
        case 0x4e935cu: goto label_4e935c;
        case 0x4e9360u: goto label_4e9360;
        case 0x4e9364u: goto label_4e9364;
        case 0x4e9368u: goto label_4e9368;
        case 0x4e936cu: goto label_4e936c;
        case 0x4e9370u: goto label_4e9370;
        case 0x4e9374u: goto label_4e9374;
        case 0x4e9378u: goto label_4e9378;
        case 0x4e937cu: goto label_4e937c;
        case 0x4e9380u: goto label_4e9380;
        case 0x4e9384u: goto label_4e9384;
        case 0x4e9388u: goto label_4e9388;
        case 0x4e938cu: goto label_4e938c;
        case 0x4e9390u: goto label_4e9390;
        case 0x4e9394u: goto label_4e9394;
        case 0x4e9398u: goto label_4e9398;
        case 0x4e939cu: goto label_4e939c;
        case 0x4e93a0u: goto label_4e93a0;
        case 0x4e93a4u: goto label_4e93a4;
        case 0x4e93a8u: goto label_4e93a8;
        case 0x4e93acu: goto label_4e93ac;
        case 0x4e93b0u: goto label_4e93b0;
        case 0x4e93b4u: goto label_4e93b4;
        case 0x4e93b8u: goto label_4e93b8;
        case 0x4e93bcu: goto label_4e93bc;
        case 0x4e93c0u: goto label_4e93c0;
        case 0x4e93c4u: goto label_4e93c4;
        case 0x4e93c8u: goto label_4e93c8;
        case 0x4e93ccu: goto label_4e93cc;
        case 0x4e93d0u: goto label_4e93d0;
        case 0x4e93d4u: goto label_4e93d4;
        case 0x4e93d8u: goto label_4e93d8;
        case 0x4e93dcu: goto label_4e93dc;
        case 0x4e93e0u: goto label_4e93e0;
        case 0x4e93e4u: goto label_4e93e4;
        case 0x4e93e8u: goto label_4e93e8;
        case 0x4e93ecu: goto label_4e93ec;
        case 0x4e93f0u: goto label_4e93f0;
        case 0x4e93f4u: goto label_4e93f4;
        case 0x4e93f8u: goto label_4e93f8;
        case 0x4e93fcu: goto label_4e93fc;
        case 0x4e9400u: goto label_4e9400;
        case 0x4e9404u: goto label_4e9404;
        case 0x4e9408u: goto label_4e9408;
        case 0x4e940cu: goto label_4e940c;
        case 0x4e9410u: goto label_4e9410;
        case 0x4e9414u: goto label_4e9414;
        case 0x4e9418u: goto label_4e9418;
        case 0x4e941cu: goto label_4e941c;
        case 0x4e9420u: goto label_4e9420;
        case 0x4e9424u: goto label_4e9424;
        case 0x4e9428u: goto label_4e9428;
        case 0x4e942cu: goto label_4e942c;
        case 0x4e9430u: goto label_4e9430;
        case 0x4e9434u: goto label_4e9434;
        case 0x4e9438u: goto label_4e9438;
        case 0x4e943cu: goto label_4e943c;
        case 0x4e9440u: goto label_4e9440;
        case 0x4e9444u: goto label_4e9444;
        case 0x4e9448u: goto label_4e9448;
        case 0x4e944cu: goto label_4e944c;
        case 0x4e9450u: goto label_4e9450;
        case 0x4e9454u: goto label_4e9454;
        case 0x4e9458u: goto label_4e9458;
        case 0x4e945cu: goto label_4e945c;
        case 0x4e9460u: goto label_4e9460;
        case 0x4e9464u: goto label_4e9464;
        case 0x4e9468u: goto label_4e9468;
        case 0x4e946cu: goto label_4e946c;
        case 0x4e9470u: goto label_4e9470;
        case 0x4e9474u: goto label_4e9474;
        case 0x4e9478u: goto label_4e9478;
        case 0x4e947cu: goto label_4e947c;
        default: break;
    }

    ctx->pc = 0x4e8d70u;

label_4e8d70:
    // 0x4e8d70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4e8d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4e8d74:
    // 0x4e8d74: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e8d78:
    // 0x4e8d78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4e8d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4e8d7c:
    // 0x4e8d7c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4e8d7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4e8d80:
    // 0x4e8d80: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e8d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e8d84:
    // 0x4e8d84: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x4e8d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4e8d88:
    // 0x4e8d88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4e8d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4e8d8c:
    // 0x4e8d8c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4e8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4e8d90:
    // 0x4e8d90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e8d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e8d94:
    // 0x4e8d94: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e8d94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e8d98:
    // 0x4e8d98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e8d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4e8d9c:
    // 0x4e8d9c: 0x26528e20  addiu       $s2, $s2, -0x71E0
    ctx->pc = 0x4e8d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938144));
label_4e8da0:
    // 0x4e8da0: 0x8450838a  lh          $s0, -0x7C76($v0)
    ctx->pc = 0x4e8da0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935434)));
label_4e8da4:
    // 0x4e8da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e8da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8da8:
    // 0x4e8da8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e8dac:
    // 0x4e8dac: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4e8dacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4e8db0:
    // 0x4e8db0: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x4e8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
label_4e8db4:
    // 0x4e8db4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4e8db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e8db8:
    // 0x4e8db8: 0x0  nop
    ctx->pc = 0x4e8db8u;
    // NOP
label_4e8dbc:
    // 0x4e8dbc: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x4e8dbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_4e8dc0:
    // 0x4e8dc0: 0x3c0241ac  lui         $v0, 0x41AC
    ctx->pc = 0x4e8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16812 << 16));
label_4e8dc4:
    // 0x4e8dc4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4e8dc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4e8dc8:
    // 0x4e8dc8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4e8dc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4e8dcc:
    // 0x4e8dcc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4e8dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4e8dd0:
    // 0x4e8dd0: 0xc6560008  lwc1        $f22, 0x8($s2)
    ctx->pc = 0x4e8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4e8dd4:
    // 0x4e8dd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e8dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e8dd8:
    // 0x4e8dd8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x4e8dd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_4e8ddc:
    // 0x4e8ddc: 0x90840194  lbu         $a0, 0x194($a0)
    ctx->pc = 0x4e8ddcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 404)));
label_4e8de0:
    // 0x4e8de0: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x4e8de0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4e8de4:
    // 0x4e8de4: 0x46160d01  sub.s       $f20, $f1, $f22
    ctx->pc = 0x4e8de4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_4e8de8:
    // 0x4e8de8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e8dec:
    // 0x4e8dec: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x4e8decu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e8df0:
    // 0x4e8df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e8df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8df4:
    // 0x4e8df4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e8df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e8df8:
    // 0x4e8df8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4e8df8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4e8dfc:
    // 0x4e8dfc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e8e00:
    // 0x4e8e00: 0x84538388  lh          $s3, -0x7C78($v0)
    ctx->pc = 0x4e8e00u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935432)));
label_4e8e04:
    // 0x4e8e04: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e8e08:
    // 0x4e8e08: 0x46000e01  sub.s       $f24, $f1, $f0
    ctx->pc = 0x4e8e08u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4e8e0c:
    // 0x4e8e0c: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x4e8e0cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4e8e10:
    // 0x4e8e10: 0x4602b540  add.s       $f21, $f22, $f2
    ctx->pc = 0x4e8e10u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
label_4e8e14:
    // 0x4e8e14: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4e8e14u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8e18:
    // 0x4e8e18: 0x0  nop
    ctx->pc = 0x4e8e18u;
    // NOP
label_4e8e1c:
    // 0x4e8e1c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e8e20:
    // 0x4e8e20: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8e20u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8e24:
    // 0x4e8e24: 0x0  nop
    ctx->pc = 0x4e8e24u;
    // NOP
label_4e8e28:
    // 0x4e8e28: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e8e2c:
    // 0x4e8e2c: 0x4616ab01  sub.s       $f12, $f21, $f22
    ctx->pc = 0x4e8e2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
label_4e8e30:
    // 0x4e8e30: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e8e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e8e34:
    // 0x4e8e34: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x4e8e34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_4e8e38:
    // 0x4e8e38: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x4e8e38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_4e8e3c:
    // 0x4e8e3c: 0xc0bc284  jal         func_2F0A10
label_4e8e40:
    if (ctx->pc == 0x4E8E40u) {
        ctx->pc = 0x4E8E40u;
            // 0x4e8e40: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x4E8E44u;
        goto label_4e8e44;
    }
    ctx->pc = 0x4E8E3Cu;
    SET_GPR_U32(ctx, 31, 0x4E8E44u);
    ctx->pc = 0x4E8E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8E3Cu;
            // 0x4e8e40: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8E44u; }
        if (ctx->pc != 0x4E8E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8E44u; }
        if (ctx->pc != 0x4E8E44u) { return; }
    }
    ctx->pc = 0x4E8E44u;
label_4e8e44:
    // 0x4e8e44: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4e8e44u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8e48:
    // 0x4e8e48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e8e4c:
    // 0x4e8e4c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e8e50:
    // 0x4e8e50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e8e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8e54:
    // 0x4e8e54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e8e58:
    // 0x4e8e58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e8e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e8e5c:
    // 0x4e8e5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e8e60:
    // 0x4e8e60: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8e60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8e64:
    // 0x4e8e64: 0x0  nop
    ctx->pc = 0x4e8e64u;
    // NOP
label_4e8e68:
    // 0x4e8e68: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e8e6c:
    // 0x4e8e6c: 0x4616a300  add.s       $f12, $f20, $f22
    ctx->pc = 0x4e8e6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_4e8e70:
    // 0x4e8e70: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x4e8e70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_4e8e74:
    // 0x4e8e74: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x4e8e74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_4e8e78:
    // 0x4e8e78: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e8e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e8e7c:
    // 0x4e8e7c: 0xc0bc284  jal         func_2F0A10
label_4e8e80:
    if (ctx->pc == 0x4E8E80u) {
        ctx->pc = 0x4E8E80u;
            // 0x4e8e80: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x4E8E84u;
        goto label_4e8e84;
    }
    ctx->pc = 0x4E8E7Cu;
    SET_GPR_U32(ctx, 31, 0x4E8E84u);
    ctx->pc = 0x4E8E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8E7Cu;
            // 0x4e8e80: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8E84u; }
        if (ctx->pc != 0x4E8E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8E84u; }
        if (ctx->pc != 0x4E8E84u) { return; }
    }
    ctx->pc = 0x4E8E84u;
label_4e8e84:
    // 0x4e8e84: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4e8e84u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8e88:
    // 0x4e8e88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e8e8c:
    // 0x4e8e8c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e8e90:
    // 0x4e8e90: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4e8e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4e8e94:
    // 0x4e8e94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e8e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e8e98:
    // 0x4e8e98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e8e9c:
    // 0x4e8e9c: 0x24a58e30  addiu       $a1, $a1, -0x71D0
    ctx->pc = 0x4e8e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938160));
label_4e8ea0:
    // 0x4e8ea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e8ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e8ea4:
    // 0x4e8ea4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8ea4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8ea8:
    // 0x4e8ea8: 0x0  nop
    ctx->pc = 0x4e8ea8u;
    // NOP
label_4e8eac:
    // 0x4e8eac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e8eb0:
    // 0x4e8eb0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4e8eb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4e8eb4:
    // 0x4e8eb4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x4e8eb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_4e8eb8:
    // 0x4e8eb8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x4e8eb8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_4e8ebc:
    // 0x4e8ebc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e8ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e8ec0:
    // 0x4e8ec0: 0xc0bc284  jal         func_2F0A10
label_4e8ec4:
    if (ctx->pc == 0x4E8EC4u) {
        ctx->pc = 0x4E8EC4u;
            // 0x4e8ec4: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x4E8EC8u;
        goto label_4e8ec8;
    }
    ctx->pc = 0x4E8EC0u;
    SET_GPR_U32(ctx, 31, 0x4E8EC8u);
    ctx->pc = 0x4E8EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8EC0u;
            // 0x4e8ec4: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8EC8u; }
        if (ctx->pc != 0x4E8EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8EC8u; }
        if (ctx->pc != 0x4E8EC8u) { return; }
    }
    ctx->pc = 0x4E8EC8u;
label_4e8ec8:
    // 0x4e8ec8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4e8ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4e8ecc:
    // 0x4e8ecc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4e8eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4e8ed0:
    // 0x4e8ed0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e8ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e8ed4:
    // 0x4e8ed4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4e8ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4e8ed8:
    // 0x4e8ed8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4e8ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e8edc:
    // 0x4e8edc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4e8edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4e8ee0:
    // 0x4e8ee0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e8ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8ee4:
    // 0x4e8ee4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4e8ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4e8ee8:
    // 0x4e8ee8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e8ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e8eec:
    // 0x4e8eec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e8eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e8ef0:
    // 0x4e8ef0: 0x3e00008  jr          $ra
label_4e8ef4:
    if (ctx->pc == 0x4E8EF4u) {
        ctx->pc = 0x4E8EF4u;
            // 0x4e8ef4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4E8EF8u;
        goto label_4e8ef8;
    }
    ctx->pc = 0x4E8EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8EF0u;
            // 0x4e8ef4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E8EF8u;
label_4e8ef8:
    // 0x4e8ef8: 0x0  nop
    ctx->pc = 0x4e8ef8u;
    // NOP
label_4e8efc:
    // 0x4e8efc: 0x0  nop
    ctx->pc = 0x4e8efcu;
    // NOP
label_4e8f00:
    // 0x4e8f00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4e8f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4e8f04:
    // 0x4e8f04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e8f08:
    // 0x4e8f08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4e8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4e8f0c:
    // 0x4e8f0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4e8f10:
    // 0x4e8f10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e8f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e8f14:
    // 0x4e8f14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4e8f14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8f18:
    // 0x4e8f18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e8f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4e8f1c:
    // 0x4e8f1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e8f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e8f20:
    // 0x4e8f20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e8f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e8f24:
    // 0x4e8f24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e8f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e8f28:
    // 0x4e8f28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e8f28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e8f2c:
    // 0x4e8f2c: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4e8f2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e8f30:
    // 0x4e8f30: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4e8f34:
    if (ctx->pc == 0x4E8F34u) {
        ctx->pc = 0x4E8F38u;
        goto label_4e8f38;
    }
    ctx->pc = 0x4E8F30u;
    {
        const bool branch_taken_0x4e8f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e8f30) {
            ctx->pc = 0x4E8F40u;
            goto label_4e8f40;
        }
    }
    ctx->pc = 0x4E8F38u;
label_4e8f38:
    // 0x4e8f38: 0x10000148  b           . + 4 + (0x148 << 2)
label_4e8f3c:
    if (ctx->pc == 0x4E8F3Cu) {
        ctx->pc = 0x4E8F3Cu;
            // 0x4e8f3c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4E8F40u;
        goto label_4e8f40;
    }
    ctx->pc = 0x4E8F38u;
    {
        const bool branch_taken_0x4e8f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8F38u;
            // 0x4e8f3c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8f38) {
            ctx->pc = 0x4E945Cu;
            goto label_4e945c;
        }
    }
    ctx->pc = 0x4E8F40u;
label_4e8f40:
    // 0x4e8f40: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4e8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4e8f44:
    // 0x4e8f44: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4e8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4e8f48:
    // 0x4e8f48: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4e8f48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4e8f4c:
    // 0x4e8f4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4e8f50:
    if (ctx->pc == 0x4E8F50u) {
        ctx->pc = 0x4E8F50u;
            // 0x4e8f50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E8F54u;
        goto label_4e8f54;
    }
    ctx->pc = 0x4E8F4Cu;
    {
        const bool branch_taken_0x4e8f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8F4Cu;
            // 0x4e8f50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8f4c) {
            ctx->pc = 0x4E8F58u;
            goto label_4e8f58;
        }
    }
    ctx->pc = 0x4E8F54u;
label_4e8f54:
    // 0x4e8f54: 0x26940016  addiu       $s4, $s4, 0x16
    ctx->pc = 0x4e8f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
label_4e8f58:
    // 0x4e8f58: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e8f5c:
    // 0x4e8f5c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e8f60:
    // 0x4e8f60: 0x8c7389e0  lw          $s3, -0x7620($v1)
    ctx->pc = 0x4e8f60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_4e8f64:
    // 0x4e8f64: 0x8c44aaa8  lw          $a0, -0x5558($v0)
    ctx->pc = 0x4e8f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_4e8f68:
    // 0x4e8f68: 0xc0506ac  jal         func_141AB0
label_4e8f6c:
    if (ctx->pc == 0x4E8F6Cu) {
        ctx->pc = 0x4E8F6Cu;
            // 0x4e8f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E8F70u;
        goto label_4e8f70;
    }
    ctx->pc = 0x4E8F68u;
    SET_GPR_U32(ctx, 31, 0x4E8F70u);
    ctx->pc = 0x4E8F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8F68u;
            // 0x4e8f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8F70u; }
        if (ctx->pc != 0x4E8F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8F70u; }
        if (ctx->pc != 0x4E8F70u) { return; }
    }
    ctx->pc = 0x4E8F70u;
label_4e8f70:
    // 0x4e8f70: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4e8f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4e8f74:
    // 0x4e8f74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e8f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e8f78:
    // 0x4e8f78: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e8f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e8f7c:
    // 0x4e8f7c: 0x320f809  jalr        $t9
label_4e8f80:
    if (ctx->pc == 0x4E8F80u) {
        ctx->pc = 0x4E8F80u;
            // 0x4e8f80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E8F84u;
        goto label_4e8f84;
    }
    ctx->pc = 0x4E8F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E8F84u);
        ctx->pc = 0x4E8F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8F7Cu;
            // 0x4e8f80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E8F84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E8F84u; }
            if (ctx->pc != 0x4E8F84u) { return; }
        }
        }
    }
    ctx->pc = 0x4E8F84u;
label_4e8f84:
    // 0x4e8f84: 0x8ea5013c  lw          $a1, 0x13C($s5)
    ctx->pc = 0x4e8f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 316)));
label_4e8f88:
    // 0x4e8f88: 0x2686002d  addiu       $a2, $s4, 0x2D
    ctx->pc = 0x4e8f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 45));
label_4e8f8c:
    // 0x4e8f8c: 0xc13a35c  jal         func_4E8D70
label_4e8f90:
    if (ctx->pc == 0x4E8F90u) {
        ctx->pc = 0x4E8F90u;
            // 0x4e8f90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E8F94u;
        goto label_4e8f94;
    }
    ctx->pc = 0x4E8F8Cu;
    SET_GPR_U32(ctx, 31, 0x4E8F94u);
    ctx->pc = 0x4E8F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8F8Cu;
            // 0x4e8f90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E8D70u;
    goto label_4e8d70;
    ctx->pc = 0x4E8F94u;
label_4e8f94:
    // 0x4e8f94: 0xc6a00138  lwc1        $f0, 0x138($s5)
    ctx->pc = 0x4e8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e8f98:
    // 0x4e8f98: 0x92a201a1  lbu         $v0, 0x1A1($s5)
    ctx->pc = 0x4e8f98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 417)));
label_4e8f9c:
    // 0x4e8f9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e8fa0:
    if (ctx->pc == 0x4E8FA0u) {
        ctx->pc = 0x4E8FA0u;
            // 0x4e8fa0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4E8FA4u;
        goto label_4e8fa4;
    }
    ctx->pc = 0x4E8F9Cu;
    {
        const bool branch_taken_0x4e8f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8F9Cu;
            // 0x4e8fa0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8f9c) {
            ctx->pc = 0x4E8FC0u;
            goto label_4e8fc0;
        }
    }
    ctx->pc = 0x4E8FA4u;
label_4e8fa4:
    // 0x4e8fa4: 0x92a201a2  lbu         $v0, 0x1A2($s5)
    ctx->pc = 0x4e8fa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 418)));
label_4e8fa8:
    // 0x4e8fa8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4e8fac:
    if (ctx->pc == 0x4E8FACu) {
        ctx->pc = 0x4E8FACu;
            // 0x4e8fac: 0x92a20196  lbu         $v0, 0x196($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 406)));
        ctx->pc = 0x4E8FB0u;
        goto label_4e8fb0;
    }
    ctx->pc = 0x4E8FA8u;
    {
        const bool branch_taken_0x4e8fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8fa8) {
            ctx->pc = 0x4E8FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8FA8u;
            // 0x4e8fac: 0x92a20196  lbu         $v0, 0x196($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 406)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8FC4u;
            goto label_4e8fc4;
        }
    }
    ctx->pc = 0x4E8FB0u;
label_4e8fb0:
    // 0x4e8fb0: 0x92a20196  lbu         $v0, 0x196($s5)
    ctx->pc = 0x4e8fb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 406)));
label_4e8fb4:
    // 0x4e8fb4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x4e8fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_4e8fb8:
    // 0x4e8fb8: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_4e8fbc:
    if (ctx->pc == 0x4E8FBCu) {
        ctx->pc = 0x4E8FBCu;
            // 0x4e8fbc: 0x8ea5013c  lw          $a1, 0x13C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 316)));
        ctx->pc = 0x4E8FC0u;
        goto label_4e8fc0;
    }
    ctx->pc = 0x4E8FB8u;
    {
        const bool branch_taken_0x4e8fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8fb8) {
            ctx->pc = 0x4E8FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8FB8u;
            // 0x4e8fbc: 0x8ea5013c  lw          $a1, 0x13C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 316)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E905Cu;
            goto label_4e905c;
        }
    }
    ctx->pc = 0x4E8FC0u;
label_4e8fc0:
    // 0x4e8fc0: 0x92a20196  lbu         $v0, 0x196($s5)
    ctx->pc = 0x4e8fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 406)));
label_4e8fc4:
    // 0x4e8fc4: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x4e8fc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_4e8fc8:
    // 0x4e8fc8: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_4e8fcc:
    if (ctx->pc == 0x4E8FCCu) {
        ctx->pc = 0x4E8FCCu;
            // 0x4e8fcc: 0x92a30194  lbu         $v1, 0x194($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
        ctx->pc = 0x4E8FD0u;
        goto label_4e8fd0;
    }
    ctx->pc = 0x4E8FC8u;
    {
        const bool branch_taken_0x4e8fc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8fc8) {
            ctx->pc = 0x4E8FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8FC8u;
            // 0x4e8fcc: 0x92a30194  lbu         $v1, 0x194($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8FE0u;
            goto label_4e8fe0;
        }
    }
    ctx->pc = 0x4E8FD0u;
label_4e8fd0:
    // 0x4e8fd0: 0x92a30194  lbu         $v1, 0x194($s5)
    ctx->pc = 0x4e8fd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
label_4e8fd4:
    // 0x4e8fd4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4e8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4e8fd8:
    // 0x4e8fd8: 0x10000004  b           . + 4 + (0x4 << 2)
label_4e8fdc:
    if (ctx->pc == 0x4E8FDCu) {
        ctx->pc = 0x4E8FDCu;
            // 0x4e8fdc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x4E8FE0u;
        goto label_4e8fe0;
    }
    ctx->pc = 0x4E8FD8u;
    {
        const bool branch_taken_0x4e8fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8FD8u;
            // 0x4e8fdc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8fd8) {
            ctx->pc = 0x4E8FECu;
            goto label_4e8fec;
        }
    }
    ctx->pc = 0x4E8FE0u;
label_4e8fe0:
    // 0x4e8fe0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x4e8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_4e8fe4:
    // 0x4e8fe4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x4e8fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_4e8fe8:
    // 0x4e8fe8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4e8fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8fec:
    // 0x4e8fec: 0x2682002d  addiu       $v0, $s4, 0x2D
    ctx->pc = 0x4e8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 45));
label_4e8ff0:
    // 0x4e8ff0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4e8ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4e8ff4:
    // 0x4e8ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e8ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8ff8:
    // 0x4e8ff8: 0x3c094140  lui         $t1, 0x4140
    ctx->pc = 0x4e8ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16704 << 16));
label_4e8ffc:
    // 0x4e8ffc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4e8ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4e9000:
    // 0x4e9000: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e9000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e9004:
    // 0x4e9004: 0x84488388  lh          $t0, -0x7C78($v0)
    ctx->pc = 0x4e9004u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935432)));
label_4e9008:
    // 0x4e9008: 0x24a58e60  addiu       $a1, $a1, -0x71A0
    ctx->pc = 0x4e9008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938208));
label_4e900c:
    // 0x4e900c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e9010:
    // 0x4e9010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e9010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9014:
    // 0x4e9014: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e9014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e9018:
    // 0x4e9018: 0x8443838a  lh          $v1, -0x7C76($v0)
    ctx->pc = 0x4e9018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935434)));
label_4e901c:
    // 0x4e901c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4e901cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9020:
    // 0x4e9020: 0x0  nop
    ctx->pc = 0x4e9020u;
    // NOP
label_4e9024:
    // 0x4e9024: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e9024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e9028:
    // 0x4e9028: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e9028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e902c:
    // 0x4e902c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e902cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9030:
    // 0x4e9030: 0x0  nop
    ctx->pc = 0x4e9030u;
    // NOP
label_4e9034:
    // 0x4e9034: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e9034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e9038:
    // 0x4e9038: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4e9038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e903c:
    // 0x4e903c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x4e903cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e9040:
    // 0x4e9040: 0x0  nop
    ctx->pc = 0x4e9040u;
    // NOP
label_4e9044:
    // 0x4e9044: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x4e9044u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_4e9048:
    // 0x4e9048: 0x460113c0  add.s       $f15, $f2, $f1
    ctx->pc = 0x4e9048u;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4e904c:
    // 0x4e904c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e904cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e9050:
    // 0x4e9050: 0xc0bc284  jal         func_2F0A10
label_4e9054:
    if (ctx->pc == 0x4E9054u) {
        ctx->pc = 0x4E9054u;
            // 0x4e9054: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x4E9058u;
        goto label_4e9058;
    }
    ctx->pc = 0x4E9050u;
    SET_GPR_U32(ctx, 31, 0x4E9058u);
    ctx->pc = 0x4E9054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9050u;
            // 0x4e9054: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9058u; }
        if (ctx->pc != 0x4E9058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9058u; }
        if (ctx->pc != 0x4E9058u) { return; }
    }
    ctx->pc = 0x4E9058u;
label_4e9058:
    // 0x4e9058: 0x8ea5013c  lw          $a1, 0x13C($s5)
    ctx->pc = 0x4e9058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 316)));
label_4e905c:
    // 0x4e905c: 0x26860190  addiu       $a2, $s4, 0x190
    ctx->pc = 0x4e905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_4e9060:
    // 0x4e9060: 0xc13a2c0  jal         func_4E8B00
label_4e9064:
    if (ctx->pc == 0x4E9064u) {
        ctx->pc = 0x4E9064u;
            // 0x4e9064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E9068u;
        goto label_4e9068;
    }
    ctx->pc = 0x4E9060u;
    SET_GPR_U32(ctx, 31, 0x4E9068u);
    ctx->pc = 0x4E9064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9060u;
            // 0x4e9064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E8B00u;
    if (runtime->hasFunction(0x4E8B00u)) {
        auto targetFn = runtime->lookupFunction(0x4E8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9068u; }
        if (ctx->pc != 0x4E9068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E8B00_0x4e8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9068u; }
        if (ctx->pc != 0x4E9068u) { return; }
    }
    ctx->pc = 0x4E9068u;
label_4e9068:
    // 0x4e9068: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e9068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e906c:
    // 0x4e906c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4e906cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4e9070:
    // 0x4e9070: 0x8451838a  lh          $s1, -0x7C76($v0)
    ctx->pc = 0x4e9070u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935434)));
label_4e9074:
    // 0x4e9074: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4e9074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4e9078:
    // 0x4e9078: 0x24a58e40  addiu       $a1, $a1, -0x71C0
    ctx->pc = 0x4e9078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938176));
label_4e907c:
    // 0x4e907c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e9080:
    // 0x4e9080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e9080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9084:
    // 0x4e9084: 0x2682004d  addiu       $v0, $s4, 0x4D
    ctx->pc = 0x4e9084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 77));
label_4e9088:
    // 0x4e9088: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x4e9088u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
label_4e908c:
    // 0x4e908c: 0xa6a20160  sh          $v0, 0x160($s5)
    ctx->pc = 0x4e908cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 352), (uint16_t)GPR_U32(ctx, 2));
label_4e9090:
    // 0x4e9090: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x4e9090u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_4e9094:
    // 0x4e9094: 0x86a80166  lh          $t0, 0x166($s5)
    ctx->pc = 0x4e9094u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
label_4e9098:
    // 0x4e9098: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x4e9098u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e909c:
    // 0x4e909c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e90a0:
    // 0x4e90a0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x4e90a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_4e90a4:
    // 0x4e90a4: 0x86aa0162  lh          $t2, 0x162($s5)
    ctx->pc = 0x4e90a4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 354)));
label_4e90a8:
    // 0x4e90a8: 0x84508388  lh          $s0, -0x7C78($v0)
    ctx->pc = 0x4e90a8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935432)));
label_4e90ac:
    // 0x4e90ac: 0x1684021  addu        $t0, $t3, $t0
    ctx->pc = 0x4e90acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_4e90b0:
    // 0x4e90b0: 0x92a60194  lbu         $a2, 0x194($s5)
    ctx->pc = 0x4e90b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
label_4e90b4:
    // 0x4e90b4: 0x86a90164  lh          $t1, 0x164($s5)
    ctx->pc = 0x4e90b4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 356)));
label_4e90b8:
    // 0x4e90b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e90bc:
    // 0x4e90bc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4e90bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_4e90c0:
    // 0x4e90c0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x4e90c0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e90c4:
    // 0x4e90c4: 0x0  nop
    ctx->pc = 0x4e90c4u;
    // NOP
label_4e90c8:
    // 0x4e90c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4e90c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4e90cc:
    // 0x4e90cc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4e90ccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e90d0:
    // 0x4e90d0: 0x0  nop
    ctx->pc = 0x4e90d0u;
    // NOP
label_4e90d4:
    // 0x4e90d4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4e90d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4e90d8:
    // 0x4e90d8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4e90d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e90dc:
    // 0x4e90dc: 0x0  nop
    ctx->pc = 0x4e90dcu;
    // NOP
label_4e90e0:
    // 0x4e90e0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4e90e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4e90e4:
    // 0x4e90e4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e90e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e90e8:
    // 0x4e90e8: 0x0  nop
    ctx->pc = 0x4e90e8u;
    // NOP
label_4e90ec:
    // 0x4e90ec: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e90ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e90f0:
    // 0x4e90f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e90f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e90f4:
    // 0x4e90f4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e90f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e90f8:
    // 0x4e90f8: 0xc0bc284  jal         func_2F0A10
label_4e90fc:
    if (ctx->pc == 0x4E90FCu) {
        ctx->pc = 0x4E90FCu;
            // 0x4e90fc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4E9100u;
        goto label_4e9100;
    }
    ctx->pc = 0x4E90F8u;
    SET_GPR_U32(ctx, 31, 0x4E9100u);
    ctx->pc = 0x4E90FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E90F8u;
            // 0x4e90fc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9100u; }
        if (ctx->pc != 0x4E9100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9100u; }
        if (ctx->pc != 0x4E9100u) { return; }
    }
    ctx->pc = 0x4E9100u;
label_4e9100:
    // 0x4e9100: 0x86a30160  lh          $v1, 0x160($s5)
    ctx->pc = 0x4e9100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 352)));
label_4e9104:
    // 0x4e9104: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e9104u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9108:
    // 0x4e9108: 0x0  nop
    ctx->pc = 0x4e9108u;
    // NOP
label_4e910c:
    // 0x4e910c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e910cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e9110:
    // 0x4e9110: 0x86a20162  lh          $v0, 0x162($s5)
    ctx->pc = 0x4e9110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 354)));
label_4e9114:
    // 0x4e9114: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e9114u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e9118:
    // 0x4e9118: 0x86a80164  lh          $t0, 0x164($s5)
    ctx->pc = 0x4e9118u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 356)));
label_4e911c:
    // 0x4e911c: 0x26528e50  addiu       $s2, $s2, -0x71B0
    ctx->pc = 0x4e911cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938192));
label_4e9120:
    // 0x4e9120: 0x92a40194  lbu         $a0, 0x194($s5)
    ctx->pc = 0x4e9120u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
label_4e9124:
    // 0x4e9124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e9124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9128:
    // 0x4e9128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e9128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e912c:
    // 0x4e912c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4e912cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e9130:
    // 0x4e9130: 0x0  nop
    ctx->pc = 0x4e9130u;
    // NOP
label_4e9134:
    // 0x4e9134: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x4e9134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_4e9138:
    // 0x4e9138: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4e9138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4e913c:
    // 0x4e913c: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x4e913cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4e9140:
    // 0x4e9140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e9140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e9144:
    // 0x4e9144: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4e9144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4e9148:
    // 0x4e9148: 0xc654000c  lwc1        $f20, 0xC($s2)
    ctx->pc = 0x4e9148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e914c:
    // 0x4e914c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e9150:
    // 0x4e9150: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x4e9150u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e9154:
    // 0x4e9154: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e9154u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9158:
    // 0x4e9158: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x4e9158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4e915c:
    // 0x4e915c: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x4e915cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4e9160:
    // 0x4e9160: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e9160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e9164:
    // 0x4e9164: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e9164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e9168:
    // 0x4e9168: 0xc0bc284  jal         func_2F0A10
label_4e916c:
    if (ctx->pc == 0x4E916Cu) {
        ctx->pc = 0x4E916Cu;
            // 0x4e916c: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->pc = 0x4E9170u;
        goto label_4e9170;
    }
    ctx->pc = 0x4E9168u;
    SET_GPR_U32(ctx, 31, 0x4E9170u);
    ctx->pc = 0x4E916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9168u;
            // 0x4e916c: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9170u; }
        if (ctx->pc != 0x4E9170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9170u; }
        if (ctx->pc != 0x4E9170u) { return; }
    }
    ctx->pc = 0x4E9170u;
label_4e9170:
    // 0x4e9170: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e9170u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9174:
    // 0x4e9174: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e9174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e9178:
    // 0x4e9178: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e9178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e917c:
    // 0x4e917c: 0x86a90162  lh          $t1, 0x162($s5)
    ctx->pc = 0x4e917cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 354)));
label_4e9180:
    // 0x4e9180: 0x86a70160  lh          $a3, 0x160($s5)
    ctx->pc = 0x4e9180u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 352)));
label_4e9184:
    // 0x4e9184: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4e9184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4e9188:
    // 0x4e9188: 0x86a60166  lh          $a2, 0x166($s5)
    ctx->pc = 0x4e9188u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
label_4e918c:
    // 0x4e918c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e918cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9190:
    // 0x4e9190: 0x86a80164  lh          $t0, 0x164($s5)
    ctx->pc = 0x4e9190u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 356)));
label_4e9194:
    // 0x4e9194: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e9194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e9198:
    // 0x4e9198: 0xe65021  addu        $t2, $a3, $a2
    ctx->pc = 0x4e9198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4e919c:
    // 0x4e919c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4e919cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e91a0:
    // 0x4e91a0: 0x92a60194  lbu         $a2, 0x194($s5)
    ctx->pc = 0x4e91a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
label_4e91a4:
    // 0x4e91a4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4e91a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4e91a8:
    // 0x4e91a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e91a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e91ac:
    // 0x4e91ac: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4e91acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_4e91b0:
    // 0x4e91b0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x4e91b0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e91b4:
    // 0x4e91b4: 0x0  nop
    ctx->pc = 0x4e91b4u;
    // NOP
label_4e91b8:
    // 0x4e91b8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x4e91b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_4e91bc:
    // 0x4e91bc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4e91bcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e91c0:
    // 0x4e91c0: 0x0  nop
    ctx->pc = 0x4e91c0u;
    // NOP
label_4e91c4:
    // 0x4e91c4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4e91c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4e91c8:
    // 0x4e91c8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e91c8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e91cc:
    // 0x4e91cc: 0x0  nop
    ctx->pc = 0x4e91ccu;
    // NOP
label_4e91d0:
    // 0x4e91d0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e91d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e91d4:
    // 0x4e91d4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e91d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e91d8:
    // 0x4e91d8: 0xc0bc284  jal         func_2F0A10
label_4e91dc:
    if (ctx->pc == 0x4E91DCu) {
        ctx->pc = 0x4E91DCu;
            // 0x4e91dc: 0x46146bc1  sub.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
        ctx->pc = 0x4E91E0u;
        goto label_4e91e0;
    }
    ctx->pc = 0x4E91D8u;
    SET_GPR_U32(ctx, 31, 0x4E91E0u);
    ctx->pc = 0x4E91DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E91D8u;
            // 0x4e91dc: 0x46146bc1  sub.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E91E0u; }
        if (ctx->pc != 0x4E91E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E91E0u; }
        if (ctx->pc != 0x4E91E0u) { return; }
    }
    ctx->pc = 0x4E91E0u;
label_4e91e0:
    // 0x4e91e0: 0x2686006b  addiu       $a2, $s4, 0x6B
    ctx->pc = 0x4e91e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 107));
label_4e91e4:
    // 0x4e91e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e91e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4e91e8:
    // 0x4e91e8: 0xc13a1bc  jal         func_4E86F0
label_4e91ec:
    if (ctx->pc == 0x4E91ECu) {
        ctx->pc = 0x4E91ECu;
            // 0x4e91ec: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4E91F0u;
        goto label_4e91f0;
    }
    ctx->pc = 0x4E91E8u;
    SET_GPR_U32(ctx, 31, 0x4E91F0u);
    ctx->pc = 0x4E91ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E91E8u;
            // 0x4e91ec: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E86F0u;
    if (runtime->hasFunction(0x4E86F0u)) {
        auto targetFn = runtime->lookupFunction(0x4E86F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E91F0u; }
        if (ctx->pc != 0x4E91F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E86F0_0x4e86f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E91F0u; }
        if (ctx->pc != 0x4E91F0u) { return; }
    }
    ctx->pc = 0x4E91F0u;
label_4e91f0:
    // 0x4e91f0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4e91f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4e91f4:
    // 0x4e91f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e91f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e91f8:
    // 0x4e91f8: 0x320f809  jalr        $t9
label_4e91fc:
    if (ctx->pc == 0x4E91FCu) {
        ctx->pc = 0x4E91FCu;
            // 0x4e91fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E9200u;
        goto label_4e9200;
    }
    ctx->pc = 0x4E91F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E9200u);
        ctx->pc = 0x4E91FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E91F8u;
            // 0x4e91fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E9200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E9200u; }
            if (ctx->pc != 0x4E9200u) { return; }
        }
        }
    }
    ctx->pc = 0x4E9200u;
label_4e9200:
    // 0x4e9200: 0xc139f04  jal         func_4E7C10
label_4e9204:
    if (ctx->pc == 0x4E9204u) {
        ctx->pc = 0x4E9204u;
            // 0x4e9204: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E9208u;
        goto label_4e9208;
    }
    ctx->pc = 0x4E9200u;
    SET_GPR_U32(ctx, 31, 0x4E9208u);
    ctx->pc = 0x4E9204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9200u;
            // 0x4e9204: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E7C10u;
    if (runtime->hasFunction(0x4E7C10u)) {
        auto targetFn = runtime->lookupFunction(0x4E7C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9208u; }
        if (ctx->pc != 0x4E9208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E7C10_0x4e7c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9208u; }
        if (ctx->pc != 0x4E9208u) { return; }
    }
    ctx->pc = 0x4E9208u;
label_4e9208:
    // 0x4e9208: 0xc6a20110  lwc1        $f2, 0x110($s5)
    ctx->pc = 0x4e9208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e920c:
    // 0x4e920c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4e920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4e9210:
    // 0x4e9210: 0xc6a10114  lwc1        $f1, 0x114($s5)
    ctx->pc = 0x4e9210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9214:
    // 0x4e9214: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4e9214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4e9218:
    // 0x4e9218: 0xc6a00118  lwc1        $f0, 0x118($s5)
    ctx->pc = 0x4e9218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e921c:
    // 0x4e921c: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x4e921cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_4e9220:
    // 0x4e9220: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x4e9220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_4e9224:
    // 0x4e9224: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x4e9224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_4e9228:
    // 0x4e9228: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4e9228u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4e922c:
    // 0x4e922c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4e9230:
    if (ctx->pc == 0x4E9230u) {
        ctx->pc = 0x4E9234u;
        goto label_4e9234;
    }
    ctx->pc = 0x4E922Cu;
    {
        const bool branch_taken_0x4e922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e922c) {
            ctx->pc = 0x4E924Cu;
            goto label_4e924c;
        }
    }
    ctx->pc = 0x4E9234u;
label_4e9234:
    // 0x4e9234: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x4e9234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9238:
    // 0x4e9238: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x4e9238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_4e923c:
    // 0x4e923c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e923cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9240:
    // 0x4e9240: 0x0  nop
    ctx->pc = 0x4e9240u;
    // NOP
label_4e9244:
    // 0x4e9244: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4e9244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4e9248:
    // 0x4e9248: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x4e9248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_4e924c:
    // 0x4e924c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e9250:
    // 0x4e9250: 0x26a50148  addiu       $a1, $s5, 0x148
    ctx->pc = 0x4e9250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 328));
label_4e9254:
    // 0x4e9254: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x4e9254u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4e9258:
    // 0x4e9258: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x4e9258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4e925c:
    // 0x4e925c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4e925cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e9260:
    // 0x4e9260: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4e9260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9264:
    // 0x4e9264: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e9264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9268:
    // 0x4e9268: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4e9268u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e926c:
    // 0x4e926c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x4e926cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4e9270:
    // 0x4e9270: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4e9270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e9274:
    // 0x4e9274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e9274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e9278:
    // 0x4e9278: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4e9278u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e927c:
    // 0x4e927c: 0xc0ee34c  jal         func_3B8D30
label_4e9280:
    if (ctx->pc == 0x4E9280u) {
        ctx->pc = 0x4E9280u;
            // 0x4e9280: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x4E9284u;
        goto label_4e9284;
    }
    ctx->pc = 0x4E927Cu;
    SET_GPR_U32(ctx, 31, 0x4E9284u);
    ctx->pc = 0x4E9280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E927Cu;
            // 0x4e9280: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9284u; }
        if (ctx->pc != 0x4E9284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9284u; }
        if (ctx->pc != 0x4E9284u) { return; }
    }
    ctx->pc = 0x4E9284u;
label_4e9284:
    // 0x4e9284: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x4e9284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_4e9288:
    // 0x4e9288: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4e9288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4e928c:
    // 0x4e928c: 0x8c6d0e68  lw          $t5, 0xE68($v1)
    ctx->pc = 0x4e928cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_4e9290:
    // 0x4e9290: 0x26860190  addiu       $a2, $s4, 0x190
    ctx->pc = 0x4e9290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_4e9294:
    // 0x4e9294: 0x8da40008  lw          $a0, 0x8($t5)
    ctx->pc = 0x4e9294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
label_4e9298:
    // 0x4e9298: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x4e9298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e929c:
    // 0x4e929c: 0xc5a20018  lwc1        $f2, 0x18($t5)
    ctx->pc = 0x4e929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e92a0:
    // 0x4e92a0: 0x25a30008  addiu       $v1, $t5, 0x8
    ctx->pc = 0x4e92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_4e92a4:
    // 0x4e92a4: 0xc5a1001c  lwc1        $f1, 0x1C($t5)
    ctx->pc = 0x4e92a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e92a8:
    // 0x4e92a8: 0x25a50014  addiu       $a1, $t5, 0x14
    ctx->pc = 0x4e92a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
label_4e92ac:
    // 0x4e92ac: 0x8c8a0034  lw          $t2, 0x34($a0)
    ctx->pc = 0x4e92acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_4e92b0:
    // 0x4e92b0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4e92b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4e92b4:
    // 0x4e92b4: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x4e92b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4e92b8:
    // 0x4e92b8: 0xc5a00020  lwc1        $f0, 0x20($t5)
    ctx->pc = 0x4e92b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e92bc:
    // 0x4e92bc: 0xc5430024  lwc1        $f3, 0x24($t2)
    ctx->pc = 0x4e92bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e92c0:
    // 0x4e92c0: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4e92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4e92c4:
    // 0x4e92c4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x4e92c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4e92c8:
    // 0x4e92c8: 0x25490024  addiu       $t1, $t2, 0x24
    ctx->pc = 0x4e92c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
label_4e92cc:
    // 0x4e92cc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x4e92ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_4e92d0:
    // 0x4e92d0: 0xc5420028  lwc1        $f2, 0x28($t2)
    ctx->pc = 0x4e92d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e92d4:
    // 0x4e92d4: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x4e92d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_4e92d8:
    // 0x4e92d8: 0xc541002c  lwc1        $f1, 0x2C($t2)
    ctx->pc = 0x4e92d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e92dc:
    // 0x4e92dc: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x4e92dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_4e92e0:
    // 0x4e92e0: 0xc5400030  lwc1        $f0, 0x30($t2)
    ctx->pc = 0x4e92e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e92e4:
    // 0x4e92e4: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x4e92e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_4e92e8:
    // 0x4e92e8: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_4e92ec:
    if (ctx->pc == 0x4E92ECu) {
        ctx->pc = 0x4E92ECu;
            // 0x4e92ec: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x4E92F0u;
        goto label_4e92f0;
    }
    ctx->pc = 0x4E92E8u;
    {
        const bool branch_taken_0x4e92e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E92ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E92E8u;
            // 0x4e92ec: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e92e8) {
            ctx->pc = 0x4E9458u;
            goto label_4e9458;
        }
    }
    ctx->pc = 0x4E92F0u;
label_4e92f0:
    // 0x4e92f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4e92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4e92f4:
    // 0x4e92f4: 0x3c080063  lui         $t0, 0x63
    ctx->pc = 0x4e92f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)99 << 16));
label_4e92f8:
    // 0x4e92f8: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4e92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4e92fc:
    // 0x4e92fc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4e92fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9300:
    // 0x4e9300: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x4e9300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4e9304:
    // 0x4e9304: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x4e9304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_4e9308:
    // 0x4e9308: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4e9308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e930c:
    // 0x4e930c: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x4e930cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_4e9310:
    // 0x4e9310: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x4e9310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4e9314:
    // 0x4e9314: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x4e9314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e9318:
    // 0x4e9318: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x4e9318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e931c:
    // 0x4e931c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4e931cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4e9320:
    // 0x4e9320: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e9320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4e9324:
    // 0x4e9324: 0x240b000d  addiu       $t3, $zero, 0xD
    ctx->pc = 0x4e9324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4e9328:
    // 0x4e9328: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4e9328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_4e932c:
    // 0x4e932c: 0x344ccccd  ori         $t4, $v0, 0xCCCD
    ctx->pc = 0x4e932cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4e9330:
    // 0x4e9330: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e9330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e9334:
    // 0x4e9334: 0xe5240000  swc1        $f4, 0x0($t1)
    ctx->pc = 0x4e9334u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_4e9338:
    // 0x4e9338: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x4e9338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_4e933c:
    // 0x4e933c: 0xe543002c  swc1        $f3, 0x2C($t2)
    ctx->pc = 0x4e933cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 44), bits); }
label_4e9340:
    // 0x4e9340: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e9340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9344:
    // 0x4e9344: 0xe5420030  swc1        $f2, 0x30($t2)
    ctx->pc = 0x4e9344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 48), bits); }
label_4e9348:
    // 0x4e9348: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x4e9348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e934c:
    // 0x4e934c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4e934cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9350:
    // 0x4e9350: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x4e9350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e9354:
    // 0x4e9354: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x4e9354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e9358:
    // 0x4e9358: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x4e9358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_4e935c:
    // 0x4e935c: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x4e935cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_4e9360:
    // 0x4e9360: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x4e9360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9364:
    // 0x4e9364: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4e9364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4e9368:
    // 0x4e9368: 0xe5a2001c  swc1        $f2, 0x1C($t5)
    ctx->pc = 0x4e9368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 28), bits); }
label_4e936c:
    // 0x4e936c: 0xe5a10020  swc1        $f1, 0x20($t5)
    ctx->pc = 0x4e936cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 32), bits); }
label_4e9370:
    // 0x4e9370: 0xc4c2cb1c  lwc1        $f2, -0x34E4($a2)
    ctx->pc = 0x4e9370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294953756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e9374:
    // 0x4e9374: 0x8c840e68  lw          $a0, 0xE68($a0)
    ctx->pc = 0x4e9374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3688)));
label_4e9378:
    // 0x4e9378: 0xc503cb18  lwc1        $f3, -0x34E8($t0)
    ctx->pc = 0x4e9378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294953752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e937c:
    // 0x4e937c: 0xc4e1cb20  lwc1        $f1, -0x34E0($a3)
    ctx->pc = 0x4e937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294953760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9380:
    // 0x4e9380: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x4e9380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_4e9384:
    // 0x4e9384: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4e9384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4e9388:
    // 0x4e9388: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x4e9388u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4e938c:
    // 0x4e938c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4e938cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e9390:
    // 0x4e9390: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4e9390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4e9394:
    // 0x4e9394: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4e9394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4e9398:
    // 0x4e9398: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x4e9398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_4e939c:
    // 0x4e939c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4e939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e93a0:
    // 0x4e93a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4e93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e93a4:
    // 0x4e93a4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x4e93a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_4e93a8:
    // 0x4e93a8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4e93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4e93ac:
    // 0x4e93ac: 0xc4940004  lwc1        $f20, 0x4($a0)
    ctx->pc = 0x4e93acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e93b0:
    // 0x4e93b0: 0xac6c0004  sw          $t4, 0x4($v1)
    ctx->pc = 0x4e93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 12));
label_4e93b4:
    // 0x4e93b4: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x4e93b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4e93b8:
    // 0x4e93b8: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x4e93b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4e93bc:
    // 0x4e93bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e93bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e93c0:
    // 0x4e93c0: 0xc0ee398  jal         func_3B8E60
label_4e93c4:
    if (ctx->pc == 0x4E93C4u) {
        ctx->pc = 0x4E93C4u;
            // 0x4e93c4: 0xae4b0010  sw          $t3, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 11));
        ctx->pc = 0x4E93C8u;
        goto label_4e93c8;
    }
    ctx->pc = 0x4E93C0u;
    SET_GPR_U32(ctx, 31, 0x4E93C8u);
    ctx->pc = 0x4E93C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E93C0u;
            // 0x4e93c4: 0xae4b0010  sw          $t3, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E93C8u; }
        if (ctx->pc != 0x4E93C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E93C8u; }
        if (ctx->pc != 0x4E93C8u) { return; }
    }
    ctx->pc = 0x4E93C8u;
label_4e93c8:
    // 0x4e93c8: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x4e93c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
label_4e93cc:
    // 0x4e93cc: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x4e93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_4e93d0:
    // 0x4e93d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e93d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e93d4:
    // 0x4e93d4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4e93d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4e93d8:
    // 0x4e93d8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4e93d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4e93dc:
    // 0x4e93dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4e93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4e93e0:
    // 0x4e93e0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4e93e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4e93e4:
    // 0x4e93e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4e93e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e93e8:
    // 0x4e93e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4e93e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e93ec:
    // 0x4e93ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e93ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e93f0:
    // 0x4e93f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4e93f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e93f4:
    // 0x4e93f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4e93f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e93f8:
    // 0x4e93f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4e93f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4e93fc:
    // 0x4e93fc: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x4e93fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4e9400:
    // 0x4e9400: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e9400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e9404:
    // 0x4e9404: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x4e9404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4e9408:
    // 0x4e9408: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x4e9408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4e940c:
    // 0x4e940c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4e940cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4e9410:
    // 0x4e9410: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x4e9410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e9414:
    // 0x4e9414: 0x460428dd  msub.s      $f3, $f5, $f4
    ctx->pc = 0x4e9414u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_4e9418:
    // 0x4e9418: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4e9418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4e941c:
    // 0x4e941c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4e941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9420:
    // 0x4e9420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e9420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e9424:
    // 0x4e9424: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x4e9424u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4e9428:
    // 0x4e9428: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x4e9428u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4e942c:
    // 0x4e942c: 0x4601281d  msub.s      $f0, $f5, $f1
    ctx->pc = 0x4e942cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_4e9430:
    // 0x4e9430: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x4e9430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_4e9434:
    // 0x4e9434: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x4e9434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4e9438:
    // 0x4e9438: 0xc0ee334  jal         func_3B8CD0
label_4e943c:
    if (ctx->pc == 0x4E943Cu) {
        ctx->pc = 0x4E943Cu;
            // 0x4e943c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x4E9440u;
        goto label_4e9440;
    }
    ctx->pc = 0x4E9438u;
    SET_GPR_U32(ctx, 31, 0x4E9440u);
    ctx->pc = 0x4E943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9438u;
            // 0x4e943c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9440u; }
        if (ctx->pc != 0x4E9440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9440u; }
        if (ctx->pc != 0x4E9440u) { return; }
    }
    ctx->pc = 0x4E9440u;
label_4e9440:
    // 0x4e9440: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x4e9440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_4e9444:
    // 0x4e9444: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4e9444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4e9448:
    // 0x4e9448: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x4e9448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_4e944c:
    // 0x4e944c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4e944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e9450:
    // 0x4e9450: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4e9450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4e9454:
    // 0x4e9454: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x4e9454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_4e9458:
    // 0x4e9458: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4e9458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4e945c:
    // 0x4e945c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e9460:
    // 0x4e9460: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e9460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e9464:
    // 0x4e9464: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e9464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e9468:
    // 0x4e9468: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e9468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e946c:
    // 0x4e946c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e946cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9470:
    // 0x4e9470: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e9470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9474:
    // 0x4e9474: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e9474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9478:
    // 0x4e9478: 0x3e00008  jr          $ra
label_4e947c:
    if (ctx->pc == 0x4E947Cu) {
        ctx->pc = 0x4E947Cu;
            // 0x4e947c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4E9480u;
        goto label_fallthrough_0x4e9478;
    }
    ctx->pc = 0x4E9478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9478u;
            // 0x4e947c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4e9478:
    ctx->pc = 0x4E9480u;
}
