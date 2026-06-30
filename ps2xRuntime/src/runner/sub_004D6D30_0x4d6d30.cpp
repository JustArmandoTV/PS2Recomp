#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D6D30
// Address: 0x4d6d30 - 0x4d7270
void sub_004D6D30_0x4d6d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6D30_0x4d6d30");
#endif

    switch (ctx->pc) {
        case 0x4d6d30u: goto label_4d6d30;
        case 0x4d6d34u: goto label_4d6d34;
        case 0x4d6d38u: goto label_4d6d38;
        case 0x4d6d3cu: goto label_4d6d3c;
        case 0x4d6d40u: goto label_4d6d40;
        case 0x4d6d44u: goto label_4d6d44;
        case 0x4d6d48u: goto label_4d6d48;
        case 0x4d6d4cu: goto label_4d6d4c;
        case 0x4d6d50u: goto label_4d6d50;
        case 0x4d6d54u: goto label_4d6d54;
        case 0x4d6d58u: goto label_4d6d58;
        case 0x4d6d5cu: goto label_4d6d5c;
        case 0x4d6d60u: goto label_4d6d60;
        case 0x4d6d64u: goto label_4d6d64;
        case 0x4d6d68u: goto label_4d6d68;
        case 0x4d6d6cu: goto label_4d6d6c;
        case 0x4d6d70u: goto label_4d6d70;
        case 0x4d6d74u: goto label_4d6d74;
        case 0x4d6d78u: goto label_4d6d78;
        case 0x4d6d7cu: goto label_4d6d7c;
        case 0x4d6d80u: goto label_4d6d80;
        case 0x4d6d84u: goto label_4d6d84;
        case 0x4d6d88u: goto label_4d6d88;
        case 0x4d6d8cu: goto label_4d6d8c;
        case 0x4d6d90u: goto label_4d6d90;
        case 0x4d6d94u: goto label_4d6d94;
        case 0x4d6d98u: goto label_4d6d98;
        case 0x4d6d9cu: goto label_4d6d9c;
        case 0x4d6da0u: goto label_4d6da0;
        case 0x4d6da4u: goto label_4d6da4;
        case 0x4d6da8u: goto label_4d6da8;
        case 0x4d6dacu: goto label_4d6dac;
        case 0x4d6db0u: goto label_4d6db0;
        case 0x4d6db4u: goto label_4d6db4;
        case 0x4d6db8u: goto label_4d6db8;
        case 0x4d6dbcu: goto label_4d6dbc;
        case 0x4d6dc0u: goto label_4d6dc0;
        case 0x4d6dc4u: goto label_4d6dc4;
        case 0x4d6dc8u: goto label_4d6dc8;
        case 0x4d6dccu: goto label_4d6dcc;
        case 0x4d6dd0u: goto label_4d6dd0;
        case 0x4d6dd4u: goto label_4d6dd4;
        case 0x4d6dd8u: goto label_4d6dd8;
        case 0x4d6ddcu: goto label_4d6ddc;
        case 0x4d6de0u: goto label_4d6de0;
        case 0x4d6de4u: goto label_4d6de4;
        case 0x4d6de8u: goto label_4d6de8;
        case 0x4d6decu: goto label_4d6dec;
        case 0x4d6df0u: goto label_4d6df0;
        case 0x4d6df4u: goto label_4d6df4;
        case 0x4d6df8u: goto label_4d6df8;
        case 0x4d6dfcu: goto label_4d6dfc;
        case 0x4d6e00u: goto label_4d6e00;
        case 0x4d6e04u: goto label_4d6e04;
        case 0x4d6e08u: goto label_4d6e08;
        case 0x4d6e0cu: goto label_4d6e0c;
        case 0x4d6e10u: goto label_4d6e10;
        case 0x4d6e14u: goto label_4d6e14;
        case 0x4d6e18u: goto label_4d6e18;
        case 0x4d6e1cu: goto label_4d6e1c;
        case 0x4d6e20u: goto label_4d6e20;
        case 0x4d6e24u: goto label_4d6e24;
        case 0x4d6e28u: goto label_4d6e28;
        case 0x4d6e2cu: goto label_4d6e2c;
        case 0x4d6e30u: goto label_4d6e30;
        case 0x4d6e34u: goto label_4d6e34;
        case 0x4d6e38u: goto label_4d6e38;
        case 0x4d6e3cu: goto label_4d6e3c;
        case 0x4d6e40u: goto label_4d6e40;
        case 0x4d6e44u: goto label_4d6e44;
        case 0x4d6e48u: goto label_4d6e48;
        case 0x4d6e4cu: goto label_4d6e4c;
        case 0x4d6e50u: goto label_4d6e50;
        case 0x4d6e54u: goto label_4d6e54;
        case 0x4d6e58u: goto label_4d6e58;
        case 0x4d6e5cu: goto label_4d6e5c;
        case 0x4d6e60u: goto label_4d6e60;
        case 0x4d6e64u: goto label_4d6e64;
        case 0x4d6e68u: goto label_4d6e68;
        case 0x4d6e6cu: goto label_4d6e6c;
        case 0x4d6e70u: goto label_4d6e70;
        case 0x4d6e74u: goto label_4d6e74;
        case 0x4d6e78u: goto label_4d6e78;
        case 0x4d6e7cu: goto label_4d6e7c;
        case 0x4d6e80u: goto label_4d6e80;
        case 0x4d6e84u: goto label_4d6e84;
        case 0x4d6e88u: goto label_4d6e88;
        case 0x4d6e8cu: goto label_4d6e8c;
        case 0x4d6e90u: goto label_4d6e90;
        case 0x4d6e94u: goto label_4d6e94;
        case 0x4d6e98u: goto label_4d6e98;
        case 0x4d6e9cu: goto label_4d6e9c;
        case 0x4d6ea0u: goto label_4d6ea0;
        case 0x4d6ea4u: goto label_4d6ea4;
        case 0x4d6ea8u: goto label_4d6ea8;
        case 0x4d6eacu: goto label_4d6eac;
        case 0x4d6eb0u: goto label_4d6eb0;
        case 0x4d6eb4u: goto label_4d6eb4;
        case 0x4d6eb8u: goto label_4d6eb8;
        case 0x4d6ebcu: goto label_4d6ebc;
        case 0x4d6ec0u: goto label_4d6ec0;
        case 0x4d6ec4u: goto label_4d6ec4;
        case 0x4d6ec8u: goto label_4d6ec8;
        case 0x4d6eccu: goto label_4d6ecc;
        case 0x4d6ed0u: goto label_4d6ed0;
        case 0x4d6ed4u: goto label_4d6ed4;
        case 0x4d6ed8u: goto label_4d6ed8;
        case 0x4d6edcu: goto label_4d6edc;
        case 0x4d6ee0u: goto label_4d6ee0;
        case 0x4d6ee4u: goto label_4d6ee4;
        case 0x4d6ee8u: goto label_4d6ee8;
        case 0x4d6eecu: goto label_4d6eec;
        case 0x4d6ef0u: goto label_4d6ef0;
        case 0x4d6ef4u: goto label_4d6ef4;
        case 0x4d6ef8u: goto label_4d6ef8;
        case 0x4d6efcu: goto label_4d6efc;
        case 0x4d6f00u: goto label_4d6f00;
        case 0x4d6f04u: goto label_4d6f04;
        case 0x4d6f08u: goto label_4d6f08;
        case 0x4d6f0cu: goto label_4d6f0c;
        case 0x4d6f10u: goto label_4d6f10;
        case 0x4d6f14u: goto label_4d6f14;
        case 0x4d6f18u: goto label_4d6f18;
        case 0x4d6f1cu: goto label_4d6f1c;
        case 0x4d6f20u: goto label_4d6f20;
        case 0x4d6f24u: goto label_4d6f24;
        case 0x4d6f28u: goto label_4d6f28;
        case 0x4d6f2cu: goto label_4d6f2c;
        case 0x4d6f30u: goto label_4d6f30;
        case 0x4d6f34u: goto label_4d6f34;
        case 0x4d6f38u: goto label_4d6f38;
        case 0x4d6f3cu: goto label_4d6f3c;
        case 0x4d6f40u: goto label_4d6f40;
        case 0x4d6f44u: goto label_4d6f44;
        case 0x4d6f48u: goto label_4d6f48;
        case 0x4d6f4cu: goto label_4d6f4c;
        case 0x4d6f50u: goto label_4d6f50;
        case 0x4d6f54u: goto label_4d6f54;
        case 0x4d6f58u: goto label_4d6f58;
        case 0x4d6f5cu: goto label_4d6f5c;
        case 0x4d6f60u: goto label_4d6f60;
        case 0x4d6f64u: goto label_4d6f64;
        case 0x4d6f68u: goto label_4d6f68;
        case 0x4d6f6cu: goto label_4d6f6c;
        case 0x4d6f70u: goto label_4d6f70;
        case 0x4d6f74u: goto label_4d6f74;
        case 0x4d6f78u: goto label_4d6f78;
        case 0x4d6f7cu: goto label_4d6f7c;
        case 0x4d6f80u: goto label_4d6f80;
        case 0x4d6f84u: goto label_4d6f84;
        case 0x4d6f88u: goto label_4d6f88;
        case 0x4d6f8cu: goto label_4d6f8c;
        case 0x4d6f90u: goto label_4d6f90;
        case 0x4d6f94u: goto label_4d6f94;
        case 0x4d6f98u: goto label_4d6f98;
        case 0x4d6f9cu: goto label_4d6f9c;
        case 0x4d6fa0u: goto label_4d6fa0;
        case 0x4d6fa4u: goto label_4d6fa4;
        case 0x4d6fa8u: goto label_4d6fa8;
        case 0x4d6facu: goto label_4d6fac;
        case 0x4d6fb0u: goto label_4d6fb0;
        case 0x4d6fb4u: goto label_4d6fb4;
        case 0x4d6fb8u: goto label_4d6fb8;
        case 0x4d6fbcu: goto label_4d6fbc;
        case 0x4d6fc0u: goto label_4d6fc0;
        case 0x4d6fc4u: goto label_4d6fc4;
        case 0x4d6fc8u: goto label_4d6fc8;
        case 0x4d6fccu: goto label_4d6fcc;
        case 0x4d6fd0u: goto label_4d6fd0;
        case 0x4d6fd4u: goto label_4d6fd4;
        case 0x4d6fd8u: goto label_4d6fd8;
        case 0x4d6fdcu: goto label_4d6fdc;
        case 0x4d6fe0u: goto label_4d6fe0;
        case 0x4d6fe4u: goto label_4d6fe4;
        case 0x4d6fe8u: goto label_4d6fe8;
        case 0x4d6fecu: goto label_4d6fec;
        case 0x4d6ff0u: goto label_4d6ff0;
        case 0x4d6ff4u: goto label_4d6ff4;
        case 0x4d6ff8u: goto label_4d6ff8;
        case 0x4d6ffcu: goto label_4d6ffc;
        case 0x4d7000u: goto label_4d7000;
        case 0x4d7004u: goto label_4d7004;
        case 0x4d7008u: goto label_4d7008;
        case 0x4d700cu: goto label_4d700c;
        case 0x4d7010u: goto label_4d7010;
        case 0x4d7014u: goto label_4d7014;
        case 0x4d7018u: goto label_4d7018;
        case 0x4d701cu: goto label_4d701c;
        case 0x4d7020u: goto label_4d7020;
        case 0x4d7024u: goto label_4d7024;
        case 0x4d7028u: goto label_4d7028;
        case 0x4d702cu: goto label_4d702c;
        case 0x4d7030u: goto label_4d7030;
        case 0x4d7034u: goto label_4d7034;
        case 0x4d7038u: goto label_4d7038;
        case 0x4d703cu: goto label_4d703c;
        case 0x4d7040u: goto label_4d7040;
        case 0x4d7044u: goto label_4d7044;
        case 0x4d7048u: goto label_4d7048;
        case 0x4d704cu: goto label_4d704c;
        case 0x4d7050u: goto label_4d7050;
        case 0x4d7054u: goto label_4d7054;
        case 0x4d7058u: goto label_4d7058;
        case 0x4d705cu: goto label_4d705c;
        case 0x4d7060u: goto label_4d7060;
        case 0x4d7064u: goto label_4d7064;
        case 0x4d7068u: goto label_4d7068;
        case 0x4d706cu: goto label_4d706c;
        case 0x4d7070u: goto label_4d7070;
        case 0x4d7074u: goto label_4d7074;
        case 0x4d7078u: goto label_4d7078;
        case 0x4d707cu: goto label_4d707c;
        case 0x4d7080u: goto label_4d7080;
        case 0x4d7084u: goto label_4d7084;
        case 0x4d7088u: goto label_4d7088;
        case 0x4d708cu: goto label_4d708c;
        case 0x4d7090u: goto label_4d7090;
        case 0x4d7094u: goto label_4d7094;
        case 0x4d7098u: goto label_4d7098;
        case 0x4d709cu: goto label_4d709c;
        case 0x4d70a0u: goto label_4d70a0;
        case 0x4d70a4u: goto label_4d70a4;
        case 0x4d70a8u: goto label_4d70a8;
        case 0x4d70acu: goto label_4d70ac;
        case 0x4d70b0u: goto label_4d70b0;
        case 0x4d70b4u: goto label_4d70b4;
        case 0x4d70b8u: goto label_4d70b8;
        case 0x4d70bcu: goto label_4d70bc;
        case 0x4d70c0u: goto label_4d70c0;
        case 0x4d70c4u: goto label_4d70c4;
        case 0x4d70c8u: goto label_4d70c8;
        case 0x4d70ccu: goto label_4d70cc;
        case 0x4d70d0u: goto label_4d70d0;
        case 0x4d70d4u: goto label_4d70d4;
        case 0x4d70d8u: goto label_4d70d8;
        case 0x4d70dcu: goto label_4d70dc;
        case 0x4d70e0u: goto label_4d70e0;
        case 0x4d70e4u: goto label_4d70e4;
        case 0x4d70e8u: goto label_4d70e8;
        case 0x4d70ecu: goto label_4d70ec;
        case 0x4d70f0u: goto label_4d70f0;
        case 0x4d70f4u: goto label_4d70f4;
        case 0x4d70f8u: goto label_4d70f8;
        case 0x4d70fcu: goto label_4d70fc;
        case 0x4d7100u: goto label_4d7100;
        case 0x4d7104u: goto label_4d7104;
        case 0x4d7108u: goto label_4d7108;
        case 0x4d710cu: goto label_4d710c;
        case 0x4d7110u: goto label_4d7110;
        case 0x4d7114u: goto label_4d7114;
        case 0x4d7118u: goto label_4d7118;
        case 0x4d711cu: goto label_4d711c;
        case 0x4d7120u: goto label_4d7120;
        case 0x4d7124u: goto label_4d7124;
        case 0x4d7128u: goto label_4d7128;
        case 0x4d712cu: goto label_4d712c;
        case 0x4d7130u: goto label_4d7130;
        case 0x4d7134u: goto label_4d7134;
        case 0x4d7138u: goto label_4d7138;
        case 0x4d713cu: goto label_4d713c;
        case 0x4d7140u: goto label_4d7140;
        case 0x4d7144u: goto label_4d7144;
        case 0x4d7148u: goto label_4d7148;
        case 0x4d714cu: goto label_4d714c;
        case 0x4d7150u: goto label_4d7150;
        case 0x4d7154u: goto label_4d7154;
        case 0x4d7158u: goto label_4d7158;
        case 0x4d715cu: goto label_4d715c;
        case 0x4d7160u: goto label_4d7160;
        case 0x4d7164u: goto label_4d7164;
        case 0x4d7168u: goto label_4d7168;
        case 0x4d716cu: goto label_4d716c;
        case 0x4d7170u: goto label_4d7170;
        case 0x4d7174u: goto label_4d7174;
        case 0x4d7178u: goto label_4d7178;
        case 0x4d717cu: goto label_4d717c;
        case 0x4d7180u: goto label_4d7180;
        case 0x4d7184u: goto label_4d7184;
        case 0x4d7188u: goto label_4d7188;
        case 0x4d718cu: goto label_4d718c;
        case 0x4d7190u: goto label_4d7190;
        case 0x4d7194u: goto label_4d7194;
        case 0x4d7198u: goto label_4d7198;
        case 0x4d719cu: goto label_4d719c;
        case 0x4d71a0u: goto label_4d71a0;
        case 0x4d71a4u: goto label_4d71a4;
        case 0x4d71a8u: goto label_4d71a8;
        case 0x4d71acu: goto label_4d71ac;
        case 0x4d71b0u: goto label_4d71b0;
        case 0x4d71b4u: goto label_4d71b4;
        case 0x4d71b8u: goto label_4d71b8;
        case 0x4d71bcu: goto label_4d71bc;
        case 0x4d71c0u: goto label_4d71c0;
        case 0x4d71c4u: goto label_4d71c4;
        case 0x4d71c8u: goto label_4d71c8;
        case 0x4d71ccu: goto label_4d71cc;
        case 0x4d71d0u: goto label_4d71d0;
        case 0x4d71d4u: goto label_4d71d4;
        case 0x4d71d8u: goto label_4d71d8;
        case 0x4d71dcu: goto label_4d71dc;
        case 0x4d71e0u: goto label_4d71e0;
        case 0x4d71e4u: goto label_4d71e4;
        case 0x4d71e8u: goto label_4d71e8;
        case 0x4d71ecu: goto label_4d71ec;
        case 0x4d71f0u: goto label_4d71f0;
        case 0x4d71f4u: goto label_4d71f4;
        case 0x4d71f8u: goto label_4d71f8;
        case 0x4d71fcu: goto label_4d71fc;
        case 0x4d7200u: goto label_4d7200;
        case 0x4d7204u: goto label_4d7204;
        case 0x4d7208u: goto label_4d7208;
        case 0x4d720cu: goto label_4d720c;
        case 0x4d7210u: goto label_4d7210;
        case 0x4d7214u: goto label_4d7214;
        case 0x4d7218u: goto label_4d7218;
        case 0x4d721cu: goto label_4d721c;
        case 0x4d7220u: goto label_4d7220;
        case 0x4d7224u: goto label_4d7224;
        case 0x4d7228u: goto label_4d7228;
        case 0x4d722cu: goto label_4d722c;
        case 0x4d7230u: goto label_4d7230;
        case 0x4d7234u: goto label_4d7234;
        case 0x4d7238u: goto label_4d7238;
        case 0x4d723cu: goto label_4d723c;
        case 0x4d7240u: goto label_4d7240;
        case 0x4d7244u: goto label_4d7244;
        case 0x4d7248u: goto label_4d7248;
        case 0x4d724cu: goto label_4d724c;
        case 0x4d7250u: goto label_4d7250;
        case 0x4d7254u: goto label_4d7254;
        case 0x4d7258u: goto label_4d7258;
        case 0x4d725cu: goto label_4d725c;
        case 0x4d7260u: goto label_4d7260;
        case 0x4d7264u: goto label_4d7264;
        case 0x4d7268u: goto label_4d7268;
        case 0x4d726cu: goto label_4d726c;
        default: break;
    }

    ctx->pc = 0x4d6d30u;

