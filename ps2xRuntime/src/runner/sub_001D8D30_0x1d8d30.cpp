#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8D30
// Address: 0x1d8d30 - 0x1d9270
void sub_001D8D30_0x1d8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8D30_0x1d8d30");
#endif

    switch (ctx->pc) {
        case 0x1d8d30u: goto label_1d8d30;
        case 0x1d8d34u: goto label_1d8d34;
        case 0x1d8d38u: goto label_1d8d38;
        case 0x1d8d3cu: goto label_1d8d3c;
        case 0x1d8d40u: goto label_1d8d40;
        case 0x1d8d44u: goto label_1d8d44;
        case 0x1d8d48u: goto label_1d8d48;
        case 0x1d8d4cu: goto label_1d8d4c;
        case 0x1d8d50u: goto label_1d8d50;
        case 0x1d8d54u: goto label_1d8d54;
        case 0x1d8d58u: goto label_1d8d58;
        case 0x1d8d5cu: goto label_1d8d5c;
        case 0x1d8d60u: goto label_1d8d60;
        case 0x1d8d64u: goto label_1d8d64;
        case 0x1d8d68u: goto label_1d8d68;
        case 0x1d8d6cu: goto label_1d8d6c;
        case 0x1d8d70u: goto label_1d8d70;
        case 0x1d8d74u: goto label_1d8d74;
        case 0x1d8d78u: goto label_1d8d78;
        case 0x1d8d7cu: goto label_1d8d7c;
        case 0x1d8d80u: goto label_1d8d80;
        case 0x1d8d84u: goto label_1d8d84;
        case 0x1d8d88u: goto label_1d8d88;
        case 0x1d8d8cu: goto label_1d8d8c;
        case 0x1d8d90u: goto label_1d8d90;
        case 0x1d8d94u: goto label_1d8d94;
        case 0x1d8d98u: goto label_1d8d98;
        case 0x1d8d9cu: goto label_1d8d9c;
        case 0x1d8da0u: goto label_1d8da0;
        case 0x1d8da4u: goto label_1d8da4;
        case 0x1d8da8u: goto label_1d8da8;
        case 0x1d8dacu: goto label_1d8dac;
        case 0x1d8db0u: goto label_1d8db0;
        case 0x1d8db4u: goto label_1d8db4;
        case 0x1d8db8u: goto label_1d8db8;
        case 0x1d8dbcu: goto label_1d8dbc;
        case 0x1d8dc0u: goto label_1d8dc0;
        case 0x1d8dc4u: goto label_1d8dc4;
        case 0x1d8dc8u: goto label_1d8dc8;
        case 0x1d8dccu: goto label_1d8dcc;
        case 0x1d8dd0u: goto label_1d8dd0;
        case 0x1d8dd4u: goto label_1d8dd4;
        case 0x1d8dd8u: goto label_1d8dd8;
        case 0x1d8ddcu: goto label_1d8ddc;
        case 0x1d8de0u: goto label_1d8de0;
        case 0x1d8de4u: goto label_1d8de4;
        case 0x1d8de8u: goto label_1d8de8;
        case 0x1d8decu: goto label_1d8dec;
        case 0x1d8df0u: goto label_1d8df0;
        case 0x1d8df4u: goto label_1d8df4;
        case 0x1d8df8u: goto label_1d8df8;
        case 0x1d8dfcu: goto label_1d8dfc;
        case 0x1d8e00u: goto label_1d8e00;
        case 0x1d8e04u: goto label_1d8e04;
        case 0x1d8e08u: goto label_1d8e08;
        case 0x1d8e0cu: goto label_1d8e0c;
        case 0x1d8e10u: goto label_1d8e10;
        case 0x1d8e14u: goto label_1d8e14;
        case 0x1d8e18u: goto label_1d8e18;
        case 0x1d8e1cu: goto label_1d8e1c;
        case 0x1d8e20u: goto label_1d8e20;
        case 0x1d8e24u: goto label_1d8e24;
        case 0x1d8e28u: goto label_1d8e28;
        case 0x1d8e2cu: goto label_1d8e2c;
        case 0x1d8e30u: goto label_1d8e30;
        case 0x1d8e34u: goto label_1d8e34;
        case 0x1d8e38u: goto label_1d8e38;
        case 0x1d8e3cu: goto label_1d8e3c;
        case 0x1d8e40u: goto label_1d8e40;
        case 0x1d8e44u: goto label_1d8e44;
        case 0x1d8e48u: goto label_1d8e48;
        case 0x1d8e4cu: goto label_1d8e4c;
        case 0x1d8e50u: goto label_1d8e50;
        case 0x1d8e54u: goto label_1d8e54;
        case 0x1d8e58u: goto label_1d8e58;
        case 0x1d8e5cu: goto label_1d8e5c;
        case 0x1d8e60u: goto label_1d8e60;
        case 0x1d8e64u: goto label_1d8e64;
        case 0x1d8e68u: goto label_1d8e68;
        case 0x1d8e6cu: goto label_1d8e6c;
        case 0x1d8e70u: goto label_1d8e70;
        case 0x1d8e74u: goto label_1d8e74;
        case 0x1d8e78u: goto label_1d8e78;
        case 0x1d8e7cu: goto label_1d8e7c;
        case 0x1d8e80u: goto label_1d8e80;
        case 0x1d8e84u: goto label_1d8e84;
        case 0x1d8e88u: goto label_1d8e88;
        case 0x1d8e8cu: goto label_1d8e8c;
        case 0x1d8e90u: goto label_1d8e90;
        case 0x1d8e94u: goto label_1d8e94;
        case 0x1d8e98u: goto label_1d8e98;
        case 0x1d8e9cu: goto label_1d8e9c;
        case 0x1d8ea0u: goto label_1d8ea0;
        case 0x1d8ea4u: goto label_1d8ea4;
        case 0x1d8ea8u: goto label_1d8ea8;
        case 0x1d8eacu: goto label_1d8eac;
        case 0x1d8eb0u: goto label_1d8eb0;
        case 0x1d8eb4u: goto label_1d8eb4;
        case 0x1d8eb8u: goto label_1d8eb8;
        case 0x1d8ebcu: goto label_1d8ebc;
        case 0x1d8ec0u: goto label_1d8ec0;
        case 0x1d8ec4u: goto label_1d8ec4;
        case 0x1d8ec8u: goto label_1d8ec8;
        case 0x1d8eccu: goto label_1d8ecc;
        case 0x1d8ed0u: goto label_1d8ed0;
        case 0x1d8ed4u: goto label_1d8ed4;
        case 0x1d8ed8u: goto label_1d8ed8;
        case 0x1d8edcu: goto label_1d8edc;
        case 0x1d8ee0u: goto label_1d8ee0;
        case 0x1d8ee4u: goto label_1d8ee4;
        case 0x1d8ee8u: goto label_1d8ee8;
        case 0x1d8eecu: goto label_1d8eec;
        case 0x1d8ef0u: goto label_1d8ef0;
        case 0x1d8ef4u: goto label_1d8ef4;
        case 0x1d8ef8u: goto label_1d8ef8;
        case 0x1d8efcu: goto label_1d8efc;
        case 0x1d8f00u: goto label_1d8f00;
        case 0x1d8f04u: goto label_1d8f04;
        case 0x1d8f08u: goto label_1d8f08;
        case 0x1d8f0cu: goto label_1d8f0c;
        case 0x1d8f10u: goto label_1d8f10;
        case 0x1d8f14u: goto label_1d8f14;
        case 0x1d8f18u: goto label_1d8f18;
        case 0x1d8f1cu: goto label_1d8f1c;
        case 0x1d8f20u: goto label_1d8f20;
        case 0x1d8f24u: goto label_1d8f24;
        case 0x1d8f28u: goto label_1d8f28;
        case 0x1d8f2cu: goto label_1d8f2c;
        case 0x1d8f30u: goto label_1d8f30;
        case 0x1d8f34u: goto label_1d8f34;
        case 0x1d8f38u: goto label_1d8f38;
        case 0x1d8f3cu: goto label_1d8f3c;
        case 0x1d8f40u: goto label_1d8f40;
        case 0x1d8f44u: goto label_1d8f44;
        case 0x1d8f48u: goto label_1d8f48;
        case 0x1d8f4cu: goto label_1d8f4c;
        case 0x1d8f50u: goto label_1d8f50;
        case 0x1d8f54u: goto label_1d8f54;
        case 0x1d8f58u: goto label_1d8f58;
        case 0x1d8f5cu: goto label_1d8f5c;
        case 0x1d8f60u: goto label_1d8f60;
        case 0x1d8f64u: goto label_1d8f64;
        case 0x1d8f68u: goto label_1d8f68;
        case 0x1d8f6cu: goto label_1d8f6c;
        case 0x1d8f70u: goto label_1d8f70;
        case 0x1d8f74u: goto label_1d8f74;
        case 0x1d8f78u: goto label_1d8f78;
        case 0x1d8f7cu: goto label_1d8f7c;
        case 0x1d8f80u: goto label_1d8f80;
        case 0x1d8f84u: goto label_1d8f84;
        case 0x1d8f88u: goto label_1d8f88;
        case 0x1d8f8cu: goto label_1d8f8c;
        case 0x1d8f90u: goto label_1d8f90;
        case 0x1d8f94u: goto label_1d8f94;
        case 0x1d8f98u: goto label_1d8f98;
        case 0x1d8f9cu: goto label_1d8f9c;
        case 0x1d8fa0u: goto label_1d8fa0;
        case 0x1d8fa4u: goto label_1d8fa4;
        case 0x1d8fa8u: goto label_1d8fa8;
        case 0x1d8facu: goto label_1d8fac;
        case 0x1d8fb0u: goto label_1d8fb0;
        case 0x1d8fb4u: goto label_1d8fb4;
        case 0x1d8fb8u: goto label_1d8fb8;
        case 0x1d8fbcu: goto label_1d8fbc;
        case 0x1d8fc0u: goto label_1d8fc0;
        case 0x1d8fc4u: goto label_1d8fc4;
        case 0x1d8fc8u: goto label_1d8fc8;
        case 0x1d8fccu: goto label_1d8fcc;
        case 0x1d8fd0u: goto label_1d8fd0;
        case 0x1d8fd4u: goto label_1d8fd4;
        case 0x1d8fd8u: goto label_1d8fd8;
        case 0x1d8fdcu: goto label_1d8fdc;
        case 0x1d8fe0u: goto label_1d8fe0;
        case 0x1d8fe4u: goto label_1d8fe4;
        case 0x1d8fe8u: goto label_1d8fe8;
        case 0x1d8fecu: goto label_1d8fec;
        case 0x1d8ff0u: goto label_1d8ff0;
        case 0x1d8ff4u: goto label_1d8ff4;
        case 0x1d8ff8u: goto label_1d8ff8;
        case 0x1d8ffcu: goto label_1d8ffc;
        case 0x1d9000u: goto label_1d9000;
        case 0x1d9004u: goto label_1d9004;
        case 0x1d9008u: goto label_1d9008;
        case 0x1d900cu: goto label_1d900c;
        case 0x1d9010u: goto label_1d9010;
        case 0x1d9014u: goto label_1d9014;
        case 0x1d9018u: goto label_1d9018;
        case 0x1d901cu: goto label_1d901c;
        case 0x1d9020u: goto label_1d9020;
        case 0x1d9024u: goto label_1d9024;
        case 0x1d9028u: goto label_1d9028;
        case 0x1d902cu: goto label_1d902c;
        case 0x1d9030u: goto label_1d9030;
        case 0x1d9034u: goto label_1d9034;
        case 0x1d9038u: goto label_1d9038;
        case 0x1d903cu: goto label_1d903c;
        case 0x1d9040u: goto label_1d9040;
        case 0x1d9044u: goto label_1d9044;
        case 0x1d9048u: goto label_1d9048;
        case 0x1d904cu: goto label_1d904c;
        case 0x1d9050u: goto label_1d9050;
        case 0x1d9054u: goto label_1d9054;
        case 0x1d9058u: goto label_1d9058;
        case 0x1d905cu: goto label_1d905c;
        case 0x1d9060u: goto label_1d9060;
        case 0x1d9064u: goto label_1d9064;
        case 0x1d9068u: goto label_1d9068;
        case 0x1d906cu: goto label_1d906c;
        case 0x1d9070u: goto label_1d9070;
        case 0x1d9074u: goto label_1d9074;
        case 0x1d9078u: goto label_1d9078;
        case 0x1d907cu: goto label_1d907c;
        case 0x1d9080u: goto label_1d9080;
        case 0x1d9084u: goto label_1d9084;
        case 0x1d9088u: goto label_1d9088;
        case 0x1d908cu: goto label_1d908c;
        case 0x1d9090u: goto label_1d9090;
        case 0x1d9094u: goto label_1d9094;
        case 0x1d9098u: goto label_1d9098;
        case 0x1d909cu: goto label_1d909c;
        case 0x1d90a0u: goto label_1d90a0;
        case 0x1d90a4u: goto label_1d90a4;
        case 0x1d90a8u: goto label_1d90a8;
        case 0x1d90acu: goto label_1d90ac;
        case 0x1d90b0u: goto label_1d90b0;
        case 0x1d90b4u: goto label_1d90b4;
        case 0x1d90b8u: goto label_1d90b8;
        case 0x1d90bcu: goto label_1d90bc;
        case 0x1d90c0u: goto label_1d90c0;
        case 0x1d90c4u: goto label_1d90c4;
        case 0x1d90c8u: goto label_1d90c8;
        case 0x1d90ccu: goto label_1d90cc;
        case 0x1d90d0u: goto label_1d90d0;
        case 0x1d90d4u: goto label_1d90d4;
        case 0x1d90d8u: goto label_1d90d8;
        case 0x1d90dcu: goto label_1d90dc;
        case 0x1d90e0u: goto label_1d90e0;
        case 0x1d90e4u: goto label_1d90e4;
        case 0x1d90e8u: goto label_1d90e8;
        case 0x1d90ecu: goto label_1d90ec;
        case 0x1d90f0u: goto label_1d90f0;
        case 0x1d90f4u: goto label_1d90f4;
        case 0x1d90f8u: goto label_1d90f8;
        case 0x1d90fcu: goto label_1d90fc;
        case 0x1d9100u: goto label_1d9100;
        case 0x1d9104u: goto label_1d9104;
        case 0x1d9108u: goto label_1d9108;
        case 0x1d910cu: goto label_1d910c;
        case 0x1d9110u: goto label_1d9110;
        case 0x1d9114u: goto label_1d9114;
        case 0x1d9118u: goto label_1d9118;
        case 0x1d911cu: goto label_1d911c;
        case 0x1d9120u: goto label_1d9120;
        case 0x1d9124u: goto label_1d9124;
        case 0x1d9128u: goto label_1d9128;
        case 0x1d912cu: goto label_1d912c;
        case 0x1d9130u: goto label_1d9130;
        case 0x1d9134u: goto label_1d9134;
        case 0x1d9138u: goto label_1d9138;
        case 0x1d913cu: goto label_1d913c;
        case 0x1d9140u: goto label_1d9140;
        case 0x1d9144u: goto label_1d9144;
        case 0x1d9148u: goto label_1d9148;
        case 0x1d914cu: goto label_1d914c;
        case 0x1d9150u: goto label_1d9150;
        case 0x1d9154u: goto label_1d9154;
        case 0x1d9158u: goto label_1d9158;
        case 0x1d915cu: goto label_1d915c;
        case 0x1d9160u: goto label_1d9160;
        case 0x1d9164u: goto label_1d9164;
        case 0x1d9168u: goto label_1d9168;
        case 0x1d916cu: goto label_1d916c;
        case 0x1d9170u: goto label_1d9170;
        case 0x1d9174u: goto label_1d9174;
        case 0x1d9178u: goto label_1d9178;
        case 0x1d917cu: goto label_1d917c;
        case 0x1d9180u: goto label_1d9180;
        case 0x1d9184u: goto label_1d9184;
        case 0x1d9188u: goto label_1d9188;
        case 0x1d918cu: goto label_1d918c;
        case 0x1d9190u: goto label_1d9190;
        case 0x1d9194u: goto label_1d9194;
        case 0x1d9198u: goto label_1d9198;
        case 0x1d919cu: goto label_1d919c;
        case 0x1d91a0u: goto label_1d91a0;
        case 0x1d91a4u: goto label_1d91a4;
        case 0x1d91a8u: goto label_1d91a8;
        case 0x1d91acu: goto label_1d91ac;
        case 0x1d91b0u: goto label_1d91b0;
        case 0x1d91b4u: goto label_1d91b4;
        case 0x1d91b8u: goto label_1d91b8;
        case 0x1d91bcu: goto label_1d91bc;
        case 0x1d91c0u: goto label_1d91c0;
        case 0x1d91c4u: goto label_1d91c4;
        case 0x1d91c8u: goto label_1d91c8;
        case 0x1d91ccu: goto label_1d91cc;
        case 0x1d91d0u: goto label_1d91d0;
        case 0x1d91d4u: goto label_1d91d4;
        case 0x1d91d8u: goto label_1d91d8;
        case 0x1d91dcu: goto label_1d91dc;
        case 0x1d91e0u: goto label_1d91e0;
        case 0x1d91e4u: goto label_1d91e4;
        case 0x1d91e8u: goto label_1d91e8;
        case 0x1d91ecu: goto label_1d91ec;
        case 0x1d91f0u: goto label_1d91f0;
        case 0x1d91f4u: goto label_1d91f4;
        case 0x1d91f8u: goto label_1d91f8;
        case 0x1d91fcu: goto label_1d91fc;
        case 0x1d9200u: goto label_1d9200;
        case 0x1d9204u: goto label_1d9204;
        case 0x1d9208u: goto label_1d9208;
        case 0x1d920cu: goto label_1d920c;
        case 0x1d9210u: goto label_1d9210;
        case 0x1d9214u: goto label_1d9214;
        case 0x1d9218u: goto label_1d9218;
        case 0x1d921cu: goto label_1d921c;
        case 0x1d9220u: goto label_1d9220;
        case 0x1d9224u: goto label_1d9224;
        case 0x1d9228u: goto label_1d9228;
        case 0x1d922cu: goto label_1d922c;
        case 0x1d9230u: goto label_1d9230;
        case 0x1d9234u: goto label_1d9234;
        case 0x1d9238u: goto label_1d9238;
        case 0x1d923cu: goto label_1d923c;
        case 0x1d9240u: goto label_1d9240;
        case 0x1d9244u: goto label_1d9244;
        case 0x1d9248u: goto label_1d9248;
        case 0x1d924cu: goto label_1d924c;
        case 0x1d9250u: goto label_1d9250;
        case 0x1d9254u: goto label_1d9254;
        case 0x1d9258u: goto label_1d9258;
        case 0x1d925cu: goto label_1d925c;
        case 0x1d9260u: goto label_1d9260;
        case 0x1d9264u: goto label_1d9264;
        case 0x1d9268u: goto label_1d9268;
        case 0x1d926cu: goto label_1d926c;
        default: break;
    }

    ctx->pc = 0x1d8d30u;

