#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E7C10
// Address: 0x4e7c10 - 0x4e8180
void sub_004E7C10_0x4e7c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7C10_0x4e7c10");
#endif

    switch (ctx->pc) {
        case 0x4e7c10u: goto label_4e7c10;
        case 0x4e7c14u: goto label_4e7c14;
        case 0x4e7c18u: goto label_4e7c18;
        case 0x4e7c1cu: goto label_4e7c1c;
        case 0x4e7c20u: goto label_4e7c20;
        case 0x4e7c24u: goto label_4e7c24;
        case 0x4e7c28u: goto label_4e7c28;
        case 0x4e7c2cu: goto label_4e7c2c;
        case 0x4e7c30u: goto label_4e7c30;
        case 0x4e7c34u: goto label_4e7c34;
        case 0x4e7c38u: goto label_4e7c38;
        case 0x4e7c3cu: goto label_4e7c3c;
        case 0x4e7c40u: goto label_4e7c40;
        case 0x4e7c44u: goto label_4e7c44;
        case 0x4e7c48u: goto label_4e7c48;
        case 0x4e7c4cu: goto label_4e7c4c;
        case 0x4e7c50u: goto label_4e7c50;
        case 0x4e7c54u: goto label_4e7c54;
        case 0x4e7c58u: goto label_4e7c58;
        case 0x4e7c5cu: goto label_4e7c5c;
        case 0x4e7c60u: goto label_4e7c60;
        case 0x4e7c64u: goto label_4e7c64;
        case 0x4e7c68u: goto label_4e7c68;
        case 0x4e7c6cu: goto label_4e7c6c;
        case 0x4e7c70u: goto label_4e7c70;
        case 0x4e7c74u: goto label_4e7c74;
        case 0x4e7c78u: goto label_4e7c78;
        case 0x4e7c7cu: goto label_4e7c7c;
        case 0x4e7c80u: goto label_4e7c80;
        case 0x4e7c84u: goto label_4e7c84;
        case 0x4e7c88u: goto label_4e7c88;
        case 0x4e7c8cu: goto label_4e7c8c;
        case 0x4e7c90u: goto label_4e7c90;
        case 0x4e7c94u: goto label_4e7c94;
        case 0x4e7c98u: goto label_4e7c98;
        case 0x4e7c9cu: goto label_4e7c9c;
        case 0x4e7ca0u: goto label_4e7ca0;
        case 0x4e7ca4u: goto label_4e7ca4;
        case 0x4e7ca8u: goto label_4e7ca8;
        case 0x4e7cacu: goto label_4e7cac;
        case 0x4e7cb0u: goto label_4e7cb0;
        case 0x4e7cb4u: goto label_4e7cb4;
        case 0x4e7cb8u: goto label_4e7cb8;
        case 0x4e7cbcu: goto label_4e7cbc;
        case 0x4e7cc0u: goto label_4e7cc0;
        case 0x4e7cc4u: goto label_4e7cc4;
        case 0x4e7cc8u: goto label_4e7cc8;
        case 0x4e7cccu: goto label_4e7ccc;
        case 0x4e7cd0u: goto label_4e7cd0;
        case 0x4e7cd4u: goto label_4e7cd4;
        case 0x4e7cd8u: goto label_4e7cd8;
        case 0x4e7cdcu: goto label_4e7cdc;
        case 0x4e7ce0u: goto label_4e7ce0;
        case 0x4e7ce4u: goto label_4e7ce4;
        case 0x4e7ce8u: goto label_4e7ce8;
        case 0x4e7cecu: goto label_4e7cec;
        case 0x4e7cf0u: goto label_4e7cf0;
        case 0x4e7cf4u: goto label_4e7cf4;
        case 0x4e7cf8u: goto label_4e7cf8;
        case 0x4e7cfcu: goto label_4e7cfc;
        case 0x4e7d00u: goto label_4e7d00;
        case 0x4e7d04u: goto label_4e7d04;
        case 0x4e7d08u: goto label_4e7d08;
        case 0x4e7d0cu: goto label_4e7d0c;
        case 0x4e7d10u: goto label_4e7d10;
        case 0x4e7d14u: goto label_4e7d14;
        case 0x4e7d18u: goto label_4e7d18;
        case 0x4e7d1cu: goto label_4e7d1c;
        case 0x4e7d20u: goto label_4e7d20;
        case 0x4e7d24u: goto label_4e7d24;
        case 0x4e7d28u: goto label_4e7d28;
        case 0x4e7d2cu: goto label_4e7d2c;
        case 0x4e7d30u: goto label_4e7d30;
        case 0x4e7d34u: goto label_4e7d34;
        case 0x4e7d38u: goto label_4e7d38;
        case 0x4e7d3cu: goto label_4e7d3c;
        case 0x4e7d40u: goto label_4e7d40;
        case 0x4e7d44u: goto label_4e7d44;
        case 0x4e7d48u: goto label_4e7d48;
        case 0x4e7d4cu: goto label_4e7d4c;
        case 0x4e7d50u: goto label_4e7d50;
        case 0x4e7d54u: goto label_4e7d54;
        case 0x4e7d58u: goto label_4e7d58;
        case 0x4e7d5cu: goto label_4e7d5c;
        case 0x4e7d60u: goto label_4e7d60;
        case 0x4e7d64u: goto label_4e7d64;
        case 0x4e7d68u: goto label_4e7d68;
        case 0x4e7d6cu: goto label_4e7d6c;
        case 0x4e7d70u: goto label_4e7d70;
        case 0x4e7d74u: goto label_4e7d74;
        case 0x4e7d78u: goto label_4e7d78;
        case 0x4e7d7cu: goto label_4e7d7c;
        case 0x4e7d80u: goto label_4e7d80;
        case 0x4e7d84u: goto label_4e7d84;
        case 0x4e7d88u: goto label_4e7d88;
        case 0x4e7d8cu: goto label_4e7d8c;
        case 0x4e7d90u: goto label_4e7d90;
        case 0x4e7d94u: goto label_4e7d94;
        case 0x4e7d98u: goto label_4e7d98;
        case 0x4e7d9cu: goto label_4e7d9c;
        case 0x4e7da0u: goto label_4e7da0;
        case 0x4e7da4u: goto label_4e7da4;
        case 0x4e7da8u: goto label_4e7da8;
        case 0x4e7dacu: goto label_4e7dac;
        case 0x4e7db0u: goto label_4e7db0;
        case 0x4e7db4u: goto label_4e7db4;
        case 0x4e7db8u: goto label_4e7db8;
        case 0x4e7dbcu: goto label_4e7dbc;
        case 0x4e7dc0u: goto label_4e7dc0;
        case 0x4e7dc4u: goto label_4e7dc4;
        case 0x4e7dc8u: goto label_4e7dc8;
        case 0x4e7dccu: goto label_4e7dcc;
        case 0x4e7dd0u: goto label_4e7dd0;
        case 0x4e7dd4u: goto label_4e7dd4;
        case 0x4e7dd8u: goto label_4e7dd8;
        case 0x4e7ddcu: goto label_4e7ddc;
        case 0x4e7de0u: goto label_4e7de0;
        case 0x4e7de4u: goto label_4e7de4;
        case 0x4e7de8u: goto label_4e7de8;
        case 0x4e7decu: goto label_4e7dec;
        case 0x4e7df0u: goto label_4e7df0;
        case 0x4e7df4u: goto label_4e7df4;
        case 0x4e7df8u: goto label_4e7df8;
        case 0x4e7dfcu: goto label_4e7dfc;
        case 0x4e7e00u: goto label_4e7e00;
        case 0x4e7e04u: goto label_4e7e04;
        case 0x4e7e08u: goto label_4e7e08;
        case 0x4e7e0cu: goto label_4e7e0c;
        case 0x4e7e10u: goto label_4e7e10;
        case 0x4e7e14u: goto label_4e7e14;
        case 0x4e7e18u: goto label_4e7e18;
        case 0x4e7e1cu: goto label_4e7e1c;
        case 0x4e7e20u: goto label_4e7e20;
        case 0x4e7e24u: goto label_4e7e24;
        case 0x4e7e28u: goto label_4e7e28;
        case 0x4e7e2cu: goto label_4e7e2c;
        case 0x4e7e30u: goto label_4e7e30;
        case 0x4e7e34u: goto label_4e7e34;
        case 0x4e7e38u: goto label_4e7e38;
        case 0x4e7e3cu: goto label_4e7e3c;
        case 0x4e7e40u: goto label_4e7e40;
        case 0x4e7e44u: goto label_4e7e44;
        case 0x4e7e48u: goto label_4e7e48;
        case 0x4e7e4cu: goto label_4e7e4c;
        case 0x4e7e50u: goto label_4e7e50;
        case 0x4e7e54u: goto label_4e7e54;
        case 0x4e7e58u: goto label_4e7e58;
        case 0x4e7e5cu: goto label_4e7e5c;
        case 0x4e7e60u: goto label_4e7e60;
        case 0x4e7e64u: goto label_4e7e64;
        case 0x4e7e68u: goto label_4e7e68;
        case 0x4e7e6cu: goto label_4e7e6c;
        case 0x4e7e70u: goto label_4e7e70;
        case 0x4e7e74u: goto label_4e7e74;
        case 0x4e7e78u: goto label_4e7e78;
        case 0x4e7e7cu: goto label_4e7e7c;
        case 0x4e7e80u: goto label_4e7e80;
        case 0x4e7e84u: goto label_4e7e84;
        case 0x4e7e88u: goto label_4e7e88;
        case 0x4e7e8cu: goto label_4e7e8c;
        case 0x4e7e90u: goto label_4e7e90;
        case 0x4e7e94u: goto label_4e7e94;
        case 0x4e7e98u: goto label_4e7e98;
        case 0x4e7e9cu: goto label_4e7e9c;
        case 0x4e7ea0u: goto label_4e7ea0;
        case 0x4e7ea4u: goto label_4e7ea4;
        case 0x4e7ea8u: goto label_4e7ea8;
        case 0x4e7eacu: goto label_4e7eac;
        case 0x4e7eb0u: goto label_4e7eb0;
        case 0x4e7eb4u: goto label_4e7eb4;
        case 0x4e7eb8u: goto label_4e7eb8;
        case 0x4e7ebcu: goto label_4e7ebc;
        case 0x4e7ec0u: goto label_4e7ec0;
        case 0x4e7ec4u: goto label_4e7ec4;
        case 0x4e7ec8u: goto label_4e7ec8;
        case 0x4e7eccu: goto label_4e7ecc;
        case 0x4e7ed0u: goto label_4e7ed0;
        case 0x4e7ed4u: goto label_4e7ed4;
        case 0x4e7ed8u: goto label_4e7ed8;
        case 0x4e7edcu: goto label_4e7edc;
        case 0x4e7ee0u: goto label_4e7ee0;
        case 0x4e7ee4u: goto label_4e7ee4;
        case 0x4e7ee8u: goto label_4e7ee8;
        case 0x4e7eecu: goto label_4e7eec;
        case 0x4e7ef0u: goto label_4e7ef0;
        case 0x4e7ef4u: goto label_4e7ef4;
        case 0x4e7ef8u: goto label_4e7ef8;
        case 0x4e7efcu: goto label_4e7efc;
        case 0x4e7f00u: goto label_4e7f00;
        case 0x4e7f04u: goto label_4e7f04;
        case 0x4e7f08u: goto label_4e7f08;
        case 0x4e7f0cu: goto label_4e7f0c;
        case 0x4e7f10u: goto label_4e7f10;
        case 0x4e7f14u: goto label_4e7f14;
        case 0x4e7f18u: goto label_4e7f18;
        case 0x4e7f1cu: goto label_4e7f1c;
        case 0x4e7f20u: goto label_4e7f20;
        case 0x4e7f24u: goto label_4e7f24;
        case 0x4e7f28u: goto label_4e7f28;
        case 0x4e7f2cu: goto label_4e7f2c;
        case 0x4e7f30u: goto label_4e7f30;
        case 0x4e7f34u: goto label_4e7f34;
        case 0x4e7f38u: goto label_4e7f38;
        case 0x4e7f3cu: goto label_4e7f3c;
        case 0x4e7f40u: goto label_4e7f40;
        case 0x4e7f44u: goto label_4e7f44;
        case 0x4e7f48u: goto label_4e7f48;
        case 0x4e7f4cu: goto label_4e7f4c;
        case 0x4e7f50u: goto label_4e7f50;
        case 0x4e7f54u: goto label_4e7f54;
        case 0x4e7f58u: goto label_4e7f58;
        case 0x4e7f5cu: goto label_4e7f5c;
        case 0x4e7f60u: goto label_4e7f60;
        case 0x4e7f64u: goto label_4e7f64;
        case 0x4e7f68u: goto label_4e7f68;
        case 0x4e7f6cu: goto label_4e7f6c;
        case 0x4e7f70u: goto label_4e7f70;
        case 0x4e7f74u: goto label_4e7f74;
        case 0x4e7f78u: goto label_4e7f78;
        case 0x4e7f7cu: goto label_4e7f7c;
        case 0x4e7f80u: goto label_4e7f80;
        case 0x4e7f84u: goto label_4e7f84;
        case 0x4e7f88u: goto label_4e7f88;
        case 0x4e7f8cu: goto label_4e7f8c;
        case 0x4e7f90u: goto label_4e7f90;
        case 0x4e7f94u: goto label_4e7f94;
        case 0x4e7f98u: goto label_4e7f98;
        case 0x4e7f9cu: goto label_4e7f9c;
        case 0x4e7fa0u: goto label_4e7fa0;
        case 0x4e7fa4u: goto label_4e7fa4;
        case 0x4e7fa8u: goto label_4e7fa8;
        case 0x4e7facu: goto label_4e7fac;
        case 0x4e7fb0u: goto label_4e7fb0;
        case 0x4e7fb4u: goto label_4e7fb4;
        case 0x4e7fb8u: goto label_4e7fb8;
        case 0x4e7fbcu: goto label_4e7fbc;
        case 0x4e7fc0u: goto label_4e7fc0;
        case 0x4e7fc4u: goto label_4e7fc4;
        case 0x4e7fc8u: goto label_4e7fc8;
        case 0x4e7fccu: goto label_4e7fcc;
        case 0x4e7fd0u: goto label_4e7fd0;
        case 0x4e7fd4u: goto label_4e7fd4;
        case 0x4e7fd8u: goto label_4e7fd8;
        case 0x4e7fdcu: goto label_4e7fdc;
        case 0x4e7fe0u: goto label_4e7fe0;
        case 0x4e7fe4u: goto label_4e7fe4;
        case 0x4e7fe8u: goto label_4e7fe8;
        case 0x4e7fecu: goto label_4e7fec;
        case 0x4e7ff0u: goto label_4e7ff0;
        case 0x4e7ff4u: goto label_4e7ff4;
        case 0x4e7ff8u: goto label_4e7ff8;
        case 0x4e7ffcu: goto label_4e7ffc;
        case 0x4e8000u: goto label_4e8000;
        case 0x4e8004u: goto label_4e8004;
        case 0x4e8008u: goto label_4e8008;
        case 0x4e800cu: goto label_4e800c;
        case 0x4e8010u: goto label_4e8010;
        case 0x4e8014u: goto label_4e8014;
        case 0x4e8018u: goto label_4e8018;
        case 0x4e801cu: goto label_4e801c;
        case 0x4e8020u: goto label_4e8020;
        case 0x4e8024u: goto label_4e8024;
        case 0x4e8028u: goto label_4e8028;
        case 0x4e802cu: goto label_4e802c;
        case 0x4e8030u: goto label_4e8030;
        case 0x4e8034u: goto label_4e8034;
        case 0x4e8038u: goto label_4e8038;
        case 0x4e803cu: goto label_4e803c;
        case 0x4e8040u: goto label_4e8040;
        case 0x4e8044u: goto label_4e8044;
        case 0x4e8048u: goto label_4e8048;
        case 0x4e804cu: goto label_4e804c;
        case 0x4e8050u: goto label_4e8050;
        case 0x4e8054u: goto label_4e8054;
        case 0x4e8058u: goto label_4e8058;
        case 0x4e805cu: goto label_4e805c;
        case 0x4e8060u: goto label_4e8060;
        case 0x4e8064u: goto label_4e8064;
        case 0x4e8068u: goto label_4e8068;
        case 0x4e806cu: goto label_4e806c;
        case 0x4e8070u: goto label_4e8070;
        case 0x4e8074u: goto label_4e8074;
        case 0x4e8078u: goto label_4e8078;
        case 0x4e807cu: goto label_4e807c;
        case 0x4e8080u: goto label_4e8080;
        case 0x4e8084u: goto label_4e8084;
        case 0x4e8088u: goto label_4e8088;
        case 0x4e808cu: goto label_4e808c;
        case 0x4e8090u: goto label_4e8090;
        case 0x4e8094u: goto label_4e8094;
        case 0x4e8098u: goto label_4e8098;
        case 0x4e809cu: goto label_4e809c;
        case 0x4e80a0u: goto label_4e80a0;
        case 0x4e80a4u: goto label_4e80a4;
        case 0x4e80a8u: goto label_4e80a8;
        case 0x4e80acu: goto label_4e80ac;
        case 0x4e80b0u: goto label_4e80b0;
        case 0x4e80b4u: goto label_4e80b4;
        case 0x4e80b8u: goto label_4e80b8;
        case 0x4e80bcu: goto label_4e80bc;
        case 0x4e80c0u: goto label_4e80c0;
        case 0x4e80c4u: goto label_4e80c4;
        case 0x4e80c8u: goto label_4e80c8;
        case 0x4e80ccu: goto label_4e80cc;
        case 0x4e80d0u: goto label_4e80d0;
        case 0x4e80d4u: goto label_4e80d4;
        case 0x4e80d8u: goto label_4e80d8;
        case 0x4e80dcu: goto label_4e80dc;
        case 0x4e80e0u: goto label_4e80e0;
        case 0x4e80e4u: goto label_4e80e4;
        case 0x4e80e8u: goto label_4e80e8;
        case 0x4e80ecu: goto label_4e80ec;
        case 0x4e80f0u: goto label_4e80f0;
        case 0x4e80f4u: goto label_4e80f4;
        case 0x4e80f8u: goto label_4e80f8;
        case 0x4e80fcu: goto label_4e80fc;
        case 0x4e8100u: goto label_4e8100;
        case 0x4e8104u: goto label_4e8104;
        case 0x4e8108u: goto label_4e8108;
        case 0x4e810cu: goto label_4e810c;
        case 0x4e8110u: goto label_4e8110;
        case 0x4e8114u: goto label_4e8114;
        case 0x4e8118u: goto label_4e8118;
        case 0x4e811cu: goto label_4e811c;
        case 0x4e8120u: goto label_4e8120;
        case 0x4e8124u: goto label_4e8124;
        case 0x4e8128u: goto label_4e8128;
        case 0x4e812cu: goto label_4e812c;
        case 0x4e8130u: goto label_4e8130;
        case 0x4e8134u: goto label_4e8134;
        case 0x4e8138u: goto label_4e8138;
        case 0x4e813cu: goto label_4e813c;
        case 0x4e8140u: goto label_4e8140;
        case 0x4e8144u: goto label_4e8144;
        case 0x4e8148u: goto label_4e8148;
        case 0x4e814cu: goto label_4e814c;
        case 0x4e8150u: goto label_4e8150;
        case 0x4e8154u: goto label_4e8154;
        case 0x4e8158u: goto label_4e8158;
        case 0x4e815cu: goto label_4e815c;
        case 0x4e8160u: goto label_4e8160;
        case 0x4e8164u: goto label_4e8164;
        case 0x4e8168u: goto label_4e8168;
        case 0x4e816cu: goto label_4e816c;
        case 0x4e8170u: goto label_4e8170;
        case 0x4e8174u: goto label_4e8174;
        case 0x4e8178u: goto label_4e8178;
        case 0x4e817cu: goto label_4e817c;
        default: break;
    }

    ctx->pc = 0x4e7c10u;