label_4d6d30:
    // 0x4d6d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d6d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d6d34:
    // 0x4d6d34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4d6d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d6d38:
    // 0x4d6d38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d6d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d6d3c:
    // 0x4d6d3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d6d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d6d40:
    // 0x4d6d40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d6d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d6d44:
    // 0x4d6d44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d6d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d6d48:
    // 0x4d6d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d6d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d6d4c:
    // 0x4d6d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6d50:
    // 0x4d6d50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d6d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d6d54:
    // 0x4d6d54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4d6d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4d6d58:
    // 0x4d6d58: 0xc10ca68  jal         func_4329A0
label_4d6d5c:
    if (ctx->pc == 0x4D6D5Cu) {
        ctx->pc = 0x4D6D5Cu;
            // 0x4d6d5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4D6D60u;
        goto label_4d6d60;
    }
    ctx->pc = 0x4D6D58u;
    SET_GPR_U32(ctx, 31, 0x4D6D60u);
    ctx->pc = 0x4D6D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6D58u;
            // 0x4d6d5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6D60u; }
        if (ctx->pc != 0x4D6D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6D60u; }
        if (ctx->pc != 0x4D6D60u) { return; }
    }
    ctx->pc = 0x4D6D60u;
label_4d6d60:
    // 0x4d6d60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d6d64:
    // 0x4d6d64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d6d68:
    // 0x4d6d68: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4d6d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4d6d6c:
    // 0x4d6d6c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d6d70:
    // 0x4d6d70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d6d74:
    // 0x4d6d74: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4d6d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4d6d78:
    // 0x4d6d78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d6d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d6d7c:
    // 0x4d6d7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d6d80:
    // 0x4d6d80: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4d6d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4d6d84:
    // 0x4d6d84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d6d88:
    // 0x4d6d88: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4d6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4d6d8c:
    // 0x4d6d8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4d6d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d6d90:
    // 0x4d6d90: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4d6d90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4d6d94:
    // 0x4d6d94: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4d6d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4d6d98:
    // 0x4d6d98: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4d6d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4d6d9c:
    // 0x4d6d9c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4d6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4d6da0:
    // 0x4d6da0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4d6da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4d6da4:
    // 0x4d6da4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4d6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4d6da8:
    // 0x4d6da8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4d6da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4d6dac:
    // 0x4d6dac: 0xc0582cc  jal         func_160B30
