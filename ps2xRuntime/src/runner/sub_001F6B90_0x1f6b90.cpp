#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6B90
// Address: 0x1f6b90 - 0x1f70e0
void sub_001F6B90_0x1f6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6B90_0x1f6b90");
#endif

    switch (ctx->pc) {
        case 0x1f6b90u: goto label_1f6b90;
        case 0x1f6b94u: goto label_1f6b94;
        case 0x1f6b98u: goto label_1f6b98;
        case 0x1f6b9cu: goto label_1f6b9c;
        case 0x1f6ba0u: goto label_1f6ba0;
        case 0x1f6ba4u: goto label_1f6ba4;
        case 0x1f6ba8u: goto label_1f6ba8;
        case 0x1f6bacu: goto label_1f6bac;
        case 0x1f6bb0u: goto label_1f6bb0;
        case 0x1f6bb4u: goto label_1f6bb4;
        case 0x1f6bb8u: goto label_1f6bb8;
        case 0x1f6bbcu: goto label_1f6bbc;
        case 0x1f6bc0u: goto label_1f6bc0;
        case 0x1f6bc4u: goto label_1f6bc4;
        case 0x1f6bc8u: goto label_1f6bc8;
        case 0x1f6bccu: goto label_1f6bcc;
        case 0x1f6bd0u: goto label_1f6bd0;
        case 0x1f6bd4u: goto label_1f6bd4;
        case 0x1f6bd8u: goto label_1f6bd8;
        case 0x1f6bdcu: goto label_1f6bdc;
        case 0x1f6be0u: goto label_1f6be0;
        case 0x1f6be4u: goto label_1f6be4;
        case 0x1f6be8u: goto label_1f6be8;
        case 0x1f6becu: goto label_1f6bec;
        case 0x1f6bf0u: goto label_1f6bf0;
        case 0x1f6bf4u: goto label_1f6bf4;
        case 0x1f6bf8u: goto label_1f6bf8;
        case 0x1f6bfcu: goto label_1f6bfc;
        case 0x1f6c00u: goto label_1f6c00;
        case 0x1f6c04u: goto label_1f6c04;
        case 0x1f6c08u: goto label_1f6c08;
        case 0x1f6c0cu: goto label_1f6c0c;
        case 0x1f6c10u: goto label_1f6c10;
        case 0x1f6c14u: goto label_1f6c14;
        case 0x1f6c18u: goto label_1f6c18;
        case 0x1f6c1cu: goto label_1f6c1c;
        case 0x1f6c20u: goto label_1f6c20;
        case 0x1f6c24u: goto label_1f6c24;
        case 0x1f6c28u: goto label_1f6c28;
        case 0x1f6c2cu: goto label_1f6c2c;
        case 0x1f6c30u: goto label_1f6c30;
        case 0x1f6c34u: goto label_1f6c34;
        case 0x1f6c38u: goto label_1f6c38;
        case 0x1f6c3cu: goto label_1f6c3c;
        case 0x1f6c40u: goto label_1f6c40;
        case 0x1f6c44u: goto label_1f6c44;
        case 0x1f6c48u: goto label_1f6c48;
        case 0x1f6c4cu: goto label_1f6c4c;
        case 0x1f6c50u: goto label_1f6c50;
        case 0x1f6c54u: goto label_1f6c54;
        case 0x1f6c58u: goto label_1f6c58;
        case 0x1f6c5cu: goto label_1f6c5c;
        case 0x1f6c60u: goto label_1f6c60;
        case 0x1f6c64u: goto label_1f6c64;
        case 0x1f6c68u: goto label_1f6c68;
        case 0x1f6c6cu: goto label_1f6c6c;
        case 0x1f6c70u: goto label_1f6c70;
        case 0x1f6c74u: goto label_1f6c74;
        case 0x1f6c78u: goto label_1f6c78;
        case 0x1f6c7cu: goto label_1f6c7c;
        case 0x1f6c80u: goto label_1f6c80;
        case 0x1f6c84u: goto label_1f6c84;
        case 0x1f6c88u: goto label_1f6c88;
        case 0x1f6c8cu: goto label_1f6c8c;
        case 0x1f6c90u: goto label_1f6c90;
        case 0x1f6c94u: goto label_1f6c94;
        case 0x1f6c98u: goto label_1f6c98;
        case 0x1f6c9cu: goto label_1f6c9c;
        case 0x1f6ca0u: goto label_1f6ca0;
        case 0x1f6ca4u: goto label_1f6ca4;
        case 0x1f6ca8u: goto label_1f6ca8;
        case 0x1f6cacu: goto label_1f6cac;
        case 0x1f6cb0u: goto label_1f6cb0;
        case 0x1f6cb4u: goto label_1f6cb4;
        case 0x1f6cb8u: goto label_1f6cb8;
        case 0x1f6cbcu: goto label_1f6cbc;
        case 0x1f6cc0u: goto label_1f6cc0;
        case 0x1f6cc4u: goto label_1f6cc4;
        case 0x1f6cc8u: goto label_1f6cc8;
        case 0x1f6cccu: goto label_1f6ccc;
        case 0x1f6cd0u: goto label_1f6cd0;
        case 0x1f6cd4u: goto label_1f6cd4;
        case 0x1f6cd8u: goto label_1f6cd8;
        case 0x1f6cdcu: goto label_1f6cdc;
        case 0x1f6ce0u: goto label_1f6ce0;
        case 0x1f6ce4u: goto label_1f6ce4;
        case 0x1f6ce8u: goto label_1f6ce8;
        case 0x1f6cecu: goto label_1f6cec;
        case 0x1f6cf0u: goto label_1f6cf0;
        case 0x1f6cf4u: goto label_1f6cf4;
        case 0x1f6cf8u: goto label_1f6cf8;
        case 0x1f6cfcu: goto label_1f6cfc;
        case 0x1f6d00u: goto label_1f6d00;
        case 0x1f6d04u: goto label_1f6d04;
        case 0x1f6d08u: goto label_1f6d08;
        case 0x1f6d0cu: goto label_1f6d0c;
        case 0x1f6d10u: goto label_1f6d10;
        case 0x1f6d14u: goto label_1f6d14;
        case 0x1f6d18u: goto label_1f6d18;
        case 0x1f6d1cu: goto label_1f6d1c;
        case 0x1f6d20u: goto label_1f6d20;
        case 0x1f6d24u: goto label_1f6d24;
        case 0x1f6d28u: goto label_1f6d28;
        case 0x1f6d2cu: goto label_1f6d2c;
        case 0x1f6d30u: goto label_1f6d30;
        case 0x1f6d34u: goto label_1f6d34;
        case 0x1f6d38u: goto label_1f6d38;
        case 0x1f6d3cu: goto label_1f6d3c;
        case 0x1f6d40u: goto label_1f6d40;
        case 0x1f6d44u: goto label_1f6d44;
        case 0x1f6d48u: goto label_1f6d48;
        case 0x1f6d4cu: goto label_1f6d4c;
        case 0x1f6d50u: goto label_1f6d50;
        case 0x1f6d54u: goto label_1f6d54;
        case 0x1f6d58u: goto label_1f6d58;
        case 0x1f6d5cu: goto label_1f6d5c;
        case 0x1f6d60u: goto label_1f6d60;
        case 0x1f6d64u: goto label_1f6d64;
        case 0x1f6d68u: goto label_1f6d68;
        case 0x1f6d6cu: goto label_1f6d6c;
        case 0x1f6d70u: goto label_1f6d70;
        case 0x1f6d74u: goto label_1f6d74;
        case 0x1f6d78u: goto label_1f6d78;
        case 0x1f6d7cu: goto label_1f6d7c;
        case 0x1f6d80u: goto label_1f6d80;
        case 0x1f6d84u: goto label_1f6d84;
        case 0x1f6d88u: goto label_1f6d88;
        case 0x1f6d8cu: goto label_1f6d8c;
        case 0x1f6d90u: goto label_1f6d90;
        case 0x1f6d94u: goto label_1f6d94;
        case 0x1f6d98u: goto label_1f6d98;
        case 0x1f6d9cu: goto label_1f6d9c;
        case 0x1f6da0u: goto label_1f6da0;
        case 0x1f6da4u: goto label_1f6da4;
        case 0x1f6da8u: goto label_1f6da8;
        case 0x1f6dacu: goto label_1f6dac;
        case 0x1f6db0u: goto label_1f6db0;
        case 0x1f6db4u: goto label_1f6db4;
        case 0x1f6db8u: goto label_1f6db8;
        case 0x1f6dbcu: goto label_1f6dbc;
        case 0x1f6dc0u: goto label_1f6dc0;
        case 0x1f6dc4u: goto label_1f6dc4;
        case 0x1f6dc8u: goto label_1f6dc8;
        case 0x1f6dccu: goto label_1f6dcc;
        case 0x1f6dd0u: goto label_1f6dd0;
        case 0x1f6dd4u: goto label_1f6dd4;
        case 0x1f6dd8u: goto label_1f6dd8;
        case 0x1f6ddcu: goto label_1f6ddc;
        case 0x1f6de0u: goto label_1f6de0;
        case 0x1f6de4u: goto label_1f6de4;
        case 0x1f6de8u: goto label_1f6de8;
        case 0x1f6decu: goto label_1f6dec;
        case 0x1f6df0u: goto label_1f6df0;
        case 0x1f6df4u: goto label_1f6df4;
        case 0x1f6df8u: goto label_1f6df8;
        case 0x1f6dfcu: goto label_1f6dfc;
        case 0x1f6e00u: goto label_1f6e00;
        case 0x1f6e04u: goto label_1f6e04;
        case 0x1f6e08u: goto label_1f6e08;
        case 0x1f6e0cu: goto label_1f6e0c;
        case 0x1f6e10u: goto label_1f6e10;
        case 0x1f6e14u: goto label_1f6e14;
        case 0x1f6e18u: goto label_1f6e18;
        case 0x1f6e1cu: goto label_1f6e1c;
        case 0x1f6e20u: goto label_1f6e20;
        case 0x1f6e24u: goto label_1f6e24;
        case 0x1f6e28u: goto label_1f6e28;
        case 0x1f6e2cu: goto label_1f6e2c;
        case 0x1f6e30u: goto label_1f6e30;
        case 0x1f6e34u: goto label_1f6e34;
        case 0x1f6e38u: goto label_1f6e38;
        case 0x1f6e3cu: goto label_1f6e3c;
        case 0x1f6e40u: goto label_1f6e40;
        case 0x1f6e44u: goto label_1f6e44;
        case 0x1f6e48u: goto label_1f6e48;
        case 0x1f6e4cu: goto label_1f6e4c;
        case 0x1f6e50u: goto label_1f6e50;
        case 0x1f6e54u: goto label_1f6e54;
        case 0x1f6e58u: goto label_1f6e58;
        case 0x1f6e5cu: goto label_1f6e5c;
        case 0x1f6e60u: goto label_1f6e60;
        case 0x1f6e64u: goto label_1f6e64;
        case 0x1f6e68u: goto label_1f6e68;
        case 0x1f6e6cu: goto label_1f6e6c;
        case 0x1f6e70u: goto label_1f6e70;
        case 0x1f6e74u: goto label_1f6e74;
        case 0x1f6e78u: goto label_1f6e78;
        case 0x1f6e7cu: goto label_1f6e7c;
        case 0x1f6e80u: goto label_1f6e80;
        case 0x1f6e84u: goto label_1f6e84;
        case 0x1f6e88u: goto label_1f6e88;
        case 0x1f6e8cu: goto label_1f6e8c;
        case 0x1f6e90u: goto label_1f6e90;
        case 0x1f6e94u: goto label_1f6e94;
        case 0x1f6e98u: goto label_1f6e98;
        case 0x1f6e9cu: goto label_1f6e9c;
        case 0x1f6ea0u: goto label_1f6ea0;
        case 0x1f6ea4u: goto label_1f6ea4;
        case 0x1f6ea8u: goto label_1f6ea8;
        case 0x1f6eacu: goto label_1f6eac;
        case 0x1f6eb0u: goto label_1f6eb0;
        case 0x1f6eb4u: goto label_1f6eb4;
        case 0x1f6eb8u: goto label_1f6eb8;
        case 0x1f6ebcu: goto label_1f6ebc;
        case 0x1f6ec0u: goto label_1f6ec0;
        case 0x1f6ec4u: goto label_1f6ec4;
        case 0x1f6ec8u: goto label_1f6ec8;
        case 0x1f6eccu: goto label_1f6ecc;
        case 0x1f6ed0u: goto label_1f6ed0;
        case 0x1f6ed4u: goto label_1f6ed4;
        case 0x1f6ed8u: goto label_1f6ed8;
        case 0x1f6edcu: goto label_1f6edc;
        case 0x1f6ee0u: goto label_1f6ee0;
        case 0x1f6ee4u: goto label_1f6ee4;
        case 0x1f6ee8u: goto label_1f6ee8;
        case 0x1f6eecu: goto label_1f6eec;
        case 0x1f6ef0u: goto label_1f6ef0;
        case 0x1f6ef4u: goto label_1f6ef4;
        case 0x1f6ef8u: goto label_1f6ef8;
        case 0x1f6efcu: goto label_1f6efc;
        case 0x1f6f00u: goto label_1f6f00;
        case 0x1f6f04u: goto label_1f6f04;
        case 0x1f6f08u: goto label_1f6f08;
        case 0x1f6f0cu: goto label_1f6f0c;
        case 0x1f6f10u: goto label_1f6f10;
        case 0x1f6f14u: goto label_1f6f14;
        case 0x1f6f18u: goto label_1f6f18;
        case 0x1f6f1cu: goto label_1f6f1c;
        case 0x1f6f20u: goto label_1f6f20;
        case 0x1f6f24u: goto label_1f6f24;
        case 0x1f6f28u: goto label_1f6f28;
        case 0x1f6f2cu: goto label_1f6f2c;
        case 0x1f6f30u: goto label_1f6f30;
        case 0x1f6f34u: goto label_1f6f34;
        case 0x1f6f38u: goto label_1f6f38;
        case 0x1f6f3cu: goto label_1f6f3c;
        case 0x1f6f40u: goto label_1f6f40;
        case 0x1f6f44u: goto label_1f6f44;
        case 0x1f6f48u: goto label_1f6f48;
        case 0x1f6f4cu: goto label_1f6f4c;
        case 0x1f6f50u: goto label_1f6f50;
        case 0x1f6f54u: goto label_1f6f54;
        case 0x1f6f58u: goto label_1f6f58;
        case 0x1f6f5cu: goto label_1f6f5c;
        case 0x1f6f60u: goto label_1f6f60;
        case 0x1f6f64u: goto label_1f6f64;
        case 0x1f6f68u: goto label_1f6f68;
        case 0x1f6f6cu: goto label_1f6f6c;
        case 0x1f6f70u: goto label_1f6f70;
        case 0x1f6f74u: goto label_1f6f74;
        case 0x1f6f78u: goto label_1f6f78;
        case 0x1f6f7cu: goto label_1f6f7c;
        case 0x1f6f80u: goto label_1f6f80;
        case 0x1f6f84u: goto label_1f6f84;
        case 0x1f6f88u: goto label_1f6f88;
        case 0x1f6f8cu: goto label_1f6f8c;
        case 0x1f6f90u: goto label_1f6f90;
        case 0x1f6f94u: goto label_1f6f94;
        case 0x1f6f98u: goto label_1f6f98;
        case 0x1f6f9cu: goto label_1f6f9c;
        case 0x1f6fa0u: goto label_1f6fa0;
        case 0x1f6fa4u: goto label_1f6fa4;
        case 0x1f6fa8u: goto label_1f6fa8;
        case 0x1f6facu: goto label_1f6fac;
        case 0x1f6fb0u: goto label_1f6fb0;
        case 0x1f6fb4u: goto label_1f6fb4;
        case 0x1f6fb8u: goto label_1f6fb8;
        case 0x1f6fbcu: goto label_1f6fbc;
        case 0x1f6fc0u: goto label_1f6fc0;
        case 0x1f6fc4u: goto label_1f6fc4;
        case 0x1f6fc8u: goto label_1f6fc8;
        case 0x1f6fccu: goto label_1f6fcc;
        case 0x1f6fd0u: goto label_1f6fd0;
        case 0x1f6fd4u: goto label_1f6fd4;
        case 0x1f6fd8u: goto label_1f6fd8;
        case 0x1f6fdcu: goto label_1f6fdc;
        case 0x1f6fe0u: goto label_1f6fe0;
        case 0x1f6fe4u: goto label_1f6fe4;
        case 0x1f6fe8u: goto label_1f6fe8;
        case 0x1f6fecu: goto label_1f6fec;
        case 0x1f6ff0u: goto label_1f6ff0;
        case 0x1f6ff4u: goto label_1f6ff4;
        case 0x1f6ff8u: goto label_1f6ff8;
        case 0x1f6ffcu: goto label_1f6ffc;
        case 0x1f7000u: goto label_1f7000;
        case 0x1f7004u: goto label_1f7004;
        case 0x1f7008u: goto label_1f7008;
        case 0x1f700cu: goto label_1f700c;
        case 0x1f7010u: goto label_1f7010;
        case 0x1f7014u: goto label_1f7014;
        case 0x1f7018u: goto label_1f7018;
        case 0x1f701cu: goto label_1f701c;
        case 0x1f7020u: goto label_1f7020;
        case 0x1f7024u: goto label_1f7024;
        case 0x1f7028u: goto label_1f7028;
        case 0x1f702cu: goto label_1f702c;
        case 0x1f7030u: goto label_1f7030;
        case 0x1f7034u: goto label_1f7034;
        case 0x1f7038u: goto label_1f7038;
        case 0x1f703cu: goto label_1f703c;
        case 0x1f7040u: goto label_1f7040;
        case 0x1f7044u: goto label_1f7044;
        case 0x1f7048u: goto label_1f7048;
        case 0x1f704cu: goto label_1f704c;
        case 0x1f7050u: goto label_1f7050;
        case 0x1f7054u: goto label_1f7054;
        case 0x1f7058u: goto label_1f7058;
        case 0x1f705cu: goto label_1f705c;
        case 0x1f7060u: goto label_1f7060;
        case 0x1f7064u: goto label_1f7064;
        case 0x1f7068u: goto label_1f7068;
        case 0x1f706cu: goto label_1f706c;
        case 0x1f7070u: goto label_1f7070;
        case 0x1f7074u: goto label_1f7074;
        case 0x1f7078u: goto label_1f7078;
        case 0x1f707cu: goto label_1f707c;
        case 0x1f7080u: goto label_1f7080;
        case 0x1f7084u: goto label_1f7084;
        case 0x1f7088u: goto label_1f7088;
        case 0x1f708cu: goto label_1f708c;
        case 0x1f7090u: goto label_1f7090;
        case 0x1f7094u: goto label_1f7094;
        case 0x1f7098u: goto label_1f7098;
        case 0x1f709cu: goto label_1f709c;
        case 0x1f70a0u: goto label_1f70a0;
        case 0x1f70a4u: goto label_1f70a4;
        case 0x1f70a8u: goto label_1f70a8;
        case 0x1f70acu: goto label_1f70ac;
        case 0x1f70b0u: goto label_1f70b0;
        case 0x1f70b4u: goto label_1f70b4;
        case 0x1f70b8u: goto label_1f70b8;
        case 0x1f70bcu: goto label_1f70bc;
        case 0x1f70c0u: goto label_1f70c0;
        case 0x1f70c4u: goto label_1f70c4;
        case 0x1f70c8u: goto label_1f70c8;
        case 0x1f70ccu: goto label_1f70cc;
        case 0x1f70d0u: goto label_1f70d0;
        case 0x1f70d4u: goto label_1f70d4;
        case 0x1f70d8u: goto label_1f70d8;
        case 0x1f70dcu: goto label_1f70dc;
        default: break;
    }

    ctx->pc = 0x1f6b90u;