label_1d8d30:
    // 0x1d8d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d8d34:
    // 0x1d8d34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d8d38:
    // 0x1d8d38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d8d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d8d3c:
    // 0x1d8d3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d8d40:
    // 0x1d8d40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d8d44:
    // 0x1d8d44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d8d48:
    // 0x1d8d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d8d4c:
    // 0x1d8d4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d50:
    // 0x1d8d50: 0x8c850da0  lw          $a1, 0xDA0($a0)
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_1d8d54:
    // 0x1d8d54: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x1d8d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
label_1d8d58:
    // 0x1d8d58: 0xac850da0  sw          $a1, 0xDA0($a0)
    ctx->pc = 0x1d8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 5));
label_1d8d5c:
    // 0x1d8d5c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1d8d60:
    // 0x1d8d60: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x1d8d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1d8d64:
    // 0x1d8d64: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_1d8d68:
    if (ctx->pc == 0x1D8D68u) {
        ctx->pc = 0x1D8D6Cu;
        goto label_1d8d6c;
    }
    ctx->pc = 0x1D8D64u;
    {
        const bool branch_taken_0x1d8d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8d64) {
            ctx->pc = 0x1D8DC4u;
            goto label_1d8dc4;
        }
    }
    ctx->pc = 0x1D8D6Cu;