label_4e7c10:
    // 0x4e7c10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4e7c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4e7c14:
    // 0x4e7c14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4e7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4e7c18:
    // 0x4e7c18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4e7c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4e7c1c:
    // 0x4e7c1c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4e7c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4e7c20:
    // 0x4e7c20: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4e7c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4e7c24:
    // 0x4e7c24: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4e7c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4e7c28:
    // 0x4e7c28: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e7c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4e7c2c:
    // 0x4e7c2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e7c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e7c30:
    // 0x4e7c30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4e7c30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7c34:
    // 0x4e7c34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e7c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4e7c38:
    // 0x4e7c38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e7c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e7c3c:
    // 0x4e7c3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e7c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7c40:
    // 0x4e7c40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e7c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e7c44:
    // 0x4e7c44: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e7c44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e7c48:
    // 0x4e7c48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e7c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e7c4c:
    // 0x4e7c4c: 0x26528ec0  addiu       $s2, $s2, -0x7140
    ctx->pc = 0x4e7c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938304));
label_4e7c50:
    // 0x4e7c50: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4e7c50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4e7c54:
    // 0x4e7c54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e7c54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e7c58:
    // 0x4e7c58: 0x8c5789e0  lw          $s7, -0x7620($v0)
    ctx->pc = 0x4e7c58u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4e7c5c:
    // 0x4e7c5c: 0x90850194  lbu         $a1, 0x194($a0)
    ctx->pc = 0x4e7c5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 404)));
