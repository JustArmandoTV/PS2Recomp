#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D8D10
// Address: 0x3d8d10 - 0x3d9390
void sub_003D8D10_0x3d8d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8D10_0x3d8d10");
#endif

    switch (ctx->pc) {
        case 0x3d8d10u: goto label_3d8d10;
        case 0x3d8d14u: goto label_3d8d14;
        case 0x3d8d18u: goto label_3d8d18;
        case 0x3d8d1cu: goto label_3d8d1c;
        case 0x3d8d20u: goto label_3d8d20;
        case 0x3d8d24u: goto label_3d8d24;
        case 0x3d8d28u: goto label_3d8d28;
        case 0x3d8d2cu: goto label_3d8d2c;
        case 0x3d8d30u: goto label_3d8d30;
        case 0x3d8d34u: goto label_3d8d34;
        case 0x3d8d38u: goto label_3d8d38;
        case 0x3d8d3cu: goto label_3d8d3c;
        case 0x3d8d40u: goto label_3d8d40;
        case 0x3d8d44u: goto label_3d8d44;
        case 0x3d8d48u: goto label_3d8d48;
        case 0x3d8d4cu: goto label_3d8d4c;
        case 0x3d8d50u: goto label_3d8d50;
        case 0x3d8d54u: goto label_3d8d54;
        case 0x3d8d58u: goto label_3d8d58;
        case 0x3d8d5cu: goto label_3d8d5c;
        case 0x3d8d60u: goto label_3d8d60;
        case 0x3d8d64u: goto label_3d8d64;
        case 0x3d8d68u: goto label_3d8d68;
        case 0x3d8d6cu: goto label_3d8d6c;
        case 0x3d8d70u: goto label_3d8d70;
        case 0x3d8d74u: goto label_3d8d74;
        case 0x3d8d78u: goto label_3d8d78;
        case 0x3d8d7cu: goto label_3d8d7c;
        case 0x3d8d80u: goto label_3d8d80;
        case 0x3d8d84u: goto label_3d8d84;
        case 0x3d8d88u: goto label_3d8d88;
        case 0x3d8d8cu: goto label_3d8d8c;
        case 0x3d8d90u: goto label_3d8d90;
        case 0x3d8d94u: goto label_3d8d94;
        case 0x3d8d98u: goto label_3d8d98;
        case 0x3d8d9cu: goto label_3d8d9c;
        case 0x3d8da0u: goto label_3d8da0;
        case 0x3d8da4u: goto label_3d8da4;
        case 0x3d8da8u: goto label_3d8da8;
        case 0x3d8dacu: goto label_3d8dac;
        case 0x3d8db0u: goto label_3d8db0;
        case 0x3d8db4u: goto label_3d8db4;
        case 0x3d8db8u: goto label_3d8db8;
        case 0x3d8dbcu: goto label_3d8dbc;
        case 0x3d8dc0u: goto label_3d8dc0;
        case 0x3d8dc4u: goto label_3d8dc4;
        case 0x3d8dc8u: goto label_3d8dc8;
        case 0x3d8dccu: goto label_3d8dcc;
        case 0x3d8dd0u: goto label_3d8dd0;
        case 0x3d8dd4u: goto label_3d8dd4;
        case 0x3d8dd8u: goto label_3d8dd8;
        case 0x3d8ddcu: goto label_3d8ddc;
        case 0x3d8de0u: goto label_3d8de0;
        case 0x3d8de4u: goto label_3d8de4;
        case 0x3d8de8u: goto label_3d8de8;
        case 0x3d8decu: goto label_3d8dec;
        case 0x3d8df0u: goto label_3d8df0;
        case 0x3d8df4u: goto label_3d8df4;
        case 0x3d8df8u: goto label_3d8df8;
        case 0x3d8dfcu: goto label_3d8dfc;
        case 0x3d8e00u: goto label_3d8e00;
        case 0x3d8e04u: goto label_3d8e04;
        case 0x3d8e08u: goto label_3d8e08;
        case 0x3d8e0cu: goto label_3d8e0c;
        case 0x3d8e10u: goto label_3d8e10;
        case 0x3d8e14u: goto label_3d8e14;
        case 0x3d8e18u: goto label_3d8e18;
        case 0x3d8e1cu: goto label_3d8e1c;
        case 0x3d8e20u: goto label_3d8e20;
        case 0x3d8e24u: goto label_3d8e24;
        case 0x3d8e28u: goto label_3d8e28;
        case 0x3d8e2cu: goto label_3d8e2c;
        case 0x3d8e30u: goto label_3d8e30;
        case 0x3d8e34u: goto label_3d8e34;
        case 0x3d8e38u: goto label_3d8e38;
        case 0x3d8e3cu: goto label_3d8e3c;
        case 0x3d8e40u: goto label_3d8e40;
        case 0x3d8e44u: goto label_3d8e44;
        case 0x3d8e48u: goto label_3d8e48;
        case 0x3d8e4cu: goto label_3d8e4c;
        case 0x3d8e50u: goto label_3d8e50;
        case 0x3d8e54u: goto label_3d8e54;
        case 0x3d8e58u: goto label_3d8e58;
        case 0x3d8e5cu: goto label_3d8e5c;
        case 0x3d8e60u: goto label_3d8e60;
        case 0x3d8e64u: goto label_3d8e64;
        case 0x3d8e68u: goto label_3d8e68;
        case 0x3d8e6cu: goto label_3d8e6c;
        case 0x3d8e70u: goto label_3d8e70;
        case 0x3d8e74u: goto label_3d8e74;
        case 0x3d8e78u: goto label_3d8e78;
        case 0x3d8e7cu: goto label_3d8e7c;
        case 0x3d8e80u: goto label_3d8e80;
        case 0x3d8e84u: goto label_3d8e84;
        case 0x3d8e88u: goto label_3d8e88;
        case 0x3d8e8cu: goto label_3d8e8c;
        case 0x3d8e90u: goto label_3d8e90;
        case 0x3d8e94u: goto label_3d8e94;
        case 0x3d8e98u: goto label_3d8e98;
        case 0x3d8e9cu: goto label_3d8e9c;
        case 0x3d8ea0u: goto label_3d8ea0;
        case 0x3d8ea4u: goto label_3d8ea4;
        case 0x3d8ea8u: goto label_3d8ea8;
        case 0x3d8eacu: goto label_3d8eac;
        case 0x3d8eb0u: goto label_3d8eb0;
        case 0x3d8eb4u: goto label_3d8eb4;
        case 0x3d8eb8u: goto label_3d8eb8;
        case 0x3d8ebcu: goto label_3d8ebc;
        case 0x3d8ec0u: goto label_3d8ec0;
        case 0x3d8ec4u: goto label_3d8ec4;
        case 0x3d8ec8u: goto label_3d8ec8;
        case 0x3d8eccu: goto label_3d8ecc;
        case 0x3d8ed0u: goto label_3d8ed0;
        case 0x3d8ed4u: goto label_3d8ed4;
        case 0x3d8ed8u: goto label_3d8ed8;
        case 0x3d8edcu: goto label_3d8edc;
        case 0x3d8ee0u: goto label_3d8ee0;
        case 0x3d8ee4u: goto label_3d8ee4;
        case 0x3d8ee8u: goto label_3d8ee8;
        case 0x3d8eecu: goto label_3d8eec;
        case 0x3d8ef0u: goto label_3d8ef0;
        case 0x3d8ef4u: goto label_3d8ef4;
        case 0x3d8ef8u: goto label_3d8ef8;
        case 0x3d8efcu: goto label_3d8efc;
        case 0x3d8f00u: goto label_3d8f00;
        case 0x3d8f04u: goto label_3d8f04;
        case 0x3d8f08u: goto label_3d8f08;
        case 0x3d8f0cu: goto label_3d8f0c;
        case 0x3d8f10u: goto label_3d8f10;
        case 0x3d8f14u: goto label_3d8f14;
        case 0x3d8f18u: goto label_3d8f18;
        case 0x3d8f1cu: goto label_3d8f1c;
        case 0x3d8f20u: goto label_3d8f20;
        case 0x3d8f24u: goto label_3d8f24;
        case 0x3d8f28u: goto label_3d8f28;
        case 0x3d8f2cu: goto label_3d8f2c;
        case 0x3d8f30u: goto label_3d8f30;
        case 0x3d8f34u: goto label_3d8f34;
        case 0x3d8f38u: goto label_3d8f38;
        case 0x3d8f3cu: goto label_3d8f3c;
        case 0x3d8f40u: goto label_3d8f40;
        case 0x3d8f44u: goto label_3d8f44;
        case 0x3d8f48u: goto label_3d8f48;
        case 0x3d8f4cu: goto label_3d8f4c;
        case 0x3d8f50u: goto label_3d8f50;
        case 0x3d8f54u: goto label_3d8f54;
        case 0x3d8f58u: goto label_3d8f58;
        case 0x3d8f5cu: goto label_3d8f5c;
        case 0x3d8f60u: goto label_3d8f60;
        case 0x3d8f64u: goto label_3d8f64;
        case 0x3d8f68u: goto label_3d8f68;
        case 0x3d8f6cu: goto label_3d8f6c;
        case 0x3d8f70u: goto label_3d8f70;
        case 0x3d8f74u: goto label_3d8f74;
        case 0x3d8f78u: goto label_3d8f78;
        case 0x3d8f7cu: goto label_3d8f7c;
        case 0x3d8f80u: goto label_3d8f80;
        case 0x3d8f84u: goto label_3d8f84;
        case 0x3d8f88u: goto label_3d8f88;
        case 0x3d8f8cu: goto label_3d8f8c;
        case 0x3d8f90u: goto label_3d8f90;
        case 0x3d8f94u: goto label_3d8f94;
        case 0x3d8f98u: goto label_3d8f98;
        case 0x3d8f9cu: goto label_3d8f9c;
        case 0x3d8fa0u: goto label_3d8fa0;
        case 0x3d8fa4u: goto label_3d8fa4;
        case 0x3d8fa8u: goto label_3d8fa8;
        case 0x3d8facu: goto label_3d8fac;
        case 0x3d8fb0u: goto label_3d8fb0;
        case 0x3d8fb4u: goto label_3d8fb4;
        case 0x3d8fb8u: goto label_3d8fb8;
        case 0x3d8fbcu: goto label_3d8fbc;
        case 0x3d8fc0u: goto label_3d8fc0;
        case 0x3d8fc4u: goto label_3d8fc4;
        case 0x3d8fc8u: goto label_3d8fc8;
        case 0x3d8fccu: goto label_3d8fcc;
        case 0x3d8fd0u: goto label_3d8fd0;
        case 0x3d8fd4u: goto label_3d8fd4;
        case 0x3d8fd8u: goto label_3d8fd8;
        case 0x3d8fdcu: goto label_3d8fdc;
        case 0x3d8fe0u: goto label_3d8fe0;
        case 0x3d8fe4u: goto label_3d8fe4;
        case 0x3d8fe8u: goto label_3d8fe8;
        case 0x3d8fecu: goto label_3d8fec;
        case 0x3d8ff0u: goto label_3d8ff0;
        case 0x3d8ff4u: goto label_3d8ff4;
        case 0x3d8ff8u: goto label_3d8ff8;
        case 0x3d8ffcu: goto label_3d8ffc;
        case 0x3d9000u: goto label_3d9000;
        case 0x3d9004u: goto label_3d9004;
        case 0x3d9008u: goto label_3d9008;
        case 0x3d900cu: goto label_3d900c;
        case 0x3d9010u: goto label_3d9010;
        case 0x3d9014u: goto label_3d9014;
        case 0x3d9018u: goto label_3d9018;
        case 0x3d901cu: goto label_3d901c;
        case 0x3d9020u: goto label_3d9020;
        case 0x3d9024u: goto label_3d9024;
        case 0x3d9028u: goto label_3d9028;
        case 0x3d902cu: goto label_3d902c;
        case 0x3d9030u: goto label_3d9030;
        case 0x3d9034u: goto label_3d9034;
        case 0x3d9038u: goto label_3d9038;
        case 0x3d903cu: goto label_3d903c;
        case 0x3d9040u: goto label_3d9040;
        case 0x3d9044u: goto label_3d9044;
        case 0x3d9048u: goto label_3d9048;
        case 0x3d904cu: goto label_3d904c;
        case 0x3d9050u: goto label_3d9050;
        case 0x3d9054u: goto label_3d9054;
        case 0x3d9058u: goto label_3d9058;
        case 0x3d905cu: goto label_3d905c;
        case 0x3d9060u: goto label_3d9060;
        case 0x3d9064u: goto label_3d9064;
        case 0x3d9068u: goto label_3d9068;
        case 0x3d906cu: goto label_3d906c;
        case 0x3d9070u: goto label_3d9070;
        case 0x3d9074u: goto label_3d9074;
        case 0x3d9078u: goto label_3d9078;
        case 0x3d907cu: goto label_3d907c;
        case 0x3d9080u: goto label_3d9080;
        case 0x3d9084u: goto label_3d9084;
        case 0x3d9088u: goto label_3d9088;
        case 0x3d908cu: goto label_3d908c;
        case 0x3d9090u: goto label_3d9090;
        case 0x3d9094u: goto label_3d9094;
        case 0x3d9098u: goto label_3d9098;
        case 0x3d909cu: goto label_3d909c;
        case 0x3d90a0u: goto label_3d90a0;
        case 0x3d90a4u: goto label_3d90a4;
        case 0x3d90a8u: goto label_3d90a8;
        case 0x3d90acu: goto label_3d90ac;
        case 0x3d90b0u: goto label_3d90b0;
        case 0x3d90b4u: goto label_3d90b4;
        case 0x3d90b8u: goto label_3d90b8;
        case 0x3d90bcu: goto label_3d90bc;
        case 0x3d90c0u: goto label_3d90c0;
        case 0x3d90c4u: goto label_3d90c4;
        case 0x3d90c8u: goto label_3d90c8;
        case 0x3d90ccu: goto label_3d90cc;
        case 0x3d90d0u: goto label_3d90d0;
        case 0x3d90d4u: goto label_3d90d4;
        case 0x3d90d8u: goto label_3d90d8;
        case 0x3d90dcu: goto label_3d90dc;
        case 0x3d90e0u: goto label_3d90e0;
        case 0x3d90e4u: goto label_3d90e4;
        case 0x3d90e8u: goto label_3d90e8;
        case 0x3d90ecu: goto label_3d90ec;
        case 0x3d90f0u: goto label_3d90f0;
        case 0x3d90f4u: goto label_3d90f4;
        case 0x3d90f8u: goto label_3d90f8;
        case 0x3d90fcu: goto label_3d90fc;
        case 0x3d9100u: goto label_3d9100;
        case 0x3d9104u: goto label_3d9104;
        case 0x3d9108u: goto label_3d9108;
        case 0x3d910cu: goto label_3d910c;
        case 0x3d9110u: goto label_3d9110;
        case 0x3d9114u: goto label_3d9114;
        case 0x3d9118u: goto label_3d9118;
        case 0x3d911cu: goto label_3d911c;
        case 0x3d9120u: goto label_3d9120;
        case 0x3d9124u: goto label_3d9124;
        case 0x3d9128u: goto label_3d9128;
        case 0x3d912cu: goto label_3d912c;
        case 0x3d9130u: goto label_3d9130;
        case 0x3d9134u: goto label_3d9134;
        case 0x3d9138u: goto label_3d9138;
        case 0x3d913cu: goto label_3d913c;
        case 0x3d9140u: goto label_3d9140;
        case 0x3d9144u: goto label_3d9144;
        case 0x3d9148u: goto label_3d9148;
        case 0x3d914cu: goto label_3d914c;
        case 0x3d9150u: goto label_3d9150;
        case 0x3d9154u: goto label_3d9154;
        case 0x3d9158u: goto label_3d9158;
        case 0x3d915cu: goto label_3d915c;
        case 0x3d9160u: goto label_3d9160;
        case 0x3d9164u: goto label_3d9164;
        case 0x3d9168u: goto label_3d9168;
        case 0x3d916cu: goto label_3d916c;
        case 0x3d9170u: goto label_3d9170;
        case 0x3d9174u: goto label_3d9174;
        case 0x3d9178u: goto label_3d9178;
        case 0x3d917cu: goto label_3d917c;
        case 0x3d9180u: goto label_3d9180;
        case 0x3d9184u: goto label_3d9184;
        case 0x3d9188u: goto label_3d9188;
        case 0x3d918cu: goto label_3d918c;
        case 0x3d9190u: goto label_3d9190;
        case 0x3d9194u: goto label_3d9194;
        case 0x3d9198u: goto label_3d9198;
        case 0x3d919cu: goto label_3d919c;
        case 0x3d91a0u: goto label_3d91a0;
        case 0x3d91a4u: goto label_3d91a4;
        case 0x3d91a8u: goto label_3d91a8;
        case 0x3d91acu: goto label_3d91ac;
        case 0x3d91b0u: goto label_3d91b0;
        case 0x3d91b4u: goto label_3d91b4;
        case 0x3d91b8u: goto label_3d91b8;
        case 0x3d91bcu: goto label_3d91bc;
        case 0x3d91c0u: goto label_3d91c0;
        case 0x3d91c4u: goto label_3d91c4;
        case 0x3d91c8u: goto label_3d91c8;
        case 0x3d91ccu: goto label_3d91cc;
        case 0x3d91d0u: goto label_3d91d0;
        case 0x3d91d4u: goto label_3d91d4;
        case 0x3d91d8u: goto label_3d91d8;
        case 0x3d91dcu: goto label_3d91dc;
        case 0x3d91e0u: goto label_3d91e0;
        case 0x3d91e4u: goto label_3d91e4;
        case 0x3d91e8u: goto label_3d91e8;
        case 0x3d91ecu: goto label_3d91ec;
        case 0x3d91f0u: goto label_3d91f0;
        case 0x3d91f4u: goto label_3d91f4;
        case 0x3d91f8u: goto label_3d91f8;
        case 0x3d91fcu: goto label_3d91fc;
        case 0x3d9200u: goto label_3d9200;
        case 0x3d9204u: goto label_3d9204;
        case 0x3d9208u: goto label_3d9208;
        case 0x3d920cu: goto label_3d920c;
        case 0x3d9210u: goto label_3d9210;
        case 0x3d9214u: goto label_3d9214;
        case 0x3d9218u: goto label_3d9218;
        case 0x3d921cu: goto label_3d921c;
        case 0x3d9220u: goto label_3d9220;
        case 0x3d9224u: goto label_3d9224;
        case 0x3d9228u: goto label_3d9228;
        case 0x3d922cu: goto label_3d922c;
        case 0x3d9230u: goto label_3d9230;
        case 0x3d9234u: goto label_3d9234;
        case 0x3d9238u: goto label_3d9238;
        case 0x3d923cu: goto label_3d923c;
        case 0x3d9240u: goto label_3d9240;
        case 0x3d9244u: goto label_3d9244;
        case 0x3d9248u: goto label_3d9248;
        case 0x3d924cu: goto label_3d924c;
        case 0x3d9250u: goto label_3d9250;
        case 0x3d9254u: goto label_3d9254;
        case 0x3d9258u: goto label_3d9258;
        case 0x3d925cu: goto label_3d925c;
        case 0x3d9260u: goto label_3d9260;
        case 0x3d9264u: goto label_3d9264;
        case 0x3d9268u: goto label_3d9268;
        case 0x3d926cu: goto label_3d926c;
        case 0x3d9270u: goto label_3d9270;
        case 0x3d9274u: goto label_3d9274;
        case 0x3d9278u: goto label_3d9278;
        case 0x3d927cu: goto label_3d927c;
        case 0x3d9280u: goto label_3d9280;
        case 0x3d9284u: goto label_3d9284;
        case 0x3d9288u: goto label_3d9288;
        case 0x3d928cu: goto label_3d928c;
        case 0x3d9290u: goto label_3d9290;
        case 0x3d9294u: goto label_3d9294;
        case 0x3d9298u: goto label_3d9298;
        case 0x3d929cu: goto label_3d929c;
        case 0x3d92a0u: goto label_3d92a0;
        case 0x3d92a4u: goto label_3d92a4;
        case 0x3d92a8u: goto label_3d92a8;
        case 0x3d92acu: goto label_3d92ac;
        case 0x3d92b0u: goto label_3d92b0;
        case 0x3d92b4u: goto label_3d92b4;
        case 0x3d92b8u: goto label_3d92b8;
        case 0x3d92bcu: goto label_3d92bc;
        case 0x3d92c0u: goto label_3d92c0;
        case 0x3d92c4u: goto label_3d92c4;
        case 0x3d92c8u: goto label_3d92c8;
        case 0x3d92ccu: goto label_3d92cc;
        case 0x3d92d0u: goto label_3d92d0;
        case 0x3d92d4u: goto label_3d92d4;
        case 0x3d92d8u: goto label_3d92d8;
        case 0x3d92dcu: goto label_3d92dc;
        case 0x3d92e0u: goto label_3d92e0;
        case 0x3d92e4u: goto label_3d92e4;
        case 0x3d92e8u: goto label_3d92e8;
        case 0x3d92ecu: goto label_3d92ec;
        case 0x3d92f0u: goto label_3d92f0;
        case 0x3d92f4u: goto label_3d92f4;
        case 0x3d92f8u: goto label_3d92f8;
        case 0x3d92fcu: goto label_3d92fc;
        case 0x3d9300u: goto label_3d9300;
        case 0x3d9304u: goto label_3d9304;
        case 0x3d9308u: goto label_3d9308;
        case 0x3d930cu: goto label_3d930c;
        case 0x3d9310u: goto label_3d9310;
        case 0x3d9314u: goto label_3d9314;
        case 0x3d9318u: goto label_3d9318;
        case 0x3d931cu: goto label_3d931c;
        case 0x3d9320u: goto label_3d9320;
        case 0x3d9324u: goto label_3d9324;
        case 0x3d9328u: goto label_3d9328;
        case 0x3d932cu: goto label_3d932c;
        case 0x3d9330u: goto label_3d9330;
        case 0x3d9334u: goto label_3d9334;
        case 0x3d9338u: goto label_3d9338;
        case 0x3d933cu: goto label_3d933c;
        case 0x3d9340u: goto label_3d9340;
        case 0x3d9344u: goto label_3d9344;
        case 0x3d9348u: goto label_3d9348;
        case 0x3d934cu: goto label_3d934c;
        case 0x3d9350u: goto label_3d9350;
        case 0x3d9354u: goto label_3d9354;
        case 0x3d9358u: goto label_3d9358;
        case 0x3d935cu: goto label_3d935c;
        case 0x3d9360u: goto label_3d9360;
        case 0x3d9364u: goto label_3d9364;
        case 0x3d9368u: goto label_3d9368;
        case 0x3d936cu: goto label_3d936c;
        case 0x3d9370u: goto label_3d9370;
        case 0x3d9374u: goto label_3d9374;
        case 0x3d9378u: goto label_3d9378;
        case 0x3d937cu: goto label_3d937c;
        case 0x3d9380u: goto label_3d9380;
        case 0x3d9384u: goto label_3d9384;
        case 0x3d9388u: goto label_3d9388;
        case 0x3d938cu: goto label_3d938c;
        default: break;
    }

    ctx->pc = 0x3d8d10u;