label_1f6b90:
    // 0x1f6b90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f6b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1f6b94:
    // 0x1f6b94: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f6b98:
    // 0x1f6b98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f6b9c:
    // 0x1f6b9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f6b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f6ba0:
    // 0x1f6ba0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f6ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f6ba4:
    // 0x1f6ba4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f6ba8:
    // 0x1f6ba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f6ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f6bac:
    // 0x1f6bac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f6bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f6bb0:
    // 0x1f6bb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f6bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f6bb4:
    // 0x1f6bb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f6bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f6bb8:
    // 0x1f6bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f6bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f6bbc:
    // 0x1f6bbc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f6bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f6bc0:
    // 0x1f6bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f6bc4:
    // 0x1f6bc4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f6bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f6bc8:
    // 0x1f6bc8: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1f6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f6bcc:
    // 0x1f6bcc: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f6bd0:
    // 0x1f6bd0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f6bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f6bd4:
    // 0x1f6bd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f6bd8:
    if (ctx->pc == 0x1F6BD8u) {
        ctx->pc = 0x1F6BD8u;
            // 0x1f6bd8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F6BDCu;
        goto label_1f6bdc;
    }
    ctx->pc = 0x1F6BD4u;
    {
        const bool branch_taken_0x1f6bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BD4u;
            // 0x1f6bd8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bd4) {
            ctx->pc = 0x1F6C04u;
            goto label_1f6c04;
        }
    }
    ctx->pc = 0x1F6BDCu;