label_4e7c60:
    // 0x4e7c60: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e7c64:
    // 0x4e7c64: 0x8456838c  lh          $s6, -0x7C74($v0)
    ctx->pc = 0x4e7c64u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935436)));
label_4e7c68:
    // 0x4e7c68: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e7c6c:
    // 0x4e7c6c: 0x8451838e  lh          $s1, -0x7C72($v0)
    ctx->pc = 0x4e7c6cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935438)));
label_4e7c70:
    // 0x4e7c70: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x4e7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_4e7c74:
    // 0x4e7c74: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x4e7c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4e7c78:
    // 0x4e7c78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4e7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4e7c7c:
    // 0x4e7c7c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4e7c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4e7c80:
    // 0x4e7c80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4e7c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4e7c84:
    // 0x4e7c84: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e7c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e7c88:
    // 0x4e7c88: 0xc4618ec8  lwc1        $f1, -0x7138($v1)
    ctx->pc = 0x4e7c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294938312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e7c8c:
    // 0x4e7c8c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e7c90:
    // 0x4e7c90: 0xc4408ecc  lwc1        $f0, -0x7134($v0)
    ctx->pc = 0x4e7c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294938316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e7c94:
    // 0x4e7c94: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4e7c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4e7c98:
    // 0x4e7c98: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4e7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4e7c9c:
    // 0x4e7c9c: 0x90820195  lbu         $v0, 0x195($a0)
    ctx->pc = 0x4e7c9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 405)));
label_4e7ca0:
    // 0x4e7ca0: 0xa3a025  or          $s4, $a1, $v1
    ctx->pc = 0x4e7ca0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4e7ca4:
    // 0x4e7ca4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4e7ca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4e7ca8:
    // 0x4e7ca8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4e7ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4e7cac:
    // 0x4e7cac: 0x46011d42  mul.s       $f21, $f3, $f1
    ctx->pc = 0x4e7cacu;
    ctx->f[21] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4e7cb0:
    // 0x4e7cb0: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_4e7cb4:
    if (ctx->pc == 0x4E7CB4u) {
        ctx->pc = 0x4E7CB4u;
            // 0x4e7cb4: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x4E7CB8u;
        goto label_4e7cb8;
    }
    ctx->pc = 0x4E7CB0u;
    {
        const bool branch_taken_0x4e7cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7CB0u;
            // 0x4e7cb4: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7cb0) {
            ctx->pc = 0x4E7DBCu;
            goto label_4e7dbc;
        }
    }
    ctx->pc = 0x4E7CB8u;