label_4d6db0:
    if (ctx->pc == 0x4D6DB0u) {
        ctx->pc = 0x4D6DB0u;
            // 0x4d6db0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4D6DB4u;
        goto label_4d6db4;
    }
    ctx->pc = 0x4D6DACu;
    SET_GPR_U32(ctx, 31, 0x4D6DB4u);
    ctx->pc = 0x4D6DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6DACu;
            // 0x4d6db0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6DB4u; }
        if (ctx->pc != 0x4D6DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6DB4u; }
        if (ctx->pc != 0x4D6DB4u) { return; }
    }
    ctx->pc = 0x4D6DB4u;
label_4d6db4:
    // 0x4d6db4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d6db8:
    // 0x4d6db8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4d6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4d6dbc:
    // 0x4d6dbc: 0x24632798  addiu       $v1, $v1, 0x2798
    ctx->pc = 0x4d6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10136));
label_4d6dc0:
    // 0x4d6dc0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4d6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4d6dc4:
    // 0x4d6dc4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4d6dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4d6dc8:
    // 0x4d6dc8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d6dcc:
    // 0x4d6dcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d6dd0:
    // 0x4d6dd0: 0xac44aa50  sw          $a0, -0x55B0($v0)
    ctx->pc = 0x4d6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945360), GPR_U32(ctx, 4));
