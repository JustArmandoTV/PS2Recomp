#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B6CE0
// Address: 0x3b6ce0 - 0x3b8ca0
void sub_003B6CE0_0x3b6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6CE0_0x3b6ce0");
#endif

    switch (ctx->pc) {
        case 0x3b6ce0u: goto label_3b6ce0;
        case 0x3b6ce4u: goto label_3b6ce4;
        case 0x3b6ce8u: goto label_3b6ce8;
        case 0x3b6cecu: goto label_3b6cec;
        case 0x3b6cf0u: goto label_3b6cf0;
        case 0x3b6cf4u: goto label_3b6cf4;
        case 0x3b6cf8u: goto label_3b6cf8;
        case 0x3b6cfcu: goto label_3b6cfc;
        case 0x3b6d00u: goto label_3b6d00;
        case 0x3b6d04u: goto label_3b6d04;
        case 0x3b6d08u: goto label_3b6d08;
        case 0x3b6d0cu: goto label_3b6d0c;
        case 0x3b6d10u: goto label_3b6d10;
        case 0x3b6d14u: goto label_3b6d14;
        case 0x3b6d18u: goto label_3b6d18;
        case 0x3b6d1cu: goto label_3b6d1c;
        case 0x3b6d20u: goto label_3b6d20;
        case 0x3b6d24u: goto label_3b6d24;
        case 0x3b6d28u: goto label_3b6d28;
        case 0x3b6d2cu: goto label_3b6d2c;
        case 0x3b6d30u: goto label_3b6d30;
        case 0x3b6d34u: goto label_3b6d34;
        case 0x3b6d38u: goto label_3b6d38;
        case 0x3b6d3cu: goto label_3b6d3c;
        case 0x3b6d40u: goto label_3b6d40;
        case 0x3b6d44u: goto label_3b6d44;
        case 0x3b6d48u: goto label_3b6d48;
        case 0x3b6d4cu: goto label_3b6d4c;
        case 0x3b6d50u: goto label_3b6d50;
        case 0x3b6d54u: goto label_3b6d54;
        case 0x3b6d58u: goto label_3b6d58;
        case 0x3b6d5cu: goto label_3b6d5c;
        case 0x3b6d60u: goto label_3b6d60;
        case 0x3b6d64u: goto label_3b6d64;
        case 0x3b6d68u: goto label_3b6d68;
        case 0x3b6d6cu: goto label_3b6d6c;
        case 0x3b6d70u: goto label_3b6d70;
        case 0x3b6d74u: goto label_3b6d74;
        case 0x3b6d78u: goto label_3b6d78;
        case 0x3b6d7cu: goto label_3b6d7c;
        case 0x3b6d80u: goto label_3b6d80;
        case 0x3b6d84u: goto label_3b6d84;
        case 0x3b6d88u: goto label_3b6d88;
        case 0x3b6d8cu: goto label_3b6d8c;
        case 0x3b6d90u: goto label_3b6d90;
        case 0x3b6d94u: goto label_3b6d94;
        case 0x3b6d98u: goto label_3b6d98;
        case 0x3b6d9cu: goto label_3b6d9c;
        case 0x3b6da0u: goto label_3b6da0;
        case 0x3b6da4u: goto label_3b6da4;
        case 0x3b6da8u: goto label_3b6da8;
        case 0x3b6dacu: goto label_3b6dac;
        case 0x3b6db0u: goto label_3b6db0;
        case 0x3b6db4u: goto label_3b6db4;
        case 0x3b6db8u: goto label_3b6db8;
        case 0x3b6dbcu: goto label_3b6dbc;
        case 0x3b6dc0u: goto label_3b6dc0;
        case 0x3b6dc4u: goto label_3b6dc4;
        case 0x3b6dc8u: goto label_3b6dc8;
        case 0x3b6dccu: goto label_3b6dcc;
        case 0x3b6dd0u: goto label_3b6dd0;
        case 0x3b6dd4u: goto label_3b6dd4;
        case 0x3b6dd8u: goto label_3b6dd8;
        case 0x3b6ddcu: goto label_3b6ddc;
        case 0x3b6de0u: goto label_3b6de0;
        case 0x3b6de4u: goto label_3b6de4;
        case 0x3b6de8u: goto label_3b6de8;
        case 0x3b6decu: goto label_3b6dec;
        case 0x3b6df0u: goto label_3b6df0;
        case 0x3b6df4u: goto label_3b6df4;
        case 0x3b6df8u: goto label_3b6df8;
        case 0x3b6dfcu: goto label_3b6dfc;
        case 0x3b6e00u: goto label_3b6e00;
        case 0x3b6e04u: goto label_3b6e04;
        case 0x3b6e08u: goto label_3b6e08;
        case 0x3b6e0cu: goto label_3b6e0c;
        case 0x3b6e10u: goto label_3b6e10;
        case 0x3b6e14u: goto label_3b6e14;
        case 0x3b6e18u: goto label_3b6e18;
        case 0x3b6e1cu: goto label_3b6e1c;
        case 0x3b6e20u: goto label_3b6e20;
        case 0x3b6e24u: goto label_3b6e24;
        case 0x3b6e28u: goto label_3b6e28;
        case 0x3b6e2cu: goto label_3b6e2c;
        case 0x3b6e30u: goto label_3b6e30;
        case 0x3b6e34u: goto label_3b6e34;
        case 0x3b6e38u: goto label_3b6e38;
        case 0x3b6e3cu: goto label_3b6e3c;
        case 0x3b6e40u: goto label_3b6e40;
        case 0x3b6e44u: goto label_3b6e44;
        case 0x3b6e48u: goto label_3b6e48;
        case 0x3b6e4cu: goto label_3b6e4c;
        case 0x3b6e50u: goto label_3b6e50;
        case 0x3b6e54u: goto label_3b6e54;
        case 0x3b6e58u: goto label_3b6e58;
        case 0x3b6e5cu: goto label_3b6e5c;
        case 0x3b6e60u: goto label_3b6e60;
        case 0x3b6e64u: goto label_3b6e64;
        case 0x3b6e68u: goto label_3b6e68;
        case 0x3b6e6cu: goto label_3b6e6c;
        case 0x3b6e70u: goto label_3b6e70;
        case 0x3b6e74u: goto label_3b6e74;
        case 0x3b6e78u: goto label_3b6e78;
        case 0x3b6e7cu: goto label_3b6e7c;
        case 0x3b6e80u: goto label_3b6e80;
        case 0x3b6e84u: goto label_3b6e84;
        case 0x3b6e88u: goto label_3b6e88;
        case 0x3b6e8cu: goto label_3b6e8c;
        case 0x3b6e90u: goto label_3b6e90;
        case 0x3b6e94u: goto label_3b6e94;
        case 0x3b6e98u: goto label_3b6e98;
        case 0x3b6e9cu: goto label_3b6e9c;
        case 0x3b6ea0u: goto label_3b6ea0;
        case 0x3b6ea4u: goto label_3b6ea4;
        case 0x3b6ea8u: goto label_3b6ea8;
        case 0x3b6eacu: goto label_3b6eac;
        case 0x3b6eb0u: goto label_3b6eb0;
        case 0x3b6eb4u: goto label_3b6eb4;
        case 0x3b6eb8u: goto label_3b6eb8;
        case 0x3b6ebcu: goto label_3b6ebc;
        case 0x3b6ec0u: goto label_3b6ec0;
        case 0x3b6ec4u: goto label_3b6ec4;
        case 0x3b6ec8u: goto label_3b6ec8;
        case 0x3b6eccu: goto label_3b6ecc;
        case 0x3b6ed0u: goto label_3b6ed0;
        case 0x3b6ed4u: goto label_3b6ed4;
        case 0x3b6ed8u: goto label_3b6ed8;
        case 0x3b6edcu: goto label_3b6edc;
        case 0x3b6ee0u: goto label_3b6ee0;
        case 0x3b6ee4u: goto label_3b6ee4;
        case 0x3b6ee8u: goto label_3b6ee8;
        case 0x3b6eecu: goto label_3b6eec;
        case 0x3b6ef0u: goto label_3b6ef0;
        case 0x3b6ef4u: goto label_3b6ef4;
        case 0x3b6ef8u: goto label_3b6ef8;
        case 0x3b6efcu: goto label_3b6efc;
        case 0x3b6f00u: goto label_3b6f00;
        case 0x3b6f04u: goto label_3b6f04;
        case 0x3b6f08u: goto label_3b6f08;
        case 0x3b6f0cu: goto label_3b6f0c;
        case 0x3b6f10u: goto label_3b6f10;
        case 0x3b6f14u: goto label_3b6f14;
        case 0x3b6f18u: goto label_3b6f18;
        case 0x3b6f1cu: goto label_3b6f1c;
        case 0x3b6f20u: goto label_3b6f20;
        case 0x3b6f24u: goto label_3b6f24;
        case 0x3b6f28u: goto label_3b6f28;
        case 0x3b6f2cu: goto label_3b6f2c;
        case 0x3b6f30u: goto label_3b6f30;
        case 0x3b6f34u: goto label_3b6f34;
        case 0x3b6f38u: goto label_3b6f38;
        case 0x3b6f3cu: goto label_3b6f3c;
        case 0x3b6f40u: goto label_3b6f40;
        case 0x3b6f44u: goto label_3b6f44;
        case 0x3b6f48u: goto label_3b6f48;
        case 0x3b6f4cu: goto label_3b6f4c;
        case 0x3b6f50u: goto label_3b6f50;
        case 0x3b6f54u: goto label_3b6f54;
        case 0x3b6f58u: goto label_3b6f58;
        case 0x3b6f5cu: goto label_3b6f5c;
        case 0x3b6f60u: goto label_3b6f60;
        case 0x3b6f64u: goto label_3b6f64;
        case 0x3b6f68u: goto label_3b6f68;
        case 0x3b6f6cu: goto label_3b6f6c;
        case 0x3b6f70u: goto label_3b6f70;
        case 0x3b6f74u: goto label_3b6f74;
        case 0x3b6f78u: goto label_3b6f78;
        case 0x3b6f7cu: goto label_3b6f7c;
        case 0x3b6f80u: goto label_3b6f80;
        case 0x3b6f84u: goto label_3b6f84;
        case 0x3b6f88u: goto label_3b6f88;
        case 0x3b6f8cu: goto label_3b6f8c;
        case 0x3b6f90u: goto label_3b6f90;
        case 0x3b6f94u: goto label_3b6f94;
        case 0x3b6f98u: goto label_3b6f98;
        case 0x3b6f9cu: goto label_3b6f9c;
        case 0x3b6fa0u: goto label_3b6fa0;
        case 0x3b6fa4u: goto label_3b6fa4;
        case 0x3b6fa8u: goto label_3b6fa8;
        case 0x3b6facu: goto label_3b6fac;
        case 0x3b6fb0u: goto label_3b6fb0;
        case 0x3b6fb4u: goto label_3b6fb4;
        case 0x3b6fb8u: goto label_3b6fb8;
        case 0x3b6fbcu: goto label_3b6fbc;
        case 0x3b6fc0u: goto label_3b6fc0;
        case 0x3b6fc4u: goto label_3b6fc4;
        case 0x3b6fc8u: goto label_3b6fc8;
        case 0x3b6fccu: goto label_3b6fcc;
        case 0x3b6fd0u: goto label_3b6fd0;
        case 0x3b6fd4u: goto label_3b6fd4;
        case 0x3b6fd8u: goto label_3b6fd8;
        case 0x3b6fdcu: goto label_3b6fdc;
        case 0x3b6fe0u: goto label_3b6fe0;
        case 0x3b6fe4u: goto label_3b6fe4;
        case 0x3b6fe8u: goto label_3b6fe8;
        case 0x3b6fecu: goto label_3b6fec;
        case 0x3b6ff0u: goto label_3b6ff0;
        case 0x3b6ff4u: goto label_3b6ff4;
        case 0x3b6ff8u: goto label_3b6ff8;
        case 0x3b6ffcu: goto label_3b6ffc;
        case 0x3b7000u: goto label_3b7000;
        case 0x3b7004u: goto label_3b7004;
        case 0x3b7008u: goto label_3b7008;
        case 0x3b700cu: goto label_3b700c;
        case 0x3b7010u: goto label_3b7010;
        case 0x3b7014u: goto label_3b7014;
        case 0x3b7018u: goto label_3b7018;
        case 0x3b701cu: goto label_3b701c;
        case 0x3b7020u: goto label_3b7020;
        case 0x3b7024u: goto label_3b7024;
        case 0x3b7028u: goto label_3b7028;
        case 0x3b702cu: goto label_3b702c;
        case 0x3b7030u: goto label_3b7030;
        case 0x3b7034u: goto label_3b7034;
        case 0x3b7038u: goto label_3b7038;
        case 0x3b703cu: goto label_3b703c;
        case 0x3b7040u: goto label_3b7040;
        case 0x3b7044u: goto label_3b7044;
        case 0x3b7048u: goto label_3b7048;
        case 0x3b704cu: goto label_3b704c;
        case 0x3b7050u: goto label_3b7050;
        case 0x3b7054u: goto label_3b7054;
        case 0x3b7058u: goto label_3b7058;
        case 0x3b705cu: goto label_3b705c;
        case 0x3b7060u: goto label_3b7060;
        case 0x3b7064u: goto label_3b7064;
        case 0x3b7068u: goto label_3b7068;
        case 0x3b706cu: goto label_3b706c;
        case 0x3b7070u: goto label_3b7070;
        case 0x3b7074u: goto label_3b7074;
        case 0x3b7078u: goto label_3b7078;
        case 0x3b707cu: goto label_3b707c;
        case 0x3b7080u: goto label_3b7080;
        case 0x3b7084u: goto label_3b7084;
        case 0x3b7088u: goto label_3b7088;
        case 0x3b708cu: goto label_3b708c;
        case 0x3b7090u: goto label_3b7090;
        case 0x3b7094u: goto label_3b7094;
        case 0x3b7098u: goto label_3b7098;
        case 0x3b709cu: goto label_3b709c;
        case 0x3b70a0u: goto label_3b70a0;
        case 0x3b70a4u: goto label_3b70a4;
        case 0x3b70a8u: goto label_3b70a8;
        case 0x3b70acu: goto label_3b70ac;
        case 0x3b70b0u: goto label_3b70b0;
        case 0x3b70b4u: goto label_3b70b4;
        case 0x3b70b8u: goto label_3b70b8;
        case 0x3b70bcu: goto label_3b70bc;
        case 0x3b70c0u: goto label_3b70c0;
        case 0x3b70c4u: goto label_3b70c4;
        case 0x3b70c8u: goto label_3b70c8;
        case 0x3b70ccu: goto label_3b70cc;
        case 0x3b70d0u: goto label_3b70d0;
        case 0x3b70d4u: goto label_3b70d4;
        case 0x3b70d8u: goto label_3b70d8;
        case 0x3b70dcu: goto label_3b70dc;
        case 0x3b70e0u: goto label_3b70e0;
        case 0x3b70e4u: goto label_3b70e4;
        case 0x3b70e8u: goto label_3b70e8;
        case 0x3b70ecu: goto label_3b70ec;
        case 0x3b70f0u: goto label_3b70f0;
        case 0x3b70f4u: goto label_3b70f4;
        case 0x3b70f8u: goto label_3b70f8;
        case 0x3b70fcu: goto label_3b70fc;
        case 0x3b7100u: goto label_3b7100;
        case 0x3b7104u: goto label_3b7104;
        case 0x3b7108u: goto label_3b7108;
        case 0x3b710cu: goto label_3b710c;
        case 0x3b7110u: goto label_3b7110;
        case 0x3b7114u: goto label_3b7114;
        case 0x3b7118u: goto label_3b7118;
        case 0x3b711cu: goto label_3b711c;
        case 0x3b7120u: goto label_3b7120;
        case 0x3b7124u: goto label_3b7124;
        case 0x3b7128u: goto label_3b7128;
        case 0x3b712cu: goto label_3b712c;
        case 0x3b7130u: goto label_3b7130;
        case 0x3b7134u: goto label_3b7134;
        case 0x3b7138u: goto label_3b7138;
        case 0x3b713cu: goto label_3b713c;
        case 0x3b7140u: goto label_3b7140;
        case 0x3b7144u: goto label_3b7144;
        case 0x3b7148u: goto label_3b7148;
        case 0x3b714cu: goto label_3b714c;
        case 0x3b7150u: goto label_3b7150;
        case 0x3b7154u: goto label_3b7154;
        case 0x3b7158u: goto label_3b7158;
        case 0x3b715cu: goto label_3b715c;
        case 0x3b7160u: goto label_3b7160;
        case 0x3b7164u: goto label_3b7164;
        case 0x3b7168u: goto label_3b7168;
        case 0x3b716cu: goto label_3b716c;
        case 0x3b7170u: goto label_3b7170;
        case 0x3b7174u: goto label_3b7174;
        case 0x3b7178u: goto label_3b7178;
        case 0x3b717cu: goto label_3b717c;
        case 0x3b7180u: goto label_3b7180;
        case 0x3b7184u: goto label_3b7184;
        case 0x3b7188u: goto label_3b7188;
        case 0x3b718cu: goto label_3b718c;
        case 0x3b7190u: goto label_3b7190;
        case 0x3b7194u: goto label_3b7194;
        case 0x3b7198u: goto label_3b7198;
        case 0x3b719cu: goto label_3b719c;
        case 0x3b71a0u: goto label_3b71a0;
        case 0x3b71a4u: goto label_3b71a4;
        case 0x3b71a8u: goto label_3b71a8;
        case 0x3b71acu: goto label_3b71ac;
        case 0x3b71b0u: goto label_3b71b0;
        case 0x3b71b4u: goto label_3b71b4;
        case 0x3b71b8u: goto label_3b71b8;
        case 0x3b71bcu: goto label_3b71bc;
        case 0x3b71c0u: goto label_3b71c0;
        case 0x3b71c4u: goto label_3b71c4;
        case 0x3b71c8u: goto label_3b71c8;
        case 0x3b71ccu: goto label_3b71cc;
        case 0x3b71d0u: goto label_3b71d0;
        case 0x3b71d4u: goto label_3b71d4;
        case 0x3b71d8u: goto label_3b71d8;
        case 0x3b71dcu: goto label_3b71dc;
        case 0x3b71e0u: goto label_3b71e0;
        case 0x3b71e4u: goto label_3b71e4;
        case 0x3b71e8u: goto label_3b71e8;
        case 0x3b71ecu: goto label_3b71ec;
        case 0x3b71f0u: goto label_3b71f0;
        case 0x3b71f4u: goto label_3b71f4;
        case 0x3b71f8u: goto label_3b71f8;
        case 0x3b71fcu: goto label_3b71fc;
        case 0x3b7200u: goto label_3b7200;
        case 0x3b7204u: goto label_3b7204;
        case 0x3b7208u: goto label_3b7208;
        case 0x3b720cu: goto label_3b720c;
        case 0x3b7210u: goto label_3b7210;
        case 0x3b7214u: goto label_3b7214;
        case 0x3b7218u: goto label_3b7218;
        case 0x3b721cu: goto label_3b721c;
        case 0x3b7220u: goto label_3b7220;
        case 0x3b7224u: goto label_3b7224;
        case 0x3b7228u: goto label_3b7228;
        case 0x3b722cu: goto label_3b722c;
        case 0x3b7230u: goto label_3b7230;
        case 0x3b7234u: goto label_3b7234;
        case 0x3b7238u: goto label_3b7238;
        case 0x3b723cu: goto label_3b723c;
        case 0x3b7240u: goto label_3b7240;
        case 0x3b7244u: goto label_3b7244;
        case 0x3b7248u: goto label_3b7248;
        case 0x3b724cu: goto label_3b724c;
        case 0x3b7250u: goto label_3b7250;
        case 0x3b7254u: goto label_3b7254;
        case 0x3b7258u: goto label_3b7258;
        case 0x3b725cu: goto label_3b725c;
        case 0x3b7260u: goto label_3b7260;
        case 0x3b7264u: goto label_3b7264;
        case 0x3b7268u: goto label_3b7268;
        case 0x3b726cu: goto label_3b726c;
        case 0x3b7270u: goto label_3b7270;
        case 0x3b7274u: goto label_3b7274;
        case 0x3b7278u: goto label_3b7278;
        case 0x3b727cu: goto label_3b727c;
        case 0x3b7280u: goto label_3b7280;
        case 0x3b7284u: goto label_3b7284;
        case 0x3b7288u: goto label_3b7288;
        case 0x3b728cu: goto label_3b728c;
        case 0x3b7290u: goto label_3b7290;
        case 0x3b7294u: goto label_3b7294;
        case 0x3b7298u: goto label_3b7298;
        case 0x3b729cu: goto label_3b729c;
        case 0x3b72a0u: goto label_3b72a0;
        case 0x3b72a4u: goto label_3b72a4;
        case 0x3b72a8u: goto label_3b72a8;
        case 0x3b72acu: goto label_3b72ac;
        case 0x3b72b0u: goto label_3b72b0;
        case 0x3b72b4u: goto label_3b72b4;
        case 0x3b72b8u: goto label_3b72b8;
        case 0x3b72bcu: goto label_3b72bc;
        case 0x3b72c0u: goto label_3b72c0;
        case 0x3b72c4u: goto label_3b72c4;
        case 0x3b72c8u: goto label_3b72c8;
        case 0x3b72ccu: goto label_3b72cc;
        case 0x3b72d0u: goto label_3b72d0;
        case 0x3b72d4u: goto label_3b72d4;
        case 0x3b72d8u: goto label_3b72d8;
        case 0x3b72dcu: goto label_3b72dc;
        case 0x3b72e0u: goto label_3b72e0;
        case 0x3b72e4u: goto label_3b72e4;
        case 0x3b72e8u: goto label_3b72e8;
        case 0x3b72ecu: goto label_3b72ec;
        case 0x3b72f0u: goto label_3b72f0;
        case 0x3b72f4u: goto label_3b72f4;
        case 0x3b72f8u: goto label_3b72f8;
        case 0x3b72fcu: goto label_3b72fc;
        case 0x3b7300u: goto label_3b7300;
        case 0x3b7304u: goto label_3b7304;
        case 0x3b7308u: goto label_3b7308;
        case 0x3b730cu: goto label_3b730c;
        case 0x3b7310u: goto label_3b7310;
        case 0x3b7314u: goto label_3b7314;
        case 0x3b7318u: goto label_3b7318;
        case 0x3b731cu: goto label_3b731c;
        case 0x3b7320u: goto label_3b7320;
        case 0x3b7324u: goto label_3b7324;
        case 0x3b7328u: goto label_3b7328;
        case 0x3b732cu: goto label_3b732c;
        case 0x3b7330u: goto label_3b7330;
        case 0x3b7334u: goto label_3b7334;
        case 0x3b7338u: goto label_3b7338;
        case 0x3b733cu: goto label_3b733c;
        case 0x3b7340u: goto label_3b7340;
        case 0x3b7344u: goto label_3b7344;
        case 0x3b7348u: goto label_3b7348;
        case 0x3b734cu: goto label_3b734c;
        case 0x3b7350u: goto label_3b7350;
        case 0x3b7354u: goto label_3b7354;
        case 0x3b7358u: goto label_3b7358;
        case 0x3b735cu: goto label_3b735c;
        case 0x3b7360u: goto label_3b7360;
        case 0x3b7364u: goto label_3b7364;
        case 0x3b7368u: goto label_3b7368;
        case 0x3b736cu: goto label_3b736c;
        case 0x3b7370u: goto label_3b7370;
        case 0x3b7374u: goto label_3b7374;
        case 0x3b7378u: goto label_3b7378;
        case 0x3b737cu: goto label_3b737c;
        case 0x3b7380u: goto label_3b7380;
        case 0x3b7384u: goto label_3b7384;
        case 0x3b7388u: goto label_3b7388;
        case 0x3b738cu: goto label_3b738c;
        case 0x3b7390u: goto label_3b7390;
        case 0x3b7394u: goto label_3b7394;
        case 0x3b7398u: goto label_3b7398;
        case 0x3b739cu: goto label_3b739c;
        case 0x3b73a0u: goto label_3b73a0;
        case 0x3b73a4u: goto label_3b73a4;
        case 0x3b73a8u: goto label_3b73a8;
        case 0x3b73acu: goto label_3b73ac;
        case 0x3b73b0u: goto label_3b73b0;
        case 0x3b73b4u: goto label_3b73b4;
        case 0x3b73b8u: goto label_3b73b8;
        case 0x3b73bcu: goto label_3b73bc;
        case 0x3b73c0u: goto label_3b73c0;
        case 0x3b73c4u: goto label_3b73c4;
        case 0x3b73c8u: goto label_3b73c8;
        case 0x3b73ccu: goto label_3b73cc;
        case 0x3b73d0u: goto label_3b73d0;
        case 0x3b73d4u: goto label_3b73d4;
        case 0x3b73d8u: goto label_3b73d8;
        case 0x3b73dcu: goto label_3b73dc;
        case 0x3b73e0u: goto label_3b73e0;
        case 0x3b73e4u: goto label_3b73e4;
        case 0x3b73e8u: goto label_3b73e8;
        case 0x3b73ecu: goto label_3b73ec;
        case 0x3b73f0u: goto label_3b73f0;
        case 0x3b73f4u: goto label_3b73f4;
        case 0x3b73f8u: goto label_3b73f8;
        case 0x3b73fcu: goto label_3b73fc;
        case 0x3b7400u: goto label_3b7400;
        case 0x3b7404u: goto label_3b7404;
        case 0x3b7408u: goto label_3b7408;
        case 0x3b740cu: goto label_3b740c;
        case 0x3b7410u: goto label_3b7410;
        case 0x3b7414u: goto label_3b7414;
        case 0x3b7418u: goto label_3b7418;
        case 0x3b741cu: goto label_3b741c;
        case 0x3b7420u: goto label_3b7420;
        case 0x3b7424u: goto label_3b7424;
        case 0x3b7428u: goto label_3b7428;
        case 0x3b742cu: goto label_3b742c;
        case 0x3b7430u: goto label_3b7430;
        case 0x3b7434u: goto label_3b7434;
        case 0x3b7438u: goto label_3b7438;
        case 0x3b743cu: goto label_3b743c;
        case 0x3b7440u: goto label_3b7440;
        case 0x3b7444u: goto label_3b7444;
        case 0x3b7448u: goto label_3b7448;
        case 0x3b744cu: goto label_3b744c;
        case 0x3b7450u: goto label_3b7450;
        case 0x3b7454u: goto label_3b7454;
        case 0x3b7458u: goto label_3b7458;
        case 0x3b745cu: goto label_3b745c;
        case 0x3b7460u: goto label_3b7460;
        case 0x3b7464u: goto label_3b7464;
        case 0x3b7468u: goto label_3b7468;
        case 0x3b746cu: goto label_3b746c;
        case 0x3b7470u: goto label_3b7470;
        case 0x3b7474u: goto label_3b7474;
        case 0x3b7478u: goto label_3b7478;
        case 0x3b747cu: goto label_3b747c;
        case 0x3b7480u: goto label_3b7480;
        case 0x3b7484u: goto label_3b7484;
        case 0x3b7488u: goto label_3b7488;
        case 0x3b748cu: goto label_3b748c;
        case 0x3b7490u: goto label_3b7490;
        case 0x3b7494u: goto label_3b7494;
        case 0x3b7498u: goto label_3b7498;
        case 0x3b749cu: goto label_3b749c;
        case 0x3b74a0u: goto label_3b74a0;
        case 0x3b74a4u: goto label_3b74a4;
        case 0x3b74a8u: goto label_3b74a8;
        case 0x3b74acu: goto label_3b74ac;
        case 0x3b74b0u: goto label_3b74b0;
        case 0x3b74b4u: goto label_3b74b4;
        case 0x3b74b8u: goto label_3b74b8;
        case 0x3b74bcu: goto label_3b74bc;
        case 0x3b74c0u: goto label_3b74c0;
        case 0x3b74c4u: goto label_3b74c4;
        case 0x3b74c8u: goto label_3b74c8;
        case 0x3b74ccu: goto label_3b74cc;
        case 0x3b74d0u: goto label_3b74d0;
        case 0x3b74d4u: goto label_3b74d4;
        case 0x3b74d8u: goto label_3b74d8;
        case 0x3b74dcu: goto label_3b74dc;
        case 0x3b74e0u: goto label_3b74e0;
        case 0x3b74e4u: goto label_3b74e4;
        case 0x3b74e8u: goto label_3b74e8;
        case 0x3b74ecu: goto label_3b74ec;
        case 0x3b74f0u: goto label_3b74f0;
        case 0x3b74f4u: goto label_3b74f4;
        case 0x3b74f8u: goto label_3b74f8;
        case 0x3b74fcu: goto label_3b74fc;
        case 0x3b7500u: goto label_3b7500;
        case 0x3b7504u: goto label_3b7504;
        case 0x3b7508u: goto label_3b7508;
        case 0x3b750cu: goto label_3b750c;
        case 0x3b7510u: goto label_3b7510;
        case 0x3b7514u: goto label_3b7514;
        case 0x3b7518u: goto label_3b7518;
        case 0x3b751cu: goto label_3b751c;
        case 0x3b7520u: goto label_3b7520;
        case 0x3b7524u: goto label_3b7524;
        case 0x3b7528u: goto label_3b7528;
        case 0x3b752cu: goto label_3b752c;
        case 0x3b7530u: goto label_3b7530;
        case 0x3b7534u: goto label_3b7534;
        case 0x3b7538u: goto label_3b7538;
        case 0x3b753cu: goto label_3b753c;
        case 0x3b7540u: goto label_3b7540;
        case 0x3b7544u: goto label_3b7544;
        case 0x3b7548u: goto label_3b7548;
        case 0x3b754cu: goto label_3b754c;
        case 0x3b7550u: goto label_3b7550;
        case 0x3b7554u: goto label_3b7554;
        case 0x3b7558u: goto label_3b7558;
        case 0x3b755cu: goto label_3b755c;
        case 0x3b7560u: goto label_3b7560;
        case 0x3b7564u: goto label_3b7564;
        case 0x3b7568u: goto label_3b7568;
        case 0x3b756cu: goto label_3b756c;
        case 0x3b7570u: goto label_3b7570;
        case 0x3b7574u: goto label_3b7574;
        case 0x3b7578u: goto label_3b7578;
        case 0x3b757cu: goto label_3b757c;
        case 0x3b7580u: goto label_3b7580;
        case 0x3b7584u: goto label_3b7584;
        case 0x3b7588u: goto label_3b7588;
        case 0x3b758cu: goto label_3b758c;
        case 0x3b7590u: goto label_3b7590;
        case 0x3b7594u: goto label_3b7594;
        case 0x3b7598u: goto label_3b7598;
        case 0x3b759cu: goto label_3b759c;
        case 0x3b75a0u: goto label_3b75a0;
        case 0x3b75a4u: goto label_3b75a4;
        case 0x3b75a8u: goto label_3b75a8;
        case 0x3b75acu: goto label_3b75ac;
        case 0x3b75b0u: goto label_3b75b0;
        case 0x3b75b4u: goto label_3b75b4;
        case 0x3b75b8u: goto label_3b75b8;
        case 0x3b75bcu: goto label_3b75bc;
        case 0x3b75c0u: goto label_3b75c0;
        case 0x3b75c4u: goto label_3b75c4;
        case 0x3b75c8u: goto label_3b75c8;
        case 0x3b75ccu: goto label_3b75cc;
        case 0x3b75d0u: goto label_3b75d0;
        case 0x3b75d4u: goto label_3b75d4;
        case 0x3b75d8u: goto label_3b75d8;
        case 0x3b75dcu: goto label_3b75dc;
        case 0x3b75e0u: goto label_3b75e0;
        case 0x3b75e4u: goto label_3b75e4;
        case 0x3b75e8u: goto label_3b75e8;
        case 0x3b75ecu: goto label_3b75ec;
        case 0x3b75f0u: goto label_3b75f0;
        case 0x3b75f4u: goto label_3b75f4;
        case 0x3b75f8u: goto label_3b75f8;
        case 0x3b75fcu: goto label_3b75fc;
        case 0x3b7600u: goto label_3b7600;
        case 0x3b7604u: goto label_3b7604;
        case 0x3b7608u: goto label_3b7608;
        case 0x3b760cu: goto label_3b760c;
        case 0x3b7610u: goto label_3b7610;
        case 0x3b7614u: goto label_3b7614;
        case 0x3b7618u: goto label_3b7618;
        case 0x3b761cu: goto label_3b761c;
        case 0x3b7620u: goto label_3b7620;
        case 0x3b7624u: goto label_3b7624;
        case 0x3b7628u: goto label_3b7628;
        case 0x3b762cu: goto label_3b762c;
        case 0x3b7630u: goto label_3b7630;
        case 0x3b7634u: goto label_3b7634;
        case 0x3b7638u: goto label_3b7638;
        case 0x3b763cu: goto label_3b763c;
        case 0x3b7640u: goto label_3b7640;
        case 0x3b7644u: goto label_3b7644;
        case 0x3b7648u: goto label_3b7648;
        case 0x3b764cu: goto label_3b764c;
        case 0x3b7650u: goto label_3b7650;
        case 0x3b7654u: goto label_3b7654;
        case 0x3b7658u: goto label_3b7658;
        case 0x3b765cu: goto label_3b765c;
        case 0x3b7660u: goto label_3b7660;
        case 0x3b7664u: goto label_3b7664;
        case 0x3b7668u: goto label_3b7668;
        case 0x3b766cu: goto label_3b766c;
        case 0x3b7670u: goto label_3b7670;
        case 0x3b7674u: goto label_3b7674;
        case 0x3b7678u: goto label_3b7678;
        case 0x3b767cu: goto label_3b767c;
        case 0x3b7680u: goto label_3b7680;
        case 0x3b7684u: goto label_3b7684;
        case 0x3b7688u: goto label_3b7688;
        case 0x3b768cu: goto label_3b768c;
        case 0x3b7690u: goto label_3b7690;
        case 0x3b7694u: goto label_3b7694;
        case 0x3b7698u: goto label_3b7698;
        case 0x3b769cu: goto label_3b769c;
        case 0x3b76a0u: goto label_3b76a0;
        case 0x3b76a4u: goto label_3b76a4;
        case 0x3b76a8u: goto label_3b76a8;
        case 0x3b76acu: goto label_3b76ac;
        case 0x3b76b0u: goto label_3b76b0;
        case 0x3b76b4u: goto label_3b76b4;
        case 0x3b76b8u: goto label_3b76b8;
        case 0x3b76bcu: goto label_3b76bc;
        case 0x3b76c0u: goto label_3b76c0;
        case 0x3b76c4u: goto label_3b76c4;
        case 0x3b76c8u: goto label_3b76c8;
        case 0x3b76ccu: goto label_3b76cc;
        case 0x3b76d0u: goto label_3b76d0;
        case 0x3b76d4u: goto label_3b76d4;
        case 0x3b76d8u: goto label_3b76d8;
        case 0x3b76dcu: goto label_3b76dc;
        case 0x3b76e0u: goto label_3b76e0;
        case 0x3b76e4u: goto label_3b76e4;
        case 0x3b76e8u: goto label_3b76e8;
        case 0x3b76ecu: goto label_3b76ec;
        case 0x3b76f0u: goto label_3b76f0;
        case 0x3b76f4u: goto label_3b76f4;
        case 0x3b76f8u: goto label_3b76f8;
        case 0x3b76fcu: goto label_3b76fc;
        case 0x3b7700u: goto label_3b7700;
        case 0x3b7704u: goto label_3b7704;
        case 0x3b7708u: goto label_3b7708;
        case 0x3b770cu: goto label_3b770c;
        case 0x3b7710u: goto label_3b7710;
        case 0x3b7714u: goto label_3b7714;
        case 0x3b7718u: goto label_3b7718;
        case 0x3b771cu: goto label_3b771c;
        case 0x3b7720u: goto label_3b7720;
        case 0x3b7724u: goto label_3b7724;
        case 0x3b7728u: goto label_3b7728;
        case 0x3b772cu: goto label_3b772c;
        case 0x3b7730u: goto label_3b7730;
        case 0x3b7734u: goto label_3b7734;
        case 0x3b7738u: goto label_3b7738;
        case 0x3b773cu: goto label_3b773c;
        case 0x3b7740u: goto label_3b7740;
        case 0x3b7744u: goto label_3b7744;
        case 0x3b7748u: goto label_3b7748;
        case 0x3b774cu: goto label_3b774c;
        case 0x3b7750u: goto label_3b7750;
        case 0x3b7754u: goto label_3b7754;
        case 0x3b7758u: goto label_3b7758;
        case 0x3b775cu: goto label_3b775c;
        case 0x3b7760u: goto label_3b7760;
        case 0x3b7764u: goto label_3b7764;
        case 0x3b7768u: goto label_3b7768;
        case 0x3b776cu: goto label_3b776c;
        case 0x3b7770u: goto label_3b7770;
        case 0x3b7774u: goto label_3b7774;
        case 0x3b7778u: goto label_3b7778;
        case 0x3b777cu: goto label_3b777c;
        case 0x3b7780u: goto label_3b7780;
        case 0x3b7784u: goto label_3b7784;
        case 0x3b7788u: goto label_3b7788;
        case 0x3b778cu: goto label_3b778c;
        case 0x3b7790u: goto label_3b7790;
        case 0x3b7794u: goto label_3b7794;
        case 0x3b7798u: goto label_3b7798;
        case 0x3b779cu: goto label_3b779c;
        case 0x3b77a0u: goto label_3b77a0;
        case 0x3b77a4u: goto label_3b77a4;
        case 0x3b77a8u: goto label_3b77a8;
        case 0x3b77acu: goto label_3b77ac;
        case 0x3b77b0u: goto label_3b77b0;
        case 0x3b77b4u: goto label_3b77b4;
        case 0x3b77b8u: goto label_3b77b8;
        case 0x3b77bcu: goto label_3b77bc;
        case 0x3b77c0u: goto label_3b77c0;
        case 0x3b77c4u: goto label_3b77c4;
        case 0x3b77c8u: goto label_3b77c8;
        case 0x3b77ccu: goto label_3b77cc;
        case 0x3b77d0u: goto label_3b77d0;
        case 0x3b77d4u: goto label_3b77d4;
        case 0x3b77d8u: goto label_3b77d8;
        case 0x3b77dcu: goto label_3b77dc;
        case 0x3b77e0u: goto label_3b77e0;
        case 0x3b77e4u: goto label_3b77e4;
        case 0x3b77e8u: goto label_3b77e8;
        case 0x3b77ecu: goto label_3b77ec;
        case 0x3b77f0u: goto label_3b77f0;
        case 0x3b77f4u: goto label_3b77f4;
        case 0x3b77f8u: goto label_3b77f8;
        case 0x3b77fcu: goto label_3b77fc;
        case 0x3b7800u: goto label_3b7800;
        case 0x3b7804u: goto label_3b7804;
        case 0x3b7808u: goto label_3b7808;
        case 0x3b780cu: goto label_3b780c;
        case 0x3b7810u: goto label_3b7810;
        case 0x3b7814u: goto label_3b7814;
        case 0x3b7818u: goto label_3b7818;
        case 0x3b781cu: goto label_3b781c;
        case 0x3b7820u: goto label_3b7820;
        case 0x3b7824u: goto label_3b7824;
        case 0x3b7828u: goto label_3b7828;
        case 0x3b782cu: goto label_3b782c;
        case 0x3b7830u: goto label_3b7830;
        case 0x3b7834u: goto label_3b7834;
        case 0x3b7838u: goto label_3b7838;
        case 0x3b783cu: goto label_3b783c;
        case 0x3b7840u: goto label_3b7840;
        case 0x3b7844u: goto label_3b7844;
        case 0x3b7848u: goto label_3b7848;
        case 0x3b784cu: goto label_3b784c;
        case 0x3b7850u: goto label_3b7850;
        case 0x3b7854u: goto label_3b7854;
        case 0x3b7858u: goto label_3b7858;
        case 0x3b785cu: goto label_3b785c;
        case 0x3b7860u: goto label_3b7860;
        case 0x3b7864u: goto label_3b7864;
        case 0x3b7868u: goto label_3b7868;
        case 0x3b786cu: goto label_3b786c;
        case 0x3b7870u: goto label_3b7870;
        case 0x3b7874u: goto label_3b7874;
        case 0x3b7878u: goto label_3b7878;
        case 0x3b787cu: goto label_3b787c;
        case 0x3b7880u: goto label_3b7880;
        case 0x3b7884u: goto label_3b7884;
        case 0x3b7888u: goto label_3b7888;
        case 0x3b788cu: goto label_3b788c;
        case 0x3b7890u: goto label_3b7890;
        case 0x3b7894u: goto label_3b7894;
        case 0x3b7898u: goto label_3b7898;
        case 0x3b789cu: goto label_3b789c;
        case 0x3b78a0u: goto label_3b78a0;
        case 0x3b78a4u: goto label_3b78a4;
        case 0x3b78a8u: goto label_3b78a8;
        case 0x3b78acu: goto label_3b78ac;
        case 0x3b78b0u: goto label_3b78b0;
        case 0x3b78b4u: goto label_3b78b4;
        case 0x3b78b8u: goto label_3b78b8;
        case 0x3b78bcu: goto label_3b78bc;
        case 0x3b78c0u: goto label_3b78c0;
        case 0x3b78c4u: goto label_3b78c4;
        case 0x3b78c8u: goto label_3b78c8;
        case 0x3b78ccu: goto label_3b78cc;
        case 0x3b78d0u: goto label_3b78d0;
        case 0x3b78d4u: goto label_3b78d4;
        case 0x3b78d8u: goto label_3b78d8;
        case 0x3b78dcu: goto label_3b78dc;
        case 0x3b78e0u: goto label_3b78e0;
        case 0x3b78e4u: goto label_3b78e4;
        case 0x3b78e8u: goto label_3b78e8;
        case 0x3b78ecu: goto label_3b78ec;
        case 0x3b78f0u: goto label_3b78f0;
        case 0x3b78f4u: goto label_3b78f4;
        case 0x3b78f8u: goto label_3b78f8;
        case 0x3b78fcu: goto label_3b78fc;
        case 0x3b7900u: goto label_3b7900;
        case 0x3b7904u: goto label_3b7904;
        case 0x3b7908u: goto label_3b7908;
        case 0x3b790cu: goto label_3b790c;
        case 0x3b7910u: goto label_3b7910;
        case 0x3b7914u: goto label_3b7914;
        case 0x3b7918u: goto label_3b7918;
        case 0x3b791cu: goto label_3b791c;
        case 0x3b7920u: goto label_3b7920;
        case 0x3b7924u: goto label_3b7924;
        case 0x3b7928u: goto label_3b7928;
        case 0x3b792cu: goto label_3b792c;
        case 0x3b7930u: goto label_3b7930;
        case 0x3b7934u: goto label_3b7934;
        case 0x3b7938u: goto label_3b7938;
        case 0x3b793cu: goto label_3b793c;
        case 0x3b7940u: goto label_3b7940;
        case 0x3b7944u: goto label_3b7944;
        case 0x3b7948u: goto label_3b7948;
        case 0x3b794cu: goto label_3b794c;
        case 0x3b7950u: goto label_3b7950;
        case 0x3b7954u: goto label_3b7954;
        case 0x3b7958u: goto label_3b7958;
        case 0x3b795cu: goto label_3b795c;
        case 0x3b7960u: goto label_3b7960;
        case 0x3b7964u: goto label_3b7964;
        case 0x3b7968u: goto label_3b7968;
        case 0x3b796cu: goto label_3b796c;
        case 0x3b7970u: goto label_3b7970;
        case 0x3b7974u: goto label_3b7974;
        case 0x3b7978u: goto label_3b7978;
        case 0x3b797cu: goto label_3b797c;
        case 0x3b7980u: goto label_3b7980;
        case 0x3b7984u: goto label_3b7984;
        case 0x3b7988u: goto label_3b7988;
        case 0x3b798cu: goto label_3b798c;
        case 0x3b7990u: goto label_3b7990;
        case 0x3b7994u: goto label_3b7994;
        case 0x3b7998u: goto label_3b7998;
        case 0x3b799cu: goto label_3b799c;
        case 0x3b79a0u: goto label_3b79a0;
        case 0x3b79a4u: goto label_3b79a4;
        case 0x3b79a8u: goto label_3b79a8;
        case 0x3b79acu: goto label_3b79ac;
        case 0x3b79b0u: goto label_3b79b0;
        case 0x3b79b4u: goto label_3b79b4;
        case 0x3b79b8u: goto label_3b79b8;
        case 0x3b79bcu: goto label_3b79bc;
        case 0x3b79c0u: goto label_3b79c0;
        case 0x3b79c4u: goto label_3b79c4;
        case 0x3b79c8u: goto label_3b79c8;
        case 0x3b79ccu: goto label_3b79cc;
        case 0x3b79d0u: goto label_3b79d0;
        case 0x3b79d4u: goto label_3b79d4;
        case 0x3b79d8u: goto label_3b79d8;
        case 0x3b79dcu: goto label_3b79dc;
        case 0x3b79e0u: goto label_3b79e0;
        case 0x3b79e4u: goto label_3b79e4;
        case 0x3b79e8u: goto label_3b79e8;
        case 0x3b79ecu: goto label_3b79ec;
        case 0x3b79f0u: goto label_3b79f0;
        case 0x3b79f4u: goto label_3b79f4;
        case 0x3b79f8u: goto label_3b79f8;
        case 0x3b79fcu: goto label_3b79fc;
        case 0x3b7a00u: goto label_3b7a00;
        case 0x3b7a04u: goto label_3b7a04;
        case 0x3b7a08u: goto label_3b7a08;
        case 0x3b7a0cu: goto label_3b7a0c;
        case 0x3b7a10u: goto label_3b7a10;
        case 0x3b7a14u: goto label_3b7a14;
        case 0x3b7a18u: goto label_3b7a18;
        case 0x3b7a1cu: goto label_3b7a1c;
        case 0x3b7a20u: goto label_3b7a20;
        case 0x3b7a24u: goto label_3b7a24;
        case 0x3b7a28u: goto label_3b7a28;
        case 0x3b7a2cu: goto label_3b7a2c;
        case 0x3b7a30u: goto label_3b7a30;
        case 0x3b7a34u: goto label_3b7a34;
        case 0x3b7a38u: goto label_3b7a38;
        case 0x3b7a3cu: goto label_3b7a3c;
        case 0x3b7a40u: goto label_3b7a40;
        case 0x3b7a44u: goto label_3b7a44;
        case 0x3b7a48u: goto label_3b7a48;
        case 0x3b7a4cu: goto label_3b7a4c;
        case 0x3b7a50u: goto label_3b7a50;
        case 0x3b7a54u: goto label_3b7a54;
        case 0x3b7a58u: goto label_3b7a58;
        case 0x3b7a5cu: goto label_3b7a5c;
        case 0x3b7a60u: goto label_3b7a60;
        case 0x3b7a64u: goto label_3b7a64;
        case 0x3b7a68u: goto label_3b7a68;
        case 0x3b7a6cu: goto label_3b7a6c;
        case 0x3b7a70u: goto label_3b7a70;
        case 0x3b7a74u: goto label_3b7a74;
        case 0x3b7a78u: goto label_3b7a78;
        case 0x3b7a7cu: goto label_3b7a7c;
        case 0x3b7a80u: goto label_3b7a80;
        case 0x3b7a84u: goto label_3b7a84;
        case 0x3b7a88u: goto label_3b7a88;
        case 0x3b7a8cu: goto label_3b7a8c;
        case 0x3b7a90u: goto label_3b7a90;
        case 0x3b7a94u: goto label_3b7a94;
        case 0x3b7a98u: goto label_3b7a98;
        case 0x3b7a9cu: goto label_3b7a9c;
        case 0x3b7aa0u: goto label_3b7aa0;
        case 0x3b7aa4u: goto label_3b7aa4;
        case 0x3b7aa8u: goto label_3b7aa8;
        case 0x3b7aacu: goto label_3b7aac;
        case 0x3b7ab0u: goto label_3b7ab0;
        case 0x3b7ab4u: goto label_3b7ab4;
        case 0x3b7ab8u: goto label_3b7ab8;
        case 0x3b7abcu: goto label_3b7abc;
        case 0x3b7ac0u: goto label_3b7ac0;
        case 0x3b7ac4u: goto label_3b7ac4;
        case 0x3b7ac8u: goto label_3b7ac8;
        case 0x3b7accu: goto label_3b7acc;
        case 0x3b7ad0u: goto label_3b7ad0;
        case 0x3b7ad4u: goto label_3b7ad4;
        case 0x3b7ad8u: goto label_3b7ad8;
        case 0x3b7adcu: goto label_3b7adc;
        case 0x3b7ae0u: goto label_3b7ae0;
        case 0x3b7ae4u: goto label_3b7ae4;
        case 0x3b7ae8u: goto label_3b7ae8;
        case 0x3b7aecu: goto label_3b7aec;
        case 0x3b7af0u: goto label_3b7af0;
        case 0x3b7af4u: goto label_3b7af4;
        case 0x3b7af8u: goto label_3b7af8;
        case 0x3b7afcu: goto label_3b7afc;
        case 0x3b7b00u: goto label_3b7b00;
        case 0x3b7b04u: goto label_3b7b04;
        case 0x3b7b08u: goto label_3b7b08;
        case 0x3b7b0cu: goto label_3b7b0c;
        case 0x3b7b10u: goto label_3b7b10;
        case 0x3b7b14u: goto label_3b7b14;
        case 0x3b7b18u: goto label_3b7b18;
        case 0x3b7b1cu: goto label_3b7b1c;
        case 0x3b7b20u: goto label_3b7b20;
        case 0x3b7b24u: goto label_3b7b24;
        case 0x3b7b28u: goto label_3b7b28;
        case 0x3b7b2cu: goto label_3b7b2c;
        case 0x3b7b30u: goto label_3b7b30;
        case 0x3b7b34u: goto label_3b7b34;
        case 0x3b7b38u: goto label_3b7b38;
        case 0x3b7b3cu: goto label_3b7b3c;
        case 0x3b7b40u: goto label_3b7b40;
        case 0x3b7b44u: goto label_3b7b44;
        case 0x3b7b48u: goto label_3b7b48;
        case 0x3b7b4cu: goto label_3b7b4c;
        case 0x3b7b50u: goto label_3b7b50;
        case 0x3b7b54u: goto label_3b7b54;
        case 0x3b7b58u: goto label_3b7b58;
        case 0x3b7b5cu: goto label_3b7b5c;
        case 0x3b7b60u: goto label_3b7b60;
        case 0x3b7b64u: goto label_3b7b64;
        case 0x3b7b68u: goto label_3b7b68;
        case 0x3b7b6cu: goto label_3b7b6c;
        case 0x3b7b70u: goto label_3b7b70;
        case 0x3b7b74u: goto label_3b7b74;
        case 0x3b7b78u: goto label_3b7b78;
        case 0x3b7b7cu: goto label_3b7b7c;
        case 0x3b7b80u: goto label_3b7b80;
        case 0x3b7b84u: goto label_3b7b84;
        case 0x3b7b88u: goto label_3b7b88;
        case 0x3b7b8cu: goto label_3b7b8c;
        case 0x3b7b90u: goto label_3b7b90;
        case 0x3b7b94u: goto label_3b7b94;
        case 0x3b7b98u: goto label_3b7b98;
        case 0x3b7b9cu: goto label_3b7b9c;
        case 0x3b7ba0u: goto label_3b7ba0;
        case 0x3b7ba4u: goto label_3b7ba4;
        case 0x3b7ba8u: goto label_3b7ba8;
        case 0x3b7bacu: goto label_3b7bac;
        case 0x3b7bb0u: goto label_3b7bb0;
        case 0x3b7bb4u: goto label_3b7bb4;
        case 0x3b7bb8u: goto label_3b7bb8;
        case 0x3b7bbcu: goto label_3b7bbc;
        case 0x3b7bc0u: goto label_3b7bc0;
        case 0x3b7bc4u: goto label_3b7bc4;
        case 0x3b7bc8u: goto label_3b7bc8;
        case 0x3b7bccu: goto label_3b7bcc;
        case 0x3b7bd0u: goto label_3b7bd0;
        case 0x3b7bd4u: goto label_3b7bd4;
        case 0x3b7bd8u: goto label_3b7bd8;
        case 0x3b7bdcu: goto label_3b7bdc;
        case 0x3b7be0u: goto label_3b7be0;
        case 0x3b7be4u: goto label_3b7be4;
        case 0x3b7be8u: goto label_3b7be8;
        case 0x3b7becu: goto label_3b7bec;
        case 0x3b7bf0u: goto label_3b7bf0;
        case 0x3b7bf4u: goto label_3b7bf4;
        case 0x3b7bf8u: goto label_3b7bf8;
        case 0x3b7bfcu: goto label_3b7bfc;
        case 0x3b7c00u: goto label_3b7c00;
        case 0x3b7c04u: goto label_3b7c04;
        case 0x3b7c08u: goto label_3b7c08;
        case 0x3b7c0cu: goto label_3b7c0c;
        case 0x3b7c10u: goto label_3b7c10;
        case 0x3b7c14u: goto label_3b7c14;
        case 0x3b7c18u: goto label_3b7c18;
        case 0x3b7c1cu: goto label_3b7c1c;
        case 0x3b7c20u: goto label_3b7c20;
        case 0x3b7c24u: goto label_3b7c24;
        case 0x3b7c28u: goto label_3b7c28;
        case 0x3b7c2cu: goto label_3b7c2c;
        case 0x3b7c30u: goto label_3b7c30;
        case 0x3b7c34u: goto label_3b7c34;
        case 0x3b7c38u: goto label_3b7c38;
        case 0x3b7c3cu: goto label_3b7c3c;
        case 0x3b7c40u: goto label_3b7c40;
        case 0x3b7c44u: goto label_3b7c44;
        case 0x3b7c48u: goto label_3b7c48;
        case 0x3b7c4cu: goto label_3b7c4c;
        case 0x3b7c50u: goto label_3b7c50;
        case 0x3b7c54u: goto label_3b7c54;
        case 0x3b7c58u: goto label_3b7c58;
        case 0x3b7c5cu: goto label_3b7c5c;
        case 0x3b7c60u: goto label_3b7c60;
        case 0x3b7c64u: goto label_3b7c64;
        case 0x3b7c68u: goto label_3b7c68;
        case 0x3b7c6cu: goto label_3b7c6c;
        case 0x3b7c70u: goto label_3b7c70;
        case 0x3b7c74u: goto label_3b7c74;
        case 0x3b7c78u: goto label_3b7c78;
        case 0x3b7c7cu: goto label_3b7c7c;
        case 0x3b7c80u: goto label_3b7c80;
        case 0x3b7c84u: goto label_3b7c84;
        case 0x3b7c88u: goto label_3b7c88;
        case 0x3b7c8cu: goto label_3b7c8c;
        case 0x3b7c90u: goto label_3b7c90;
        case 0x3b7c94u: goto label_3b7c94;
        case 0x3b7c98u: goto label_3b7c98;
        case 0x3b7c9cu: goto label_3b7c9c;
        case 0x3b7ca0u: goto label_3b7ca0;
        case 0x3b7ca4u: goto label_3b7ca4;
        case 0x3b7ca8u: goto label_3b7ca8;
        case 0x3b7cacu: goto label_3b7cac;
        case 0x3b7cb0u: goto label_3b7cb0;
        case 0x3b7cb4u: goto label_3b7cb4;
        case 0x3b7cb8u: goto label_3b7cb8;
        case 0x3b7cbcu: goto label_3b7cbc;
        case 0x3b7cc0u: goto label_3b7cc0;
        case 0x3b7cc4u: goto label_3b7cc4;
        case 0x3b7cc8u: goto label_3b7cc8;
        case 0x3b7cccu: goto label_3b7ccc;
        case 0x3b7cd0u: goto label_3b7cd0;
        case 0x3b7cd4u: goto label_3b7cd4;
        case 0x3b7cd8u: goto label_3b7cd8;
        case 0x3b7cdcu: goto label_3b7cdc;
        case 0x3b7ce0u: goto label_3b7ce0;
        case 0x3b7ce4u: goto label_3b7ce4;
        case 0x3b7ce8u: goto label_3b7ce8;
        case 0x3b7cecu: goto label_3b7cec;
        case 0x3b7cf0u: goto label_3b7cf0;
        case 0x3b7cf4u: goto label_3b7cf4;
        case 0x3b7cf8u: goto label_3b7cf8;
        case 0x3b7cfcu: goto label_3b7cfc;
        case 0x3b7d00u: goto label_3b7d00;
        case 0x3b7d04u: goto label_3b7d04;
        case 0x3b7d08u: goto label_3b7d08;
        case 0x3b7d0cu: goto label_3b7d0c;
        case 0x3b7d10u: goto label_3b7d10;
        case 0x3b7d14u: goto label_3b7d14;
        case 0x3b7d18u: goto label_3b7d18;
        case 0x3b7d1cu: goto label_3b7d1c;
        case 0x3b7d20u: goto label_3b7d20;
        case 0x3b7d24u: goto label_3b7d24;
        case 0x3b7d28u: goto label_3b7d28;
        case 0x3b7d2cu: goto label_3b7d2c;
        case 0x3b7d30u: goto label_3b7d30;
        case 0x3b7d34u: goto label_3b7d34;
        case 0x3b7d38u: goto label_3b7d38;
        case 0x3b7d3cu: goto label_3b7d3c;
        case 0x3b7d40u: goto label_3b7d40;
        case 0x3b7d44u: goto label_3b7d44;
        case 0x3b7d48u: goto label_3b7d48;
        case 0x3b7d4cu: goto label_3b7d4c;
        case 0x3b7d50u: goto label_3b7d50;
        case 0x3b7d54u: goto label_3b7d54;
        case 0x3b7d58u: goto label_3b7d58;
        case 0x3b7d5cu: goto label_3b7d5c;
        case 0x3b7d60u: goto label_3b7d60;
        case 0x3b7d64u: goto label_3b7d64;
        case 0x3b7d68u: goto label_3b7d68;
        case 0x3b7d6cu: goto label_3b7d6c;
        case 0x3b7d70u: goto label_3b7d70;
        case 0x3b7d74u: goto label_3b7d74;
        case 0x3b7d78u: goto label_3b7d78;
        case 0x3b7d7cu: goto label_3b7d7c;
        case 0x3b7d80u: goto label_3b7d80;
        case 0x3b7d84u: goto label_3b7d84;
        case 0x3b7d88u: goto label_3b7d88;
        case 0x3b7d8cu: goto label_3b7d8c;
        case 0x3b7d90u: goto label_3b7d90;
        case 0x3b7d94u: goto label_3b7d94;
        case 0x3b7d98u: goto label_3b7d98;
        case 0x3b7d9cu: goto label_3b7d9c;
        case 0x3b7da0u: goto label_3b7da0;
        case 0x3b7da4u: goto label_3b7da4;
        case 0x3b7da8u: goto label_3b7da8;
        case 0x3b7dacu: goto label_3b7dac;
        case 0x3b7db0u: goto label_3b7db0;
        case 0x3b7db4u: goto label_3b7db4;
        case 0x3b7db8u: goto label_3b7db8;
        case 0x3b7dbcu: goto label_3b7dbc;
        case 0x3b7dc0u: goto label_3b7dc0;
        case 0x3b7dc4u: goto label_3b7dc4;
        case 0x3b7dc8u: goto label_3b7dc8;
        case 0x3b7dccu: goto label_3b7dcc;
        case 0x3b7dd0u: goto label_3b7dd0;
        case 0x3b7dd4u: goto label_3b7dd4;
        case 0x3b7dd8u: goto label_3b7dd8;
        case 0x3b7ddcu: goto label_3b7ddc;
        case 0x3b7de0u: goto label_3b7de0;
        case 0x3b7de4u: goto label_3b7de4;
        case 0x3b7de8u: goto label_3b7de8;
        case 0x3b7decu: goto label_3b7dec;
        case 0x3b7df0u: goto label_3b7df0;
        case 0x3b7df4u: goto label_3b7df4;
        case 0x3b7df8u: goto label_3b7df8;
        case 0x3b7dfcu: goto label_3b7dfc;
        case 0x3b7e00u: goto label_3b7e00;
        case 0x3b7e04u: goto label_3b7e04;
        case 0x3b7e08u: goto label_3b7e08;
        case 0x3b7e0cu: goto label_3b7e0c;
        case 0x3b7e10u: goto label_3b7e10;
        case 0x3b7e14u: goto label_3b7e14;
        case 0x3b7e18u: goto label_3b7e18;
        case 0x3b7e1cu: goto label_3b7e1c;
        case 0x3b7e20u: goto label_3b7e20;
        case 0x3b7e24u: goto label_3b7e24;
        case 0x3b7e28u: goto label_3b7e28;
        case 0x3b7e2cu: goto label_3b7e2c;
        case 0x3b7e30u: goto label_3b7e30;
        case 0x3b7e34u: goto label_3b7e34;
        case 0x3b7e38u: goto label_3b7e38;
        case 0x3b7e3cu: goto label_3b7e3c;
        case 0x3b7e40u: goto label_3b7e40;
        case 0x3b7e44u: goto label_3b7e44;
        case 0x3b7e48u: goto label_3b7e48;
        case 0x3b7e4cu: goto label_3b7e4c;
        case 0x3b7e50u: goto label_3b7e50;
        case 0x3b7e54u: goto label_3b7e54;
        case 0x3b7e58u: goto label_3b7e58;
        case 0x3b7e5cu: goto label_3b7e5c;
        case 0x3b7e60u: goto label_3b7e60;
        case 0x3b7e64u: goto label_3b7e64;
        case 0x3b7e68u: goto label_3b7e68;
        case 0x3b7e6cu: goto label_3b7e6c;
        case 0x3b7e70u: goto label_3b7e70;
        case 0x3b7e74u: goto label_3b7e74;
        case 0x3b7e78u: goto label_3b7e78;
        case 0x3b7e7cu: goto label_3b7e7c;
        case 0x3b7e80u: goto label_3b7e80;
        case 0x3b7e84u: goto label_3b7e84;
        case 0x3b7e88u: goto label_3b7e88;
        case 0x3b7e8cu: goto label_3b7e8c;
        case 0x3b7e90u: goto label_3b7e90;
        case 0x3b7e94u: goto label_3b7e94;
        case 0x3b7e98u: goto label_3b7e98;
        case 0x3b7e9cu: goto label_3b7e9c;
        case 0x3b7ea0u: goto label_3b7ea0;
        case 0x3b7ea4u: goto label_3b7ea4;
        case 0x3b7ea8u: goto label_3b7ea8;
        case 0x3b7eacu: goto label_3b7eac;
        case 0x3b7eb0u: goto label_3b7eb0;
        case 0x3b7eb4u: goto label_3b7eb4;
        case 0x3b7eb8u: goto label_3b7eb8;
        case 0x3b7ebcu: goto label_3b7ebc;
        case 0x3b7ec0u: goto label_3b7ec0;
        case 0x3b7ec4u: goto label_3b7ec4;
        case 0x3b7ec8u: goto label_3b7ec8;
        case 0x3b7eccu: goto label_3b7ecc;
        case 0x3b7ed0u: goto label_3b7ed0;
        case 0x3b7ed4u: goto label_3b7ed4;
        case 0x3b7ed8u: goto label_3b7ed8;
        case 0x3b7edcu: goto label_3b7edc;
        case 0x3b7ee0u: goto label_3b7ee0;
        case 0x3b7ee4u: goto label_3b7ee4;
        case 0x3b7ee8u: goto label_3b7ee8;
        case 0x3b7eecu: goto label_3b7eec;
        case 0x3b7ef0u: goto label_3b7ef0;
        case 0x3b7ef4u: goto label_3b7ef4;
        case 0x3b7ef8u: goto label_3b7ef8;
        case 0x3b7efcu: goto label_3b7efc;
        case 0x3b7f00u: goto label_3b7f00;
        case 0x3b7f04u: goto label_3b7f04;
        case 0x3b7f08u: goto label_3b7f08;
        case 0x3b7f0cu: goto label_3b7f0c;
        case 0x3b7f10u: goto label_3b7f10;
        case 0x3b7f14u: goto label_3b7f14;
        case 0x3b7f18u: goto label_3b7f18;
        case 0x3b7f1cu: goto label_3b7f1c;
        case 0x3b7f20u: goto label_3b7f20;
        case 0x3b7f24u: goto label_3b7f24;
        case 0x3b7f28u: goto label_3b7f28;
        case 0x3b7f2cu: goto label_3b7f2c;
        case 0x3b7f30u: goto label_3b7f30;
        case 0x3b7f34u: goto label_3b7f34;
        case 0x3b7f38u: goto label_3b7f38;
        case 0x3b7f3cu: goto label_3b7f3c;
        case 0x3b7f40u: goto label_3b7f40;
        case 0x3b7f44u: goto label_3b7f44;
        case 0x3b7f48u: goto label_3b7f48;
        case 0x3b7f4cu: goto label_3b7f4c;
        case 0x3b7f50u: goto label_3b7f50;
        case 0x3b7f54u: goto label_3b7f54;
        case 0x3b7f58u: goto label_3b7f58;
        case 0x3b7f5cu: goto label_3b7f5c;
        case 0x3b7f60u: goto label_3b7f60;
        case 0x3b7f64u: goto label_3b7f64;
        case 0x3b7f68u: goto label_3b7f68;
        case 0x3b7f6cu: goto label_3b7f6c;
        case 0x3b7f70u: goto label_3b7f70;
        case 0x3b7f74u: goto label_3b7f74;
        case 0x3b7f78u: goto label_3b7f78;
        case 0x3b7f7cu: goto label_3b7f7c;
        case 0x3b7f80u: goto label_3b7f80;
        case 0x3b7f84u: goto label_3b7f84;
        case 0x3b7f88u: goto label_3b7f88;
        case 0x3b7f8cu: goto label_3b7f8c;
        case 0x3b7f90u: goto label_3b7f90;
        case 0x3b7f94u: goto label_3b7f94;
        case 0x3b7f98u: goto label_3b7f98;
        case 0x3b7f9cu: goto label_3b7f9c;
        case 0x3b7fa0u: goto label_3b7fa0;
        case 0x3b7fa4u: goto label_3b7fa4;
        case 0x3b7fa8u: goto label_3b7fa8;
        case 0x3b7facu: goto label_3b7fac;
        case 0x3b7fb0u: goto label_3b7fb0;
        case 0x3b7fb4u: goto label_3b7fb4;
        case 0x3b7fb8u: goto label_3b7fb8;
        case 0x3b7fbcu: goto label_3b7fbc;
        case 0x3b7fc0u: goto label_3b7fc0;
        case 0x3b7fc4u: goto label_3b7fc4;
        case 0x3b7fc8u: goto label_3b7fc8;
        case 0x3b7fccu: goto label_3b7fcc;
        case 0x3b7fd0u: goto label_3b7fd0;
        case 0x3b7fd4u: goto label_3b7fd4;
        case 0x3b7fd8u: goto label_3b7fd8;
        case 0x3b7fdcu: goto label_3b7fdc;
        case 0x3b7fe0u: goto label_3b7fe0;
        case 0x3b7fe4u: goto label_3b7fe4;
        case 0x3b7fe8u: goto label_3b7fe8;
        case 0x3b7fecu: goto label_3b7fec;
        case 0x3b7ff0u: goto label_3b7ff0;
        case 0x3b7ff4u: goto label_3b7ff4;
        case 0x3b7ff8u: goto label_3b7ff8;
        case 0x3b7ffcu: goto label_3b7ffc;
        case 0x3b8000u: goto label_3b8000;
        case 0x3b8004u: goto label_3b8004;
        case 0x3b8008u: goto label_3b8008;
        case 0x3b800cu: goto label_3b800c;
        case 0x3b8010u: goto label_3b8010;
        case 0x3b8014u: goto label_3b8014;
        case 0x3b8018u: goto label_3b8018;
        case 0x3b801cu: goto label_3b801c;
        case 0x3b8020u: goto label_3b8020;
        case 0x3b8024u: goto label_3b8024;
        case 0x3b8028u: goto label_3b8028;
        case 0x3b802cu: goto label_3b802c;
        case 0x3b8030u: goto label_3b8030;
        case 0x3b8034u: goto label_3b8034;
        case 0x3b8038u: goto label_3b8038;
        case 0x3b803cu: goto label_3b803c;
        case 0x3b8040u: goto label_3b8040;
        case 0x3b8044u: goto label_3b8044;
        case 0x3b8048u: goto label_3b8048;
        case 0x3b804cu: goto label_3b804c;
        case 0x3b8050u: goto label_3b8050;
        case 0x3b8054u: goto label_3b8054;
        case 0x3b8058u: goto label_3b8058;
        case 0x3b805cu: goto label_3b805c;
        case 0x3b8060u: goto label_3b8060;
        case 0x3b8064u: goto label_3b8064;
        case 0x3b8068u: goto label_3b8068;
        case 0x3b806cu: goto label_3b806c;
        case 0x3b8070u: goto label_3b8070;
        case 0x3b8074u: goto label_3b8074;
        case 0x3b8078u: goto label_3b8078;
        case 0x3b807cu: goto label_3b807c;
        case 0x3b8080u: goto label_3b8080;
        case 0x3b8084u: goto label_3b8084;
        case 0x3b8088u: goto label_3b8088;
        case 0x3b808cu: goto label_3b808c;
        case 0x3b8090u: goto label_3b8090;
        case 0x3b8094u: goto label_3b8094;
        case 0x3b8098u: goto label_3b8098;
        case 0x3b809cu: goto label_3b809c;
        case 0x3b80a0u: goto label_3b80a0;
        case 0x3b80a4u: goto label_3b80a4;
        case 0x3b80a8u: goto label_3b80a8;
        case 0x3b80acu: goto label_3b80ac;
        case 0x3b80b0u: goto label_3b80b0;
        case 0x3b80b4u: goto label_3b80b4;
        case 0x3b80b8u: goto label_3b80b8;
        case 0x3b80bcu: goto label_3b80bc;
        case 0x3b80c0u: goto label_3b80c0;
        case 0x3b80c4u: goto label_3b80c4;
        case 0x3b80c8u: goto label_3b80c8;
        case 0x3b80ccu: goto label_3b80cc;
        case 0x3b80d0u: goto label_3b80d0;
        case 0x3b80d4u: goto label_3b80d4;
        case 0x3b80d8u: goto label_3b80d8;
        case 0x3b80dcu: goto label_3b80dc;
        case 0x3b80e0u: goto label_3b80e0;
        case 0x3b80e4u: goto label_3b80e4;
        case 0x3b80e8u: goto label_3b80e8;
        case 0x3b80ecu: goto label_3b80ec;
        case 0x3b80f0u: goto label_3b80f0;
        case 0x3b80f4u: goto label_3b80f4;
        case 0x3b80f8u: goto label_3b80f8;
        case 0x3b80fcu: goto label_3b80fc;
        case 0x3b8100u: goto label_3b8100;
        case 0x3b8104u: goto label_3b8104;
        case 0x3b8108u: goto label_3b8108;
        case 0x3b810cu: goto label_3b810c;
        case 0x3b8110u: goto label_3b8110;
        case 0x3b8114u: goto label_3b8114;
        case 0x3b8118u: goto label_3b8118;
        case 0x3b811cu: goto label_3b811c;
        case 0x3b8120u: goto label_3b8120;
        case 0x3b8124u: goto label_3b8124;
        case 0x3b8128u: goto label_3b8128;
        case 0x3b812cu: goto label_3b812c;
        case 0x3b8130u: goto label_3b8130;
        case 0x3b8134u: goto label_3b8134;
        case 0x3b8138u: goto label_3b8138;
        case 0x3b813cu: goto label_3b813c;
        case 0x3b8140u: goto label_3b8140;
        case 0x3b8144u: goto label_3b8144;
        case 0x3b8148u: goto label_3b8148;
        case 0x3b814cu: goto label_3b814c;
        case 0x3b8150u: goto label_3b8150;
        case 0x3b8154u: goto label_3b8154;
        case 0x3b8158u: goto label_3b8158;
        case 0x3b815cu: goto label_3b815c;
        case 0x3b8160u: goto label_3b8160;
        case 0x3b8164u: goto label_3b8164;
        case 0x3b8168u: goto label_3b8168;
        case 0x3b816cu: goto label_3b816c;
        case 0x3b8170u: goto label_3b8170;
        case 0x3b8174u: goto label_3b8174;
        case 0x3b8178u: goto label_3b8178;
        case 0x3b817cu: goto label_3b817c;
        case 0x3b8180u: goto label_3b8180;
        case 0x3b8184u: goto label_3b8184;
        case 0x3b8188u: goto label_3b8188;
        case 0x3b818cu: goto label_3b818c;
        case 0x3b8190u: goto label_3b8190;
        case 0x3b8194u: goto label_3b8194;
        case 0x3b8198u: goto label_3b8198;
        case 0x3b819cu: goto label_3b819c;
        case 0x3b81a0u: goto label_3b81a0;
        case 0x3b81a4u: goto label_3b81a4;
        case 0x3b81a8u: goto label_3b81a8;
        case 0x3b81acu: goto label_3b81ac;
        case 0x3b81b0u: goto label_3b81b0;
        case 0x3b81b4u: goto label_3b81b4;
        case 0x3b81b8u: goto label_3b81b8;
        case 0x3b81bcu: goto label_3b81bc;
        case 0x3b81c0u: goto label_3b81c0;
        case 0x3b81c4u: goto label_3b81c4;
        case 0x3b81c8u: goto label_3b81c8;
        case 0x3b81ccu: goto label_3b81cc;
        case 0x3b81d0u: goto label_3b81d0;
        case 0x3b81d4u: goto label_3b81d4;
        case 0x3b81d8u: goto label_3b81d8;
        case 0x3b81dcu: goto label_3b81dc;
        case 0x3b81e0u: goto label_3b81e0;
        case 0x3b81e4u: goto label_3b81e4;
        case 0x3b81e8u: goto label_3b81e8;
        case 0x3b81ecu: goto label_3b81ec;
        case 0x3b81f0u: goto label_3b81f0;
        case 0x3b81f4u: goto label_3b81f4;
        case 0x3b81f8u: goto label_3b81f8;
        case 0x3b81fcu: goto label_3b81fc;
        case 0x3b8200u: goto label_3b8200;
        case 0x3b8204u: goto label_3b8204;
        case 0x3b8208u: goto label_3b8208;
        case 0x3b820cu: goto label_3b820c;
        case 0x3b8210u: goto label_3b8210;
        case 0x3b8214u: goto label_3b8214;
        case 0x3b8218u: goto label_3b8218;
        case 0x3b821cu: goto label_3b821c;
        case 0x3b8220u: goto label_3b8220;
        case 0x3b8224u: goto label_3b8224;
        case 0x3b8228u: goto label_3b8228;
        case 0x3b822cu: goto label_3b822c;
        case 0x3b8230u: goto label_3b8230;
        case 0x3b8234u: goto label_3b8234;
        case 0x3b8238u: goto label_3b8238;
        case 0x3b823cu: goto label_3b823c;
        case 0x3b8240u: goto label_3b8240;
        case 0x3b8244u: goto label_3b8244;
        case 0x3b8248u: goto label_3b8248;
        case 0x3b824cu: goto label_3b824c;
        case 0x3b8250u: goto label_3b8250;
        case 0x3b8254u: goto label_3b8254;
        case 0x3b8258u: goto label_3b8258;
        case 0x3b825cu: goto label_3b825c;
        case 0x3b8260u: goto label_3b8260;
        case 0x3b8264u: goto label_3b8264;
        case 0x3b8268u: goto label_3b8268;
        case 0x3b826cu: goto label_3b826c;
        case 0x3b8270u: goto label_3b8270;
        case 0x3b8274u: goto label_3b8274;
        case 0x3b8278u: goto label_3b8278;
        case 0x3b827cu: goto label_3b827c;
        case 0x3b8280u: goto label_3b8280;
        case 0x3b8284u: goto label_3b8284;
        case 0x3b8288u: goto label_3b8288;
        case 0x3b828cu: goto label_3b828c;
        case 0x3b8290u: goto label_3b8290;
        case 0x3b8294u: goto label_3b8294;
        case 0x3b8298u: goto label_3b8298;
        case 0x3b829cu: goto label_3b829c;
        case 0x3b82a0u: goto label_3b82a0;
        case 0x3b82a4u: goto label_3b82a4;
        case 0x3b82a8u: goto label_3b82a8;
        case 0x3b82acu: goto label_3b82ac;
        case 0x3b82b0u: goto label_3b82b0;
        case 0x3b82b4u: goto label_3b82b4;
        case 0x3b82b8u: goto label_3b82b8;
        case 0x3b82bcu: goto label_3b82bc;
        case 0x3b82c0u: goto label_3b82c0;
        case 0x3b82c4u: goto label_3b82c4;
        case 0x3b82c8u: goto label_3b82c8;
        case 0x3b82ccu: goto label_3b82cc;
        case 0x3b82d0u: goto label_3b82d0;
        case 0x3b82d4u: goto label_3b82d4;
        case 0x3b82d8u: goto label_3b82d8;
        case 0x3b82dcu: goto label_3b82dc;
        case 0x3b82e0u: goto label_3b82e0;
        case 0x3b82e4u: goto label_3b82e4;
        case 0x3b82e8u: goto label_3b82e8;
        case 0x3b82ecu: goto label_3b82ec;
        case 0x3b82f0u: goto label_3b82f0;
        case 0x3b82f4u: goto label_3b82f4;
        case 0x3b82f8u: goto label_3b82f8;
        case 0x3b82fcu: goto label_3b82fc;
        case 0x3b8300u: goto label_3b8300;
        case 0x3b8304u: goto label_3b8304;
        case 0x3b8308u: goto label_3b8308;
        case 0x3b830cu: goto label_3b830c;
        case 0x3b8310u: goto label_3b8310;
        case 0x3b8314u: goto label_3b8314;
        case 0x3b8318u: goto label_3b8318;
        case 0x3b831cu: goto label_3b831c;
        case 0x3b8320u: goto label_3b8320;
        case 0x3b8324u: goto label_3b8324;
        case 0x3b8328u: goto label_3b8328;
        case 0x3b832cu: goto label_3b832c;
        case 0x3b8330u: goto label_3b8330;
        case 0x3b8334u: goto label_3b8334;
        case 0x3b8338u: goto label_3b8338;
        case 0x3b833cu: goto label_3b833c;
        case 0x3b8340u: goto label_3b8340;
        case 0x3b8344u: goto label_3b8344;
        case 0x3b8348u: goto label_3b8348;
        case 0x3b834cu: goto label_3b834c;
        case 0x3b8350u: goto label_3b8350;
        case 0x3b8354u: goto label_3b8354;
        case 0x3b8358u: goto label_3b8358;
        case 0x3b835cu: goto label_3b835c;
        case 0x3b8360u: goto label_3b8360;
        case 0x3b8364u: goto label_3b8364;
        case 0x3b8368u: goto label_3b8368;
        case 0x3b836cu: goto label_3b836c;
        case 0x3b8370u: goto label_3b8370;
        case 0x3b8374u: goto label_3b8374;
        case 0x3b8378u: goto label_3b8378;
        case 0x3b837cu: goto label_3b837c;
        case 0x3b8380u: goto label_3b8380;
        case 0x3b8384u: goto label_3b8384;
        case 0x3b8388u: goto label_3b8388;
        case 0x3b838cu: goto label_3b838c;
        case 0x3b8390u: goto label_3b8390;
        case 0x3b8394u: goto label_3b8394;
        case 0x3b8398u: goto label_3b8398;
        case 0x3b839cu: goto label_3b839c;
        case 0x3b83a0u: goto label_3b83a0;
        case 0x3b83a4u: goto label_3b83a4;
        case 0x3b83a8u: goto label_3b83a8;
        case 0x3b83acu: goto label_3b83ac;
        case 0x3b83b0u: goto label_3b83b0;
        case 0x3b83b4u: goto label_3b83b4;
        case 0x3b83b8u: goto label_3b83b8;
        case 0x3b83bcu: goto label_3b83bc;
        case 0x3b83c0u: goto label_3b83c0;
        case 0x3b83c4u: goto label_3b83c4;
        case 0x3b83c8u: goto label_3b83c8;
        case 0x3b83ccu: goto label_3b83cc;
        case 0x3b83d0u: goto label_3b83d0;
        case 0x3b83d4u: goto label_3b83d4;
        case 0x3b83d8u: goto label_3b83d8;
        case 0x3b83dcu: goto label_3b83dc;
        case 0x3b83e0u: goto label_3b83e0;
        case 0x3b83e4u: goto label_3b83e4;
        case 0x3b83e8u: goto label_3b83e8;
        case 0x3b83ecu: goto label_3b83ec;
        case 0x3b83f0u: goto label_3b83f0;
        case 0x3b83f4u: goto label_3b83f4;
        case 0x3b83f8u: goto label_3b83f8;
        case 0x3b83fcu: goto label_3b83fc;
        case 0x3b8400u: goto label_3b8400;
        case 0x3b8404u: goto label_3b8404;
        case 0x3b8408u: goto label_3b8408;
        case 0x3b840cu: goto label_3b840c;
        case 0x3b8410u: goto label_3b8410;
        case 0x3b8414u: goto label_3b8414;
        case 0x3b8418u: goto label_3b8418;
        case 0x3b841cu: goto label_3b841c;
        case 0x3b8420u: goto label_3b8420;
        case 0x3b8424u: goto label_3b8424;
        case 0x3b8428u: goto label_3b8428;
        case 0x3b842cu: goto label_3b842c;
        case 0x3b8430u: goto label_3b8430;
        case 0x3b8434u: goto label_3b8434;
        case 0x3b8438u: goto label_3b8438;
        case 0x3b843cu: goto label_3b843c;
        case 0x3b8440u: goto label_3b8440;
        case 0x3b8444u: goto label_3b8444;
        case 0x3b8448u: goto label_3b8448;
        case 0x3b844cu: goto label_3b844c;
        case 0x3b8450u: goto label_3b8450;
        case 0x3b8454u: goto label_3b8454;
        case 0x3b8458u: goto label_3b8458;
        case 0x3b845cu: goto label_3b845c;
        case 0x3b8460u: goto label_3b8460;
        case 0x3b8464u: goto label_3b8464;
        case 0x3b8468u: goto label_3b8468;
        case 0x3b846cu: goto label_3b846c;
        case 0x3b8470u: goto label_3b8470;
        case 0x3b8474u: goto label_3b8474;
        case 0x3b8478u: goto label_3b8478;
        case 0x3b847cu: goto label_3b847c;
        case 0x3b8480u: goto label_3b8480;
        case 0x3b8484u: goto label_3b8484;
        case 0x3b8488u: goto label_3b8488;
        case 0x3b848cu: goto label_3b848c;
        case 0x3b8490u: goto label_3b8490;
        case 0x3b8494u: goto label_3b8494;
        case 0x3b8498u: goto label_3b8498;
        case 0x3b849cu: goto label_3b849c;
        case 0x3b84a0u: goto label_3b84a0;
        case 0x3b84a4u: goto label_3b84a4;
        case 0x3b84a8u: goto label_3b84a8;
        case 0x3b84acu: goto label_3b84ac;
        case 0x3b84b0u: goto label_3b84b0;
        case 0x3b84b4u: goto label_3b84b4;
        case 0x3b84b8u: goto label_3b84b8;
        case 0x3b84bcu: goto label_3b84bc;
        case 0x3b84c0u: goto label_3b84c0;
        case 0x3b84c4u: goto label_3b84c4;
        case 0x3b84c8u: goto label_3b84c8;
        case 0x3b84ccu: goto label_3b84cc;
        case 0x3b84d0u: goto label_3b84d0;
        case 0x3b84d4u: goto label_3b84d4;
        case 0x3b84d8u: goto label_3b84d8;
        case 0x3b84dcu: goto label_3b84dc;
        case 0x3b84e0u: goto label_3b84e0;
        case 0x3b84e4u: goto label_3b84e4;
        case 0x3b84e8u: goto label_3b84e8;
        case 0x3b84ecu: goto label_3b84ec;
        case 0x3b84f0u: goto label_3b84f0;
        case 0x3b84f4u: goto label_3b84f4;
        case 0x3b84f8u: goto label_3b84f8;
        case 0x3b84fcu: goto label_3b84fc;
        case 0x3b8500u: goto label_3b8500;
        case 0x3b8504u: goto label_3b8504;
        case 0x3b8508u: goto label_3b8508;
        case 0x3b850cu: goto label_3b850c;
        case 0x3b8510u: goto label_3b8510;
        case 0x3b8514u: goto label_3b8514;
        case 0x3b8518u: goto label_3b8518;
        case 0x3b851cu: goto label_3b851c;
        case 0x3b8520u: goto label_3b8520;
        case 0x3b8524u: goto label_3b8524;
        case 0x3b8528u: goto label_3b8528;
        case 0x3b852cu: goto label_3b852c;
        case 0x3b8530u: goto label_3b8530;
        case 0x3b8534u: goto label_3b8534;
        case 0x3b8538u: goto label_3b8538;
        case 0x3b853cu: goto label_3b853c;
        case 0x3b8540u: goto label_3b8540;
        case 0x3b8544u: goto label_3b8544;
        case 0x3b8548u: goto label_3b8548;
        case 0x3b854cu: goto label_3b854c;
        case 0x3b8550u: goto label_3b8550;
        case 0x3b8554u: goto label_3b8554;
        case 0x3b8558u: goto label_3b8558;
        case 0x3b855cu: goto label_3b855c;
        case 0x3b8560u: goto label_3b8560;
        case 0x3b8564u: goto label_3b8564;
        case 0x3b8568u: goto label_3b8568;
        case 0x3b856cu: goto label_3b856c;
        case 0x3b8570u: goto label_3b8570;
        case 0x3b8574u: goto label_3b8574;
        case 0x3b8578u: goto label_3b8578;
        case 0x3b857cu: goto label_3b857c;
        case 0x3b8580u: goto label_3b8580;
        case 0x3b8584u: goto label_3b8584;
        case 0x3b8588u: goto label_3b8588;
        case 0x3b858cu: goto label_3b858c;
        case 0x3b8590u: goto label_3b8590;
        case 0x3b8594u: goto label_3b8594;
        case 0x3b8598u: goto label_3b8598;
        case 0x3b859cu: goto label_3b859c;
        case 0x3b85a0u: goto label_3b85a0;
        case 0x3b85a4u: goto label_3b85a4;
        case 0x3b85a8u: goto label_3b85a8;
        case 0x3b85acu: goto label_3b85ac;
        case 0x3b85b0u: goto label_3b85b0;
        case 0x3b85b4u: goto label_3b85b4;
        case 0x3b85b8u: goto label_3b85b8;
        case 0x3b85bcu: goto label_3b85bc;
        case 0x3b85c0u: goto label_3b85c0;
        case 0x3b85c4u: goto label_3b85c4;
        case 0x3b85c8u: goto label_3b85c8;
        case 0x3b85ccu: goto label_3b85cc;
        case 0x3b85d0u: goto label_3b85d0;
        case 0x3b85d4u: goto label_3b85d4;
        case 0x3b85d8u: goto label_3b85d8;
        case 0x3b85dcu: goto label_3b85dc;
        case 0x3b85e0u: goto label_3b85e0;
        case 0x3b85e4u: goto label_3b85e4;
        case 0x3b85e8u: goto label_3b85e8;
        case 0x3b85ecu: goto label_3b85ec;
        case 0x3b85f0u: goto label_3b85f0;
        case 0x3b85f4u: goto label_3b85f4;
        case 0x3b85f8u: goto label_3b85f8;
        case 0x3b85fcu: goto label_3b85fc;
        case 0x3b8600u: goto label_3b8600;
        case 0x3b8604u: goto label_3b8604;
        case 0x3b8608u: goto label_3b8608;
        case 0x3b860cu: goto label_3b860c;
        case 0x3b8610u: goto label_3b8610;
        case 0x3b8614u: goto label_3b8614;
        case 0x3b8618u: goto label_3b8618;
        case 0x3b861cu: goto label_3b861c;
        case 0x3b8620u: goto label_3b8620;
        case 0x3b8624u: goto label_3b8624;
        case 0x3b8628u: goto label_3b8628;
        case 0x3b862cu: goto label_3b862c;
        case 0x3b8630u: goto label_3b8630;
        case 0x3b8634u: goto label_3b8634;
        case 0x3b8638u: goto label_3b8638;
        case 0x3b863cu: goto label_3b863c;
        case 0x3b8640u: goto label_3b8640;
        case 0x3b8644u: goto label_3b8644;
        case 0x3b8648u: goto label_3b8648;
        case 0x3b864cu: goto label_3b864c;
        case 0x3b8650u: goto label_3b8650;
        case 0x3b8654u: goto label_3b8654;
        case 0x3b8658u: goto label_3b8658;
        case 0x3b865cu: goto label_3b865c;
        case 0x3b8660u: goto label_3b8660;
        case 0x3b8664u: goto label_3b8664;
        case 0x3b8668u: goto label_3b8668;
        case 0x3b866cu: goto label_3b866c;
        case 0x3b8670u: goto label_3b8670;
        case 0x3b8674u: goto label_3b8674;
        case 0x3b8678u: goto label_3b8678;
        case 0x3b867cu: goto label_3b867c;
        case 0x3b8680u: goto label_3b8680;
        case 0x3b8684u: goto label_3b8684;
        case 0x3b8688u: goto label_3b8688;
        case 0x3b868cu: goto label_3b868c;
        case 0x3b8690u: goto label_3b8690;
        case 0x3b8694u: goto label_3b8694;
        case 0x3b8698u: goto label_3b8698;
        case 0x3b869cu: goto label_3b869c;
        case 0x3b86a0u: goto label_3b86a0;
        case 0x3b86a4u: goto label_3b86a4;
        case 0x3b86a8u: goto label_3b86a8;
        case 0x3b86acu: goto label_3b86ac;
        case 0x3b86b0u: goto label_3b86b0;
        case 0x3b86b4u: goto label_3b86b4;
        case 0x3b86b8u: goto label_3b86b8;
        case 0x3b86bcu: goto label_3b86bc;
        case 0x3b86c0u: goto label_3b86c0;
        case 0x3b86c4u: goto label_3b86c4;
        case 0x3b86c8u: goto label_3b86c8;
        case 0x3b86ccu: goto label_3b86cc;
        case 0x3b86d0u: goto label_3b86d0;
        case 0x3b86d4u: goto label_3b86d4;
        case 0x3b86d8u: goto label_3b86d8;
        case 0x3b86dcu: goto label_3b86dc;
        case 0x3b86e0u: goto label_3b86e0;
        case 0x3b86e4u: goto label_3b86e4;
        case 0x3b86e8u: goto label_3b86e8;
        case 0x3b86ecu: goto label_3b86ec;
        case 0x3b86f0u: goto label_3b86f0;
        case 0x3b86f4u: goto label_3b86f4;
        case 0x3b86f8u: goto label_3b86f8;
        case 0x3b86fcu: goto label_3b86fc;
        case 0x3b8700u: goto label_3b8700;
        case 0x3b8704u: goto label_3b8704;
        case 0x3b8708u: goto label_3b8708;
        case 0x3b870cu: goto label_3b870c;
        case 0x3b8710u: goto label_3b8710;
        case 0x3b8714u: goto label_3b8714;
        case 0x3b8718u: goto label_3b8718;
        case 0x3b871cu: goto label_3b871c;
        case 0x3b8720u: goto label_3b8720;
        case 0x3b8724u: goto label_3b8724;
        case 0x3b8728u: goto label_3b8728;
        case 0x3b872cu: goto label_3b872c;
        case 0x3b8730u: goto label_3b8730;
        case 0x3b8734u: goto label_3b8734;
        case 0x3b8738u: goto label_3b8738;
        case 0x3b873cu: goto label_3b873c;
        case 0x3b8740u: goto label_3b8740;
        case 0x3b8744u: goto label_3b8744;
        case 0x3b8748u: goto label_3b8748;
        case 0x3b874cu: goto label_3b874c;
        case 0x3b8750u: goto label_3b8750;
        case 0x3b8754u: goto label_3b8754;
        case 0x3b8758u: goto label_3b8758;
        case 0x3b875cu: goto label_3b875c;
        case 0x3b8760u: goto label_3b8760;
        case 0x3b8764u: goto label_3b8764;
        case 0x3b8768u: goto label_3b8768;
        case 0x3b876cu: goto label_3b876c;
        case 0x3b8770u: goto label_3b8770;
        case 0x3b8774u: goto label_3b8774;
        case 0x3b8778u: goto label_3b8778;
        case 0x3b877cu: goto label_3b877c;
        case 0x3b8780u: goto label_3b8780;
        case 0x3b8784u: goto label_3b8784;
        case 0x3b8788u: goto label_3b8788;
        case 0x3b878cu: goto label_3b878c;
        case 0x3b8790u: goto label_3b8790;
        case 0x3b8794u: goto label_3b8794;
        case 0x3b8798u: goto label_3b8798;
        case 0x3b879cu: goto label_3b879c;
        case 0x3b87a0u: goto label_3b87a0;
        case 0x3b87a4u: goto label_3b87a4;
        case 0x3b87a8u: goto label_3b87a8;
        case 0x3b87acu: goto label_3b87ac;
        case 0x3b87b0u: goto label_3b87b0;
        case 0x3b87b4u: goto label_3b87b4;
        case 0x3b87b8u: goto label_3b87b8;
        case 0x3b87bcu: goto label_3b87bc;
        case 0x3b87c0u: goto label_3b87c0;
        case 0x3b87c4u: goto label_3b87c4;
        case 0x3b87c8u: goto label_3b87c8;
        case 0x3b87ccu: goto label_3b87cc;
        case 0x3b87d0u: goto label_3b87d0;
        case 0x3b87d4u: goto label_3b87d4;
        case 0x3b87d8u: goto label_3b87d8;
        case 0x3b87dcu: goto label_3b87dc;
        case 0x3b87e0u: goto label_3b87e0;
        case 0x3b87e4u: goto label_3b87e4;
        case 0x3b87e8u: goto label_3b87e8;
        case 0x3b87ecu: goto label_3b87ec;
        case 0x3b87f0u: goto label_3b87f0;
        case 0x3b87f4u: goto label_3b87f4;
        case 0x3b87f8u: goto label_3b87f8;
        case 0x3b87fcu: goto label_3b87fc;
        case 0x3b8800u: goto label_3b8800;
        case 0x3b8804u: goto label_3b8804;
        case 0x3b8808u: goto label_3b8808;
        case 0x3b880cu: goto label_3b880c;
        case 0x3b8810u: goto label_3b8810;
        case 0x3b8814u: goto label_3b8814;
        case 0x3b8818u: goto label_3b8818;
        case 0x3b881cu: goto label_3b881c;
        case 0x3b8820u: goto label_3b8820;
        case 0x3b8824u: goto label_3b8824;
        case 0x3b8828u: goto label_3b8828;
        case 0x3b882cu: goto label_3b882c;
        case 0x3b8830u: goto label_3b8830;
        case 0x3b8834u: goto label_3b8834;
        case 0x3b8838u: goto label_3b8838;
        case 0x3b883cu: goto label_3b883c;
        case 0x3b8840u: goto label_3b8840;
        case 0x3b8844u: goto label_3b8844;
        case 0x3b8848u: goto label_3b8848;
        case 0x3b884cu: goto label_3b884c;
        case 0x3b8850u: goto label_3b8850;
        case 0x3b8854u: goto label_3b8854;
        case 0x3b8858u: goto label_3b8858;
        case 0x3b885cu: goto label_3b885c;
        case 0x3b8860u: goto label_3b8860;
        case 0x3b8864u: goto label_3b8864;
        case 0x3b8868u: goto label_3b8868;
        case 0x3b886cu: goto label_3b886c;
        case 0x3b8870u: goto label_3b8870;
        case 0x3b8874u: goto label_3b8874;
        case 0x3b8878u: goto label_3b8878;
        case 0x3b887cu: goto label_3b887c;
        case 0x3b8880u: goto label_3b8880;
        case 0x3b8884u: goto label_3b8884;
        case 0x3b8888u: goto label_3b8888;
        case 0x3b888cu: goto label_3b888c;
        case 0x3b8890u: goto label_3b8890;
        case 0x3b8894u: goto label_3b8894;
        case 0x3b8898u: goto label_3b8898;
        case 0x3b889cu: goto label_3b889c;
        case 0x3b88a0u: goto label_3b88a0;
        case 0x3b88a4u: goto label_3b88a4;
        case 0x3b88a8u: goto label_3b88a8;
        case 0x3b88acu: goto label_3b88ac;
        case 0x3b88b0u: goto label_3b88b0;
        case 0x3b88b4u: goto label_3b88b4;
        case 0x3b88b8u: goto label_3b88b8;
        case 0x3b88bcu: goto label_3b88bc;
        case 0x3b88c0u: goto label_3b88c0;
        case 0x3b88c4u: goto label_3b88c4;
        case 0x3b88c8u: goto label_3b88c8;
        case 0x3b88ccu: goto label_3b88cc;
        case 0x3b88d0u: goto label_3b88d0;
        case 0x3b88d4u: goto label_3b88d4;
        case 0x3b88d8u: goto label_3b88d8;
        case 0x3b88dcu: goto label_3b88dc;
        case 0x3b88e0u: goto label_3b88e0;
        case 0x3b88e4u: goto label_3b88e4;
        case 0x3b88e8u: goto label_3b88e8;
        case 0x3b88ecu: goto label_3b88ec;
        case 0x3b88f0u: goto label_3b88f0;
        case 0x3b88f4u: goto label_3b88f4;
        case 0x3b88f8u: goto label_3b88f8;
        case 0x3b88fcu: goto label_3b88fc;
        case 0x3b8900u: goto label_3b8900;
        case 0x3b8904u: goto label_3b8904;
        case 0x3b8908u: goto label_3b8908;
        case 0x3b890cu: goto label_3b890c;
        case 0x3b8910u: goto label_3b8910;
        case 0x3b8914u: goto label_3b8914;
        case 0x3b8918u: goto label_3b8918;
        case 0x3b891cu: goto label_3b891c;
        case 0x3b8920u: goto label_3b8920;
        case 0x3b8924u: goto label_3b8924;
        case 0x3b8928u: goto label_3b8928;
        case 0x3b892cu: goto label_3b892c;
        case 0x3b8930u: goto label_3b8930;
        case 0x3b8934u: goto label_3b8934;
        case 0x3b8938u: goto label_3b8938;
        case 0x3b893cu: goto label_3b893c;
        case 0x3b8940u: goto label_3b8940;
        case 0x3b8944u: goto label_3b8944;
        case 0x3b8948u: goto label_3b8948;
        case 0x3b894cu: goto label_3b894c;
        case 0x3b8950u: goto label_3b8950;
        case 0x3b8954u: goto label_3b8954;
        case 0x3b8958u: goto label_3b8958;
        case 0x3b895cu: goto label_3b895c;
        case 0x3b8960u: goto label_3b8960;
        case 0x3b8964u: goto label_3b8964;
        case 0x3b8968u: goto label_3b8968;
        case 0x3b896cu: goto label_3b896c;
        case 0x3b8970u: goto label_3b8970;
        case 0x3b8974u: goto label_3b8974;
        case 0x3b8978u: goto label_3b8978;
        case 0x3b897cu: goto label_3b897c;
        case 0x3b8980u: goto label_3b8980;
        case 0x3b8984u: goto label_3b8984;
        case 0x3b8988u: goto label_3b8988;
        case 0x3b898cu: goto label_3b898c;
        case 0x3b8990u: goto label_3b8990;
        case 0x3b8994u: goto label_3b8994;
        case 0x3b8998u: goto label_3b8998;
        case 0x3b899cu: goto label_3b899c;
        case 0x3b89a0u: goto label_3b89a0;
        case 0x3b89a4u: goto label_3b89a4;
        case 0x3b89a8u: goto label_3b89a8;
        case 0x3b89acu: goto label_3b89ac;
        case 0x3b89b0u: goto label_3b89b0;
        case 0x3b89b4u: goto label_3b89b4;
        case 0x3b89b8u: goto label_3b89b8;
        case 0x3b89bcu: goto label_3b89bc;
        case 0x3b89c0u: goto label_3b89c0;
        case 0x3b89c4u: goto label_3b89c4;
        case 0x3b89c8u: goto label_3b89c8;
        case 0x3b89ccu: goto label_3b89cc;
        case 0x3b89d0u: goto label_3b89d0;
        case 0x3b89d4u: goto label_3b89d4;
        case 0x3b89d8u: goto label_3b89d8;
        case 0x3b89dcu: goto label_3b89dc;
        case 0x3b89e0u: goto label_3b89e0;
        case 0x3b89e4u: goto label_3b89e4;
        case 0x3b89e8u: goto label_3b89e8;
        case 0x3b89ecu: goto label_3b89ec;
        case 0x3b89f0u: goto label_3b89f0;
        case 0x3b89f4u: goto label_3b89f4;
        case 0x3b89f8u: goto label_3b89f8;
        case 0x3b89fcu: goto label_3b89fc;
        case 0x3b8a00u: goto label_3b8a00;
        case 0x3b8a04u: goto label_3b8a04;
        case 0x3b8a08u: goto label_3b8a08;
        case 0x3b8a0cu: goto label_3b8a0c;
        case 0x3b8a10u: goto label_3b8a10;
        case 0x3b8a14u: goto label_3b8a14;
        case 0x3b8a18u: goto label_3b8a18;
        case 0x3b8a1cu: goto label_3b8a1c;
        case 0x3b8a20u: goto label_3b8a20;
        case 0x3b8a24u: goto label_3b8a24;
        case 0x3b8a28u: goto label_3b8a28;
        case 0x3b8a2cu: goto label_3b8a2c;
        case 0x3b8a30u: goto label_3b8a30;
        case 0x3b8a34u: goto label_3b8a34;
        case 0x3b8a38u: goto label_3b8a38;
        case 0x3b8a3cu: goto label_3b8a3c;
        case 0x3b8a40u: goto label_3b8a40;
        case 0x3b8a44u: goto label_3b8a44;
        case 0x3b8a48u: goto label_3b8a48;
        case 0x3b8a4cu: goto label_3b8a4c;
        case 0x3b8a50u: goto label_3b8a50;
        case 0x3b8a54u: goto label_3b8a54;
        case 0x3b8a58u: goto label_3b8a58;
        case 0x3b8a5cu: goto label_3b8a5c;
        case 0x3b8a60u: goto label_3b8a60;
        case 0x3b8a64u: goto label_3b8a64;
        case 0x3b8a68u: goto label_3b8a68;
        case 0x3b8a6cu: goto label_3b8a6c;
        case 0x3b8a70u: goto label_3b8a70;
        case 0x3b8a74u: goto label_3b8a74;
        case 0x3b8a78u: goto label_3b8a78;
        case 0x3b8a7cu: goto label_3b8a7c;
        case 0x3b8a80u: goto label_3b8a80;
        case 0x3b8a84u: goto label_3b8a84;
        case 0x3b8a88u: goto label_3b8a88;
        case 0x3b8a8cu: goto label_3b8a8c;
        case 0x3b8a90u: goto label_3b8a90;
        case 0x3b8a94u: goto label_3b8a94;
        case 0x3b8a98u: goto label_3b8a98;
        case 0x3b8a9cu: goto label_3b8a9c;
        case 0x3b8aa0u: goto label_3b8aa0;
        case 0x3b8aa4u: goto label_3b8aa4;
        case 0x3b8aa8u: goto label_3b8aa8;
        case 0x3b8aacu: goto label_3b8aac;
        case 0x3b8ab0u: goto label_3b8ab0;
        case 0x3b8ab4u: goto label_3b8ab4;
        case 0x3b8ab8u: goto label_3b8ab8;
        case 0x3b8abcu: goto label_3b8abc;
        case 0x3b8ac0u: goto label_3b8ac0;
        case 0x3b8ac4u: goto label_3b8ac4;
        case 0x3b8ac8u: goto label_3b8ac8;
        case 0x3b8accu: goto label_3b8acc;
        case 0x3b8ad0u: goto label_3b8ad0;
        case 0x3b8ad4u: goto label_3b8ad4;
        case 0x3b8ad8u: goto label_3b8ad8;
        case 0x3b8adcu: goto label_3b8adc;
        case 0x3b8ae0u: goto label_3b8ae0;
        case 0x3b8ae4u: goto label_3b8ae4;
        case 0x3b8ae8u: goto label_3b8ae8;
        case 0x3b8aecu: goto label_3b8aec;
        case 0x3b8af0u: goto label_3b8af0;
        case 0x3b8af4u: goto label_3b8af4;
        case 0x3b8af8u: goto label_3b8af8;
        case 0x3b8afcu: goto label_3b8afc;
        case 0x3b8b00u: goto label_3b8b00;
        case 0x3b8b04u: goto label_3b8b04;
        case 0x3b8b08u: goto label_3b8b08;
        case 0x3b8b0cu: goto label_3b8b0c;
        case 0x3b8b10u: goto label_3b8b10;
        case 0x3b8b14u: goto label_3b8b14;
        case 0x3b8b18u: goto label_3b8b18;
        case 0x3b8b1cu: goto label_3b8b1c;
        case 0x3b8b20u: goto label_3b8b20;
        case 0x3b8b24u: goto label_3b8b24;
        case 0x3b8b28u: goto label_3b8b28;
        case 0x3b8b2cu: goto label_3b8b2c;
        case 0x3b8b30u: goto label_3b8b30;
        case 0x3b8b34u: goto label_3b8b34;
        case 0x3b8b38u: goto label_3b8b38;
        case 0x3b8b3cu: goto label_3b8b3c;
        case 0x3b8b40u: goto label_3b8b40;
        case 0x3b8b44u: goto label_3b8b44;
        case 0x3b8b48u: goto label_3b8b48;
        case 0x3b8b4cu: goto label_3b8b4c;
        case 0x3b8b50u: goto label_3b8b50;
        case 0x3b8b54u: goto label_3b8b54;
        case 0x3b8b58u: goto label_3b8b58;
        case 0x3b8b5cu: goto label_3b8b5c;
        case 0x3b8b60u: goto label_3b8b60;
        case 0x3b8b64u: goto label_3b8b64;
        case 0x3b8b68u: goto label_3b8b68;
        case 0x3b8b6cu: goto label_3b8b6c;
        case 0x3b8b70u: goto label_3b8b70;
        case 0x3b8b74u: goto label_3b8b74;
        case 0x3b8b78u: goto label_3b8b78;
        case 0x3b8b7cu: goto label_3b8b7c;
        case 0x3b8b80u: goto label_3b8b80;
        case 0x3b8b84u: goto label_3b8b84;
        case 0x3b8b88u: goto label_3b8b88;
        case 0x3b8b8cu: goto label_3b8b8c;
        case 0x3b8b90u: goto label_3b8b90;
        case 0x3b8b94u: goto label_3b8b94;
        case 0x3b8b98u: goto label_3b8b98;
        case 0x3b8b9cu: goto label_3b8b9c;
        case 0x3b8ba0u: goto label_3b8ba0;
        case 0x3b8ba4u: goto label_3b8ba4;
        case 0x3b8ba8u: goto label_3b8ba8;
        case 0x3b8bacu: goto label_3b8bac;
        case 0x3b8bb0u: goto label_3b8bb0;
        case 0x3b8bb4u: goto label_3b8bb4;
        case 0x3b8bb8u: goto label_3b8bb8;
        case 0x3b8bbcu: goto label_3b8bbc;
        case 0x3b8bc0u: goto label_3b8bc0;
        case 0x3b8bc4u: goto label_3b8bc4;
        case 0x3b8bc8u: goto label_3b8bc8;
        case 0x3b8bccu: goto label_3b8bcc;
        case 0x3b8bd0u: goto label_3b8bd0;
        case 0x3b8bd4u: goto label_3b8bd4;
        case 0x3b8bd8u: goto label_3b8bd8;
        case 0x3b8bdcu: goto label_3b8bdc;
        case 0x3b8be0u: goto label_3b8be0;
        case 0x3b8be4u: goto label_3b8be4;
        case 0x3b8be8u: goto label_3b8be8;
        case 0x3b8becu: goto label_3b8bec;
        case 0x3b8bf0u: goto label_3b8bf0;
        case 0x3b8bf4u: goto label_3b8bf4;
        case 0x3b8bf8u: goto label_3b8bf8;
        case 0x3b8bfcu: goto label_3b8bfc;
        case 0x3b8c00u: goto label_3b8c00;
        case 0x3b8c04u: goto label_3b8c04;
        case 0x3b8c08u: goto label_3b8c08;
        case 0x3b8c0cu: goto label_3b8c0c;
        case 0x3b8c10u: goto label_3b8c10;
        case 0x3b8c14u: goto label_3b8c14;
        case 0x3b8c18u: goto label_3b8c18;
        case 0x3b8c1cu: goto label_3b8c1c;
        case 0x3b8c20u: goto label_3b8c20;
        case 0x3b8c24u: goto label_3b8c24;
        case 0x3b8c28u: goto label_3b8c28;
        case 0x3b8c2cu: goto label_3b8c2c;
        case 0x3b8c30u: goto label_3b8c30;
        case 0x3b8c34u: goto label_3b8c34;
        case 0x3b8c38u: goto label_3b8c38;
        case 0x3b8c3cu: goto label_3b8c3c;
        case 0x3b8c40u: goto label_3b8c40;
        case 0x3b8c44u: goto label_3b8c44;
        case 0x3b8c48u: goto label_3b8c48;
        case 0x3b8c4cu: goto label_3b8c4c;
        case 0x3b8c50u: goto label_3b8c50;
        case 0x3b8c54u: goto label_3b8c54;
        case 0x3b8c58u: goto label_3b8c58;
        case 0x3b8c5cu: goto label_3b8c5c;
        case 0x3b8c60u: goto label_3b8c60;
        case 0x3b8c64u: goto label_3b8c64;
        case 0x3b8c68u: goto label_3b8c68;
        case 0x3b8c6cu: goto label_3b8c6c;
        case 0x3b8c70u: goto label_3b8c70;
        case 0x3b8c74u: goto label_3b8c74;
        case 0x3b8c78u: goto label_3b8c78;
        case 0x3b8c7cu: goto label_3b8c7c;
        case 0x3b8c80u: goto label_3b8c80;
        case 0x3b8c84u: goto label_3b8c84;
        case 0x3b8c88u: goto label_3b8c88;
        case 0x3b8c8cu: goto label_3b8c8c;
        case 0x3b8c90u: goto label_3b8c90;
        case 0x3b8c94u: goto label_3b8c94;
        case 0x3b8c98u: goto label_3b8c98;
        case 0x3b8c9cu: goto label_3b8c9c;
        default: break;
    }

    ctx->pc = 0x3b6ce0u;

label_3b6ce0:
    // 0x3b6ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b6ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b6ce4:
    // 0x3b6ce4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b6ce8:
    // 0x3b6ce8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b6ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b6cec:
    // 0x3b6cec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b6cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b6cf0:
    // 0x3b6cf0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b6cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6cf4:
    // 0x3b6cf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b6cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b6cf8:
    // 0x3b6cf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b6cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b6cfc:
    // 0x3b6cfc: 0x12600031  beqz        $s3, . + 4 + (0x31 << 2)
label_3b6d00:
    if (ctx->pc == 0x3B6D00u) {
        ctx->pc = 0x3B6D00u;
            // 0x3b6d00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3B6D04u;
        goto label_3b6d04;
    }
    ctx->pc = 0x3B6CFCu;
    {
        const bool branch_taken_0x3b6cfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6CFCu;
            // 0x3b6d00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6cfc) {
            ctx->pc = 0x3B6DC4u;
            goto label_3b6dc4;
        }
    }
    ctx->pc = 0x3B6D04u;
label_3b6d04:
    // 0x3b6d04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b6d08:
    // 0x3b6d08: 0x24428b90  addiu       $v0, $v0, -0x7470
    ctx->pc = 0x3b6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937488));
label_3b6d0c:
    // 0x3b6d0c: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x3b6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
label_3b6d10:
    // 0x3b6d10: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3b6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3b6d14:
    // 0x3b6d14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3b6d18:
    if (ctx->pc == 0x3B6D18u) {
        ctx->pc = 0x3B6D18u;
            // 0x3b6d18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D1Cu;
        goto label_3b6d1c;
    }
    ctx->pc = 0x3B6D14u;
    {
        const bool branch_taken_0x3b6d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6D14u;
            // 0x3b6d18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6d14) {
            ctx->pc = 0x3B6D80u;
            goto label_3b6d80;
        }
    }
    ctx->pc = 0x3B6D1Cu;
label_3b6d1c:
    // 0x3b6d1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b6d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d20:
    // 0x3b6d20: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3b6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b6d24:
    // 0x3b6d24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b6d28:
    // 0x3b6d28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b6d2c:
    // 0x3b6d2c: 0x8c990044  lw          $t9, 0x44($a0)
    ctx->pc = 0x3b6d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_3b6d30:
    // 0x3b6d30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3b6d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3b6d34:
    // 0x3b6d34: 0x320f809  jalr        $t9
label_3b6d38:
    if (ctx->pc == 0x3B6D38u) {
        ctx->pc = 0x3B6D38u;
            // 0x3b6d38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3B6D3Cu;
        goto label_3b6d3c;
    }
    ctx->pc = 0x3B6D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6D3Cu);
        ctx->pc = 0x3B6D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6D34u;
            // 0x3b6d38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6D3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6D3Cu; }
            if (ctx->pc != 0x3B6D3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B6D3Cu;
label_3b6d3c:
    // 0x3b6d3c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3b6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b6d40:
    // 0x3b6d40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b6d44:
    // 0x3b6d44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3b6d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b6d48:
    // 0x3b6d48: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_3b6d4c:
    if (ctx->pc == 0x3B6D4Cu) {
        ctx->pc = 0x3B6D50u;
        goto label_3b6d50;
    }
    ctx->pc = 0x3B6D48u;
    {
        const bool branch_taken_0x3b6d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6d48) {
            ctx->pc = 0x3B6D68u;
            goto label_3b6d68;
        }
    }
    ctx->pc = 0x3B6D50u;
label_3b6d50:
    // 0x3b6d50: 0xc0fe48c  jal         func_3F9230
label_3b6d54:
    if (ctx->pc == 0x3B6D54u) {
        ctx->pc = 0x3B6D54u;
            // 0x3b6d54: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->pc = 0x3B6D58u;
        goto label_3b6d58;
    }
    ctx->pc = 0x3B6D50u;
    SET_GPR_U32(ctx, 31, 0x3B6D58u);
    ctx->pc = 0x3B6D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6D50u;
            // 0x3b6d54: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6D58u; }
        if (ctx->pc != 0x3B6D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6D58u; }
        if (ctx->pc != 0x3B6D58u) { return; }
    }
    ctx->pc = 0x3B6D58u;
label_3b6d58:
    // 0x3b6d58: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3b6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b6d5c:
    // 0x3b6d5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b6d60:
    // 0x3b6d60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b6d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3b6d64:
    // 0x3b6d64: 0x0  nop
    ctx->pc = 0x3b6d64u;
    // NOP
label_3b6d68:
    // 0x3b6d68: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3b6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3b6d6c:
    // 0x3b6d6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b6d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b6d70:
    // 0x3b6d70: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3b6d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b6d74:
    // 0x3b6d74: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3b6d78:
    if (ctx->pc == 0x3B6D78u) {
        ctx->pc = 0x3B6D78u;
            // 0x3b6d78: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3B6D7Cu;
        goto label_3b6d7c;
    }
    ctx->pc = 0x3B6D74u;
    {
        const bool branch_taken_0x3b6d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6D74u;
            // 0x3b6d78: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6d74) {
            ctx->pc = 0x3B6D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b6d20;
        }
    }
    ctx->pc = 0x3B6D7Cu;
label_3b6d7c:
    // 0x3b6d7c: 0x0  nop
    ctx->pc = 0x3b6d7cu;
    // NOP
label_3b6d80:
    // 0x3b6d80: 0x5260000b  beql        $s3, $zero, . + 4 + (0xB << 2)
label_3b6d84:
    if (ctx->pc == 0x3B6D84u) {
        ctx->pc = 0x3B6D84u;
            // 0x3b6d84: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x3B6D88u;
        goto label_3b6d88;
    }
    ctx->pc = 0x3B6D80u;
    {
        const bool branch_taken_0x3b6d80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6d80) {
            ctx->pc = 0x3B6D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6D80u;
            // 0x3b6d84: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6DB0u;
            goto label_3b6db0;
        }
    }
    ctx->pc = 0x3B6D88u;
label_3b6d88:
    // 0x3b6d88: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_3b6d8c:
    if (ctx->pc == 0x3B6D8Cu) {
        ctx->pc = 0x3B6D90u;
        goto label_3b6d90;
    }
    ctx->pc = 0x3B6D88u;
    {
        const bool branch_taken_0x3b6d88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6d88) {
            ctx->pc = 0x3B6DACu;
            goto label_3b6dac;
        }
    }
    ctx->pc = 0x3B6D90u;
label_3b6d90:
    // 0x3b6d90: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3b6d94:
    if (ctx->pc == 0x3B6D94u) {
        ctx->pc = 0x3B6D98u;
        goto label_3b6d98;
    }
    ctx->pc = 0x3B6D90u;
    {
        const bool branch_taken_0x3b6d90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6d90) {
            ctx->pc = 0x3B6DACu;
            goto label_3b6dac;
        }
    }
    ctx->pc = 0x3B6D98u;
label_3b6d98:
    // 0x3b6d98: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3b6d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b6d9c:
    // 0x3b6d9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3b6da0:
    if (ctx->pc == 0x3B6DA0u) {
        ctx->pc = 0x3B6DA4u;
        goto label_3b6da4;
    }
    ctx->pc = 0x3B6D9Cu;
    {
        const bool branch_taken_0x3b6d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6d9c) {
            ctx->pc = 0x3B6DACu;
            goto label_3b6dac;
        }
    }
    ctx->pc = 0x3B6DA4u;
label_3b6da4:
    // 0x3b6da4: 0xc0400a8  jal         func_1002A0
label_3b6da8:
    if (ctx->pc == 0x3B6DA8u) {
        ctx->pc = 0x3B6DACu;
        goto label_3b6dac;
    }
    ctx->pc = 0x3B6DA4u;
    SET_GPR_U32(ctx, 31, 0x3B6DACu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6DACu; }
        if (ctx->pc != 0x3B6DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6DACu; }
        if (ctx->pc != 0x3B6DACu) { return; }
    }
    ctx->pc = 0x3B6DACu;
label_3b6dac:
    // 0x3b6dac: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x3b6dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_3b6db0:
    // 0x3b6db0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b6db0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3b6db4:
    // 0x3b6db4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3b6db8:
    if (ctx->pc == 0x3B6DB8u) {
        ctx->pc = 0x3B6DB8u;
            // 0x3b6db8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6DBCu;
        goto label_3b6dbc;
    }
    ctx->pc = 0x3B6DB4u;
    {
        const bool branch_taken_0x3b6db4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b6db4) {
            ctx->pc = 0x3B6DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6DB4u;
            // 0x3b6db8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6DC8u;
            goto label_3b6dc8;
        }
    }
    ctx->pc = 0x3B6DBCu;
label_3b6dbc:
    // 0x3b6dbc: 0xc0400a8  jal         func_1002A0
label_3b6dc0:
    if (ctx->pc == 0x3B6DC0u) {
        ctx->pc = 0x3B6DC0u;
            // 0x3b6dc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6DC4u;
        goto label_3b6dc4;
    }
    ctx->pc = 0x3B6DBCu;
    SET_GPR_U32(ctx, 31, 0x3B6DC4u);
    ctx->pc = 0x3B6DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6DBCu;
            // 0x3b6dc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6DC4u; }
        if (ctx->pc != 0x3B6DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6DC4u; }
        if (ctx->pc != 0x3B6DC4u) { return; }
    }
    ctx->pc = 0x3B6DC4u;
label_3b6dc4:
    // 0x3b6dc4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b6dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b6dc8:
    // 0x3b6dc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b6dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b6dcc:
    // 0x3b6dcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b6dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b6dd0:
    // 0x3b6dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b6dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b6dd4:
    // 0x3b6dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b6dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6dd8:
    // 0x3b6dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b6dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6ddc:
    // 0x3b6ddc: 0x3e00008  jr          $ra
label_3b6de0:
    if (ctx->pc == 0x3B6DE0u) {
        ctx->pc = 0x3B6DE0u;
            // 0x3b6de0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3B6DE4u;
        goto label_3b6de4;
    }
    ctx->pc = 0x3B6DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6DDCu;
            // 0x3b6de0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6DE4u;
label_3b6de4:
    // 0x3b6de4: 0x0  nop
    ctx->pc = 0x3b6de4u;
    // NOP
label_3b6de8:
    // 0x3b6de8: 0x0  nop
    ctx->pc = 0x3b6de8u;
    // NOP
label_3b6dec:
    // 0x3b6dec: 0x0  nop
    ctx->pc = 0x3b6decu;
    // NOP
label_3b6df0:
    // 0x3b6df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b6df4:
    // 0x3b6df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b6df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b6df8:
    // 0x3b6df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b6df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b6dfc:
    // 0x3b6dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b6dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e00:
    // 0x3b6e00: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_3b6e04:
    if (ctx->pc == 0x3B6E04u) {
        ctx->pc = 0x3B6E04u;
            // 0x3b6e04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6E08u;
        goto label_3b6e08;
    }
    ctx->pc = 0x3B6E00u;
    {
        const bool branch_taken_0x3b6e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6e00) {
            ctx->pc = 0x3B6E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6E00u;
            // 0x3b6e04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6E2Cu;
            goto label_3b6e2c;
        }
    }
    ctx->pc = 0x3B6E08u;
label_3b6e08:
    // 0x3b6e08: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3b6e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3b6e0c:
    // 0x3b6e0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b6e10:
    // 0x3b6e10: 0x24638bc0  addiu       $v1, $v1, -0x7440
    ctx->pc = 0x3b6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937536));
label_3b6e14:
    // 0x3b6e14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b6e14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3b6e18:
    // 0x3b6e18: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_3b6e1c:
    if (ctx->pc == 0x3B6E1Cu) {
        ctx->pc = 0x3B6E1Cu;
            // 0x3b6e1c: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x3B6E20u;
        goto label_3b6e20;
    }
    ctx->pc = 0x3B6E18u;
    {
        const bool branch_taken_0x3b6e18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B6E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6E18u;
            // 0x3b6e1c: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6e18) {
            ctx->pc = 0x3B6E28u;
            goto label_3b6e28;
        }
    }
    ctx->pc = 0x3B6E20u;
label_3b6e20:
    // 0x3b6e20: 0xc0400a8  jal         func_1002A0
label_3b6e24:
    if (ctx->pc == 0x3B6E24u) {
        ctx->pc = 0x3B6E28u;
        goto label_3b6e28;
    }
    ctx->pc = 0x3B6E20u;
    SET_GPR_U32(ctx, 31, 0x3B6E28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6E28u; }
        if (ctx->pc != 0x3B6E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6E28u; }
        if (ctx->pc != 0x3B6E28u) { return; }
    }
    ctx->pc = 0x3B6E28u;
label_3b6e28:
    // 0x3b6e28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b6e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e2c:
    // 0x3b6e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b6e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6e30:
    // 0x3b6e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b6e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6e34:
    // 0x3b6e34: 0x3e00008  jr          $ra
label_3b6e38:
    if (ctx->pc == 0x3B6E38u) {
        ctx->pc = 0x3B6E38u;
            // 0x3b6e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3B6E3Cu;
        goto label_3b6e3c;
    }
    ctx->pc = 0x3B6E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6E34u;
            // 0x3b6e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6E3Cu;
label_3b6e3c:
    // 0x3b6e3c: 0x0  nop
    ctx->pc = 0x3b6e3cu;
    // NOP
label_3b6e40:
    // 0x3b6e40: 0x3e00008  jr          $ra
label_3b6e44:
    if (ctx->pc == 0x3B6E44u) {
        ctx->pc = 0x3B6E48u;
        goto label_3b6e48;
    }
    ctx->pc = 0x3B6E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6E48u;
label_3b6e48:
    // 0x3b6e48: 0x0  nop
    ctx->pc = 0x3b6e48u;
    // NOP
label_3b6e4c:
    // 0x3b6e4c: 0x0  nop
    ctx->pc = 0x3b6e4cu;
    // NOP
label_3b6e50:
    // 0x3b6e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b6e54:
    // 0x3b6e54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b6e58:
    // 0x3b6e58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b6e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b6e5c:
    // 0x3b6e5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b6e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b6e60:
    // 0x3b6e60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b6e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e64:
    // 0x3b6e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b6e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b6e68:
    // 0x3b6e68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b6e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e6c:
    // 0x3b6e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b6e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b6e70:
    // 0x3b6e70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b6e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e74:
    // 0x3b6e74: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3b6e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6e78:
    // 0x3b6e78: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3b6e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e7c:
    // 0x3b6e7c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b6e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e80:
    // 0x3b6e80: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3b6e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3b6e84:
    // 0x3b6e84: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3b6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6e88:
    // 0x3b6e88: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3b6e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3b6e8c:
    // 0x3b6e8c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3b6e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6e90:
    // 0x3b6e90: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3b6e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3b6e94:
    // 0x3b6e94: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3b6e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6e98:
    // 0x3b6e98: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3b6e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3b6e9c:
    // 0x3b6e9c: 0x8d190000  lw          $t9, 0x0($t0)
    ctx->pc = 0x3b6e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3b6ea0:
    // 0x3b6ea0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b6ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b6ea4:
    // 0x3b6ea4: 0x320f809  jalr        $t9
label_3b6ea8:
    if (ctx->pc == 0x3B6EA8u) {
        ctx->pc = 0x3B6EA8u;
            // 0x3b6ea8: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6EACu;
        goto label_3b6eac;
    }
    ctx->pc = 0x3B6EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6EACu);
        ctx->pc = 0x3B6EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6EA4u;
            // 0x3b6ea8: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6EACu; }
            if (ctx->pc != 0x3B6EACu) { return; }
        }
        }
    }
    ctx->pc = 0x3B6EACu;
label_3b6eac:
    // 0x3b6eac: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x3b6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_3b6eb0:
    // 0x3b6eb0: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x3b6eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b6eb4:
    // 0x3b6eb4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3b6eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3b6eb8:
    // 0x3b6eb8: 0x320f809  jalr        $t9
label_3b6ebc:
    if (ctx->pc == 0x3B6EBCu) {
        ctx->pc = 0x3B6EBCu;
            // 0x3b6ebc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3B6EC0u;
        goto label_3b6ec0;
    }
    ctx->pc = 0x3B6EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6EC0u);
        ctx->pc = 0x3B6EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6EB8u;
            // 0x3b6ebc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6EC0u; }
            if (ctx->pc != 0x3B6EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x3B6EC0u;
label_3b6ec0:
    // 0x3b6ec0: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x3b6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_3b6ec4:
    // 0x3b6ec4: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x3b6ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3b6ec8:
    // 0x3b6ec8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b6ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6ecc:
    // 0x3b6ecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b6eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ed0:
    // 0x3b6ed0: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x3b6ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b6ed4:
    // 0x3b6ed4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3b6ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b6ed8:
    // 0x3b6ed8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3b6ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b6edc:
    // 0x3b6edc: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x3b6edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b6ee0:
    // 0x3b6ee0: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3b6ee0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_3b6ee4:
    // 0x3b6ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b6ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ee8:
    // 0x3b6ee8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b6ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b6eec:
    // 0x3b6eec: 0xc6500008  lwc1        $f16, 0x8($s2)
    ctx->pc = 0x3b6eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_3b6ef0:
    // 0x3b6ef0: 0x320f809  jalr        $t9
label_3b6ef4:
    if (ctx->pc == 0x3B6EF4u) {
        ctx->pc = 0x3B6EF4u;
            // 0x3b6ef4: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x3B6EF8u;
        goto label_3b6ef8;
    }
    ctx->pc = 0x3B6EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6EF8u);
        ctx->pc = 0x3B6EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6EF0u;
            // 0x3b6ef4: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6EF8u; }
            if (ctx->pc != 0x3B6EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x3B6EF8u;
label_3b6ef8:
    // 0x3b6ef8: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x3b6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_3b6efc:
    // 0x3b6efc: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x3b6efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b6f00:
    // 0x3b6f00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3b6f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3b6f04:
    // 0x3b6f04: 0x320f809  jalr        $t9
label_3b6f08:
    if (ctx->pc == 0x3B6F08u) {
        ctx->pc = 0x3B6F0Cu;
        goto label_3b6f0c;
    }
    ctx->pc = 0x3B6F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6F0Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6F0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6F0Cu; }
            if (ctx->pc != 0x3B6F0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B6F0Cu;
label_3b6f0c:
    // 0x3b6f0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b6f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b6f10:
    // 0x3b6f10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b6f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b6f14:
    // 0x3b6f14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b6f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b6f18:
    // 0x3b6f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b6f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6f1c:
    // 0x3b6f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b6f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6f20:
    // 0x3b6f20: 0x3e00008  jr          $ra
label_3b6f24:
    if (ctx->pc == 0x3B6F24u) {
        ctx->pc = 0x3B6F24u;
            // 0x3b6f24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3B6F28u;
        goto label_3b6f28;
    }
    ctx->pc = 0x3B6F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6F20u;
            // 0x3b6f24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6F28u;
label_3b6f28:
    // 0x3b6f28: 0x0  nop
    ctx->pc = 0x3b6f28u;
    // NOP
label_3b6f2c:
    // 0x3b6f2c: 0x0  nop
    ctx->pc = 0x3b6f2cu;
    // NOP
label_3b6f30:
    // 0x3b6f30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3b6f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3b6f34:
    // 0x3b6f34: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3b6f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3b6f38:
    // 0x3b6f38: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3b6f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3b6f3c:
    // 0x3b6f3c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3b6f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3b6f40:
    // 0x3b6f40: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3b6f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3b6f44:
    // 0x3b6f44: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x3b6f44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f48:
    // 0x3b6f48: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3b6f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3b6f4c:
    // 0x3b6f4c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b6f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b6f50:
    // 0x3b6f50: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3b6f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f54:
    // 0x3b6f54: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b6f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b6f58:
    // 0x3b6f58: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b6f58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f5c:
    // 0x3b6f5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b6f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b6f60:
    // 0x3b6f60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3b6f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f64:
    // 0x3b6f64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b6f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b6f68:
    // 0x3b6f68: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3b6f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f6c:
    // 0x3b6f6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b6f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b6f70:
    // 0x3b6f70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b6f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b6f74:
    // 0x3b6f74: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3b6f74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3b6f78:
    // 0x3b6f78: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3b6f78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3b6f7c:
    // 0x3b6f7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b6f7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b6f80:
    // 0x3b6f80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b6f80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b6f84:
    // 0x3b6f84: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x3b6f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3b6f88:
    // 0x3b6f88: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x3b6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3b6f8c:
    // 0x3b6f8c: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x3b6f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3b6f90:
    // 0x3b6f90: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x3b6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3b6f94:
    // 0x3b6f94: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x3b6f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3b6f98:
    // 0x3b6f98: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x3b6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_3b6f9c:
    // 0x3b6f9c: 0x8cf90000  lw          $t9, 0x0($a3)
    ctx->pc = 0x3b6f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3b6fa0:
    // 0x3b6fa0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x3b6fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_3b6fa4:
    // 0x3b6fa4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3b6fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b6fa8:
    // 0x3b6fa8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3b6fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3b6fac:
    // 0x3b6fac: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3b6facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6fb0:
    // 0x3b6fb0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3b6fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fb4:
    // 0x3b6fb4: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3b6fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b6fb8:
    // 0x3b6fb8: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x3b6fb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b6fbc:
    // 0x3b6fbc: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x3b6fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b6fc0:
    // 0x3b6fc0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3b6fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b6fc4:
    // 0x3b6fc4: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x3b6fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b6fc8:
    // 0x3b6fc8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3b6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6fcc:
    // 0x3b6fcc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3b6fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b6fd0:
    // 0x3b6fd0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x3b6fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_3b6fd4:
    // 0x3b6fd4: 0x8faa00b0  lw          $t2, 0xB0($sp)
    ctx->pc = 0x3b6fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6fd8:
    // 0x3b6fd8: 0x8fa900b4  lw          $t1, 0xB4($sp)
    ctx->pc = 0x3b6fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3b6fdc:
    // 0x3b6fdc: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x3b6fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3b6fe0:
    // 0x3b6fe0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x3b6fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_3b6fe4:
    // 0x3b6fe4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x3b6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3b6fe8:
    // 0x3b6fe8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x3b6fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_3b6fec:
    // 0x3b6fec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3b6fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3b6ff0:
    // 0x3b6ff0: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x3b6ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
label_3b6ff4:
    // 0x3b6ff4: 0xafa800b4  sw          $t0, 0xB4($sp)
    ctx->pc = 0x3b6ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 8));
label_3b6ff8:
    // 0x3b6ff8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b6ffc:
    // 0x3b6ffc: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x3b6ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
label_3b7000:
    // 0x3b7000: 0x320f809  jalr        $t9
label_3b7004:
    if (ctx->pc == 0x3B7004u) {
        ctx->pc = 0x3B7004u;
            // 0x3b7004: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->pc = 0x3B7008u;
        goto label_3b7008;
    }
    ctx->pc = 0x3B7000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7008u);
        ctx->pc = 0x3B7004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7000u;
            // 0x3b7004: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7008u; }
            if (ctx->pc != 0x3B7008u) { return; }
        }
        }
    }
    ctx->pc = 0x3B7008u;
label_3b7008:
    // 0x3b7008: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x3b7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b700c:
    // 0x3b700c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3b700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b7010:
    // 0x3b7010: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x3b7010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7014:
    // 0x3b7014: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3b7014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_3b7018:
    // 0x3b7018: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x3b7018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3b701c:
    // 0x3b701c: 0x460428c3  div.s       $f3, $f5, $f4
    ctx->pc = 0x3b701cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[3] = ctx->f[5] / ctx->f[4];
label_3b7020:
    // 0x3b7020: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b7020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b7024:
    // 0x3b7024: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x3b7024u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3b7028:
    // 0x3b7028: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x3b7028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b702c:
    // 0x3b702c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x3b702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7030:
    // 0x3b7030: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3b7030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b7034:
    // 0x3b7034: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x3b7034u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_3b7038:
    // 0x3b7038: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b7038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b703c:
    // 0x3b703c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b703cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b7040:
    // 0x3b7040: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3b7040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b7044:
    // 0x3b7044: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x3b7044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3b7048:
    // 0x3b7048: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x3b7048u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
label_3b704c:
    // 0x3b704c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3b704cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_3b7050:
    // 0x3b7050: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x3b7050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3b7054:
    // 0x3b7054: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3b7054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_3b7058:
    // 0x3b7058: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x3b7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3b705c:
    // 0x3b705c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x3b705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3b7060:
    // 0x3b7060: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x3b7060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3b7064:
    // 0x3b7064: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3b7064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3b7068:
    // 0x3b7068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b7068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b706c:
    // 0x3b706c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3b706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b7070:
    // 0x3b7070: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b7070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b7074:
    // 0x3b7074: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3b7074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b7078:
    // 0x3b7078: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3b7078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b707c:
    // 0x3b707c: 0x8e370000  lw          $s7, 0x0($s1)
    ctx->pc = 0x3b707cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b7080:
    // 0x3b7080: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3b7080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b7084:
    // 0x3b7084: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b7084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b7088:
    // 0x3b7088: 0xc049820  jal         func_126080
label_3b708c:
    if (ctx->pc == 0x3B708Cu) {
        ctx->pc = 0x3B708Cu;
            // 0x3b708c: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3B7090u;
        goto label_3b7090;
    }
    ctx->pc = 0x3B7088u;
    SET_GPR_U32(ctx, 31, 0x3B7090u);
    ctx->pc = 0x3B708Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7088u;
            // 0x3b708c: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B7090u; }
        if (ctx->pc != 0x3B7090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B7090u; }
        if (ctx->pc != 0x3B7090u) { return; }
    }
    ctx->pc = 0x3B7090u;
label_3b7090:
    // 0x3b7090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b7090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7094:
    // 0x3b7094: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3b7094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b7098:
    // 0x3b7098: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3b7098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3b709c:
    // 0x3b709c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3b709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b70a0:
    // 0x3b70a0: 0xc049820  jal         func_126080
label_3b70a4:
    if (ctx->pc == 0x3B70A4u) {
        ctx->pc = 0x3B70A4u;
            // 0x3b70a4: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3B70A8u;
        goto label_3b70a8;
    }
    ctx->pc = 0x3B70A0u;
    SET_GPR_U32(ctx, 31, 0x3B70A8u);
    ctx->pc = 0x3B70A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B70A0u;
            // 0x3b70a4: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B70A8u; }
        if (ctx->pc != 0x3B70A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B70A8u; }
        if (ctx->pc != 0x3B70A8u) { return; }
    }
    ctx->pc = 0x3B70A8u;
label_3b70a8:
    // 0x3b70a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b70a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b70ac:
    // 0x3b70ac: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3b70acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3b70b0:
    // 0x3b70b0: 0x9442002e  lhu         $v0, 0x2E($v0)
    ctx->pc = 0x3b70b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
label_3b70b4:
    // 0x3b70b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b70b8:
    if (ctx->pc == 0x3B70B8u) {
        ctx->pc = 0x3B70B8u;
            // 0x3b70b8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B70BCu;
        goto label_3b70bc;
    }
    ctx->pc = 0x3B70B4u;
    {
        const bool branch_taken_0x3b70b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B70B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B70B4u;
            // 0x3b70b8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b70b4) {
            ctx->pc = 0x3B70C8u;
            goto label_3b70c8;
        }
    }
    ctx->pc = 0x3B70BCu;
label_3b70bc:
    // 0x3b70bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b70bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b70c0:
    // 0x3b70c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b70c4:
    if (ctx->pc == 0x3B70C4u) {
        ctx->pc = 0x3B70C4u;
            // 0x3b70c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B70C8u;
        goto label_3b70c8;
    }
    ctx->pc = 0x3B70C0u;
    {
        const bool branch_taken_0x3b70c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B70C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B70C0u;
            // 0x3b70c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b70c0) {
            ctx->pc = 0x3B70E4u;
            goto label_3b70e4;
        }
    }
    ctx->pc = 0x3B70C8u;
label_3b70c8:
    // 0x3b70c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b70cc:
    // 0x3b70cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b70ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b70d0:
    // 0x3b70d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b70d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b70d4:
    // 0x3b70d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b70d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b70d8:
    // 0x3b70d8: 0x0  nop
    ctx->pc = 0x3b70d8u;
    // NOP
label_3b70dc:
    // 0x3b70dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b70dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b70e0:
    // 0x3b70e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b70e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b70e4:
    // 0x3b70e4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b70e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b70e8:
    // 0x3b70e8: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x3b70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_3b70ec:
    // 0x3b70ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b70f0:
    if (ctx->pc == 0x3B70F0u) {
        ctx->pc = 0x3B70F0u;
            // 0x3b70f0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3B70F4u;
        goto label_3b70f4;
    }
    ctx->pc = 0x3B70ECu;
    {
        const bool branch_taken_0x3b70ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B70F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B70ECu;
            // 0x3b70f0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b70ec) {
            ctx->pc = 0x3B7100u;
            goto label_3b7100;
        }
    }
    ctx->pc = 0x3B70F4u;
label_3b70f4:
    // 0x3b70f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b70f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b70f8:
    // 0x3b70f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b70fc:
    if (ctx->pc == 0x3B70FCu) {
        ctx->pc = 0x3B70FCu;
            // 0x3b70fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B7100u;
        goto label_3b7100;
    }
    ctx->pc = 0x3B70F8u;
    {
        const bool branch_taken_0x3b70f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B70FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B70F8u;
            // 0x3b70fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b70f8) {
            ctx->pc = 0x3B711Cu;
            goto label_3b711c;
        }
    }
    ctx->pc = 0x3B7100u;
label_3b7100:
    // 0x3b7100: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b7100u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b7104:
    // 0x3b7104: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b7104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b7108:
    // 0x3b7108: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b7108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b710c:
    // 0x3b710c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b710cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7110:
    // 0x3b7110: 0x0  nop
    ctx->pc = 0x3b7110u;
    // NOP
label_3b7114:
    // 0x3b7114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b7114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b7118:
    // 0x3b7118: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b7118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b711c:
    // 0x3b711c: 0x0  nop
    ctx->pc = 0x3b711cu;
    // NOP
label_3b7120:
    // 0x3b7120: 0x0  nop
    ctx->pc = 0x3b7120u;
    // NOP
label_3b7124:
    // 0x3b7124: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b7124u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b7128:
    // 0x3b7128: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3b7128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3b712c:
    // 0x3b712c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3b7130:
    // 0x3b7130: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x3b7130u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3b7134:
    // 0x3b7134: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3b7134u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3b7138:
    // 0x3b7138: 0xe7b400e8  swc1        $f20, 0xE8($sp)
    ctx->pc = 0x3b7138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3b713c:
    // 0x3b713c: 0xe7b500ec  swc1        $f21, 0xEC($sp)
    ctx->pc = 0x3b713cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_3b7140:
    // 0x3b7140: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3b7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7144:
    // 0x3b7144: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b7144u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b7148:
    // 0x3b7148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b714c:
    // 0x3b714c: 0x0  nop
    ctx->pc = 0x3b714cu;
    // NOP
label_3b7150:
    // 0x3b7150: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b7150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b7154:
    // 0x3b7154: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7158:
    // 0x3b7158: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3b715c:
    if (ctx->pc == 0x3B715Cu) {
        ctx->pc = 0x3B715Cu;
            // 0x3b715c: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x3B7160u;
        goto label_3b7160;
    }
    ctx->pc = 0x3B7158u;
    {
        const bool branch_taken_0x3b7158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B715Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7158u;
            // 0x3b715c: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7158) {
            ctx->pc = 0x3B7170u;
            goto label_3b7170;
        }
    }
    ctx->pc = 0x3B7160u;
label_3b7160:
    // 0x3b7160: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b7164:
    // 0x3b7164: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b7164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b7168:
    // 0x3b7168: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b716c:
    if (ctx->pc == 0x3B716Cu) {
        ctx->pc = 0x3B716Cu;
            // 0x3b716c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B7170u;
        goto label_3b7170;
    }
    ctx->pc = 0x3B7168u;
    {
        const bool branch_taken_0x3b7168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7168u;
            // 0x3b716c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7168) {
            ctx->pc = 0x3B718Cu;
            goto label_3b718c;
        }
    }
    ctx->pc = 0x3B7170u;
label_3b7170:
    // 0x3b7170: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b7170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b7174:
    // 0x3b7174: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b7174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3b7178:
    // 0x3b7178: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b717c:
    // 0x3b717c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b717cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b7180:
    // 0x3b7180: 0x0  nop
    ctx->pc = 0x3b7180u;
    // NOP
label_3b7184:
    // 0x3b7184: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b7184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b7188:
    // 0x3b7188: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3b7188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b718c:
    // 0x3b718c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b7190:
    // 0x3b7190: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3b7190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3b7194:
    // 0x3b7194: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x3b7194u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3b7198:
    // 0x3b7198: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3b7198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b719c:
    // 0x3b719c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3b71a0:
    // 0x3b71a0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b71a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b71a4:
    // 0x3b71a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b71a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b71a8:
    // 0x3b71a8: 0x0  nop
    ctx->pc = 0x3b71a8u;
    // NOP
label_3b71ac:
    // 0x3b71ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b71acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b71b0:
    // 0x3b71b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b71b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b71b4:
    // 0x3b71b4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3b71b8:
    if (ctx->pc == 0x3B71B8u) {
        ctx->pc = 0x3B71B8u;
            // 0x3b71b8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3B71BCu;
        goto label_3b71bc;
    }
    ctx->pc = 0x3B71B4u;
    {
        const bool branch_taken_0x3b71b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b71b4) {
            ctx->pc = 0x3B71B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B71B4u;
            // 0x3b71b8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B71CCu;
            goto label_3b71cc;
        }
    }
    ctx->pc = 0x3B71BCu;
label_3b71bc:
    // 0x3b71bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b71bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b71c0:
    // 0x3b71c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b71c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b71c4:
    // 0x3b71c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b71c8:
    if (ctx->pc == 0x3B71C8u) {
        ctx->pc = 0x3B71C8u;
            // 0x3b71c8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B71CCu;
        goto label_3b71cc;
    }
    ctx->pc = 0x3B71C4u;
    {
        const bool branch_taken_0x3b71c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B71C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B71C4u;
            // 0x3b71c8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b71c4) {
            ctx->pc = 0x3B71E4u;
            goto label_3b71e4;
        }
    }
    ctx->pc = 0x3B71CCu;
label_3b71cc:
    // 0x3b71cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3b71d0:
    // 0x3b71d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b71d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b71d4:
    // 0x3b71d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b71d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b71d8:
    // 0x3b71d8: 0x0  nop
    ctx->pc = 0x3b71d8u;
    // NOP
label_3b71dc:
    // 0x3b71dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b71dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b71e0:
    // 0x3b71e0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3b71e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b71e4:
    // 0x3b71e4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b71e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b71e8:
    // 0x3b71e8: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3b71e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3b71ec:
    // 0x3b71ec: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x3b71ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_3b71f0:
    // 0x3b71f0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3b71f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b71f4:
    // 0x3b71f4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3b71f8:
    // 0x3b71f8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b71f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b71fc:
    // 0x3b71fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b71fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7200:
    // 0x3b7200: 0x0  nop
    ctx->pc = 0x3b7200u;
    // NOP
label_3b7204:
    // 0x3b7204: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b7204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b7208:
    // 0x3b7208: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b720c:
    // 0x3b720c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3b7210:
    if (ctx->pc == 0x3B7210u) {
        ctx->pc = 0x3B7210u;
            // 0x3b7210: 0xc53025  or          $a2, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->pc = 0x3B7214u;
        goto label_3b7214;
    }
    ctx->pc = 0x3B720Cu;
    {
        const bool branch_taken_0x3b720c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B7210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B720Cu;
            // 0x3b7210: 0xc53025  or          $a2, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b720c) {
            ctx->pc = 0x3B7224u;
            goto label_3b7224;
        }
    }
    ctx->pc = 0x3B7214u;
label_3b7214:
    // 0x3b7214: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b7218:
    // 0x3b7218: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b7218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b721c:
    // 0x3b721c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b7220:
    if (ctx->pc == 0x3B7220u) {
        ctx->pc = 0x3B7220u;
            // 0x3b7220: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B7224u;
        goto label_3b7224;
    }
    ctx->pc = 0x3B721Cu;
    {
        const bool branch_taken_0x3b721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B721Cu;
            // 0x3b7220: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b721c) {
            ctx->pc = 0x3B7240u;
            goto label_3b7240;
        }
    }
    ctx->pc = 0x3B7224u;
label_3b7224:
    // 0x3b7224: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b7224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b7228:
    // 0x3b7228: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b7228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3b722c:
    // 0x3b722c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b722cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b7230:
    // 0x3b7230: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b7230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b7234:
    // 0x3b7234: 0x0  nop
    ctx->pc = 0x3b7234u;
    // NOP
label_3b7238:
    // 0x3b7238: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b7238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b723c:
    // 0x3b723c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3b723cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b7240:
    // 0x3b7240: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b7240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b7244:
    // 0x3b7244: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3b7244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3b7248:
    // 0x3b7248: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3b7248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3b724c:
    // 0x3b724c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3b724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7250:
    // 0x3b7250: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b7250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3b7254:
    // 0x3b7254: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b7254u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b7258:
    // 0x3b7258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b725c:
    // 0x3b725c: 0x0  nop
    ctx->pc = 0x3b725cu;
    // NOP
label_3b7260:
    // 0x3b7260: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b7260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b7264:
    // 0x3b7264: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7268:
    // 0x3b7268: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3b726c:
    if (ctx->pc == 0x3B726Cu) {
        ctx->pc = 0x3B726Cu;
            // 0x3b726c: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->pc = 0x3B7270u;
        goto label_3b7270;
    }
    ctx->pc = 0x3B7268u;
    {
        const bool branch_taken_0x3b7268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7268u;
            // 0x3b726c: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7268) {
            ctx->pc = 0x3B7280u;
            goto label_3b7280;
        }
    }
    ctx->pc = 0x3B7270u;
label_3b7270:
    // 0x3b7270: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b7274:
    // 0x3b7274: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b7274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b7278:
    // 0x3b7278: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b727c:
    if (ctx->pc == 0x3B727Cu) {
        ctx->pc = 0x3B727Cu;
            // 0x3b727c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B7280u;
        goto label_3b7280;
    }
    ctx->pc = 0x3B7278u;
    {
        const bool branch_taken_0x3b7278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7278u;
            // 0x3b727c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7278) {
            ctx->pc = 0x3B729Cu;
            goto label_3b729c;
        }
    }
    ctx->pc = 0x3B7280u;
label_3b7280:
    // 0x3b7280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b7280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b7284:
    // 0x3b7284: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3b7288:
    // 0x3b7288: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b728c:
    // 0x3b728c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b728cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b7290:
    // 0x3b7290: 0x0  nop
    ctx->pc = 0x3b7290u;
    // NOP
label_3b7294:
    // 0x3b7294: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b7294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b7298:
    // 0x3b7298: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b7298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b729c:
    // 0x3b729c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3b729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b72a0:
    // 0x3b72a0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3b72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3b72a4:
    // 0x3b72a4: 0x458025  or          $s0, $v0, $a1
    ctx->pc = 0x3b72a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3b72a8:
    // 0x3b72a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b72ac:
    // 0x3b72ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b72acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3b72b0:
    // 0x3b72b0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3b72b4:
    if (ctx->pc == 0x3B72B4u) {
        ctx->pc = 0x3B72B4u;
            // 0x3b72b4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x3B72B8u;
        goto label_3b72b8;
    }
    ctx->pc = 0x3B72B0u;
    {
        const bool branch_taken_0x3b72b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b72b0) {
            ctx->pc = 0x3B72B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B72B0u;
            // 0x3b72b4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B72CCu;
            goto label_3b72cc;
        }
    }
    ctx->pc = 0x3B72B8u;
label_3b72b8:
    // 0x3b72b8: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x3b72b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b72bc:
    // 0x3b72bc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3b72bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b72c0:
    // 0x3b72c0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3b72c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3b72c4:
    // 0x3b72c4: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x3b72c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3b72c8:
    // 0x3b72c8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3b72c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3b72cc:
    // 0x3b72cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b72d0:
    // 0x3b72d0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3b72d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3b72d4:
    // 0x3b72d4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3b72d8:
    if (ctx->pc == 0x3B72D8u) {
        ctx->pc = 0x3B72D8u;
            // 0x3b72d8: 0xc6820000  lwc1        $f2, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3B72DCu;
        goto label_3b72dc;
    }
    ctx->pc = 0x3B72D4u;
    {
        const bool branch_taken_0x3b72d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b72d4) {
            ctx->pc = 0x3B72D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B72D4u;
            // 0x3b72d8: 0xc6820000  lwc1        $f2, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B72F0u;
            goto label_3b72f0;
        }
    }
    ctx->pc = 0x3B72DCu;
label_3b72dc:
    // 0x3b72dc: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x3b72dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b72e0:
    // 0x3b72e0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x3b72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b72e4:
    // 0x3b72e4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3b72e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3b72e8:
    // 0x3b72e8: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x3b72e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_3b72ec:
    // 0x3b72ec: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x3b72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b72f0:
    // 0x3b72f0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3b72f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b72f4:
    // 0x3b72f4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3b72f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b72f8:
    // 0x3b72f8: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x3b72f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3b72fc:
    // 0x3b72fc: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x3b72fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_3b7300:
    // 0x3b7300: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3b7300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3b7304:
    // 0x3b7304: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x3b7304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3b7308:
    // 0x3b7308: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x3b7308u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b730c:
    // 0x3b730c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b730cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b7310:
    // 0x3b7310: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3b7310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3b7314:
    // 0x3b7314: 0x320f809  jalr        $t9
label_3b7318:
    if (ctx->pc == 0x3B7318u) {
        ctx->pc = 0x3B7318u;
            // 0x3b7318: 0xc6360004  lwc1        $f22, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->pc = 0x3B731Cu;
        goto label_3b731c;
    }
    ctx->pc = 0x3B7314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B731Cu);
        ctx->pc = 0x3B7318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7314u;
            // 0x3b7318: 0xc6360004  lwc1        $f22, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B731Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B731Cu; }
            if (ctx->pc != 0x3B731Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B731Cu;
label_3b731c:
    // 0x3b731c: 0x8eb90048  lw          $t9, 0x48($s5)
    ctx->pc = 0x3b731cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3b7320:
    // 0x3b7320: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3b7320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b7324:
    // 0x3b7324: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b7324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b7328:
    // 0x3b7328: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b7328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b732c:
    // 0x3b732c: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x3b732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_3b7330:
    // 0x3b7330: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x3b7330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_3b7334:
    // 0x3b7334: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3b7334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3b7338:
    // 0x3b7338: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x3b7338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3b733c:
    // 0x3b733c: 0x26480004  addiu       $t0, $s2, 0x4
    ctx->pc = 0x3b733cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3b7340:
    // 0x3b7340: 0x320f809  jalr        $t9
label_3b7344:
    if (ctx->pc == 0x3B7344u) {
        ctx->pc = 0x3B7344u;
            // 0x3b7344: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7348u;
        goto label_3b7348;
    }
    ctx->pc = 0x3B7340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7348u);
        ctx->pc = 0x3B7344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7340u;
            // 0x3b7344: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7348u; }
            if (ctx->pc != 0x3B7348u) { return; }
        }
        }
    }
    ctx->pc = 0x3B7348u;
label_3b7348:
    // 0x3b7348: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3b7348u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b734c:
    // 0x3b734c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_3b7350:
    if (ctx->pc == 0x3B7350u) {
        ctx->pc = 0x3B7354u;
        goto label_3b7354;
    }
    ctx->pc = 0x3B734Cu;
    {
        const bool branch_taken_0x3b734c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b734c) {
            ctx->pc = 0x3B73B4u;
            goto label_3b73b4;
        }
    }
    ctx->pc = 0x3B7354u;
label_3b7354:
    // 0x3b7354: 0x92a2002c  lbu         $v0, 0x2C($s5)
    ctx->pc = 0x3b7354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_3b7358:
    // 0x3b7358: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3b735c:
    if (ctx->pc == 0x3B735Cu) {
        ctx->pc = 0x3B7360u;
        goto label_3b7360;
    }
    ctx->pc = 0x3B7358u;
    {
        const bool branch_taken_0x3b7358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7358) {
            ctx->pc = 0x3B7388u;
            goto label_3b7388;
        }
    }
    ctx->pc = 0x3B7360u;
label_3b7360:
    // 0x3b7360: 0x8eb90048  lw          $t9, 0x48($s5)
    ctx->pc = 0x3b7360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3b7364:
    // 0x3b7364: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x3b7364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7368:
    // 0x3b7368: 0x92490000  lbu         $t1, 0x0($s2)
    ctx->pc = 0x3b7368u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b736c:
    // 0x3b736c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b7370:
    // 0x3b7370: 0x8ea80024  lw          $t0, 0x24($s5)
    ctx->pc = 0x3b7370u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3b7374:
    // 0x3b7374: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x3b7374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_3b7378:
    // 0x3b7378: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3b7378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3b737c:
    // 0x3b737c: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x3b737cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_3b7380:
    // 0x3b7380: 0x320f809  jalr        $t9
label_3b7384:
    if (ctx->pc == 0x3B7384u) {
        ctx->pc = 0x3B7384u;
            // 0x3b7384: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3B7388u;
        goto label_3b7388;
    }
    ctx->pc = 0x3B7380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7388u);
        ctx->pc = 0x3B7384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7380u;
            // 0x3b7384: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7388u; }
            if (ctx->pc != 0x3B7388u) { return; }
        }
        }
    }
    ctx->pc = 0x3B7388u;
label_3b7388:
    // 0x3b7388: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_3b738c:
    if (ctx->pc == 0x3B738Cu) {
        ctx->pc = 0x3B7390u;
        goto label_3b7390;
    }
    ctx->pc = 0x3B7388u;
    {
        const bool branch_taken_0x3b7388 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7388) {
            ctx->pc = 0x3B73CCu;
            goto label_3b73cc;
        }
    }
    ctx->pc = 0x3B7390u;
label_3b7390:
    // 0x3b7390: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x3b7390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7394:
    // 0x3b7394: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3b7394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3b7398:
    // 0x3b7398: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x3b7398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b739c:
    // 0x3b739c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x3b739cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3b73a0:
    // 0x3b73a0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x3b73a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b73a4:
    // 0x3b73a4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3b73a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b73a8:
    // 0x3b73a8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x3b73a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b73ac:
    // 0x3b73ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b73b0:
    if (ctx->pc == 0x3B73B0u) {
        ctx->pc = 0x3B73B0u;
            // 0x3b73b0: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->pc = 0x3B73B4u;
        goto label_3b73b4;
    }
    ctx->pc = 0x3B73ACu;
    {
        const bool branch_taken_0x3b73ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B73B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B73ACu;
            // 0x3b73b0: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b73ac) {
            ctx->pc = 0x3B73CCu;
            goto label_3b73cc;
        }
    }
    ctx->pc = 0x3B73B4u;
label_3b73b4:
    // 0x3b73b4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_3b73b8:
    if (ctx->pc == 0x3B73B8u) {
        ctx->pc = 0x3B73BCu;
        goto label_3b73bc;
    }
    ctx->pc = 0x3B73B4u;
    {
        const bool branch_taken_0x3b73b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b73b4) {
            ctx->pc = 0x3B73CCu;
            goto label_3b73cc;
        }
    }
    ctx->pc = 0x3B73BCu;
label_3b73bc:
    // 0x3b73bc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3b73bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3b73c0:
    // 0x3b73c0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3b73c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3b73c4:
    // 0x3b73c4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3b73c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3b73c8:
    // 0x3b73c8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3b73c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3b73cc:
    // 0x3b73cc: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
label_3b73d0:
    if (ctx->pc == 0x3B73D0u) {
        ctx->pc = 0x3B73D0u;
            // 0x3b73d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B73D4u;
        goto label_3b73d4;
    }
    ctx->pc = 0x3B73CCu;
    {
        const bool branch_taken_0x3b73cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b73cc) {
            ctx->pc = 0x3B73D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B73CCu;
            // 0x3b73d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B73E0u;
            goto label_3b73e0;
        }
    }
    ctx->pc = 0x3B73D4u;
label_3b73d4:
    // 0x3b73d4: 0xe6d50004  swc1        $f21, 0x4($s6)
    ctx->pc = 0x3b73d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_3b73d8:
    // 0x3b73d8: 0xe6d40000  swc1        $f20, 0x0($s6)
    ctx->pc = 0x3b73d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_3b73dc:
    // 0x3b73dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b73dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b73e0:
    // 0x3b73e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3b73e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3b73e4:
    // 0x3b73e4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3b73e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b73e8:
    // 0x3b73e8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3b73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b73ec:
    // 0x3b73ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3b73ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b73f0:
    // 0x3b73f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b73f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b73f4:
    // 0x3b73f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3b73f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b73f8:
    // 0x3b73f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b73f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b73fc:
    // 0x3b73fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b73fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b7400:
    // 0x3b7400: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b7400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b7404:
    // 0x3b7404: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b7404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b7408:
    // 0x3b7408: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b7408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b740c:
    // 0x3b740c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b740cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b7410:
    // 0x3b7410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b7410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7414:
    // 0x3b7414: 0x3e00008  jr          $ra
label_3b7418:
    if (ctx->pc == 0x3B7418u) {
        ctx->pc = 0x3B7418u;
            // 0x3b7418: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3B741Cu;
        goto label_3b741c;
    }
    ctx->pc = 0x3B7414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7414u;
            // 0x3b7418: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B741Cu;
label_3b741c:
    // 0x3b741c: 0x0  nop
    ctx->pc = 0x3b741cu;
    // NOP
label_3b7420:
    // 0x3b7420: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3b7420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3b7424:
    // 0x3b7424: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3b7424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7428:
    // 0x3b7428: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x3b7428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3b742c:
    // 0x3b742c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3b742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7430:
    // 0x3b7430: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b7434:
    // 0x3b7434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b7434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b7438:
    // 0x3b7438: 0x0  nop
    ctx->pc = 0x3b7438u;
    // NOP
label_3b743c:
    // 0x3b743c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b743cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b7440:
    // 0x3b7440: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b7440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3b7444:
    // 0x3b7444: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3b7444u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3b7448:
    // 0x3b7448: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x3b7448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b744c:
    // 0x3b744c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3b7450:
    if (ctx->pc == 0x3B7450u) {
        ctx->pc = 0x3B7454u;
        goto label_3b7454;
    }
    ctx->pc = 0x3B744Cu;
    {
        const bool branch_taken_0x3b744c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b744c) {
            ctx->pc = 0x3B745Cu;
            goto label_3b745c;
        }
    }
    ctx->pc = 0x3B7454u;
label_3b7454:
    // 0x3b7454: 0x10000067  b           . + 4 + (0x67 << 2)
label_3b7458:
    if (ctx->pc == 0x3B7458u) {
        ctx->pc = 0x3B7458u;
            // 0x3b7458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B745Cu;
        goto label_3b745c;
    }
    ctx->pc = 0x3B7454u;
    {
        const bool branch_taken_0x3b7454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7454u;
            // 0x3b7458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7454) {
            ctx->pc = 0x3B75F4u;
            goto label_3b75f4;
        }
    }
    ctx->pc = 0x3B745Cu;
label_3b745c:
    // 0x3b745c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b745cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7460:
    // 0x3b7460: 0x0  nop
    ctx->pc = 0x3b7460u;
    // NOP
label_3b7464:
    // 0x3b7464: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b7464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7468:
    // 0x3b7468: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_3b746c:
    if (ctx->pc == 0x3B746Cu) {
        ctx->pc = 0x3B746Cu;
            // 0x3b746c: 0xc5220000  lwc1        $f2, 0x0($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3B7470u;
        goto label_3b7470;
    }
    ctx->pc = 0x3B7468u;
    {
        const bool branch_taken_0x3b7468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7468) {
            ctx->pc = 0x3B746Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7468u;
            // 0x3b746c: 0xc5220000  lwc1        $f2, 0x0($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B749Cu;
            goto label_3b749c;
        }
    }
    ctx->pc = 0x3B7470u;
label_3b7470:
    // 0x3b7470: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3b7470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3b7474:
    // 0x3b7474: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x3b7474u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[12];
label_3b7478:
    // 0x3b7478: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3b7478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3b747c:
    // 0x3b747c: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x3b747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7480:
    // 0x3b7480: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3b7480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7484:
    // 0x3b7484: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b7484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b7488:
    // 0x3b7488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b7488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b748c:
    // 0x3b748c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3b748cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3b7490:
    // 0x3b7490: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b7490u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b7494:
    // 0x3b7494: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x3b7494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_3b7498:
    // 0x3b7498: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x3b7498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b749c:
    // 0x3b749c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3b749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b74a0:
    // 0x3b74a0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x3b74a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b74a4:
    // 0x3b74a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b74a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b74a8:
    // 0x3b74a8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3b74a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3b74ac:
    // 0x3b74ac: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3b74acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b74b0:
    // 0x3b74b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3b74b4:
    if (ctx->pc == 0x3B74B4u) {
        ctx->pc = 0x3B74B8u;
        goto label_3b74b8;
    }
    ctx->pc = 0x3B74B0u;
    {
        const bool branch_taken_0x3b74b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b74b0) {
            ctx->pc = 0x3B74C0u;
            goto label_3b74c0;
        }
    }
    ctx->pc = 0x3B74B8u;
label_3b74b8:
    // 0x3b74b8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_3b74bc:
    if (ctx->pc == 0x3B74BCu) {
        ctx->pc = 0x3B74BCu;
            // 0x3b74bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B74C0u;
        goto label_3b74c0;
    }
    ctx->pc = 0x3B74B8u;
    {
        const bool branch_taken_0x3b74b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B74BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B74B8u;
            // 0x3b74bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b74b8) {
            ctx->pc = 0x3B75F4u;
            goto label_3b75f4;
        }
    }
    ctx->pc = 0x3B74C0u;
label_3b74c0:
    // 0x3b74c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b74c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b74c4:
    // 0x3b74c4: 0x0  nop
    ctx->pc = 0x3b74c4u;
    // NOP
label_3b74c8:
    // 0x3b74c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3b74c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b74cc:
    // 0x3b74cc: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_3b74d0:
    if (ctx->pc == 0x3B74D0u) {
        ctx->pc = 0x3B74D0u;
            // 0x3b74d0: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->pc = 0x3B74D4u;
        goto label_3b74d4;
    }
    ctx->pc = 0x3B74CCu;
    {
        const bool branch_taken_0x3b74cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b74cc) {
            ctx->pc = 0x3B74D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B74CCu;
            // 0x3b74d0: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B750Cu;
            goto label_3b750c;
        }
    }
    ctx->pc = 0x3B74D4u;
label_3b74d4:
    // 0x3b74d4: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x3b74d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b74d8:
    // 0x3b74d8: 0x460c1043  div.s       $f1, $f2, $f12
    ctx->pc = 0x3b74d8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[12];
label_3b74dc:
    // 0x3b74dc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3b74dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3b74e0:
    // 0x3b74e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3b74e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b74e4:
    // 0x3b74e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b74e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3b74e8:
    // 0x3b74e8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3b74e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3b74ec:
    // 0x3b74ec: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x3b74ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b74f0:
    // 0x3b74f0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3b74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b74f4:
    // 0x3b74f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b74f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b74f8:
    // 0x3b74f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b74f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b74fc:
    // 0x3b74fc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3b74fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3b7500:
    // 0x3b7500: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b7500u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b7504:
    // 0x3b7504: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3b7504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3b7508:
    // 0x3b7508: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x3b7508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_3b750c:
    // 0x3b750c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3b750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7510:
    // 0x3b7510: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x3b7510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_3b7514:
    // 0x3b7514: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3b7514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7518:
    // 0x3b7518: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b7518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b751c:
    // 0x3b751c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b751cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b7520:
    // 0x3b7520: 0x0  nop
    ctx->pc = 0x3b7520u;
    // NOP
label_3b7524:
    // 0x3b7524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b7524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b7528:
    // 0x3b7528: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b7528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3b752c:
    // 0x3b752c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3b752cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3b7530:
    // 0x3b7530: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x3b7530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7534:
    // 0x3b7534: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3b7538:
    if (ctx->pc == 0x3B7538u) {
        ctx->pc = 0x3B753Cu;
        goto label_3b753c;
    }
    ctx->pc = 0x3B7534u;
    {
        const bool branch_taken_0x3b7534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7534) {
            ctx->pc = 0x3B7544u;
            goto label_3b7544;
        }
    }
    ctx->pc = 0x3B753Cu;
label_3b753c:
    // 0x3b753c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3b7540:
    if (ctx->pc == 0x3B7540u) {
        ctx->pc = 0x3B7540u;
            // 0x3b7540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7544u;
        goto label_3b7544;
    }
    ctx->pc = 0x3B753Cu;
    {
        const bool branch_taken_0x3b753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B753Cu;
            // 0x3b7540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b753c) {
            ctx->pc = 0x3B75F4u;
            goto label_3b75f4;
        }
    }
    ctx->pc = 0x3B7544u;
label_3b7544:
    // 0x3b7544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b7544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7548:
    // 0x3b7548: 0x0  nop
    ctx->pc = 0x3b7548u;
    // NOP
label_3b754c:
    // 0x3b754c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b754cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7550:
    // 0x3b7550: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_3b7554:
    if (ctx->pc == 0x3B7554u) {
        ctx->pc = 0x3B7554u;
            // 0x3b7554: 0xc5220004  lwc1        $f2, 0x4($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3B7558u;
        goto label_3b7558;
    }
    ctx->pc = 0x3B7550u;
    {
        const bool branch_taken_0x3b7550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7550) {
            ctx->pc = 0x3B7554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7550u;
            // 0x3b7554: 0xc5220004  lwc1        $f2, 0x4($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7584u;
            goto label_3b7584;
        }
    }
    ctx->pc = 0x3B7558u;
label_3b7558:
    // 0x3b7558: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3b7558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3b755c:
    // 0x3b755c: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x3b755cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[12];
label_3b7560:
    // 0x3b7560: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3b7560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3b7564:
    // 0x3b7564: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x3b7564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7568:
    // 0x3b7568: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x3b7568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b756c:
    // 0x3b756c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b756cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b7570:
    // 0x3b7570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b7570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b7574:
    // 0x3b7574: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3b7574u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3b7578:
    // 0x3b7578: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b7578u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b757c:
    // 0x3b757c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x3b757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_3b7580:
    // 0x3b7580: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x3b7580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7584:
    // 0x3b7584: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3b7584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7588:
    // 0x3b7588: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3b7588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b758c:
    // 0x3b758c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b758cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b7590:
    // 0x3b7590: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3b7590u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3b7594:
    // 0x3b7594: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3b7594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7598:
    // 0x3b7598: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3b759c:
    if (ctx->pc == 0x3B759Cu) {
        ctx->pc = 0x3B75A0u;
        goto label_3b75a0;
    }
    ctx->pc = 0x3B7598u;
    {
        const bool branch_taken_0x3b7598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7598) {
            ctx->pc = 0x3B75A8u;
            goto label_3b75a8;
        }
    }
    ctx->pc = 0x3B75A0u;
label_3b75a0:
    // 0x3b75a0: 0x10000014  b           . + 4 + (0x14 << 2)
label_3b75a4:
    if (ctx->pc == 0x3B75A4u) {
        ctx->pc = 0x3B75A4u;
            // 0x3b75a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B75A8u;
        goto label_3b75a8;
    }
    ctx->pc = 0x3B75A0u;
    {
        const bool branch_taken_0x3b75a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B75A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B75A0u;
            // 0x3b75a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b75a0) {
            ctx->pc = 0x3B75F4u;
            goto label_3b75f4;
        }
    }
    ctx->pc = 0x3B75A8u;
label_3b75a8:
    // 0x3b75a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b75a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b75ac:
    // 0x3b75ac: 0x0  nop
    ctx->pc = 0x3b75acu;
    // NOP
label_3b75b0:
    // 0x3b75b0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3b75b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b75b4:
    // 0x3b75b4: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_3b75b8:
    if (ctx->pc == 0x3B75B8u) {
        ctx->pc = 0x3B75B8u;
            // 0x3b75b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B75BCu;
        goto label_3b75bc;
    }
    ctx->pc = 0x3B75B4u;
    {
        const bool branch_taken_0x3b75b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b75b4) {
            ctx->pc = 0x3B75B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B75B4u;
            // 0x3b75b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B75F4u;
            goto label_3b75f4;
        }
    }
    ctx->pc = 0x3B75BCu;
label_3b75bc:
    // 0x3b75bc: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x3b75bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b75c0:
    // 0x3b75c0: 0x460c1043  div.s       $f1, $f2, $f12
    ctx->pc = 0x3b75c0u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[12];
label_3b75c4:
    // 0x3b75c4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3b75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3b75c8:
    // 0x3b75c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3b75c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b75cc:
    // 0x3b75cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b75ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3b75d0:
    // 0x3b75d0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3b75d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_3b75d4:
    // 0x3b75d4: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x3b75d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b75d8:
    // 0x3b75d8: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x3b75d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b75dc:
    // 0x3b75dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b75dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b75e0:
    // 0x3b75e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b75e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b75e4:
    // 0x3b75e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3b75e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3b75e8:
    // 0x3b75e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b75e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b75ec:
    // 0x3b75ec: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x3b75ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_3b75f0:
    // 0x3b75f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b75f4:
    // 0x3b75f4: 0x3e00008  jr          $ra
label_3b75f8:
    if (ctx->pc == 0x3B75F8u) {
        ctx->pc = 0x3B75FCu;
        goto label_3b75fc;
    }
    ctx->pc = 0x3B75F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B75FCu;
label_3b75fc:
    // 0x3b75fc: 0x0  nop
    ctx->pc = 0x3b75fcu;
    // NOP
label_3b7600:
    // 0x3b7600: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3b7600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3b7604:
    // 0x3b7604: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3b7604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3b7608:
    // 0x3b7608: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3b7608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3b760c:
    // 0x3b760c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3b760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3b7610:
    // 0x3b7610: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x3b7610u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b7614:
    // 0x3b7614: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3b7614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3b7618:
    // 0x3b7618: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3b7618u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b761c:
    // 0x3b761c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b7620:
    // 0x3b7620: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3b7620u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b7624:
    // 0x3b7624: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b7624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b7628:
    // 0x3b7628: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b7628u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b762c:
    // 0x3b762c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b7630:
    // 0x3b7630: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3b7630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b7634:
    // 0x3b7634: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b7634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b7638:
    // 0x3b7638: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b7638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b763c:
    // 0x3b763c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b7640:
    // 0x3b7640: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3b7640u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3b7644:
    // 0x3b7644: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b7644u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b7648:
    // 0x3b7648: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b7648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b764c:
    // 0x3b764c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3b764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3b7650:
    // 0x3b7650: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3b7650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b7654:
    // 0x3b7654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b7654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b7658:
    // 0x3b7658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b7658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b765c:
    // 0x3b765c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3b765cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b7660:
    // 0x3b7660: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3b7660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b7664:
    // 0x3b7664: 0xc6350004  lwc1        $f21, 0x4($s1)
    ctx->pc = 0x3b7664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b7668:
    // 0x3b7668: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b766c:
    // 0x3b766c: 0x94440028  lhu         $a0, 0x28($v0)
    ctx->pc = 0x3b766cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_3b7670:
    // 0x3b7670: 0x94420026  lhu         $v0, 0x26($v0)
    ctx->pc = 0x3b7670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
label_3b7674:
    // 0x3b7674: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b7678:
    if (ctx->pc == 0x3B7678u) {
        ctx->pc = 0x3B7678u;
            // 0x3b7678: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B767Cu;
        goto label_3b767c;
    }
    ctx->pc = 0x3B7674u;
    {
        const bool branch_taken_0x3b7674 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B7678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7674u;
            // 0x3b7678: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7674) {
            ctx->pc = 0x3B7688u;
            goto label_3b7688;
        }
    }
    ctx->pc = 0x3B767Cu;
label_3b767c:
    // 0x3b767c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b767cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7680:
    // 0x3b7680: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b7684:
    if (ctx->pc == 0x3B7684u) {
        ctx->pc = 0x3B7684u;
            // 0x3b7684: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B7688u;
        goto label_3b7688;
    }
    ctx->pc = 0x3B7680u;
    {
        const bool branch_taken_0x3b7680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7680u;
            // 0x3b7684: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7680) {
            ctx->pc = 0x3B76A4u;
            goto label_3b76a4;
        }
    }
    ctx->pc = 0x3B7688u;
label_3b7688:
    // 0x3b7688: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b7688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b768c:
    // 0x3b768c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b7690:
    // 0x3b7690: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b7690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b7694:
    // 0x3b7694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7698:
    // 0x3b7698: 0x0  nop
    ctx->pc = 0x3b7698u;
    // NOP
label_3b769c:
    // 0x3b769c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b769cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b76a0:
    // 0x3b76a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b76a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b76a4:
    // 0x3b76a4: 0x46150582  mul.s       $f22, $f0, $f21
    ctx->pc = 0x3b76a4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3b76a8:
    // 0x3b76a8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3b76ac:
    if (ctx->pc == 0x3B76ACu) {
        ctx->pc = 0x3B76ACu;
            // 0x3b76ac: 0xe7b600e8  swc1        $f22, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->pc = 0x3B76B0u;
        goto label_3b76b0;
    }
    ctx->pc = 0x3B76A8u;
    {
        const bool branch_taken_0x3b76a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3B76ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B76A8u;
            // 0x3b76ac: 0xe7b600e8  swc1        $f22, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b76a8) {
            ctx->pc = 0x3B76BCu;
            goto label_3b76bc;
        }
    }
    ctx->pc = 0x3B76B0u;
label_3b76b0:
    // 0x3b76b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b76b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b76b4:
    // 0x3b76b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b76b8:
    if (ctx->pc == 0x3B76B8u) {
        ctx->pc = 0x3B76B8u;
            // 0x3b76b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B76BCu;
        goto label_3b76bc;
    }
    ctx->pc = 0x3B76B4u;
    {
        const bool branch_taken_0x3b76b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B76B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B76B4u;
            // 0x3b76b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b76b4) {
            ctx->pc = 0x3B76D8u;
            goto label_3b76d8;
        }
    }
    ctx->pc = 0x3B76BCu;
label_3b76bc:
    // 0x3b76bc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3b76bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3b76c0:
    // 0x3b76c0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b76c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b76c4:
    // 0x3b76c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b76c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b76c8:
    // 0x3b76c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b76c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b76cc:
    // 0x3b76cc: 0x0  nop
    ctx->pc = 0x3b76ccu;
    // NOP
label_3b76d0:
    // 0x3b76d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b76d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b76d4:
    // 0x3b76d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b76d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b76d8:
    // 0x3b76d8: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x3b76d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3b76dc:
    // 0x3b76dc: 0xe7b400ec  swc1        $f20, 0xEC($sp)
    ctx->pc = 0x3b76dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_3b76e0:
    // 0x3b76e0: 0x92220041  lbu         $v0, 0x41($s1)
    ctx->pc = 0x3b76e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
label_3b76e4:
    // 0x3b76e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3b76e8:
    if (ctx->pc == 0x3B76E8u) {
        ctx->pc = 0x3B76ECu;
        goto label_3b76ec;
    }
    ctx->pc = 0x3B76E4u;
    {
        const bool branch_taken_0x3b76e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b76e4) {
            ctx->pc = 0x3B7748u;
            goto label_3b7748;
        }
    }
    ctx->pc = 0x3B76ECu;
label_3b76ec:
    // 0x3b76ec: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x3b76ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_3b76f0:
    // 0x3b76f0: 0x27a400f4  addiu       $a0, $sp, 0xF4
    ctx->pc = 0x3b76f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_3b76f4:
    // 0x3b76f4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3b76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3b76f8:
    // 0x3b76f8: 0x27a600fe  addiu       $a2, $sp, 0xFE
    ctx->pc = 0x3b76f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 254));
label_3b76fc:
    // 0x3b76fc: 0xc0ee610  jal         func_3B9840
label_3b7700:
    if (ctx->pc == 0x3B7700u) {
        ctx->pc = 0x3B7700u;
            // 0x3b7700: 0xa7a200fe  sh          $v0, 0xFE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 254), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3B7704u;
        goto label_3b7704;
    }
    ctx->pc = 0x3B76FCu;
    SET_GPR_U32(ctx, 31, 0x3B7704u);
    ctx->pc = 0x3B7700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B76FCu;
            // 0x3b7700: 0xa7a200fe  sh          $v0, 0xFE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 254), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9840u;
    if (runtime->hasFunction(0x3B9840u)) {
        auto targetFn = runtime->lookupFunction(0x3B9840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B7704u; }
        if (ctx->pc != 0x3B7704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9840_0x3b9840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B7704u; }
        if (ctx->pc != 0x3B7704u) { return; }
    }
    ctx->pc = 0x3B7704u;
label_3b7704:
    // 0x3b7704: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x3b7704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_3b7708:
    // 0x3b7708: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3b7708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3b770c:
    // 0x3b770c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_3b7710:
    if (ctx->pc == 0x3B7710u) {
        ctx->pc = 0x3B7710u;
            // 0x3b7710: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x3B7714u;
        goto label_3b7714;
    }
    ctx->pc = 0x3B770Cu;
    {
        const bool branch_taken_0x3b770c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b770c) {
            ctx->pc = 0x3B7710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B770Cu;
            // 0x3b7710: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7718u;
            goto label_3b7718;
        }
    }
    ctx->pc = 0x3B7714u;
label_3b7714:
    // 0x3b7714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b7714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7718:
    // 0x3b7718: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3b771c:
    if (ctx->pc == 0x3B771Cu) {
        ctx->pc = 0x3B771Cu;
            // 0x3b771c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3B7720u;
        goto label_3b7720;
    }
    ctx->pc = 0x3B7718u;
    {
        const bool branch_taken_0x3b7718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7718) {
            ctx->pc = 0x3B771Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7718u;
            // 0x3b771c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7728u;
            goto label_3b7728;
        }
    }
    ctx->pc = 0x3B7720u;
label_3b7720:
    // 0x3b7720: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b7724:
    if (ctx->pc == 0x3B7724u) {
        ctx->pc = 0x3B7724u;
            // 0x3b7724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7728u;
        goto label_3b7728;
    }
    ctx->pc = 0x3B7720u;
    {
        const bool branch_taken_0x3b7720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7720u;
            // 0x3b7724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7720) {
            ctx->pc = 0x3B7738u;
            goto label_3b7738;
        }
    }
    ctx->pc = 0x3B7728u;
label_3b7728:
    // 0x3b7728: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b7728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b772c:
    // 0x3b772c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3b772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b7730:
    // 0x3b7730: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3b7730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b7734:
    // 0x3b7734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b7734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b7738:
    // 0x3b7738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b7738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b773c:
    // 0x3b773c: 0x0  nop
    ctx->pc = 0x3b773cu;
    // NOP
label_3b7740:
    // 0x3b7740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b7740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b7744:
    // 0x3b7744: 0x4600ad82  mul.s       $f22, $f21, $f0
    ctx->pc = 0x3b7744u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3b7748:
    // 0x3b7748: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3b7748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b774c:
    // 0x3b774c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x3b774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_3b7750:
    // 0x3b7750: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b7750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b7754:
    // 0x3b7754: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b7754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3b7758:
    // 0x3b7758: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b7758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b775c:
    // 0x3b775c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b775cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7760:
    // 0x3b7760: 0x0  nop
    ctx->pc = 0x3b7760u;
    // NOP
label_3b7764:
    // 0x3b7764: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7768:
    // 0x3b7768: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3b776c:
    if (ctx->pc == 0x3B776Cu) {
        ctx->pc = 0x3B776Cu;
            // 0x3b776c: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x3B7770u;
        goto label_3b7770;
    }
    ctx->pc = 0x3B7768u;
    {
        const bool branch_taken_0x3b7768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7768u;
            // 0x3b776c: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7768) {
            ctx->pc = 0x3B7780u;
            goto label_3b7780;
        }
    }
    ctx->pc = 0x3B7770u;
label_3b7770:
    // 0x3b7770: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b7774:
    // 0x3b7774: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b7774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b7778:
    // 0x3b7778: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b777c:
    if (ctx->pc == 0x3B777Cu) {
        ctx->pc = 0x3B777Cu;
            // 0x3b777c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B7780u;
        goto label_3b7780;
    }
    ctx->pc = 0x3B7778u;
    {
        const bool branch_taken_0x3b7778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7778u;
            // 0x3b777c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7778) {
            ctx->pc = 0x3B779Cu;
            goto label_3b779c;
        }
    }
    ctx->pc = 0x3B7780u;
label_3b7780:
    // 0x3b7780: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b7780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b7784:
    // 0x3b7784: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b7784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3b7788:
    // 0x3b7788: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b778c:
    // 0x3b778c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b778cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b7790:
    // 0x3b7790: 0x0  nop
    ctx->pc = 0x3b7790u;
    // NOP
label_3b7794:
    // 0x3b7794: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b7794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b7798:
    // 0x3b7798: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3b7798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b779c:
    // 0x3b779c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b779cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b77a0:
    // 0x3b77a0: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3b77a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3b77a4:
    // 0x3b77a4: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x3b77a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3b77a8:
    // 0x3b77a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3b77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b77ac:
    // 0x3b77ac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b77acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3b77b0:
    // 0x3b77b0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b77b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b77b4:
    // 0x3b77b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b77b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b77b8:
    // 0x3b77b8: 0x0  nop
    ctx->pc = 0x3b77b8u;
    // NOP
label_3b77bc:
    // 0x3b77bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b77bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b77c0:
    // 0x3b77c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b77c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b77c4:
    // 0x3b77c4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3b77c8:
    if (ctx->pc == 0x3B77C8u) {
        ctx->pc = 0x3B77C8u;
            // 0x3b77c8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3B77CCu;
        goto label_3b77cc;
    }
    ctx->pc = 0x3B77C4u;
    {
        const bool branch_taken_0x3b77c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b77c4) {
            ctx->pc = 0x3B77C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B77C4u;
            // 0x3b77c8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B77DCu;
            goto label_3b77dc;
        }
    }
    ctx->pc = 0x3B77CCu;
label_3b77cc:
    // 0x3b77cc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b77ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b77d0:
    // 0x3b77d0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b77d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b77d4:
    // 0x3b77d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b77d8:
    if (ctx->pc == 0x3B77D8u) {
        ctx->pc = 0x3B77D8u;
            // 0x3b77d8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B77DCu;
        goto label_3b77dc;
    }
    ctx->pc = 0x3B77D4u;
    {
        const bool branch_taken_0x3b77d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B77D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B77D4u;
            // 0x3b77d8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b77d4) {
            ctx->pc = 0x3B77F4u;
            goto label_3b77f4;
        }
    }
    ctx->pc = 0x3B77DCu;
label_3b77dc:
    // 0x3b77dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3b77e0:
    // 0x3b77e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b77e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b77e4:
    // 0x3b77e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b77e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b77e8:
    // 0x3b77e8: 0x0  nop
    ctx->pc = 0x3b77e8u;
    // NOP
label_3b77ec:
    // 0x3b77ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b77ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b77f0:
    // 0x3b77f0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3b77f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b77f4:
    // 0x3b77f4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b77f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b77f8:
    // 0x3b77f8: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3b77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3b77fc:
    // 0x3b77fc: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x3b77fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_3b7800:
    // 0x3b7800: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3b7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7804:
    // 0x3b7804: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b7804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3b7808:
    // 0x3b7808: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b7808u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b780c:
    // 0x3b780c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b780cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7810:
    // 0x3b7810: 0x0  nop
    ctx->pc = 0x3b7810u;
    // NOP
label_3b7814:
    // 0x3b7814: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b7814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b7818:
    // 0x3b7818: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b781c:
    // 0x3b781c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3b7820:
    if (ctx->pc == 0x3B7820u) {
        ctx->pc = 0x3B7820u;
            // 0x3b7820: 0xc53025  or          $a2, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->pc = 0x3B7824u;
        goto label_3b7824;
    }
    ctx->pc = 0x3B781Cu;
    {
        const bool branch_taken_0x3b781c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B7820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B781Cu;
            // 0x3b7820: 0xc53025  or          $a2, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b781c) {
            ctx->pc = 0x3B7834u;
            goto label_3b7834;
        }
    }
    ctx->pc = 0x3B7824u;
label_3b7824:
    // 0x3b7824: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b7828:
    // 0x3b7828: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b7828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b782c:
    // 0x3b782c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b7830:
    if (ctx->pc == 0x3B7830u) {
        ctx->pc = 0x3B7830u;
            // 0x3b7830: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B7834u;
        goto label_3b7834;
    }
    ctx->pc = 0x3B782Cu;
    {
        const bool branch_taken_0x3b782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B782Cu;
            // 0x3b7830: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b782c) {
            ctx->pc = 0x3B7850u;
            goto label_3b7850;
        }
    }
    ctx->pc = 0x3B7834u;
label_3b7834:
    // 0x3b7834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b7834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b7838:
    // 0x3b7838: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b7838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3b783c:
    // 0x3b783c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b783cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b7840:
    // 0x3b7840: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3b7840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b7844:
    // 0x3b7844: 0x0  nop
    ctx->pc = 0x3b7844u;
    // NOP
label_3b7848:
    // 0x3b7848: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b7848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b784c:
    // 0x3b784c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3b784cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b7850:
    // 0x3b7850: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b7850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b7854:
    // 0x3b7854: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3b7854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3b7858:
    // 0x3b7858: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3b7858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3b785c:
    // 0x3b785c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3b785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7860:
    // 0x3b7860: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b7860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3b7864:
    // 0x3b7864: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b7864u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b7868:
    // 0x3b7868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b786c:
    // 0x3b786c: 0x0  nop
    ctx->pc = 0x3b786cu;
    // NOP
label_3b7870:
    // 0x3b7870: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b7870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b7874:
    // 0x3b7874: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7878:
    // 0x3b7878: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3b787c:
    if (ctx->pc == 0x3B787Cu) {
        ctx->pc = 0x3B787Cu;
            // 0x3b787c: 0xa63025  or          $a2, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->pc = 0x3B7880u;
        goto label_3b7880;
    }
    ctx->pc = 0x3B7878u;
    {
        const bool branch_taken_0x3b7878 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B787Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7878u;
            // 0x3b787c: 0xa63025  or          $a2, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7878) {
            ctx->pc = 0x3B7890u;
            goto label_3b7890;
        }
    }
    ctx->pc = 0x3B7880u;
label_3b7880:
    // 0x3b7880: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b7884:
    // 0x3b7884: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b7884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b7888:
    // 0x3b7888: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b788c:
    if (ctx->pc == 0x3B788Cu) {
        ctx->pc = 0x3B788Cu;
            // 0x3b788c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B7890u;
        goto label_3b7890;
    }
    ctx->pc = 0x3B7888u;
    {
        const bool branch_taken_0x3b7888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7888u;
            // 0x3b788c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7888) {
            ctx->pc = 0x3B78ACu;
            goto label_3b78ac;
        }
    }
    ctx->pc = 0x3B7890u;
label_3b7890:
    // 0x3b7890: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b7890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b7894:
    // 0x3b7894: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b7894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3b7898:
    // 0x3b7898: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b7898u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b789c:
    // 0x3b789c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b789cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b78a0:
    // 0x3b78a0: 0x0  nop
    ctx->pc = 0x3b78a0u;
    // NOP
label_3b78a4:
    // 0x3b78a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b78a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b78a8:
    // 0x3b78a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b78a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b78ac:
    // 0x3b78ac: 0x96e50002  lhu         $a1, 0x2($s7)
    ctx->pc = 0x3b78acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_3b78b0:
    // 0x3b78b0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3b78b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b78b4:
    // 0x3b78b4: 0x46b825  or          $s7, $v0, $a2
    ctx->pc = 0x3b78b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_3b78b8:
    // 0x3b78b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b78bc:
    // 0x3b78bc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3b78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3b78c0:
    // 0x3b78c0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x3b78c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b78c4:
    // 0x3b78c4: 0x5020001b  beql        $at, $zero, . + 4 + (0x1B << 2)
label_3b78c8:
    if (ctx->pc == 0x3B78C8u) {
        ctx->pc = 0x3B78C8u;
            // 0x3b78c8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3B78CCu;
        goto label_3b78cc;
    }
    ctx->pc = 0x3B78C4u;
    {
        const bool branch_taken_0x3b78c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b78c4) {
            ctx->pc = 0x3B78C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B78C4u;
            // 0x3b78c8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7934u;
            goto label_3b7934;
        }
    }
    ctx->pc = 0x3B78CCu;
label_3b78cc:
    // 0x3b78cc: 0x94470022  lhu         $a3, 0x22($v0)
    ctx->pc = 0x3b78ccu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
label_3b78d0:
    // 0x3b78d0: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x3b78d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
label_3b78d4:
    // 0x3b78d4: 0x9444002a  lhu         $a0, 0x2A($v0)
    ctx->pc = 0x3b78d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_3b78d8:
    // 0x3b78d8: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x3b78d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b78dc:
    // 0x3b78dc: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x3b78dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_3b78e0:
    // 0x3b78e0: 0x0  nop
    ctx->pc = 0x3b78e0u;
    // NOP
label_3b78e4:
    // 0x3b78e4: 0x0  nop
    ctx->pc = 0x3b78e4u;
    // NOP
label_3b78e8:
    // 0x3b78e8: 0x9012  mflo        $s2
    ctx->pc = 0x3b78e8u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_3b78ec:
    // 0x3b78ec: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x3b78ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b78f0:
    // 0x3b78f0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3b78f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3b78f4:
    // 0x3b78f4: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x3b78f4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_3b78f8:
    // 0x3b78f8: 0x3012  mflo        $a2
    ctx->pc = 0x3b78f8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3b78fc:
    // 0x3b78fc: 0xe61818  mult        $v1, $a3, $a2
    ctx->pc = 0x3b78fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b7900:
    // 0x3b7900: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3b7900u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3b7904:
    // 0x3b7904: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b7904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b7908:
    // 0x3b7908: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x3b7908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_3b790c:
    // 0x3b790c: 0x9443002c  lhu         $v1, 0x2C($v0)
    ctx->pc = 0x3b790cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_3b7910:
    // 0x3b7910: 0x662018  mult        $a0, $v1, $a2
    ctx->pc = 0x3b7910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3b7914:
    // 0x3b7914: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x3b7914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_3b7918:
    // 0x3b7918: 0x94430026  lhu         $v1, 0x26($v0)
    ctx->pc = 0x3b7918u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
label_3b791c:
    // 0x3b791c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3b791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3b7920:
    // 0x3b7920: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3b7920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3b7924:
    // 0x3b7924: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x3b7924u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_3b7928:
    // 0x3b7928: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3b7928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b792c:
    // 0x3b792c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3b792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3b7930:
    // 0x3b7930: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3b7930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3b7934:
    // 0x3b7934: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x3b7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_3b7938:
    // 0x3b7938: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x3b7938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3b793c:
    // 0x3b793c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x3b793cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3b7940:
    // 0x3b7940: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b7940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b7944:
    // 0x3b7944: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3b7944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3b7948:
    // 0x3b7948: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x3b7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_3b794c:
    // 0x3b794c: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x3b794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3b7950:
    // 0x3b7950: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3b7950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3b7954:
    // 0x3b7954: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3b7954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3b7958:
    // 0x3b7958: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x3b7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_3b795c:
    // 0x3b795c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3b795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b7960:
    // 0x3b7960: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3b7960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3b7964:
    // 0x3b7964: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x3b7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_3b7968:
    // 0x3b7968: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b7968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b796c:
    // 0x3b796c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3b796cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3b7970:
    // 0x3b7970: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b7970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7974:
    // 0x3b7974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b7974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b7978:
    // 0x3b7978: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3b7978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3b797c:
    // 0x3b797c: 0x320f809  jalr        $t9
label_3b7980:
    if (ctx->pc == 0x3B7980u) {
        ctx->pc = 0x3B7980u;
            // 0x3b7980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7984u;
        goto label_3b7984;
    }
    ctx->pc = 0x3B797Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7984u);
        ctx->pc = 0x3B7980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B797Cu;
            // 0x3b7980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7984u; }
            if (ctx->pc != 0x3B7984u) { return; }
        }
        }
    }
    ctx->pc = 0x3B7984u;
label_3b7984:
    // 0x3b7984: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x3b7984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7988:
    // 0x3b7988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b7988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b798c:
    // 0x3b798c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3b798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b7990:
    // 0x3b7990: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x3b7990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7994:
    // 0x3b7994: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3b7994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3b7998:
    // 0x3b7998: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x3b7998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_3b799c:
    // 0x3b799c: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x3b799cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[5];
label_3b79a0:
    // 0x3b79a0: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x3b79a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b79a4:
    // 0x3b79a4: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x3b79a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b79a8:
    // 0x3b79a8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x3b79a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b79ac:
    // 0x3b79ac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3b79acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b79b0:
    // 0x3b79b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b79b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b79b4:
    // 0x3b79b4: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x3b79b4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
label_3b79b8:
    // 0x3b79b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b79b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b79bc:
    // 0x3b79bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3b79bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b79c0:
    // 0x3b79c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b79c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b79c4:
    // 0x3b79c4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3b79c4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_3b79c8:
    // 0x3b79c8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3b79c8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_3b79cc:
    // 0x3b79cc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3b79ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b79d0:
    // 0x3b79d0: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x3b79d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b79d4:
    // 0x3b79d4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x3b79d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_3b79d8:
    // 0x3b79d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3b79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3b79dc:
    // 0x3b79dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b79dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b79e0:
    // 0x3b79e0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3b79e4:
    if (ctx->pc == 0x3B79E4u) {
        ctx->pc = 0x3B79E4u;
            // 0x3b79e4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x3B79E8u;
        goto label_3b79e8;
    }
    ctx->pc = 0x3B79E0u;
    {
        const bool branch_taken_0x3b79e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b79e0) {
            ctx->pc = 0x3B79E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B79E0u;
            // 0x3b79e4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B79F4u;
            goto label_3b79f4;
        }
    }
    ctx->pc = 0x3B79E8u;
label_3b79e8:
    // 0x3b79e8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3b79e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b79ec:
    // 0x3b79ec: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x3b79ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b79f0:
    // 0x3b79f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3b79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3b79f4:
    // 0x3b79f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b79f8:
    // 0x3b79f8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3b79f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3b79fc:
    // 0x3b79fc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3b7a00:
    if (ctx->pc == 0x3B7A00u) {
        ctx->pc = 0x3B7A00u;
            // 0x3b7a00: 0xc6820000  lwc1        $f2, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3B7A04u;
        goto label_3b7a04;
    }
    ctx->pc = 0x3B79FCu;
    {
        const bool branch_taken_0x3b79fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b79fc) {
            ctx->pc = 0x3B7A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B79FCu;
            // 0x3b7a00: 0xc6820000  lwc1        $f2, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7A18u;
            goto label_3b7a18;
        }
    }
    ctx->pc = 0x3B7A04u;
label_3b7a04:
    // 0x3b7a04: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x3b7a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7a08:
    // 0x3b7a08: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x3b7a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7a0c:
    // 0x3b7a0c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3b7a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b7a10:
    // 0x3b7a10: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x3b7a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_3b7a14:
    // 0x3b7a14: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x3b7a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7a18:
    // 0x3b7a18: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3b7a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7a1c:
    // 0x3b7a1c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3b7a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7a20:
    // 0x3b7a20: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x3b7a20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3b7a24:
    // 0x3b7a24: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x3b7a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_3b7a28:
    // 0x3b7a28: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3b7a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3b7a2c:
    // 0x3b7a2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b7a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7a30:
    // 0x3b7a30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b7a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b7a34:
    // 0x3b7a34: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3b7a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3b7a38:
    // 0x3b7a38: 0x320f809  jalr        $t9
label_3b7a3c:
    if (ctx->pc == 0x3B7A3Cu) {
        ctx->pc = 0x3B7A3Cu;
            // 0x3b7a3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A40u;
        goto label_3b7a40;
    }
    ctx->pc = 0x3B7A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7A40u);
        ctx->pc = 0x3B7A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7A38u;
            // 0x3b7a3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7A40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7A40u; }
            if (ctx->pc != 0x3B7A40u) { return; }
        }
        }
    }
    ctx->pc = 0x3B7A40u;
label_3b7a40:
    // 0x3b7a40: 0x8eb90048  lw          $t9, 0x48($s5)
    ctx->pc = 0x3b7a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3b7a44:
    // 0x3b7a44: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3b7a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a48:
    // 0x3b7a48: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b7a48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b7a4c:
    // 0x3b7a4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b7a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a50:
    // 0x3b7a50: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x3b7a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_3b7a54:
    // 0x3b7a54: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x3b7a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_3b7a58:
    // 0x3b7a58: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3b7a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3b7a5c:
    // 0x3b7a5c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x3b7a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3b7a60:
    // 0x3b7a60: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x3b7a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3b7a64:
    // 0x3b7a64: 0x320f809  jalr        $t9
label_3b7a68:
    if (ctx->pc == 0x3B7A68u) {
        ctx->pc = 0x3B7A68u;
            // 0x3b7a68: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A6Cu;
        goto label_3b7a6c;
    }
    ctx->pc = 0x3B7A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7A6Cu);
        ctx->pc = 0x3B7A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7A64u;
            // 0x3b7a68: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7A6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7A6Cu; }
            if (ctx->pc != 0x3B7A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B7A6Cu;
label_3b7a6c:
    // 0x3b7a6c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3b7a6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b7a70:
    // 0x3b7a70: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_3b7a74:
    if (ctx->pc == 0x3B7A74u) {
        ctx->pc = 0x3B7A78u;
        goto label_3b7a78;
    }
    ctx->pc = 0x3B7A70u;
    {
        const bool branch_taken_0x3b7a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7a70) {
            ctx->pc = 0x3B7AECu;
            goto label_3b7aec;
        }
    }
    ctx->pc = 0x3B7A78u;
label_3b7a78:
    // 0x3b7a78: 0x92a2002c  lbu         $v0, 0x2C($s5)
    ctx->pc = 0x3b7a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_3b7a7c:
    // 0x3b7a7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3b7a80:
    if (ctx->pc == 0x3B7A80u) {
        ctx->pc = 0x3B7A84u;
        goto label_3b7a84;
    }
    ctx->pc = 0x3B7A7Cu;
    {
        const bool branch_taken_0x3b7a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7a7c) {
            ctx->pc = 0x3B7AACu;
            goto label_3b7aac;
        }
    }
    ctx->pc = 0x3B7A84u;
label_3b7a84:
    // 0x3b7a84: 0x8eb90048  lw          $t9, 0x48($s5)
    ctx->pc = 0x3b7a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3b7a88:
    // 0x3b7a88: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3b7a88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a8c:
    // 0x3b7a8c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x3b7a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7a90:
    // 0x3b7a90: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x3b7a90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a94:
    // 0x3b7a94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b7a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a98:
    // 0x3b7a98: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x3b7a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_3b7a9c:
    // 0x3b7a9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3b7a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3b7aa0:
    // 0x3b7aa0: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x3b7aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_3b7aa4:
    // 0x3b7aa4: 0x320f809  jalr        $t9
label_3b7aa8:
    if (ctx->pc == 0x3B7AA8u) {
        ctx->pc = 0x3B7AA8u;
            // 0x3b7aa8: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3B7AACu;
        goto label_3b7aac;
    }
    ctx->pc = 0x3B7AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7AACu);
        ctx->pc = 0x3B7AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7AA4u;
            // 0x3b7aa8: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7AACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7AACu; }
            if (ctx->pc != 0x3B7AACu) { return; }
        }
        }
    }
    ctx->pc = 0x3B7AACu;
label_3b7aac:
    // 0x3b7aac: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_3b7ab0:
    if (ctx->pc == 0x3B7AB0u) {
        ctx->pc = 0x3B7AB4u;
        goto label_3b7ab4;
    }
    ctx->pc = 0x3B7AACu;
    {
        const bool branch_taken_0x3b7aac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7aac) {
            ctx->pc = 0x3B7B04u;
            goto label_3b7b04;
        }
    }
    ctx->pc = 0x3B7AB4u;
label_3b7ab4:
    // 0x3b7ab4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x3b7ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7ab8:
    // 0x3b7ab8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3b7ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3b7abc:
    // 0x3b7abc: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x3b7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7ac0:
    // 0x3b7ac0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x3b7ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3b7ac4:
    // 0x3b7ac4: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x3b7ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7ac8:
    // 0x3b7ac8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3b7ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b7acc:
    // 0x3b7acc: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x3b7accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7ad0:
    // 0x3b7ad0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x3b7ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b7ad4:
    // 0x3b7ad4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3b7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7ad8:
    // 0x3b7ad8: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x3b7ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7adc:
    // 0x3b7adc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_3b7ae0:
    if (ctx->pc == 0x3B7AE0u) {
        ctx->pc = 0x3B7AE4u;
        goto label_3b7ae4;
    }
    ctx->pc = 0x3B7ADCu;
    {
        const bool branch_taken_0x3b7adc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7adc) {
            ctx->pc = 0x3B7B04u;
            goto label_3b7b04;
        }
    }
    ctx->pc = 0x3B7AE4u;
label_3b7ae4:
    // 0x3b7ae4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b7ae8:
    if (ctx->pc == 0x3B7AE8u) {
        ctx->pc = 0x3B7AE8u;
            // 0x3b7ae8: 0xe6760008  swc1        $f22, 0x8($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x3B7AECu;
        goto label_3b7aec;
    }
    ctx->pc = 0x3B7AE4u;
    {
        const bool branch_taken_0x3b7ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7AE4u;
            // 0x3b7ae8: 0xe6760008  swc1        $f22, 0x8($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ae4) {
            ctx->pc = 0x3B7B04u;
            goto label_3b7b04;
        }
    }
    ctx->pc = 0x3B7AECu;
label_3b7aec:
    // 0x3b7aec: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_3b7af0:
    if (ctx->pc == 0x3B7AF0u) {
        ctx->pc = 0x3B7AF4u;
        goto label_3b7af4;
    }
    ctx->pc = 0x3B7AECu;
    {
        const bool branch_taken_0x3b7aec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7aec) {
            ctx->pc = 0x3B7B04u;
            goto label_3b7b04;
        }
    }
    ctx->pc = 0x3B7AF4u;
label_3b7af4:
    // 0x3b7af4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3b7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3b7af8:
    // 0x3b7af8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3b7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3b7afc:
    // 0x3b7afc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3b7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3b7b00:
    // 0x3b7b00: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3b7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3b7b04:
    // 0x3b7b04: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
label_3b7b08:
    if (ctx->pc == 0x3B7B08u) {
        ctx->pc = 0x3B7B08u;
            // 0x3b7b08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7B0Cu;
        goto label_3b7b0c;
    }
    ctx->pc = 0x3B7B04u;
    {
        const bool branch_taken_0x3b7b04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b04) {
            ctx->pc = 0x3B7B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7B04u;
            // 0x3b7b08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7B18u;
            goto label_3b7b18;
        }
    }
    ctx->pc = 0x3B7B0Cu;
label_3b7b0c:
    // 0x3b7b0c: 0xe6d40004  swc1        $f20, 0x4($s6)
    ctx->pc = 0x3b7b0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_3b7b10:
    // 0x3b7b10: 0xe6d60000  swc1        $f22, 0x0($s6)
    ctx->pc = 0x3b7b10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_3b7b14:
    // 0x3b7b14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b7b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b7b18:
    // 0x3b7b18: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3b7b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3b7b1c:
    // 0x3b7b1c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3b7b1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b7b20:
    // 0x3b7b20: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3b7b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b7b24:
    // 0x3b7b24: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3b7b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b7b28:
    // 0x3b7b28: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b7b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b7b2c:
    // 0x3b7b2c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3b7b2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b7b30:
    // 0x3b7b30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b7b34:
    // 0x3b7b34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b7b34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b7b38:
    // 0x3b7b38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b7b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b7b3c:
    // 0x3b7b3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b7b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b7b40:
    // 0x3b7b40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b7b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b7b44:
    // 0x3b7b44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b7b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b7b48:
    // 0x3b7b48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b7b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7b4c:
    // 0x3b7b4c: 0x3e00008  jr          $ra
label_3b7b50:
    if (ctx->pc == 0x3B7B50u) {
        ctx->pc = 0x3B7B50u;
            // 0x3b7b50: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3B7B54u;
        goto label_3b7b54;
    }
    ctx->pc = 0x3B7B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7B4Cu;
            // 0x3b7b50: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B7B54u;
label_3b7b54:
    // 0x3b7b54: 0x0  nop
    ctx->pc = 0x3b7b54u;
    // NOP
label_3b7b58:
    // 0x3b7b58: 0x0  nop
    ctx->pc = 0x3b7b58u;
    // NOP
label_3b7b5c:
    // 0x3b7b5c: 0x0  nop
    ctx->pc = 0x3b7b5cu;
    // NOP
label_3b7b60:
    // 0x3b7b60: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3b7b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3b7b64:
    // 0x3b7b64: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3b7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3b7b68:
    // 0x3b7b68: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3b7b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3b7b6c:
    // 0x3b7b6c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3b7b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_3b7b70:
    // 0x3b7b70: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3b7b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3b7b74:
    // 0x3b7b74: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3b7b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3b7b78:
    // 0x3b7b78: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3b7b78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7b7c:
    // 0x3b7b7c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3b7b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3b7b80:
    // 0x3b7b80: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3b7b80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b7b84:
    // 0x3b7b84: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3b7b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3b7b88:
    // 0x3b7b88: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x3b7b88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3b7b8c:
    // 0x3b7b8c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3b7b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3b7b90:
    // 0x3b7b90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b7b90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b7b94:
    // 0x3b7b94: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b7b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3b7b98:
    // 0x3b7b98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b7b98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b7b9c:
    // 0x3b7b9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b7ba0:
    // 0x3b7ba0: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3b7ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b7ba4:
    // 0x3b7ba4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b7ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b7ba8:
    // 0x3b7ba8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3b7ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3b7bac:
    // 0x3b7bac: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3b7bacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b7bb0:
    // 0x3b7bb0: 0xafa700ec  sw          $a3, 0xEC($sp)
    ctx->pc = 0x3b7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 7));
label_3b7bb4:
    // 0x3b7bb4: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x3b7bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3b7bb8:
    // 0x3b7bb8: 0x8c43f558  lw          $v1, -0xAA8($v0)
    ctx->pc = 0x3b7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964568)));
label_3b7bbc:
    // 0x3b7bbc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3b7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b7bc0:
    // 0x3b7bc0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3b7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3b7bc4:
    // 0x3b7bc4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3b7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b7bc8:
    // 0x3b7bc8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3b7bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b7bcc:
    // 0x3b7bcc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3b7bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7bd0:
    // 0x3b7bd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7bd4:
    // 0x3b7bd4: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3b7bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7bd8:
    // 0x3b7bd8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x3b7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7bdc:
    // 0x3b7bdc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x3b7bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3b7be0:
    // 0x3b7be0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3b7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b7be4:
    // 0x3b7be4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3b7be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7be8:
    // 0x3b7be8: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x3b7be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_3b7bec:
    // 0x3b7bec: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x3b7becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3b7bf0:
    // 0x3b7bf0: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x3b7bf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_3b7bf4:
    // 0x3b7bf4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x3b7bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_3b7bf8:
    // 0x3b7bf8: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x3b7bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7bfc:
    // 0x3b7bfc: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x3b7bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7c00:
    // 0x3b7c00: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x3b7c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7c04:
    // 0x3b7c04: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x3b7c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3b7c08:
    // 0x3b7c08: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x3b7c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_3b7c0c:
    // 0x3b7c0c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x3b7c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3b7c10:
    // 0x3b7c10: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3b7c10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3b7c14:
    // 0x3b7c14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b7c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3b7c18:
    // 0x3b7c18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b7c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b7c1c:
    // 0x3b7c1c: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
label_3b7c20:
    if (ctx->pc == 0x3B7C20u) {
        ctx->pc = 0x3B7C20u;
            // 0x3b7c20: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x3B7C24u;
        goto label_3b7c24;
    }
    ctx->pc = 0x3B7C1Cu;
    {
        const bool branch_taken_0x3b7c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7C1Cu;
            // 0x3b7c20: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c1c) {
            ctx->pc = 0x3B7EA8u;
            goto label_3b7ea8;
        }
    }
    ctx->pc = 0x3B7C24u;
label_3b7c24:
    // 0x3b7c24: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x3b7c24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3b7c28:
    // 0x3b7c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b7c2c:
    // 0x3b7c2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3b7c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b7c30:
    // 0x3b7c30: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3b7c30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_3b7c34:
    // 0x3b7c34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b7c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b7c38:
    // 0x3b7c38: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_3b7c3c:
    if (ctx->pc == 0x3B7C3Cu) {
        ctx->pc = 0x3B7C3Cu;
            // 0x3b7c3c: 0xc4c20000  lwc1        $f2, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3B7C40u;
        goto label_3b7c40;
    }
    ctx->pc = 0x3B7C38u;
    {
        const bool branch_taken_0x3b7c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7c38) {
            ctx->pc = 0x3B7C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7C38u;
            // 0x3b7c3c: 0xc4c20000  lwc1        $f2, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7C48u;
            goto label_3b7c48;
        }
    }
    ctx->pc = 0x3B7C40u;
label_3b7c40:
    // 0x3b7c40: 0x10000097  b           . + 4 + (0x97 << 2)
label_3b7c44:
    if (ctx->pc == 0x3B7C44u) {
        ctx->pc = 0x3B7C44u;
            // 0x3b7c44: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x3B7C48u;
        goto label_3b7c48;
    }
    ctx->pc = 0x3B7C40u;
    {
        const bool branch_taken_0x3b7c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7C40u;
            // 0x3b7c44: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c40) {
            ctx->pc = 0x3B7EA0u;
            goto label_3b7ea0;
        }
    }
    ctx->pc = 0x3B7C48u;
label_3b7c48:
    // 0x3b7c48: 0x309e00ff  andi        $fp, $a0, 0xFF
    ctx->pc = 0x3b7c48u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3b7c4c:
    // 0x3b7c4c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3b7c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7c50:
    // 0x3b7c50: 0x1e2880  sll         $a1, $fp, 2
    ctx->pc = 0x3b7c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_3b7c54:
    // 0x3b7c54: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3b7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7c58:
    // 0x3b7c58: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x3b7c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3b7c5c:
    // 0x3b7c5c: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x3b7c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3b7c60:
    // 0x3b7c60: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x3b7c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3b7c64:
    // 0x3b7c64: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3b7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3b7c68:
    // 0x3b7c68: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x3b7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3b7c6c:
    // 0x3b7c6c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3b7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3b7c70:
    // 0x3b7c70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b7c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b7c74:
    // 0x3b7c74: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3b7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3b7c78:
    // 0x3b7c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b7c7c:
    // 0x3b7c7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b7c80:
    // 0x3b7c80: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3b7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3b7c84:
    // 0x3b7c84: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x3b7c84u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b7c88:
    // 0x3b7c88: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b7c8c:
    // 0x3b7c8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b7c90:
    // 0x3b7c90: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x3b7c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_3b7c94:
    // 0x3b7c94: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b7c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b7c98:
    // 0x3b7c98: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3b7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3b7c9c:
    // 0x3b7c9c: 0xc049820  jal         func_126080
label_3b7ca0:
    if (ctx->pc == 0x3B7CA0u) {
        ctx->pc = 0x3B7CA0u;
            // 0x3b7ca0: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3B7CA4u;
        goto label_3b7ca4;
    }
    ctx->pc = 0x3B7C9Cu;
    SET_GPR_U32(ctx, 31, 0x3B7CA4u);
    ctx->pc = 0x3B7CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7C9Cu;
            // 0x3b7ca0: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B7CA4u; }
        if (ctx->pc != 0x3B7CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B7CA4u; }
        if (ctx->pc != 0x3B7CA4u) { return; }
    }
    ctx->pc = 0x3B7CA4u;
label_3b7ca4:
    // 0x3b7ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b7ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7ca8:
    // 0x3b7ca8: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x3b7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_3b7cac:
    // 0x3b7cac: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3b7cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3b7cb0:
    // 0x3b7cb0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x3b7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3b7cb4:
    // 0x3b7cb4: 0xc049820  jal         func_126080
label_3b7cb8:
    if (ctx->pc == 0x3B7CB8u) {
        ctx->pc = 0x3B7CB8u;
            // 0x3b7cb8: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3B7CBCu;
        goto label_3b7cbc;
    }
    ctx->pc = 0x3B7CB4u;
    SET_GPR_U32(ctx, 31, 0x3B7CBCu);
    ctx->pc = 0x3B7CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7CB4u;
            // 0x3b7cb8: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B7CBCu; }
        if (ctx->pc != 0x3B7CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B7CBCu; }
        if (ctx->pc != 0x3B7CBCu) { return; }
    }
    ctx->pc = 0x3B7CBCu;
label_3b7cbc:
    // 0x3b7cbc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3b7cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3b7cc0:
    // 0x3b7cc0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3b7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b7cc4:
    // 0x3b7cc4: 0x9442002e  lhu         $v0, 0x2E($v0)
    ctx->pc = 0x3b7cc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
label_3b7cc8:
    // 0x3b7cc8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b7ccc:
    if (ctx->pc == 0x3B7CCCu) {
        ctx->pc = 0x3B7CCCu;
            // 0x3b7ccc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B7CD0u;
        goto label_3b7cd0;
    }
    ctx->pc = 0x3B7CC8u;
    {
        const bool branch_taken_0x3b7cc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b7cc8) {
            ctx->pc = 0x3B7CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7CC8u;
            // 0x3b7ccc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7CDCu;
            goto label_3b7cdc;
        }
    }
    ctx->pc = 0x3B7CD0u;
label_3b7cd0:
    // 0x3b7cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b7cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7cd4:
    // 0x3b7cd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b7cd8:
    if (ctx->pc == 0x3B7CD8u) {
        ctx->pc = 0x3B7CD8u;
            // 0x3b7cd8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B7CDCu;
        goto label_3b7cdc;
    }
    ctx->pc = 0x3B7CD4u;
    {
        const bool branch_taken_0x3b7cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7CD4u;
            // 0x3b7cd8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cd4) {
            ctx->pc = 0x3B7CF4u;
            goto label_3b7cf4;
        }
    }
    ctx->pc = 0x3B7CDCu;
label_3b7cdc:
    // 0x3b7cdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b7cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b7ce0:
    // 0x3b7ce0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b7ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b7ce4:
    // 0x3b7ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7ce8:
    // 0x3b7ce8: 0x0  nop
    ctx->pc = 0x3b7ce8u;
    // NOP
label_3b7cec:
    // 0x3b7cec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b7cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b7cf0:
    // 0x3b7cf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b7cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b7cf4:
    // 0x3b7cf4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3b7cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3b7cf8:
    // 0x3b7cf8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3b7cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7cfc:
    // 0x3b7cfc: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x3b7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3b7d00:
    // 0x3b7d00: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b7d04:
    if (ctx->pc == 0x3B7D04u) {
        ctx->pc = 0x3B7D04u;
            // 0x3b7d04: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3B7D08u;
        goto label_3b7d08;
    }
    ctx->pc = 0x3B7D00u;
    {
        const bool branch_taken_0x3b7d00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B7D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7D00u;
            // 0x3b7d04: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d00) {
            ctx->pc = 0x3B7D14u;
            goto label_3b7d14;
        }
    }
    ctx->pc = 0x3B7D08u;
label_3b7d08:
    // 0x3b7d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b7d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7d0c:
    // 0x3b7d0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b7d10:
    if (ctx->pc == 0x3B7D10u) {
        ctx->pc = 0x3B7D10u;
            // 0x3b7d10: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B7D14u;
        goto label_3b7d14;
    }
    ctx->pc = 0x3B7D0Cu;
    {
        const bool branch_taken_0x3b7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7D0Cu;
            // 0x3b7d10: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d0c) {
            ctx->pc = 0x3B7D30u;
            goto label_3b7d30;
        }
    }
    ctx->pc = 0x3B7D14u;
label_3b7d14:
    // 0x3b7d14: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b7d18:
    // 0x3b7d18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b7d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b7d1c:
    // 0x3b7d1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b7d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b7d20:
    // 0x3b7d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7d24:
    // 0x3b7d24: 0x0  nop
    ctx->pc = 0x3b7d24u;
    // NOP
label_3b7d28:
    // 0x3b7d28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b7d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b7d2c:
    // 0x3b7d2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b7d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b7d30:
    // 0x3b7d30: 0x0  nop
    ctx->pc = 0x3b7d30u;
    // NOP
label_3b7d34:
    // 0x3b7d34: 0x0  nop
    ctx->pc = 0x3b7d34u;
    // NOP
label_3b7d38:
    // 0x3b7d38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b7d38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b7d3c:
    // 0x3b7d3c: 0x8e990048  lw          $t9, 0x48($s4)
    ctx->pc = 0x3b7d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_3b7d40:
    // 0x3b7d40: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x3b7d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3b7d44:
    // 0x3b7d44: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3b7d44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b7d48:
    // 0x3b7d48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b7d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b7d4c:
    // 0x3b7d4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b7d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7d50:
    // 0x3b7d50: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3b7d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3b7d54:
    // 0x3b7d54: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x3b7d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3b7d58:
    // 0x3b7d58: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3b7d58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b7d5c:
    // 0x3b7d5c: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x3b7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3b7d60:
    // 0x3b7d60: 0x320f809  jalr        $t9
label_3b7d64:
    if (ctx->pc == 0x3B7D64u) {
        ctx->pc = 0x3B7D64u;
            // 0x3b7d64: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3B7D68u;
        goto label_3b7d68;
    }
    ctx->pc = 0x3B7D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7D68u);
        ctx->pc = 0x3B7D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7D60u;
            // 0x3b7d64: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7D68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7D68u; }
            if (ctx->pc != 0x3B7D68u) { return; }
        }
        }
    }
    ctx->pc = 0x3B7D68u;
label_3b7d68:
    // 0x3b7d68: 0x8e990048  lw          $t9, 0x48($s4)
    ctx->pc = 0x3b7d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_3b7d6c:
    // 0x3b7d6c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b7d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b7d70:
    // 0x3b7d70: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x3b7d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3b7d74:
    // 0x3b7d74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b7d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b7d78:
    // 0x3b7d78: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x3b7d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3b7d7c:
    // 0x3b7d7c: 0x27a80150  addiu       $t0, $sp, 0x150
    ctx->pc = 0x3b7d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3b7d80:
    // 0x3b7d80: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3b7d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3b7d84:
    // 0x3b7d84: 0x320f809  jalr        $t9
label_3b7d88:
    if (ctx->pc == 0x3B7D88u) {
        ctx->pc = 0x3B7D88u;
            // 0x3b7d88: 0x27a900f0  addiu       $t1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3B7D8Cu;
        goto label_3b7d8c;
    }
    ctx->pc = 0x3B7D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B7D8Cu);
        ctx->pc = 0x3B7D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7D84u;
            // 0x3b7d88: 0x27a900f0  addiu       $t1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B7D8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B7D8Cu; }
            if (ctx->pc != 0x3B7D8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B7D8Cu;
label_3b7d8c:
    // 0x3b7d8c: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x3b7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b7d90:
    // 0x3b7d90: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x3b7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7d94:
    // 0x3b7d94: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x3b7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7d98:
    // 0x3b7d98: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3b7d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b7d9c:
    // 0x3b7d9c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3b7d9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3b7da0:
    // 0x3b7da0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b7da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3b7da4:
    // 0x3b7da4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x3b7da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3b7da8:
    // 0x3b7da8: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x3b7da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7dac:
    // 0x3b7dac: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3b7dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7db0:
    // 0x3b7db0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b7db0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b7db4:
    // 0x3b7db4: 0xe7a1017c  swc1        $f1, 0x17C($sp)
    ctx->pc = 0x3b7db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_3b7db8:
    // 0x3b7db8: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x3b7db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7dbc:
    // 0x3b7dbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7dc0:
    // 0x3b7dc0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3b7dc4:
    if (ctx->pc == 0x3B7DC4u) {
        ctx->pc = 0x3B7DC4u;
            // 0x3b7dc4: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B7DC8u;
        goto label_3b7dc8;
    }
    ctx->pc = 0x3B7DC0u;
    {
        const bool branch_taken_0x3b7dc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B7DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7DC0u;
            // 0x3b7dc4: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7dc0) {
            ctx->pc = 0x3B7DD0u;
            goto label_3b7dd0;
        }
    }
    ctx->pc = 0x3B7DC8u;
label_3b7dc8:
    // 0x3b7dc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b7dcc:
    if (ctx->pc == 0x3B7DCCu) {
        ctx->pc = 0x3B7DCCu;
            // 0x3b7dcc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7DD0u;
        goto label_3b7dd0;
    }
    ctx->pc = 0x3B7DC8u;
    {
        const bool branch_taken_0x3b7dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7DC8u;
            // 0x3b7dcc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7dc8) {
            ctx->pc = 0x3B7DD4u;
            goto label_3b7dd4;
        }
    }
    ctx->pc = 0x3B7DD0u;
label_3b7dd0:
    // 0x3b7dd0: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x3b7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_3b7dd4:
    // 0x3b7dd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7dd8:
    // 0x3b7dd8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_3b7ddc:
    if (ctx->pc == 0x3B7DDCu) {
        ctx->pc = 0x3B7DDCu;
            // 0x3b7ddc: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->pc = 0x3B7DE0u;
        goto label_3b7de0;
    }
    ctx->pc = 0x3B7DD8u;
    {
        const bool branch_taken_0x3b7dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7DD8u;
            // 0x3b7ddc: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7dd8) {
            ctx->pc = 0x3B7E80u;
            goto label_3b7e80;
        }
    }
    ctx->pc = 0x3B7DE0u;
label_3b7de0:
    // 0x3b7de0: 0x52200028  beql        $s1, $zero, . + 4 + (0x28 << 2)
label_3b7de4:
    if (ctx->pc == 0x3B7DE4u) {
        ctx->pc = 0x3B7DE4u;
            // 0x3b7de4: 0xc7a00140  lwc1        $f0, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3B7DE8u;
        goto label_3b7de8;
    }
    ctx->pc = 0x3B7DE0u;
    {
        const bool branch_taken_0x3b7de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7de0) {
            ctx->pc = 0x3B7DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7DE0u;
            // 0x3b7de4: 0xc7a00140  lwc1        $f0, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7E84u;
            goto label_3b7e84;
        }
    }
    ctx->pc = 0x3B7DE8u;
label_3b7de8:
    // 0x3b7de8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3b7de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7dec:
    // 0x3b7dec: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3b7decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7df0:
    // 0x3b7df0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b7df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7df4:
    // 0x3b7df4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3b7df8:
    if (ctx->pc == 0x3B7DF8u) {
        ctx->pc = 0x3B7DF8u;
            // 0x3b7df8: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3B7DFCu;
        goto label_3b7dfc;
    }
    ctx->pc = 0x3B7DF4u;
    {
        const bool branch_taken_0x3b7df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7df4) {
            ctx->pc = 0x3B7DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7DF4u;
            // 0x3b7df8: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7E00u;
            goto label_3b7e00;
        }
    }
    ctx->pc = 0x3B7DFCu;
label_3b7dfc:
    // 0x3b7dfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b7dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b7e00:
    // 0x3b7e00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e04:
    // 0x3b7e04: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3b7e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3b7e08:
    // 0x3b7e08: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3b7e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7e0c:
    // 0x3b7e0c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3b7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e10:
    // 0x3b7e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b7e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7e14:
    // 0x3b7e14: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3b7e18:
    if (ctx->pc == 0x3B7E18u) {
        ctx->pc = 0x3B7E18u;
            // 0x3b7e18: 0x27a200f4  addiu       $v0, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->pc = 0x3B7E1Cu;
        goto label_3b7e1c;
    }
    ctx->pc = 0x3B7E14u;
    {
        const bool branch_taken_0x3b7e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7e14) {
            ctx->pc = 0x3B7E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7E14u;
            // 0x3b7e18: 0x27a200f4  addiu       $v0, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7E20u;
            goto label_3b7e20;
        }
    }
    ctx->pc = 0x3B7E1Cu;
label_3b7e1c:
    // 0x3b7e1c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x3b7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3b7e20:
    // 0x3b7e20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b7e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e24:
    // 0x3b7e24: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3b7e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3b7e28:
    // 0x3b7e28: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x3b7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7e2c:
    // 0x3b7e2c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3b7e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e30:
    // 0x3b7e30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b7e30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b7e34:
    // 0x3b7e34: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x3b7e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_3b7e38:
    // 0x3b7e38: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3b7e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e3c:
    // 0x3b7e3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7e40:
    // 0x3b7e40: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3b7e44:
    if (ctx->pc == 0x3B7E44u) {
        ctx->pc = 0x3B7E44u;
            // 0x3b7e44: 0x27a20178  addiu       $v0, $sp, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
        ctx->pc = 0x3B7E48u;
        goto label_3b7e48;
    }
    ctx->pc = 0x3B7E40u;
    {
        const bool branch_taken_0x3b7e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7e40) {
            ctx->pc = 0x3B7E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7E40u;
            // 0x3b7e44: 0x27a20178  addiu       $v0, $sp, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7E4Cu;
            goto label_3b7e4c;
        }
    }
    ctx->pc = 0x3B7E48u;
label_3b7e48:
    // 0x3b7e48: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x3b7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3b7e4c:
    // 0x3b7e4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b7e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e50:
    // 0x3b7e50: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3b7e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3b7e54:
    // 0x3b7e54: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x3b7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7e58:
    // 0x3b7e58: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3b7e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e5c:
    // 0x3b7e5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b7e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b7e60:
    // 0x3b7e60: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x3b7e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_3b7e64:
    // 0x3b7e64: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3b7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e68:
    // 0x3b7e68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b7e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7e6c:
    // 0x3b7e6c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3b7e70:
    if (ctx->pc == 0x3B7E70u) {
        ctx->pc = 0x3B7E70u;
            // 0x3b7e70: 0x27a20174  addiu       $v0, $sp, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
        ctx->pc = 0x3B7E74u;
        goto label_3b7e74;
    }
    ctx->pc = 0x3B7E6Cu;
    {
        const bool branch_taken_0x3b7e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7e6c) {
            ctx->pc = 0x3B7E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7E6Cu;
            // 0x3b7e70: 0x27a20174  addiu       $v0, $sp, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7E78u;
            goto label_3b7e78;
        }
    }
    ctx->pc = 0x3B7E74u;
label_3b7e74:
    // 0x3b7e74: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x3b7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3b7e78:
    // 0x3b7e78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b7e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e7c:
    // 0x3b7e7c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3b7e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b7e80:
    // 0x3b7e80: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x3b7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e84:
    // 0x3b7e84: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x3b7e84u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3b7e88:
    // 0x3b7e88: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3b7e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3b7e8c:
    // 0x3b7e8c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x3b7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e90:
    // 0x3b7e90: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3b7e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3b7e94:
    // 0x3b7e94: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x3b7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7e98:
    // 0x3b7e98: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3b7e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_3b7e9c:
    // 0x3b7e9c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b7e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3b7ea0:
    // 0x3b7ea0: 0x100001ca  b           . + 4 + (0x1CA << 2)
label_3b7ea4:
    if (ctx->pc == 0x3B7EA4u) {
        ctx->pc = 0x3B7EA4u;
            // 0x3b7ea4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EA8u;
        goto label_3b7ea8;
    }
    ctx->pc = 0x3B7EA0u;
    {
        const bool branch_taken_0x3b7ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7EA0u;
            // 0x3b7ea4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ea0) {
            ctx->pc = 0x3B85CCu;
            goto label_3b85cc;
        }
    }
    ctx->pc = 0x3B7EA8u;
label_3b7ea8:
    // 0x3b7ea8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3b7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3b7eac:
    // 0x3b7eac: 0x8c63f560  lw          $v1, -0xAA0($v1)
    ctx->pc = 0x3b7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964576)));
label_3b7eb0:
    // 0x3b7eb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b7eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3b7eb4:
    // 0x3b7eb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b7eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b7eb8:
    // 0x3b7eb8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3b7ebc:
    if (ctx->pc == 0x3B7EBCu) {
        ctx->pc = 0x3B7EBCu;
            // 0x3b7ebc: 0x94a30002  lhu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x3B7EC0u;
        goto label_3b7ec0;
    }
    ctx->pc = 0x3B7EB8u;
    {
        const bool branch_taken_0x3b7eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7eb8) {
            ctx->pc = 0x3B7EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7EB8u;
            // 0x3b7ebc: 0x94a30002  lhu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7ECCu;
            goto label_3b7ecc;
        }
    }
    ctx->pc = 0x3B7EC0u;
label_3b7ec0:
    // 0x3b7ec0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3b7ec0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3b7ec4:
    // 0x3b7ec4: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_3b7ec8:
    if (ctx->pc == 0x3B7EC8u) {
        ctx->pc = 0x3B7EC8u;
            // 0x3b7ec8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3B7ECCu;
        goto label_3b7ecc;
    }
    ctx->pc = 0x3B7EC4u;
    {
        const bool branch_taken_0x3b7ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7EC4u;
            // 0x3b7ec8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ec4) {
            ctx->pc = 0x3B85C8u;
            goto label_3b85c8;
        }
    }
    ctx->pc = 0x3B7ECCu;
label_3b7ecc:
    // 0x3b7ecc: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x3b7eccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_3b7ed0:
    // 0x3b7ed0: 0x502001bd  beql        $at, $zero, . + 4 + (0x1BD << 2)
label_3b7ed4:
    if (ctx->pc == 0x3B7ED4u) {
        ctx->pc = 0x3B7ED4u;
            // 0x3b7ed4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x3B7ED8u;
        goto label_3b7ed8;
    }
    ctx->pc = 0x3B7ED0u;
    {
        const bool branch_taken_0x3b7ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7ed0) {
            ctx->pc = 0x3B7ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7ED0u;
            // 0x3b7ed4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B85C8u;
            goto label_3b85c8;
        }
    }
    ctx->pc = 0x3B7ED8u;
label_3b7ed8:
    // 0x3b7ed8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3b7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3b7edc:
    // 0x3b7edc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b7ee0:
    // 0x3b7ee0: 0x24848210  addiu       $a0, $a0, -0x7DF0
    ctx->pc = 0x3b7ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935056));
label_3b7ee4:
    // 0x3b7ee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b7ee8:
    // 0x3b7ee8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b7ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b7eec:
    // 0x3b7eec: 0x600008  jr          $v1
label_3b7ef0:
    if (ctx->pc == 0x3B7EF0u) {
        ctx->pc = 0x3B7EF4u;
        goto label_3b7ef4;
    }
    ctx->pc = 0x3B7EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B7EF4u: goto label_3b7ef4;
            case 0x3B7F8Cu: goto label_3b7f8c;
            case 0x3B7F9Cu: goto label_3b7f9c;
            case 0x3B7FACu: goto label_3b7fac;
            case 0x3B80A8u: goto label_3b80a8;
            case 0x3B80FCu: goto label_3b80fc;
            case 0x3B81E8u: goto label_3b81e8;
            case 0x3B8314u: goto label_3b8314;
            case 0x3B8374u: goto label_3b8374;
            case 0x3B83D4u: goto label_3b83d4;
            case 0x3B8434u: goto label_3b8434;
            case 0x3B8494u: goto label_3b8494;
            case 0x3B859Cu: goto label_3b859c;
            case 0x3B85C4u: goto label_3b85c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3B7EF4u;
label_3b7ef4:
    // 0x3b7ef4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x3b7ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7ef8:
    // 0x3b7ef8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b7ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b7efc:
    // 0x3b7efc: 0x0  nop
    ctx->pc = 0x3b7efcu;
    // NOP
label_3b7f00:
    // 0x3b7f00: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3b7f00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7f04:
    // 0x3b7f04: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_3b7f08:
    if (ctx->pc == 0x3B7F08u) {
        ctx->pc = 0x3B7F08u;
            // 0x3b7f08: 0xc6640000  lwc1        $f4, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x3B7F0Cu;
        goto label_3b7f0c;
    }
    ctx->pc = 0x3B7F04u;
    {
        const bool branch_taken_0x3b7f04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b7f04) {
            ctx->pc = 0x3B7F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7F04u;
            // 0x3b7f08: 0xc6640000  lwc1        $f4, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7F40u;
            goto label_3b7f40;
        }
    }
    ctx->pc = 0x3B7F0Cu;
label_3b7f0c:
    // 0x3b7f0c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b7f10:
    if (ctx->pc == 0x3B7F10u) {
        ctx->pc = 0x3B7F10u;
            // 0x3b7f10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B7F14u;
        goto label_3b7f14;
    }
    ctx->pc = 0x3B7F0Cu;
    {
        const bool branch_taken_0x3b7f0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b7f0c) {
            ctx->pc = 0x3B7F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7F0Cu;
            // 0x3b7f10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7F20u;
            goto label_3b7f20;
        }
    }
    ctx->pc = 0x3B7F14u;
label_3b7f14:
    // 0x3b7f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b7f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7f18:
    // 0x3b7f18: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b7f1c:
    if (ctx->pc == 0x3B7F1Cu) {
        ctx->pc = 0x3B7F1Cu;
            // 0x3b7f1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B7F20u;
        goto label_3b7f20;
    }
    ctx->pc = 0x3B7F18u;
    {
        const bool branch_taken_0x3b7f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7F18u;
            // 0x3b7f1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f18) {
            ctx->pc = 0x3B7F38u;
            goto label_3b7f38;
        }
    }
    ctx->pc = 0x3B7F20u;
label_3b7f20:
    // 0x3b7f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b7f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b7f24:
    // 0x3b7f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b7f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b7f28:
    // 0x3b7f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7f2c:
    // 0x3b7f2c: 0x0  nop
    ctx->pc = 0x3b7f2cu;
    // NOP
label_3b7f30:
    // 0x3b7f30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b7f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b7f34:
    // 0x3b7f34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b7f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b7f38:
    // 0x3b7f38: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x3b7f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_3b7f3c:
    // 0x3b7f3c: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x3b7f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3b7f40:
    // 0x3b7f40: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x3b7f40u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3b7f44:
    // 0x3b7f44: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x3b7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7f48:
    // 0x3b7f48: 0xe7a40158  swc1        $f4, 0x158($sp)
    ctx->pc = 0x3b7f48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3b7f4c:
    // 0x3b7f4c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3b7f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7f50:
    // 0x3b7f50: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x3b7f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b7f54:
    // 0x3b7f54: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x3b7f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b7f58:
    // 0x3b7f58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b7f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b7f5c:
    // 0x3b7f5c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b7f5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b7f60:
    // 0x3b7f60: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3b7f60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3b7f64:
    // 0x3b7f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b7f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b7f68:
    // 0x3b7f68: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x3b7f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_3b7f6c:
    // 0x3b7f6c: 0xe6040034  swc1        $f4, 0x34($s0)
    ctx->pc = 0x3b7f6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3b7f70:
    // 0x3b7f70: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x3b7f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7f74:
    // 0x3b7f74: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3b7f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3b7f78:
    // 0x3b7f78: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x3b7f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7f7c:
    // 0x3b7f7c: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3b7f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_3b7f80:
    // 0x3b7f80: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x3b7f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7f84:
    // 0x3b7f84: 0x1000018f  b           . + 4 + (0x18F << 2)
label_3b7f88:
    if (ctx->pc == 0x3B7F88u) {
        ctx->pc = 0x3B7F88u;
            // 0x3b7f88: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->pc = 0x3B7F8Cu;
        goto label_3b7f8c;
    }
    ctx->pc = 0x3B7F84u;
    {
        const bool branch_taken_0x3b7f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7F84u;
            // 0x3b7f88: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f84) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B7F8Cu;
label_3b7f8c:
    // 0x3b7f8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3b7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b7f90:
    // 0x3b7f90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3b7f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3b7f94:
    // 0x3b7f94: 0x1000018b  b           . + 4 + (0x18B << 2)
label_3b7f98:
    if (ctx->pc == 0x3B7F98u) {
        ctx->pc = 0x3B7F98u;
            // 0x3b7f98: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x3B7F9Cu;
        goto label_3b7f9c;
    }
    ctx->pc = 0x3B7F94u;
    {
        const bool branch_taken_0x3b7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7F94u;
            // 0x3b7f98: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f94) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B7F9Cu;
label_3b7f9c:
    // 0x3b7f9c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3b7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b7fa0:
    // 0x3b7fa0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x3b7fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_3b7fa4:
    // 0x3b7fa4: 0x10000187  b           . + 4 + (0x187 << 2)
label_3b7fa8:
    if (ctx->pc == 0x3B7FA8u) {
        ctx->pc = 0x3B7FA8u;
            // 0x3b7fa8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x3B7FACu;
        goto label_3b7fac;
    }
    ctx->pc = 0x3B7FA4u;
    {
        const bool branch_taken_0x3b7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7FA4u;
            // 0x3b7fa8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7fa4) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B7FACu;
label_3b7fac:
    // 0x3b7fac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b7facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b7fb0:
    // 0x3b7fb0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3b7fb4:
    if (ctx->pc == 0x3B7FB4u) {
        ctx->pc = 0x3B7FB4u;
            // 0x3b7fb4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3B7FB8u;
        goto label_3b7fb8;
    }
    ctx->pc = 0x3B7FB0u;
    {
        const bool branch_taken_0x3b7fb0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3b7fb0) {
            ctx->pc = 0x3B7FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7FB0u;
            // 0x3b7fb4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B7FC4u;
            goto label_3b7fc4;
        }
    }
    ctx->pc = 0x3B7FB8u;
label_3b7fb8:
    // 0x3b7fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7fbc:
    // 0x3b7fbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b7fc0:
    if (ctx->pc == 0x3B7FC0u) {
        ctx->pc = 0x3B7FC0u;
            // 0x3b7fc0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B7FC4u;
        goto label_3b7fc4;
    }
    ctx->pc = 0x3B7FBCu;
    {
        const bool branch_taken_0x3b7fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7FBCu;
            // 0x3b7fc0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7fbc) {
            ctx->pc = 0x3B7FDCu;
            goto label_3b7fdc;
        }
    }
    ctx->pc = 0x3B7FC4u;
label_3b7fc4:
    // 0x3b7fc4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b7fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3b7fc8:
    // 0x3b7fc8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b7fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b7fcc:
    // 0x3b7fcc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b7fccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7fd0:
    // 0x3b7fd0: 0x0  nop
    ctx->pc = 0x3b7fd0u;
    // NOP
label_3b7fd4:
    // 0x3b7fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b7fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b7fd8:
    // 0x3b7fd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b7fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b7fdc:
    // 0x3b7fdc: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3b7fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3b7fe0:
    // 0x3b7fe0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3b7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3b7fe4:
    // 0x3b7fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b7fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7fe8:
    // 0x3b7fe8: 0x0  nop
    ctx->pc = 0x3b7fe8u;
    // NOP
label_3b7fec:
    // 0x3b7fec: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x3b7fecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_3b7ff0:
    // 0x3b7ff0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x3b7ff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3b7ff4:
    // 0x3b7ff4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x3b7ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7ff8:
    // 0x3b7ff8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b7ffc:
    if (ctx->pc == 0x3B7FFCu) {
        ctx->pc = 0x3B7FFCu;
            // 0x3b7ffc: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->pc = 0x3B8000u;
        goto label_3b8000;
    }
    ctx->pc = 0x3B7FF8u;
    {
        const bool branch_taken_0x3b7ff8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B7FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B7FF8u;
            // 0x3b7ffc: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ff8) {
            ctx->pc = 0x3B800Cu;
            goto label_3b800c;
        }
    }
    ctx->pc = 0x3B8000u;
label_3b8000:
    // 0x3b8000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8004:
    // 0x3b8004: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b8008:
    if (ctx->pc == 0x3B8008u) {
        ctx->pc = 0x3B8008u;
            // 0x3b8008: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B800Cu;
        goto label_3b800c;
    }
    ctx->pc = 0x3B8004u;
    {
        const bool branch_taken_0x3b8004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8004u;
            // 0x3b8008: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8004) {
            ctx->pc = 0x3B8028u;
            goto label_3b8028;
        }
    }
    ctx->pc = 0x3B800Cu;
label_3b800c:
    // 0x3b800c: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x3b800cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b8010:
    // 0x3b8010: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3b8010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8014:
    // 0x3b8014: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b8014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b8018:
    // 0x3b8018: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b8018u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b801c:
    // 0x3b801c: 0x0  nop
    ctx->pc = 0x3b801cu;
    // NOP
label_3b8020:
    // 0x3b8020: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b8020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b8024:
    // 0x3b8024: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b8024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b8028:
    // 0x3b8028: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b802c:
    if (ctx->pc == 0x3B802Cu) {
        ctx->pc = 0x3B802Cu;
            // 0x3b802c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B8030u;
        goto label_3b8030;
    }
    ctx->pc = 0x3B8028u;
    {
        const bool branch_taken_0x3b8028 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b8028) {
            ctx->pc = 0x3B802Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8028u;
            // 0x3b802c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B803Cu;
            goto label_3b803c;
        }
    }
    ctx->pc = 0x3B8030u;
label_3b8030:
    // 0x3b8030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8034:
    // 0x3b8034: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8038:
    if (ctx->pc == 0x3B8038u) {
        ctx->pc = 0x3B8038u;
            // 0x3b8038: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B803Cu;
        goto label_3b803c;
    }
    ctx->pc = 0x3B8034u;
    {
        const bool branch_taken_0x3b8034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8034u;
            // 0x3b8038: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8034) {
            ctx->pc = 0x3B8054u;
            goto label_3b8054;
        }
    }
    ctx->pc = 0x3B803Cu;
label_3b803c:
    // 0x3b803c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8040:
    // 0x3b8040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b8040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b8044:
    // 0x3b8044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8048:
    // 0x3b8048: 0x0  nop
    ctx->pc = 0x3b8048u;
    // NOP
label_3b804c:
    // 0x3b804c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b804cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b8050:
    // 0x3b8050: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b8050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b8054:
    // 0x3b8054: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x3b8054u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3b8058:
    // 0x3b8058: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3b8058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3b805c:
    // 0x3b805c: 0x460c085d  msub.s      $f1, $f1, $f12
    ctx->pc = 0x3b805cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
label_3b8060:
    // 0x3b8060: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b8060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b8064:
    // 0x3b8064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8068:
    // 0x3b8068: 0x0  nop
    ctx->pc = 0x3b8068u;
    // NOP
label_3b806c:
    // 0x3b806c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3b806cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_3b8070:
    // 0x3b8070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8074:
    // 0x3b8074: 0x0  nop
    ctx->pc = 0x3b8074u;
    // NOP
label_3b8078:
    // 0x3b8078: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x3b8078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3b807c:
    // 0x3b807c: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x3b807cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_3b8080:
    // 0x3b8080: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x3b8080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8084:
    // 0x3b8084: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x3b8084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8088:
    // 0x3b8088: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b8088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b808c:
    // 0x3b808c: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x3b808cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_3b8090:
    // 0x3b8090: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3b8090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3b8094:
    // 0x3b8094: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x3b8094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8098:
    // 0x3b8098: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3b8098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3b809c:
    // 0x3b809c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x3b809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b80a0:
    // 0x3b80a0: 0x10000148  b           . + 4 + (0x148 << 2)
label_3b80a4:
    if (ctx->pc == 0x3B80A4u) {
        ctx->pc = 0x3B80A4u;
            // 0x3b80a4: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->pc = 0x3B80A8u;
        goto label_3b80a8;
    }
    ctx->pc = 0x3B80A0u;
    {
        const bool branch_taken_0x3b80a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B80A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B80A0u;
            // 0x3b80a4: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80a0) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B80A8u;
label_3b80a8:
    // 0x3b80a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b80ac:
    // 0x3b80ac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b80b0:
    if (ctx->pc == 0x3B80B0u) {
        ctx->pc = 0x3B80B0u;
            // 0x3b80b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B80B4u;
        goto label_3b80b4;
    }
    ctx->pc = 0x3B80ACu;
    {
        const bool branch_taken_0x3b80ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b80ac) {
            ctx->pc = 0x3B80B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B80ACu;
            // 0x3b80b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B80C0u;
            goto label_3b80c0;
        }
    }
    ctx->pc = 0x3B80B4u;
label_3b80b4:
    // 0x3b80b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b80b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b80b8:
    // 0x3b80b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b80bc:
    if (ctx->pc == 0x3B80BCu) {
        ctx->pc = 0x3B80BCu;
            // 0x3b80bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B80C0u;
        goto label_3b80c0;
    }
    ctx->pc = 0x3B80B8u;
    {
        const bool branch_taken_0x3b80b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B80BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B80B8u;
            // 0x3b80bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80b8) {
            ctx->pc = 0x3B80D8u;
            goto label_3b80d8;
        }
    }
    ctx->pc = 0x3B80C0u;
label_3b80c0:
    // 0x3b80c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b80c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b80c4:
    // 0x3b80c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b80c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b80c8:
    // 0x3b80c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b80c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b80cc:
    // 0x3b80cc: 0x0  nop
    ctx->pc = 0x3b80ccu;
    // NOP
label_3b80d0:
    // 0x3b80d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b80d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b80d4:
    // 0x3b80d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b80d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b80d8:
    // 0x3b80d8: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3b80d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3b80dc:
    // 0x3b80dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3b80e0:
    // 0x3b80e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b80e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b80e4:
    // 0x3b80e4: 0x0  nop
    ctx->pc = 0x3b80e4u;
    // NOP
label_3b80e8:
    // 0x3b80e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b80e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b80ec:
    // 0x3b80ec: 0x0  nop
    ctx->pc = 0x3b80ecu;
    // NOP
label_3b80f0:
    // 0x3b80f0: 0x0  nop
    ctx->pc = 0x3b80f0u;
    // NOP
label_3b80f4:
    // 0x3b80f4: 0x10000133  b           . + 4 + (0x133 << 2)
label_3b80f8:
    if (ctx->pc == 0x3B80F8u) {
        ctx->pc = 0x3B80F8u;
            // 0x3b80f8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->pc = 0x3B80FCu;
        goto label_3b80fc;
    }
    ctx->pc = 0x3B80F4u;
    {
        const bool branch_taken_0x3b80f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B80F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B80F4u;
            // 0x3b80f8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80f4) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B80FCu;
label_3b80fc:
    // 0x3b80fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b80fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b8100:
    // 0x3b8100: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3b8104:
    if (ctx->pc == 0x3B8104u) {
        ctx->pc = 0x3B8104u;
            // 0x3b8104: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3B8108u;
        goto label_3b8108;
    }
    ctx->pc = 0x3B8100u;
    {
        const bool branch_taken_0x3b8100 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3b8100) {
            ctx->pc = 0x3B8104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8100u;
            // 0x3b8104: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8114u;
            goto label_3b8114;
        }
    }
    ctx->pc = 0x3B8108u;
label_3b8108:
    // 0x3b8108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b810c:
    // 0x3b810c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8110:
    if (ctx->pc == 0x3B8110u) {
        ctx->pc = 0x3B8110u;
            // 0x3b8110: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B8114u;
        goto label_3b8114;
    }
    ctx->pc = 0x3B810Cu;
    {
        const bool branch_taken_0x3b810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B810Cu;
            // 0x3b8110: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b810c) {
            ctx->pc = 0x3B812Cu;
            goto label_3b812c;
        }
    }
    ctx->pc = 0x3B8114u;
label_3b8114:
    // 0x3b8114: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b8114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3b8118:
    // 0x3b8118: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b8118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b811c:
    // 0x3b811c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b811cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8120:
    // 0x3b8120: 0x0  nop
    ctx->pc = 0x3b8120u;
    // NOP
label_3b8124:
    // 0x3b8124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b8124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b8128:
    // 0x3b8128: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b8128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b812c:
    // 0x3b812c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3b812cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3b8130:
    // 0x3b8130: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3b8130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3b8134:
    // 0x3b8134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8138:
    // 0x3b8138: 0x0  nop
    ctx->pc = 0x3b8138u;
    // NOP
label_3b813c:
    // 0x3b813c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x3b813cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_3b8140:
    // 0x3b8140: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x3b8140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3b8144:
    // 0x3b8144: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x3b8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8148:
    // 0x3b8148: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b814c:
    if (ctx->pc == 0x3B814Cu) {
        ctx->pc = 0x3B814Cu;
            // 0x3b814c: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->pc = 0x3B8150u;
        goto label_3b8150;
    }
    ctx->pc = 0x3B8148u;
    {
        const bool branch_taken_0x3b8148 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8148u;
            // 0x3b814c: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8148) {
            ctx->pc = 0x3B815Cu;
            goto label_3b815c;
        }
    }
    ctx->pc = 0x3B8150u;
label_3b8150:
    // 0x3b8150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8154:
    // 0x3b8154: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b8158:
    if (ctx->pc == 0x3B8158u) {
        ctx->pc = 0x3B8158u;
            // 0x3b8158: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B815Cu;
        goto label_3b815c;
    }
    ctx->pc = 0x3B8154u;
    {
        const bool branch_taken_0x3b8154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8154u;
            // 0x3b8158: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8154) {
            ctx->pc = 0x3B8178u;
            goto label_3b8178;
        }
    }
    ctx->pc = 0x3B815Cu;
label_3b815c:
    // 0x3b815c: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x3b815cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b8160:
    // 0x3b8160: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3b8160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8164:
    // 0x3b8164: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b8164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b8168:
    // 0x3b8168: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b8168u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b816c:
    // 0x3b816c: 0x0  nop
    ctx->pc = 0x3b816cu;
    // NOP
label_3b8170:
    // 0x3b8170: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b8170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b8174:
    // 0x3b8174: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b8174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b8178:
    // 0x3b8178: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b817c:
    if (ctx->pc == 0x3B817Cu) {
        ctx->pc = 0x3B817Cu;
            // 0x3b817c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B8180u;
        goto label_3b8180;
    }
    ctx->pc = 0x3B8178u;
    {
        const bool branch_taken_0x3b8178 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b8178) {
            ctx->pc = 0x3B817Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8178u;
            // 0x3b817c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B818Cu;
            goto label_3b818c;
        }
    }
    ctx->pc = 0x3B8180u;
label_3b8180:
    // 0x3b8180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8184:
    // 0x3b8184: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8188:
    if (ctx->pc == 0x3B8188u) {
        ctx->pc = 0x3B8188u;
            // 0x3b8188: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B818Cu;
        goto label_3b818c;
    }
    ctx->pc = 0x3B8184u;
    {
        const bool branch_taken_0x3b8184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8184u;
            // 0x3b8188: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8184) {
            ctx->pc = 0x3B81A4u;
            goto label_3b81a4;
        }
    }
    ctx->pc = 0x3B818Cu;
label_3b818c:
    // 0x3b818c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8190:
    // 0x3b8190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b8190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b8194:
    // 0x3b8194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8198:
    // 0x3b8198: 0x0  nop
    ctx->pc = 0x3b8198u;
    // NOP
label_3b819c:
    // 0x3b819c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b819cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b81a0:
    // 0x3b81a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b81a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b81a4:
    // 0x3b81a4: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x3b81a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3b81a8:
    // 0x3b81a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b81ac:
    // 0x3b81ac: 0x460c085d  msub.s      $f1, $f1, $f12
    ctx->pc = 0x3b81acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
label_3b81b0:
    // 0x3b81b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b81b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b81b4:
    // 0x3b81b4: 0x0  nop
    ctx->pc = 0x3b81b4u;
    // NOP
label_3b81b8:
    // 0x3b81b8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x3b81b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3b81bc:
    // 0x3b81bc: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x3b81bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_3b81c0:
    // 0x3b81c0: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x3b81c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b81c4:
    // 0x3b81c4: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x3b81c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b81c8:
    // 0x3b81c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b81c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b81cc:
    // 0x3b81cc: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x3b81ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_3b81d0:
    // 0x3b81d0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3b81d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3b81d4:
    // 0x3b81d4: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x3b81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b81d8:
    // 0x3b81d8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3b81d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3b81dc:
    // 0x3b81dc: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x3b81dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b81e0:
    // 0x3b81e0: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_3b81e4:
    if (ctx->pc == 0x3B81E4u) {
        ctx->pc = 0x3B81E4u;
            // 0x3b81e4: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->pc = 0x3B81E8u;
        goto label_3b81e8;
    }
    ctx->pc = 0x3B81E0u;
    {
        const bool branch_taken_0x3b81e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B81E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B81E0u;
            // 0x3b81e4: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81e0) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B81E8u;
label_3b81e8:
    // 0x3b81e8: 0x52200002  beql        $s1, $zero, . + 4 + (0x2 << 2)
label_3b81ec:
    if (ctx->pc == 0x3B81ECu) {
        ctx->pc = 0x3B81ECu;
            // 0x3b81ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B81F0u;
        goto label_3b81f0;
    }
    ctx->pc = 0x3B81E8u;
    {
        const bool branch_taken_0x3b81e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b81e8) {
            ctx->pc = 0x3B81ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B81E8u;
            // 0x3b81ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B81F4u;
            goto label_3b81f4;
        }
    }
    ctx->pc = 0x3B81F0u;
label_3b81f0:
    // 0x3b81f0: 0x27aa0110  addiu       $t2, $sp, 0x110
    ctx->pc = 0x3b81f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3b81f4:
    // 0x3b81f4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3b81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3b81f8:
    // 0x3b81f8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3b81f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3b81fc:
    // 0x3b81fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3b8200:
    // 0x3b8200: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b8200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b8204:
    // 0x3b8204: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b8204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b8208:
    // 0x3b8208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b8208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b820c:
    // 0x3b820c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3b8210:
    if (ctx->pc == 0x3B8210u) {
        ctx->pc = 0x3B8210u;
            // 0x3b8210: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3B8214u;
        goto label_3b8214;
    }
    ctx->pc = 0x3B820Cu;
    {
        const bool branch_taken_0x3b820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B820Cu;
            // 0x3b8210: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b820c) {
            ctx->pc = 0x3B824Cu;
            goto label_3b824c;
        }
    }
    ctx->pc = 0x3B8214u;
label_3b8214:
    // 0x3b8214: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3b8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3b8218:
    // 0x3b8218: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3b8218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3b821c:
    // 0x3b821c: 0x8e990048  lw          $t9, 0x48($s4)
    ctx->pc = 0x3b821cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_3b8220:
    // 0x3b8220: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b8220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8224:
    // 0x3b8224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b8224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b8228:
    // 0x3b8228: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3b8228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b822c:
    // 0x3b822c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3b822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3b8230:
    // 0x3b8230: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3b8230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b8234:
    // 0x3b8234: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3b8234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3b8238:
    // 0x3b8238: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x3b8238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3b823c:
    // 0x3b823c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b8240:
    // 0x3b8240: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3b8240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b8244:
    // 0x3b8244: 0x320f809  jalr        $t9
label_3b8248:
    if (ctx->pc == 0x3B8248u) {
        ctx->pc = 0x3B8248u;
            // 0x3b8248: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B824Cu;
        goto label_3b824c;
    }
    ctx->pc = 0x3B8244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B824Cu);
        ctx->pc = 0x3B8248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8244u;
            // 0x3b8248: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B824Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B824Cu; }
            if (ctx->pc != 0x3B824Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B824Cu;
label_3b824c:
    // 0x3b824c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x3b824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8250:
    // 0x3b8250: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3b8250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3b8254:
    // 0x3b8254: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x3b8254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8258:
    // 0x3b8258: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3b8258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3b825c:
    // 0x3b825c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x3b825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8260:
    // 0x3b8260: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_3b8264:
    if (ctx->pc == 0x3B8264u) {
        ctx->pc = 0x3B8264u;
            // 0x3b8264: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->pc = 0x3B8268u;
        goto label_3b8268;
    }
    ctx->pc = 0x3B8260u;
    {
        const bool branch_taken_0x3b8260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8260u;
            // 0x3b8264: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8260) {
            ctx->pc = 0x3B8300u;
            goto label_3b8300;
        }
    }
    ctx->pc = 0x3B8268u;
label_3b8268:
    // 0x3b8268: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3b8268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b826c:
    // 0x3b826c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3b826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8270:
    // 0x3b8270: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b8270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8274:
    // 0x3b8274: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3b8278:
    if (ctx->pc == 0x3B8278u) {
        ctx->pc = 0x3B8278u;
            // 0x3b8278: 0x27a20110  addiu       $v0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3B827Cu;
        goto label_3b827c;
    }
    ctx->pc = 0x3B8274u;
    {
        const bool branch_taken_0x3b8274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8274) {
            ctx->pc = 0x3B8278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8274u;
            // 0x3b8278: 0x27a20110  addiu       $v0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8280u;
            goto label_3b8280;
        }
    }
    ctx->pc = 0x3B827Cu;
label_3b827c:
    // 0x3b827c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b827cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b8280:
    // 0x3b8280: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8284:
    // 0x3b8284: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3b8284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3b8288:
    // 0x3b8288: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3b8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b828c:
    // 0x3b828c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x3b828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8290:
    // 0x3b8290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b8290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8294:
    // 0x3b8294: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3b8298:
    if (ctx->pc == 0x3B8298u) {
        ctx->pc = 0x3B8298u;
            // 0x3b8298: 0x27a20114  addiu       $v0, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->pc = 0x3B829Cu;
        goto label_3b829c;
    }
    ctx->pc = 0x3B8294u;
    {
        const bool branch_taken_0x3b8294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8294) {
            ctx->pc = 0x3B8298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8294u;
            // 0x3b8298: 0x27a20114  addiu       $v0, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B82A0u;
            goto label_3b82a0;
        }
    }
    ctx->pc = 0x3B829Cu;
label_3b829c:
    // 0x3b829c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x3b829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3b82a0:
    // 0x3b82a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b82a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b82a4:
    // 0x3b82a4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3b82a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3b82a8:
    // 0x3b82a8: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x3b82a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b82ac:
    // 0x3b82ac: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x3b82acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b82b0:
    // 0x3b82b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b82b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b82b4:
    // 0x3b82b4: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x3b82b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_3b82b8:
    // 0x3b82b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3b82b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b82bc:
    // 0x3b82bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b82bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b82c0:
    // 0x3b82c0: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3b82c4:
    if (ctx->pc == 0x3B82C4u) {
        ctx->pc = 0x3B82C4u;
            // 0x3b82c4: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3B82C8u;
        goto label_3b82c8;
    }
    ctx->pc = 0x3B82C0u;
    {
        const bool branch_taken_0x3b82c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b82c0) {
            ctx->pc = 0x3B82C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B82C0u;
            // 0x3b82c4: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B82CCu;
            goto label_3b82cc;
        }
    }
    ctx->pc = 0x3B82C8u;
label_3b82c8:
    // 0x3b82c8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x3b82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3b82cc:
    // 0x3b82cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b82ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b82d0:
    // 0x3b82d0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3b82d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3b82d4:
    // 0x3b82d4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x3b82d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b82d8:
    // 0x3b82d8: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x3b82d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b82dc:
    // 0x3b82dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b82dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b82e0:
    // 0x3b82e0: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x3b82e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_3b82e4:
    // 0x3b82e4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3b82e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b82e8:
    // 0x3b82e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b82e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b82ec:
    // 0x3b82ec: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3b82f0:
    if (ctx->pc == 0x3B82F0u) {
        ctx->pc = 0x3B82F0u;
            // 0x3b82f0: 0x27a2016c  addiu       $v0, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->pc = 0x3B82F4u;
        goto label_3b82f4;
    }
    ctx->pc = 0x3B82ECu;
    {
        const bool branch_taken_0x3b82ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b82ec) {
            ctx->pc = 0x3B82F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B82ECu;
            // 0x3b82f0: 0x27a2016c  addiu       $v0, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B82F8u;
            goto label_3b82f8;
        }
    }
    ctx->pc = 0x3B82F4u;
label_3b82f4:
    // 0x3b82f4: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x3b82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3b82f8:
    // 0x3b82f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b82f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b82fc:
    // 0x3b82fc: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3b82fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b8300:
    // 0x3b8300: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3b8300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8304:
    // 0x3b8304: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x3b8304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8308:
    // 0x3b8308: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b8308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b830c:
    // 0x3b830c: 0x100000ad  b           . + 4 + (0xAD << 2)
label_3b8310:
    if (ctx->pc == 0x3B8310u) {
        ctx->pc = 0x3B8310u;
            // 0x3b8310: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->pc = 0x3B8314u;
        goto label_3b8314;
    }
    ctx->pc = 0x3B830Cu;
    {
        const bool branch_taken_0x3b830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B830Cu;
            // 0x3b8310: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b830c) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B8314u;
label_3b8314:
    // 0x3b8314: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b8314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b8318:
    // 0x3b8318: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b831c:
    if (ctx->pc == 0x3B831Cu) {
        ctx->pc = 0x3B831Cu;
            // 0x3b831c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B8320u;
        goto label_3b8320;
    }
    ctx->pc = 0x3B8318u;
    {
        const bool branch_taken_0x3b8318 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b8318) {
            ctx->pc = 0x3B831Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8318u;
            // 0x3b831c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B832Cu;
            goto label_3b832c;
        }
    }
    ctx->pc = 0x3B8320u;
label_3b8320:
    // 0x3b8320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8324:
    // 0x3b8324: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8328:
    if (ctx->pc == 0x3B8328u) {
        ctx->pc = 0x3B8328u;
            // 0x3b8328: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B832Cu;
        goto label_3b832c;
    }
    ctx->pc = 0x3B8324u;
    {
        const bool branch_taken_0x3b8324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8324u;
            // 0x3b8328: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8324) {
            ctx->pc = 0x3B8344u;
            goto label_3b8344;
        }
    }
    ctx->pc = 0x3B832Cu;
label_3b832c:
    // 0x3b832c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8330:
    // 0x3b8330: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b8330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b8334:
    // 0x3b8334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8338:
    // 0x3b8338: 0x0  nop
    ctx->pc = 0x3b8338u;
    // NOP
label_3b833c:
    // 0x3b833c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3b833cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b8340:
    // 0x3b8340: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3b8340u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3b8344:
    // 0x3b8344: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3b8344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3b8348:
    // 0x3b8348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b834c:
    // 0x3b834c: 0x0  nop
    ctx->pc = 0x3b834cu;
    // NOP
label_3b8350:
    // 0x3b8350: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x3b8350u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
label_3b8354:
    // 0x3b8354: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x3b8354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8358:
    // 0x3b8358: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x3b8358u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_3b835c:
    // 0x3b835c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x3b835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8360:
    // 0x3b8360: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x3b8360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_3b8364:
    // 0x3b8364: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x3b8364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8368:
    // 0x3b8368: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x3b8368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_3b836c:
    // 0x3b836c: 0x10000095  b           . + 4 + (0x95 << 2)
label_3b8370:
    if (ctx->pc == 0x3B8370u) {
        ctx->pc = 0x3B8370u;
            // 0x3b8370: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->pc = 0x3B8374u;
        goto label_3b8374;
    }
    ctx->pc = 0x3B836Cu;
    {
        const bool branch_taken_0x3b836c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B836Cu;
            // 0x3b8370: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b836c) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B8374u;
label_3b8374:
    // 0x3b8374: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b8378:
    // 0x3b8378: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b837c:
    if (ctx->pc == 0x3B837Cu) {
        ctx->pc = 0x3B837Cu;
            // 0x3b837c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B8380u;
        goto label_3b8380;
    }
    ctx->pc = 0x3B8378u;
    {
        const bool branch_taken_0x3b8378 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b8378) {
            ctx->pc = 0x3B837Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8378u;
            // 0x3b837c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B838Cu;
            goto label_3b838c;
        }
    }
    ctx->pc = 0x3B8380u;
label_3b8380:
    // 0x3b8380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8384:
    // 0x3b8384: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8388:
    if (ctx->pc == 0x3B8388u) {
        ctx->pc = 0x3B8388u;
            // 0x3b8388: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B838Cu;
        goto label_3b838c;
    }
    ctx->pc = 0x3B8384u;
    {
        const bool branch_taken_0x3b8384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8384u;
            // 0x3b8388: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8384) {
            ctx->pc = 0x3B83A4u;
            goto label_3b83a4;
        }
    }
    ctx->pc = 0x3B838Cu;
label_3b838c:
    // 0x3b838c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8390:
    // 0x3b8390: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b8390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b8394:
    // 0x3b8394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8398:
    // 0x3b8398: 0x0  nop
    ctx->pc = 0x3b8398u;
    // NOP
label_3b839c:
    // 0x3b839c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3b839cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b83a0:
    // 0x3b83a0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3b83a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3b83a4:
    // 0x3b83a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3b83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3b83a8:
    // 0x3b83a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b83a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b83ac:
    // 0x3b83ac: 0x0  nop
    ctx->pc = 0x3b83acu;
    // NOP
label_3b83b0:
    // 0x3b83b0: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x3b83b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
label_3b83b4:
    // 0x3b83b4: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x3b83b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b83b8:
    // 0x3b83b8: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x3b83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b83bc:
    // 0x3b83bc: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x3b83bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b83c0:
    // 0x3b83c0: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x3b83c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_3b83c4:
    // 0x3b83c4: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x3b83c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_3b83c8:
    // 0x3b83c8: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x3b83c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_3b83cc:
    // 0x3b83cc: 0x1000007d  b           . + 4 + (0x7D << 2)
label_3b83d0:
    if (ctx->pc == 0x3B83D0u) {
        ctx->pc = 0x3B83D0u;
            // 0x3b83d0: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->pc = 0x3B83D4u;
        goto label_3b83d4;
    }
    ctx->pc = 0x3B83CCu;
    {
        const bool branch_taken_0x3b83cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B83D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B83CCu;
            // 0x3b83d0: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b83cc) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B83D4u;
label_3b83d4:
    // 0x3b83d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b83d8:
    // 0x3b83d8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b83dc:
    if (ctx->pc == 0x3B83DCu) {
        ctx->pc = 0x3B83DCu;
            // 0x3b83dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B83E0u;
        goto label_3b83e0;
    }
    ctx->pc = 0x3B83D8u;
    {
        const bool branch_taken_0x3b83d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b83d8) {
            ctx->pc = 0x3B83DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B83D8u;
            // 0x3b83dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B83ECu;
            goto label_3b83ec;
        }
    }
    ctx->pc = 0x3B83E0u;
label_3b83e0:
    // 0x3b83e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b83e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b83e4:
    // 0x3b83e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b83e8:
    if (ctx->pc == 0x3B83E8u) {
        ctx->pc = 0x3B83E8u;
            // 0x3b83e8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B83ECu;
        goto label_3b83ec;
    }
    ctx->pc = 0x3B83E4u;
    {
        const bool branch_taken_0x3b83e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B83E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B83E4u;
            // 0x3b83e8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b83e4) {
            ctx->pc = 0x3B8404u;
            goto label_3b8404;
        }
    }
    ctx->pc = 0x3B83ECu;
label_3b83ec:
    // 0x3b83ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b83ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b83f0:
    // 0x3b83f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b83f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b83f4:
    // 0x3b83f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b83f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b83f8:
    // 0x3b83f8: 0x0  nop
    ctx->pc = 0x3b83f8u;
    // NOP
label_3b83fc:
    // 0x3b83fc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3b83fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b8400:
    // 0x3b8400: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3b8400u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3b8404:
    // 0x3b8404: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3b8404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3b8408:
    // 0x3b8408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b840c:
    // 0x3b840c: 0x0  nop
    ctx->pc = 0x3b840cu;
    // NOP
label_3b8410:
    // 0x3b8410: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x3b8410u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
label_3b8414:
    // 0x3b8414: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x3b8414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8418:
    // 0x3b8418: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x3b8418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b841c:
    // 0x3b841c: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x3b841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8420:
    // 0x3b8420: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x3b8420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_3b8424:
    // 0x3b8424: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x3b8424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_3b8428:
    // 0x3b8428: 0xe603001c  swc1        $f3, 0x1C($s0)
    ctx->pc = 0x3b8428u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_3b842c:
    // 0x3b842c: 0x10000065  b           . + 4 + (0x65 << 2)
label_3b8430:
    if (ctx->pc == 0x3B8430u) {
        ctx->pc = 0x3B8430u;
            // 0x3b8430: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->pc = 0x3B8434u;
        goto label_3b8434;
    }
    ctx->pc = 0x3B842Cu;
    {
        const bool branch_taken_0x3b842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B842Cu;
            // 0x3b8430: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b842c) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B8434u;
label_3b8434:
    // 0x3b8434: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b8434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b8438:
    // 0x3b8438: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b843c:
    if (ctx->pc == 0x3B843Cu) {
        ctx->pc = 0x3B843Cu;
            // 0x3b843c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B8440u;
        goto label_3b8440;
    }
    ctx->pc = 0x3B8438u;
    {
        const bool branch_taken_0x3b8438 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b8438) {
            ctx->pc = 0x3B843Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8438u;
            // 0x3b843c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B844Cu;
            goto label_3b844c;
        }
    }
    ctx->pc = 0x3B8440u;
label_3b8440:
    // 0x3b8440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8444:
    // 0x3b8444: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8448:
    if (ctx->pc == 0x3B8448u) {
        ctx->pc = 0x3B8448u;
            // 0x3b8448: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B844Cu;
        goto label_3b844c;
    }
    ctx->pc = 0x3B8444u;
    {
        const bool branch_taken_0x3b8444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8444u;
            // 0x3b8448: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8444) {
            ctx->pc = 0x3B8464u;
            goto label_3b8464;
        }
    }
    ctx->pc = 0x3B844Cu;
label_3b844c:
    // 0x3b844c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8450:
    // 0x3b8450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b8450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b8454:
    // 0x3b8454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8458:
    // 0x3b8458: 0x0  nop
    ctx->pc = 0x3b8458u;
    // NOP
label_3b845c:
    // 0x3b845c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3b845cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b8460:
    // 0x3b8460: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3b8460u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3b8464:
    // 0x3b8464: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3b8464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3b8468:
    // 0x3b8468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b8468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b846c:
    // 0x3b846c: 0x0  nop
    ctx->pc = 0x3b846cu;
    // NOP
label_3b8470:
    // 0x3b8470: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x3b8470u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
label_3b8474:
    // 0x3b8474: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x3b8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8478:
    // 0x3b8478: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x3b8478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b847c:
    // 0x3b847c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x3b847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8480:
    // 0x3b8480: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x3b8480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_3b8484:
    // 0x3b8484: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x3b8484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_3b8488:
    // 0x3b8488: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x3b8488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_3b848c:
    // 0x3b848c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_3b8490:
    if (ctx->pc == 0x3B8490u) {
        ctx->pc = 0x3B8490u;
            // 0x3b8490: 0xe6030020  swc1        $f3, 0x20($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->pc = 0x3B8494u;
        goto label_3b8494;
    }
    ctx->pc = 0x3B848Cu;
    {
        const bool branch_taken_0x3b848c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B848Cu;
            // 0x3b8490: 0xe6030020  swc1        $f3, 0x20($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b848c) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B8494u;
label_3b8494:
    // 0x3b8494: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_3b8498:
    if (ctx->pc == 0x3B8498u) {
        ctx->pc = 0x3B8498u;
            // 0x3b8498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B849Cu;
        goto label_3b849c;
    }
    ctx->pc = 0x3B8494u;
    {
        const bool branch_taken_0x3b8494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8494) {
            ctx->pc = 0x3B8498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8494u;
            // 0x3b8498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B84A8u;
            goto label_3b84a8;
        }
    }
    ctx->pc = 0x3B849Cu;
label_3b849c:
    // 0x3b849c: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x3b849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_3b84a0:
    // 0x3b84a0: 0x27ab0110  addiu       $t3, $sp, 0x110
    ctx->pc = 0x3b84a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3b84a4:
    // 0x3b84a4: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x3b84a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_3b84a8:
    // 0x3b84a8: 0xffb50000  sd          $s5, 0x0($sp)
    ctx->pc = 0x3b84a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 21));
label_3b84ac:
    // 0x3b84ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b84acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b84b0:
    // 0x3b84b0: 0x8e990048  lw          $t9, 0x48($s4)
    ctx->pc = 0x3b84b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_3b84b4:
    // 0x3b84b4: 0x27a70158  addiu       $a3, $sp, 0x158
    ctx->pc = 0x3b84b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_3b84b8:
    // 0x3b84b8: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x3b84b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3b84bc:
    // 0x3b84bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3b84bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b84c0:
    // 0x3b84c0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3b84c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b84c4:
    // 0x3b84c4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3b84c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b84c8:
    // 0x3b84c8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3b84c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3b84cc:
    // 0x3b84cc: 0x320f809  jalr        $t9
label_3b84d0:
    if (ctx->pc == 0x3B84D0u) {
        ctx->pc = 0x3B84D0u;
            // 0x3b84d0: 0x27aa0120  addiu       $t2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3B84D4u;
        goto label_3b84d4;
    }
    ctx->pc = 0x3B84CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B84D4u);
        ctx->pc = 0x3B84D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B84CCu;
            // 0x3b84d0: 0x27aa0120  addiu       $t2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B84D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B84D4u; }
            if (ctx->pc != 0x3B84D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3B84D4u;
label_3b84d4:
    // 0x3b84d4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x3b84d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b84d8:
    // 0x3b84d8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3b84d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3b84dc:
    // 0x3b84dc: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x3b84dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b84e0:
    // 0x3b84e0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3b84e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3b84e4:
    // 0x3b84e4: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x3b84e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b84e8:
    // 0x3b84e8: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_3b84ec:
    if (ctx->pc == 0x3B84ECu) {
        ctx->pc = 0x3B84ECu;
            // 0x3b84ec: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->pc = 0x3B84F0u;
        goto label_3b84f0;
    }
    ctx->pc = 0x3B84E8u;
    {
        const bool branch_taken_0x3b84e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B84ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B84E8u;
            // 0x3b84ec: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b84e8) {
            ctx->pc = 0x3B8588u;
            goto label_3b8588;
        }
    }
    ctx->pc = 0x3B84F0u;
label_3b84f0:
    // 0x3b84f0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3b84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b84f4:
    // 0x3b84f4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3b84f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b84f8:
    // 0x3b84f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b84f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b84fc:
    // 0x3b84fc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3b8500:
    if (ctx->pc == 0x3B8500u) {
        ctx->pc = 0x3B8500u;
            // 0x3b8500: 0x27a20110  addiu       $v0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3B8504u;
        goto label_3b8504;
    }
    ctx->pc = 0x3B84FCu;
    {
        const bool branch_taken_0x3b84fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b84fc) {
            ctx->pc = 0x3B8500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B84FCu;
            // 0x3b8500: 0x27a20110  addiu       $v0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8508u;
            goto label_3b8508;
        }
    }
    ctx->pc = 0x3B8504u;
label_3b8504:
    // 0x3b8504: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b8504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b8508:
    // 0x3b8508: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b850c:
    // 0x3b850c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3b850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3b8510:
    // 0x3b8510: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3b8510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8514:
    // 0x3b8514: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x3b8514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8518:
    // 0x3b8518: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b8518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b851c:
    // 0x3b851c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3b8520:
    if (ctx->pc == 0x3B8520u) {
        ctx->pc = 0x3B8520u;
            // 0x3b8520: 0x27a20114  addiu       $v0, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->pc = 0x3B8524u;
        goto label_3b8524;
    }
    ctx->pc = 0x3B851Cu;
    {
        const bool branch_taken_0x3b851c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b851c) {
            ctx->pc = 0x3B8520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B851Cu;
            // 0x3b8520: 0x27a20114  addiu       $v0, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8528u;
            goto label_3b8528;
        }
    }
    ctx->pc = 0x3B8524u;
label_3b8524:
    // 0x3b8524: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x3b8524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3b8528:
    // 0x3b8528: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b852c:
    // 0x3b852c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3b852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3b8530:
    // 0x3b8530: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x3b8530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8534:
    // 0x3b8534: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x3b8534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8538:
    // 0x3b8538: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b8538u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b853c:
    // 0x3b853c: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x3b853cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_3b8540:
    // 0x3b8540: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3b8540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8544:
    // 0x3b8544: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8548:
    // 0x3b8548: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3b854c:
    if (ctx->pc == 0x3B854Cu) {
        ctx->pc = 0x3B854Cu;
            // 0x3b854c: 0x27a20168  addiu       $v0, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->pc = 0x3B8550u;
        goto label_3b8550;
    }
    ctx->pc = 0x3B8548u;
    {
        const bool branch_taken_0x3b8548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8548) {
            ctx->pc = 0x3B854Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8548u;
            // 0x3b854c: 0x27a20168  addiu       $v0, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8554u;
            goto label_3b8554;
        }
    }
    ctx->pc = 0x3B8550u;
label_3b8550:
    // 0x3b8550: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x3b8550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3b8554:
    // 0x3b8554: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8558:
    // 0x3b8558: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3b8558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3b855c:
    // 0x3b855c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x3b855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8560:
    // 0x3b8560: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x3b8560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8564:
    // 0x3b8564: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b8564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b8568:
    // 0x3b8568: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x3b8568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_3b856c:
    // 0x3b856c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3b856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8570:
    // 0x3b8570: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8574:
    // 0x3b8574: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3b8578:
    if (ctx->pc == 0x3B8578u) {
        ctx->pc = 0x3B8578u;
            // 0x3b8578: 0x27a20164  addiu       $v0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->pc = 0x3B857Cu;
        goto label_3b857c;
    }
    ctx->pc = 0x3B8574u;
    {
        const bool branch_taken_0x3b8574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8574) {
            ctx->pc = 0x3B8578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8574u;
            // 0x3b8578: 0x27a20164  addiu       $v0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8580u;
            goto label_3b8580;
        }
    }
    ctx->pc = 0x3B857Cu;
label_3b857c:
    // 0x3b857c: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x3b857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3b8580:
    // 0x3b8580: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8584:
    // 0x3b8584: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3b8584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b8588:
    // 0x3b8588: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3b8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b858c:
    // 0x3b858c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x3b858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8590:
    // 0x3b8590: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b8590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b8594:
    // 0x3b8594: 0x1000000b  b           . + 4 + (0xB << 2)
label_3b8598:
    if (ctx->pc == 0x3B8598u) {
        ctx->pc = 0x3B8598u;
            // 0x3b8598: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->pc = 0x3B859Cu;
        goto label_3b859c;
    }
    ctx->pc = 0x3B8594u;
    {
        const bool branch_taken_0x3b8594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8594u;
            // 0x3b8598: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8594) {
            ctx->pc = 0x3B85C4u;
            goto label_3b85c4;
        }
    }
    ctx->pc = 0x3B859Cu;
label_3b859c:
    // 0x3b859c: 0xe60c0004  swc1        $f12, 0x4($s0)
    ctx->pc = 0x3b859cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3b85a0:
    // 0x3b85a0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x3b85a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b85a4:
    // 0x3b85a4: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x3b85a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_3b85a8:
    // 0x3b85a8: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3b85a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3b85ac:
    // 0x3b85ac: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x3b85acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b85b0:
    // 0x3b85b0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3b85b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3b85b4:
    // 0x3b85b4: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x3b85b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b85b8:
    // 0x3b85b8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3b85b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3b85bc:
    // 0x3b85bc: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x3b85bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b85c0:
    // 0x3b85c0: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3b85c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_3b85c4:
    // 0x3b85c4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b85c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3b85c8:
    // 0x3b85c8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x3b85c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b85cc:
    // 0x3b85cc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3b85ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3b85d0:
    // 0x3b85d0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3b85d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b85d4:
    // 0x3b85d4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3b85d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b85d8:
    // 0x3b85d8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3b85d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b85dc:
    // 0x3b85dc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3b85dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b85e0:
    // 0x3b85e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3b85e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b85e4:
    // 0x3b85e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3b85e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b85e8:
    // 0x3b85e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3b85e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b85ec:
    // 0x3b85ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3b85ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b85f0:
    // 0x3b85f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b85f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b85f4:
    // 0x3b85f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b85f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b85f8:
    // 0x3b85f8: 0x3e00008  jr          $ra
label_3b85fc:
    if (ctx->pc == 0x3B85FCu) {
        ctx->pc = 0x3B85FCu;
            // 0x3b85fc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3B8600u;
        goto label_3b8600;
    }
    ctx->pc = 0x3B85F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B85FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B85F8u;
            // 0x3b85fc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B8600u;
label_3b8600:
    // 0x3b8600: 0x90a30040  lbu         $v1, 0x40($a1)
    ctx->pc = 0x3b8600u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
label_3b8604:
    // 0x3b8604: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_3b8608:
    if (ctx->pc == 0x3B8608u) {
        ctx->pc = 0x3B860Cu;
        goto label_3b860c;
    }
    ctx->pc = 0x3B8604u;
    {
        const bool branch_taken_0x3b8604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8604) {
            ctx->pc = 0x3B86D4u;
            goto label_3b86d4;
        }
    }
    ctx->pc = 0x3B860Cu;
label_3b860c:
    // 0x3b860c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3b860cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3b8610:
    // 0x3b8610: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3b8610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8614:
    // 0x3b8614: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3b8614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3b8618:
    // 0x3b8618: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x3b8618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_3b861c:
    // 0x3b861c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3b861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b8620:
    // 0x3b8620: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b8620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b8624:
    // 0x3b8624: 0x0  nop
    ctx->pc = 0x3b8624u;
    // NOP
label_3b8628:
    // 0x3b8628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b8628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b862c:
    // 0x3b862c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b862cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8630:
    // 0x3b8630: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_3b8634:
    if (ctx->pc == 0x3B8634u) {
        ctx->pc = 0x3B8638u;
        goto label_3b8638;
    }
    ctx->pc = 0x3B8630u;
    {
        const bool branch_taken_0x3b8630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8630) {
            ctx->pc = 0x3B86D4u;
            goto label_3b86d4;
        }
    }
    ctx->pc = 0x3B8638u;
label_3b8638:
    // 0x3b8638: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x3b8638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b863c:
    // 0x3b863c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b863cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b8640:
    // 0x3b8640: 0x0  nop
    ctx->pc = 0x3b8640u;
    // NOP
label_3b8644:
    // 0x3b8644: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3b8644u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8648:
    // 0x3b8648: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_3b864c:
    if (ctx->pc == 0x3B864Cu) {
        ctx->pc = 0x3B864Cu;
            // 0x3b864c: 0xc5000000  lwc1        $f0, 0x0($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3B8650u;
        goto label_3b8650;
    }
    ctx->pc = 0x3B8648u;
    {
        const bool branch_taken_0x3b8648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8648) {
            ctx->pc = 0x3B864Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8648u;
            // 0x3b864c: 0xc5000000  lwc1        $f0, 0x0($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8690u;
            goto label_3b8690;
        }
    }
    ctx->pc = 0x3B8650u;
label_3b8650:
    // 0x3b8650: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b8654:
    // 0x3b8654: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3b8654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3b8658:
    // 0x3b8658: 0x94630028  lhu         $v1, 0x28($v1)
    ctx->pc = 0x3b8658u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3b865c:
    // 0x3b865c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3b8660:
    if (ctx->pc == 0x3B8660u) {
        ctx->pc = 0x3B8660u;
            // 0x3b8660: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3B8664u;
        goto label_3b8664;
    }
    ctx->pc = 0x3B865Cu;
    {
        const bool branch_taken_0x3b865c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3b865c) {
            ctx->pc = 0x3B8660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B865Cu;
            // 0x3b8660: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8670u;
            goto label_3b8670;
        }
    }
    ctx->pc = 0x3B8664u;
label_3b8664:
    // 0x3b8664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8668:
    // 0x3b8668: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b866c:
    if (ctx->pc == 0x3B866Cu) {
        ctx->pc = 0x3B866Cu;
            // 0x3b866c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B8670u;
        goto label_3b8670;
    }
    ctx->pc = 0x3B8668u;
    {
        const bool branch_taken_0x3b8668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8668u;
            // 0x3b866c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8668) {
            ctx->pc = 0x3B8688u;
            goto label_3b8688;
        }
    }
    ctx->pc = 0x3B8670u;
label_3b8670:
    // 0x3b8670: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b8670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3b8674:
    // 0x3b8674: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b8674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b8678:
    // 0x3b8678: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b8678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b867c:
    // 0x3b867c: 0x0  nop
    ctx->pc = 0x3b867cu;
    // NOP
label_3b8680:
    // 0x3b8680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b8680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b8684:
    // 0x3b8684: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b8684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b8688:
    // 0x3b8688: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x3b8688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_3b868c:
    // 0x3b868c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3b868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8690:
    // 0x3b8690: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3b8690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3b8694:
    // 0x3b8694: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3b8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8698:
    // 0x3b8698: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x3b8698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b869c:
    // 0x3b869c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3b869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b86a0:
    // 0x3b86a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b86a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b86a4:
    // 0x3b86a4: 0x460d1081  sub.s       $f2, $f2, $f13
    ctx->pc = 0x3b86a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
label_3b86a8:
    // 0x3b86a8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3b86a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3b86ac:
    // 0x3b86ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b86acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b86b0:
    // 0x3b86b0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x3b86b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_3b86b4:
    // 0x3b86b4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3b86b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b86b8:
    // 0x3b86b8: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x3b86b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_3b86bc:
    // 0x3b86bc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3b86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b86c0:
    // 0x3b86c0: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x3b86c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_3b86c4:
    // 0x3b86c4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3b86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b86c8:
    // 0x3b86c8: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x3b86c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_3b86cc:
    // 0x3b86cc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3b86ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b86d0:
    // 0x3b86d0: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x3b86d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_3b86d4:
    // 0x3b86d4: 0x3e00008  jr          $ra
label_3b86d8:
    if (ctx->pc == 0x3B86D8u) {
        ctx->pc = 0x3B86DCu;
        goto label_3b86dc;
    }
    ctx->pc = 0x3B86D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B86DCu;
label_3b86dc:
    // 0x3b86dc: 0x0  nop
    ctx->pc = 0x3b86dcu;
    // NOP
label_3b86e0:
    // 0x3b86e0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3b86e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_3b86e4:
    // 0x3b86e4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3b86e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3b86e8:
    // 0x3b86e8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3b86e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3b86ec:
    // 0x3b86ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3b86ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3b86f0:
    // 0x3b86f0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x3b86f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b86f4:
    // 0x3b86f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3b86f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3b86f8:
    // 0x3b86f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b86f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b86fc:
    // 0x3b86fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b86fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b8700:
    // 0x3b8700: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b8700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b8704:
    // 0x3b8704: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b8704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b8708:
    // 0x3b8708: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b8708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b870c:
    // 0x3b870c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b8710:
    // 0x3b8710: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x3b8710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b8714:
    // 0x3b8714: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b8714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b8718:
    // 0x3b8718: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b8718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b871c:
    // 0x3b871c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b871cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b8720:
    // 0x3b8720: 0xafa900cc  sw          $t1, 0xCC($sp)
    ctx->pc = 0x3b8720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 9));
label_3b8724:
    // 0x3b8724: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3b8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3b8728:
    // 0x3b8728: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3b8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b872c:
    // 0x3b872c: 0xafab00c8  sw          $t3, 0xC8($sp)
    ctx->pc = 0x3b872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 11));
label_3b8730:
    // 0x3b8730: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b8730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b8734:
    // 0x3b8734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b8734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b8738:
    // 0x3b8738: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3b8738u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b873c:
    // 0x3b873c: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x3b873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8740:
    // 0x3b8740: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3b8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3b8744:
    // 0x3b8744: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x3b8744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8748:
    // 0x3b8748: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x3b8748u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b874c:
    // 0x3b874c: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x3b874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8750:
    // 0x3b8750: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x3b8750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3b8754:
    // 0x3b8754: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b8754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b8758:
    // 0x3b8758: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x3b8758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3b875c:
    // 0x3b875c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x3b875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8760:
    // 0x3b8760: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x3b8760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3b8764:
    // 0x3b8764: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3b8764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8768:
    // 0x3b8768: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x3b8768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3b876c:
    // 0x3b876c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3b876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8770:
    // 0x3b8770: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x3b8770u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_3b8774:
    // 0x3b8774: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3b8774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8778:
    // 0x3b8778: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x3b8778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3b877c:
    // 0x3b877c: 0xc6540004  lwc1        $f20, 0x4($s2)
    ctx->pc = 0x3b877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b8780:
    // 0x3b8780: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_3b8784:
    if (ctx->pc == 0x3B8784u) {
        ctx->pc = 0x3B8784u;
            // 0x3b8784: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->pc = 0x3B8788u;
        goto label_3b8788;
    }
    ctx->pc = 0x3B8780u;
    {
        const bool branch_taken_0x3b8780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8780u;
            // 0x3b8784: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8780) {
            ctx->pc = 0x3B87A0u;
            goto label_3b87a0;
        }
    }
    ctx->pc = 0x3B8788u;
label_3b8788:
    // 0x3b8788: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3b8788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b878c:
    // 0x3b878c: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x3b878cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_3b8790:
    // 0x3b8790: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3b8790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8794:
    // 0x3b8794: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x3b8794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_3b8798:
    // 0x3b8798: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3b8798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b879c:
    // 0x3b879c: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x3b879cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_3b87a0:
    // 0x3b87a0: 0x51000008  beql        $t0, $zero, . + 4 + (0x8 << 2)
label_3b87a4:
    if (ctx->pc == 0x3B87A4u) {
        ctx->pc = 0x3B87A4u;
            // 0x3b87a4: 0xc6400034  lwc1        $f0, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3B87A8u;
        goto label_3b87a8;
    }
    ctx->pc = 0x3B87A0u;
    {
        const bool branch_taken_0x3b87a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b87a0) {
            ctx->pc = 0x3B87A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B87A0u;
            // 0x3b87a4: 0xc6400034  lwc1        $f0, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B87C4u;
            goto label_3b87c4;
        }
    }
    ctx->pc = 0x3B87A8u;
label_3b87a8:
    // 0x3b87a8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3b87a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b87ac:
    // 0x3b87ac: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x3b87acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3b87b0:
    // 0x3b87b0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3b87b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b87b4:
    // 0x3b87b4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x3b87b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3b87b8:
    // 0x3b87b8: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3b87b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b87bc:
    // 0x3b87bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b87c0:
    if (ctx->pc == 0x3B87C0u) {
        ctx->pc = 0x3B87C0u;
            // 0x3b87c0: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->pc = 0x3B87C4u;
        goto label_3b87c4;
    }
    ctx->pc = 0x3B87BCu;
    {
        const bool branch_taken_0x3b87bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B87C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B87BCu;
            // 0x3b87c0: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b87bc) {
            ctx->pc = 0x3B87D8u;
            goto label_3b87d8;
        }
    }
    ctx->pc = 0x3B87C4u;
label_3b87c4:
    // 0x3b87c4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x3b87c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3b87c8:
    // 0x3b87c8: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x3b87c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b87cc:
    // 0x3b87cc: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x3b87ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3b87d0:
    // 0x3b87d0: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x3b87d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b87d4:
    // 0x3b87d4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x3b87d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3b87d8:
    // 0x3b87d8: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
label_3b87dc:
    if (ctx->pc == 0x3B87DCu) {
        ctx->pc = 0x3B87DCu;
            // 0x3b87dc: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x3B87E0u;
        goto label_3b87e0;
    }
    ctx->pc = 0x3B87D8u;
    {
        const bool branch_taken_0x3b87d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b87d8) {
            ctx->pc = 0x3B87DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B87D8u;
            // 0x3b87dc: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B87F8u;
            goto label_3b87f8;
        }
    }
    ctx->pc = 0x3B87E0u;
label_3b87e0:
    // 0x3b87e0: 0x3c024f80  lui         $v0, 0x4F80
    ctx->pc = 0x3b87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20352 << 16));
label_3b87e4:
    // 0x3b87e4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3b87e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3b87e8:
    // 0x3b87e8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3b87e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3b87ec:
    // 0x3b87ec: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3b87ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3b87f0:
    // 0x3b87f0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3b87f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3b87f4:
    // 0x3b87f4: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x3b87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3b87f8:
    // 0x3b87f8: 0x26570024  addiu       $s7, $s2, 0x24
    ctx->pc = 0x3b87f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_3b87fc:
    // 0x3b87fc: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x3b87fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3b8800:
    // 0x3b8800: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3b8800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3b8804:
    // 0x3b8804: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3b8808:
    if (ctx->pc == 0x3B8808u) {
        ctx->pc = 0x3B8808u;
            // 0x3b8808: 0x26a20014  addiu       $v0, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->pc = 0x3B880Cu;
        goto label_3b880c;
    }
    ctx->pc = 0x3B8804u;
    {
        const bool branch_taken_0x3b8804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8804u;
            // 0x3b8808: 0x26a20014  addiu       $v0, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8804) {
            ctx->pc = 0x3B8814u;
            goto label_3b8814;
        }
    }
    ctx->pc = 0x3B880Cu;
label_3b880c:
    // 0x3b880c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b8810:
    if (ctx->pc == 0x3B8810u) {
        ctx->pc = 0x3B8810u;
            // 0x3b8810: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8814u;
        goto label_3b8814;
    }
    ctx->pc = 0x3B880Cu;
    {
        const bool branch_taken_0x3b880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B880Cu;
            // 0x3b8810: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b880c) {
            ctx->pc = 0x3B8818u;
            goto label_3b8818;
        }
    }
    ctx->pc = 0x3B8814u;
label_3b8814:
    // 0x3b8814: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b8814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8818:
    // 0x3b8818: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b881c:
    // 0x3b881c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x3b881cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_3b8820:
    // 0x3b8820: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x3b8820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3b8824:
    // 0x3b8824: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b8824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b8828:
    // 0x3b8828: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3b8828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3b882c:
    // 0x3b882c: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
label_3b8830:
    if (ctx->pc == 0x3B8830u) {
        ctx->pc = 0x3B8830u;
            // 0x3b8830: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3B8834u;
        goto label_3b8834;
    }
    ctx->pc = 0x3B882Cu;
    {
        const bool branch_taken_0x3b882c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b882c) {
            ctx->pc = 0x3B8830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B882Cu;
            // 0x3b8830: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8838u;
            goto label_3b8838;
        }
    }
    ctx->pc = 0x3B8834u;
label_3b8834:
    // 0x3b8834: 0x26e30004  addiu       $v1, $s7, 0x4
    ctx->pc = 0x3b8834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_3b8838:
    // 0x3b8838: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b883c:
    // 0x3b883c: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x3b883cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
label_3b8840:
    // 0x3b8840: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b8840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b8844:
    // 0x3b8844: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3b8844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b8848:
    // 0x3b8848: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x3b8848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b884c:
    // 0x3b884c: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x3b884cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
label_3b8850:
    // 0x3b8850: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x3b8850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3b8854:
    // 0x3b8854: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x3b8854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3b8858:
    // 0x3b8858: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3b8858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b885c:
    // 0x3b885c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3b885cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3b8860:
    // 0x3b8860: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3b8864:
    if (ctx->pc == 0x3B8864u) {
        ctx->pc = 0x3B8864u;
            // 0x3b8864: 0xafa3015c  sw          $v1, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
        ctx->pc = 0x3B8868u;
        goto label_3b8868;
    }
    ctx->pc = 0x3B8860u;
    {
        const bool branch_taken_0x3b8860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8860u;
            // 0x3b8864: 0xafa3015c  sw          $v1, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8860) {
            ctx->pc = 0x3B8870u;
            goto label_3b8870;
        }
    }
    ctx->pc = 0x3B8868u;
label_3b8868:
    // 0x3b8868: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b886c:
    if (ctx->pc == 0x3B886Cu) {
        ctx->pc = 0x3B886Cu;
            // 0x3b886c: 0x27a3015c  addiu       $v1, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->pc = 0x3B8870u;
        goto label_3b8870;
    }
    ctx->pc = 0x3B8868u;
    {
        const bool branch_taken_0x3b8868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8868u;
            // 0x3b886c: 0x27a3015c  addiu       $v1, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8868) {
            ctx->pc = 0x3B8874u;
            goto label_3b8874;
        }
    }
    ctx->pc = 0x3B8870u;
label_3b8870:
    // 0x3b8870: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x3b8870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_3b8874:
    // 0x3b8874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b8874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8878:
    // 0x3b8878: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3b8878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3b887c:
    // 0x3b887c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3b887cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b8880:
    // 0x3b8880: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x3b8880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
label_3b8884:
    // 0x3b8884: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b8884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b8888:
    // 0x3b8888: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3b8888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3b888c:
    // 0x3b888c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3b888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b8890:
    // 0x3b8890: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x3b8890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_3b8894:
    // 0x3b8894: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x3b8894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3b8898:
    // 0x3b8898: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x3b8898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_3b889c:
    // 0x3b889c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b88a0:
    // 0x3b88a0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x3b88a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3b88a4:
    // 0x3b88a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3b88a8:
    if (ctx->pc == 0x3B88A8u) {
        ctx->pc = 0x3B88A8u;
            // 0x3b88a8: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x3B88ACu;
        goto label_3b88ac;
    }
    ctx->pc = 0x3B88A4u;
    {
        const bool branch_taken_0x3b88a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B88A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B88A4u;
            // 0x3b88a8: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88a4) {
            ctx->pc = 0x3B88B4u;
            goto label_3b88b4;
        }
    }
    ctx->pc = 0x3B88ACu;
label_3b88ac:
    // 0x3b88ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b88b0:
    if (ctx->pc == 0x3B88B0u) {
        ctx->pc = 0x3B88B0u;
            // 0x3b88b0: 0x27a20154  addiu       $v0, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->pc = 0x3B88B4u;
        goto label_3b88b4;
    }
    ctx->pc = 0x3B88ACu;
    {
        const bool branch_taken_0x3b88ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B88B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B88ACu;
            // 0x3b88b0: 0x27a20154  addiu       $v0, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88ac) {
            ctx->pc = 0x3B88B8u;
            goto label_3b88b8;
        }
    }
    ctx->pc = 0x3B88B4u;
label_3b88b4:
    // 0x3b88b4: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x3b88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3b88b8:
    // 0x3b88b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b88b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b88bc:
    // 0x3b88bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b88bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b88c0:
    // 0x3b88c0: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x3b88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3b88c4:
    // 0x3b88c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b88c8:
    // 0x3b88c8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3b88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_3b88cc:
    // 0x3b88cc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x3b88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3b88d0:
    // 0x3b88d0: 0x94500026  lhu         $s0, 0x26($v0)
    ctx->pc = 0x3b88d0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
label_3b88d4:
    // 0x3b88d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3b88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3b88d8:
    // 0x3b88d8: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x3b88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
label_3b88dc:
    // 0x3b88dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3b88e0:
    if (ctx->pc == 0x3B88E0u) {
        ctx->pc = 0x3B88E0u;
            // 0x3b88e0: 0xafa00164  sw          $zero, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
        ctx->pc = 0x3B88E4u;
        goto label_3b88e4;
    }
    ctx->pc = 0x3B88DCu;
    {
        const bool branch_taken_0x3b88dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B88E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B88DCu;
            // 0x3b88e0: 0xafa00164  sw          $zero, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88dc) {
            ctx->pc = 0x3B88E8u;
            goto label_3b88e8;
        }
    }
    ctx->pc = 0x3B88E4u;
label_3b88e4:
    // 0x3b88e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b88e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b88e8:
    // 0x3b88e8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x3b88e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3b88ec:
    // 0x3b88ec: 0x10000098  b           . + 4 + (0x98 << 2)
label_3b88f0:
    if (ctx->pc == 0x3B88F0u) {
        ctx->pc = 0x3B88F0u;
            // 0x3b88f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B88F4u;
        goto label_3b88f4;
    }
    ctx->pc = 0x3B88ECu;
    {
        const bool branch_taken_0x3b88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B88F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B88ECu;
            // 0x3b88f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88ec) {
            ctx->pc = 0x3B8B50u;
            goto label_3b8b50;
        }
    }
    ctx->pc = 0x3B88F4u;
label_3b88f4:
    // 0x3b88f4: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x3b88f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b88f8:
    // 0x3b88f8: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x3b88f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b88fc:
    // 0x3b88fc: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x3b88fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3b8900:
    // 0x3b8900: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x3b8900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_3b8904:
    // 0x3b8904: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x3b8904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3b8908:
    // 0x3b8908: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3b8908u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3b890c:
    // 0x3b890c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3b8910:
    if (ctx->pc == 0x3B8910u) {
        ctx->pc = 0x3B8914u;
        goto label_3b8914;
    }
    ctx->pc = 0x3B890Cu;
    {
        const bool branch_taken_0x3b890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b890c) {
            ctx->pc = 0x3B8950u;
            goto label_3b8950;
        }
    }
    ctx->pc = 0x3B8914u;
label_3b8914:
    // 0x3b8914: 0x8eb90048  lw          $t9, 0x48($s5)
    ctx->pc = 0x3b8914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3b8918:
    // 0x3b8918: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b8918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b891c:
    // 0x3b891c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8920:
    // 0x3b8920: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x3b8920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3b8924:
    // 0x3b8924: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x3b8924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3b8928:
    // 0x3b8928: 0x27a80168  addiu       $t0, $sp, 0x168
    ctx->pc = 0x3b8928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_3b892c:
    // 0x3b892c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3b892cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3b8930:
    // 0x3b8930: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b8930u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3b8934:
    // 0x3b8934: 0x27a90160  addiu       $t1, $sp, 0x160
    ctx->pc = 0x3b8934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3b8938:
    // 0x3b8938: 0x27aa0164  addiu       $t2, $sp, 0x164
    ctx->pc = 0x3b8938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_3b893c:
    // 0x3b893c: 0x320f809  jalr        $t9
label_3b8940:
    if (ctx->pc == 0x3B8940u) {
        ctx->pc = 0x3B8940u;
            // 0x3b8940: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8944u;
        goto label_3b8944;
    }
    ctx->pc = 0x3B893Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B8944u);
        ctx->pc = 0x3B8940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B893Cu;
            // 0x3b8940: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B8944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B8944u; }
            if (ctx->pc != 0x3B8944u) { return; }
        }
        }
    }
    ctx->pc = 0x3B8944u;
label_3b8944:
    // 0x3b8944: 0x10000080  b           . + 4 + (0x80 << 2)
label_3b8948:
    if (ctx->pc == 0x3B8948u) {
        ctx->pc = 0x3B894Cu;
        goto label_3b894c;
    }
    ctx->pc = 0x3B8944u;
    {
        const bool branch_taken_0x3b8944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8944) {
            ctx->pc = 0x3B8B48u;
            goto label_3b8b48;
        }
    }
    ctx->pc = 0x3B894Cu;
label_3b894c:
    // 0x3b894c: 0x0  nop
    ctx->pc = 0x3b894cu;
    // NOP
label_3b8950:
    // 0x3b8950: 0x92420041  lbu         $v0, 0x41($s2)
    ctx->pc = 0x3b8950u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 65)));
label_3b8954:
    // 0x3b8954: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3b8958:
    if (ctx->pc == 0x3B8958u) {
        ctx->pc = 0x3B895Cu;
        goto label_3b895c;
    }
    ctx->pc = 0x3B8954u;
    {
        const bool branch_taken_0x3b8954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8954) {
            ctx->pc = 0x3B89B8u;
            goto label_3b89b8;
        }
    }
    ctx->pc = 0x3B895Cu;
label_3b895c:
    // 0x3b895c: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x3b895cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_3b8960:
    // 0x3b8960: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x3b8960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_3b8964:
    // 0x3b8964: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x3b8964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_3b8968:
    // 0x3b8968: 0x27a6016e  addiu       $a2, $sp, 0x16E
    ctx->pc = 0x3b8968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 366));
label_3b896c:
    // 0x3b896c: 0xc0ee610  jal         func_3B9840
label_3b8970:
    if (ctx->pc == 0x3B8970u) {
        ctx->pc = 0x3B8970u;
            // 0x3b8970: 0xa7a2016e  sh          $v0, 0x16E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 366), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3B8974u;
        goto label_3b8974;
    }
    ctx->pc = 0x3B896Cu;
    SET_GPR_U32(ctx, 31, 0x3B8974u);
    ctx->pc = 0x3B8970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B896Cu;
            // 0x3b8970: 0xa7a2016e  sh          $v0, 0x16E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 366), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9840u;
    if (runtime->hasFunction(0x3B9840u)) {
        auto targetFn = runtime->lookupFunction(0x3B9840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8974u; }
        if (ctx->pc != 0x3B8974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9840_0x3b9840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8974u; }
        if (ctx->pc != 0x3B8974u) { return; }
    }
    ctx->pc = 0x3B8974u;
label_3b8974:
    // 0x3b8974: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x3b8974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_3b8978:
    // 0x3b8978: 0x26c20014  addiu       $v0, $s6, 0x14
    ctx->pc = 0x3b8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_3b897c:
    // 0x3b897c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_3b8980:
    if (ctx->pc == 0x3B8980u) {
        ctx->pc = 0x3B8980u;
            // 0x3b8980: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x3B8984u;
        goto label_3b8984;
    }
    ctx->pc = 0x3B897Cu;
    {
        const bool branch_taken_0x3b897c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b897c) {
            ctx->pc = 0x3B8980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B897Cu;
            // 0x3b8980: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8988u;
            goto label_3b8988;
        }
    }
    ctx->pc = 0x3B8984u;
label_3b8984:
    // 0x3b8984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b8984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b8988:
    // 0x3b8988: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3b898c:
    if (ctx->pc == 0x3B898Cu) {
        ctx->pc = 0x3B898Cu;
            // 0x3b898c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3B8990u;
        goto label_3b8990;
    }
    ctx->pc = 0x3B8988u;
    {
        const bool branch_taken_0x3b8988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8988) {
            ctx->pc = 0x3B898Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8988u;
            // 0x3b898c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8998u;
            goto label_3b8998;
        }
    }
    ctx->pc = 0x3B8990u;
label_3b8990:
    // 0x3b8990: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b8994:
    if (ctx->pc == 0x3B8994u) {
        ctx->pc = 0x3B8994u;
            // 0x3b8994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8998u;
        goto label_3b8998;
    }
    ctx->pc = 0x3B8990u;
    {
        const bool branch_taken_0x3b8990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8990u;
            // 0x3b8994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8990) {
            ctx->pc = 0x3B89A8u;
            goto label_3b89a8;
        }
    }
    ctx->pc = 0x3B8998u;
label_3b8998:
    // 0x3b8998: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b8998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b899c:
    // 0x3b899c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3b899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b89a0:
    // 0x3b89a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3b89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b89a4:
    // 0x3b89a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b89a8:
    // 0x3b89a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b89a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b89ac:
    // 0x3b89ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_3b89b0:
    if (ctx->pc == 0x3B89B0u) {
        ctx->pc = 0x3B89B0u;
            // 0x3b89b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B89B4u;
        goto label_3b89b4;
    }
    ctx->pc = 0x3B89ACu;
    {
        const bool branch_taken_0x3b89ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B89B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B89ACu;
            // 0x3b89b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b89ac) {
            ctx->pc = 0x3B89E8u;
            goto label_3b89e8;
        }
    }
    ctx->pc = 0x3B89B4u;
label_3b89b4:
    // 0x3b89b4: 0x0  nop
    ctx->pc = 0x3b89b4u;
    // NOP
label_3b89b8:
    // 0x3b89b8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_3b89bc:
    if (ctx->pc == 0x3B89BCu) {
        ctx->pc = 0x3B89BCu;
            // 0x3b89bc: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3B89C0u;
        goto label_3b89c0;
    }
    ctx->pc = 0x3B89B8u;
    {
        const bool branch_taken_0x3b89b8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x3b89b8) {
            ctx->pc = 0x3B89BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B89B8u;
            // 0x3b89bc: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B89CCu;
            goto label_3b89cc;
        }
    }
    ctx->pc = 0x3B89C0u;
label_3b89c0:
    // 0x3b89c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3b89c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b89c4:
    // 0x3b89c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b89c8:
    if (ctx->pc == 0x3B89C8u) {
        ctx->pc = 0x3B89C8u;
            // 0x3b89c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B89CCu;
        goto label_3b89cc;
    }
    ctx->pc = 0x3B89C4u;
    {
        const bool branch_taken_0x3b89c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B89C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B89C4u;
            // 0x3b89c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b89c4) {
            ctx->pc = 0x3B89E4u;
            goto label_3b89e4;
        }
    }
    ctx->pc = 0x3B89CCu;
label_3b89cc:
    // 0x3b89cc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3b89ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_3b89d0:
    // 0x3b89d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b89d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b89d4:
    // 0x3b89d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b89d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b89d8:
    // 0x3b89d8: 0x0  nop
    ctx->pc = 0x3b89d8u;
    // NOP
label_3b89dc:
    // 0x3b89dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b89dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b89e0:
    // 0x3b89e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b89e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b89e4:
    // 0x3b89e4: 0x0  nop
    ctx->pc = 0x3b89e4u;
    // NOP
label_3b89e8:
    // 0x3b89e8: 0x8eb90048  lw          $t9, 0x48($s5)
    ctx->pc = 0x3b89e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3b89ec:
    // 0x3b89ec: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3b89ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b89f0:
    // 0x3b89f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b89f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b89f4:
    // 0x3b89f4: 0xc7ad0160  lwc1        $f13, 0x160($sp)
    ctx->pc = 0x3b89f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3b89f8:
    // 0x3b89f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b89f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b89fc:
    // 0x3b89fc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3b89fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3b8a00:
    // 0x3b8a00: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3b8a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b8a04:
    // 0x3b8a04: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3b8a04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b8a08:
    // 0x3b8a08: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x3b8a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3b8a0c:
    // 0x3b8a0c: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x3b8a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3b8a10:
    // 0x3b8a10: 0x320f809  jalr        $t9
label_3b8a14:
    if (ctx->pc == 0x3B8A14u) {
        ctx->pc = 0x3B8A14u;
            // 0x3b8a14: 0x27a90168  addiu       $t1, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->pc = 0x3B8A18u;
        goto label_3b8a18;
    }
    ctx->pc = 0x3B8A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B8A18u);
        ctx->pc = 0x3B8A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8A10u;
            // 0x3b8a14: 0x27a90168  addiu       $t1, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B8A18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B8A18u; }
            if (ctx->pc != 0x3B8A18u) { return; }
        }
        }
    }
    ctx->pc = 0x3B8A18u;
label_3b8a18:
    // 0x3b8a18: 0x8eb90048  lw          $t9, 0x48($s5)
    ctx->pc = 0x3b8a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3b8a1c:
    // 0x3b8a1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b8a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b8a20:
    // 0x3b8a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b8a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8a24:
    // 0x3b8a24: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x3b8a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3b8a28:
    // 0x3b8a28: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x3b8a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3b8a2c:
    // 0x3b8a2c: 0x27a80108  addiu       $t0, $sp, 0x108
    ctx->pc = 0x3b8a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_3b8a30:
    // 0x3b8a30: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b8a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b8a34:
    // 0x3b8a34: 0x320f809  jalr        $t9
label_3b8a38:
    if (ctx->pc == 0x3B8A38u) {
        ctx->pc = 0x3B8A38u;
            // 0x3b8a38: 0x27a900d0  addiu       $t1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3B8A3Cu;
        goto label_3b8a3c;
    }
    ctx->pc = 0x3B8A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B8A3Cu);
        ctx->pc = 0x3B8A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8A34u;
            // 0x3b8a38: 0x27a900d0  addiu       $t1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B8A3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B8A3Cu; }
            if (ctx->pc != 0x3B8A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B8A3Cu;
label_3b8a3c:
    // 0x3b8a3c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3b8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8a40:
    // 0x3b8a40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3b8a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b8a44:
    // 0x3b8a44: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x3b8a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3b8a48:
    // 0x3b8a48: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x3b8a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8a4c:
    // 0x3b8a4c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3b8a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_3b8a50:
    // 0x3b8a50: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x3b8a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8a54:
    // 0x3b8a54: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x3b8a54u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_3b8a58:
    // 0x3b8a58: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x3b8a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b8a5c:
    // 0x3b8a5c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3b8a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3b8a60:
    // 0x3b8a60: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x3b8a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8a64:
    // 0x3b8a64: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3b8a64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3b8a68:
    // 0x3b8a68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8a6c:
    // 0x3b8a6c: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x3b8a6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3b8a70:
    // 0x3b8a70: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3b8a74:
    if (ctx->pc == 0x3B8A74u) {
        ctx->pc = 0x3B8A74u;
            // 0x3b8a74: 0xe7a1014c  swc1        $f1, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->pc = 0x3B8A78u;
        goto label_3b8a78;
    }
    ctx->pc = 0x3B8A70u;
    {
        const bool branch_taken_0x3b8a70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B8A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8A70u;
            // 0x3b8a74: 0xe7a1014c  swc1        $f1, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8a70) {
            ctx->pc = 0x3B8A80u;
            goto label_3b8a80;
        }
    }
    ctx->pc = 0x3B8A78u;
label_3b8a78:
    // 0x3b8a78: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b8a7c:
    if (ctx->pc == 0x3B8A7Cu) {
        ctx->pc = 0x3B8A7Cu;
            // 0x3b8a7c: 0x27a20168  addiu       $v0, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->pc = 0x3B8A80u;
        goto label_3b8a80;
    }
    ctx->pc = 0x3B8A78u;
    {
        const bool branch_taken_0x3b8a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8A78u;
            // 0x3b8a7c: 0x27a20168  addiu       $v0, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8a78) {
            ctx->pc = 0x3B8A84u;
            goto label_3b8a84;
        }
    }
    ctx->pc = 0x3B8A80u;
label_3b8a80:
    // 0x3b8a80: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x3b8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_3b8a84:
    // 0x3b8a84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8a88:
    // 0x3b8a88: 0x12600029  beqz        $s3, . + 4 + (0x29 << 2)
label_3b8a8c:
    if (ctx->pc == 0x3B8A8Cu) {
        ctx->pc = 0x3B8A8Cu;
            // 0x3b8a8c: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
        ctx->pc = 0x3B8A90u;
        goto label_3b8a90;
    }
    ctx->pc = 0x3B8A88u;
    {
        const bool branch_taken_0x3b8a88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8A88u;
            // 0x3b8a8c: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8a88) {
            ctx->pc = 0x3B8B30u;
            goto label_3b8b30;
        }
    }
    ctx->pc = 0x3B8A90u;
label_3b8a90:
    // 0x3b8a90: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_3b8a94:
    if (ctx->pc == 0x3B8A94u) {
        ctx->pc = 0x3B8A98u;
        goto label_3b8a98;
    }
    ctx->pc = 0x3B8A90u;
    {
        const bool branch_taken_0x3b8a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8a90) {
            ctx->pc = 0x3B8B30u;
            goto label_3b8b30;
        }
    }
    ctx->pc = 0x3B8A98u;
label_3b8a98:
    // 0x3b8a98: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3b8a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8a9c:
    // 0x3b8a9c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x3b8a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8aa0:
    // 0x3b8aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b8aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8aa4:
    // 0x3b8aa4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3b8aa8:
    if (ctx->pc == 0x3B8AA8u) {
        ctx->pc = 0x3B8AA8u;
            // 0x3b8aa8: 0x27a200d0  addiu       $v0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3B8AACu;
        goto label_3b8aac;
    }
    ctx->pc = 0x3B8AA4u;
    {
        const bool branch_taken_0x3b8aa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8aa4) {
            ctx->pc = 0x3B8AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8AA4u;
            // 0x3b8aa8: 0x27a200d0  addiu       $v0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8AB0u;
            goto label_3b8ab0;
        }
    }
    ctx->pc = 0x3B8AACu;
label_3b8aac:
    // 0x3b8aac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b8aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b8ab0:
    // 0x3b8ab0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8ab4:
    // 0x3b8ab4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3b8ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3b8ab8:
    // 0x3b8ab8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3b8ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8abc:
    // 0x3b8abc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x3b8abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8ac0:
    // 0x3b8ac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b8ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8ac4:
    // 0x3b8ac4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3b8ac8:
    if (ctx->pc == 0x3B8AC8u) {
        ctx->pc = 0x3B8AC8u;
            // 0x3b8ac8: 0x27a200d4  addiu       $v0, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->pc = 0x3B8ACCu;
        goto label_3b8acc;
    }
    ctx->pc = 0x3B8AC4u;
    {
        const bool branch_taken_0x3b8ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8ac4) {
            ctx->pc = 0x3B8AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8AC4u;
            // 0x3b8ac8: 0x27a200d4  addiu       $v0, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8AD0u;
            goto label_3b8ad0;
        }
    }
    ctx->pc = 0x3B8ACCu;
label_3b8acc:
    // 0x3b8acc: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x3b8accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3b8ad0:
    // 0x3b8ad0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8ad4:
    // 0x3b8ad4: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x3b8ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3b8ad8:
    // 0x3b8ad8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x3b8ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8adc:
    // 0x3b8adc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x3b8adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8ae0:
    // 0x3b8ae0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b8ae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b8ae4:
    // 0x3b8ae4: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x3b8ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3b8ae8:
    // 0x3b8ae8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3b8ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8aec:
    // 0x3b8aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8af0:
    // 0x3b8af0: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3b8af4:
    if (ctx->pc == 0x3B8AF4u) {
        ctx->pc = 0x3B8AF4u;
            // 0x3b8af4: 0x27a20148  addiu       $v0, $sp, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
        ctx->pc = 0x3B8AF8u;
        goto label_3b8af8;
    }
    ctx->pc = 0x3B8AF0u;
    {
        const bool branch_taken_0x3b8af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8af0) {
            ctx->pc = 0x3B8AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8AF0u;
            // 0x3b8af4: 0x27a20148  addiu       $v0, $sp, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8AFCu;
            goto label_3b8afc;
        }
    }
    ctx->pc = 0x3B8AF8u;
label_3b8af8:
    // 0x3b8af8: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x3b8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3b8afc:
    // 0x3b8afc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8b00:
    // 0x3b8b00: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3b8b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b8b04:
    // 0x3b8b04: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x3b8b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8b08:
    // 0x3b8b08: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x3b8b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8b0c:
    // 0x3b8b0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b8b0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b8b10:
    // 0x3b8b10: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x3b8b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3b8b14:
    // 0x3b8b14: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x3b8b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8b18:
    // 0x3b8b18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8b1c:
    // 0x3b8b1c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3b8b20:
    if (ctx->pc == 0x3B8B20u) {
        ctx->pc = 0x3B8B20u;
            // 0x3b8b20: 0x27a20144  addiu       $v0, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->pc = 0x3B8B24u;
        goto label_3b8b24;
    }
    ctx->pc = 0x3B8B1Cu;
    {
        const bool branch_taken_0x3b8b1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8b1c) {
            ctx->pc = 0x3B8B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8B1Cu;
            // 0x3b8b20: 0x27a20144  addiu       $v0, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8B28u;
            goto label_3b8b28;
        }
    }
    ctx->pc = 0x3B8B24u;
label_3b8b24:
    // 0x3b8b24: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x3b8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_3b8b28:
    // 0x3b8b28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3b8b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8b2c:
    // 0x3b8b2c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x3b8b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b8b30:
    // 0x3b8b30: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3b8b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8b34:
    // 0x3b8b34: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x3b8b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_3b8b38:
    // 0x3b8b38: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x3b8b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8b3c:
    // 0x3b8b3c: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x3b8b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_3b8b40:
    // 0x3b8b40: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x3b8b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8b44:
    // 0x3b8b44: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x3b8b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_3b8b48:
    // 0x3b8b48: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3b8b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_3b8b4c:
    // 0x3b8b4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b8b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b8b50:
    // 0x3b8b50: 0xc0ee328  jal         func_3B8CA0
label_3b8b54:
    if (ctx->pc == 0x3B8B54u) {
        ctx->pc = 0x3B8B54u;
            // 0x3b8b54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8B58u;
        goto label_3b8b58;
    }
    ctx->pc = 0x3B8B50u;
    SET_GPR_U32(ctx, 31, 0x3B8B58u);
    ctx->pc = 0x3B8B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8B50u;
            // 0x3b8b54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CA0u;
    if (runtime->hasFunction(0x3B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8B58u; }
        if (ctx->pc != 0x3B8B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CA0_0x3b8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8B58u; }
        if (ctx->pc != 0x3B8B58u) { return; }
    }
    ctx->pc = 0x3B8B58u;
label_3b8b58:
    // 0x3b8b58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3b8b5c:
    if (ctx->pc == 0x3B8B5Cu) {
        ctx->pc = 0x3B8B60u;
        goto label_3b8b60;
    }
    ctx->pc = 0x3B8B58u;
    {
        const bool branch_taken_0x3b8b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b58) {
            ctx->pc = 0x3B8B70u;
            goto label_3b8b70;
        }
    }
    ctx->pc = 0x3B8B60u;
label_3b8b60:
    // 0x3b8b60: 0x23e082b  sltu        $at, $s1, $fp
    ctx->pc = 0x3b8b60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3b8b64:
    // 0x3b8b64: 0x5420ff63  bnel        $at, $zero, . + 4 + (-0x9D << 2)
label_3b8b68:
    if (ctx->pc == 0x3B8B68u) {
        ctx->pc = 0x3B8B68u;
            // 0x3b8b68: 0xc6420034  lwc1        $f2, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3B8B6Cu;
        goto label_3b8b6c;
    }
    ctx->pc = 0x3B8B64u;
    {
        const bool branch_taken_0x3b8b64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b64) {
            ctx->pc = 0x3B8B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8B64u;
            // 0x3b8b68: 0xc6420034  lwc1        $f2, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B88F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b88f4;
        }
    }
    ctx->pc = 0x3B8B6Cu;
label_3b8b6c:
    // 0x3b8b6c: 0x0  nop
    ctx->pc = 0x3b8b6cu;
    // NOP
label_3b8b70:
    // 0x3b8b70: 0x5260001d  beql        $s3, $zero, . + 4 + (0x1D << 2)
label_3b8b74:
    if (ctx->pc == 0x3B8B74u) {
        ctx->pc = 0x3B8B74u;
            // 0x3b8b74: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->pc = 0x3B8B78u;
        goto label_3b8b78;
    }
    ctx->pc = 0x3B8B70u;
    {
        const bool branch_taken_0x3b8b70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b70) {
            ctx->pc = 0x3B8B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8B70u;
            // 0x3b8b74: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8BE8u;
            goto label_3b8be8;
        }
    }
    ctx->pc = 0x3B8B78u;
label_3b8b78:
    // 0x3b8b78: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x3b8b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8b7c:
    // 0x3b8b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b8b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8b80:
    // 0x3b8b80: 0x0  nop
    ctx->pc = 0x3b8b80u;
    // NOP
label_3b8b84:
    // 0x3b8b84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b8b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8b88:
    // 0x3b8b88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3b8b8c:
    if (ctx->pc == 0x3B8B8Cu) {
        ctx->pc = 0x3B8B8Cu;
            // 0x3b8b8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B8B90u;
        goto label_3b8b90;
    }
    ctx->pc = 0x3B8B88u;
    {
        const bool branch_taken_0x3b8b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B8B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8B88u;
            // 0x3b8b8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8b88) {
            ctx->pc = 0x3B8B94u;
            goto label_3b8b94;
        }
    }
    ctx->pc = 0x3B8B90u;
label_3b8b90:
    // 0x3b8b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b8b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b8b94:
    // 0x3b8b94: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x3b8b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8b98:
    // 0x3b8b98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3b8b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b8b9c:
    // 0x3b8b9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b8b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8ba0:
    // 0x3b8ba0: 0x0  nop
    ctx->pc = 0x3b8ba0u;
    // NOP
label_3b8ba4:
    // 0x3b8ba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b8ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b8ba8:
    // 0x3b8ba8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3b8bac:
    if (ctx->pc == 0x3B8BACu) {
        ctx->pc = 0x3B8BACu;
            // 0x3b8bac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B8BB0u;
        goto label_3b8bb0;
    }
    ctx->pc = 0x3B8BA8u;
    {
        const bool branch_taken_0x3b8ba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B8BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8BA8u;
            // 0x3b8bac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ba8) {
            ctx->pc = 0x3B8BB4u;
            goto label_3b8bb4;
        }
    }
    ctx->pc = 0x3B8BB0u;
label_3b8bb0:
    // 0x3b8bb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b8bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b8bb4:
    // 0x3b8bb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b8bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b8bb8:
    // 0x3b8bb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b8bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3b8bbc:
    // 0x3b8bbc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_3b8bc0:
    if (ctx->pc == 0x3B8BC0u) {
        ctx->pc = 0x3B8BC4u;
        goto label_3b8bc4;
    }
    ctx->pc = 0x3B8BBCu;
    {
        const bool branch_taken_0x3b8bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8bbc) {
            ctx->pc = 0x3B8BE4u;
            goto label_3b8be4;
        }
    }
    ctx->pc = 0x3B8BC4u;
label_3b8bc4:
    // 0x3b8bc4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x3b8bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8bc8:
    // 0x3b8bc8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3b8bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8bcc:
    // 0x3b8bcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b8bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b8bd0:
    // 0x3b8bd0: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3b8bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b8bd4:
    // 0x3b8bd4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3b8bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8bd8:
    // 0x3b8bd8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x3b8bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8bdc:
    // 0x3b8bdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3b8bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3b8be0:
    // 0x3b8be0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x3b8be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b8be4:
    // 0x3b8be4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3b8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3b8be8:
    // 0x3b8be8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3b8bec:
    if (ctx->pc == 0x3B8BECu) {
        ctx->pc = 0x3B8BECu;
            // 0x3b8bec: 0x8fa300cc  lw          $v1, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->pc = 0x3B8BF0u;
        goto label_3b8bf0;
    }
    ctx->pc = 0x3B8BE8u;
    {
        const bool branch_taken_0x3b8be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8be8) {
            ctx->pc = 0x3B8BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8BE8u;
            // 0x3b8bec: 0x8fa300cc  lw          $v1, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8BFCu;
            goto label_3b8bfc;
        }
    }
    ctx->pc = 0x3B8BF0u;
label_3b8bf0:
    // 0x3b8bf0: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x3b8bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8bf4:
    // 0x3b8bf4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3b8bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3b8bf8:
    // 0x3b8bf8: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x3b8bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3b8bfc:
    // 0x3b8bfc: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_3b8c00:
    if (ctx->pc == 0x3B8C00u) {
        ctx->pc = 0x3B8C00u;
            // 0x3b8c00: 0xc7a20130  lwc1        $f2, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3B8C04u;
        goto label_3b8c04;
    }
    ctx->pc = 0x3B8BFCu;
    {
        const bool branch_taken_0x3b8bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8bfc) {
            ctx->pc = 0x3B8C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8BFCu;
            // 0x3b8c00: 0xc7a20130  lwc1        $f2, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8C20u;
            goto label_3b8c20;
        }
    }
    ctx->pc = 0x3B8C04u;
label_3b8c04:
    // 0x3b8c04: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x3b8c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8c08:
    // 0x3b8c08: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3b8c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3b8c0c:
    // 0x3b8c0c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x3b8c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8c10:
    // 0x3b8c10: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3b8c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3b8c14:
    // 0x3b8c14: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x3b8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8c18:
    // 0x3b8c18: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3b8c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3b8c1c:
    // 0x3b8c1c: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x3b8c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8c20:
    // 0x3b8c20: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b8c20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b8c24:
    // 0x3b8c24: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x3b8c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8c28:
    // 0x3b8c28: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x3b8c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8c2c:
    // 0x3b8c2c: 0xe6420034  swc1        $f2, 0x34($s2)
    ctx->pc = 0x3b8c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_3b8c30:
    // 0x3b8c30: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x3b8c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_3b8c34:
    // 0x3b8c34: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x3b8c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_3b8c38:
    // 0x3b8c38: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x3b8c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b8c3c:
    // 0x3b8c3c: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x3b8c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3b8c40:
    // 0x3b8c40: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x3b8c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8c44:
    // 0x3b8c44: 0xe6430014  swc1        $f3, 0x14($s2)
    ctx->pc = 0x3b8c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_3b8c48:
    // 0x3b8c48: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x3b8c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8c4c:
    // 0x3b8c4c: 0xe6420018  swc1        $f2, 0x18($s2)
    ctx->pc = 0x3b8c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_3b8c50:
    // 0x3b8c50: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3b8c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8c54:
    // 0x3b8c54: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x3b8c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_3b8c58:
    // 0x3b8c58: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x3b8c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_3b8c5c:
    // 0x3b8c5c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3b8c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_3b8c60:
    // 0x3b8c60: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3b8c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3b8c64:
    // 0x3b8c64: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b8c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b8c68:
    // 0x3b8c68: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3b8c68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b8c6c:
    // 0x3b8c6c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3b8c6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b8c70:
    // 0x3b8c70: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3b8c70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b8c74:
    // 0x3b8c74: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b8c74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b8c78:
    // 0x3b8c78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b8c78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b8c7c:
    // 0x3b8c7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b8c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b8c80:
    // 0x3b8c80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b8c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b8c84:
    // 0x3b8c84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b8c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b8c88:
    // 0x3b8c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b8c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b8c8c:
    // 0x3b8c8c: 0x3e00008  jr          $ra
label_3b8c90:
    if (ctx->pc == 0x3B8C90u) {
        ctx->pc = 0x3B8C90u;
            // 0x3b8c90: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3B8C94u;
        goto label_3b8c94;
    }
    ctx->pc = 0x3B8C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8C8Cu;
            // 0x3b8c90: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B8C94u;
label_3b8c94:
    // 0x3b8c94: 0x0  nop
    ctx->pc = 0x3b8c94u;
    // NOP
label_3b8c98:
    // 0x3b8c98: 0x0  nop
    ctx->pc = 0x3b8c98u;
    // NOP
label_3b8c9c:
    // 0x3b8c9c: 0x0  nop
    ctx->pc = 0x3b8c9cu;
    // NOP
}
