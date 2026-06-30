#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E0C20
// Address: 0x4e0c20 - 0x4e1160
void sub_004E0C20_0x4e0c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0C20_0x4e0c20");
#endif

    switch (ctx->pc) {
        case 0x4e0c20u: goto label_4e0c20;
        case 0x4e0c24u: goto label_4e0c24;
        case 0x4e0c28u: goto label_4e0c28;
        case 0x4e0c2cu: goto label_4e0c2c;
        case 0x4e0c30u: goto label_4e0c30;
        case 0x4e0c34u: goto label_4e0c34;
        case 0x4e0c38u: goto label_4e0c38;
        case 0x4e0c3cu: goto label_4e0c3c;
        case 0x4e0c40u: goto label_4e0c40;
        case 0x4e0c44u: goto label_4e0c44;
        case 0x4e0c48u: goto label_4e0c48;
        case 0x4e0c4cu: goto label_4e0c4c;
        case 0x4e0c50u: goto label_4e0c50;
        case 0x4e0c54u: goto label_4e0c54;
        case 0x4e0c58u: goto label_4e0c58;
        case 0x4e0c5cu: goto label_4e0c5c;
        case 0x4e0c60u: goto label_4e0c60;
        case 0x4e0c64u: goto label_4e0c64;
        case 0x4e0c68u: goto label_4e0c68;
        case 0x4e0c6cu: goto label_4e0c6c;
        case 0x4e0c70u: goto label_4e0c70;
        case 0x4e0c74u: goto label_4e0c74;
        case 0x4e0c78u: goto label_4e0c78;
        case 0x4e0c7cu: goto label_4e0c7c;
        case 0x4e0c80u: goto label_4e0c80;
        case 0x4e0c84u: goto label_4e0c84;
        case 0x4e0c88u: goto label_4e0c88;
        case 0x4e0c8cu: goto label_4e0c8c;
        case 0x4e0c90u: goto label_4e0c90;
        case 0x4e0c94u: goto label_4e0c94;
        case 0x4e0c98u: goto label_4e0c98;
        case 0x4e0c9cu: goto label_4e0c9c;
        case 0x4e0ca0u: goto label_4e0ca0;
        case 0x4e0ca4u: goto label_4e0ca4;
        case 0x4e0ca8u: goto label_4e0ca8;
        case 0x4e0cacu: goto label_4e0cac;
        case 0x4e0cb0u: goto label_4e0cb0;
        case 0x4e0cb4u: goto label_4e0cb4;
        case 0x4e0cb8u: goto label_4e0cb8;
        case 0x4e0cbcu: goto label_4e0cbc;
        case 0x4e0cc0u: goto label_4e0cc0;
        case 0x4e0cc4u: goto label_4e0cc4;
        case 0x4e0cc8u: goto label_4e0cc8;
        case 0x4e0cccu: goto label_4e0ccc;
        case 0x4e0cd0u: goto label_4e0cd0;
        case 0x4e0cd4u: goto label_4e0cd4;
        case 0x4e0cd8u: goto label_4e0cd8;
        case 0x4e0cdcu: goto label_4e0cdc;
        case 0x4e0ce0u: goto label_4e0ce0;
        case 0x4e0ce4u: goto label_4e0ce4;
        case 0x4e0ce8u: goto label_4e0ce8;
        case 0x4e0cecu: goto label_4e0cec;
        case 0x4e0cf0u: goto label_4e0cf0;
        case 0x4e0cf4u: goto label_4e0cf4;
        case 0x4e0cf8u: goto label_4e0cf8;
        case 0x4e0cfcu: goto label_4e0cfc;
        case 0x4e0d00u: goto label_4e0d00;
        case 0x4e0d04u: goto label_4e0d04;
        case 0x4e0d08u: goto label_4e0d08;
        case 0x4e0d0cu: goto label_4e0d0c;
        case 0x4e0d10u: goto label_4e0d10;
        case 0x4e0d14u: goto label_4e0d14;
        case 0x4e0d18u: goto label_4e0d18;
        case 0x4e0d1cu: goto label_4e0d1c;
        case 0x4e0d20u: goto label_4e0d20;
        case 0x4e0d24u: goto label_4e0d24;
        case 0x4e0d28u: goto label_4e0d28;
        case 0x4e0d2cu: goto label_4e0d2c;
        case 0x4e0d30u: goto label_4e0d30;
        case 0x4e0d34u: goto label_4e0d34;
        case 0x4e0d38u: goto label_4e0d38;
        case 0x4e0d3cu: goto label_4e0d3c;
        case 0x4e0d40u: goto label_4e0d40;
        case 0x4e0d44u: goto label_4e0d44;
        case 0x4e0d48u: goto label_4e0d48;
        case 0x4e0d4cu: goto label_4e0d4c;
        case 0x4e0d50u: goto label_4e0d50;
        case 0x4e0d54u: goto label_4e0d54;
        case 0x4e0d58u: goto label_4e0d58;
        case 0x4e0d5cu: goto label_4e0d5c;
        case 0x4e0d60u: goto label_4e0d60;
        case 0x4e0d64u: goto label_4e0d64;
        case 0x4e0d68u: goto label_4e0d68;
        case 0x4e0d6cu: goto label_4e0d6c;
        case 0x4e0d70u: goto label_4e0d70;
        case 0x4e0d74u: goto label_4e0d74;
        case 0x4e0d78u: goto label_4e0d78;
        case 0x4e0d7cu: goto label_4e0d7c;
        case 0x4e0d80u: goto label_4e0d80;
        case 0x4e0d84u: goto label_4e0d84;
        case 0x4e0d88u: goto label_4e0d88;
        case 0x4e0d8cu: goto label_4e0d8c;
        case 0x4e0d90u: goto label_4e0d90;
        case 0x4e0d94u: goto label_4e0d94;
        case 0x4e0d98u: goto label_4e0d98;
        case 0x4e0d9cu: goto label_4e0d9c;
        case 0x4e0da0u: goto label_4e0da0;
        case 0x4e0da4u: goto label_4e0da4;
        case 0x4e0da8u: goto label_4e0da8;
        case 0x4e0dacu: goto label_4e0dac;
        case 0x4e0db0u: goto label_4e0db0;
        case 0x4e0db4u: goto label_4e0db4;
        case 0x4e0db8u: goto label_4e0db8;
        case 0x4e0dbcu: goto label_4e0dbc;
        case 0x4e0dc0u: goto label_4e0dc0;
        case 0x4e0dc4u: goto label_4e0dc4;
        case 0x4e0dc8u: goto label_4e0dc8;
        case 0x4e0dccu: goto label_4e0dcc;
        case 0x4e0dd0u: goto label_4e0dd0;
        case 0x4e0dd4u: goto label_4e0dd4;
        case 0x4e0dd8u: goto label_4e0dd8;
        case 0x4e0ddcu: goto label_4e0ddc;
        case 0x4e0de0u: goto label_4e0de0;
        case 0x4e0de4u: goto label_4e0de4;
        case 0x4e0de8u: goto label_4e0de8;
        case 0x4e0decu: goto label_4e0dec;
        case 0x4e0df0u: goto label_4e0df0;
        case 0x4e0df4u: goto label_4e0df4;
        case 0x4e0df8u: goto label_4e0df8;
        case 0x4e0dfcu: goto label_4e0dfc;
        case 0x4e0e00u: goto label_4e0e00;
        case 0x4e0e04u: goto label_4e0e04;
        case 0x4e0e08u: goto label_4e0e08;
        case 0x4e0e0cu: goto label_4e0e0c;
        case 0x4e0e10u: goto label_4e0e10;
        case 0x4e0e14u: goto label_4e0e14;
        case 0x4e0e18u: goto label_4e0e18;
        case 0x4e0e1cu: goto label_4e0e1c;
        case 0x4e0e20u: goto label_4e0e20;
        case 0x4e0e24u: goto label_4e0e24;
        case 0x4e0e28u: goto label_4e0e28;
        case 0x4e0e2cu: goto label_4e0e2c;
        case 0x4e0e30u: goto label_4e0e30;
        case 0x4e0e34u: goto label_4e0e34;
        case 0x4e0e38u: goto label_4e0e38;
        case 0x4e0e3cu: goto label_4e0e3c;
        case 0x4e0e40u: goto label_4e0e40;
        case 0x4e0e44u: goto label_4e0e44;
        case 0x4e0e48u: goto label_4e0e48;
        case 0x4e0e4cu: goto label_4e0e4c;
        case 0x4e0e50u: goto label_4e0e50;
        case 0x4e0e54u: goto label_4e0e54;
        case 0x4e0e58u: goto label_4e0e58;
        case 0x4e0e5cu: goto label_4e0e5c;
        case 0x4e0e60u: goto label_4e0e60;
        case 0x4e0e64u: goto label_4e0e64;
        case 0x4e0e68u: goto label_4e0e68;
        case 0x4e0e6cu: goto label_4e0e6c;
        case 0x4e0e70u: goto label_4e0e70;
        case 0x4e0e74u: goto label_4e0e74;
        case 0x4e0e78u: goto label_4e0e78;
        case 0x4e0e7cu: goto label_4e0e7c;
        case 0x4e0e80u: goto label_4e0e80;
        case 0x4e0e84u: goto label_4e0e84;
        case 0x4e0e88u: goto label_4e0e88;
        case 0x4e0e8cu: goto label_4e0e8c;
        case 0x4e0e90u: goto label_4e0e90;
        case 0x4e0e94u: goto label_4e0e94;
        case 0x4e0e98u: goto label_4e0e98;
        case 0x4e0e9cu: goto label_4e0e9c;
        case 0x4e0ea0u: goto label_4e0ea0;
        case 0x4e0ea4u: goto label_4e0ea4;
        case 0x4e0ea8u: goto label_4e0ea8;
        case 0x4e0eacu: goto label_4e0eac;
        case 0x4e0eb0u: goto label_4e0eb0;
        case 0x4e0eb4u: goto label_4e0eb4;
        case 0x4e0eb8u: goto label_4e0eb8;
        case 0x4e0ebcu: goto label_4e0ebc;
        case 0x4e0ec0u: goto label_4e0ec0;
        case 0x4e0ec4u: goto label_4e0ec4;
        case 0x4e0ec8u: goto label_4e0ec8;
        case 0x4e0eccu: goto label_4e0ecc;
        case 0x4e0ed0u: goto label_4e0ed0;
        case 0x4e0ed4u: goto label_4e0ed4;
        case 0x4e0ed8u: goto label_4e0ed8;
        case 0x4e0edcu: goto label_4e0edc;
        case 0x4e0ee0u: goto label_4e0ee0;
        case 0x4e0ee4u: goto label_4e0ee4;
        case 0x4e0ee8u: goto label_4e0ee8;
        case 0x4e0eecu: goto label_4e0eec;
        case 0x4e0ef0u: goto label_4e0ef0;
        case 0x4e0ef4u: goto label_4e0ef4;
        case 0x4e0ef8u: goto label_4e0ef8;
        case 0x4e0efcu: goto label_4e0efc;
        case 0x4e0f00u: goto label_4e0f00;
        case 0x4e0f04u: goto label_4e0f04;
        case 0x4e0f08u: goto label_4e0f08;
        case 0x4e0f0cu: goto label_4e0f0c;
        case 0x4e0f10u: goto label_4e0f10;
        case 0x4e0f14u: goto label_4e0f14;
        case 0x4e0f18u: goto label_4e0f18;
        case 0x4e0f1cu: goto label_4e0f1c;
        case 0x4e0f20u: goto label_4e0f20;
        case 0x4e0f24u: goto label_4e0f24;
        case 0x4e0f28u: goto label_4e0f28;
        case 0x4e0f2cu: goto label_4e0f2c;
        case 0x4e0f30u: goto label_4e0f30;
        case 0x4e0f34u: goto label_4e0f34;
        case 0x4e0f38u: goto label_4e0f38;
        case 0x4e0f3cu: goto label_4e0f3c;
        case 0x4e0f40u: goto label_4e0f40;
        case 0x4e0f44u: goto label_4e0f44;
        case 0x4e0f48u: goto label_4e0f48;
        case 0x4e0f4cu: goto label_4e0f4c;
        case 0x4e0f50u: goto label_4e0f50;
        case 0x4e0f54u: goto label_4e0f54;
        case 0x4e0f58u: goto label_4e0f58;
        case 0x4e0f5cu: goto label_4e0f5c;
        case 0x4e0f60u: goto label_4e0f60;
        case 0x4e0f64u: goto label_4e0f64;
        case 0x4e0f68u: goto label_4e0f68;
        case 0x4e0f6cu: goto label_4e0f6c;
        case 0x4e0f70u: goto label_4e0f70;
        case 0x4e0f74u: goto label_4e0f74;
        case 0x4e0f78u: goto label_4e0f78;
        case 0x4e0f7cu: goto label_4e0f7c;
        case 0x4e0f80u: goto label_4e0f80;
        case 0x4e0f84u: goto label_4e0f84;
        case 0x4e0f88u: goto label_4e0f88;
        case 0x4e0f8cu: goto label_4e0f8c;
        case 0x4e0f90u: goto label_4e0f90;
        case 0x4e0f94u: goto label_4e0f94;
        case 0x4e0f98u: goto label_4e0f98;
        case 0x4e0f9cu: goto label_4e0f9c;
        case 0x4e0fa0u: goto label_4e0fa0;
        case 0x4e0fa4u: goto label_4e0fa4;
        case 0x4e0fa8u: goto label_4e0fa8;
        case 0x4e0facu: goto label_4e0fac;
        case 0x4e0fb0u: goto label_4e0fb0;
        case 0x4e0fb4u: goto label_4e0fb4;
        case 0x4e0fb8u: goto label_4e0fb8;
        case 0x4e0fbcu: goto label_4e0fbc;
        case 0x4e0fc0u: goto label_4e0fc0;
        case 0x4e0fc4u: goto label_4e0fc4;
        case 0x4e0fc8u: goto label_4e0fc8;
        case 0x4e0fccu: goto label_4e0fcc;
        case 0x4e0fd0u: goto label_4e0fd0;
        case 0x4e0fd4u: goto label_4e0fd4;
        case 0x4e0fd8u: goto label_4e0fd8;
        case 0x4e0fdcu: goto label_4e0fdc;
        case 0x4e0fe0u: goto label_4e0fe0;
        case 0x4e0fe4u: goto label_4e0fe4;
        case 0x4e0fe8u: goto label_4e0fe8;
        case 0x4e0fecu: goto label_4e0fec;
        case 0x4e0ff0u: goto label_4e0ff0;
        case 0x4e0ff4u: goto label_4e0ff4;
        case 0x4e0ff8u: goto label_4e0ff8;
        case 0x4e0ffcu: goto label_4e0ffc;
        case 0x4e1000u: goto label_4e1000;
        case 0x4e1004u: goto label_4e1004;
        case 0x4e1008u: goto label_4e1008;
        case 0x4e100cu: goto label_4e100c;
        case 0x4e1010u: goto label_4e1010;
        case 0x4e1014u: goto label_4e1014;
        case 0x4e1018u: goto label_4e1018;
        case 0x4e101cu: goto label_4e101c;
        case 0x4e1020u: goto label_4e1020;
        case 0x4e1024u: goto label_4e1024;
        case 0x4e1028u: goto label_4e1028;
        case 0x4e102cu: goto label_4e102c;
        case 0x4e1030u: goto label_4e1030;
        case 0x4e1034u: goto label_4e1034;
        case 0x4e1038u: goto label_4e1038;
        case 0x4e103cu: goto label_4e103c;
        case 0x4e1040u: goto label_4e1040;
        case 0x4e1044u: goto label_4e1044;
        case 0x4e1048u: goto label_4e1048;
        case 0x4e104cu: goto label_4e104c;
        case 0x4e1050u: goto label_4e1050;
        case 0x4e1054u: goto label_4e1054;
        case 0x4e1058u: goto label_4e1058;
        case 0x4e105cu: goto label_4e105c;
        case 0x4e1060u: goto label_4e1060;
        case 0x4e1064u: goto label_4e1064;
        case 0x4e1068u: goto label_4e1068;
        case 0x4e106cu: goto label_4e106c;
        case 0x4e1070u: goto label_4e1070;
        case 0x4e1074u: goto label_4e1074;
        case 0x4e1078u: goto label_4e1078;
        case 0x4e107cu: goto label_4e107c;
        case 0x4e1080u: goto label_4e1080;
        case 0x4e1084u: goto label_4e1084;
        case 0x4e1088u: goto label_4e1088;
        case 0x4e108cu: goto label_4e108c;
        case 0x4e1090u: goto label_4e1090;
        case 0x4e1094u: goto label_4e1094;
        case 0x4e1098u: goto label_4e1098;
        case 0x4e109cu: goto label_4e109c;
        case 0x4e10a0u: goto label_4e10a0;
        case 0x4e10a4u: goto label_4e10a4;
        case 0x4e10a8u: goto label_4e10a8;
        case 0x4e10acu: goto label_4e10ac;
        case 0x4e10b0u: goto label_4e10b0;
        case 0x4e10b4u: goto label_4e10b4;
        case 0x4e10b8u: goto label_4e10b8;
        case 0x4e10bcu: goto label_4e10bc;
        case 0x4e10c0u: goto label_4e10c0;
        case 0x4e10c4u: goto label_4e10c4;
        case 0x4e10c8u: goto label_4e10c8;
        case 0x4e10ccu: goto label_4e10cc;
        case 0x4e10d0u: goto label_4e10d0;
        case 0x4e10d4u: goto label_4e10d4;
        case 0x4e10d8u: goto label_4e10d8;
        case 0x4e10dcu: goto label_4e10dc;
        case 0x4e10e0u: goto label_4e10e0;
        case 0x4e10e4u: goto label_4e10e4;
        case 0x4e10e8u: goto label_4e10e8;
        case 0x4e10ecu: goto label_4e10ec;
        case 0x4e10f0u: goto label_4e10f0;
        case 0x4e10f4u: goto label_4e10f4;
        case 0x4e10f8u: goto label_4e10f8;
        case 0x4e10fcu: goto label_4e10fc;
        case 0x4e1100u: goto label_4e1100;
        case 0x4e1104u: goto label_4e1104;
        case 0x4e1108u: goto label_4e1108;
        case 0x4e110cu: goto label_4e110c;
        case 0x4e1110u: goto label_4e1110;
        case 0x4e1114u: goto label_4e1114;
        case 0x4e1118u: goto label_4e1118;
        case 0x4e111cu: goto label_4e111c;
        case 0x4e1120u: goto label_4e1120;
        case 0x4e1124u: goto label_4e1124;
        case 0x4e1128u: goto label_4e1128;
        case 0x4e112cu: goto label_4e112c;
        case 0x4e1130u: goto label_4e1130;
        case 0x4e1134u: goto label_4e1134;
        case 0x4e1138u: goto label_4e1138;
        case 0x4e113cu: goto label_4e113c;
        case 0x4e1140u: goto label_4e1140;
        case 0x4e1144u: goto label_4e1144;
        case 0x4e1148u: goto label_4e1148;
        case 0x4e114cu: goto label_4e114c;
        case 0x4e1150u: goto label_4e1150;
        case 0x4e1154u: goto label_4e1154;
        case 0x4e1158u: goto label_4e1158;
        case 0x4e115cu: goto label_4e115c;
        default: break;
    }

    ctx->pc = 0x4e0c20u;