label_3d8d10:
    // 0x3d8d10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d8d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3d8d14:
    // 0x3d8d14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d8d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3d8d18:
    // 0x3d8d18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3d8d1c:
    // 0x3d8d1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d8d20:
    // 0x3d8d20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d8d24:
    // 0x3d8d24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d8d24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d28:
    // 0x3d8d28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d8d2c:
    // 0x3d8d2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d8d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d30:
    // 0x3d8d30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d8d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d8d34:
    // 0x3d8d34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d8d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8d38:
    // 0x3d8d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d8d3c:
    // 0x3d8d3c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3d8d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d40:
    // 0x3d8d40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d8d44:
    // 0x3d8d44: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3d8d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d48:
    // 0x3d8d48: 0x2258004  sllv        $s0, $a1, $s1
    ctx->pc = 0x3d8d48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_3d8d4c:
    // 0x3d8d4c: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x3d8d4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_3d8d50:
    // 0x3d8d50: 0x2002827  not         $a1, $s0
    ctx->pc = 0x3d8d50u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_3d8d54:
    // 0x3d8d54: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3d8d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3d8d58:
    // 0x3d8d58: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3d8d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3d8d5c:
    // 0x3d8d5c: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x3d8d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
label_3d8d60:
    // 0x3d8d60: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x3d8d60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_3d8d64:
    // 0x3d8d64: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_3d8d68:
    if (ctx->pc == 0x3D8D68u) {
        ctx->pc = 0x3D8D68u;
            // 0x3d8d68: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D6Cu;
        goto label_3d8d6c;
    }
    ctx->pc = 0x3D8D64u;
    {
        const bool branch_taken_0x3d8d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8D64u;
            // 0x3d8d68: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8d64) {
            ctx->pc = 0x3D8EACu;
            goto label_3d8eac;
        }
    }
    ctx->pc = 0x3D8D6Cu;