label_4e7cb8:
    // 0x4e7cb8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7cbc:
    // 0x4e7cbc: 0x8c44aaa8  lw          $a0, -0x5558($v0)
    ctx->pc = 0x4e7cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_4e7cc0:
    // 0x4e7cc0: 0xc0506ac  jal         func_141AB0
label_4e7cc4:
    if (ctx->pc == 0x4E7CC4u) {
        ctx->pc = 0x4E7CC4u;
            // 0x4e7cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E7CC8u;
        goto label_4e7cc8;
    }
    ctx->pc = 0x4E7CC0u;
    SET_GPR_U32(ctx, 31, 0x4E7CC8u);
    ctx->pc = 0x4E7CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7CC0u;
            // 0x4e7cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7CC8u; }
        if (ctx->pc != 0x4E7CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7CC8u; }
        if (ctx->pc != 0x4E7CC8u) { return; }
    }
    ctx->pc = 0x4E7CC8u;
label_4e7cc8:
    // 0x4e7cc8: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x4e7cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e7ccc:
    // 0x4e7ccc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4e7cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e7cd0:
    // 0x4e7cd0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e7cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e7cd4:
    // 0x4e7cd4: 0x320f809  jalr        $t9
label_4e7cd8:
    if (ctx->pc == 0x4E7CD8u) {
        ctx->pc = 0x4E7CD8u;
            // 0x4e7cd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E7CDCu;
        goto label_4e7cdc;
    }
    ctx->pc = 0x4E7CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7CDCu);
        ctx->pc = 0x4E7CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7CD4u;
            // 0x4e7cd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7CDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7CDCu; }
            if (ctx->pc != 0x4E7CDCu) { return; }
        }
        }
    }
    ctx->pc = 0x4E7CDCu;
label_4e7cdc:
    // 0x4e7cdc: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x4e7cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4e7ce0:
    // 0x4e7ce0: 0x82a20197  lb          $v0, 0x197($s5)
    ctx->pc = 0x4e7ce0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 407)));
label_4e7ce4:
    // 0x4e7ce4: 0x4600a906  mov.s       $f4, $f21
    ctx->pc = 0x4e7ce4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[21]);
label_4e7ce8:
    // 0x4e7ce8: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_4e7cec:
    if (ctx->pc == 0x4E7CECu) {
        ctx->pc = 0x4E7CECu;
            // 0x4e7cec: 0x4600a0c6  mov.s       $f3, $f20 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4E7CF0u;
        goto label_4e7cf0;
    }
    ctx->pc = 0x4E7CE8u;
    {
        const bool branch_taken_0x4e7ce8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7CE8u;
            // 0x4e7cec: 0x4600a0c6  mov.s       $f3, $f20 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7ce8) {
            ctx->pc = 0x4E7D00u;
            goto label_4e7d00;
        }
    }
    ctx->pc = 0x4E7CF0u;
label_4e7cf0:
    // 0x4e7cf0: 0xc6a00134  lwc1        $f0, 0x134($s5)
    ctx->pc = 0x4e7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e7cf4:
    // 0x4e7cf4: 0x4600a900  add.s       $f4, $f21, $f0
    ctx->pc = 0x4e7cf4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4e7cf8:
    // 0x4e7cf8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4e7cfc:
    if (ctx->pc == 0x4E7CFCu) {
        ctx->pc = 0x4E7CFCu;
            // 0x4e7cfc: 0x4600a0c0  add.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4E7D00u;
        goto label_4e7d00;
    }
    ctx->pc = 0x4E7CF8u;
    {
        const bool branch_taken_0x4e7cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7CF8u;
            // 0x4e7cfc: 0x4600a0c0  add.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7cf8) {
            ctx->pc = 0x4E7D28u;
            goto label_4e7d28;
        }
    }
    ctx->pc = 0x4E7D00u;
label_4e7d00:
    // 0x4e7d00: 0x82a20198  lb          $v0, 0x198($s5)
    ctx->pc = 0x4e7d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 408)));
label_4e7d04:
    // 0x4e7d04: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
label_4e7d08:
    if (ctx->pc == 0x4E7D08u) {
        ctx->pc = 0x4E7D0Cu;
        goto label_4e7d0c;
    }
    ctx->pc = 0x4E7D04u;
    {
        const bool branch_taken_0x4e7d04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e7d04) {
            ctx->pc = 0x4E7D28u;
            goto label_4e7d28;
        }
    }
    ctx->pc = 0x4E7D0Cu;
label_4e7d0c:
    // 0x4e7d0c: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x4e7d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e7d10:
    // 0x4e7d10: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4e7d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4e7d14:
    // 0x4e7d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e7d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7d18:
    // 0x4e7d18: 0x0  nop
    ctx->pc = 0x4e7d18u;
    // NOP
label_4e7d1c:
    // 0x4e7d1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4e7d1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4e7d20:
    // 0x4e7d20: 0x4600a900  add.s       $f4, $f21, $f0
    ctx->pc = 0x4e7d20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4e7d24:
    // 0x4e7d24: 0x4600a0c0  add.s       $f3, $f20, $f0
    ctx->pc = 0x4e7d24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4e7d28:
    // 0x4e7d28: 0x8603005e  lh          $v1, 0x5E($s0)
    ctx->pc = 0x4e7d28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
label_4e7d2c:
    // 0x4e7d2c: 0x86040060  lh          $a0, 0x60($s0)
    ctx->pc = 0x4e7d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_4e7d30:
    // 0x4e7d30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4e7d34:
    // 0x4e7d34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4e7d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e7d38:
    // 0x4e7d38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e7d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e7d3c:
    // 0x4e7d3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4e7d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4e7d40:
    // 0x4e7d40: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e7d44:
    // 0x4e7d44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4e7d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4e7d48:
    // 0x4e7d48: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e7d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e7d4c:
    // 0x4e7d4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e7d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7d50:
    // 0x4e7d50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4e7d50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7d54:
    // 0x4e7d54: 0x0  nop
    ctx->pc = 0x4e7d54u;
    // NOP
label_4e7d58:
    // 0x4e7d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e7d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4e7d5c:
    // 0x4e7d5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e7d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e7d60:
    // 0x4e7d60: 0x46041301  sub.s       $f12, $f2, $f4
    ctx->pc = 0x4e7d60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_4e7d64:
    // 0x4e7d64: 0x46041380  add.s       $f14, $f2, $f4
    ctx->pc = 0x4e7d64u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_4e7d68:
    // 0x4e7d68: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x4e7d68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_4e7d6c:
    // 0x4e7d6c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4e7d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_4e7d70:
    // 0x4e7d70: 0x460103c1  sub.s       $f15, $f0, $f1
    ctx->pc = 0x4e7d70u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4e7d74:
    // 0x4e7d74: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4e7d74u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7d78:
    // 0x4e7d78: 0x0  nop
    ctx->pc = 0x4e7d78u;
    // NOP
label_4e7d7c:
    // 0x4e7d7c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e7d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e7d80:
    // 0x4e7d80: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e7d80u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7d84:
    // 0x4e7d84: 0x0  nop
    ctx->pc = 0x4e7d84u;
    // NOP
label_4e7d88:
    // 0x4e7d88: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e7d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e7d8c:
    // 0x4e7d8c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e7d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e7d90:
    // 0x4e7d90: 0xc0bc284  jal         func_2F0A10
label_4e7d94:
    if (ctx->pc == 0x4E7D94u) {
        ctx->pc = 0x4E7D94u;
            // 0x4e7d94: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4E7D98u;
        goto label_4e7d98;
    }
    ctx->pc = 0x4E7D90u;
    SET_GPR_U32(ctx, 31, 0x4E7D98u);
    ctx->pc = 0x4E7D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7D90u;
            // 0x4e7d94: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7D98u; }
        if (ctx->pc != 0x4E7D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7D98u; }
        if (ctx->pc != 0x4E7D98u) { return; }
    }
    ctx->pc = 0x4E7D98u;