label_4e0c20:
    // 0x4e0c20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e0c24:
    // 0x4e0c24: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4e0c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e0c28:
    // 0x4e0c28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e0c2c:
    // 0x4e0c2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e0c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e0c30:
    // 0x4e0c30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e0c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e0c34:
    // 0x4e0c34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e0c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e0c38:
    // 0x4e0c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e0c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e0c3c:
    // 0x4e0c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e0c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0c40:
    // 0x4e0c40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e0c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e0c44:
    // 0x4e0c44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4e0c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e0c48:
    // 0x4e0c48: 0xc10ca68  jal         func_4329A0
label_4e0c4c:
    if (ctx->pc == 0x4E0C4Cu) {
        ctx->pc = 0x4E0C4Cu;
            // 0x4e0c4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4E0C50u;
        goto label_4e0c50;
    }
    ctx->pc = 0x4E0C48u;
    SET_GPR_U32(ctx, 31, 0x4E0C50u);
    ctx->pc = 0x4E0C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0C48u;
            // 0x4e0c4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0C50u; }
        if (ctx->pc != 0x4E0C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0C50u; }
        if (ctx->pc != 0x4E0C50u) { return; }
    }
    ctx->pc = 0x4E0C50u;
label_4e0c50:
    // 0x4e0c50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e0c54:
    // 0x4e0c54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e0c58:
    // 0x4e0c58: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4e0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4e0c5c:
    // 0x4e0c5c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4e0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4e0c60:
    // 0x4e0c60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e0c64:
    // 0x4e0c64: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4e0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4e0c68:
    // 0x4e0c68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e0c68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4e0c6c:
    // 0x4e0c6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e0c70:
    // 0x4e0c70: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4e0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4e0c74:
    // 0x4e0c74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e0c78:
    // 0x4e0c78: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4e0c78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4e0c7c:
    // 0x4e0c7c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4e0c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e0c80:
    // 0x4e0c80: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4e0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4e0c84:
    // 0x4e0c84: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4e0c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4e0c88:
    // 0x4e0c88: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4e0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4e0c8c:
    // 0x4e0c8c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4e0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4e0c90:
    // 0x4e0c90: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4e0c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4e0c94:
    // 0x4e0c94: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e0c98:
    // 0x4e0c98: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4e0c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4e0c9c:
    // 0x4e0c9c: 0xc0582cc  jal         func_160B30