label_1f6bdc:
    // 0x1f6bdc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f6be0:
    // 0x1f6be0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f6be4:
    // 0x1f6be4: 0x2442af90  addiu       $v0, $v0, -0x5070
    ctx->pc = 0x1f6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946704));
label_1f6be8:
    // 0x1f6be8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f6be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f6bec:
    // 0x1f6bec: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f6becu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f6bf0:
    // 0x1f6bf0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f6bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f6bf4:
    // 0x1f6bf4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f6bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f6bf8:
    // 0x1f6bf8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f6bfc:
    // 0x1f6bfc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f6bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f6c00:
    // 0x1f6c00: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f6c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f6c04:
    // 0x1f6c04: 0xafb400a0  sw          $s4, 0xA0($sp)
    ctx->pc = 0x1f6c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 20));
label_1f6c08:
    // 0x1f6c08: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f6c0c:
    // 0x1f6c0c: 0xafb300a4  sw          $s3, 0xA4($sp)
    ctx->pc = 0x1f6c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 19));
label_1f6c10:
    // 0x1f6c10: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1f6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f6c14:
    // 0x1f6c14: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f6c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f6c18:
    // 0x1f6c18: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x1f6c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1f6c1c:
    // 0x1f6c1c: 0xc0a4608  jal         func_291820