label_4e7d98:
    // 0x4e7d98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e7d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e7d9c:
    // 0x4e7d9c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x4e7d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4e7da0:
    // 0x4e7da0: 0x2e62000a  sltiu       $v0, $s3, 0xA
    ctx->pc = 0x4e7da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_4e7da4:
    // 0x4e7da4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_4e7da8:
    if (ctx->pc == 0x4E7DA8u) {
        ctx->pc = 0x4E7DA8u;
            // 0x4e7da8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4E7DACu;
        goto label_4e7dac;
    }
    ctx->pc = 0x4E7DA4u;
    {
        const bool branch_taken_0x4e7da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E7DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7DA4u;
            // 0x4e7da8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7da4) {
            ctx->pc = 0x4E7CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e7ce0;
        }
    }
    ctx->pc = 0x4E7DACu;
label_4e7dac:
    // 0x4e7dac: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x4e7dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e7db0:
    // 0x4e7db0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e7db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e7db4:
    // 0x4e7db4: 0x320f809  jalr        $t9
label_4e7db8:
    if (ctx->pc == 0x4E7DB8u) {
        ctx->pc = 0x4E7DB8u;
            // 0x4e7db8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7DBCu;
        goto label_4e7dbc;
    }
    ctx->pc = 0x4E7DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7DBCu);
        ctx->pc = 0x4E7DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7DB4u;
            // 0x4e7db8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7DBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7DBCu; }
            if (ctx->pc != 0x4E7DBCu) { return; }
        }
        }
    }
    ctx->pc = 0x4E7DBCu;
label_4e7dbc:
    // 0x4e7dbc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x4e7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4e7dc0:
    // 0x4e7dc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e7dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7dc4:
    // 0x4e7dc4: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x4e7dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4e7dc8:
    // 0x4e7dc8: 0x82a20197  lb          $v0, 0x197($s5)
    ctx->pc = 0x4e7dc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 407)));
label_4e7dcc:
    // 0x4e7dcc: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_4e7dd0:
    if (ctx->pc == 0x4E7DD0u) {
        ctx->pc = 0x4E7DD0u;
            // 0x4e7dd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7DD4u;
        goto label_4e7dd4;
    }
    ctx->pc = 0x4E7DCCu;
    {
        const bool branch_taken_0x4e7dcc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7DCCu;
            // 0x4e7dd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7dcc) {
            ctx->pc = 0x4E7DE0u;
            goto label_4e7de0;
        }
    }
    ctx->pc = 0x4E7DD4u;
label_4e7dd4:
    // 0x4e7dd4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4e7dd8:
    if (ctx->pc == 0x4E7DD8u) {
        ctx->pc = 0x4E7DD8u;
            // 0x4e7dd8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E7DDCu;
        goto label_4e7ddc;
    }
    ctx->pc = 0x4E7DD4u;
    {
        const bool branch_taken_0x4e7dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7DD4u;
            // 0x4e7dd8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7dd4) {
            ctx->pc = 0x4E7DF0u;
            goto label_4e7df0;
        }
    }
    ctx->pc = 0x4E7DDCu;
label_4e7ddc:
    // 0x4e7ddc: 0x0  nop
    ctx->pc = 0x4e7ddcu;
    // NOP
label_4e7de0:
    // 0x4e7de0: 0x82a20198  lb          $v0, 0x198($s5)
    ctx->pc = 0x4e7de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 408)));
label_4e7de4:
    // 0x4e7de4: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
label_4e7de8:
    if (ctx->pc == 0x4E7DE8u) {
        ctx->pc = 0x4E7DECu;
        goto label_4e7dec;
    }
    ctx->pc = 0x4E7DE4u;
    {
        const bool branch_taken_0x4e7de4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e7de4) {
            ctx->pc = 0x4E7DF0u;
            goto label_4e7df0;
        }
    }
    ctx->pc = 0x4E7DECu;
label_4e7dec:
    // 0x4e7dec: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x4e7decu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e7df0:
    // 0x4e7df0: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x4e7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_4e7df4:
    // 0x4e7df4: 0x80420168  lb          $v0, 0x168($v0)
    ctx->pc = 0x4e7df4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 360)));
label_4e7df8:
    // 0x4e7df8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e7df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e7dfc:
    // 0x4e7dfc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_4e7e00:
    if (ctx->pc == 0x4E7E00u) {
        ctx->pc = 0x4E7E04u;
        goto label_4e7e04;
    }
    ctx->pc = 0x4E7DFCu;
    {
        const bool branch_taken_0x4e7dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7dfc) {
            ctx->pc = 0x4E7E40u;
            goto label_4e7e40;
        }
    }
    ctx->pc = 0x4E7E04u;
label_4e7e04:
    // 0x4e7e04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4e7e08:
    // 0x4e7e08: 0x8607005e  lh          $a3, 0x5E($s0)
    ctx->pc = 0x4e7e08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
label_4e7e0c:
    // 0x4e7e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e7e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7e10:
    // 0x4e7e10: 0x86080060  lh          $t0, 0x60($s0)
    ctx->pc = 0x4e7e10u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_4e7e14:
    // 0x4e7e14: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x4e7e14u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4e7e18:
    // 0x4e7e18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e7e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4e7e1c:
    // 0x4e7e1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e7e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e7e20:
    // 0x4e7e20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4e7e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e7e24:
    // 0x4e7e24: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x4e7e24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e7e28:
    // 0x4e7e28: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4e7e28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e7e2c:
    // 0x4e7e2c: 0xc139e68  jal         func_4E79A0
label_4e7e30:
    if (ctx->pc == 0x4E7E30u) {
        ctx->pc = 0x4E7E30u;
            // 0x4e7e30: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4E7E34u;
        goto label_4e7e34;
    }
    ctx->pc = 0x4E7E2Cu;
    SET_GPR_U32(ctx, 31, 0x4E7E34u);
    ctx->pc = 0x4E7E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7E2Cu;
            // 0x4e7e30: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E79A0u;
    if (runtime->hasFunction(0x4E79A0u)) {
        auto targetFn = runtime->lookupFunction(0x4E79A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7E34u; }
        if (ctx->pc != 0x4E7E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E79A0_0x4e79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7E34u; }
        if (ctx->pc != 0x4E7E34u) { return; }
    }
    ctx->pc = 0x4E7E34u;
label_4e7e34:
    // 0x4e7e34: 0x10000004  b           . + 4 + (0x4 << 2)
label_4e7e38:
    if (ctx->pc == 0x4E7E38u) {
        ctx->pc = 0x4E7E3Cu;
        goto label_4e7e3c;
    }
    ctx->pc = 0x4E7E34u;
    {
        const bool branch_taken_0x4e7e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7e34) {
            ctx->pc = 0x4E7E48u;
            goto label_4e7e48;
        }
    }
    ctx->pc = 0x4E7E3Cu;
label_4e7e3c:
    // 0x4e7e3c: 0x0  nop
    ctx->pc = 0x4e7e3cu;
    // NOP
label_4e7e40:
    // 0x4e7e40: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4e7e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4e7e44:
    // 0x4e7e44: 0x0  nop
    ctx->pc = 0x4e7e44u;
    // NOP
label_4e7e48:
    // 0x4e7e48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e7e48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e7e4c:
    // 0x4e7e4c: 0x2e620027  sltiu       $v0, $s3, 0x27
    ctx->pc = 0x4e7e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_4e7e50:
    // 0x4e7e50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4e7e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4e7e54:
    // 0x4e7e54: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_4e7e58:
    if (ctx->pc == 0x4E7E58u) {
        ctx->pc = 0x4E7E58u;
            // 0x4e7e58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4E7E5Cu;
        goto label_4e7e5c;
    }
    ctx->pc = 0x4E7E54u;
    {
        const bool branch_taken_0x4e7e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E7E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7E54u;
            // 0x4e7e58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7e54) {
            ctx->pc = 0x4E7DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e7dc8;
        }
    }
    ctx->pc = 0x4E7E5Cu;
label_4e7e5c:
    // 0x4e7e5c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7e60:
    // 0x4e7e60: 0x8c44aaa8  lw          $a0, -0x5558($v0)
    ctx->pc = 0x4e7e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_4e7e64:
    // 0x4e7e64: 0xc0506ac  jal         func_141AB0