label_4e0ca0:
    if (ctx->pc == 0x4E0CA0u) {
        ctx->pc = 0x4E0CA0u;
            // 0x4e0ca0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4E0CA4u;
        goto label_4e0ca4;
    }
    ctx->pc = 0x4E0C9Cu;
    SET_GPR_U32(ctx, 31, 0x4E0CA4u);
    ctx->pc = 0x4E0CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0C9Cu;
            // 0x4e0ca0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0CA4u; }
        if (ctx->pc != 0x4E0CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0CA4u; }
        if (ctx->pc != 0x4E0CA4u) { return; }
    }
    ctx->pc = 0x4E0CA4u;
label_4e0ca4:
    // 0x4e0ca4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0ca8:
    // 0x4e0ca8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4e0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4e0cac:
    // 0x4e0cac: 0x24633398  addiu       $v1, $v1, 0x3398
    ctx->pc = 0x4e0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13208));
label_4e0cb0:
    // 0x4e0cb0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4e0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4e0cb4:
    // 0x4e0cb4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4e0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4e0cb8:
    // 0x4e0cb8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e0cbc:
    // 0x4e0cbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0cc0:
    // 0x4e0cc0: 0xac44aa88  sw          $a0, -0x5578($v0)
    ctx->pc = 0x4e0cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945416), GPR_U32(ctx, 4));