label_1f6c20:
    if (ctx->pc == 0x1F6C20u) {
        ctx->pc = 0x1F6C20u;
            // 0x1f6c20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C24u;
        goto label_1f6c24;
    }
    ctx->pc = 0x1F6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1F6C24u);
    ctx->pc = 0x1F6C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C1Cu;
            // 0x1f6c20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291820u;
    if (runtime->hasFunction(0x291820u)) {
        auto targetFn = runtime->lookupFunction(0x291820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C24u; }
        if (ctx->pc != 0x1F6C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291820_0x291820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C24u; }
        if (ctx->pc != 0x1F6C24u) { return; }
    }
    ctx->pc = 0x1F6C24u;
label_1f6c24:
    // 0x1f6c24: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1f6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6c28:
    // 0x1f6c28: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f6c2c:
    // 0x1f6c2c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f6c30:
    // 0x1f6c30: 0x460001c5  abs.s       $f7, $f0
    ctx->pc = 0x1f6c30u;
    ctx->f[7] = FPU_ABS_S(ctx->f[0]);
label_1f6c34:
    // 0x1f6c34: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1f6c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6c38:
    // 0x1f6c38: 0x46000185  abs.s       $f6, $f0
    ctx->pc = 0x1f6c38u;
    ctx->f[6] = FPU_ABS_S(ctx->f[0]);
label_1f6c3c:
    // 0x1f6c3c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1f6c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6c40:
    // 0x1f6c40: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x1f6c40u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
label_1f6c44:
    // 0x1f6c44: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f6c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6c48:
    // 0x1f6c48: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x1f6c48u;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
label_1f6c4c:
    // 0x1f6c4c: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x1f6c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6c50:
    // 0x1f6c50: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x1f6c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6c54:
    // 0x1f6c54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f6c58:
    if (ctx->pc == 0x1F6C58u) {
        ctx->pc = 0x1F6C58u;
            // 0x1f6c58: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F6C5Cu;
        goto label_1f6c5c;
    }
    ctx->pc = 0x1F6C54u;
    {
        const bool branch_taken_0x1f6c54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C54u;
            // 0x1f6c58: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c54) {
            ctx->pc = 0x1F6C60u;
            goto label_1f6c60;
        }
    }
    ctx->pc = 0x1F6C5Cu;
label_1f6c5c:
    // 0x1f6c5c: 0x460038c6  mov.s       $f3, $f7
    ctx->pc = 0x1f6c5cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[7]);
label_1f6c60:
    // 0x1f6c60: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1f6c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6c64:
    // 0x1f6c64: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x1f6c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6c68:
    // 0x1f6c68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f6c6c:
    if (ctx->pc == 0x1F6C6Cu) {
        ctx->pc = 0x1F6C70u;
        goto label_1f6c70;
    }
    ctx->pc = 0x1F6C68u;
    {
        const bool branch_taken_0x1f6c68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6c68) {
            ctx->pc = 0x1F6C74u;
            goto label_1f6c74;
        }
    }
    ctx->pc = 0x1F6C70u;
label_1f6c70:
    // 0x1f6c70: 0x46003086  mov.s       $f2, $f6
    ctx->pc = 0x1f6c70u;
    ctx->f[2] = FPU_MOV_S(ctx->f[6]);
label_1f6c74:
    // 0x1f6c74: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6c78:
    // 0x1f6c78: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x1f6c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6c7c:
    // 0x1f6c7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f6c80:
    if (ctx->pc == 0x1F6C80u) {
        ctx->pc = 0x1F6C84u;
        goto label_1f6c84;
    }
    ctx->pc = 0x1F6C7Cu;
    {
        const bool branch_taken_0x1f6c7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6c7c) {
            ctx->pc = 0x1F6C88u;
            goto label_1f6c88;
        }
    }
    ctx->pc = 0x1F6C84u;
label_1f6c84:
    // 0x1f6c84: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x1f6c84u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
label_1f6c88:
    // 0x1f6c88: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1f6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6c8c:
    // 0x1f6c8c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1f6c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6c90:
    // 0x1f6c90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f6c94:
    if (ctx->pc == 0x1F6C94u) {
        ctx->pc = 0x1F6C98u;
        goto label_1f6c98;
    }
    ctx->pc = 0x1F6C90u;
    {
        const bool branch_taken_0x1f6c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6c90) {
            ctx->pc = 0x1F6C9Cu;
            goto label_1f6c9c;
        }
    }
    ctx->pc = 0x1F6C98u;