label_4e7e68:
    if (ctx->pc == 0x4E7E68u) {
        ctx->pc = 0x4E7E68u;
            // 0x4e7e68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4E7E6Cu;
        goto label_4e7e6c;
    }
    ctx->pc = 0x4E7E64u;
    SET_GPR_U32(ctx, 31, 0x4E7E6Cu);
    ctx->pc = 0x4E7E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7E64u;
            // 0x4e7e68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7E6Cu; }
        if (ctx->pc != 0x4E7E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7E6Cu; }
        if (ctx->pc != 0x4E7E6Cu) { return; }
    }
    ctx->pc = 0x4E7E6Cu;
label_4e7e6c:
    // 0x4e7e6c: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x4e7e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e7e70:
    // 0x4e7e70: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4e7e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e7e74:
    // 0x4e7e74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e7e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e7e78:
    // 0x4e7e78: 0x320f809  jalr        $t9
label_4e7e7c:
    if (ctx->pc == 0x4E7E7Cu) {
        ctx->pc = 0x4E7E7Cu;
            // 0x4e7e7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E7E80u;
        goto label_4e7e80;
    }
    ctx->pc = 0x4E7E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7E80u);
        ctx->pc = 0x4E7E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7E78u;
            // 0x4e7e7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7E80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7E80u; }
            if (ctx->pc != 0x4E7E80u) { return; }
        }
        }
    }
    ctx->pc = 0x4E7E80u;
label_4e7e80:
    // 0x4e7e80: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x4e7e80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_4e7e84:
    // 0x4e7e84: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e7e84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e7e88:
    // 0x4e7e88: 0x26739400  addiu       $s3, $s3, -0x6C00
    ctx->pc = 0x4e7e88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939648));
label_4e7e8c:
    // 0x4e7e8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4e7e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7e90:
    // 0x4e7e90: 0x26528528  addiu       $s2, $s2, -0x7AD8
    ctx->pc = 0x4e7e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935848));
label_4e7e94:
    // 0x4e7e94: 0x26020047  addiu       $v0, $s0, 0x47
    ctx->pc = 0x4e7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 71));
label_4e7e98:
    // 0x4e7e98: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4e7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4e7e9c:
    // 0x4e7e9c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x4e7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4e7ea0:
    // 0x4e7ea0: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x4e7ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_4e7ea4:
    // 0x4e7ea4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x4e7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_4e7ea8:
    // 0x4e7ea8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x4e7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e7eac:
    // 0x4e7eac: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4e7eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4e7eb0:
    // 0x4e7eb0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4e7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e7eb4:
    // 0x4e7eb4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4e7eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4e7eb8:
    // 0x4e7eb8: 0x0  nop
    ctx->pc = 0x4e7eb8u;
    // NOP
label_4e7ebc:
    // 0x4e7ebc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4e7ebcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4e7ec0:
    // 0x4e7ec0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x4e7ec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_4e7ec4:
    // 0x4e7ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4e7ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e7ec8:
    // 0x4e7ec8: 0x0  nop
    ctx->pc = 0x4e7ec8u;
    // NOP
label_4e7ecc:
    // 0x4e7ecc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4e7eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4e7ed0:
    // 0x4e7ed0: 0x82a20197  lb          $v0, 0x197($s5)
    ctx->pc = 0x4e7ed0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 407)));
label_4e7ed4:
    // 0x4e7ed4: 0x46020982  mul.s       $f6, $f1, $f2
    ctx->pc = 0x4e7ed4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4e7ed8:
    // 0x4e7ed8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_4e7edc:
    if (ctx->pc == 0x4E7EDCu) {
        ctx->pc = 0x4E7EDCu;
            // 0x4e7edc: 0x46000942  mul.s       $f5, $f1, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4E7EE0u;
        goto label_4e7ee0;
    }
    ctx->pc = 0x4E7ED8u;
    {
        const bool branch_taken_0x4e7ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E7EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7ED8u;
            // 0x4e7edc: 0x46000942  mul.s       $f5, $f1, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7ed8) {
            ctx->pc = 0x4E7EF0u;
            goto label_4e7ef0;
        }
    }
    ctx->pc = 0x4E7EE0u;
label_4e7ee0:
    // 0x4e7ee0: 0xc6a00134  lwc1        $f0, 0x134($s5)
    ctx->pc = 0x4e7ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e7ee4:
    // 0x4e7ee4: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x4e7ee4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_4e7ee8:
    // 0x4e7ee8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4e7eec:
    if (ctx->pc == 0x4E7EECu) {
        ctx->pc = 0x4E7EECu;
            // 0x4e7eec: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->pc = 0x4E7EF0u;
        goto label_4e7ef0;
    }
    ctx->pc = 0x4E7EE8u;
    {
        const bool branch_taken_0x4e7ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7EE8u;
            // 0x4e7eec: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7ee8) {
            ctx->pc = 0x4E7F18u;
            goto label_4e7f18;
        }
    }
    ctx->pc = 0x4E7EF0u;
label_4e7ef0:
    // 0x4e7ef0: 0x82a20198  lb          $v0, 0x198($s5)
    ctx->pc = 0x4e7ef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 408)));
label_4e7ef4:
    // 0x4e7ef4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_4e7ef8:
    if (ctx->pc == 0x4E7EF8u) {
        ctx->pc = 0x4E7EFCu;
        goto label_4e7efc;
    }
    ctx->pc = 0x4E7EF4u;
    {
        const bool branch_taken_0x4e7ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e7ef4) {
            ctx->pc = 0x4E7F18u;
            goto label_4e7f18;
        }
    }
    ctx->pc = 0x4E7EFCu;
label_4e7efc:
    // 0x4e7efc: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x4e7efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e7f00:
    // 0x4e7f00: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4e7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4e7f04:
    // 0x4e7f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e7f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7f08:
    // 0x4e7f08: 0x0  nop
    ctx->pc = 0x4e7f08u;
    // NOP
label_4e7f0c:
    // 0x4e7f0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4e7f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4e7f10:
    // 0x4e7f10: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x4e7f10u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_4e7f14:
    // 0x4e7f14: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x4e7f14u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_4e7f18:
    // 0x4e7f18: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4e7f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4e7f1c:
    // 0x4e7f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e7f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e7f20:
    // 0x4e7f20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4e7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4e7f24:
    // 0x4e7f24: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x4e7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4e7f28:
    // 0x4e7f28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e7f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7f2c:
    // 0x4e7f2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4e7f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e7f30:
    // 0x4e7f30: 0x84860060  lh          $a2, 0x60($a0)
    ctx->pc = 0x4e7f30u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_4e7f34:
    // 0x4e7f34: 0x8483005e  lh          $v1, 0x5E($a0)
    ctx->pc = 0x4e7f34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 94)));
label_4e7f38:
    // 0x4e7f38: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4e7f38u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7f3c:
    // 0x4e7f3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e7f40:
    // 0x4e7f40: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x4e7f40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4e7f44:
    // 0x4e7f44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4e7f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4e7f48:
    // 0x4e7f48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e7f4c:
    // 0x4e7f4c: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x4e7f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4e7f50:
    // 0x4e7f50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e7f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e7f54:
    // 0x4e7f54: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x4e7f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4e7f58:
    // 0x4e7f58: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e7f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e7f5c:
    // 0x4e7f5c: 0x46051800  add.s       $f0, $f3, $f5
    ctx->pc = 0x4e7f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_4e7f60:
    // 0x4e7f60: 0x460103c1  sub.s       $f15, $f0, $f1
    ctx->pc = 0x4e7f60u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4e7f64:
    // 0x4e7f64: 0x46051881  sub.s       $f2, $f3, $f5
    ctx->pc = 0x4e7f64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_4e7f68:
    // 0x4e7f68: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e7f68u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7f6c:
    // 0x4e7f6c: 0x0  nop
    ctx->pc = 0x4e7f6cu;
    // NOP