label_1d8d6c:
    // 0x1d8d6c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d8d70:
    // 0x1d8d70: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
label_1d8d74:
    if (ctx->pc == 0x1D8D74u) {
        ctx->pc = 0x1D8D78u;
        goto label_1d8d78;
    }
    ctx->pc = 0x1D8D70u;
    {
        const bool branch_taken_0x1d8d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8d70) {
            ctx->pc = 0x1D8DC4u;
            goto label_1d8dc4;
        }
    }
    ctx->pc = 0x1D8D78u;
label_1d8d78:
    // 0x1d8d78: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d8d7c:
    // 0x1d8d7c: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_1d8d80:
    if (ctx->pc == 0x1D8D80u) {
        ctx->pc = 0x1D8D80u;
            // 0x1d8d80: 0x82300e3f  lb          $s0, 0xE3F($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3647)));
        ctx->pc = 0x1D8D84u;
        goto label_1d8d84;
    }
    ctx->pc = 0x1D8D7Cu;
    {
        const bool branch_taken_0x1d8d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8d7c) {
            ctx->pc = 0x1D8D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D7Cu;
            // 0x1d8d80: 0x82300e3f  lb          $s0, 0xE3F($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3647)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8DA8u;
            goto label_1d8da8;
        }
    }
    ctx->pc = 0x1D8D84u;
label_1d8d84:
    // 0x1d8d84: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d8d88:
    // 0x1d8d88: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1d8d8c:
    if (ctx->pc == 0x1D8D8Cu) {
        ctx->pc = 0x1D8D90u;
        goto label_1d8d90;
    }
    ctx->pc = 0x1D8D88u;
    {
        const bool branch_taken_0x1d8d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8d88) {
            ctx->pc = 0x1D8DA4u;
            goto label_1d8da4;
        }
    }
    ctx->pc = 0x1D8D90u;
label_1d8d90:
    // 0x1d8d90: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d8d94:
    // 0x1d8d94: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1d8d98:
    if (ctx->pc == 0x1D8D98u) {
        ctx->pc = 0x1D8D9Cu;
        goto label_1d8d9c;
    }
    ctx->pc = 0x1D8D94u;
    {
        const bool branch_taken_0x1d8d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8d94) {
            ctx->pc = 0x1D8DA4u;
            goto label_1d8da4;
        }
    }
    ctx->pc = 0x1D8D9Cu;
label_1d8d9c:
    // 0x1d8d9c: 0x10000031  b           . + 4 + (0x31 << 2)
label_1d8da0:
    if (ctx->pc == 0x1D8DA0u) {
        ctx->pc = 0x1D8DA0u;
            // 0x1d8da0: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->pc = 0x1D8DA4u;
        goto label_1d8da4;
    }
    ctx->pc = 0x1D8D9Cu;
    {
        const bool branch_taken_0x1d8d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D9Cu;
            // 0x1d8da0: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d9c) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8DA4u;
label_1d8da4:
    // 0x1d8da4: 0x82300e3f  lb          $s0, 0xE3F($s1)
    ctx->pc = 0x1d8da4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3647)));
label_1d8da8:
    // 0x1d8da8: 0x5200003b  beql        $s0, $zero, . + 4 + (0x3B << 2)
label_1d8dac:
    if (ctx->pc == 0x1D8DACu) {
        ctx->pc = 0x1D8DACu;
            // 0x1d8dac: 0x2602001f  addiu       $v0, $s0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
        ctx->pc = 0x1D8DB0u;
        goto label_1d8db0;
    }
    ctx->pc = 0x1D8DA8u;
    {
        const bool branch_taken_0x1d8da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8da8) {
            ctx->pc = 0x1D8DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DA8u;
            // 0x1d8dac: 0x2602001f  addiu       $v0, $s0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8E98u;
            goto label_1d8e98;
        }
    }
    ctx->pc = 0x1D8DB0u;
label_1d8db0:
    // 0x1d8db0: 0x8e220d9c  lw          $v0, 0xD9C($s1)
    ctx->pc = 0x1d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_1d8db4:
    // 0x1d8db4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8db8:
    // 0x1d8db8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1d8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1d8dbc:
    // 0x1d8dbc: 0x10000035  b           . + 4 + (0x35 << 2)
label_1d8dc0:
    if (ctx->pc == 0x1D8DC0u) {
        ctx->pc = 0x1D8DC0u;
            // 0x1d8dc0: 0xae220d9c  sw          $v0, 0xD9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x1D8DC4u;
        goto label_1d8dc4;
    }
    ctx->pc = 0x1D8DBCu;
    {
        const bool branch_taken_0x1d8dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DBCu;
            // 0x1d8dc0: 0xae220d9c  sw          $v0, 0xD9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8dbc) {
            ctx->pc = 0x1D8E94u;
            goto label_1d8e94;
        }
    }
    ctx->pc = 0x1D8DC4u;
label_1d8dc4:
    // 0x1d8dc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d8dc8:
    // 0x1d8dc8: 0xc0cfe90  jal         func_33FA40
label_1d8dcc:
    if (ctx->pc == 0x1D8DCCu) {
        ctx->pc = 0x1D8DCCu;
            // 0x1d8dcc: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1D8DD0u;
        goto label_1d8dd0;
    }
    ctx->pc = 0x1D8DC8u;
    SET_GPR_U32(ctx, 31, 0x1D8DD0u);
    ctx->pc = 0x1D8DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DC8u;
            // 0x1d8dcc: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33FA40u;
    if (runtime->hasFunction(0x33FA40u)) {
        auto targetFn = runtime->lookupFunction(0x33FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DD0u; }
        if (ctx->pc != 0x1D8DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033FA40_0x33fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DD0u; }
        if (ctx->pc != 0x1D8DD0u) { return; }
    }
    ctx->pc = 0x1D8DD0u;
label_1d8dd0:
    // 0x1d8dd0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1d8dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_1d8dd4:
    // 0x1d8dd4: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1d8dd4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d8dd8:
    // 0x1d8dd8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1d8dd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1d8ddc:
    // 0x1d8ddc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d8ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8de0:
    // 0x1d8de0: 0x408026  xor         $s0, $v0, $zero
    ctx->pc = 0x1d8de0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1d8de4:
    // 0x1d8de4: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x1d8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1d8de8:
    // 0x1d8de8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1d8dec:
    if (ctx->pc == 0x1D8DECu) {
        ctx->pc = 0x1D8DECu;
            // 0x1d8dec: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x1D8DF0u;
        goto label_1d8df0;
    }
    ctx->pc = 0x1D8DE8u;
    {
        const bool branch_taken_0x1d8de8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D8DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DE8u;
            // 0x1d8dec: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8de8) {
            ctx->pc = 0x1D8E00u;
            goto label_1d8e00;
        }
    }
    ctx->pc = 0x1D8DF0u;
label_1d8df0:
    // 0x1d8df0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1d8df0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d8df4:
    // 0x1d8df4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d8df8:
    if (ctx->pc == 0x1D8DF8u) {
        ctx->pc = 0x1D8DFCu;
        goto label_1d8dfc;
    }
    ctx->pc = 0x1D8DF4u;
    {
        const bool branch_taken_0x1d8df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8df4) {
            ctx->pc = 0x1D8E00u;
            goto label_1d8e00;
        }
    }
    ctx->pc = 0x1D8DFCu;