label_1f6c98:
    // 0x1f6c98: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x1f6c98u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_1f6c9c:
    // 0x1f6c9c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1f6c9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1f6ca0:
    // 0x1f6ca0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1f6ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f6ca4:
    // 0x1f6ca4: 0x46071801  sub.s       $f0, $f3, $f7
    ctx->pc = 0x1f6ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_1f6ca8:
    // 0x1f6ca8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f6ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f6cac:
    // 0x1f6cac: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x1f6cacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1f6cb0:
    // 0x1f6cb0: 0x460610c1  sub.s       $f3, $f2, $f6
    ctx->pc = 0x1f6cb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_1f6cb4:
    // 0x1f6cb4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1f6cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f6cb8:
    // 0x1f6cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6cbc:
    // 0x1f6cbc: 0x0  nop
    ctx->pc = 0x1f6cbcu;
    // NOP
label_1f6cc0:
    // 0x1f6cc0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f6cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6cc4:
    // 0x1f6cc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1f6cc8:
    if (ctx->pc == 0x1F6CC8u) {
        ctx->pc = 0x1F6CC8u;
            // 0x1f6cc8: 0xe7a30064  swc1        $f3, 0x64($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x1F6CCCu;
        goto label_1f6ccc;
    }
    ctx->pc = 0x1F6CC4u;
    {
        const bool branch_taken_0x1f6cc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6CC4u;
            // 0x1f6cc8: 0xe7a30064  swc1        $f3, 0x64($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6cc4) {
            ctx->pc = 0x1F6CD4u;
            goto label_1f6cd4;
        }
    }
    ctx->pc = 0x1F6CCCu;
label_1f6ccc:
    // 0x1f6ccc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f6cd0:
    if (ctx->pc == 0x1F6CD0u) {
        ctx->pc = 0x1F6CD0u;
            // 0x1f6cd0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1F6CD4u;
        goto label_1f6cd4;
    }
    ctx->pc = 0x1F6CCCu;
    {
        const bool branch_taken_0x1f6ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6CCCu;
            // 0x1f6cd0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ccc) {
            ctx->pc = 0x1F6CD8u;
            goto label_1f6cd8;
        }
    }
    ctx->pc = 0x1F6CD4u;
label_1f6cd4:
    // 0x1f6cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6cd8:
    // 0x1f6cd8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1f6cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6cdc:
    // 0x1f6cdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6ce0:
    // 0x1f6ce0: 0x0  nop
    ctx->pc = 0x1f6ce0u;
    // NOP
label_1f6ce4:
    // 0x1f6ce4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6ce8:
    // 0x1f6ce8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1f6cec:
    if (ctx->pc == 0x1F6CECu) {
        ctx->pc = 0x1F6CECu;
            // 0x1f6cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6CF0u;
        goto label_1f6cf0;
    }
    ctx->pc = 0x1F6CE8u;
    {
        const bool branch_taken_0x1f6ce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6ce8) {
            ctx->pc = 0x1F6CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6CE8u;
            // 0x1f6cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6CF4u;
            goto label_1f6cf4;
        }
    }
    ctx->pc = 0x1F6CF0u;
label_1f6cf0:
    // 0x1f6cf0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f6cf4:
    // 0x1f6cf4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1f6cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6cf8:
    // 0x1f6cf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6cfc:
    // 0x1f6cfc: 0x0  nop
    ctx->pc = 0x1f6cfcu;
    // NOP
label_1f6d00:
    // 0x1f6d00: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f6d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6d04:
    // 0x1f6d04: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1f6d08:
    if (ctx->pc == 0x1F6D08u) {
        ctx->pc = 0x1F6D08u;
            // 0x1f6d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D0Cu;
        goto label_1f6d0c;
    }
    ctx->pc = 0x1F6D04u;
    {
        const bool branch_taken_0x1f6d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6d04) {
            ctx->pc = 0x1F6D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D04u;
            // 0x1f6d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6D10u;
            goto label_1f6d10;
        }
    }
    ctx->pc = 0x1F6D0Cu;
label_1f6d0c:
    // 0x1f6d0c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f6d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6d10:
    // 0x1f6d10: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1f6d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6d14:
    // 0x1f6d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6d18:
    // 0x1f6d18: 0x0  nop
    ctx->pc = 0x1f6d18u;
    // NOP
label_1f6d1c:
    // 0x1f6d1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6d20:
    // 0x1f6d20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f6d24:
    if (ctx->pc == 0x1F6D24u) {
        ctx->pc = 0x1F6D24u;
            // 0x1f6d24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F6D28u;
        goto label_1f6d28;
    }
    ctx->pc = 0x1F6D20u;
    {
        const bool branch_taken_0x1f6d20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D20u;
            // 0x1f6d24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d20) {
            ctx->pc = 0x1F6D2Cu;
            goto label_1f6d2c;
        }
    }
    ctx->pc = 0x1F6D28u;
label_1f6d28:
    // 0x1f6d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6d2c:
    // 0x1f6d2c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1f6d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_1f6d30:
    // 0x1f6d30: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f6d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f6d34:
    // 0x1f6d34: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x1f6d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_1f6d38:
    // 0x1f6d38: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1f6d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1f6d3c:
    // 0x1f6d3c: 0x30a5000e  andi        $a1, $a1, 0xE
    ctx->pc = 0x1f6d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)14);
label_1f6d40:
    // 0x1f6d40: 0x50a0005e  beql        $a1, $zero, . + 4 + (0x5E << 2)
label_1f6d44:
    if (ctx->pc == 0x1F6D44u) {
        ctx->pc = 0x1F6D44u;
            // 0x1f6d44: 0xc4820020  lwc1        $f2, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F6D48u;
        goto label_1f6d48;
    }
    ctx->pc = 0x1F6D40u;
    {
        const bool branch_taken_0x1f6d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d40) {
            ctx->pc = 0x1F6D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D40u;
            // 0x1f6d44: 0xc4820020  lwc1        $f2, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6EBCu;
            goto label_1f6ebc;
        }
    }
    ctx->pc = 0x1F6D48u;
label_1f6d48:
    // 0x1f6d48: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x1f6d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f6d4c:
    // 0x1f6d4c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1f6d4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_1f6d50:
    // 0x1f6d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6d54:
    // 0x1f6d54: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x1f6d54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_1f6d58:
    // 0x1f6d58: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x1f6d58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1f6d5c:
    // 0x1f6d5c: 0x460101c4  c1          0x101C4
    ctx->pc = 0x1f6d5cu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
label_1f6d60:
    // 0x1f6d60: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f6d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f6d64:
    // 0x1f6d64: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x1f6d64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f6d68:
    // 0x1f6d68: 0x0  nop
    ctx->pc = 0x1f6d68u;
    // NOP