label_4e7f70:
    // 0x4e7f70: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e7f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e7f74:
    // 0x4e7f74: 0x46062301  sub.s       $f12, $f4, $f6
    ctx->pc = 0x4e7f74u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_4e7f78:
    // 0x4e7f78: 0x46062380  add.s       $f14, $f4, $f6
    ctx->pc = 0x4e7f78u;
    ctx->f[14] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_4e7f7c:
    // 0x4e7f7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e7f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e7f80:
    // 0x4e7f80: 0xc0bc284  jal         func_2F0A10
label_4e7f84:
    if (ctx->pc == 0x4E7F84u) {
        ctx->pc = 0x4E7F84u;
            // 0x4e7f84: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4E7F88u;
        goto label_4e7f88;
    }
    ctx->pc = 0x4E7F80u;
    SET_GPR_U32(ctx, 31, 0x4E7F88u);
    ctx->pc = 0x4E7F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7F80u;
            // 0x4e7f84: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7F88u; }
        if (ctx->pc != 0x4E7F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7F88u; }
        if (ctx->pc != 0x4E7F88u) { return; }
    }
    ctx->pc = 0x4E7F88u;
label_4e7f88:
    // 0x4e7f88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4e7f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4e7f8c:
    // 0x4e7f8c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x4e7f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4e7f90:
    // 0x4e7f90: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_4e7f94:
    if (ctx->pc == 0x4E7F94u) {
        ctx->pc = 0x4E7F94u;
            // 0x4e7f94: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x4E7F98u;
        goto label_4e7f98;
    }
    ctx->pc = 0x4E7F90u;
    {
        const bool branch_taken_0x4e7f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E7F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7F90u;
            // 0x4e7f94: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7f90) {
            ctx->pc = 0x4E7E94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e7e94;
        }
    }
    ctx->pc = 0x4E7F98u;
label_4e7f98:
    // 0x4e7f98: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x4e7f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e7f9c:
    // 0x4e7f9c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e7f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e7fa0:
    // 0x4e7fa0: 0x320f809  jalr        $t9
label_4e7fa4:
    if (ctx->pc == 0x4E7FA4u) {
        ctx->pc = 0x4E7FA4u;
            // 0x4e7fa4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7FA8u;
        goto label_4e7fa8;
    }
    ctx->pc = 0x4E7FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7FA8u);
        ctx->pc = 0x4E7FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7FA0u;
            // 0x4e7fa4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7FA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7FA8u; }
            if (ctx->pc != 0x4E7FA8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E7FA8u;
label_4e7fa8:
    // 0x4e7fa8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e7fac:
    // 0x4e7fac: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x4e7facu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_4e7fb0:
    // 0x4e7fb0: 0x84568388  lh          $s6, -0x7C78($v0)
    ctx->pc = 0x4e7fb0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935432)));
label_4e7fb4:
    // 0x4e7fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e7fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7fb8:
    // 0x4e7fb8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e7fbc:
    // 0x4e7fbc: 0x845e838a  lh          $fp, -0x7C76($v0)
    ctx->pc = 0x4e7fbcu;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935434)));
label_4e7fc0:
    // 0x4e7fc0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7fc4:
    // 0x4e7fc4: 0x8c44aaa8  lw          $a0, -0x5558($v0)
    ctx->pc = 0x4e7fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_4e7fc8:
    // 0x4e7fc8: 0xc0506ac  jal         func_141AB0
label_4e7fcc:
    if (ctx->pc == 0x4E7FCCu) {
        ctx->pc = 0x4E7FCCu;
            // 0x4e7fcc: 0x26738da0  addiu       $s3, $s3, -0x7260 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938016));
        ctx->pc = 0x4E7FD0u;
        goto label_4e7fd0;
    }
    ctx->pc = 0x4E7FC8u;
    SET_GPR_U32(ctx, 31, 0x4E7FD0u);
    ctx->pc = 0x4E7FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7FC8u;
            // 0x4e7fcc: 0x26738da0  addiu       $s3, $s3, -0x7260 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7FD0u; }
        if (ctx->pc != 0x4E7FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7FD0u; }
        if (ctx->pc != 0x4E7FD0u) { return; }
    }
    ctx->pc = 0x4E7FD0u;
label_4e7fd0:
    // 0x4e7fd0: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x4e7fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e7fd4:
    // 0x4e7fd4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4e7fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e7fd8:
    // 0x4e7fd8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e7fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e7fdc:
    // 0x4e7fdc: 0x320f809  jalr        $t9
label_4e7fe0:
    if (ctx->pc == 0x4E7FE0u) {
        ctx->pc = 0x4E7FE0u;
            // 0x4e7fe0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E7FE4u;
        goto label_4e7fe4;
    }
    ctx->pc = 0x4E7FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7FE4u);
        ctx->pc = 0x4E7FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7FDCu;
            // 0x4e7fe0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7FE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7FE4u; }
            if (ctx->pc != 0x4E7FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E7FE4u;
label_4e7fe4:
    // 0x4e7fe4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e7fe8:
    // 0x4e7fe8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x4e7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4e7fec:
    // 0x4e7fec: 0x24428528  addiu       $v0, $v0, -0x7AD8
    ctx->pc = 0x4e7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935848));
label_4e7ff0:
    // 0x4e7ff0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e7ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7ff4:
    // 0x4e7ff4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x4e7ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e7ff8:
    // 0x4e7ff8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x4e7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4e7ffc:
    // 0x4e7ffc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4e7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4e8000:
    // 0x4e8000: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x4e8000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4e8004:
    // 0x4e8004: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x4e8004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_4e8008:
    // 0x4e8008: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x4e8008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_4e800c:
    // 0x4e800c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x4e800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e8010:
    // 0x4e8010: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4e8010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4e8014:
    // 0x4e8014: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4e8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e8018:
    // 0x4e8018: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x4e8018u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_4e801c:
    // 0x4e801c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4e801cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4e8020:
    // 0x4e8020: 0x0  nop
    ctx->pc = 0x4e8020u;
    // NOP
label_4e8024:
    // 0x4e8024: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4e8024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4e8028:
    // 0x4e8028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4e8028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e802c:
    // 0x4e802c: 0x0  nop
    ctx->pc = 0x4e802cu;
    // NOP
label_4e8030:
    // 0x4e8030: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4e8030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4e8034:
    // 0x4e8034: 0x82a20197  lb          $v0, 0x197($s5)
    ctx->pc = 0x4e8034u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 407)));
label_4e8038:
    // 0x4e8038: 0x46020982  mul.s       $f6, $f1, $f2
    ctx->pc = 0x4e8038u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4e803c:
    // 0x4e803c: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_4e8040:
    if (ctx->pc == 0x4E8040u) {
        ctx->pc = 0x4E8040u;
            // 0x4e8040: 0x46000942  mul.s       $f5, $f1, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4E8044u;
        goto label_4e8044;
    }
    ctx->pc = 0x4E803Cu;
    {
        const bool branch_taken_0x4e803c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4E8040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E803Cu;
            // 0x4e8040: 0x46000942  mul.s       $f5, $f1, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e803c) {
            ctx->pc = 0x4E8058u;
            goto label_4e8058;
        }
    }
    ctx->pc = 0x4E8044u;
label_4e8044:
    // 0x4e8044: 0xc6a00134  lwc1        $f0, 0x134($s5)
    ctx->pc = 0x4e8044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e8048:
    // 0x4e8048: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x4e8048u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_4e804c:
    // 0x4e804c: 0x1000000c  b           . + 4 + (0xC << 2)
label_4e8050:
    if (ctx->pc == 0x4E8050u) {
        ctx->pc = 0x4E8050u;
            // 0x4e8050: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->pc = 0x4E8054u;
        goto label_4e8054;
    }
    ctx->pc = 0x4E804Cu;
    {
        const bool branch_taken_0x4e804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E804Cu;
            // 0x4e8050: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e804c) {
            ctx->pc = 0x4E8080u;
            goto label_4e8080;
        }
    }
    ctx->pc = 0x4E8054u;
label_4e8054:
    // 0x4e8054: 0x0  nop
    ctx->pc = 0x4e8054u;
    // NOP