label_1d8dfc:
    // 0x1d8dfc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1d8dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e00:
    // 0x1d8e00: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1d8e04:
    if (ctx->pc == 0x1D8E04u) {
        ctx->pc = 0x1D8E08u;
        goto label_1d8e08;
    }
    ctx->pc = 0x1D8E00u;
    {
        const bool branch_taken_0x1d8e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e00) {
            ctx->pc = 0x1D8E40u;
            goto label_1d8e40;
        }
    }
    ctx->pc = 0x1D8E08u;
label_1d8e08:
    // 0x1d8e08: 0x822211aa  lb          $v0, 0x11AA($s1)
    ctx->pc = 0x1d8e08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1d8e0c:
    // 0x1d8e0c: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1d8e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1d8e10:
    // 0x1d8e10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d8e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d8e14:
    // 0x1d8e14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d8e18:
    if (ctx->pc == 0x1D8E18u) {
        ctx->pc = 0x1D8E1Cu;
        goto label_1d8e1c;
    }
    ctx->pc = 0x1D8E14u;
    {
        const bool branch_taken_0x1d8e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e14) {
            ctx->pc = 0x1D8E34u;
            goto label_1d8e34;
        }
    }
    ctx->pc = 0x1D8E1Cu;
label_1d8e1c:
    // 0x1d8e1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d8e20:
    // 0x1d8e20: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1d8e24:
    // 0x1d8e24: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1d8e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1d8e28:
    // 0x1d8e28: 0x401027  not         $v0, $v0
    ctx->pc = 0x1d8e28u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1d8e2c:
    // 0x1d8e2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d8e30:
    // 0x1d8e30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d8e34:
    // 0x1d8e34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d8e38:
    if (ctx->pc == 0x1D8E38u) {
        ctx->pc = 0x1D8E3Cu;
        goto label_1d8e3c;
    }
    ctx->pc = 0x1D8E34u;
    {
        const bool branch_taken_0x1d8e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e34) {
            ctx->pc = 0x1D8E40u;
            goto label_1d8e40;
        }
    }
    ctx->pc = 0x1D8E3Cu;
label_1d8e3c:
    // 0x1d8e3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e40:
    // 0x1d8e40: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_1d8e44:
    if (ctx->pc == 0x1D8E44u) {
        ctx->pc = 0x1D8E48u;
        goto label_1d8e48;
    }
    ctx->pc = 0x1D8E40u;
    {
        const bool branch_taken_0x1d8e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e40) {
            ctx->pc = 0x1D8E4Cu;
            goto label_1d8e4c;
        }
    }
    ctx->pc = 0x1D8E48u;
label_1d8e48:
    // 0x1d8e48: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x1d8e48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_1d8e4c:
    // 0x1d8e4c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_1d8e50:
    if (ctx->pc == 0x1D8E50u) {
        ctx->pc = 0x1D8E54u;
        goto label_1d8e54;
    }
    ctx->pc = 0x1D8E4Cu;
    {
        const bool branch_taken_0x1d8e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e4c) {
            ctx->pc = 0x1D8E94u;
            goto label_1d8e94;
        }
    }
    ctx->pc = 0x1D8E54u;
label_1d8e54:
    // 0x1d8e54: 0x8e220d9c  lw          $v0, 0xD9C($s1)
    ctx->pc = 0x1d8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_1d8e58:
    // 0x1d8e58: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1d8e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1d8e5c:
    // 0x1d8e5c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d8e60:
    if (ctx->pc == 0x1D8E60u) {
        ctx->pc = 0x1D8E60u;
            // 0x1d8e60: 0xae220d9c  sw          $v0, 0xD9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x1D8E64u;
        goto label_1d8e64;
    }
    ctx->pc = 0x1D8E5Cu;
    {
        const bool branch_taken_0x1d8e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E5Cu;
            // 0x1d8e60: 0xae220d9c  sw          $v0, 0xD9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e5c) {
            ctx->pc = 0x1D8E94u;
            goto label_1d8e94;
        }
    }
    ctx->pc = 0x1D8E64u;
label_1d8e64:
    // 0x1d8e64: 0x82240e3f  lb          $a0, 0xE3F($s1)
    ctx->pc = 0x1d8e64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3647)));
label_1d8e68:
    // 0x1d8e68: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1d8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1d8e6c:
    // 0x1d8e6c: 0x8c45077c  lw          $a1, 0x77C($v0)
    ctx->pc = 0x1d8e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_1d8e70:
    // 0x1d8e70: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1d8e74:
    if (ctx->pc == 0x1D8E74u) {
        ctx->pc = 0x1D8E74u;
            // 0x1d8e74: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->pc = 0x1D8E78u;
        goto label_1d8e78;
    }
    ctx->pc = 0x1D8E70u;
    {
        const bool branch_taken_0x1d8e70 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1D8E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E70u;
            // 0x1d8e74: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e70) {
            ctx->pc = 0x1D8E80u;
            goto label_1d8e80;
        }
    }
    ctx->pc = 0x1D8E78u;
label_1d8e78:
    // 0x1d8e78: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d8e7c:
    // 0x1d8e7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d8e7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d8e80:
    // 0x1d8e80: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1d8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d8e84:
    // 0x1d8e84: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x1d8e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_1d8e88:
    // 0x1d8e88: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1d8e88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1d8e8c:
    // 0x1d8e8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d8e90:
    // 0x1d8e90: 0x438018  mult        $s0, $v0, $v1
    ctx->pc = 0x1d8e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1d8e94:
    // 0x1d8e94: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x1d8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
label_1d8e98:
    // 0x1d8e98: 0xae2211f0  sw          $v0, 0x11F0($s1)
    ctx->pc = 0x1d8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4592), GPR_U32(ctx, 2));
label_1d8e9c:
    // 0x1d8e9c: 0x8e220d74  lw          $v0, 0xD74($s1)
    ctx->pc = 0x1d8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1d8ea0:
    // 0x1d8ea0: 0x904202c4  lbu         $v0, 0x2C4($v0)
    ctx->pc = 0x1d8ea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 708)));
label_1d8ea4:
    // 0x1d8ea4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d8ea8:
    if (ctx->pc == 0x1D8EA8u) {
        ctx->pc = 0x1D8EACu;
        goto label_1d8eac;
    }
    ctx->pc = 0x1D8EA4u;
    {
        const bool branch_taken_0x1d8ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ea4) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8EACu;
label_1d8eac:
    // 0x1d8eac: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x1d8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_1d8eb0:
    // 0x1d8eb0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1d8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d8eb4:
    // 0x1d8eb4: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1d8eb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_1d8eb8:
    // 0x1d8eb8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1d8ebc:
    if (ctx->pc == 0x1D8EBCu) {
        ctx->pc = 0x1D8EBCu;
            // 0x1d8ebc: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x1D8EC0u;
        goto label_1d8ec0;
    }
    ctx->pc = 0x1D8EB8u;
    {
        const bool branch_taken_0x1d8eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8eb8) {
            ctx->pc = 0x1D8EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EB8u;
            // 0x1d8ebc: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8EDCu;
            goto label_1d8edc;
        }
    }
    ctx->pc = 0x1D8EC0u;
label_1d8ec0:
    // 0x1d8ec0: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x1d8ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_1d8ec4:
    // 0x1d8ec4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1d8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_1d8ec8:
    // 0x1d8ec8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d8ecc:
    // 0x1d8ecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8ed0:
    // 0x1d8ed0: 0xc0bdf94  jal         func_2F7E50
label_1d8ed4:
    if (ctx->pc == 0x1D8ED4u) {
        ctx->pc = 0x1D8ED4u;
            // 0x1d8ed4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1D8ED8u;
        goto label_1d8ed8;
    }
    ctx->pc = 0x1D8ED0u;
    SET_GPR_U32(ctx, 31, 0x1D8ED8u);
    ctx->pc = 0x1D8ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8ED0u;
            // 0x1d8ed4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8ED8u; }
        if (ctx->pc != 0x1D8ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8ED8u; }
        if (ctx->pc != 0x1D8ED8u) { return; }
    }
    ctx->pc = 0x1D8ED8u;
label_1d8ed8:
    // 0x1d8ed8: 0x8e240d74  lw          $a0, 0xD74($s1)
    ctx->pc = 0x1d8ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1d8edc:
    // 0x1d8edc: 0xc0b6764  jal         func_2D9D90
label_1d8ee0:
    if (ctx->pc == 0x1D8EE0u) {
        ctx->pc = 0x1D8EE4u;
        goto label_1d8ee4;
    }
    ctx->pc = 0x1D8EDCu;
    SET_GPR_U32(ctx, 31, 0x1D8EE4u);
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EE4u; }
        if (ctx->pc != 0x1D8EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EE4u; }
        if (ctx->pc != 0x1D8EE4u) { return; }
    }
    ctx->pc = 0x1D8EE4u;
label_1d8ee4:
    // 0x1d8ee4: 0xae20118c  sw          $zero, 0x118C($s1)
    ctx->pc = 0x1d8ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