label_3d8d6c:
    // 0x3d8d6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d8d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d70:
    // 0x3d8d70: 0xc04f278  jal         func_13C9E0
label_3d8d74:
    if (ctx->pc == 0x3D8D74u) {
        ctx->pc = 0x3D8D74u;
            // 0x3d8d74: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x3D8D78u;
        goto label_3d8d78;
    }
    ctx->pc = 0x3D8D70u;
    SET_GPR_U32(ctx, 31, 0x3D8D78u);
    ctx->pc = 0x3D8D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8D70u;
            // 0x3d8d74: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8D78u; }
        if (ctx->pc != 0x3D8D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8D78u; }
        if (ctx->pc != 0x3D8D78u) { return; }
    }
    ctx->pc = 0x3D8D78u;
label_3d8d78:
    // 0x3d8d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d8d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d7c:
    // 0x3d8d7c: 0xc04ce80  jal         func_133A00
label_3d8d80:
    if (ctx->pc == 0x3D8D80u) {
        ctx->pc = 0x3D8D80u;
            // 0x3d8d80: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x3D8D84u;
        goto label_3d8d84;
    }
    ctx->pc = 0x3D8D7Cu;
    SET_GPR_U32(ctx, 31, 0x3D8D84u);
    ctx->pc = 0x3D8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8D7Cu;
            // 0x3d8d80: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8D84u; }
        if (ctx->pc != 0x3D8D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8D84u; }
        if (ctx->pc != 0x3D8D84u) { return; }
    }
    ctx->pc = 0x3D8D84u;
label_3d8d84:
    // 0x3d8d84: 0xc0d4108  jal         func_350420
label_3d8d88:
    if (ctx->pc == 0x3D8D88u) {
        ctx->pc = 0x3D8D8Cu;
        goto label_3d8d8c;
    }
    ctx->pc = 0x3D8D84u;
    SET_GPR_U32(ctx, 31, 0x3D8D8Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8D8Cu; }
        if (ctx->pc != 0x3D8D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8D8Cu; }
        if (ctx->pc != 0x3D8D8Cu) { return; }
    }
    ctx->pc = 0x3D8D8Cu;
label_3d8d8c:
    // 0x3d8d8c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d8d8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d90:
    // 0x3d8d90: 0xc0d4104  jal         func_350410
label_3d8d94:
    if (ctx->pc == 0x3D8D94u) {
        ctx->pc = 0x3D8D94u;
            // 0x3d8d94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D98u;
        goto label_3d8d98;
    }
    ctx->pc = 0x3D8D90u;
    SET_GPR_U32(ctx, 31, 0x3D8D98u);
    ctx->pc = 0x3D8D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8D90u;
            // 0x3d8d94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8D98u; }
        if (ctx->pc != 0x3D8D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8D98u; }
        if (ctx->pc != 0x3D8D98u) { return; }
    }
    ctx->pc = 0x3D8D98u;
label_3d8d98:
    // 0x3d8d98: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3d8d98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d9c:
    // 0x3d8d9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d8d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d8da0:
    // 0x3d8da0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d8da4:
    // 0x3d8da4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d8da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8da8:
    // 0x3d8da8: 0xc44c9a98  lwc1        $f12, -0x6568($v0)
    ctx->pc = 0x3d8da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d8dac:
    // 0x3d8dac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d8dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d8db0:
    // 0x3d8db0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3d8db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d8db4:
    // 0x3d8db4: 0xc0d40ac  jal         func_3502B0
label_3d8db8:
    if (ctx->pc == 0x3D8DB8u) {
        ctx->pc = 0x3D8DB8u;
            // 0x3d8db8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8DBCu;
        goto label_3d8dbc;
    }
    ctx->pc = 0x3D8DB4u;
    SET_GPR_U32(ctx, 31, 0x3D8DBCu);
    ctx->pc = 0x3D8DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8DB4u;
            // 0x3d8db8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8DBCu; }
        if (ctx->pc != 0x3D8DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8DBCu; }
        if (ctx->pc != 0x3D8DBCu) { return; }
    }
    ctx->pc = 0x3D8DBCu;