label_4d6dd4:
    // 0x4d6dd4: 0x246327b0  addiu       $v1, $v1, 0x27B0
    ctx->pc = 0x4d6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10160));
label_4d6dd8:
    // 0x4d6dd8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d6ddc:
    // 0x4d6ddc: 0x244227e8  addiu       $v0, $v0, 0x27E8
    ctx->pc = 0x4d6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10216));
label_4d6de0:
    // 0x4d6de0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d6de4:
    // 0x4d6de4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4d6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4d6de8:
    // 0x4d6de8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4d6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4d6dec:
    // 0x4d6dec: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4d6decu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4d6df0:
    // 0x4d6df0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4d6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4d6df4:
    // 0x4d6df4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4d6df4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4d6df8:
    // 0x4d6df8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4d6df8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4d6dfc:
    // 0x4d6dfc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4d6dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4d6e00:
    // 0x4d6e00: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4d6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4d6e04:
    // 0x4d6e04: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4d6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4d6e08:
    // 0x4d6e08: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4d6e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4d6e0c:
    // 0x4d6e0c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4d6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4d6e10:
    // 0x4d6e10: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4d6e10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4d6e14:
    // 0x4d6e14: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4d6e18:
    if (ctx->pc == 0x4D6E18u) {
        ctx->pc = 0x4D6E1Cu;
        goto label_4d6e1c;
    }
    ctx->pc = 0x4D6E14u;
    {
        const bool branch_taken_0x4d6e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6e14) {
            ctx->pc = 0x4D6EA8u;
            goto label_4d6ea8;
        }
    }
    ctx->pc = 0x4D6E1Cu;
label_4d6e1c:
    // 0x4d6e1c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4d6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4d6e20:
    // 0x4d6e20: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4d6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4d6e24:
    // 0x4d6e24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4d6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4d6e28:
    // 0x4d6e28: 0xc040138  jal         func_1004E0
label_4d6e2c:
    if (ctx->pc == 0x4D6E2Cu) {
        ctx->pc = 0x4D6E2Cu;
            // 0x4d6e2c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4D6E30u;
        goto label_4d6e30;
    }
    ctx->pc = 0x4D6E28u;
    SET_GPR_U32(ctx, 31, 0x4D6E30u);
    ctx->pc = 0x4D6E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6E28u;
            // 0x4d6e2c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E30u; }
        if (ctx->pc != 0x4D6E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E30u; }
        if (ctx->pc != 0x4D6E30u) { return; }
    }
    ctx->pc = 0x4D6E30u;
label_4d6e30:
    // 0x4d6e30: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d6e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d6e34:
    // 0x4d6e34: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4d6e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4d6e38:
    // 0x4d6e38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d6e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d6e3c:
    // 0x4d6e3c: 0x24a56ed0  addiu       $a1, $a1, 0x6ED0
    ctx->pc = 0x4d6e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28368));
label_4d6e40:
    // 0x4d6e40: 0x24c66670  addiu       $a2, $a2, 0x6670
    ctx->pc = 0x4d6e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26224));
label_4d6e44:
    // 0x4d6e44: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4d6e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4d6e48:
    // 0x4d6e48: 0xc040840  jal         func_102100
label_4d6e4c:
    if (ctx->pc == 0x4D6E4Cu) {
        ctx->pc = 0x4D6E4Cu;
            // 0x4d6e4c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6E50u;
        goto label_4d6e50;
    }
    ctx->pc = 0x4D6E48u;
    SET_GPR_U32(ctx, 31, 0x4D6E50u);
    ctx->pc = 0x4D6E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6E48u;
            // 0x4d6e4c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E50u; }
        if (ctx->pc != 0x4D6E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E50u; }
        if (ctx->pc != 0x4D6E50u) { return; }
    }
    ctx->pc = 0x4D6E50u;
label_4d6e50:
    // 0x4d6e50: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4d6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4d6e54:
    // 0x4d6e54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d6e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d6e58:
    // 0x4d6e58: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4d6e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4d6e5c:
    // 0x4d6e5c: 0xc0788fc  jal         func_1E23F0
label_4d6e60:
    if (ctx->pc == 0x4D6E60u) {
        ctx->pc = 0x4D6E60u;
            // 0x4d6e60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6E64u;
        goto label_4d6e64;
    }
    ctx->pc = 0x4D6E5Cu;
    SET_GPR_U32(ctx, 31, 0x4D6E64u);
    ctx->pc = 0x4D6E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6E5Cu;
            // 0x4d6e60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E64u; }
        if (ctx->pc != 0x4D6E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E64u; }
        if (ctx->pc != 0x4D6E64u) { return; }
    }
    ctx->pc = 0x4D6E64u;
label_4d6e64:
    // 0x4d6e64: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d6e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d6e68:
    // 0x4d6e68: 0xc0788fc  jal         func_1E23F0
label_4d6e6c:
    if (ctx->pc == 0x4D6E6Cu) {
        ctx->pc = 0x4D6E6Cu;
            // 0x4d6e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6E70u;
        goto label_4d6e70;
    }
    ctx->pc = 0x4D6E68u;
    SET_GPR_U32(ctx, 31, 0x4D6E70u);
    ctx->pc = 0x4D6E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6E68u;
            // 0x4d6e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E70u; }
        if (ctx->pc != 0x4D6E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E70u; }
        if (ctx->pc != 0x4D6E70u) { return; }
    }
    ctx->pc = 0x4D6E70u;
label_4d6e70:
    // 0x4d6e70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d6e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6e74:
    // 0x4d6e74: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4d6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4d6e78:
    // 0x4d6e78: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d6e7c:
    // 0x4d6e7c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4d6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4d6e80:
    // 0x4d6e80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d6e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d6e84:
    // 0x4d6e84: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4d6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4d6e88:
    // 0x4d6e88: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4d6e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4d6e8c:
    // 0x4d6e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d6e90:
    // 0x4d6e90: 0xc0a997c  jal         func_2A65F0