label_1d8ee8:
    // 0x1d8ee8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d8eec:
    // 0x1d8eec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1d8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1d8ef0:
    // 0x1d8ef0: 0x8c420960  lw          $v0, 0x960($v0)
    ctx->pc = 0x1d8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2400)));
label_1d8ef4:
    // 0x1d8ef4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1d8ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1d8ef8:
    // 0x1d8ef8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d8efc:
    if (ctx->pc == 0x1D8EFCu) {
        ctx->pc = 0x1D8F00u;
        goto label_1d8f00;
    }
    ctx->pc = 0x1D8EF8u;
    {
        const bool branch_taken_0x1d8ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ef8) {
            ctx->pc = 0x1D8F3Cu;
            goto label_1d8f3c;
        }
    }
    ctx->pc = 0x1D8F00u;
label_1d8f00:
    // 0x1d8f00: 0xc040180  jal         func_100600
label_1d8f04:
    if (ctx->pc == 0x1D8F04u) {
        ctx->pc = 0x1D8F04u;
            // 0x1d8f04: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x1D8F08u;
        goto label_1d8f08;
    }
    ctx->pc = 0x1D8F00u;
    SET_GPR_U32(ctx, 31, 0x1D8F08u);
    ctx->pc = 0x1D8F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F00u;
            // 0x1d8f04: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F08u; }
        if (ctx->pc != 0x1D8F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F08u; }
        if (ctx->pc != 0x1D8F08u) { return; }
    }
    ctx->pc = 0x1D8F08u;
label_1d8f08:
    // 0x1d8f08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d8f0c:
    if (ctx->pc == 0x1D8F0Cu) {
        ctx->pc = 0x1D8F10u;
        goto label_1d8f10;
    }
    ctx->pc = 0x1D8F08u;
    {
        const bool branch_taken_0x1d8f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f08) {
            ctx->pc = 0x1D8F3Cu;
            goto label_1d8f3c;
        }
    }
    ctx->pc = 0x1D8F10u;
label_1d8f10:
    // 0x1d8f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f14:
    // 0x1d8f14: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_1d8f18:
    // 0x1d8f18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d8f1c:
    // 0x1d8f1c: 0x82250e3f  lb          $a1, 0xE3F($s1)
    ctx->pc = 0x1d8f1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3647)));
label_1d8f20:
    // 0x1d8f20: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1d8f24:
    // 0x1d8f24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8f28:
    // 0x1d8f28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d8f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d8f2c:
    // 0x1d8f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8f30:
    // 0x1d8f30: 0x90420758  lbu         $v0, 0x758($v0)
    ctx->pc = 0x1d8f30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1880)));
label_1d8f34:
    // 0x1d8f34: 0xc0f2178  jal         func_3C85E0
label_1d8f38:
    if (ctx->pc == 0x1D8F38u) {
        ctx->pc = 0x1D8F38u;
            // 0x1d8f38: 0x3046001f  andi        $a2, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->pc = 0x1D8F3Cu;
        goto label_1d8f3c;
    }
    ctx->pc = 0x1D8F34u;
    SET_GPR_U32(ctx, 31, 0x1D8F3Cu);
    ctx->pc = 0x1D8F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F34u;
            // 0x1d8f38: 0x3046001f  andi        $a2, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C85E0u;
    if (runtime->hasFunction(0x3C85E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C85E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F3Cu; }
        if (ctx->pc != 0x1D8F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C85E0_0x3c85e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F3Cu; }
        if (ctx->pc != 0x1D8F3Cu) { return; }
    }
    ctx->pc = 0x1D8F3Cu;
label_1d8f3c:
    // 0x1d8f3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d8f40:
    // 0x1d8f40: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d8f44:
    // 0x1d8f44: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1d8f48:
    // 0x1d8f48: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1d8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1d8f4c:
    // 0x1d8f4c: 0x5443002b  bnel        $v0, $v1, . + 4 + (0x2B << 2)
label_1d8f50:
    if (ctx->pc == 0x1D8F50u) {
        ctx->pc = 0x1D8F50u;
            // 0x1d8f50: 0x26050006  addiu       $a1, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->pc = 0x1D8F54u;
        goto label_1d8f54;
    }
    ctx->pc = 0x1D8F4Cu;
    {
        const bool branch_taken_0x1d8f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d8f4c) {
            ctx->pc = 0x1D8F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F4Cu;
            // 0x1d8f50: 0x26050006  addiu       $a1, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8FFCu;
            goto label_1d8ffc;
        }
    }
    ctx->pc = 0x1D8F54u;
label_1d8f54:
    // 0x1d8f54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d8f58:
    // 0x1d8f58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8f5c:
    // 0x1d8f5c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1d8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1d8f60:
    // 0x1d8f60: 0x80440780  lb          $a0, 0x780($v0)
    ctx->pc = 0x1d8f60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1920)));
label_1d8f64:
    // 0x1d8f64: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_1d8f68:
    if (ctx->pc == 0x1D8F68u) {
        ctx->pc = 0x1D8F6Cu;
        goto label_1d8f6c;
    }
    ctx->pc = 0x1D8F64u;
    {
        const bool branch_taken_0x1d8f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8f64) {
            ctx->pc = 0x1D8FC4u;
            goto label_1d8fc4;
        }
    }
    ctx->pc = 0x1D8F6Cu;
label_1d8f6c:
    // 0x1d8f6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8f70:
    // 0x1d8f70: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1d8f74:
    if (ctx->pc == 0x1D8F74u) {
        ctx->pc = 0x1D8F78u;
        goto label_1d8f78;
    }
    ctx->pc = 0x1D8F70u;
    {
        const bool branch_taken_0x1d8f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8f70) {
            ctx->pc = 0x1D8F8Cu;
            goto label_1d8f8c;
        }
    }
    ctx->pc = 0x1D8F78u;
label_1d8f78:
    // 0x1d8f78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8f7c:
    // 0x1d8f7c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1d8f80:
    if (ctx->pc == 0x1D8F80u) {
        ctx->pc = 0x1D8F84u;
        goto label_1d8f84;
    }
    ctx->pc = 0x1D8F7Cu;
    {
        const bool branch_taken_0x1d8f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8f7c) {
            ctx->pc = 0x1D8F8Cu;
            goto label_1d8f8c;
        }
    }
    ctx->pc = 0x1D8F84u;
label_1d8f84:
    // 0x1d8f84: 0x10000020  b           . + 4 + (0x20 << 2)
label_1d8f88:
    if (ctx->pc == 0x1D8F88u) {
        ctx->pc = 0x1D8F88u;
            // 0x1d8f88: 0x8e220e00  lw          $v0, 0xE00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3584)));
        ctx->pc = 0x1D8F8Cu;
        goto label_1d8f8c;
    }
    ctx->pc = 0x1D8F84u;
    {
        const bool branch_taken_0x1d8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F84u;
            // 0x1d8f88: 0x8e220e00  lw          $v0, 0xE00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f84) {
            ctx->pc = 0x1D9008u;
            goto label_1d9008;
        }
    }
    ctx->pc = 0x1D8F8Cu;
label_1d8f8c:
    // 0x1d8f8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d8f90:
    // 0x1d8f90: 0x8e320d98  lw          $s2, 0xD98($s1)
    ctx->pc = 0x1d8f90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_1d8f94:
    // 0x1d8f94: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1d8f98:
    // 0x1d8f98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d8f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8f9c:
    // 0x1d8f9c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d8f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d8fa0:
    // 0x1d8fa0: 0x320f809  jalr        $t9
label_1d8fa4:
    if (ctx->pc == 0x1D8FA4u) {
        ctx->pc = 0x1D8FA4u;
            // 0x1d8fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D8FA8u;
        goto label_1d8fa8;
    }
    ctx->pc = 0x1D8FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D8FA8u);
        ctx->pc = 0x1D8FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FA0u;
            // 0x1d8fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D8FA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FA8u; }
            if (ctx->pc != 0x1D8FA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D8FA8u;
label_1d8fa8:
    // 0x1d8fa8: 0x14520016  bne         $v0, $s2, . + 4 + (0x16 << 2)
label_1d8fac:
    if (ctx->pc == 0x1D8FACu) {
        ctx->pc = 0x1D8FB0u;
        goto label_1d8fb0;
    }
    ctx->pc = 0x1D8FA8u;
    {
        const bool branch_taken_0x1d8fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1d8fa8) {
            ctx->pc = 0x1D9004u;
            goto label_1d9004;
        }
    }
    ctx->pc = 0x1D8FB0u;
label_1d8fb0:
    // 0x1d8fb0: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x1d8fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_1d8fb4:
    // 0x1d8fb4: 0xc12ca3c  jal         func_4B28F0
label_1d8fb8:
    if (ctx->pc == 0x1D8FB8u) {
        ctx->pc = 0x1D8FB8u;
            // 0x1d8fb8: 0x26241150  addiu       $a0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->pc = 0x1D8FBCu;
        goto label_1d8fbc;
    }
    ctx->pc = 0x1D8FB4u;
    SET_GPR_U32(ctx, 31, 0x1D8FBCu);
    ctx->pc = 0x1D8FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FB4u;
            // 0x1d8fb8: 0x26241150  addiu       $a0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FBCu; }
        if (ctx->pc != 0x1D8FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FBCu; }
        if (ctx->pc != 0x1D8FBCu) { return; }
    }
    ctx->pc = 0x1D8FBCu;