label_1f6d6c:
    // 0x1f6d6c: 0x46072143  div.s       $f5, $f4, $f7
    ctx->pc = 0x1f6d6cu;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[7];
label_1f6d70:
    // 0x1f6d70: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1f6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6d74:
    // 0x1f6d74: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1f6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6d78:
    // 0x1f6d78: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1f6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6d7c:
    // 0x1f6d7c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1f6d7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_1f6d80:
    // 0x1f6d80: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1f6d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_1f6d84:
    // 0x1f6d84: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x1f6d84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1f6d88:
    // 0x1f6d88: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x1f6d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f6d8c:
    // 0x1f6d8c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f6d8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f6d90:
    // 0x1f6d90: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1f6d90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f6d94:
    // 0x1f6d94: 0x46053102  mul.s       $f4, $f6, $f5
    ctx->pc = 0x1f6d94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_1f6d98:
    // 0x1f6d98: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1f6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6d9c:
    // 0x1f6d9c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1f6d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6da0:
    // 0x1f6da0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1f6da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6da4:
    // 0x1f6da4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1f6da4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1f6da8:
    // 0x1f6da8: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x1f6da8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_1f6dac:
    // 0x1f6dac: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1f6dacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6db0:
    // 0x1f6db0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f6db4:
    if (ctx->pc == 0x1F6DB4u) {
        ctx->pc = 0x1F6DB4u;
            // 0x1f6db4: 0xe7a40060  swc1        $f4, 0x60($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->pc = 0x1F6DB8u;
        goto label_1f6db8;
    }
    ctx->pc = 0x1F6DB0u;
    {
        const bool branch_taken_0x1f6db0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6DB0u;
            // 0x1f6db4: 0xe7a40060  swc1        $f4, 0x60($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6db0) {
            ctx->pc = 0x1F6DC0u;
            goto label_1f6dc0;
        }
    }
    ctx->pc = 0x1F6DB8u;
label_1f6db8:
    // 0x1f6db8: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1f6dbc:
    if (ctx->pc == 0x1F6DBCu) {
        ctx->pc = 0x1F6DBCu;
            // 0x1f6dbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DC0u;
        goto label_1f6dc0;
    }
    ctx->pc = 0x1F6DB8u;
    {
        const bool branch_taken_0x1f6db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6DB8u;
            // 0x1f6dbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6db8) {
            ctx->pc = 0x1F7048u;
            goto label_1f7048;
        }
    }
    ctx->pc = 0x1F6DC0u;
label_1f6dc0:
    // 0x1f6dc0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1f6dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6dc4:
    // 0x1f6dc4: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1f6dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
label_1f6dc8:
    // 0x1f6dc8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1f6dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1f6dcc:
    // 0x1f6dcc: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1f6dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f6dd0:
    // 0x1f6dd0: 0xca4024  and         $t0, $a2, $t2
    ctx->pc = 0x1f6dd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
label_1f6dd4:
    // 0x1f6dd4: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x1f6dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1f6dd8:
    // 0x1f6dd8: 0xa84026  xor         $t0, $a1, $t0
    ctx->pc = 0x1f6dd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
label_1f6ddc:
    // 0x1f6ddc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1f6ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1f6de0:
    // 0x1f6de0: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1f6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1f6de4:
    // 0x1f6de4: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1f6de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6de8:
    // 0x1f6de8: 0xea4824  and         $t1, $a3, $t2
    ctx->pc = 0x1f6de8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
label_1f6dec:
    // 0x1f6dec: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x1f6decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1f6df0:
    // 0x1f6df0: 0xca3824  and         $a3, $a2, $t2
    ctx->pc = 0x1f6df0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
label_1f6df4:
    // 0x1f6df4: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x1f6df4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1f6df8:
    // 0x1f6df8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1f6df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6dfc:
    // 0x1f6dfc: 0xaa3024  and         $a2, $a1, $t2
    ctx->pc = 0x1f6dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
label_1f6e00:
    // 0x1f6e00: 0x1092826  xor         $a1, $t0, $t1
    ctx->pc = 0x1f6e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 9));
label_1f6e04:
    // 0x1f6e04: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x1f6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_1f6e08:
    // 0x1f6e08: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x1f6e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f6e0c:
    // 0x1f6e0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1f6e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1f6e10:
    // 0x1f6e10: 0xa72826  xor         $a1, $a1, $a3
    ctx->pc = 0x1f6e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 7));
label_1f6e14:
    // 0x1f6e14: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x1f6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_1f6e18:
    // 0x1f6e18: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x1f6e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1f6e1c:
    // 0x1f6e1c: 0xa62826  xor         $a1, $a1, $a2
    ctx->pc = 0x1f6e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
label_1f6e20:
    // 0x1f6e20: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x1f6e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
label_1f6e24:
    // 0x1f6e24: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x1f6e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f6e28:
    // 0x1f6e28: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x1f6e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f6e2c:
    // 0x1f6e2c: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x1f6e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f6e30:
    // 0x1f6e30: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1f6e30u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_1f6e34:
    // 0x1f6e34: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f6e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f6e38:
    // 0x1f6e38: 0x46002a07  neg.s       $f8, $f5
    ctx->pc = 0x1f6e38u;
    ctx->f[8] = FPU_NEG_S(ctx->f[5]);
label_1f6e3c:
    // 0x1f6e3c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f6e3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f6e40:
    // 0x1f6e40: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f6e40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f6e44:
    // 0x1f6e44: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x1f6e44u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
label_1f6e48:
    // 0x1f6e48: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f6e48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f6e4c:
    // 0x1f6e4c: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f6e4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f6e50:
    // 0x1f6e50: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1f6e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f6e54:
    // 0x1f6e54: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x1f6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6e58:
    // 0x1f6e58: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x1f6e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f6e5c:
    // 0x1f6e5c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1f6e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6e60:
    // 0x1f6e60: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f6e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f6e64:
    // 0x1f6e64: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f6e64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f6e68:
    // 0x1f6e68: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f6e68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f6e6c:
    // 0x1f6e6c: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x1f6e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f6e70:
    // 0x1f6e70: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f6e70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f6e74:
    // 0x1f6e74: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x1f6e74u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_1f6e78:
    // 0x1f6e78: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f6e78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f6e7c:
    // 0x1f6e7c: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1f6e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f6e80:
    // 0x1f6e80: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1f6e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6e84:
    // 0x1f6e84: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1f6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6e88:
    // 0x1f6e88: 0xc4840028  lwc1        $f4, 0x28($a0)
    ctx->pc = 0x1f6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f6e8c:
    // 0x1f6e8c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f6e8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f6e90:
    // 0x1f6e90: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f6e90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f6e94:
    // 0x1f6e94: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f6e94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f6e98:
    // 0x1f6e98: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f6e98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f6e9c:
    // 0x1f6e9c: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f6e9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f6ea0:
    // 0x1f6ea0: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f6ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f6ea4:
    // 0x1f6ea4: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x1f6ea4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f6ea8:
    // 0x1f6ea8: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x1f6ea8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1f6eac:
    // 0x1f6eac: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x1f6eacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f6eb0:
    // 0x1f6eb0: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x1f6eb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f6eb4:
    // 0x1f6eb4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1f6eb8:
    if (ctx->pc == 0x1F6EB8u) {
        ctx->pc = 0x1F6EB8u;
            // 0x1f6eb8: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x1F6EBCu;
        goto label_1f6ebc;
    }
    ctx->pc = 0x1F6EB4u;
    {
        const bool branch_taken_0x1f6eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EB4u;
            // 0x1f6eb8: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6eb4) {
            ctx->pc = 0x1F6FE0u;
            goto label_1f6fe0;
        }
    }
    ctx->pc = 0x1F6EBCu;