label_3d8dbc:
    // 0x3d8dbc: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x3d8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_3d8dc0:
    // 0x3d8dc0: 0x28510002  slti        $s1, $v0, 0x2
    ctx->pc = 0x3d8dc0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d8dc4:
    // 0x3d8dc4: 0x2111018  mult        $v0, $s0, $s1
    ctx->pc = 0x3d8dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d8dc8:
    // 0x3d8dc8: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x3d8dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_3d8dcc:
    // 0x3d8dcc: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x3d8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_3d8dd0:
    // 0x3d8dd0: 0xc0d590c  jal         func_356430
label_3d8dd4:
    if (ctx->pc == 0x3D8DD4u) {
        ctx->pc = 0x3D8DD4u;
            // 0x3d8dd4: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x3D8DD8u;
        goto label_3d8dd8;
    }
    ctx->pc = 0x3D8DD0u;
    SET_GPR_U32(ctx, 31, 0x3D8DD8u);
    ctx->pc = 0x3D8DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8DD0u;
            // 0x3d8dd4: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8DD8u; }
        if (ctx->pc != 0x3D8DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8DD8u; }
        if (ctx->pc != 0x3D8DD8u) { return; }
    }
    ctx->pc = 0x3D8DD8u;
label_3d8dd8:
    // 0x3d8dd8: 0x52200035  beql        $s1, $zero, . + 4 + (0x35 << 2)
label_3d8ddc:
    if (ctx->pc == 0x3D8DDCu) {
        ctx->pc = 0x3D8DDCu;
            // 0x3d8ddc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3D8DE0u;
        goto label_3d8de0;
    }
    ctx->pc = 0x3D8DD8u;
    {
        const bool branch_taken_0x3d8dd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8dd8) {
            ctx->pc = 0x3D8DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8DD8u;
            // 0x3d8ddc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8EB0u;
            goto label_3d8eb0;
        }
    }
    ctx->pc = 0x3D8DE0u;
label_3d8de0:
    // 0x3d8de0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d8de4:
    // 0x3d8de4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d8de8:
    // 0x3d8de8: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x3d8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3d8dec:
    // 0x3d8dec: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3d8decu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_3d8df0:
    // 0x3d8df0: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x3d8df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_3d8df4:
    // 0x3d8df4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d8df8:
    // 0x3d8df8: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x3d8df8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d8dfc:
    // 0x3d8dfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d8e00:
    // 0x3d8e00: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x3d8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_3d8e04:
    // 0x3d8e04: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x3d8e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_3d8e08:
    // 0x3d8e08: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x3d8e08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_3d8e0c:
    // 0x3d8e0c: 0x868821  addu        $s1, $a0, $a2
    ctx->pc = 0x3d8e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3d8e10:
    // 0x3d8e10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d8e14:
    // 0x3d8e14: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3d8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_3d8e18:
    // 0x3d8e18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d8e1c:
    // 0x3d8e1c: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x3d8e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
label_3d8e20:
    // 0x3d8e20: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d8e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d8e24:
    // 0x3d8e24: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x3d8e24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_3d8e28:
    // 0x3d8e28: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3d8e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3d8e2c:
    // 0x3d8e2c: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x3d8e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3d8e30:
    // 0x3d8e30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d8e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8e34:
    // 0x3d8e34: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x3d8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_3d8e38:
    // 0x3d8e38: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x3d8e38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3d8e3c:
    // 0x3d8e3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d8e40:
    // 0x3d8e40: 0x1098021  addu        $s0, $t0, $t1
    ctx->pc = 0x3d8e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3d8e44:
    // 0x3d8e44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d8e48:
    // 0x3d8e48: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x3d8e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3d8e4c:
    // 0x3d8e4c: 0xad100000  sw          $s0, 0x0($t0)
    ctx->pc = 0x3d8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 16));
label_3d8e50:
    // 0x3d8e50: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x3d8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3d8e54:
    // 0x3d8e54: 0x8e880028  lw          $t0, 0x28($s4)
    ctx->pc = 0x3d8e54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3d8e58:
    // 0x3d8e58: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x3d8e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_3d8e5c:
    // 0x3d8e5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d8e60:
    // 0x3d8e60: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x3d8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_3d8e64:
    // 0x3d8e64: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x3d8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_3d8e68:
    // 0x3d8e68: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x3d8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_3d8e6c:
    // 0x3d8e6c: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x3d8e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3d8e70:
    // 0x3d8e70: 0xc04e4a4  jal         func_139290
label_3d8e74:
    if (ctx->pc == 0x3D8E74u) {
        ctx->pc = 0x3D8E74u;
            // 0x3d8e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8E78u;
        goto label_3d8e78;
    }
    ctx->pc = 0x3D8E70u;
    SET_GPR_U32(ctx, 31, 0x3D8E78u);
    ctx->pc = 0x3D8E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8E70u;
            // 0x3d8e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8E78u; }
        if (ctx->pc != 0x3D8E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8E78u; }
        if (ctx->pc != 0x3D8E78u) { return; }
    }
    ctx->pc = 0x3D8E78u;
label_3d8e78:
    // 0x3d8e78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d8e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d8e7c:
    // 0x3d8e7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d8e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d8e80:
    // 0x3d8e80: 0xc04cd60  jal         func_133580
label_3d8e84:
    if (ctx->pc == 0x3D8E84u) {
        ctx->pc = 0x3D8E84u;
            // 0x3d8e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8E88u;
        goto label_3d8e88;
    }
    ctx->pc = 0x3D8E80u;
    SET_GPR_U32(ctx, 31, 0x3D8E88u);
    ctx->pc = 0x3D8E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8E80u;
            // 0x3d8e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8E88u; }
        if (ctx->pc != 0x3D8E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8E88u; }
        if (ctx->pc != 0x3D8E88u) { return; }
    }
    ctx->pc = 0x3D8E88u;
label_3d8e88:
    // 0x3d8e88: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3d8e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3d8e8c:
    // 0x3d8e8c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3d8e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3d8e90:
    // 0x3d8e90: 0x320f809  jalr        $t9
label_3d8e94:
    if (ctx->pc == 0x3D8E94u) {
        ctx->pc = 0x3D8E94u;
            // 0x3d8e94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8E98u;
        goto label_3d8e98;
    }
    ctx->pc = 0x3D8E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D8E98u);
        ctx->pc = 0x3D8E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8E90u;
            // 0x3d8e94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D8E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D8E98u; }
            if (ctx->pc != 0x3D8E98u) { return; }
        }
        }
    }
    ctx->pc = 0x3D8E98u;
label_3d8e98:
    // 0x3d8e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8e9c:
    // 0x3d8e9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d8e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d8ea0:
    // 0x3d8ea0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d8ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8ea4:
    // 0x3d8ea4: 0xc054fd4  jal         func_153F50
label_3d8ea8:
    if (ctx->pc == 0x3D8EA8u) {
        ctx->pc = 0x3D8EA8u;
            // 0x3d8ea8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8EACu;
        goto label_3d8eac;
    }
    ctx->pc = 0x3D8EA4u;
    SET_GPR_U32(ctx, 31, 0x3D8EACu);
    ctx->pc = 0x3D8EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8EA4u;
            // 0x3d8ea8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8EACu; }
        if (ctx->pc != 0x3D8EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8EACu; }
        if (ctx->pc != 0x3D8EACu) { return; }
    }
    ctx->pc = 0x3D8EACu;
label_3d8eac:
    // 0x3d8eac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d8eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d8eb0:
    // 0x3d8eb0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d8eb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d8eb4:
    // 0x3d8eb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d8eb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d8eb8:
    // 0x3d8eb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d8eb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d8ebc:
    // 0x3d8ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d8ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d8ec0:
    // 0x3d8ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d8ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8ec4:
    // 0x3d8ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8ec8:
    // 0x3d8ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8ecc:
    // 0x3d8ecc: 0x3e00008  jr          $ra
label_3d8ed0:
    if (ctx->pc == 0x3D8ED0u) {
        ctx->pc = 0x3D8ED0u;
            // 0x3d8ed0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D8ED4u;
        goto label_3d8ed4;
    }
    ctx->pc = 0x3D8ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8ECCu;
            // 0x3d8ed0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8ED4u;
label_3d8ed4:
    // 0x3d8ed4: 0x0  nop
    ctx->pc = 0x3d8ed4u;
    // NOP
label_3d8ed8:
    // 0x3d8ed8: 0x0  nop
    ctx->pc = 0x3d8ed8u;
    // NOP
label_3d8edc:
    // 0x3d8edc: 0x0  nop
    ctx->pc = 0x3d8edcu;
    // NOP
label_3d8ee0:
    // 0x3d8ee0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d8ee4:
    // 0x3d8ee4: 0x3e00008  jr          $ra
label_3d8ee8:
    if (ctx->pc == 0x3D8EE8u) {
        ctx->pc = 0x3D8EE8u;
            // 0x3d8ee8: 0x24429a88  addiu       $v0, $v0, -0x6578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941320));
        ctx->pc = 0x3D8EECu;
        goto label_3d8eec;
    }
    ctx->pc = 0x3D8EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8EE4u;
            // 0x3d8ee8: 0x24429a88  addiu       $v0, $v0, -0x6578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8EECu;
label_3d8eec:
    // 0x3d8eec: 0x0  nop
    ctx->pc = 0x3d8eecu;
    // NOP
label_3d8ef0:
    // 0x3d8ef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d8ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d8ef4:
    // 0x3d8ef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d8ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3d8ef8:
    // 0x3d8ef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d8efc:
    // 0x3d8efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d8efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d8f00:
    // 0x3d8f00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d8f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8f04:
    // 0x3d8f04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d8f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d8f08:
    // 0x3d8f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d8f0c:
    // 0x3d8f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d8f10:
    // 0x3d8f10: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3d8f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d8f14:
    // 0x3d8f14: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3d8f18:
    if (ctx->pc == 0x3D8F18u) {
        ctx->pc = 0x3D8F18u;
            // 0x3d8f18: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8F1Cu;
        goto label_3d8f1c;
    }
    ctx->pc = 0x3D8F14u;
    {
        const bool branch_taken_0x3d8f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8F14u;
            // 0x3d8f18: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8f14) {
            ctx->pc = 0x3D8F58u;
            goto label_3d8f58;
        }
    }
    ctx->pc = 0x3D8F1Cu;