label_4e8058:
    // 0x4e8058: 0x82a20198  lb          $v0, 0x198($s5)
    ctx->pc = 0x4e8058u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 408)));
label_4e805c:
    // 0x4e805c: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_4e8060:
    if (ctx->pc == 0x4E8060u) {
        ctx->pc = 0x4E8064u;
        goto label_4e8064;
    }
    ctx->pc = 0x4E805Cu;
    {
        const bool branch_taken_0x4e805c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e805c) {
            ctx->pc = 0x4E8080u;
            goto label_4e8080;
        }
    }
    ctx->pc = 0x4E8064u;
label_4e8064:
    // 0x4e8064: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x4e8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e8068:
    // 0x4e8068: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4e8068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4e806c:
    // 0x4e806c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e8070:
    // 0x4e8070: 0x0  nop
    ctx->pc = 0x4e8070u;
    // NOP
label_4e8074:
    // 0x4e8074: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4e8074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4e8078:
    // 0x4e8078: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x4e8078u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_4e807c:
    // 0x4e807c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x4e807cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_4e8080:
    // 0x4e8080: 0x92a20196  lbu         $v0, 0x196($s5)
    ctx->pc = 0x4e8080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 406)));
label_4e8084:
    // 0x4e8084: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4e8088:
    if (ctx->pc == 0x4E8088u) {
        ctx->pc = 0x4E808Cu;
        goto label_4e808c;
    }
    ctx->pc = 0x4E8084u;
    {
        const bool branch_taken_0x4e8084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8084) {
            ctx->pc = 0x4E80A8u;
            goto label_4e80a8;
        }
    }
    ctx->pc = 0x4E808Cu;
label_4e808c:
    // 0x4e808c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x4e808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4e8090:
    // 0x4e8090: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_4e8094:
    if (ctx->pc == 0x4E8094u) {
        ctx->pc = 0x4E8098u;
        goto label_4e8098;
    }
    ctx->pc = 0x4E8090u;
    {
        const bool branch_taken_0x4e8090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8090) {
            ctx->pc = 0x4E80A8u;
            goto label_4e80a8;
        }
    }
    ctx->pc = 0x4E8098u;
label_4e8098:
    // 0x4e8098: 0x92a30194  lbu         $v1, 0x194($s5)
    ctx->pc = 0x4e8098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
label_4e809c:
    // 0x4e809c: 0x3c025a5a  lui         $v0, 0x5A5A
    ctx->pc = 0x4e809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23130 << 16));
label_4e80a0:
    // 0x4e80a0: 0x34427800  ori         $v0, $v0, 0x7800
    ctx->pc = 0x4e80a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
label_4e80a4:
    // 0x4e80a4: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x4e80a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e80a8:
    // 0x4e80a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x4e80a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4e80ac:
    // 0x4e80ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e80acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e80b0:
    // 0x4e80b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4e80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4e80b4:
    // 0x4e80b4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x4e80b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4e80b8:
    // 0x4e80b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e80b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e80bc:
    // 0x4e80bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4e80bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e80c0:
    // 0x4e80c0: 0x84860060  lh          $a2, 0x60($a0)
    ctx->pc = 0x4e80c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_4e80c4:
    // 0x4e80c4: 0x8483005e  lh          $v1, 0x5E($a0)
    ctx->pc = 0x4e80c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 94)));
label_4e80c8:
    // 0x4e80c8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4e80c8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e80cc:
    // 0x4e80cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e80d0:
    // 0x4e80d0: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x4e80d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4e80d4:
    // 0x4e80d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4e80d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4e80d8:
    // 0x4e80d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e80d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e80dc:
    // 0x4e80dc: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x4e80dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4e80e0:
    // 0x4e80e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e80e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e80e4:
    // 0x4e80e4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x4e80e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4e80e8:
    // 0x4e80e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e80e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e80ec:
    // 0x4e80ec: 0x46051800  add.s       $f0, $f3, $f5
    ctx->pc = 0x4e80ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_4e80f0:
    // 0x4e80f0: 0x460103c1  sub.s       $f15, $f0, $f1
    ctx->pc = 0x4e80f0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4e80f4:
    // 0x4e80f4: 0x46051881  sub.s       $f2, $f3, $f5
    ctx->pc = 0x4e80f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_4e80f8:
    // 0x4e80f8: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x4e80f8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e80fc:
    // 0x4e80fc: 0x0  nop
    ctx->pc = 0x4e80fcu;
    // NOP
label_4e8100:
    // 0x4e8100: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e8100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e8104:
    // 0x4e8104: 0x46062301  sub.s       $f12, $f4, $f6
    ctx->pc = 0x4e8104u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_4e8108:
    // 0x4e8108: 0x46062380  add.s       $f14, $f4, $f6
    ctx->pc = 0x4e8108u;
    ctx->f[14] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_4e810c:
    // 0x4e810c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e810cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e8110:
    // 0x4e8110: 0xc0bc284  jal         func_2F0A10
label_4e8114:
    if (ctx->pc == 0x4E8114u) {
        ctx->pc = 0x4E8114u;
            // 0x4e8114: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4E8118u;
        goto label_4e8118;
    }
    ctx->pc = 0x4E8110u;
    SET_GPR_U32(ctx, 31, 0x4E8118u);
    ctx->pc = 0x4E8114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8110u;
            // 0x4e8114: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8118u; }
        if (ctx->pc != 0x4E8118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8118u; }
        if (ctx->pc != 0x4E8118u) { return; }
    }
    ctx->pc = 0x4E8118u;
label_4e8118:
    // 0x4e8118: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4e8118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4e811c:
    // 0x4e811c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4e811cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4e8120:
    // 0x4e8120: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x4e8120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_4e8124:
    // 0x4e8124: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_4e8128:
    if (ctx->pc == 0x4E8128u) {
        ctx->pc = 0x4E8128u;
            // 0x4e8128: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x4E812Cu;
        goto label_4e812c;
    }
    ctx->pc = 0x4E8124u;
    {
        const bool branch_taken_0x4e8124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E8128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8124u;
            // 0x4e8128: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8124) {
            ctx->pc = 0x4E7FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e7ff8;
        }
    }
    ctx->pc = 0x4E812Cu;
label_4e812c:
    // 0x4e812c: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x4e812cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e8130:
    // 0x4e8130: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e8130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e8134:
    // 0x4e8134: 0x320f809  jalr        $t9
label_4e8138:
    if (ctx->pc == 0x4E8138u) {
        ctx->pc = 0x4E8138u;
            // 0x4e8138: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E813Cu;
        goto label_4e813c;
    }
    ctx->pc = 0x4E8134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E813Cu);
        ctx->pc = 0x4E8138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8134u;
            // 0x4e8138: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E813Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E813Cu; }
            if (ctx->pc != 0x4E813Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E813Cu;
label_4e813c:
    // 0x4e813c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4e813cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4e8140:
    // 0x4e8140: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4e8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4e8144:
    // 0x4e8144: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4e8144u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e8148:
    // 0x4e8148: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e814c:
    // 0x4e814c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4e814cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e8150:
    // 0x4e8150: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4e8150u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e8154:
    // 0x4e8154: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e8154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e8158:
    // 0x4e8158: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e8158u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e815c:
    // 0x4e815c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e815cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e8160:
    // 0x4e8160: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e8160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8164:
    // 0x4e8164: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e8164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e8168:
    // 0x4e8168: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e8168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e816c:
    // 0x4e816c: 0x3e00008  jr          $ra
label_4e8170:
    if (ctx->pc == 0x4E8170u) {
        ctx->pc = 0x4E8170u;
            // 0x4e8170: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4E8174u;
        goto label_4e8174;
    }
    ctx->pc = 0x4E816Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E816Cu;
            // 0x4e8170: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E8174u;
label_4e8174:
    // 0x4e8174: 0x0  nop
    ctx->pc = 0x4e8174u;
    // NOP
label_4e8178:
    // 0x4e8178: 0x0  nop
    ctx->pc = 0x4e8178u;
    // NOP
label_4e817c:
    // 0x4e817c: 0x0  nop
    ctx->pc = 0x4e817cu;
    // NOP
}