label_4e0cc4:
    // 0x4e0cc4: 0x246333b0  addiu       $v1, $v1, 0x33B0
    ctx->pc = 0x4e0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
label_4e0cc8:
    // 0x4e0cc8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e0ccc:
    // 0x4e0ccc: 0x244233e8  addiu       $v0, $v0, 0x33E8
    ctx->pc = 0x4e0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13288));
label_4e0cd0:
    // 0x4e0cd0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e0cd4:
    // 0x4e0cd4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4e0cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4e0cd8:
    // 0x4e0cd8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4e0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4e0cdc:
    // 0x4e0cdc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4e0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4e0ce0:
    // 0x4e0ce0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4e0ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4e0ce4:
    // 0x4e0ce4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4e0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4e0ce8:
    // 0x4e0ce8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4e0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4e0cec:
    // 0x4e0cec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4e0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4e0cf0:
    // 0x4e0cf0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4e0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4e0cf4:
    // 0x4e0cf4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4e0cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4e0cf8:
    // 0x4e0cf8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4e0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4e0cfc:
    // 0x4e0cfc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4e0cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4e0d00:
    // 0x4e0d00: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4e0d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4e0d04:
    // 0x4e0d04: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4e0d08:
    if (ctx->pc == 0x4E0D08u) {
        ctx->pc = 0x4E0D0Cu;
        goto label_4e0d0c;
    }
    ctx->pc = 0x4E0D04u;
    {
        const bool branch_taken_0x4e0d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0d04) {
            ctx->pc = 0x4E0D98u;
            goto label_4e0d98;
        }
    }
    ctx->pc = 0x4E0D0Cu;
label_4e0d0c:
    // 0x4e0d0c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4e0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4e0d10:
    // 0x4e0d10: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4e0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4e0d14:
    // 0x4e0d14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4e0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4e0d18:
    // 0x4e0d18: 0xc040138  jal         func_1004E0
label_4e0d1c:
    if (ctx->pc == 0x4E0D1Cu) {
        ctx->pc = 0x4E0D1Cu;
            // 0x4e0d1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4E0D20u;
        goto label_4e0d20;
    }
    ctx->pc = 0x4E0D18u;
    SET_GPR_U32(ctx, 31, 0x4E0D20u);
    ctx->pc = 0x4E0D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0D18u;
            // 0x4e0d1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D20u; }
        if (ctx->pc != 0x4E0D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D20u; }
        if (ctx->pc != 0x4E0D20u) { return; }
    }
    ctx->pc = 0x4E0D20u;
label_4e0d20:
    // 0x4e0d20: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e0d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e0d24:
    // 0x4e0d24: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4e0d24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4e0d28:
    // 0x4e0d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e0d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0d2c:
    // 0x4e0d2c: 0x24a50dc0  addiu       $a1, $a1, 0xDC0
    ctx->pc = 0x4e0d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3520));
label_4e0d30:
    // 0x4e0d30: 0x24c602f0  addiu       $a2, $a2, 0x2F0
    ctx->pc = 0x4e0d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
label_4e0d34:
    // 0x4e0d34: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4e0d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4e0d38:
    // 0x4e0d38: 0xc040840  jal         func_102100
label_4e0d3c:
    if (ctx->pc == 0x4E0D3Cu) {
        ctx->pc = 0x4E0D3Cu;
            // 0x4e0d3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0D40u;
        goto label_4e0d40;
    }
    ctx->pc = 0x4E0D38u;
    SET_GPR_U32(ctx, 31, 0x4E0D40u);
    ctx->pc = 0x4E0D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0D38u;
            // 0x4e0d3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D40u; }
        if (ctx->pc != 0x4E0D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D40u; }
        if (ctx->pc != 0x4E0D40u) { return; }
    }
    ctx->pc = 0x4E0D40u;
label_4e0d40:
    // 0x4e0d40: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4e0d40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4e0d44:
    // 0x4e0d44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e0d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0d48:
    // 0x4e0d48: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4e0d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4e0d4c:
    // 0x4e0d4c: 0xc0788fc  jal         func_1E23F0
label_4e0d50:
    if (ctx->pc == 0x4E0D50u) {
        ctx->pc = 0x4E0D50u;
            // 0x4e0d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0D54u;
        goto label_4e0d54;
    }
    ctx->pc = 0x4E0D4Cu;
    SET_GPR_U32(ctx, 31, 0x4E0D54u);
    ctx->pc = 0x4E0D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0D4Cu;
            // 0x4e0d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D54u; }
        if (ctx->pc != 0x4E0D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D54u; }
        if (ctx->pc != 0x4E0D54u) { return; }
    }
    ctx->pc = 0x4E0D54u;
label_4e0d54:
    // 0x4e0d54: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4e0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4e0d58:
    // 0x4e0d58: 0xc0788fc  jal         func_1E23F0
label_4e0d5c:
    if (ctx->pc == 0x4E0D5Cu) {
        ctx->pc = 0x4E0D5Cu;
            // 0x4e0d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0D60u;
        goto label_4e0d60;
    }
    ctx->pc = 0x4E0D58u;
    SET_GPR_U32(ctx, 31, 0x4E0D60u);
    ctx->pc = 0x4E0D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0D58u;
            // 0x4e0d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D60u; }
        if (ctx->pc != 0x4E0D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D60u; }
        if (ctx->pc != 0x4E0D60u) { return; }
    }
    ctx->pc = 0x4E0D60u;
label_4e0d60:
    // 0x4e0d60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e0d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e0d64:
    // 0x4e0d64: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4e0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4e0d68:
    // 0x4e0d68: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4e0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4e0d6c:
    // 0x4e0d6c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4e0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4e0d70:
    // 0x4e0d70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e0d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e0d74:
    // 0x4e0d74: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4e0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4e0d78:
    // 0x4e0d78: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4e0d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4e0d7c:
    // 0x4e0d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e0d80:
    // 0x4e0d80: 0xc0a997c  jal         func_2A65F0
label_4e0d84:
    if (ctx->pc == 0x4E0D84u) {
        ctx->pc = 0x4E0D84u;
            // 0x4e0d84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4E0D88u;
        goto label_4e0d88;
    }
    ctx->pc = 0x4E0D80u;
    SET_GPR_U32(ctx, 31, 0x4E0D88u);
    ctx->pc = 0x4E0D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0D80u;
            // 0x4e0d84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D88u; }
        if (ctx->pc != 0x4E0D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0D88u; }
        if (ctx->pc != 0x4E0D88u) { return; }
    }
    ctx->pc = 0x4E0D88u;