label_3d8f1c:
    // 0x3d8f1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d8f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8f20:
    // 0x3d8f20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d8f20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8f24:
    // 0x3d8f24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d8f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8f28:
    // 0x3d8f28: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3d8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3d8f2c:
    // 0x3d8f2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3d8f30:
    // 0x3d8f30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d8f34:
    // 0x3d8f34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d8f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d8f38:
    // 0x3d8f38: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d8f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d8f3c:
    // 0x3d8f3c: 0x320f809  jalr        $t9
label_3d8f40:
    if (ctx->pc == 0x3D8F40u) {
        ctx->pc = 0x3D8F44u;
        goto label_3d8f44;
    }
    ctx->pc = 0x3D8F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D8F44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D8F44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D8F44u; }
            if (ctx->pc != 0x3D8F44u) { return; }
        }
        }
    }
    ctx->pc = 0x3D8F44u;
label_3d8f44:
    // 0x3d8f44: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3d8f44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3d8f48:
    // 0x3d8f48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d8f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3d8f4c:
    // 0x3d8f4c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3d8f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d8f50:
    // 0x3d8f50: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3d8f54:
    if (ctx->pc == 0x3D8F54u) {
        ctx->pc = 0x3D8F54u;
            // 0x3d8f54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3D8F58u;
        goto label_3d8f58;
    }
    ctx->pc = 0x3D8F50u;
    {
        const bool branch_taken_0x3d8f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8F50u;
            // 0x3d8f54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8f50) {
            ctx->pc = 0x3D8F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d8f28;
        }
    }
    ctx->pc = 0x3D8F58u;
label_3d8f58:
    // 0x3d8f58: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d8f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d8f5c:
    // 0x3d8f5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d8f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d8f60:
    // 0x3d8f60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d8f60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d8f64:
    // 0x3d8f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d8f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d8f68:
    // 0x3d8f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d8f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8f6c:
    // 0x3d8f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8f70:
    // 0x3d8f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8f74:
    // 0x3d8f74: 0x3e00008  jr          $ra
label_3d8f78:
    if (ctx->pc == 0x3D8F78u) {
        ctx->pc = 0x3D8F78u;
            // 0x3d8f78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D8F7Cu;
        goto label_3d8f7c;
    }
    ctx->pc = 0x3D8F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8F74u;
            // 0x3d8f78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8F7Cu;
label_3d8f7c:
    // 0x3d8f7c: 0x0  nop
    ctx->pc = 0x3d8f7cu;
    // NOP
label_3d8f80:
    // 0x3d8f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d8f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d8f84:
    // 0x3d8f84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d8f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8f88:
    // 0x3d8f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d8f8c:
    // 0x3d8f8c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3d8f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3d8f90:
    // 0x3d8f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d8f94:
    // 0x3d8f94: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3d8f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3d8f98:
    // 0x3d8f98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d8f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8f9c:
    // 0x3d8f9c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3d8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3d8fa0:
    // 0x3d8fa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d8fa4:
    // 0x3d8fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d8fa8:
    // 0x3d8fa8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3d8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3d8fac:
    // 0x3d8fac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3d8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d8fb0:
    // 0x3d8fb0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3d8fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d8fb4:
    // 0x3d8fb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3d8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8fb8:
    // 0x3d8fb8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3d8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3d8fbc:
    // 0x3d8fbc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3d8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3d8fc0:
    // 0x3d8fc0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3d8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3d8fc4:
    // 0x3d8fc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d8fc8:
    // 0x3d8fc8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3d8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3d8fcc:
    // 0x3d8fcc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3d8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d8fd0:
    // 0x3d8fd0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3d8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3d8fd4:
    // 0x3d8fd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d8fd8:
    // 0x3d8fd8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3d8fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d8fdc:
    // 0x3d8fdc: 0xc0a997c  jal         func_2A65F0
label_3d8fe0:
    if (ctx->pc == 0x3D8FE0u) {
        ctx->pc = 0x3D8FE0u;
            // 0x3d8fe0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3D8FE4u;
        goto label_3d8fe4;
    }
    ctx->pc = 0x3D8FDCu;
    SET_GPR_U32(ctx, 31, 0x3D8FE4u);
    ctx->pc = 0x3D8FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8FDCu;
            // 0x3d8fe0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8FE4u; }
        if (ctx->pc != 0x3D8FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8FE4u; }
        if (ctx->pc != 0x3D8FE4u) { return; }
    }
    ctx->pc = 0x3D8FE4u;
label_3d8fe4:
    // 0x3d8fe4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3d8fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3d8fe8:
    // 0x3d8fe8: 0xc0d879c  jal         func_361E70
label_3d8fec:
    if (ctx->pc == 0x3D8FECu) {
        ctx->pc = 0x3D8FECu;
            // 0x3d8fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8FF0u;
        goto label_3d8ff0;
    }
    ctx->pc = 0x3D8FE8u;
    SET_GPR_U32(ctx, 31, 0x3D8FF0u);
    ctx->pc = 0x3D8FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8FE8u;
            // 0x3d8fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8FF0u; }
        if (ctx->pc != 0x3D8FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8FF0u; }
        if (ctx->pc != 0x3D8FF0u) { return; }
    }
    ctx->pc = 0x3D8FF0u;
label_3d8ff0:
    // 0x3d8ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8ff4:
    // 0x3d8ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8ff8:
    // 0x3d8ff8: 0x3e00008  jr          $ra
label_3d8ffc:
    if (ctx->pc == 0x3D8FFCu) {
        ctx->pc = 0x3D8FFCu;
            // 0x3d8ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D9000u;
        goto label_3d9000;
    }
    ctx->pc = 0x3D8FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8FF8u;
            // 0x3d8ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D9000u;
label_3d9000:
    // 0x3d9000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d9004:
    // 0x3d9004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d9008:
    // 0x3d9008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d900c:
    // 0x3d900c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3d900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3d9010:
    // 0x3d9010: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3d9014:
    if (ctx->pc == 0x3D9014u) {
        ctx->pc = 0x3D9014u;
            // 0x3d9014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9018u;
        goto label_3d9018;
    }
    ctx->pc = 0x3D9010u;
    {
        const bool branch_taken_0x3d9010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9010u;
            // 0x3d9014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9010) {
            ctx->pc = 0x3D9130u;
            goto label_3d9130;
        }
    }
    ctx->pc = 0x3D9018u;
label_3d9018:
    // 0x3d9018: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3d9018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d901c:
    // 0x3d901c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3d901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3d9020:
    // 0x3d9020: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d9020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d9024:
    // 0x3d9024: 0xc075128  jal         func_1D44A0
label_3d9028:
    if (ctx->pc == 0x3D9028u) {
        ctx->pc = 0x3D9028u;
            // 0x3d9028: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3D902Cu;
        goto label_3d902c;
    }
    ctx->pc = 0x3D9024u;
    SET_GPR_U32(ctx, 31, 0x3D902Cu);
    ctx->pc = 0x3D9028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9024u;
            // 0x3d9028: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D902Cu; }
        if (ctx->pc != 0x3D902Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D902Cu; }
        if (ctx->pc != 0x3D902Cu) { return; }
    }
    ctx->pc = 0x3D902Cu;
label_3d902c:
    // 0x3d902c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3d902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d9030:
    // 0x3d9030: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9034:
    // 0x3d9034: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3d9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3d9038:
    // 0x3d9038: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3d9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3d903c:
    // 0x3d903c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d903cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d9040:
    // 0x3d9040: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d9044:
    if (ctx->pc == 0x3D9044u) {
        ctx->pc = 0x3D9044u;
            // 0x3d9044: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3D9048u;
        goto label_3d9048;
    }
    ctx->pc = 0x3D9040u;
    {
        const bool branch_taken_0x3d9040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9040u;
            // 0x3d9044: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9040) {
            ctx->pc = 0x3D9050u;
            goto label_3d9050;
        }
    }
    ctx->pc = 0x3D9048u;
label_3d9048:
    // 0x3d9048: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d904c:
    // 0x3d904c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3d904cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3d9050:
    // 0x3d9050: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9054:
    // 0x3d9054: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9058:
    // 0x3d9058: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3d9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3d905c:
    // 0x3d905c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3d905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3d9060:
    // 0x3d9060: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d9060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d9064:
    // 0x3d9064: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d9068:
    if (ctx->pc == 0x3D9068u) {
        ctx->pc = 0x3D9068u;
            // 0x3d9068: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D906Cu;
        goto label_3d906c;
    }
    ctx->pc = 0x3D9064u;
    {
        const bool branch_taken_0x3d9064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9064) {
            ctx->pc = 0x3D9068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9064u;
            // 0x3d9068: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9078u;
            goto label_3d9078;
        }
    }
    ctx->pc = 0x3D906Cu;
label_3d906c:
    // 0x3d906c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9070:
    // 0x3d9070: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3d9070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3d9074:
    // 0x3d9074: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d9074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9078:
    // 0x3d9078: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d907c:
    // 0x3d907c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3d907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3d9080:
    // 0x3d9080: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3d9080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3d9084:
    // 0x3d9084: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d9084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d9088:
    // 0x3d9088: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d908c:
    if (ctx->pc == 0x3D908Cu) {
        ctx->pc = 0x3D908Cu;
            // 0x3d908c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3D9090u;
        goto label_3d9090;
    }
    ctx->pc = 0x3D9088u;
    {
        const bool branch_taken_0x3d9088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9088) {
            ctx->pc = 0x3D908Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9088u;
            // 0x3d908c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D909Cu;
            goto label_3d909c;
        }
    }
    ctx->pc = 0x3D9090u;