label_4d6e94:
    if (ctx->pc == 0x4D6E94u) {
        ctx->pc = 0x4D6E94u;
            // 0x4d6e94: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4D6E98u;
        goto label_4d6e98;
    }
    ctx->pc = 0x4D6E90u;
    SET_GPR_U32(ctx, 31, 0x4D6E98u);
    ctx->pc = 0x4D6E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6E90u;
            // 0x4d6e94: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E98u; }
        if (ctx->pc != 0x4D6E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6E98u; }
        if (ctx->pc != 0x4D6E98u) { return; }
    }
    ctx->pc = 0x4D6E98u;
label_4d6e98:
    // 0x4d6e98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d6e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4d6e9c:
    // 0x4d6e9c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4d6e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d6ea0:
    // 0x4d6ea0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4d6ea4:
    if (ctx->pc == 0x4D6EA4u) {
        ctx->pc = 0x4D6EA4u;
            // 0x4d6ea4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4D6EA8u;
        goto label_4d6ea8;
    }
    ctx->pc = 0x4D6EA0u;
    {
        const bool branch_taken_0x4d6ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D6EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6EA0u;
            // 0x4d6ea4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6ea0) {
            ctx->pc = 0x4D6E74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d6e74;
        }
    }
    ctx->pc = 0x4D6EA8u;
label_4d6ea8:
    // 0x4d6ea8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d6ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d6eac:
    // 0x4d6eac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d6eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d6eb0:
    // 0x4d6eb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d6eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d6eb4:
    // 0x4d6eb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d6eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d6eb8:
    // 0x4d6eb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d6eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6ebc:
    // 0x4d6ebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6ec0:
    // 0x4d6ec0: 0x3e00008  jr          $ra
label_4d6ec4:
    if (ctx->pc == 0x4D6EC4u) {
        ctx->pc = 0x4D6EC4u;
            // 0x4d6ec4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D6EC8u;
        goto label_4d6ec8;
    }
    ctx->pc = 0x4D6EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6EC0u;
            // 0x4d6ec4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6EC8u;
label_4d6ec8:
    // 0x4d6ec8: 0x0  nop
    ctx->pc = 0x4d6ec8u;
    // NOP
label_4d6ecc:
    // 0x4d6ecc: 0x0  nop
    ctx->pc = 0x4d6eccu;
    // NOP
label_4d6ed0:
    // 0x4d6ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d6ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d6ed4:
    // 0x4d6ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d6ed8:
    // 0x4d6ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6edc:
    // 0x4d6edc: 0xc12e6bc  jal         func_4B9AF0
label_4d6ee0:
    if (ctx->pc == 0x4D6EE0u) {
        ctx->pc = 0x4D6EE0u;
            // 0x4d6ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6EE4u;
        goto label_4d6ee4;
    }
    ctx->pc = 0x4D6EDCu;
    SET_GPR_U32(ctx, 31, 0x4D6EE4u);
    ctx->pc = 0x4D6EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6EDCu;
            // 0x4d6ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6EE4u; }
        if (ctx->pc != 0x4D6EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6EE4u; }
        if (ctx->pc != 0x4D6EE4u) { return; }
    }
    ctx->pc = 0x4D6EE4u;
label_4d6ee4:
    // 0x4d6ee4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d6ee8:
    // 0x4d6ee8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d6eec:
    // 0x4d6eec: 0x24422850  addiu       $v0, $v0, 0x2850
    ctx->pc = 0x4d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10320));
label_4d6ef0:
    // 0x4d6ef0: 0x24632890  addiu       $v1, $v1, 0x2890
    ctx->pc = 0x4d6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10384));
label_4d6ef4:
    // 0x4d6ef4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d6ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4d6ef8:
    // 0x4d6ef8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4d6ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4d6efc:
    // 0x4d6efc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d6efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d6f00:
    // 0x4d6f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d6f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6f04:
    // 0x4d6f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6f08:
    // 0x4d6f08: 0x3e00008  jr          $ra
label_4d6f0c:
    if (ctx->pc == 0x4D6F0Cu) {
        ctx->pc = 0x4D6F0Cu;
            // 0x4d6f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D6F10u;
        goto label_4d6f10;
    }
    ctx->pc = 0x4D6F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6F08u;
            // 0x4d6f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6F10u;
label_4d6f10:
    // 0x4d6f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d6f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d6f14:
    // 0x4d6f14: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d6f18:
    // 0x4d6f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d6f1c:
    // 0x4d6f1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d6f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d6f20:
    // 0x4d6f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6f24:
    // 0x4d6f24: 0x8c42aa50  lw          $v0, -0x55B0($v0)
    ctx->pc = 0x4d6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945360)));
label_4d6f28:
    // 0x4d6f28: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4d6f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4d6f2c:
    // 0x4d6f2c: 0xc12e608  jal         func_4B9820
label_4d6f30:
    if (ctx->pc == 0x4D6F30u) {
        ctx->pc = 0x4D6F30u;
            // 0x4d6f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6F34u;
        goto label_4d6f34;
    }
    ctx->pc = 0x4D6F2Cu;
    SET_GPR_U32(ctx, 31, 0x4D6F34u);
    ctx->pc = 0x4D6F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6F2Cu;
            // 0x4d6f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6F34u; }
        if (ctx->pc != 0x4D6F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6F34u; }
        if (ctx->pc != 0x4D6F34u) { return; }
    }
    ctx->pc = 0x4D6F34u;
label_4d6f34:
    // 0x4d6f34: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4d6f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4d6f38:
    // 0x4d6f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d6f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6f3c:
    // 0x4d6f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6f40:
    // 0x4d6f40: 0x3e00008  jr          $ra
label_4d6f44:
    if (ctx->pc == 0x4D6F44u) {
        ctx->pc = 0x4D6F44u;
            // 0x4d6f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D6F48u;
        goto label_4d6f48;
    }
    ctx->pc = 0x4D6F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6F40u;
            // 0x4d6f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6F48u;
label_4d6f48:
    // 0x4d6f48: 0x0  nop
    ctx->pc = 0x4d6f48u;
    // NOP
label_4d6f4c:
    // 0x4d6f4c: 0x0  nop
    ctx->pc = 0x4d6f4cu;
    // NOP
label_4d6f50:
    // 0x4d6f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d6f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d6f54:
    // 0x4d6f54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4d6f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4d6f58:
    // 0x4d6f58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d6f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d6f5c:
    // 0x4d6f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d6f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d6f60:
    // 0x4d6f60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d6f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d6f64:
    // 0x4d6f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d6f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d6f68:
    // 0x4d6f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d6f6c:
    // 0x4d6f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6f70:
    // 0x4d6f70: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4d6f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d6f74:
    // 0x4d6f74: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4d6f78:
    if (ctx->pc == 0x4D6F78u) {
        ctx->pc = 0x4D6F78u;
            // 0x4d6f78: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6F7Cu;
        goto label_4d6f7c;
    }
    ctx->pc = 0x4D6F74u;
    {
        const bool branch_taken_0x4d6f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6F74u;
            // 0x4d6f78: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6f74) {
            ctx->pc = 0x4D6FB8u;
            goto label_4d6fb8;
        }
    }
    ctx->pc = 0x4D6F7Cu;
label_4d6f7c:
    // 0x4d6f7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d6f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6f80:
    // 0x4d6f80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d6f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6f84:
    // 0x4d6f84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d6f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6f88:
    // 0x4d6f88: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4d6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4d6f8c:
    // 0x4d6f8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d6f90:
    // 0x4d6f90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d6f94:
    // 0x4d6f94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d6f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d6f98:
    // 0x4d6f98: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4d6f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4d6f9c:
    // 0x4d6f9c: 0x320f809  jalr        $t9