label_4e0d88:
    // 0x4e0d88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4e0d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4e0d8c:
    // 0x4e0d8c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4e0d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4e0d90:
    // 0x4e0d90: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4e0d94:
    if (ctx->pc == 0x4E0D94u) {
        ctx->pc = 0x4E0D94u;
            // 0x4e0d94: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4E0D98u;
        goto label_4e0d98;
    }
    ctx->pc = 0x4E0D90u;
    {
        const bool branch_taken_0x4e0d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0D90u;
            // 0x4e0d94: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0d90) {
            ctx->pc = 0x4E0D64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e0d64;
        }
    }
    ctx->pc = 0x4E0D98u;
label_4e0d98:
    // 0x4e0d98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e0d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e0d9c:
    // 0x4e0d9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e0d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e0da0:
    // 0x4e0da0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e0da0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e0da4:
    // 0x4e0da4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e0da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0da8:
    // 0x4e0da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e0da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0dac:
    // 0x4e0dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0db0:
    // 0x4e0db0: 0x3e00008  jr          $ra
label_4e0db4:
    if (ctx->pc == 0x4E0DB4u) {
        ctx->pc = 0x4E0DB4u;
            // 0x4e0db4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E0DB8u;
        goto label_4e0db8;
    }
    ctx->pc = 0x4E0DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0DB0u;
            // 0x4e0db4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0DB8u;
label_4e0db8:
    // 0x4e0db8: 0x0  nop
    ctx->pc = 0x4e0db8u;
    // NOP
label_4e0dbc:
    // 0x4e0dbc: 0x0  nop
    ctx->pc = 0x4e0dbcu;
    // NOP
label_4e0dc0:
    // 0x4e0dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e0dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e0dc4:
    // 0x4e0dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e0dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e0dc8:
    // 0x4e0dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e0dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0dcc:
    // 0x4e0dcc: 0xc12e6bc  jal         func_4B9AF0
label_4e0dd0:
    if (ctx->pc == 0x4E0DD0u) {
        ctx->pc = 0x4E0DD0u;
            // 0x4e0dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0DD4u;
        goto label_4e0dd4;
    }
    ctx->pc = 0x4E0DCCu;
    SET_GPR_U32(ctx, 31, 0x4E0DD4u);
    ctx->pc = 0x4E0DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0DCCu;
            // 0x4e0dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0DD4u; }
        if (ctx->pc != 0x4E0DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0DD4u; }
        if (ctx->pc != 0x4E0DD4u) { return; }
    }
    ctx->pc = 0x4E0DD4u;
label_4e0dd4:
    // 0x4e0dd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e0dd8:
    // 0x4e0dd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0ddc:
    // 0x4e0ddc: 0x24423450  addiu       $v0, $v0, 0x3450
    ctx->pc = 0x4e0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13392));
label_4e0de0:
    // 0x4e0de0: 0x24633490  addiu       $v1, $v1, 0x3490
    ctx->pc = 0x4e0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13456));
label_4e0de4:
    // 0x4e0de4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e0de8:
    // 0x4e0de8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4e0de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4e0dec:
    // 0x4e0dec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e0decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0df0:
    // 0x4e0df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e0df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0df4:
    // 0x4e0df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0df8:
    // 0x4e0df8: 0x3e00008  jr          $ra
label_4e0dfc:
    if (ctx->pc == 0x4E0DFCu) {
        ctx->pc = 0x4E0DFCu;
            // 0x4e0dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E0E00u;
        goto label_4e0e00;
    }
    ctx->pc = 0x4E0DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0DF8u;
            // 0x4e0dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0E00u;
label_4e0e00:
    // 0x4e0e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e0e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e0e04:
    // 0x4e0e04: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e0e08:
    // 0x4e0e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e0e0c:
    // 0x4e0e0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e0e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e0e10:
    // 0x4e0e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e0e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0e14:
    // 0x4e0e14: 0x8c42aa88  lw          $v0, -0x5578($v0)
    ctx->pc = 0x4e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_4e0e18:
    // 0x4e0e18: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4e0e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4e0e1c:
    // 0x4e0e1c: 0xc12e608  jal         func_4B9820
label_4e0e20:
    if (ctx->pc == 0x4E0E20u) {
        ctx->pc = 0x4E0E20u;
            // 0x4e0e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0E24u;
        goto label_4e0e24;
    }
    ctx->pc = 0x4E0E1Cu;
    SET_GPR_U32(ctx, 31, 0x4E0E24u);
    ctx->pc = 0x4E0E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0E1Cu;
            // 0x4e0e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0E24u; }
        if (ctx->pc != 0x4E0E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0E24u; }
        if (ctx->pc != 0x4E0E24u) { return; }
    }
    ctx->pc = 0x4E0E24u;
label_4e0e24:
    // 0x4e0e24: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4e0e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4e0e28:
    // 0x4e0e28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e0e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0e2c:
    // 0x4e0e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0e30:
    // 0x4e0e30: 0x3e00008  jr          $ra
label_4e0e34:
    if (ctx->pc == 0x4E0E34u) {
        ctx->pc = 0x4E0E34u;
            // 0x4e0e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E0E38u;
        goto label_4e0e38;
    }
    ctx->pc = 0x4E0E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0E30u;
            // 0x4e0e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0E38u;
label_4e0e38:
    // 0x4e0e38: 0x0  nop
    ctx->pc = 0x4e0e38u;
    // NOP
label_4e0e3c:
    // 0x4e0e3c: 0x0  nop
    ctx->pc = 0x4e0e3cu;
    // NOP
label_4e0e40:
    // 0x4e0e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e0e44:
    // 0x4e0e44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4e0e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4e0e48:
    // 0x4e0e48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e0e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e0e4c:
    // 0x4e0e4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e0e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e0e50:
    // 0x4e0e50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e0e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e0e54:
    // 0x4e0e54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e0e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e0e58:
    // 0x4e0e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e0e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e0e5c:
    // 0x4e0e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e0e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0e60:
    // 0x4e0e60: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4e0e60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e0e64:
    // 0x4e0e64: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4e0e68:
    if (ctx->pc == 0x4E0E68u) {
        ctx->pc = 0x4E0E68u;
            // 0x4e0e68: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0E6Cu;
        goto label_4e0e6c;
    }
    ctx->pc = 0x4E0E64u;
    {
        const bool branch_taken_0x4e0e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0E64u;
            // 0x4e0e68: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0e64) {
            ctx->pc = 0x4E0EA8u;
            goto label_4e0ea8;
        }
    }
    ctx->pc = 0x4E0E6Cu;
label_4e0e6c:
    // 0x4e0e6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e0e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e0e70:
    // 0x4e0e70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e0e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e0e74:
    // 0x4e0e74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e0e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e0e78:
    // 0x4e0e78: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4e0e7c:
    // 0x4e0e7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4e0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4e0e80:
    // 0x4e0e80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e0e84:
    // 0x4e0e84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e0e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e0e88:
    // 0x4e0e88: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e0e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e0e8c:
    // 0x4e0e8c: 0x320f809  jalr        $t9