label_3d9090:
    // 0x3d9090: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9094:
    // 0x3d9094: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3d9094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3d9098:
    // 0x3d9098: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d9098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d909c:
    // 0x3d909c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d909cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d90a0:
    // 0x3d90a0: 0x320f809  jalr        $t9
label_3d90a4:
    if (ctx->pc == 0x3D90A4u) {
        ctx->pc = 0x3D90A4u;
            // 0x3d90a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D90A8u;
        goto label_3d90a8;
    }
    ctx->pc = 0x3D90A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D90A8u);
        ctx->pc = 0x3D90A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D90A0u;
            // 0x3d90a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D90A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D90A8u; }
            if (ctx->pc != 0x3D90A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3D90A8u;
label_3d90a8:
    // 0x3d90a8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3d90a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d90ac:
    // 0x3d90ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d90acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d90b0:
    // 0x3d90b0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3d90b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3d90b4:
    // 0x3d90b4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3d90b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3d90b8:
    // 0x3d90b8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3d90b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d90bc:
    // 0x3d90bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3d90bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3d90c0:
    // 0x3d90c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d90c4:
    if (ctx->pc == 0x3D90C4u) {
        ctx->pc = 0x3D90C4u;
            // 0x3d90c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3D90C8u;
        goto label_3d90c8;
    }
    ctx->pc = 0x3D90C0u;
    {
        const bool branch_taken_0x3d90c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d90c0) {
            ctx->pc = 0x3D90C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D90C0u;
            // 0x3d90c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D90D4u;
            goto label_3d90d4;
        }
    }
    ctx->pc = 0x3D90C8u;
label_3d90c8:
    // 0x3d90c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d90cc:
    // 0x3d90cc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3d90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3d90d0:
    // 0x3d90d0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3d90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d90d4:
    // 0x3d90d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d90d8:
    // 0x3d90d8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3d90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3d90dc:
    // 0x3d90dc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3d90dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3d90e0:
    // 0x3d90e0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3d90e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d90e4:
    // 0x3d90e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3d90e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3d90e8:
    // 0x3d90e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d90ec:
    if (ctx->pc == 0x3D90ECu) {
        ctx->pc = 0x3D90F0u;
        goto label_3d90f0;
    }
    ctx->pc = 0x3D90E8u;
    {
        const bool branch_taken_0x3d90e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d90e8) {
            ctx->pc = 0x3D90F8u;
            goto label_3d90f8;
        }
    }
    ctx->pc = 0x3D90F0u;
label_3d90f0:
    // 0x3d90f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d90f4:
    // 0x3d90f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3d90f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3d90f8:
    // 0x3d90f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d90fc:
    // 0x3d90fc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3d90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3d9100:
    // 0x3d9100: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d9100u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d9104:
    // 0x3d9104: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d9108:
    if (ctx->pc == 0x3D9108u) {
        ctx->pc = 0x3D910Cu;
        goto label_3d910c;
    }
    ctx->pc = 0x3D9104u;
    {
        const bool branch_taken_0x3d9104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9104) {
            ctx->pc = 0x3D9114u;
            goto label_3d9114;
        }
    }
    ctx->pc = 0x3D910Cu;
label_3d910c:
    // 0x3d910c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d9110:
    // 0x3d9110: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3d9110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3d9114:
    // 0x3d9114: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d9114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d9118:
    // 0x3d9118: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3d9118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3d911c:
    // 0x3d911c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d911cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d9120:
    // 0x3d9120: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d9124:
    if (ctx->pc == 0x3D9124u) {
        ctx->pc = 0x3D9124u;
            // 0x3d9124: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D9128u;
        goto label_3d9128;
    }
    ctx->pc = 0x3D9120u;
    {
        const bool branch_taken_0x3d9120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9120) {
            ctx->pc = 0x3D9124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9120u;
            // 0x3d9124: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9134u;
            goto label_3d9134;
        }
    }
    ctx->pc = 0x3D9128u;
label_3d9128:
    // 0x3d9128: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d9128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d912c:
    // 0x3d912c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3d912cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3d9130:
    // 0x3d9130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d9130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9134:
    // 0x3d9134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9138:
    // 0x3d9138: 0x3e00008  jr          $ra
label_3d913c:
    if (ctx->pc == 0x3D913Cu) {
        ctx->pc = 0x3D913Cu;
            // 0x3d913c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D9140u;
        goto label_3d9140;
    }
    ctx->pc = 0x3D9138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D913Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9138u;
            // 0x3d913c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D9140u;
label_3d9140:
    // 0x3d9140: 0x80f6034  j           func_3D80D0
label_3d9144:
    if (ctx->pc == 0x3D9144u) {
        ctx->pc = 0x3D9144u;
            // 0x3d9144: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D9148u;
        goto label_3d9148;
    }
    ctx->pc = 0x3D9140u;
    ctx->pc = 0x3D9144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9140u;
            // 0x3d9144: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D80D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3D80D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3D9148u;
label_3d9148:
    // 0x3d9148: 0x0  nop
    ctx->pc = 0x3d9148u;
    // NOP
label_3d914c:
    // 0x3d914c: 0x0  nop
    ctx->pc = 0x3d914cu;
    // NOP
label_3d9150:
    // 0x3d9150: 0x80f5ed0  j           func_3D7B40
label_3d9154:
    if (ctx->pc == 0x3D9154u) {
        ctx->pc = 0x3D9154u;
            // 0x3d9154: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D9158u;
        goto label_3d9158;
    }
    ctx->pc = 0x3D9150u;
    ctx->pc = 0x3D9154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9150u;
            // 0x3d9154: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D7B40u;
    if (runtime->hasFunction(0x3D7B40u)) {
        auto targetFn = runtime->lookupFunction(0x3D7B40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003D7B40_0x3d7b40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3D9158u;
label_3d9158:
    // 0x3d9158: 0x0  nop
    ctx->pc = 0x3d9158u;
    // NOP
label_3d915c:
    // 0x3d915c: 0x0  nop
    ctx->pc = 0x3d915cu;
    // NOP
label_3d9160:
    // 0x3d9160: 0x80f5f28  j           func_3D7CA0
label_3d9164:
    if (ctx->pc == 0x3D9164u) {
        ctx->pc = 0x3D9164u;
            // 0x3d9164: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3D9168u;
        goto label_3d9168;
    }
    ctx->pc = 0x3D9160u;
    ctx->pc = 0x3D9164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9160u;
            // 0x3d9164: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D7CA0u;
    {
        auto targetFn = runtime->lookupFunction(0x3D7CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3D9168u;
label_3d9168:
    // 0x3d9168: 0x0  nop
    ctx->pc = 0x3d9168u;
    // NOP
label_3d916c:
    // 0x3d916c: 0x0  nop
    ctx->pc = 0x3d916cu;
    // NOP
label_3d9170:
    // 0x3d9170: 0x80f5eac  j           func_3D7AB0
label_3d9174:
    if (ctx->pc == 0x3D9174u) {
        ctx->pc = 0x3D9174u;
            // 0x3d9174: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D9178u;
        goto label_3d9178;
    }
    ctx->pc = 0x3D9170u;
    ctx->pc = 0x3D9174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9170u;
            // 0x3d9174: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D7AB0u;
    {
        auto targetFn = runtime->lookupFunction(0x3D7AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3D9178u;
label_3d9178:
    // 0x3d9178: 0x0  nop
    ctx->pc = 0x3d9178u;
    // NOP
label_3d917c:
    // 0x3d917c: 0x0  nop
    ctx->pc = 0x3d917cu;
    // NOP
label_3d9180:
    // 0x3d9180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d9180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d9184:
    // 0x3d9184: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d9184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d9188:
    // 0x3d9188: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d9188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d918c:
    // 0x3d918c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d918cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d9190:
    // 0x3d9190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d9190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d9194:
    // 0x3d9194: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d9198:
    // 0x3d9198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d9198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d919c:
    // 0x3d919c: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_3d91a0:
    if (ctx->pc == 0x3D91A0u) {
        ctx->pc = 0x3D91A0u;
            // 0x3d91a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D91A4u;
        goto label_3d91a4;
    }
    ctx->pc = 0x3D919Cu;
    {
        const bool branch_taken_0x3d919c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D91A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D919Cu;
            // 0x3d91a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d919c) {
            ctx->pc = 0x3D9224u;
            goto label_3d9224;
        }
    }
    ctx->pc = 0x3D91A4u;
label_3d91a4:
    // 0x3d91a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d91a8:
    // 0x3d91a8: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x3d91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
label_3d91ac:
    // 0x3d91ac: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_3d91b0:
    if (ctx->pc == 0x3D91B0u) {
        ctx->pc = 0x3D91B0u;
            // 0x3d91b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3D91B4u;
        goto label_3d91b4;
    }
    ctx->pc = 0x3D91ACu;
    {
        const bool branch_taken_0x3d91ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D91B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D91ACu;
            // 0x3d91b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d91ac) {
            ctx->pc = 0x3D920Cu;
            goto label_3d920c;
        }
    }
    ctx->pc = 0x3D91B4u;
label_3d91b4:
    // 0x3d91b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d91b8:
    // 0x3d91b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d91b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d91bc:
    // 0x3d91bc: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x3d91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
label_3d91c0:
    // 0x3d91c0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3d91c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d91c4:
    // 0x3d91c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d91c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d91c8:
    // 0x3d91c8: 0x8e440cc8  lw          $a0, 0xCC8($s2)
    ctx->pc = 0x3d91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
label_3d91cc:
    // 0x3d91cc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3d91d0:
    if (ctx->pc == 0x3D91D0u) {
        ctx->pc = 0x3D91D4u;
        goto label_3d91d4;
    }
    ctx->pc = 0x3D91CCu;
    {
        const bool branch_taken_0x3d91cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d91cc) {
            ctx->pc = 0x3D91F0u;
            goto label_3d91f0;
        }
    }
    ctx->pc = 0x3D91D4u;
label_3d91d4:
    // 0x3d91d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3d91d8:
    if (ctx->pc == 0x3D91D8u) {
        ctx->pc = 0x3D91DCu;
        goto label_3d91dc;
    }
    ctx->pc = 0x3D91D4u;
    {
        const bool branch_taken_0x3d91d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d91d4) {
            ctx->pc = 0x3D91F0u;
            goto label_3d91f0;
        }
    }
    ctx->pc = 0x3D91DCu;
label_3d91dc:
    // 0x3d91dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d91dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d91e0:
    // 0x3d91e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d91e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d91e4:
    // 0x3d91e4: 0x320f809  jalr        $t9
label_3d91e8:
    if (ctx->pc == 0x3D91E8u) {
        ctx->pc = 0x3D91E8u;
            // 0x3d91e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D91ECu;
        goto label_3d91ec;
    }
    ctx->pc = 0x3D91E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D91ECu);
        ctx->pc = 0x3D91E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D91E4u;
            // 0x3d91e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D91ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D91ECu; }
            if (ctx->pc != 0x3D91ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3D91ECu;
label_3d91ec:
    // 0x3d91ec: 0x0  nop
    ctx->pc = 0x3d91ecu;
    // NOP
label_3d91f0:
    // 0x3d91f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d91f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d91f4:
    // 0x3d91f4: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x3d91f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3d91f8:
    // 0x3d91f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_3d91fc:
    if (ctx->pc == 0x3D91FCu) {
        ctx->pc = 0x3D91FCu;
            // 0x3d91fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3D9200u;
        goto label_3d9200;
    }
    ctx->pc = 0x3D91F8u;
    {
        const bool branch_taken_0x3d91f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D91FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D91F8u;
            // 0x3d91fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d91f8) {
            ctx->pc = 0x3D91C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d91c8;
        }
    }
    ctx->pc = 0x3D9200u;
label_3d9200:
    // 0x3d9200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9204:
    // 0x3d9204: 0xc075bf8  jal         func_1D6FE0
label_3d9208:
    if (ctx->pc == 0x3D9208u) {
        ctx->pc = 0x3D9208u;
            // 0x3d9208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D920Cu;
        goto label_3d920c;
    }
    ctx->pc = 0x3D9204u;
    SET_GPR_U32(ctx, 31, 0x3D920Cu);
    ctx->pc = 0x3D9208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9204u;
            // 0x3d9208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D920Cu; }
        if (ctx->pc != 0x3D920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D920Cu; }
        if (ctx->pc != 0x3D920Cu) { return; }
    }
    ctx->pc = 0x3D920Cu;