label_1f6ebc:
    // 0x1f6ebc: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1f6ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6ec0:
    // 0x1f6ec0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1f6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6ec4:
    // 0x1f6ec4: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x1f6ec4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_1f6ec8:
    // 0x1f6ec8: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x1f6ec8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_1f6ecc:
    // 0x1f6ecc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1f6eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6ed0:
    // 0x1f6ed0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1f6ed4:
    if (ctx->pc == 0x1F6ED4u) {
        ctx->pc = 0x1F6ED4u;
            // 0x1f6ed4: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->pc = 0x1F6ED8u;
        goto label_1f6ed8;
    }
    ctx->pc = 0x1F6ED0u;
    {
        const bool branch_taken_0x1f6ed0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6ED0u;
            // 0x1f6ed4: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ed0) {
            ctx->pc = 0x1F6F2Cu;
            goto label_1f6f2c;
        }
    }
    ctx->pc = 0x1F6ED8u;
label_1f6ed8:
    // 0x1f6ed8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f6ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6edc:
    // 0x1f6edc: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1f6ee0:
    if (ctx->pc == 0x1F6EE0u) {
        ctx->pc = 0x1F6EE0u;
            // 0x1f6ee0: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1F6EE4u;
        goto label_1f6ee4;
    }
    ctx->pc = 0x1F6EDCu;
    {
        const bool branch_taken_0x1f6edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6edc) {
            ctx->pc = 0x1F6EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EDCu;
            // 0x1f6ee0: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6F08u;
            goto label_1f6f08;
        }
    }
    ctx->pc = 0x1F6EE4u;
label_1f6ee4:
    // 0x1f6ee4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f6ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f6ee8:
    // 0x1f6ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6eec:
    // 0x1f6eec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f6eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6ef0:
    // 0x1f6ef0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f6ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f6ef4:
    // 0x1f6ef4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1f6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6ef8:
    // 0x1f6ef8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f6ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f6efc:
    // 0x1f6efc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1f6efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f00:
    // 0x1f6f00: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1f6f04:
    if (ctx->pc == 0x1F6F04u) {
        ctx->pc = 0x1F6F04u;
            // 0x1f6f04: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x1F6F08u;
        goto label_1f6f08;
    }
    ctx->pc = 0x1F6F00u;
    {
        const bool branch_taken_0x1f6f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F00u;
            // 0x1f6f04: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f00) {
            ctx->pc = 0x1F6F80u;
            goto label_1f6f80;
        }
    }
    ctx->pc = 0x1F6F08u;
label_1f6f08:
    // 0x1f6f08: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f6f08u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f6f0c:
    // 0x1f6f0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f6f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6f10:
    // 0x1f6f10: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1f6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f14:
    // 0x1f6f14: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f6f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f6f18:
    // 0x1f6f18: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1f6f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f1c:
    // 0x1f6f1c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f6f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f6f20:
    // 0x1f6f20: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1f6f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f24:
    // 0x1f6f24: 0x10000016  b           . + 4 + (0x16 << 2)
label_1f6f28:
    if (ctx->pc == 0x1F6F28u) {
        ctx->pc = 0x1F6F28u;
            // 0x1f6f28: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x1F6F2Cu;
        goto label_1f6f2c;
    }
    ctx->pc = 0x1F6F24u;
    {
        const bool branch_taken_0x1f6f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F24u;
            // 0x1f6f28: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f24) {
            ctx->pc = 0x1F6F80u;
            goto label_1f6f80;
        }
    }
    ctx->pc = 0x1F6F2Cu;
label_1f6f2c:
    // 0x1f6f2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6f30:
    // 0x1f6f30: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_1f6f34:
    if (ctx->pc == 0x1F6F34u) {
        ctx->pc = 0x1F6F34u;
            // 0x1f6f34: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1F6F38u;
        goto label_1f6f38;
    }
    ctx->pc = 0x1F6F30u;
    {
        const bool branch_taken_0x1f6f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f30) {
            ctx->pc = 0x1F6F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F30u;
            // 0x1f6f34: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6F60u;
            goto label_1f6f60;
        }
    }
    ctx->pc = 0x1F6F38u;
label_1f6f38:
    // 0x1f6f38: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f6f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f6f3c:
    // 0x1f6f3c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1f6f3cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1f6f40:
    // 0x1f6f40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6f44:
    // 0x1f6f44: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1f6f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f48:
    // 0x1f6f48: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f6f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f6f4c:
    // 0x1f6f4c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1f6f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f50:
    // 0x1f6f50: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f6f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f6f54:
    // 0x1f6f54: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1f6f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f58:
    // 0x1f6f58: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f6f5c:
    if (ctx->pc == 0x1F6F5Cu) {
        ctx->pc = 0x1F6F5Cu;
            // 0x1f6f5c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x1F6F60u;
        goto label_1f6f60;
    }
    ctx->pc = 0x1F6F58u;
    {
        const bool branch_taken_0x1f6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F58u;
            // 0x1f6f5c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f58) {
            ctx->pc = 0x1F6F80u;
            goto label_1f6f80;
        }
    }
    ctx->pc = 0x1F6F60u;
label_1f6f60:
    // 0x1f6f60: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f6f60u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f6f64:
    // 0x1f6f64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f6f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6f68:
    // 0x1f6f68: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1f6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f6c:
    // 0x1f6f6c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f6f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f6f70:
    // 0x1f6f70: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1f6f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f74:
    // 0x1f6f74: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f6f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f6f78:
    // 0x1f6f78: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1f6f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6f7c:
    // 0x1f6f7c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f6f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f6f80:
    // 0x1f6f80: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1f6f80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f6f84:
    // 0x1f6f84: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x1f6f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_1f6f88:
    // 0x1f6f88: 0xc4a10070  lwc1        $f1, 0x70($a1)
    ctx->pc = 0x1f6f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6f8c:
    // 0x1f6f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6f90:
    // 0x1f6f90: 0x0  nop
    ctx->pc = 0x1f6f90u;
    // NOP