label_4e0e90:
    if (ctx->pc == 0x4E0E90u) {
        ctx->pc = 0x4E0E94u;
        goto label_4e0e94;
    }
    ctx->pc = 0x4E0E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E0E94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E0E94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E0E94u; }
            if (ctx->pc != 0x4E0E94u) { return; }
        }
        }
    }
    ctx->pc = 0x4E0E94u;
label_4e0e94:
    // 0x4e0e94: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4e0e94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4e0e98:
    // 0x4e0e98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4e0e98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4e0e9c:
    // 0x4e0e9c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4e0e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4e0ea0:
    // 0x4e0ea0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4e0ea4:
    if (ctx->pc == 0x4E0EA4u) {
        ctx->pc = 0x4E0EA4u;
            // 0x4e0ea4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4E0EA8u;
        goto label_4e0ea8;
    }
    ctx->pc = 0x4E0EA0u;
    {
        const bool branch_taken_0x4e0ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0EA0u;
            // 0x4e0ea4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0ea0) {
            ctx->pc = 0x4E0E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e0e78;
        }
    }
    ctx->pc = 0x4E0EA8u;
label_4e0ea8:
    // 0x4e0ea8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e0ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e0eac:
    // 0x4e0eac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4e0eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4e0eb0:
    // 0x4e0eb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e0eb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e0eb4:
    // 0x4e0eb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e0eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e0eb8:
    // 0x4e0eb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e0eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0ebc:
    // 0x4e0ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e0ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0ec0:
    // 0x4e0ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0ec4:
    // 0x4e0ec4: 0x3e00008  jr          $ra
label_4e0ec8:
    if (ctx->pc == 0x4E0EC8u) {
        ctx->pc = 0x4E0EC8u;
            // 0x4e0ec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E0ECCu;
        goto label_4e0ecc;
    }
    ctx->pc = 0x4E0EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0EC4u;
            // 0x4e0ec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0ECCu;
label_4e0ecc:
    // 0x4e0ecc: 0x0  nop
    ctx->pc = 0x4e0eccu;
    // NOP
label_4e0ed0:
    // 0x4e0ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e0ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e0ed4:
    // 0x4e0ed4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e0ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e0ed8:
    // 0x4e0ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e0ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e0edc:
    // 0x4e0edc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4e0edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4e0ee0:
    // 0x4e0ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e0ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0ee4:
    // 0x4e0ee4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4e0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4e0ee8:
    // 0x4e0ee8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e0ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e0eec:
    // 0x4e0eec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4e0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4e0ef0:
    // 0x4e0ef0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e0ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e0ef4:
    // 0x4e0ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e0ef8:
    // 0x4e0ef8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4e0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4e0efc:
    // 0x4e0efc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4e0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e0f00:
    // 0x4e0f00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4e0f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4e0f04:
    // 0x4e0f04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4e0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0f08:
    // 0x4e0f08: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4e0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4e0f0c:
    // 0x4e0f0c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4e0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4e0f10:
    // 0x4e0f10: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4e0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4e0f14:
    // 0x4e0f14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e0f18:
    // 0x4e0f18: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4e0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4e0f1c:
    // 0x4e0f1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4e0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e0f20:
    // 0x4e0f20: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4e0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4e0f24:
    // 0x4e0f24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e0f28:
    // 0x4e0f28: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4e0f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e0f2c:
    // 0x4e0f2c: 0xc0a997c  jal         func_2A65F0
label_4e0f30:
    if (ctx->pc == 0x4E0F30u) {
        ctx->pc = 0x4E0F30u;
            // 0x4e0f30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4E0F34u;
        goto label_4e0f34;
    }
    ctx->pc = 0x4E0F2Cu;
    SET_GPR_U32(ctx, 31, 0x4E0F34u);
    ctx->pc = 0x4E0F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0F2Cu;
            // 0x4e0f30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0F34u; }
        if (ctx->pc != 0x4E0F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0F34u; }
        if (ctx->pc != 0x4E0F34u) { return; }
    }
    ctx->pc = 0x4E0F34u;
label_4e0f34:
    // 0x4e0f34: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4e0f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4e0f38:
    // 0x4e0f38: 0xc0d879c  jal         func_361E70
label_4e0f3c:
    if (ctx->pc == 0x4E0F3Cu) {
        ctx->pc = 0x4E0F3Cu;
            // 0x4e0f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0F40u;
        goto label_4e0f40;
    }
    ctx->pc = 0x4E0F38u;
    SET_GPR_U32(ctx, 31, 0x4E0F40u);
    ctx->pc = 0x4E0F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0F38u;
            // 0x4e0f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0F40u; }
        if (ctx->pc != 0x4E0F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0F40u; }
        if (ctx->pc != 0x4E0F40u) { return; }
    }
    ctx->pc = 0x4E0F40u;
label_4e0f40:
    // 0x4e0f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e0f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0f44:
    // 0x4e0f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0f48:
    // 0x4e0f48: 0x3e00008  jr          $ra
label_4e0f4c:
    if (ctx->pc == 0x4E0F4Cu) {
        ctx->pc = 0x4E0F4Cu;
            // 0x4e0f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E0F50u;
        goto label_4e0f50;
    }
    ctx->pc = 0x4E0F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0F48u;
            // 0x4e0f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0F50u;
label_4e0f50:
    // 0x4e0f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e0f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e0f54:
    // 0x4e0f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e0f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e0f58:
    // 0x4e0f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e0f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0f5c:
    // 0x4e0f5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4e0f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4e0f60:
    // 0x4e0f60: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4e0f64:
    if (ctx->pc == 0x4E0F64u) {
        ctx->pc = 0x4E0F64u;
            // 0x4e0f64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0F68u;
        goto label_4e0f68;
    }
    ctx->pc = 0x4E0F60u;
    {
        const bool branch_taken_0x4e0f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0F60u;
            // 0x4e0f64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0f60) {
            ctx->pc = 0x4E1080u;
            goto label_4e1080;
        }
    }
    ctx->pc = 0x4E0F68u;
label_4e0f68:
    // 0x4e0f68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0f6c:
    // 0x4e0f6c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4e0f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4e0f70:
    // 0x4e0f70: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e0f74:
    // 0x4e0f74: 0xc075128  jal         func_1D44A0
label_4e0f78:
    if (ctx->pc == 0x4E0F78u) {
        ctx->pc = 0x4E0F78u;
            // 0x4e0f78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4E0F7Cu;
        goto label_4e0f7c;
    }
    ctx->pc = 0x4E0F74u;
    SET_GPR_U32(ctx, 31, 0x4E0F7Cu);
    ctx->pc = 0x4E0F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0F74u;
            // 0x4e0f78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0F7Cu; }
        if (ctx->pc != 0x4E0F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0F7Cu; }
        if (ctx->pc != 0x4E0F7Cu) { return; }
    }
    ctx->pc = 0x4E0F7Cu;
label_4e0f7c:
    // 0x4e0f7c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4e0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e0f80:
    // 0x4e0f80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0f84:
    // 0x4e0f84: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4e0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4e0f88:
    // 0x4e0f88: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4e0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4e0f8c:
    // 0x4e0f8c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e0f8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e0f90:
    // 0x4e0f90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e0f94:
    if (ctx->pc == 0x4E0F94u) {
        ctx->pc = 0x4E0F94u;
            // 0x4e0f94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4E0F98u;
        goto label_4e0f98;
    }
    ctx->pc = 0x4E0F90u;
    {
        const bool branch_taken_0x4e0f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0F90u;
            // 0x4e0f94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0f90) {
            ctx->pc = 0x4E0FA0u;
            goto label_4e0fa0;
        }
    }
    ctx->pc = 0x4E0F98u;