label_3d920c:
    // 0x3d920c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d9210:
    // 0x3d9210: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d9210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d9214:
    // 0x3d9214: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d9218:
    if (ctx->pc == 0x3D9218u) {
        ctx->pc = 0x3D9218u;
            // 0x3d9218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D921Cu;
        goto label_3d921c;
    }
    ctx->pc = 0x3D9214u;
    {
        const bool branch_taken_0x3d9214 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d9214) {
            ctx->pc = 0x3D9218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9214u;
            // 0x3d9218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9228u;
            goto label_3d9228;
        }
    }
    ctx->pc = 0x3D921Cu;
label_3d921c:
    // 0x3d921c: 0xc0400a8  jal         func_1002A0
label_3d9220:
    if (ctx->pc == 0x3D9220u) {
        ctx->pc = 0x3D9220u;
            // 0x3d9220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9224u;
        goto label_3d9224;
    }
    ctx->pc = 0x3D921Cu;
    SET_GPR_U32(ctx, 31, 0x3D9224u);
    ctx->pc = 0x3D9220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D921Cu;
            // 0x3d9220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9224u; }
        if (ctx->pc != 0x3D9224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9224u; }
        if (ctx->pc != 0x3D9224u) { return; }
    }
    ctx->pc = 0x3D9224u;
label_3d9224:
    // 0x3d9224: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d9224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9228:
    // 0x3d9228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d9228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d922c:
    // 0x3d922c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d922cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9230:
    // 0x3d9230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d9230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9234:
    // 0x3d9234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d9234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9238:
    // 0x3d9238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d923c:
    // 0x3d923c: 0x3e00008  jr          $ra
label_3d9240:
    if (ctx->pc == 0x3D9240u) {
        ctx->pc = 0x3D9240u;
            // 0x3d9240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D9244u;
        goto label_3d9244;
    }
    ctx->pc = 0x3D923Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D923Cu;
            // 0x3d9240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D9244u;
label_3d9244:
    // 0x3d9244: 0x0  nop
    ctx->pc = 0x3d9244u;
    // NOP
label_3d9248:
    // 0x3d9248: 0x0  nop
    ctx->pc = 0x3d9248u;
    // NOP
label_3d924c:
    // 0x3d924c: 0x0  nop
    ctx->pc = 0x3d924cu;
    // NOP
label_3d9250:
    // 0x3d9250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d9250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d9254:
    // 0x3d9254: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d9254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d9258:
    // 0x3d9258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d925c:
    // 0x3d925c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d9260:
    // 0x3d9260: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d9260u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d9264:
    // 0x3d9264: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3d9268:
    if (ctx->pc == 0x3D9268u) {
        ctx->pc = 0x3D9268u;
            // 0x3d9268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D926Cu;
        goto label_3d926c;
    }
    ctx->pc = 0x3D9264u;
    {
        const bool branch_taken_0x3d9264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D9268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9264u;
            // 0x3d9268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9264) {
            ctx->pc = 0x3D9298u;
            goto label_3d9298;
        }
    }
    ctx->pc = 0x3D926Cu;
label_3d926c:
    // 0x3d926c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d9270:
    // 0x3d9270: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3d9274:
    if (ctx->pc == 0x3D9274u) {
        ctx->pc = 0x3D9278u;
        goto label_3d9278;
    }
    ctx->pc = 0x3D9270u;
    {
        const bool branch_taken_0x3d9270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d9270) {
            ctx->pc = 0x3D9280u;
            goto label_3d9280;
        }
    }
    ctx->pc = 0x3D9278u;
label_3d9278:
    // 0x3d9278: 0x10000041  b           . + 4 + (0x41 << 2)
label_3d927c:
    if (ctx->pc == 0x3D927Cu) {
        ctx->pc = 0x3D927Cu;
            // 0x3d927c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D9280u;
        goto label_3d9280;
    }
    ctx->pc = 0x3D9278u;
    {
        const bool branch_taken_0x3d9278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9278u;
            // 0x3d927c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9278) {
            ctx->pc = 0x3D9380u;
            goto label_3d9380;
        }
    }
    ctx->pc = 0x3D9280u;
label_3d9280:
    // 0x3d9280: 0xc0ed46c  jal         func_3B51B0
label_3d9284:
    if (ctx->pc == 0x3D9284u) {
        ctx->pc = 0x3D9288u;
        goto label_3d9288;
    }
    ctx->pc = 0x3D9280u;
    SET_GPR_U32(ctx, 31, 0x3D9288u);
    ctx->pc = 0x3B51B0u;
    if (runtime->hasFunction(0x3B51B0u)) {
        auto targetFn = runtime->lookupFunction(0x3B51B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9288u; }
        if (ctx->pc != 0x3D9288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B51B0_0x3b51b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9288u; }
        if (ctx->pc != 0x3D9288u) { return; }
    }
    ctx->pc = 0x3D9288u;
label_3d9288:
    // 0x3d9288: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d9288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d928c:
    // 0x3d928c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d928cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d9290:
    // 0x3d9290: 0x320f809  jalr        $t9
label_3d9294:
    if (ctx->pc == 0x3D9294u) {
        ctx->pc = 0x3D9294u;
            // 0x3d9294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9298u;
        goto label_3d9298;
    }
    ctx->pc = 0x3D9290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9298u);
        ctx->pc = 0x3D9294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9290u;
            // 0x3d9294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9298u; }
            if (ctx->pc != 0x3D9298u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9298u;
label_3d9298:
    // 0x3d9298: 0x8e020d10  lw          $v0, 0xD10($s0)
    ctx->pc = 0x3d9298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3344)));
label_3d929c:
    // 0x3d929c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d92a0:
    // 0x3d92a0: 0xc0ed404  jal         func_3B5010
label_3d92a4:
    if (ctx->pc == 0x3D92A4u) {
        ctx->pc = 0x3D92A4u;
            // 0x3d92a4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3D92A8u;
        goto label_3d92a8;
    }
    ctx->pc = 0x3D92A0u;
    SET_GPR_U32(ctx, 31, 0x3D92A8u);
    ctx->pc = 0x3D92A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D92A0u;
            // 0x3d92a4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5010u;
    if (runtime->hasFunction(0x3B5010u)) {
        auto targetFn = runtime->lookupFunction(0x3B5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D92A8u; }
        if (ctx->pc != 0x3D92A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5010_0x3b5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D92A8u; }
        if (ctx->pc != 0x3D92A8u) { return; }
    }
    ctx->pc = 0x3D92A8u;
label_3d92a8:
    // 0x3d92a8: 0x8e050d10  lw          $a1, 0xD10($s0)
    ctx->pc = 0x3d92a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3344)));
label_3d92ac:
    // 0x3d92ac: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3d92acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3d92b0:
    // 0x3d92b0: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x3d92b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3d92b4:
    // 0x3d92b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d92b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d92b8:
    // 0x3d92b8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3d92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_3d92bc:
    // 0x3d92bc: 0xc4a20150  lwc1        $f2, 0x150($a1)
    ctx->pc = 0x3d92bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d92c0:
    // 0x3d92c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d92c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d92c4:
    // 0x3d92c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d92c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d92c8:
    // 0x3d92c8: 0x0  nop
    ctx->pc = 0x3d92c8u;
    // NOP