label_4d6fa0:
    if (ctx->pc == 0x4D6FA0u) {
        ctx->pc = 0x4D6FA4u;
        goto label_4d6fa4;
    }
    ctx->pc = 0x4D6F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D6FA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D6FA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D6FA4u; }
            if (ctx->pc != 0x4D6FA4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D6FA4u;
label_4d6fa4:
    // 0x4d6fa4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4d6fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4d6fa8:
    // 0x4d6fa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d6fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d6fac:
    // 0x4d6fac: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4d6facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d6fb0:
    // 0x4d6fb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4d6fb4:
    if (ctx->pc == 0x4D6FB4u) {
        ctx->pc = 0x4D6FB4u;
            // 0x4d6fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D6FB8u;
        goto label_4d6fb8;
    }
    ctx->pc = 0x4D6FB0u;
    {
        const bool branch_taken_0x4d6fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D6FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6FB0u;
            // 0x4d6fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6fb0) {
            ctx->pc = 0x4D6F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d6f88;
        }
    }
    ctx->pc = 0x4D6FB8u;
label_4d6fb8:
    // 0x4d6fb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d6fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d6fbc:
    // 0x4d6fbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4d6fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d6fc0:
    // 0x4d6fc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d6fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d6fc4:
    // 0x4d6fc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d6fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d6fc8:
    // 0x4d6fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d6fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d6fcc:
    // 0x4d6fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d6fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6fd0:
    // 0x4d6fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6fd4:
    // 0x4d6fd4: 0x3e00008  jr          $ra
label_4d6fd8:
    if (ctx->pc == 0x4D6FD8u) {
        ctx->pc = 0x4D6FD8u;
            // 0x4d6fd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D6FDCu;
        goto label_4d6fdc;
    }
    ctx->pc = 0x4D6FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6FD4u;
            // 0x4d6fd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6FDCu;
label_4d6fdc:
    // 0x4d6fdc: 0x0  nop
    ctx->pc = 0x4d6fdcu;
    // NOP
label_4d6fe0:
    // 0x4d6fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d6fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d6fe4:
    // 0x4d6fe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d6fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d6fe8:
    // 0x4d6fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d6fec:
    // 0x4d6fec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4d6fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4d6ff0:
    // 0x4d6ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6ff4:
    // 0x4d6ff4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4d6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d6ff8:
    // 0x4d6ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d6ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d6ffc:
    // 0x4d6ffc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4d6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4d7000:
    // 0x4d7000: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d7000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d7004:
    // 0x4d7004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d7004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d7008:
    // 0x4d7008: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4d7008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4d700c:
    // 0x4d700c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4d700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d7010:
    // 0x4d7010: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d7010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4d7014:
    // 0x4d7014: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4d7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4d7018:
    // 0x4d7018: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4d7018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4d701c:
    // 0x4d701c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4d701cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4d7020:
    // 0x4d7020: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4d7020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d7024:
    // 0x4d7024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d7024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d7028:
    // 0x4d7028: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4d7028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4d702c:
    // 0x4d702c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4d702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d7030:
    // 0x4d7030: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4d7030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4d7034:
    // 0x4d7034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d7034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d7038:
    // 0x4d7038: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4d7038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d703c:
    // 0x4d703c: 0xc0a997c  jal         func_2A65F0
label_4d7040:
    if (ctx->pc == 0x4D7040u) {
        ctx->pc = 0x4D7040u;
            // 0x4d7040: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4D7044u;
        goto label_4d7044;
    }
    ctx->pc = 0x4D703Cu;
    SET_GPR_U32(ctx, 31, 0x4D7044u);
    ctx->pc = 0x4D7040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D703Cu;
            // 0x4d7040: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7044u; }
        if (ctx->pc != 0x4D7044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7044u; }
        if (ctx->pc != 0x4D7044u) { return; }
    }
    ctx->pc = 0x4D7044u;
label_4d7044:
    // 0x4d7044: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4d7044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4d7048:
    // 0x4d7048: 0xc0d879c  jal         func_361E70
label_4d704c:
    if (ctx->pc == 0x4D704Cu) {
        ctx->pc = 0x4D704Cu;
            // 0x4d704c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7050u;
        goto label_4d7050;
    }
    ctx->pc = 0x4D7048u;
    SET_GPR_U32(ctx, 31, 0x4D7050u);
    ctx->pc = 0x4D704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7048u;
            // 0x4d704c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7050u; }
        if (ctx->pc != 0x4D7050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7050u; }
        if (ctx->pc != 0x4D7050u) { return; }
    }
    ctx->pc = 0x4D7050u;
label_4d7050:
    // 0x4d7050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d7054:
    // 0x4d7054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7058:
    // 0x4d7058: 0x3e00008  jr          $ra
label_4d705c:
    if (ctx->pc == 0x4D705Cu) {
        ctx->pc = 0x4D705Cu;
            // 0x4d705c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D7060u;
        goto label_4d7060;
    }
    ctx->pc = 0x4D7058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7058u;
            // 0x4d705c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7060u;
label_4d7060:
    // 0x4d7060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d7064:
    // 0x4d7064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d7064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d7068:
    // 0x4d7068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d706c:
    // 0x4d706c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4d706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4d7070:
    // 0x4d7070: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4d7074:
    if (ctx->pc == 0x4D7074u) {
        ctx->pc = 0x4D7074u;
            // 0x4d7074: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7078u;
        goto label_4d7078;
    }
    ctx->pc = 0x4D7070u;
    {
        const bool branch_taken_0x4d7070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7070u;
            // 0x4d7074: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7070) {
            ctx->pc = 0x4D7190u;
            goto label_4d7190;
        }
    }
    ctx->pc = 0x4D7078u;
label_4d7078:
    // 0x4d7078: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d7078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d707c:
    // 0x4d707c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d707cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4d7080:
    // 0x4d7080: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d7080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d7084:
    // 0x4d7084: 0xc075128  jal         func_1D44A0
label_4d7088:
    if (ctx->pc == 0x4D7088u) {
        ctx->pc = 0x4D7088u;
            // 0x4d7088: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4D708Cu;
        goto label_4d708c;
    }
    ctx->pc = 0x4D7084u;
    SET_GPR_U32(ctx, 31, 0x4D708Cu);
    ctx->pc = 0x4D7088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7084u;
            // 0x4d7088: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D708Cu; }
        if (ctx->pc != 0x4D708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D708Cu; }
        if (ctx->pc != 0x4D708Cu) { return; }
    }
    ctx->pc = 0x4D708Cu;
label_4d708c:
    // 0x4d708c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4d708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d7090:
    // 0x4d7090: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d7090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d7094:
    // 0x4d7094: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4d7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4d7098:
    // 0x4d7098: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4d7098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4d709c:
    // 0x4d709c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d709cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d70a0:
    // 0x4d70a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d70a4:
    if (ctx->pc == 0x4D70A4u) {
        ctx->pc = 0x4D70A4u;
            // 0x4d70a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4D70A8u;
        goto label_4d70a8;
    }
    ctx->pc = 0x4D70A0u;
    {
        const bool branch_taken_0x4d70a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D70A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D70A0u;
            // 0x4d70a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d70a0) {
            ctx->pc = 0x4D70B0u;
            goto label_4d70b0;
        }
    }
    ctx->pc = 0x4D70A8u;