label_4e0f98:
    // 0x4e0f98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0f9c:
    // 0x4e0f9c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4e0f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4e0fa0:
    // 0x4e0fa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e0fa4:
    // 0x4e0fa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0fa8:
    // 0x4e0fa8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4e0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4e0fac:
    // 0x4e0fac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4e0facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4e0fb0:
    // 0x4e0fb0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e0fb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e0fb4:
    // 0x4e0fb4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e0fb8:
    if (ctx->pc == 0x4E0FB8u) {
        ctx->pc = 0x4E0FB8u;
            // 0x4e0fb8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E0FBCu;
        goto label_4e0fbc;
    }
    ctx->pc = 0x4E0FB4u;
    {
        const bool branch_taken_0x4e0fb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0fb4) {
            ctx->pc = 0x4E0FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0FB4u;
            // 0x4e0fb8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E0FC8u;
            goto label_4e0fc8;
        }
    }
    ctx->pc = 0x4E0FBCu;
label_4e0fbc:
    // 0x4e0fbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0fc0:
    // 0x4e0fc0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4e0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4e0fc4:
    // 0x4e0fc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e0fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e0fc8:
    // 0x4e0fc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0fcc:
    // 0x4e0fcc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4e0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4e0fd0:
    // 0x4e0fd0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4e0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4e0fd4:
    // 0x4e0fd4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e0fd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e0fd8:
    // 0x4e0fd8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e0fdc:
    if (ctx->pc == 0x4E0FDCu) {
        ctx->pc = 0x4E0FDCu;
            // 0x4e0fdc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E0FE0u;
        goto label_4e0fe0;
    }
    ctx->pc = 0x4E0FD8u;
    {
        const bool branch_taken_0x4e0fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0fd8) {
            ctx->pc = 0x4E0FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0FD8u;
            // 0x4e0fdc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E0FECu;
            goto label_4e0fec;
        }
    }
    ctx->pc = 0x4E0FE0u;
label_4e0fe0:
    // 0x4e0fe0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e0fe4:
    // 0x4e0fe4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4e0fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4e0fe8:
    // 0x4e0fe8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e0fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e0fec:
    // 0x4e0fec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e0fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e0ff0:
    // 0x4e0ff0: 0x320f809  jalr        $t9
label_4e0ff4:
    if (ctx->pc == 0x4E0FF4u) {
        ctx->pc = 0x4E0FF4u;
            // 0x4e0ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0FF8u;
        goto label_4e0ff8;
    }
    ctx->pc = 0x4E0FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E0FF8u);
        ctx->pc = 0x4E0FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0FF0u;
            // 0x4e0ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E0FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E0FF8u; }
            if (ctx->pc != 0x4E0FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E0FF8u;
label_4e0ff8:
    // 0x4e0ff8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4e0ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e0ffc:
    // 0x4e0ffc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1000:
    // 0x4e1000: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4e1000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4e1004:
    // 0x4e1004: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e1004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e1008:
    // 0x4e1008: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4e1008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e100c:
    // 0x4e100c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e100cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e1010:
    // 0x4e1010: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e1014:
    if (ctx->pc == 0x4E1014u) {
        ctx->pc = 0x4E1014u;
            // 0x4e1014: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4E1018u;
        goto label_4e1018;
    }
    ctx->pc = 0x4E1010u;
    {
        const bool branch_taken_0x4e1010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1010) {
            ctx->pc = 0x4E1014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1010u;
            // 0x4e1014: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1024u;
            goto label_4e1024;
        }
    }
    ctx->pc = 0x4E1018u;
label_4e1018:
    // 0x4e1018: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e101c:
    // 0x4e101c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4e101cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4e1020:
    // 0x4e1020: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4e1020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e1024:
    // 0x4e1024: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1028:
    // 0x4e1028: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4e1028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4e102c:
    // 0x4e102c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e1030:
    // 0x4e1030: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4e1030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e1034:
    // 0x4e1034: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e1034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e1038:
    // 0x4e1038: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e103c:
    if (ctx->pc == 0x4E103Cu) {
        ctx->pc = 0x4E1040u;
        goto label_4e1040;
    }
    ctx->pc = 0x4E1038u;
    {
        const bool branch_taken_0x4e1038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1038) {
            ctx->pc = 0x4E1048u;
            goto label_4e1048;
        }
    }
    ctx->pc = 0x4E1040u;
label_4e1040:
    // 0x4e1040: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1044:
    // 0x4e1044: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4e1044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4e1048:
    // 0x4e1048: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e104c:
    // 0x4e104c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4e104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4e1050:
    // 0x4e1050: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e1050u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e1054:
    // 0x4e1054: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e1058:
    if (ctx->pc == 0x4E1058u) {
        ctx->pc = 0x4E105Cu;
        goto label_4e105c;
    }
    ctx->pc = 0x4E1054u;
    {
        const bool branch_taken_0x4e1054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1054) {
            ctx->pc = 0x4E1064u;
            goto label_4e1064;
        }
    }
    ctx->pc = 0x4E105Cu;
label_4e105c:
    // 0x4e105c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1060:
    // 0x4e1060: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4e1060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4e1064:
    // 0x4e1064: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1068:
    // 0x4e1068: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4e1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4e106c:
    // 0x4e106c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e106cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e1070:
    // 0x4e1070: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e1074:
    if (ctx->pc == 0x4E1074u) {
        ctx->pc = 0x4E1074u;
            // 0x4e1074: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4E1078u;
        goto label_4e1078;
    }
    ctx->pc = 0x4E1070u;
    {
        const bool branch_taken_0x4e1070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1070) {
            ctx->pc = 0x4E1074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1070u;
            // 0x4e1074: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1084u;
            goto label_4e1084;
        }
    }
    ctx->pc = 0x4E1078u;
label_4e1078:
    // 0x4e1078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e107c:
    // 0x4e107c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4e107cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4e1080:
    // 0x4e1080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e1080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1084:
    // 0x4e1084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1088:
    // 0x4e1088: 0x3e00008  jr          $ra
label_4e108c:
    if (ctx->pc == 0x4E108Cu) {
        ctx->pc = 0x4E108Cu;
            // 0x4e108c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E1090u;
        goto label_4e1090;
    }
    ctx->pc = 0x4E1088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1088u;
            // 0x4e108c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1090u;
label_4e1090:
    // 0x4e1090: 0x81380bc  j           func_4E02F0