label_1d8fbc:
    // 0x1d8fbc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1d8fc0:
    if (ctx->pc == 0x1D8FC0u) {
        ctx->pc = 0x1D8FC4u;
        goto label_1d8fc4;
    }
    ctx->pc = 0x1D8FBCu;
    {
        const bool branch_taken_0x1d8fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fbc) {
            ctx->pc = 0x1D9004u;
            goto label_1d9004;
        }
    }
    ctx->pc = 0x1D8FC4u;
label_1d8fc4:
    // 0x1d8fc4: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_1d8fc8:
    if (ctx->pc == 0x1D8FC8u) {
        ctx->pc = 0x1D8FCCu;
        goto label_1d8fcc;
    }
    ctx->pc = 0x1D8FC4u;
    {
        const bool branch_taken_0x1d8fc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fc4) {
            ctx->pc = 0x1D9004u;
            goto label_1d9004;
        }
    }
    ctx->pc = 0x1D8FCCu;
label_1d8fcc:
    // 0x1d8fcc: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x1d8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_1d8fd0:
    // 0x1d8fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8fd4:
    // 0x1d8fd4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_1d8fd8:
    if (ctx->pc == 0x1D8FD8u) {
        ctx->pc = 0x1D8FD8u;
            // 0x1d8fd8: 0x26241150  addiu       $a0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->pc = 0x1D8FDCu;
        goto label_1d8fdc;
    }
    ctx->pc = 0x1D8FD4u;
    {
        const bool branch_taken_0x1d8fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8fd4) {
            ctx->pc = 0x1D8FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FD4u;
            // 0x1d8fd8: 0x26241150  addiu       $a0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8FECu;
            goto label_1d8fec;
        }
    }
    ctx->pc = 0x1D8FDCu;
label_1d8fdc:
    // 0x1d8fdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8fe0:
    // 0x1d8fe0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1d8fe4:
    if (ctx->pc == 0x1D8FE4u) {
        ctx->pc = 0x1D8FE8u;
        goto label_1d8fe8;
    }
    ctx->pc = 0x1D8FE0u;
    {
        const bool branch_taken_0x1d8fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8fe0) {
            ctx->pc = 0x1D9004u;
            goto label_1d9004;
        }
    }
    ctx->pc = 0x1D8FE8u;
label_1d8fe8:
    // 0x1d8fe8: 0x26241150  addiu       $a0, $s1, 0x1150
    ctx->pc = 0x1d8fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
label_1d8fec:
    // 0x1d8fec: 0xc12ca3c  jal         func_4B28F0
label_1d8ff0:
    if (ctx->pc == 0x1D8FF0u) {
        ctx->pc = 0x1D8FF0u;
            // 0x1d8ff0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1D8FF4u;
        goto label_1d8ff4;
    }
    ctx->pc = 0x1D8FECu;
    SET_GPR_U32(ctx, 31, 0x1D8FF4u);
    ctx->pc = 0x1D8FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FECu;
            // 0x1d8ff0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FF4u; }
        if (ctx->pc != 0x1D8FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FF4u; }
        if (ctx->pc != 0x1D8FF4u) { return; }
    }
    ctx->pc = 0x1D8FF4u;
label_1d8ff4:
    // 0x1d8ff4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d8ff8:
    if (ctx->pc == 0x1D8FF8u) {
        ctx->pc = 0x1D8FFCu;
        goto label_1d8ffc;
    }
    ctx->pc = 0x1D8FF4u;
    {
        const bool branch_taken_0x1d8ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ff4) {
            ctx->pc = 0x1D9004u;
            goto label_1d9004;
        }
    }
    ctx->pc = 0x1D8FFCu;
label_1d8ffc:
    // 0x1d8ffc: 0xc12ca3c  jal         func_4B28F0
label_1d9000:
    if (ctx->pc == 0x1D9000u) {
        ctx->pc = 0x1D9000u;
            // 0x1d9000: 0x26241150  addiu       $a0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->pc = 0x1D9004u;
        goto label_1d9004;
    }
    ctx->pc = 0x1D8FFCu;
    SET_GPR_U32(ctx, 31, 0x1D9004u);
    ctx->pc = 0x1D9000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FFCu;
            // 0x1d9000: 0x26241150  addiu       $a0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9004u; }
        if (ctx->pc != 0x1D9004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9004u; }
        if (ctx->pc != 0x1D9004u) { return; }
    }
    ctx->pc = 0x1D9004u;
label_1d9004:
    // 0x1d9004: 0x8e220e00  lw          $v0, 0xE00($s1)
    ctx->pc = 0x1d9004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3584)));
label_1d9008:
    // 0x1d9008: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_1d900c:
    // 0x1d900c: 0xc0754b4  jal         func_1D52D0
label_1d9010:
    if (ctx->pc == 0x1D9010u) {
        ctx->pc = 0x1D9010u;
            // 0x1d9010: 0xae220e04  sw          $v0, 0xE04($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3588), GPR_U32(ctx, 2));
        ctx->pc = 0x1D9014u;
        goto label_1d9014;
    }
    ctx->pc = 0x1D900Cu;
    SET_GPR_U32(ctx, 31, 0x1D9014u);
    ctx->pc = 0x1D9010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D900Cu;
            // 0x1d9010: 0xae220e04  sw          $v0, 0xE04($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9014u; }
        if (ctx->pc != 0x1D9014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9014u; }
        if (ctx->pc != 0x1D9014u) { return; }
    }
    ctx->pc = 0x1D9014u;
label_1d9014:
    // 0x1d9014: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1d9014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1d9018:
    // 0x1d9018: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d9018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1d901c:
    // 0x1d901c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d9020:
    // 0x1d9020: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1d9024:
    if (ctx->pc == 0x1D9024u) {
        ctx->pc = 0x1D9024u;
            // 0x1d9024: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x1D9028u;
        goto label_1d9028;
    }
    ctx->pc = 0x1D9020u;
    {
        const bool branch_taken_0x1d9020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9020) {
            ctx->pc = 0x1D9024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9020u;
            // 0x1d9024: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D9028u;
label_1d9028:
    // 0x1d9028: 0x82230e3f  lb          $v1, 0xE3F($s1)
    ctx->pc = 0x1d9028u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3647)));
label_1d902c:
    // 0x1d902c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1d902cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1d9030:
    // 0x1d9030: 0x2442c740  addiu       $v0, $v0, -0x38C0
    ctx->pc = 0x1d9030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
label_1d9034:
    // 0x1d9034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9038:
    // 0x1d9038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d903c:
    // 0x1d903c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9040:
    // 0x1d9040: 0x10000015  b           . + 4 + (0x15 << 2)
label_1d9044:
    if (ctx->pc == 0x1D9044u) {
        ctx->pc = 0x1D9044u;
            // 0x1d9044: 0xe6200e08  swc1        $f0, 0xE08($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3592), bits); }
        ctx->pc = 0x1D9048u;
        goto label_1d9048;
    }
    ctx->pc = 0x1D9040u;
    {
        const bool branch_taken_0x1d9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9040u;
            // 0x1d9044: 0xe6200e08  swc1        $f0, 0xE08($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9040) {
            ctx->pc = 0x1D9098u;
            goto label_1d9098;
        }
    }
    ctx->pc = 0x1D9048u;
label_1d9048:
    // 0x1d9048: 0xc0754b4  jal         func_1D52D0
label_1d904c:
    if (ctx->pc == 0x1D904Cu) {
        ctx->pc = 0x1D9050u;
        goto label_1d9050;
    }
    ctx->pc = 0x1D9048u;
    SET_GPR_U32(ctx, 31, 0x1D9050u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9050u; }
        if (ctx->pc != 0x1D9050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9050u; }
        if (ctx->pc != 0x1D9050u) { return; }
    }
    ctx->pc = 0x1D9050u;
label_1d9050:
    // 0x1d9050: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1d9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1d9054:
    // 0x1d9054: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d9054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1d9058:
    // 0x1d9058: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d905c:
    // 0x1d905c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1d9060:
    if (ctx->pc == 0x1D9060u) {
        ctx->pc = 0x1D9060u;
            // 0x1d9060: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1D9064u;
        goto label_1d9064;
    }
    ctx->pc = 0x1D905Cu;
    {
        const bool branch_taken_0x1d905c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d905c) {
            ctx->pc = 0x1D9060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D905Cu;
            // 0x1d9060: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9094u;
            goto label_1d9094;
        }
    }
    ctx->pc = 0x1D9064u;
label_1d9064:
    // 0x1d9064: 0x922211c0  lbu         $v0, 0x11C0($s1)
    ctx->pc = 0x1d9064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4544)));
label_1d9068:
    // 0x1d9068: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d906c:
    if (ctx->pc == 0x1D906Cu) {
        ctx->pc = 0x1D9070u;
        goto label_1d9070;
    }
    ctx->pc = 0x1D9068u;
    {
        const bool branch_taken_0x1d9068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9068) {
            ctx->pc = 0x1D9090u;
            goto label_1d9090;
        }
    }
    ctx->pc = 0x1D9070u;
label_1d9070:
    // 0x1d9070: 0x82230e3f  lb          $v1, 0xE3F($s1)
    ctx->pc = 0x1d9070u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3647)));