label_4d70a8:
    // 0x4d70a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d70ac:
    // 0x4d70ac: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4d70acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4d70b0:
    // 0x4d70b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d70b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d70b4:
    // 0x4d70b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d70b8:
    // 0x4d70b8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4d70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4d70bc:
    // 0x4d70bc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d70bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d70c0:
    // 0x4d70c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d70c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d70c4:
    // 0x4d70c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d70c8:
    if (ctx->pc == 0x4D70C8u) {
        ctx->pc = 0x4D70C8u;
            // 0x4d70c8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D70CCu;
        goto label_4d70cc;
    }
    ctx->pc = 0x4D70C4u;
    {
        const bool branch_taken_0x4d70c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d70c4) {
            ctx->pc = 0x4D70C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D70C4u;
            // 0x4d70c8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D70D8u;
            goto label_4d70d8;
        }
    }
    ctx->pc = 0x4D70CCu;
label_4d70cc:
    // 0x4d70cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d70d0:
    // 0x4d70d0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4d70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4d70d4:
    // 0x4d70d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d70d8:
    // 0x4d70d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d70dc:
    // 0x4d70dc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4d70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4d70e0:
    // 0x4d70e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d70e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d70e4:
    // 0x4d70e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d70e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d70e8:
    // 0x4d70e8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d70ec:
    if (ctx->pc == 0x4D70ECu) {
        ctx->pc = 0x4D70ECu;
            // 0x4d70ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4D70F0u;
        goto label_4d70f0;
    }
    ctx->pc = 0x4D70E8u;
    {
        const bool branch_taken_0x4d70e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d70e8) {
            ctx->pc = 0x4D70ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D70E8u;
            // 0x4d70ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D70FCu;
            goto label_4d70fc;
        }
    }
    ctx->pc = 0x4D70F0u;
label_4d70f0:
    // 0x4d70f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d70f4:
    // 0x4d70f4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4d70f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4d70f8:
    // 0x4d70f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4d70f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d70fc:
    // 0x4d70fc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d70fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d7100:
    // 0x4d7100: 0x320f809  jalr        $t9
label_4d7104:
    if (ctx->pc == 0x4D7104u) {
        ctx->pc = 0x4D7104u;
            // 0x4d7104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7108u;
        goto label_4d7108;
    }
    ctx->pc = 0x4D7100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D7108u);
        ctx->pc = 0x4D7104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7100u;
            // 0x4d7104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D7108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D7108u; }
            if (ctx->pc != 0x4D7108u) { return; }
        }
        }
    }
    ctx->pc = 0x4D7108u;
label_4d7108:
    // 0x4d7108: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d7108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d710c:
    // 0x4d710c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d710cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d7110:
    // 0x4d7110: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4d7110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4d7114:
    // 0x4d7114: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d7114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d7118:
    // 0x4d7118: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d7118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d711c:
    // 0x4d711c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d711cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d7120:
    // 0x4d7120: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d7124:
    if (ctx->pc == 0x4D7124u) {
        ctx->pc = 0x4D7124u;
            // 0x4d7124: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4D7128u;
        goto label_4d7128;
    }
    ctx->pc = 0x4D7120u;
    {
        const bool branch_taken_0x4d7120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7120) {
            ctx->pc = 0x4D7124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7120u;
            // 0x4d7124: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7134u;
            goto label_4d7134;
        }
    }
    ctx->pc = 0x4D7128u;
label_4d7128:
    // 0x4d7128: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d712c:
    // 0x4d712c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4d712cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4d7130:
    // 0x4d7130: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d7130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d7134:
    // 0x4d7134: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d7138:
    // 0x4d7138: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4d7138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4d713c:
    // 0x4d713c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d7140:
    // 0x4d7140: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d7140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d7144:
    // 0x4d7144: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d7144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d7148:
    // 0x4d7148: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d714c:
    if (ctx->pc == 0x4D714Cu) {
        ctx->pc = 0x4D7150u;
        goto label_4d7150;
    }
    ctx->pc = 0x4D7148u;
    {
        const bool branch_taken_0x4d7148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7148) {
            ctx->pc = 0x4D7158u;
            goto label_4d7158;
        }
    }
    ctx->pc = 0x4D7150u;
label_4d7150:
    // 0x4d7150: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d7154:
    // 0x4d7154: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4d7154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4d7158:
    // 0x4d7158: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d715c:
    // 0x4d715c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4d715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4d7160:
    // 0x4d7160: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d7160u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d7164:
    // 0x4d7164: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d7168:
    if (ctx->pc == 0x4D7168u) {
        ctx->pc = 0x4D716Cu;
        goto label_4d716c;
    }
    ctx->pc = 0x4D7164u;
    {
        const bool branch_taken_0x4d7164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7164) {
            ctx->pc = 0x4D7174u;
            goto label_4d7174;
        }
    }
    ctx->pc = 0x4D716Cu;
label_4d716c:
    // 0x4d716c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d716cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d7170:
    // 0x4d7170: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4d7170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4d7174:
    // 0x4d7174: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d7178:
    // 0x4d7178: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4d7178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4d717c:
    // 0x4d717c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d717cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d7180:
    // 0x4d7180: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d7184:
    if (ctx->pc == 0x4D7184u) {
        ctx->pc = 0x4D7184u;
            // 0x4d7184: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D7188u;
        goto label_4d7188;
    }
    ctx->pc = 0x4D7180u;
    {
        const bool branch_taken_0x4d7180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7180) {
            ctx->pc = 0x4D7184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7180u;
            // 0x4d7184: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7194u;
            goto label_4d7194;
        }
    }
    ctx->pc = 0x4D7188u;
label_4d7188:
    // 0x4d7188: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d718c:
    // 0x4d718c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4d718cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4d7190:
    // 0x4d7190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d7194:
    // 0x4d7194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7198:
    // 0x4d7198: 0x3e00008  jr          $ra
label_4d719c:
    if (ctx->pc == 0x4D719Cu) {
        ctx->pc = 0x4D719Cu;
            // 0x4d719c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D71A0u;
        goto label_4d71a0;
    }
    ctx->pc = 0x4D7198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D719Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7198u;
            // 0x4d719c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D71A0u;
label_4d71a0:
    // 0x4d71a0: 0x813599c  j           func_4D6670