label_4e1094:
    if (ctx->pc == 0x4E1094u) {
        ctx->pc = 0x4E1094u;
            // 0x4e1094: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4E1098u;
        goto label_4e1098;
    }
    ctx->pc = 0x4E1090u;
    ctx->pc = 0x4E1094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1090u;
            // 0x4e1094: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E02F0u;
    {
        auto targetFn = runtime->lookupFunction(0x4E02F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E1098u;
label_4e1098:
    // 0x4e1098: 0x0  nop
    ctx->pc = 0x4e1098u;
    // NOP
label_4e109c:
    // 0x4e109c: 0x0  nop
    ctx->pc = 0x4e109cu;
    // NOP
label_4e10a0:
    // 0x4e10a0: 0x813829c  j           func_4E0A70
label_4e10a4:
    if (ctx->pc == 0x4E10A4u) {
        ctx->pc = 0x4E10A4u;
            // 0x4e10a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E10A8u;
        goto label_4e10a8;
    }
    ctx->pc = 0x4E10A0u;
    ctx->pc = 0x4E10A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E10A0u;
            // 0x4e10a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0A70u;
    {
        auto targetFn = runtime->lookupFunction(0x4E0A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E10A8u;
label_4e10a8:
    // 0x4e10a8: 0x0  nop
    ctx->pc = 0x4e10a8u;
    // NOP
label_4e10ac:
    // 0x4e10ac: 0x0  nop
    ctx->pc = 0x4e10acu;
    // NOP
label_4e10b0:
    // 0x4e10b0: 0x8138064  j           func_4E0190
label_4e10b4:
    if (ctx->pc == 0x4E10B4u) {
        ctx->pc = 0x4E10B4u;
            // 0x4e10b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E10B8u;
        goto label_4e10b8;
    }
    ctx->pc = 0x4E10B0u;
    ctx->pc = 0x4E10B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E10B0u;
            // 0x4e10b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0190u;
    if (runtime->hasFunction(0x4E0190u)) {
        auto targetFn = runtime->lookupFunction(0x4E0190u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004E0190_0x4e0190(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4E10B8u;
label_4e10b8:
    // 0x4e10b8: 0x0  nop
    ctx->pc = 0x4e10b8u;
    // NOP
label_4e10bc:
    // 0x4e10bc: 0x0  nop
    ctx->pc = 0x4e10bcu;
    // NOP
label_4e10c0:
    // 0x4e10c0: 0x813801c  j           func_4E0070
label_4e10c4:
    if (ctx->pc == 0x4E10C4u) {
        ctx->pc = 0x4E10C4u;
            // 0x4e10c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E10C8u;
        goto label_4e10c8;
    }
    ctx->pc = 0x4E10C0u;
    ctx->pc = 0x4E10C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E10C0u;
            // 0x4e10c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0070u;
    {
        auto targetFn = runtime->lookupFunction(0x4E0070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E10C8u;
label_4e10c8:
    // 0x4e10c8: 0x0  nop
    ctx->pc = 0x4e10c8u;
    // NOP
label_4e10cc:
    // 0x4e10cc: 0x0  nop
    ctx->pc = 0x4e10ccu;
    // NOP
label_4e10d0:
    // 0x4e10d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e10d4:
    // 0x4e10d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e10d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e10d8:
    // 0x4e10d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e10d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e10dc:
    // 0x4e10dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e10dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e10e0:
    // 0x4e10e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e10e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e10e4:
    // 0x4e10e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4e10e8:
    if (ctx->pc == 0x4E10E8u) {
        ctx->pc = 0x4E10E8u;
            // 0x4e10e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E10ECu;
        goto label_4e10ec;
    }
    ctx->pc = 0x4E10E4u;
    {
        const bool branch_taken_0x4e10e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E10E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E10E4u;
            // 0x4e10e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e10e4) {
            ctx->pc = 0x4E1140u;
            goto label_4e1140;
        }
    }
    ctx->pc = 0x4E10ECu;
label_4e10ec:
    // 0x4e10ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e10f0:
    // 0x4e10f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e10f4:
    // 0x4e10f4: 0x246334f0  addiu       $v1, $v1, 0x34F0
    ctx->pc = 0x4e10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13552));
label_4e10f8:
    // 0x4e10f8: 0x24423528  addiu       $v0, $v0, 0x3528
    ctx->pc = 0x4e10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13608));
label_4e10fc:
    // 0x4e10fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e1100:
    // 0x4e1100: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4e1104:
    if (ctx->pc == 0x4E1104u) {
        ctx->pc = 0x4E1104u;
            // 0x4e1104: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4E1108u;
        goto label_4e1108;
    }
    ctx->pc = 0x4E1100u;
    {
        const bool branch_taken_0x4e1100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1100u;
            // 0x4e1104: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1100) {
            ctx->pc = 0x4E1128u;
            goto label_4e1128;
        }
    }
    ctx->pc = 0x4E1108u;
label_4e1108:
    // 0x4e1108: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e1108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e110c:
    // 0x4e110c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e1110:
    // 0x4e1110: 0x246335a0  addiu       $v1, $v1, 0x35A0
    ctx->pc = 0x4e1110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13728));
label_4e1114:
    // 0x4e1114: 0x244235d8  addiu       $v0, $v0, 0x35D8
    ctx->pc = 0x4e1114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13784));
label_4e1118:
    // 0x4e1118: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e111c:
    // 0x4e111c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e111cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1120:
    // 0x4e1120: 0xc138458  jal         func_4E1160
label_4e1124:
    if (ctx->pc == 0x4E1124u) {
        ctx->pc = 0x4E1124u;
            // 0x4e1124: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4E1128u;
        goto label_4e1128;
    }
    ctx->pc = 0x4E1120u;
    SET_GPR_U32(ctx, 31, 0x4E1128u);
    ctx->pc = 0x4E1124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1120u;
            // 0x4e1124: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E1160u;
    if (runtime->hasFunction(0x4E1160u)) {
        auto targetFn = runtime->lookupFunction(0x4E1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1128u; }
        if (ctx->pc != 0x4E1128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E1160_0x4e1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1128u; }
        if (ctx->pc != 0x4E1128u) { return; }
    }
    ctx->pc = 0x4E1128u;
label_4e1128:
    // 0x4e1128: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e1128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4e112c:
    // 0x4e112c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e112cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e1130:
    // 0x4e1130: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e1134:
    if (ctx->pc == 0x4E1134u) {
        ctx->pc = 0x4E1134u;
            // 0x4e1134: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1138u;
        goto label_4e1138;
    }
    ctx->pc = 0x4E1130u;
    {
        const bool branch_taken_0x4e1130 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e1130) {
            ctx->pc = 0x4E1134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1130u;
            // 0x4e1134: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1144u;
            goto label_4e1144;
        }
    }
    ctx->pc = 0x4E1138u;
label_4e1138:
    // 0x4e1138: 0xc0400a8  jal         func_1002A0
label_4e113c:
    if (ctx->pc == 0x4E113Cu) {
        ctx->pc = 0x4E113Cu;
            // 0x4e113c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1140u;
        goto label_4e1140;
    }
    ctx->pc = 0x4E1138u;
    SET_GPR_U32(ctx, 31, 0x4E1140u);
    ctx->pc = 0x4E113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1138u;
            // 0x4e113c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1140u; }
        if (ctx->pc != 0x4E1140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1140u; }
        if (ctx->pc != 0x4E1140u) { return; }
    }
    ctx->pc = 0x4E1140u;
label_4e1140:
    // 0x4e1140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e1144:
    // 0x4e1144: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e1144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1148:
    // 0x4e1148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e1148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e114c:
    // 0x4e114c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e114cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1150:
    // 0x4e1150: 0x3e00008  jr          $ra
label_4e1154:
    if (ctx->pc == 0x4E1154u) {
        ctx->pc = 0x4E1154u;
            // 0x4e1154: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E1158u;
        goto label_4e1158;
    }
    ctx->pc = 0x4E1150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1150u;
            // 0x4e1154: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1158u;
label_4e1158:
    // 0x4e1158: 0x0  nop
    ctx->pc = 0x4e1158u;
    // NOP
label_4e115c:
    // 0x4e115c: 0x0  nop
    ctx->pc = 0x4e115cu;
    // NOP
}