label_1d9074:
    // 0x1d9074: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1d9074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1d9078:
    // 0x1d9078: 0x2442c760  addiu       $v0, $v0, -0x38A0
    ctx->pc = 0x1d9078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952800));
label_1d907c:
    // 0x1d907c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d907cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9080:
    // 0x1d9080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9084:
    // 0x1d9084: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d9084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9088:
    // 0x1d9088: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d908c:
    if (ctx->pc == 0x1D908Cu) {
        ctx->pc = 0x1D908Cu;
            // 0x1d908c: 0xe6200e08  swc1        $f0, 0xE08($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3592), bits); }
        ctx->pc = 0x1D9090u;
        goto label_1d9090;
    }
    ctx->pc = 0x1D9088u;
    {
        const bool branch_taken_0x1d9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9088u;
            // 0x1d908c: 0xe6200e08  swc1        $f0, 0xE08($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9088) {
            ctx->pc = 0x1D9098u;
            goto label_1d9098;
        }
    }
    ctx->pc = 0x1D9090u;
label_1d9090:
    // 0x1d9090: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d9094:
    // 0x1d9094: 0xae220e08  sw          $v0, 0xE08($s1)
    ctx->pc = 0x1d9094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3592), GPR_U32(ctx, 2));
label_1d9098:
    // 0x1d9098: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_1d909c:
    // 0x1d909c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d90a0:
    // 0x1d90a0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1d90a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_1d90a4:
    // 0x1d90a4: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
label_1d90a8:
    if (ctx->pc == 0x1D90A8u) {
        ctx->pc = 0x1D90A8u;
            // 0x1d90a8: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x1D90ACu;
        goto label_1d90ac;
    }
    ctx->pc = 0x1D90A4u;
    {
        const bool branch_taken_0x1d90a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d90a4) {
            ctx->pc = 0x1D90A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90A4u;
            // 0x1d90a8: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D90E8u;
            goto label_1d90e8;
        }
    }
    ctx->pc = 0x1D90ACu;
label_1d90ac:
    // 0x1d90ac: 0x8e220518  lw          $v0, 0x518($s1)
    ctx->pc = 0x1d90acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
label_1d90b0:
    // 0x1d90b0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1d90b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1d90b4:
    // 0x1d90b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d90b8:
    if (ctx->pc == 0x1D90B8u) {
        ctx->pc = 0x1D90BCu;
        goto label_1d90bc;
    }
    ctx->pc = 0x1D90B4u;
    {
        const bool branch_taken_0x1d90b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d90b4) {
            ctx->pc = 0x1D90E4u;
            goto label_1d90e4;
        }
    }
    ctx->pc = 0x1D90BCu;
label_1d90bc:
    // 0x1d90bc: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x1d90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_1d90c0:
    // 0x1d90c0: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1d90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_1d90c4:
    // 0x1d90c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d90c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d90c8:
    // 0x1d90c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d90cc:
    if (ctx->pc == 0x1D90CCu) {
        ctx->pc = 0x1D90D0u;
        goto label_1d90d0;
    }
    ctx->pc = 0x1D90C8u;
    {
        const bool branch_taken_0x1d90c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d90c8) {
            ctx->pc = 0x1D90E4u;
            goto label_1d90e4;
        }
    }
    ctx->pc = 0x1D90D0u;
label_1d90d0:
    // 0x1d90d0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1d90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_1d90d4:
    // 0x1d90d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d90d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d90d8:
    // 0x1d90d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d90d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d90dc:
    // 0x1d90dc: 0xc0bdf9c  jal         func_2F7E70
label_1d90e0:
    if (ctx->pc == 0x1D90E0u) {
        ctx->pc = 0x1D90E0u;
            // 0x1d90e0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1D90E4u;
        goto label_1d90e4;
    }
    ctx->pc = 0x1D90DCu;
    SET_GPR_U32(ctx, 31, 0x1D90E4u);
    ctx->pc = 0x1D90E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90DCu;
            // 0x1d90e0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90E4u; }
        if (ctx->pc != 0x1D90E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90E4u; }
        if (ctx->pc != 0x1D90E4u) { return; }
    }
    ctx->pc = 0x1D90E4u;
label_1d90e4:
    // 0x1d90e4: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x1d90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1d90e8:
    // 0x1d90e8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1d90e8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d90ec:
    // 0x1d90ec: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1d90f0:
    if (ctx->pc == 0x1D90F0u) {
        ctx->pc = 0x1D90F0u;
            // 0x1d90f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D90F4u;
        goto label_1d90f4;
    }
    ctx->pc = 0x1D90ECu;
    {
        const bool branch_taken_0x1d90ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D90F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90ECu;
            // 0x1d90f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90ec) {
            ctx->pc = 0x1D9104u;
            goto label_1d9104;
        }
    }
    ctx->pc = 0x1D90F4u;
label_1d90f4:
    // 0x1d90f4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1d90f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d90f8:
    // 0x1d90f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d90fc:
    if (ctx->pc == 0x1D90FCu) {
        ctx->pc = 0x1D9100u;
        goto label_1d9100;
    }
    ctx->pc = 0x1D90F8u;
    {
        const bool branch_taken_0x1d90f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d90f8) {
            ctx->pc = 0x1D9104u;
            goto label_1d9104;
        }
    }
    ctx->pc = 0x1D9100u;
label_1d9100:
    // 0x1d9100: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d9100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d9104:
    // 0x1d9104: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d9108:
    if (ctx->pc == 0x1D9108u) {
        ctx->pc = 0x1D910Cu;
        goto label_1d910c;
    }
    ctx->pc = 0x1D9104u;
    {
        const bool branch_taken_0x1d9104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9104) {
            ctx->pc = 0x1D9144u;
            goto label_1d9144;
        }
    }
    ctx->pc = 0x1D910Cu;
label_1d910c:
    // 0x1d910c: 0x822211aa  lb          $v0, 0x11AA($s1)
    ctx->pc = 0x1d910cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1d9110:
    // 0x1d9110: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1d9110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1d9114:
    // 0x1d9114: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d9114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d9118:
    // 0x1d9118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d911c:
    if (ctx->pc == 0x1D911Cu) {
        ctx->pc = 0x1D9120u;
        goto label_1d9120;
    }
    ctx->pc = 0x1D9118u;
    {
        const bool branch_taken_0x1d9118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9118) {
            ctx->pc = 0x1D9138u;
            goto label_1d9138;
        }
    }
    ctx->pc = 0x1D9120u;
label_1d9120:
    // 0x1d9120: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d9120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d9124:
    // 0x1d9124: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d9124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1d9128:
    // 0x1d9128: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1d9128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1d912c:
    // 0x1d912c: 0x401027  not         $v0, $v0
    ctx->pc = 0x1d912cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1d9130:
    // 0x1d9130: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d9130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d9134:
    // 0x1d9134: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d9134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d9138:
    // 0x1d9138: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d913c:
    if (ctx->pc == 0x1D913Cu) {
        ctx->pc = 0x1D9140u;
        goto label_1d9140;
    }
    ctx->pc = 0x1D9138u;
    {
        const bool branch_taken_0x1d9138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9138) {
            ctx->pc = 0x1D9144u;
            goto label_1d9144;
        }
    }
    ctx->pc = 0x1D9140u;
label_1d9140:
    // 0x1d9140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9144:
    // 0x1d9144: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_1d9148:
    if (ctx->pc == 0x1D9148u) {
        ctx->pc = 0x1D9148u;
            // 0x1d9148: 0x8e250d64  lw          $a1, 0xD64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
        ctx->pc = 0x1D914Cu;
        goto label_1d914c;
    }
    ctx->pc = 0x1D9144u;
    {
        const bool branch_taken_0x1d9144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9144) {
            ctx->pc = 0x1D9148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9144u;
            // 0x1d9148: 0x8e250d64  lw          $a1, 0xD64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D915Cu;
            goto label_1d915c;
        }
    }
    ctx->pc = 0x1D914Cu;
label_1d914c:
    // 0x1d914c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d9150:
    // 0x1d9150: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
label_1d9154:
    if (ctx->pc == 0x1D9154u) {
        ctx->pc = 0x1D9154u;
            // 0x1d9154: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x1D9158u;
        goto label_1d9158;
    }
    ctx->pc = 0x1D9150u;
    {
        const bool branch_taken_0x1d9150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9150) {
            ctx->pc = 0x1D9154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9150u;
            // 0x1d9154: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9220u;
            goto label_1d9220;
        }
    }
    ctx->pc = 0x1D9158u;
label_1d9158:
    // 0x1d9158: 0x8e250d64  lw          $a1, 0xD64($s1)
    ctx->pc = 0x1d9158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
label_1d915c:
    // 0x1d915c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9160:
    // 0x1d9160: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1d9160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1d9164:
    // 0x1d9164: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d9164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d9168:
    // 0x1d9168: 0xae250d60  sw          $a1, 0xD60($s1)
    ctx->pc = 0x1d9168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3424), GPR_U32(ctx, 5));
label_1d916c:
    // 0x1d916c: 0xae240e34  sw          $a0, 0xE34($s1)
    ctx->pc = 0x1d916cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3636), GPR_U32(ctx, 4));