label_1f6f94:
    // 0x1f6f94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6f98:
    // 0x1f6f98: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_1f6f9c:
    if (ctx->pc == 0x1F6F9Cu) {
        ctx->pc = 0x1F6F9Cu;
            // 0x1f6f9c: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1F6FA0u;
        goto label_1f6fa0;
    }
    ctx->pc = 0x1F6F98u;
    {
        const bool branch_taken_0x1f6f98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f98) {
            ctx->pc = 0x1F6F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F98u;
            // 0x1f6f9c: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6FD4u;
            goto label_1f6fd4;
        }
    }
    ctx->pc = 0x1F6FA0u;
label_1f6fa0:
    // 0x1f6fa0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1f6fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6fa4:
    // 0x1f6fa4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f6fa4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f6fa8:
    // 0x1f6fa8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f6fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f6fac:
    // 0x1f6fac: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f6facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6fb0:
    // 0x1f6fb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f6fb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f6fb4:
    // 0x1f6fb4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f6fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f6fb8:
    // 0x1f6fb8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1f6fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6fbc:
    // 0x1f6fbc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f6fbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f6fc0:
    // 0x1f6fc0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f6fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f6fc4:
    // 0x1f6fc4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f6fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6fc8:
    // 0x1f6fc8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f6fc8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f6fcc:
    // 0x1f6fcc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f6fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f6fd0:
    // 0x1f6fd0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1f6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6fd4:
    // 0x1f6fd4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1f6fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6fd8:
    // 0x1f6fd8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f6fd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f6fdc:
    // 0x1f6fdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f6fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f6fe0:
    // 0x1f6fe0: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x1f6fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f6fe4:
    // 0x1f6fe4: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x1f6fe4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
label_1f6fe8:
    // 0x1f6fe8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1f6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6fec:
    // 0x1f6fec: 0x46041901  sub.s       $f4, $f3, $f4
    ctx->pc = 0x1f6fecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_1f6ff0:
    // 0x1f6ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6ff4:
    // 0x1f6ff4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f6ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f6ff8:
    // 0x1f6ff8: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1f6ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6ffc:
    // 0x1f6ffc: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f6ffcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f7000:
    // 0x1f7000: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f7000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f7004:
    // 0x1f7004: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f7004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f7008:
    // 0x1f7008: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1f7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f700c:
    // 0x1f700c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1f700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7010:
    // 0x1f7010: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f7010u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f7014:
    // 0x1f7014: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f7014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f7018:
    // 0x1f7018: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1f7018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f701c:
    // 0x1f701c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7020:
    // 0x1f7020: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1f7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7024:
    // 0x1f7024: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f7024u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f7028:
    // 0x1f7028: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f7028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f702c:
    // 0x1f702c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1f702cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f7030:
    // 0x1f7030: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1f7030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7034:
    // 0x1f7034: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x1f7034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7038:
    // 0x1f7038: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f7038u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f703c:
    // 0x1f703c: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f703cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f7040:
    // 0x1f7040: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f7040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f7044:
    // 0x1f7044: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f7044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f7048:
    // 0x1f7048: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1f7048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1f704c:
    // 0x1f704c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1f704cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1f7050:
    // 0x1f7050: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f7054:
    if (ctx->pc == 0x1F7054u) {
        ctx->pc = 0x1F7058u;
        goto label_1f7058;
    }
    ctx->pc = 0x1F7050u;
    {
        const bool branch_taken_0x1f7050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7050) {
            ctx->pc = 0x1F706Cu;
            goto label_1f706c;
        }
    }
    ctx->pc = 0x1F7058u;
label_1f7058:
    // 0x1f7058: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f705c:
    // 0x1f705c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f7060:
    // 0x1f7060: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f7060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f7064:
    // 0x1f7064: 0x320f809  jalr        $t9
label_1f7068:
    if (ctx->pc == 0x1F7068u) {
        ctx->pc = 0x1F7068u;
            // 0x1f7068: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1F706Cu;
        goto label_1f706c;
    }
    ctx->pc = 0x1F7064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F706Cu);
        ctx->pc = 0x1F7068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7064u;
            // 0x1f7068: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F706Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F706Cu; }
            if (ctx->pc != 0x1F706Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F706Cu;
label_1f706c:
    // 0x1f706c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f7070:
    // 0x1f7070: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f7070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f7074:
    // 0x1f7074: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f7074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f7078:
    // 0x1f7078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f7078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f707c:
    // 0x1f707c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f7080:
    // 0x1f7080: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f7080u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f7084:
    // 0x1f7084: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f7088:
    if (ctx->pc == 0x1F7088u) {
        ctx->pc = 0x1F7088u;
            // 0x1f7088: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F708Cu;
        goto label_1f708c;
    }
    ctx->pc = 0x1F7084u;
    {
        const bool branch_taken_0x1f7084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7084u;
            // 0x1f7088: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7084) {
            ctx->pc = 0x1F70B4u;
            goto label_1f70b4;
        }
    }
    ctx->pc = 0x1F708Cu;
label_1f708c:
    // 0x1f708c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f7090:
    // 0x1f7090: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f7090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f7094:
    // 0x1f7094: 0x2463afa0  addiu       $v1, $v1, -0x5060
    ctx->pc = 0x1f7094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946720));
label_1f7098:
    // 0x1f7098: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f7098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f709c:
    // 0x1f709c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f70a0:
    // 0x1f70a0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f70a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f70a4:
    // 0x1f70a4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f70a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f70a8:
    // 0x1f70a8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f70ac:
    // 0x1f70ac: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f70acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f70b0:
    // 0x1f70b0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f70b4:
    // 0x1f70b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f70b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f70b8:
    // 0x1f70b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f70b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f70bc:
    // 0x1f70bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f70bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f70c0:
    // 0x1f70c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f70c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f70c4:
    // 0x1f70c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f70c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f70c8:
    // 0x1f70c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f70c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f70cc:
    // 0x1f70cc: 0x3e00008  jr          $ra
label_1f70d0:
    if (ctx->pc == 0x1F70D0u) {
        ctx->pc = 0x1F70D0u;
            // 0x1f70d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1F70D4u;
        goto label_1f70d4;
    }
    ctx->pc = 0x1F70CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F70D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70CCu;
            // 0x1f70d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F70D4u;
label_1f70d4:
    // 0x1f70d4: 0x0  nop
    ctx->pc = 0x1f70d4u;
    // NOP
label_1f70d8:
    // 0x1f70d8: 0x0  nop
    ctx->pc = 0x1f70d8u;
    // NOP
label_1f70dc:
    // 0x1f70dc: 0x0  nop
    ctx->pc = 0x1f70dcu;
    // NOP
}