label_4d71a4:
    if (ctx->pc == 0x4D71A4u) {
        ctx->pc = 0x4D71A4u;
            // 0x4d71a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4D71A8u;
        goto label_4d71a8;
    }
    ctx->pc = 0x4D71A0u;
    ctx->pc = 0x4D71A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D71A0u;
            // 0x4d71a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6670u;
    {
        auto targetFn = runtime->lookupFunction(0x4D6670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D71A8u;
label_4d71a8:
    // 0x4d71a8: 0x0  nop
    ctx->pc = 0x4d71a8u;
    // NOP
label_4d71ac:
    // 0x4d71ac: 0x0  nop
    ctx->pc = 0x4d71acu;
    // NOP
label_4d71b0:
    // 0x4d71b0: 0x8135ae0  j           func_4D6B80
label_4d71b4:
    if (ctx->pc == 0x4D71B4u) {
        ctx->pc = 0x4D71B4u;
            // 0x4d71b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D71B8u;
        goto label_4d71b8;
    }
    ctx->pc = 0x4D71B0u;
    ctx->pc = 0x4D71B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D71B0u;
            // 0x4d71b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6B80u;
    {
        auto targetFn = runtime->lookupFunction(0x4D6B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D71B8u;
label_4d71b8:
    // 0x4d71b8: 0x0  nop
    ctx->pc = 0x4d71b8u;
    // NOP
label_4d71bc:
    // 0x4d71bc: 0x0  nop
    ctx->pc = 0x4d71bcu;
    // NOP
label_4d71c0:
    // 0x4d71c0: 0x8135944  j           func_4D6510
label_4d71c4:
    if (ctx->pc == 0x4D71C4u) {
        ctx->pc = 0x4D71C4u;
            // 0x4d71c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D71C8u;
        goto label_4d71c8;
    }
    ctx->pc = 0x4D71C0u;
    ctx->pc = 0x4D71C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D71C0u;
            // 0x4d71c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6510u;
    if (runtime->hasFunction(0x4D6510u)) {
        auto targetFn = runtime->lookupFunction(0x4D6510u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004D6510_0x4d6510(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4D71C8u;
label_4d71c8:
    // 0x4d71c8: 0x0  nop
    ctx->pc = 0x4d71c8u;
    // NOP
label_4d71cc:
    // 0x4d71cc: 0x0  nop
    ctx->pc = 0x4d71ccu;
    // NOP
label_4d71d0:
    // 0x4d71d0: 0x8135920  j           func_4D6480
label_4d71d4:
    if (ctx->pc == 0x4D71D4u) {
        ctx->pc = 0x4D71D4u;
            // 0x4d71d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D71D8u;
        goto label_4d71d8;
    }
    ctx->pc = 0x4D71D0u;
    ctx->pc = 0x4D71D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D71D0u;
            // 0x4d71d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6480u;
    {
        auto targetFn = runtime->lookupFunction(0x4D6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D71D8u;
label_4d71d8:
    // 0x4d71d8: 0x0  nop
    ctx->pc = 0x4d71d8u;
    // NOP
label_4d71dc:
    // 0x4d71dc: 0x0  nop
    ctx->pc = 0x4d71dcu;
    // NOP
label_4d71e0:
    // 0x4d71e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d71e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d71e4:
    // 0x4d71e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d71e8:
    // 0x4d71e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d71e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d71ec:
    // 0x4d71ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d71ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d71f0:
    // 0x4d71f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d71f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d71f4:
    // 0x4d71f4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4d71f8:
    if (ctx->pc == 0x4D71F8u) {
        ctx->pc = 0x4D71F8u;
            // 0x4d71f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D71FCu;
        goto label_4d71fc;
    }
    ctx->pc = 0x4D71F4u;
    {
        const bool branch_taken_0x4d71f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D71F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D71F4u;
            // 0x4d71f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d71f4) {
            ctx->pc = 0x4D7250u;
            goto label_4d7250;
        }
    }
    ctx->pc = 0x4D71FCu;
label_4d71fc:
    // 0x4d71fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d7200:
    // 0x4d7200: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d7204:
    // 0x4d7204: 0x246328f0  addiu       $v1, $v1, 0x28F0
    ctx->pc = 0x4d7204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10480));
label_4d7208:
    // 0x4d7208: 0x24422928  addiu       $v0, $v0, 0x2928
    ctx->pc = 0x4d7208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10536));
label_4d720c:
    // 0x4d720c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d720cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d7210:
    // 0x4d7210: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4d7214:
    if (ctx->pc == 0x4D7214u) {
        ctx->pc = 0x4D7214u;
            // 0x4d7214: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D7218u;
        goto label_4d7218;
    }
    ctx->pc = 0x4D7210u;
    {
        const bool branch_taken_0x4d7210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7210u;
            // 0x4d7214: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7210) {
            ctx->pc = 0x4D7238u;
            goto label_4d7238;
        }
    }
    ctx->pc = 0x4D7218u;
label_4d7218:
    // 0x4d7218: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d7218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d721c:
    // 0x4d721c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d7220:
    // 0x4d7220: 0x246329a0  addiu       $v1, $v1, 0x29A0
    ctx->pc = 0x4d7220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10656));
label_4d7224:
    // 0x4d7224: 0x244229d8  addiu       $v0, $v0, 0x29D8
    ctx->pc = 0x4d7224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10712));
label_4d7228:
    // 0x4d7228: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d7228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d722c:
    // 0x4d722c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d7230:
    // 0x4d7230: 0xc135c9c  jal         func_4D7270
label_4d7234:
    if (ctx->pc == 0x4D7234u) {
        ctx->pc = 0x4D7234u;
            // 0x4d7234: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D7238u;
        goto label_4d7238;
    }
    ctx->pc = 0x4D7230u;
    SET_GPR_U32(ctx, 31, 0x4D7238u);
    ctx->pc = 0x4D7234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7230u;
            // 0x4d7234: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7270u;
    if (runtime->hasFunction(0x4D7270u)) {
        auto targetFn = runtime->lookupFunction(0x4D7270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7238u; }
        if (ctx->pc != 0x4D7238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7270_0x4d7270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7238u; }
        if (ctx->pc != 0x4D7238u) { return; }
    }
    ctx->pc = 0x4D7238u;
label_4d7238:
    // 0x4d7238: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d7238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4d723c:
    // 0x4d723c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d723cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d7240:
    // 0x4d7240: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d7244:
    if (ctx->pc == 0x4D7244u) {
        ctx->pc = 0x4D7244u;
            // 0x4d7244: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7248u;
        goto label_4d7248;
    }
    ctx->pc = 0x4D7240u;
    {
        const bool branch_taken_0x4d7240 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d7240) {
            ctx->pc = 0x4D7244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7240u;
            // 0x4d7244: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7254u;
            goto label_4d7254;
        }
    }
    ctx->pc = 0x4D7248u;
label_4d7248:
    // 0x4d7248: 0xc0400a8  jal         func_1002A0
label_4d724c:
    if (ctx->pc == 0x4D724Cu) {
        ctx->pc = 0x4D724Cu;
            // 0x4d724c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D7250u;
        goto label_4d7250;
    }
    ctx->pc = 0x4D7248u;
    SET_GPR_U32(ctx, 31, 0x4D7250u);
    ctx->pc = 0x4D724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7248u;
            // 0x4d724c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7250u; }
        if (ctx->pc != 0x4D7250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7250u; }
        if (ctx->pc != 0x4D7250u) { return; }
    }
    ctx->pc = 0x4D7250u;
label_4d7250:
    // 0x4d7250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d7250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d7254:
    // 0x4d7254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d7254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d7258:
    // 0x4d7258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d7258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d725c:
    // 0x4d725c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d725cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7260:
    // 0x4d7260: 0x3e00008  jr          $ra
label_4d7264:
    if (ctx->pc == 0x4D7264u) {
        ctx->pc = 0x4D7264u;
            // 0x4d7264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D7268u;
        goto label_4d7268;
    }
    ctx->pc = 0x4D7260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7260u;
            // 0x4d7264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7268u;
label_4d7268:
    // 0x4d7268: 0x0  nop
    ctx->pc = 0x4d7268u;
    // NOP
label_4d726c:
    // 0x4d726c: 0x0  nop
    ctx->pc = 0x4d726cu;
    // NOP
}