label_1d9170:
    // 0x1d9170: 0x8e240a78  lw          $a0, 0xA78($s1)
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2680)));
label_1d9174:
    // 0x1d9174: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d9178:
    // 0x1d9178: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1d9178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1d917c:
    // 0x1d917c: 0xae230a78  sw          $v1, 0xA78($s1)
    ctx->pc = 0x1d917cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2680), GPR_U32(ctx, 3));
label_1d9180:
    // 0x1d9180: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x1d9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_1d9184:
    // 0x1d9184: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1d9188:
    // 0x1d9188: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d9188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1d918c:
    // 0x1d918c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d918cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9190:
    // 0x1d9190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9194:
    // 0x1d9194: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d9194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9198:
    // 0x1d9198: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d919c:
    // 0x1d919c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d919cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d91a0:
    // 0x1d91a0: 0x320f809  jalr        $t9
label_1d91a4:
    if (ctx->pc == 0x1D91A4u) {
        ctx->pc = 0x1D91A4u;
            // 0x1d91a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D91A8u;
        goto label_1d91a8;
    }
    ctx->pc = 0x1D91A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D91A8u);
        ctx->pc = 0x1D91A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91A0u;
            // 0x1d91a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D91A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D91A8u; }
            if (ctx->pc != 0x1D91A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D91A8u;
label_1d91a8:
    // 0x1d91a8: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x1d91a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_1d91ac:
    // 0x1d91ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1d91acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d91b0:
    // 0x1d91b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d91b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d91b4:
    // 0x1d91b4: 0x320f809  jalr        $t9
label_1d91b8:
    if (ctx->pc == 0x1D91B8u) {
        ctx->pc = 0x1D91B8u;
            // 0x1d91b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D91BCu;
        goto label_1d91bc;
    }
    ctx->pc = 0x1D91B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D91BCu);
        ctx->pc = 0x1D91B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91B4u;
            // 0x1d91b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D91BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D91BCu; }
            if (ctx->pc != 0x1D91BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D91BCu;
label_1d91bc:
    // 0x1d91bc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d91bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d91c0:
    // 0x1d91c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d91c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d91c4:
    // 0x1d91c4: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x1d91c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_1d91c8:
    // 0x1d91c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d91c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d91cc:
    // 0x1d91cc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d91ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d91d0:
    // 0x1d91d0: 0x320f809  jalr        $t9
label_1d91d4:
    if (ctx->pc == 0x1D91D4u) {
        ctx->pc = 0x1D91D4u;
            // 0x1d91d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D91D8u;
        goto label_1d91d8;
    }
    ctx->pc = 0x1D91D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D91D8u);
        ctx->pc = 0x1D91D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91D0u;
            // 0x1d91d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D91D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D91D8u; }
            if (ctx->pc != 0x1D91D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D91D8u;
label_1d91d8:
    // 0x1d91d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d91dc:
    // 0x1d91dc: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x1d91dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1d91e0:
    // 0x1d91e0: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x1d91e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_1d91e4:
    // 0x1d91e4: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1d91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1d91e8:
    // 0x1d91e8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1d91e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d91ec:
    // 0x1d91ec: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_1d91f0:
    if (ctx->pc == 0x1D91F0u) {
        ctx->pc = 0x1D91F0u;
            // 0x1d91f0: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x1D91F4u;
        goto label_1d91f4;
    }
    ctx->pc = 0x1D91ECu;
    {
        const bool branch_taken_0x1d91ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d91ec) {
            ctx->pc = 0x1D91F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91ECu;
            // 0x1d91f0: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D91FCu;
            goto label_1d91fc;
        }
    }
    ctx->pc = 0x1D91F4u;
label_1d91f4:
    // 0x1d91f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d91f8:
    if (ctx->pc == 0x1D91F8u) {
        ctx->pc = 0x1D91F8u;
            // 0x1d91f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D91FCu;
        goto label_1d91fc;
    }
    ctx->pc = 0x1D91F4u;
    {
        const bool branch_taken_0x1d91f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91F4u;
            // 0x1d91f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91f4) {
            ctx->pc = 0x1D9208u;
            goto label_1d9208;
        }
    }
    ctx->pc = 0x1D91FCu;
label_1d91fc:
    // 0x1d91fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9200:
    // 0x1d9200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9204:
    // 0x1d9204: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d9204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9208:
    // 0x1d9208: 0xc0b76dc  jal         func_2DDB70
label_1d920c:
    if (ctx->pc == 0x1D920Cu) {
        ctx->pc = 0x1D9210u;
        goto label_1d9210;
    }
    ctx->pc = 0x1D9208u;
    SET_GPR_U32(ctx, 31, 0x1D9210u);
    ctx->pc = 0x2DDB70u;
    if (runtime->hasFunction(0x2DDB70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9210u; }
        if (ctx->pc != 0x1D9210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDB70_0x2ddb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9210u; }
        if (ctx->pc != 0x1D9210u) { return; }
    }
    ctx->pc = 0x1D9210u;
label_1d9210:
    // 0x1d9210: 0xc072aaa  jal         func_1CAAA8
label_1d9214:
    if (ctx->pc == 0x1D9214u) {
        ctx->pc = 0x1D9214u;
            // 0x1d9214: 0x9224006c  lbu         $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x1D9218u;
        goto label_1d9218;
    }
    ctx->pc = 0x1D9210u;
    SET_GPR_U32(ctx, 31, 0x1D9218u);
    ctx->pc = 0x1D9214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9210u;
            // 0x1d9214: 0x9224006c  lbu         $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9218u; }
        if (ctx->pc != 0x1D9218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9218u; }
        if (ctx->pc != 0x1D9218u) { return; }
    }
    ctx->pc = 0x1D9218u;
label_1d9218:
    // 0x1d9218: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d921c:
    if (ctx->pc == 0x1D921Cu) {
        ctx->pc = 0x1D921Cu;
            // 0x1d921c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D9220u;
        goto label_1d9220;
    }
    ctx->pc = 0x1D9218u;
    {
        const bool branch_taken_0x1d9218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9218u;
            // 0x1d921c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9218) {
            ctx->pc = 0x1D922Cu;
            goto label_1d922c;
        }
    }
    ctx->pc = 0x1D9220u;
label_1d9220:
    // 0x1d9220: 0xc0754e0  jal         func_1D5380
label_1d9224:
    if (ctx->pc == 0x1D9224u) {
        ctx->pc = 0x1D9228u;
        goto label_1d9228;
    }
    ctx->pc = 0x1D9220u;
    SET_GPR_U32(ctx, 31, 0x1D9228u);
    ctx->pc = 0x1D5380u;
    if (runtime->hasFunction(0x1D5380u)) {
        auto targetFn = runtime->lookupFunction(0x1D5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9228u; }
        if (ctx->pc != 0x1D9228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5380_0x1d5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9228u; }
        if (ctx->pc != 0x1D9228u) { return; }
    }
    ctx->pc = 0x1D9228u;
label_1d9228:
    // 0x1d9228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d922c:
    // 0x1d922c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9230:
    // 0x1d9230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d9230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9234:
    // 0x1d9234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9238:
    // 0x1d9238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d923c:
    // 0x1d923c: 0x3e00008  jr          $ra
label_1d9240:
    if (ctx->pc == 0x1D9240u) {
        ctx->pc = 0x1D9240u;
            // 0x1d9240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D9244u;
        goto label_1d9244;
    }
    ctx->pc = 0x1D923Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D923Cu;
            // 0x1d9240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9244u;
label_1d9244:
    // 0x1d9244: 0x0  nop
    ctx->pc = 0x1d9244u;
    // NOP
label_1d9248:
    // 0x1d9248: 0x0  nop
    ctx->pc = 0x1d9248u;
    // NOP
label_1d924c:
    // 0x1d924c: 0x0  nop
    ctx->pc = 0x1d924cu;
    // NOP
label_1d9250:
    // 0x1d9250: 0x3e00008  jr          $ra
label_1d9254:
    if (ctx->pc == 0x1D9254u) {
        ctx->pc = 0x1D9254u;
            // 0x1d9254: 0x8c8201c8  lw          $v0, 0x1C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
        ctx->pc = 0x1D9258u;
        goto label_1d9258;
    }
    ctx->pc = 0x1D9250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9250u;
            // 0x1d9254: 0x8c8201c8  lw          $v0, 0x1C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9258u;
label_1d9258:
    // 0x1d9258: 0x0  nop
    ctx->pc = 0x1d9258u;
    // NOP
label_1d925c:
    // 0x1d925c: 0x0  nop
    ctx->pc = 0x1d925cu;
    // NOP
label_1d9260:
    // 0x1d9260: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d9260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d9264:
    // 0x1d9264: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d9268:
    // 0x1d9268: 0x3e00008  jr          $ra
label_1d926c:
    if (ctx->pc == 0x1D926Cu) {
        ctx->pc = 0x1D926Cu;
            // 0x1d926c: 0x8c420cd0  lw          $v0, 0xCD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
        ctx->pc = 0x1D9270u;
        goto label_fallthrough_0x1d9268;
    }
    ctx->pc = 0x1D9268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9268u;
            // 0x1d926c: 0x8c420cd0  lw          $v0, 0xCD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d9268:
    ctx->pc = 0x1D9270u;
}