label_3d92cc:
    // 0x3d92cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d92ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d92d0:
    // 0x3d92d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3d92d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3d92d4:
    // 0x3d92d4: 0xe6000ca8  swc1        $f0, 0xCA8($s0)
    ctx->pc = 0x3d92d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3240), bits); }
label_3d92d8:
    // 0x3d92d8: 0xae000cac  sw          $zero, 0xCAC($s0)
    ctx->pc = 0x3d92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 0));
label_3d92dc:
    // 0x3d92dc: 0x8e020d10  lw          $v0, 0xD10($s0)
    ctx->pc = 0x3d92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3344)));
label_3d92e0:
    // 0x3d92e0: 0xc04f278  jal         func_13C9E0
label_3d92e4:
    if (ctx->pc == 0x3D92E4u) {
        ctx->pc = 0x3D92E4u;
            // 0x3d92e4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x3D92E8u;
        goto label_3d92e8;
    }
    ctx->pc = 0x3D92E0u;
    SET_GPR_U32(ctx, 31, 0x3D92E8u);
    ctx->pc = 0x3D92E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D92E0u;
            // 0x3d92e4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D92E8u; }
        if (ctx->pc != 0x3D92E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D92E8u; }
        if (ctx->pc != 0x3D92E8u) { return; }
    }
    ctx->pc = 0x3D92E8u;
label_3d92e8:
    // 0x3d92e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d92e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d92ec:
    // 0x3d92ec: 0xc0ed40c  jal         func_3B5030
label_3d92f0:
    if (ctx->pc == 0x3D92F0u) {
        ctx->pc = 0x3D92F0u;
            // 0x3d92f0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D92F4u;
        goto label_3d92f4;
    }
    ctx->pc = 0x3D92ECu;
    SET_GPR_U32(ctx, 31, 0x3D92F4u);
    ctx->pc = 0x3D92F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D92ECu;
            // 0x3d92f0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5030u;
    if (runtime->hasFunction(0x3B5030u)) {
        auto targetFn = runtime->lookupFunction(0x3B5030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D92F4u; }
        if (ctx->pc != 0x3D92F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5030_0x3b5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D92F4u; }
        if (ctx->pc != 0x3D92F4u) { return; }
    }
    ctx->pc = 0x3D92F4u;
label_3d92f4:
    // 0x3d92f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d92f8:
    // 0x3d92f8: 0xc0ed408  jal         func_3B5020
label_3d92fc:
    if (ctx->pc == 0x3D92FCu) {
        ctx->pc = 0x3D92FCu;
            // 0x3d92fc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D9300u;
        goto label_3d9300;
    }
    ctx->pc = 0x3D92F8u;
    SET_GPR_U32(ctx, 31, 0x3D9300u);
    ctx->pc = 0x3D92FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D92F8u;
            // 0x3d92fc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5020u;
    if (runtime->hasFunction(0x3B5020u)) {
        auto targetFn = runtime->lookupFunction(0x3B5020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9300u; }
        if (ctx->pc != 0x3D9300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5020_0x3b5020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9300u; }
        if (ctx->pc != 0x3D9300u) { return; }
    }
    ctx->pc = 0x3D9300u;
label_3d9300:
    // 0x3d9300: 0x92020d14  lbu         $v0, 0xD14($s0)
    ctx->pc = 0x3d9300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3348)));
label_3d9304:
    // 0x3d9304: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3d9308:
    if (ctx->pc == 0x3D9308u) {
        ctx->pc = 0x3D9308u;
            // 0x3d9308: 0x8e020d10  lw          $v0, 0xD10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3344)));
        ctx->pc = 0x3D930Cu;
        goto label_3d930c;
    }
    ctx->pc = 0x3D9304u;
    {
        const bool branch_taken_0x3d9304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9304) {
            ctx->pc = 0x3D9308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9304u;
            // 0x3d9308: 0x8e020d10  lw          $v0, 0xD10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3344)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9324u;
            goto label_3d9324;
        }
    }
    ctx->pc = 0x3D930Cu;
label_3d930c:
    // 0x3d930c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d930cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9310:
    // 0x3d9310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9314:
    // 0x3d9314: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3d9314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3d9318:
    // 0x3d9318: 0x320f809  jalr        $t9
label_3d931c:
    if (ctx->pc == 0x3D931Cu) {
        ctx->pc = 0x3D931Cu;
            // 0x3d931c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D9320u;
        goto label_3d9320;
    }
    ctx->pc = 0x3D9318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9320u);
        ctx->pc = 0x3D931Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9318u;
            // 0x3d931c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9320u; }
            if (ctx->pc != 0x3D9320u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9320u;
label_3d9320:
    // 0x3d9320: 0x8e020d10  lw          $v0, 0xD10($s0)
    ctx->pc = 0x3d9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3344)));
label_3d9324:
    // 0x3d9324: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x3d9324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d9328:
    // 0x3d9328: 0xc44d0014  lwc1        $f13, 0x14($v0)
    ctx->pc = 0x3d9328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d932c:
    // 0x3d932c: 0xc44e0018  lwc1        $f14, 0x18($v0)
    ctx->pc = 0x3d932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d9330:
    // 0x3d9330: 0xc04f3fc  jal         func_13CFF0
label_3d9334:
    if (ctx->pc == 0x3D9334u) {
        ctx->pc = 0x3D9334u;
            // 0x3d9334: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D9338u;
        goto label_3d9338;
    }
    ctx->pc = 0x3D9330u;
    SET_GPR_U32(ctx, 31, 0x3D9338u);
    ctx->pc = 0x3D9334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9330u;
            // 0x3d9334: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9338u; }
        if (ctx->pc != 0x3D9338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9338u; }
        if (ctx->pc != 0x3D9338u) { return; }
    }
    ctx->pc = 0x3D9338u;
label_3d9338:
    // 0x3d9338: 0x8e020d10  lw          $v0, 0xD10($s0)
    ctx->pc = 0x3d9338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3344)));
label_3d933c:
    // 0x3d933c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d9340:
    // 0x3d9340: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d9340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9344:
    // 0x3d9344: 0xc04cd80  jal         func_133600
label_3d9348:
    if (ctx->pc == 0x3D9348u) {
        ctx->pc = 0x3D9348u;
            // 0x3d9348: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x3D934Cu;
        goto label_3d934c;
    }
    ctx->pc = 0x3D9344u;
    SET_GPR_U32(ctx, 31, 0x3D934Cu);
    ctx->pc = 0x3D9348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9344u;
            // 0x3d9348: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D934Cu; }
        if (ctx->pc != 0x3D934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D934Cu; }
        if (ctx->pc != 0x3D934Cu) { return; }
    }
    ctx->pc = 0x3D934Cu;
label_3d934c:
    // 0x3d934c: 0xc60c0d00  lwc1        $f12, 0xD00($s0)
    ctx->pc = 0x3d934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d9350:
    // 0x3d9350: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d9350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d9354:
    // 0x3d9354: 0xc60d0d04  lwc1        $f13, 0xD04($s0)
    ctx->pc = 0x3d9354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d9358:
    // 0x3d9358: 0xc60e0d08  lwc1        $f14, 0xD08($s0)
    ctx->pc = 0x3d9358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d935c:
    // 0x3d935c: 0xc04ce64  jal         func_133990
label_3d9360:
    if (ctx->pc == 0x3D9360u) {
        ctx->pc = 0x3D9360u;
            // 0x3d9360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9364u;
        goto label_3d9364;
    }
    ctx->pc = 0x3D935Cu;
    SET_GPR_U32(ctx, 31, 0x3D9364u);
    ctx->pc = 0x3D9360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D935Cu;
            // 0x3d9360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9364u; }
        if (ctx->pc != 0x3D9364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9364u; }
        if (ctx->pc != 0x3D9364u) { return; }
    }
    ctx->pc = 0x3D9364u;
label_3d9364:
    // 0x3d9364: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d9364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9368:
    // 0x3d9368: 0xc04cce4  jal         func_133390
label_3d936c:
    if (ctx->pc == 0x3D936Cu) {
        ctx->pc = 0x3D936Cu;
            // 0x3d936c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D9370u;
        goto label_3d9370;
    }
    ctx->pc = 0x3D9368u;
    SET_GPR_U32(ctx, 31, 0x3D9370u);
    ctx->pc = 0x3D936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9368u;
            // 0x3d936c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9370u; }
        if (ctx->pc != 0x3D9370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9370u; }
        if (ctx->pc != 0x3D9370u) { return; }
    }
    ctx->pc = 0x3D9370u;
label_3d9370:
    // 0x3d9370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9374:
    // 0x3d9374: 0xc0ed410  jal         func_3B5040
label_3d9378:
    if (ctx->pc == 0x3D9378u) {
        ctx->pc = 0x3D9378u;
            // 0x3d9378: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D937Cu;
        goto label_3d937c;
    }
    ctx->pc = 0x3D9374u;
    SET_GPR_U32(ctx, 31, 0x3D937Cu);
    ctx->pc = 0x3D9378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9374u;
            // 0x3d9378: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5040u;
    if (runtime->hasFunction(0x3B5040u)) {
        auto targetFn = runtime->lookupFunction(0x3B5040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D937Cu; }
        if (ctx->pc != 0x3D937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5040_0x3b5040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D937Cu; }
        if (ctx->pc != 0x3D937Cu) { return; }
    }
    ctx->pc = 0x3D937Cu;
label_3d937c:
    // 0x3d937c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d937cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9380:
    // 0x3d9380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9384:
    // 0x3d9384: 0x3e00008  jr          $ra
label_3d9388:
    if (ctx->pc == 0x3D9388u) {
        ctx->pc = 0x3D9388u;
            // 0x3d9388: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D938Cu;
        goto label_3d938c;
    }
    ctx->pc = 0x3D9384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9384u;
            // 0x3d9388: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D938Cu;
label_3d938c:
    // 0x3d938c: 0x0  nop
    ctx->pc = 0x3d938cu;
    // NOP
}
