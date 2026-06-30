#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5C70
// Address: 0x1e5c70 - 0x1e6550
void sub_001E5C70_0x1e5c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5C70_0x1e5c70");
#endif

    switch (ctx->pc) {
        case 0x1e5c70u: goto label_1e5c70;
        case 0x1e5c74u: goto label_1e5c74;
        case 0x1e5c78u: goto label_1e5c78;
        case 0x1e5c7cu: goto label_1e5c7c;
        case 0x1e5c80u: goto label_1e5c80;
        case 0x1e5c84u: goto label_1e5c84;
        case 0x1e5c88u: goto label_1e5c88;
        case 0x1e5c8cu: goto label_1e5c8c;
        case 0x1e5c90u: goto label_1e5c90;
        case 0x1e5c94u: goto label_1e5c94;
        case 0x1e5c98u: goto label_1e5c98;
        case 0x1e5c9cu: goto label_1e5c9c;
        case 0x1e5ca0u: goto label_1e5ca0;
        case 0x1e5ca4u: goto label_1e5ca4;
        case 0x1e5ca8u: goto label_1e5ca8;
        case 0x1e5cacu: goto label_1e5cac;
        case 0x1e5cb0u: goto label_1e5cb0;
        case 0x1e5cb4u: goto label_1e5cb4;
        case 0x1e5cb8u: goto label_1e5cb8;
        case 0x1e5cbcu: goto label_1e5cbc;
        case 0x1e5cc0u: goto label_1e5cc0;
        case 0x1e5cc4u: goto label_1e5cc4;
        case 0x1e5cc8u: goto label_1e5cc8;
        case 0x1e5cccu: goto label_1e5ccc;
        case 0x1e5cd0u: goto label_1e5cd0;
        case 0x1e5cd4u: goto label_1e5cd4;
        case 0x1e5cd8u: goto label_1e5cd8;
        case 0x1e5cdcu: goto label_1e5cdc;
        case 0x1e5ce0u: goto label_1e5ce0;
        case 0x1e5ce4u: goto label_1e5ce4;
        case 0x1e5ce8u: goto label_1e5ce8;
        case 0x1e5cecu: goto label_1e5cec;
        case 0x1e5cf0u: goto label_1e5cf0;
        case 0x1e5cf4u: goto label_1e5cf4;
        case 0x1e5cf8u: goto label_1e5cf8;
        case 0x1e5cfcu: goto label_1e5cfc;
        case 0x1e5d00u: goto label_1e5d00;
        case 0x1e5d04u: goto label_1e5d04;
        case 0x1e5d08u: goto label_1e5d08;
        case 0x1e5d0cu: goto label_1e5d0c;
        case 0x1e5d10u: goto label_1e5d10;
        case 0x1e5d14u: goto label_1e5d14;
        case 0x1e5d18u: goto label_1e5d18;
        case 0x1e5d1cu: goto label_1e5d1c;
        case 0x1e5d20u: goto label_1e5d20;
        case 0x1e5d24u: goto label_1e5d24;
        case 0x1e5d28u: goto label_1e5d28;
        case 0x1e5d2cu: goto label_1e5d2c;
        case 0x1e5d30u: goto label_1e5d30;
        case 0x1e5d34u: goto label_1e5d34;
        case 0x1e5d38u: goto label_1e5d38;
        case 0x1e5d3cu: goto label_1e5d3c;
        case 0x1e5d40u: goto label_1e5d40;
        case 0x1e5d44u: goto label_1e5d44;
        case 0x1e5d48u: goto label_1e5d48;
        case 0x1e5d4cu: goto label_1e5d4c;
        case 0x1e5d50u: goto label_1e5d50;
        case 0x1e5d54u: goto label_1e5d54;
        case 0x1e5d58u: goto label_1e5d58;
        case 0x1e5d5cu: goto label_1e5d5c;
        case 0x1e5d60u: goto label_1e5d60;
        case 0x1e5d64u: goto label_1e5d64;
        case 0x1e5d68u: goto label_1e5d68;
        case 0x1e5d6cu: goto label_1e5d6c;
        case 0x1e5d70u: goto label_1e5d70;
        case 0x1e5d74u: goto label_1e5d74;
        case 0x1e5d78u: goto label_1e5d78;
        case 0x1e5d7cu: goto label_1e5d7c;
        case 0x1e5d80u: goto label_1e5d80;
        case 0x1e5d84u: goto label_1e5d84;
        case 0x1e5d88u: goto label_1e5d88;
        case 0x1e5d8cu: goto label_1e5d8c;
        case 0x1e5d90u: goto label_1e5d90;
        case 0x1e5d94u: goto label_1e5d94;
        case 0x1e5d98u: goto label_1e5d98;
        case 0x1e5d9cu: goto label_1e5d9c;
        case 0x1e5da0u: goto label_1e5da0;
        case 0x1e5da4u: goto label_1e5da4;
        case 0x1e5da8u: goto label_1e5da8;
        case 0x1e5dacu: goto label_1e5dac;
        case 0x1e5db0u: goto label_1e5db0;
        case 0x1e5db4u: goto label_1e5db4;
        case 0x1e5db8u: goto label_1e5db8;
        case 0x1e5dbcu: goto label_1e5dbc;
        case 0x1e5dc0u: goto label_1e5dc0;
        case 0x1e5dc4u: goto label_1e5dc4;
        case 0x1e5dc8u: goto label_1e5dc8;
        case 0x1e5dccu: goto label_1e5dcc;
        case 0x1e5dd0u: goto label_1e5dd0;
        case 0x1e5dd4u: goto label_1e5dd4;
        case 0x1e5dd8u: goto label_1e5dd8;
        case 0x1e5ddcu: goto label_1e5ddc;
        case 0x1e5de0u: goto label_1e5de0;
        case 0x1e5de4u: goto label_1e5de4;
        case 0x1e5de8u: goto label_1e5de8;
        case 0x1e5decu: goto label_1e5dec;
        case 0x1e5df0u: goto label_1e5df0;
        case 0x1e5df4u: goto label_1e5df4;
        case 0x1e5df8u: goto label_1e5df8;
        case 0x1e5dfcu: goto label_1e5dfc;
        case 0x1e5e00u: goto label_1e5e00;
        case 0x1e5e04u: goto label_1e5e04;
        case 0x1e5e08u: goto label_1e5e08;
        case 0x1e5e0cu: goto label_1e5e0c;
        case 0x1e5e10u: goto label_1e5e10;
        case 0x1e5e14u: goto label_1e5e14;
        case 0x1e5e18u: goto label_1e5e18;
        case 0x1e5e1cu: goto label_1e5e1c;
        case 0x1e5e20u: goto label_1e5e20;
        case 0x1e5e24u: goto label_1e5e24;
        case 0x1e5e28u: goto label_1e5e28;
        case 0x1e5e2cu: goto label_1e5e2c;
        case 0x1e5e30u: goto label_1e5e30;
        case 0x1e5e34u: goto label_1e5e34;
        case 0x1e5e38u: goto label_1e5e38;
        case 0x1e5e3cu: goto label_1e5e3c;
        case 0x1e5e40u: goto label_1e5e40;
        case 0x1e5e44u: goto label_1e5e44;
        case 0x1e5e48u: goto label_1e5e48;
        case 0x1e5e4cu: goto label_1e5e4c;
        case 0x1e5e50u: goto label_1e5e50;
        case 0x1e5e54u: goto label_1e5e54;
        case 0x1e5e58u: goto label_1e5e58;
        case 0x1e5e5cu: goto label_1e5e5c;
        case 0x1e5e60u: goto label_1e5e60;
        case 0x1e5e64u: goto label_1e5e64;
        case 0x1e5e68u: goto label_1e5e68;
        case 0x1e5e6cu: goto label_1e5e6c;
        case 0x1e5e70u: goto label_1e5e70;
        case 0x1e5e74u: goto label_1e5e74;
        case 0x1e5e78u: goto label_1e5e78;
        case 0x1e5e7cu: goto label_1e5e7c;
        case 0x1e5e80u: goto label_1e5e80;
        case 0x1e5e84u: goto label_1e5e84;
        case 0x1e5e88u: goto label_1e5e88;
        case 0x1e5e8cu: goto label_1e5e8c;
        case 0x1e5e90u: goto label_1e5e90;
        case 0x1e5e94u: goto label_1e5e94;
        case 0x1e5e98u: goto label_1e5e98;
        case 0x1e5e9cu: goto label_1e5e9c;
        case 0x1e5ea0u: goto label_1e5ea0;
        case 0x1e5ea4u: goto label_1e5ea4;
        case 0x1e5ea8u: goto label_1e5ea8;
        case 0x1e5eacu: goto label_1e5eac;
        case 0x1e5eb0u: goto label_1e5eb0;
        case 0x1e5eb4u: goto label_1e5eb4;
        case 0x1e5eb8u: goto label_1e5eb8;
        case 0x1e5ebcu: goto label_1e5ebc;
        case 0x1e5ec0u: goto label_1e5ec0;
        case 0x1e5ec4u: goto label_1e5ec4;
        case 0x1e5ec8u: goto label_1e5ec8;
        case 0x1e5eccu: goto label_1e5ecc;
        case 0x1e5ed0u: goto label_1e5ed0;
        case 0x1e5ed4u: goto label_1e5ed4;
        case 0x1e5ed8u: goto label_1e5ed8;
        case 0x1e5edcu: goto label_1e5edc;
        case 0x1e5ee0u: goto label_1e5ee0;
        case 0x1e5ee4u: goto label_1e5ee4;
        case 0x1e5ee8u: goto label_1e5ee8;
        case 0x1e5eecu: goto label_1e5eec;
        case 0x1e5ef0u: goto label_1e5ef0;
        case 0x1e5ef4u: goto label_1e5ef4;
        case 0x1e5ef8u: goto label_1e5ef8;
        case 0x1e5efcu: goto label_1e5efc;
        case 0x1e5f00u: goto label_1e5f00;
        case 0x1e5f04u: goto label_1e5f04;
        case 0x1e5f08u: goto label_1e5f08;
        case 0x1e5f0cu: goto label_1e5f0c;
        case 0x1e5f10u: goto label_1e5f10;
        case 0x1e5f14u: goto label_1e5f14;
        case 0x1e5f18u: goto label_1e5f18;
        case 0x1e5f1cu: goto label_1e5f1c;
        case 0x1e5f20u: goto label_1e5f20;
        case 0x1e5f24u: goto label_1e5f24;
        case 0x1e5f28u: goto label_1e5f28;
        case 0x1e5f2cu: goto label_1e5f2c;
        case 0x1e5f30u: goto label_1e5f30;
        case 0x1e5f34u: goto label_1e5f34;
        case 0x1e5f38u: goto label_1e5f38;
        case 0x1e5f3cu: goto label_1e5f3c;
        case 0x1e5f40u: goto label_1e5f40;
        case 0x1e5f44u: goto label_1e5f44;
        case 0x1e5f48u: goto label_1e5f48;
        case 0x1e5f4cu: goto label_1e5f4c;
        case 0x1e5f50u: goto label_1e5f50;
        case 0x1e5f54u: goto label_1e5f54;
        case 0x1e5f58u: goto label_1e5f58;
        case 0x1e5f5cu: goto label_1e5f5c;
        case 0x1e5f60u: goto label_1e5f60;
        case 0x1e5f64u: goto label_1e5f64;
        case 0x1e5f68u: goto label_1e5f68;
        case 0x1e5f6cu: goto label_1e5f6c;
        case 0x1e5f70u: goto label_1e5f70;
        case 0x1e5f74u: goto label_1e5f74;
        case 0x1e5f78u: goto label_1e5f78;
        case 0x1e5f7cu: goto label_1e5f7c;
        case 0x1e5f80u: goto label_1e5f80;
        case 0x1e5f84u: goto label_1e5f84;
        case 0x1e5f88u: goto label_1e5f88;
        case 0x1e5f8cu: goto label_1e5f8c;
        case 0x1e5f90u: goto label_1e5f90;
        case 0x1e5f94u: goto label_1e5f94;
        case 0x1e5f98u: goto label_1e5f98;
        case 0x1e5f9cu: goto label_1e5f9c;
        case 0x1e5fa0u: goto label_1e5fa0;
        case 0x1e5fa4u: goto label_1e5fa4;
        case 0x1e5fa8u: goto label_1e5fa8;
        case 0x1e5facu: goto label_1e5fac;
        case 0x1e5fb0u: goto label_1e5fb0;
        case 0x1e5fb4u: goto label_1e5fb4;
        case 0x1e5fb8u: goto label_1e5fb8;
        case 0x1e5fbcu: goto label_1e5fbc;
        case 0x1e5fc0u: goto label_1e5fc0;
        case 0x1e5fc4u: goto label_1e5fc4;
        case 0x1e5fc8u: goto label_1e5fc8;
        case 0x1e5fccu: goto label_1e5fcc;
        case 0x1e5fd0u: goto label_1e5fd0;
        case 0x1e5fd4u: goto label_1e5fd4;
        case 0x1e5fd8u: goto label_1e5fd8;
        case 0x1e5fdcu: goto label_1e5fdc;
        case 0x1e5fe0u: goto label_1e5fe0;
        case 0x1e5fe4u: goto label_1e5fe4;
        case 0x1e5fe8u: goto label_1e5fe8;
        case 0x1e5fecu: goto label_1e5fec;
        case 0x1e5ff0u: goto label_1e5ff0;
        case 0x1e5ff4u: goto label_1e5ff4;
        case 0x1e5ff8u: goto label_1e5ff8;
        case 0x1e5ffcu: goto label_1e5ffc;
        case 0x1e6000u: goto label_1e6000;
        case 0x1e6004u: goto label_1e6004;
        case 0x1e6008u: goto label_1e6008;
        case 0x1e600cu: goto label_1e600c;
        case 0x1e6010u: goto label_1e6010;
        case 0x1e6014u: goto label_1e6014;
        case 0x1e6018u: goto label_1e6018;
        case 0x1e601cu: goto label_1e601c;
        case 0x1e6020u: goto label_1e6020;
        case 0x1e6024u: goto label_1e6024;
        case 0x1e6028u: goto label_1e6028;
        case 0x1e602cu: goto label_1e602c;
        case 0x1e6030u: goto label_1e6030;
        case 0x1e6034u: goto label_1e6034;
        case 0x1e6038u: goto label_1e6038;
        case 0x1e603cu: goto label_1e603c;
        case 0x1e6040u: goto label_1e6040;
        case 0x1e6044u: goto label_1e6044;
        case 0x1e6048u: goto label_1e6048;
        case 0x1e604cu: goto label_1e604c;
        case 0x1e6050u: goto label_1e6050;
        case 0x1e6054u: goto label_1e6054;
        case 0x1e6058u: goto label_1e6058;
        case 0x1e605cu: goto label_1e605c;
        case 0x1e6060u: goto label_1e6060;
        case 0x1e6064u: goto label_1e6064;
        case 0x1e6068u: goto label_1e6068;
        case 0x1e606cu: goto label_1e606c;
        case 0x1e6070u: goto label_1e6070;
        case 0x1e6074u: goto label_1e6074;
        case 0x1e6078u: goto label_1e6078;
        case 0x1e607cu: goto label_1e607c;
        case 0x1e6080u: goto label_1e6080;
        case 0x1e6084u: goto label_1e6084;
        case 0x1e6088u: goto label_1e6088;
        case 0x1e608cu: goto label_1e608c;
        case 0x1e6090u: goto label_1e6090;
        case 0x1e6094u: goto label_1e6094;
        case 0x1e6098u: goto label_1e6098;
        case 0x1e609cu: goto label_1e609c;
        case 0x1e60a0u: goto label_1e60a0;
        case 0x1e60a4u: goto label_1e60a4;
        case 0x1e60a8u: goto label_1e60a8;
        case 0x1e60acu: goto label_1e60ac;
        case 0x1e60b0u: goto label_1e60b0;
        case 0x1e60b4u: goto label_1e60b4;
        case 0x1e60b8u: goto label_1e60b8;
        case 0x1e60bcu: goto label_1e60bc;
        case 0x1e60c0u: goto label_1e60c0;
        case 0x1e60c4u: goto label_1e60c4;
        case 0x1e60c8u: goto label_1e60c8;
        case 0x1e60ccu: goto label_1e60cc;
        case 0x1e60d0u: goto label_1e60d0;
        case 0x1e60d4u: goto label_1e60d4;
        case 0x1e60d8u: goto label_1e60d8;
        case 0x1e60dcu: goto label_1e60dc;
        case 0x1e60e0u: goto label_1e60e0;
        case 0x1e60e4u: goto label_1e60e4;
        case 0x1e60e8u: goto label_1e60e8;
        case 0x1e60ecu: goto label_1e60ec;
        case 0x1e60f0u: goto label_1e60f0;
        case 0x1e60f4u: goto label_1e60f4;
        case 0x1e60f8u: goto label_1e60f8;
        case 0x1e60fcu: goto label_1e60fc;
        case 0x1e6100u: goto label_1e6100;
        case 0x1e6104u: goto label_1e6104;
        case 0x1e6108u: goto label_1e6108;
        case 0x1e610cu: goto label_1e610c;
        case 0x1e6110u: goto label_1e6110;
        case 0x1e6114u: goto label_1e6114;
        case 0x1e6118u: goto label_1e6118;
        case 0x1e611cu: goto label_1e611c;
        case 0x1e6120u: goto label_1e6120;
        case 0x1e6124u: goto label_1e6124;
        case 0x1e6128u: goto label_1e6128;
        case 0x1e612cu: goto label_1e612c;
        case 0x1e6130u: goto label_1e6130;
        case 0x1e6134u: goto label_1e6134;
        case 0x1e6138u: goto label_1e6138;
        case 0x1e613cu: goto label_1e613c;
        case 0x1e6140u: goto label_1e6140;
        case 0x1e6144u: goto label_1e6144;
        case 0x1e6148u: goto label_1e6148;
        case 0x1e614cu: goto label_1e614c;
        case 0x1e6150u: goto label_1e6150;
        case 0x1e6154u: goto label_1e6154;
        case 0x1e6158u: goto label_1e6158;
        case 0x1e615cu: goto label_1e615c;
        case 0x1e6160u: goto label_1e6160;
        case 0x1e6164u: goto label_1e6164;
        case 0x1e6168u: goto label_1e6168;
        case 0x1e616cu: goto label_1e616c;
        case 0x1e6170u: goto label_1e6170;
        case 0x1e6174u: goto label_1e6174;
        case 0x1e6178u: goto label_1e6178;
        case 0x1e617cu: goto label_1e617c;
        case 0x1e6180u: goto label_1e6180;
        case 0x1e6184u: goto label_1e6184;
        case 0x1e6188u: goto label_1e6188;
        case 0x1e618cu: goto label_1e618c;
        case 0x1e6190u: goto label_1e6190;
        case 0x1e6194u: goto label_1e6194;
        case 0x1e6198u: goto label_1e6198;
        case 0x1e619cu: goto label_1e619c;
        case 0x1e61a0u: goto label_1e61a0;
        case 0x1e61a4u: goto label_1e61a4;
        case 0x1e61a8u: goto label_1e61a8;
        case 0x1e61acu: goto label_1e61ac;
        case 0x1e61b0u: goto label_1e61b0;
        case 0x1e61b4u: goto label_1e61b4;
        case 0x1e61b8u: goto label_1e61b8;
        case 0x1e61bcu: goto label_1e61bc;
        case 0x1e61c0u: goto label_1e61c0;
        case 0x1e61c4u: goto label_1e61c4;
        case 0x1e61c8u: goto label_1e61c8;
        case 0x1e61ccu: goto label_1e61cc;
        case 0x1e61d0u: goto label_1e61d0;
        case 0x1e61d4u: goto label_1e61d4;
        case 0x1e61d8u: goto label_1e61d8;
        case 0x1e61dcu: goto label_1e61dc;
        case 0x1e61e0u: goto label_1e61e0;
        case 0x1e61e4u: goto label_1e61e4;
        case 0x1e61e8u: goto label_1e61e8;
        case 0x1e61ecu: goto label_1e61ec;
        case 0x1e61f0u: goto label_1e61f0;
        case 0x1e61f4u: goto label_1e61f4;
        case 0x1e61f8u: goto label_1e61f8;
        case 0x1e61fcu: goto label_1e61fc;
        case 0x1e6200u: goto label_1e6200;
        case 0x1e6204u: goto label_1e6204;
        case 0x1e6208u: goto label_1e6208;
        case 0x1e620cu: goto label_1e620c;
        case 0x1e6210u: goto label_1e6210;
        case 0x1e6214u: goto label_1e6214;
        case 0x1e6218u: goto label_1e6218;
        case 0x1e621cu: goto label_1e621c;
        case 0x1e6220u: goto label_1e6220;
        case 0x1e6224u: goto label_1e6224;
        case 0x1e6228u: goto label_1e6228;
        case 0x1e622cu: goto label_1e622c;
        case 0x1e6230u: goto label_1e6230;
        case 0x1e6234u: goto label_1e6234;
        case 0x1e6238u: goto label_1e6238;
        case 0x1e623cu: goto label_1e623c;
        case 0x1e6240u: goto label_1e6240;
        case 0x1e6244u: goto label_1e6244;
        case 0x1e6248u: goto label_1e6248;
        case 0x1e624cu: goto label_1e624c;
        case 0x1e6250u: goto label_1e6250;
        case 0x1e6254u: goto label_1e6254;
        case 0x1e6258u: goto label_1e6258;
        case 0x1e625cu: goto label_1e625c;
        case 0x1e6260u: goto label_1e6260;
        case 0x1e6264u: goto label_1e6264;
        case 0x1e6268u: goto label_1e6268;
        case 0x1e626cu: goto label_1e626c;
        case 0x1e6270u: goto label_1e6270;
        case 0x1e6274u: goto label_1e6274;
        case 0x1e6278u: goto label_1e6278;
        case 0x1e627cu: goto label_1e627c;
        case 0x1e6280u: goto label_1e6280;
        case 0x1e6284u: goto label_1e6284;
        case 0x1e6288u: goto label_1e6288;
        case 0x1e628cu: goto label_1e628c;
        case 0x1e6290u: goto label_1e6290;
        case 0x1e6294u: goto label_1e6294;
        case 0x1e6298u: goto label_1e6298;
        case 0x1e629cu: goto label_1e629c;
        case 0x1e62a0u: goto label_1e62a0;
        case 0x1e62a4u: goto label_1e62a4;
        case 0x1e62a8u: goto label_1e62a8;
        case 0x1e62acu: goto label_1e62ac;
        case 0x1e62b0u: goto label_1e62b0;
        case 0x1e62b4u: goto label_1e62b4;
        case 0x1e62b8u: goto label_1e62b8;
        case 0x1e62bcu: goto label_1e62bc;
        case 0x1e62c0u: goto label_1e62c0;
        case 0x1e62c4u: goto label_1e62c4;
        case 0x1e62c8u: goto label_1e62c8;
        case 0x1e62ccu: goto label_1e62cc;
        case 0x1e62d0u: goto label_1e62d0;
        case 0x1e62d4u: goto label_1e62d4;
        case 0x1e62d8u: goto label_1e62d8;
        case 0x1e62dcu: goto label_1e62dc;
        case 0x1e62e0u: goto label_1e62e0;
        case 0x1e62e4u: goto label_1e62e4;
        case 0x1e62e8u: goto label_1e62e8;
        case 0x1e62ecu: goto label_1e62ec;
        case 0x1e62f0u: goto label_1e62f0;
        case 0x1e62f4u: goto label_1e62f4;
        case 0x1e62f8u: goto label_1e62f8;
        case 0x1e62fcu: goto label_1e62fc;
        case 0x1e6300u: goto label_1e6300;
        case 0x1e6304u: goto label_1e6304;
        case 0x1e6308u: goto label_1e6308;
        case 0x1e630cu: goto label_1e630c;
        case 0x1e6310u: goto label_1e6310;
        case 0x1e6314u: goto label_1e6314;
        case 0x1e6318u: goto label_1e6318;
        case 0x1e631cu: goto label_1e631c;
        case 0x1e6320u: goto label_1e6320;
        case 0x1e6324u: goto label_1e6324;
        case 0x1e6328u: goto label_1e6328;
        case 0x1e632cu: goto label_1e632c;
        case 0x1e6330u: goto label_1e6330;
        case 0x1e6334u: goto label_1e6334;
        case 0x1e6338u: goto label_1e6338;
        case 0x1e633cu: goto label_1e633c;
        case 0x1e6340u: goto label_1e6340;
        case 0x1e6344u: goto label_1e6344;
        case 0x1e6348u: goto label_1e6348;
        case 0x1e634cu: goto label_1e634c;
        case 0x1e6350u: goto label_1e6350;
        case 0x1e6354u: goto label_1e6354;
        case 0x1e6358u: goto label_1e6358;
        case 0x1e635cu: goto label_1e635c;
        case 0x1e6360u: goto label_1e6360;
        case 0x1e6364u: goto label_1e6364;
        case 0x1e6368u: goto label_1e6368;
        case 0x1e636cu: goto label_1e636c;
        case 0x1e6370u: goto label_1e6370;
        case 0x1e6374u: goto label_1e6374;
        case 0x1e6378u: goto label_1e6378;
        case 0x1e637cu: goto label_1e637c;
        case 0x1e6380u: goto label_1e6380;
        case 0x1e6384u: goto label_1e6384;
        case 0x1e6388u: goto label_1e6388;
        case 0x1e638cu: goto label_1e638c;
        case 0x1e6390u: goto label_1e6390;
        case 0x1e6394u: goto label_1e6394;
        case 0x1e6398u: goto label_1e6398;
        case 0x1e639cu: goto label_1e639c;
        case 0x1e63a0u: goto label_1e63a0;
        case 0x1e63a4u: goto label_1e63a4;
        case 0x1e63a8u: goto label_1e63a8;
        case 0x1e63acu: goto label_1e63ac;
        case 0x1e63b0u: goto label_1e63b0;
        case 0x1e63b4u: goto label_1e63b4;
        case 0x1e63b8u: goto label_1e63b8;
        case 0x1e63bcu: goto label_1e63bc;
        case 0x1e63c0u: goto label_1e63c0;
        case 0x1e63c4u: goto label_1e63c4;
        case 0x1e63c8u: goto label_1e63c8;
        case 0x1e63ccu: goto label_1e63cc;
        case 0x1e63d0u: goto label_1e63d0;
        case 0x1e63d4u: goto label_1e63d4;
        case 0x1e63d8u: goto label_1e63d8;
        case 0x1e63dcu: goto label_1e63dc;
        case 0x1e63e0u: goto label_1e63e0;
        case 0x1e63e4u: goto label_1e63e4;
        case 0x1e63e8u: goto label_1e63e8;
        case 0x1e63ecu: goto label_1e63ec;
        case 0x1e63f0u: goto label_1e63f0;
        case 0x1e63f4u: goto label_1e63f4;
        case 0x1e63f8u: goto label_1e63f8;
        case 0x1e63fcu: goto label_1e63fc;
        case 0x1e6400u: goto label_1e6400;
        case 0x1e6404u: goto label_1e6404;
        case 0x1e6408u: goto label_1e6408;
        case 0x1e640cu: goto label_1e640c;
        case 0x1e6410u: goto label_1e6410;
        case 0x1e6414u: goto label_1e6414;
        case 0x1e6418u: goto label_1e6418;
        case 0x1e641cu: goto label_1e641c;
        case 0x1e6420u: goto label_1e6420;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e6428u: goto label_1e6428;
        case 0x1e642cu: goto label_1e642c;
        case 0x1e6430u: goto label_1e6430;
        case 0x1e6434u: goto label_1e6434;
        case 0x1e6438u: goto label_1e6438;
        case 0x1e643cu: goto label_1e643c;
        case 0x1e6440u: goto label_1e6440;
        case 0x1e6444u: goto label_1e6444;
        case 0x1e6448u: goto label_1e6448;
        case 0x1e644cu: goto label_1e644c;
        case 0x1e6450u: goto label_1e6450;
        case 0x1e6454u: goto label_1e6454;
        case 0x1e6458u: goto label_1e6458;
        case 0x1e645cu: goto label_1e645c;
        case 0x1e6460u: goto label_1e6460;
        case 0x1e6464u: goto label_1e6464;
        case 0x1e6468u: goto label_1e6468;
        case 0x1e646cu: goto label_1e646c;
        case 0x1e6470u: goto label_1e6470;
        case 0x1e6474u: goto label_1e6474;
        case 0x1e6478u: goto label_1e6478;
        case 0x1e647cu: goto label_1e647c;
        case 0x1e6480u: goto label_1e6480;
        case 0x1e6484u: goto label_1e6484;
        case 0x1e6488u: goto label_1e6488;
        case 0x1e648cu: goto label_1e648c;
        case 0x1e6490u: goto label_1e6490;
        case 0x1e6494u: goto label_1e6494;
        case 0x1e6498u: goto label_1e6498;
        case 0x1e649cu: goto label_1e649c;
        case 0x1e64a0u: goto label_1e64a0;
        case 0x1e64a4u: goto label_1e64a4;
        case 0x1e64a8u: goto label_1e64a8;
        case 0x1e64acu: goto label_1e64ac;
        case 0x1e64b0u: goto label_1e64b0;
        case 0x1e64b4u: goto label_1e64b4;
        case 0x1e64b8u: goto label_1e64b8;
        case 0x1e64bcu: goto label_1e64bc;
        case 0x1e64c0u: goto label_1e64c0;
        case 0x1e64c4u: goto label_1e64c4;
        case 0x1e64c8u: goto label_1e64c8;
        case 0x1e64ccu: goto label_1e64cc;
        case 0x1e64d0u: goto label_1e64d0;
        case 0x1e64d4u: goto label_1e64d4;
        case 0x1e64d8u: goto label_1e64d8;
        case 0x1e64dcu: goto label_1e64dc;
        case 0x1e64e0u: goto label_1e64e0;
        case 0x1e64e4u: goto label_1e64e4;
        case 0x1e64e8u: goto label_1e64e8;
        case 0x1e64ecu: goto label_1e64ec;
        case 0x1e64f0u: goto label_1e64f0;
        case 0x1e64f4u: goto label_1e64f4;
        case 0x1e64f8u: goto label_1e64f8;
        case 0x1e64fcu: goto label_1e64fc;
        case 0x1e6500u: goto label_1e6500;
        case 0x1e6504u: goto label_1e6504;
        case 0x1e6508u: goto label_1e6508;
        case 0x1e650cu: goto label_1e650c;
        case 0x1e6510u: goto label_1e6510;
        case 0x1e6514u: goto label_1e6514;
        case 0x1e6518u: goto label_1e6518;
        case 0x1e651cu: goto label_1e651c;
        case 0x1e6520u: goto label_1e6520;
        case 0x1e6524u: goto label_1e6524;
        case 0x1e6528u: goto label_1e6528;
        case 0x1e652cu: goto label_1e652c;
        case 0x1e6530u: goto label_1e6530;
        case 0x1e6534u: goto label_1e6534;
        case 0x1e6538u: goto label_1e6538;
        case 0x1e653cu: goto label_1e653c;
        case 0x1e6540u: goto label_1e6540;
        case 0x1e6544u: goto label_1e6544;
        case 0x1e6548u: goto label_1e6548;
        case 0x1e654cu: goto label_1e654c;
        default: break;
    }

    ctx->pc = 0x1e5c70u;

label_1e5c70:
    // 0x1e5c70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e5c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e5c74:
    // 0x1e5c74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e5c78:
    // 0x1e5c78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e5c7c:
    // 0x1e5c7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5c80:
    // 0x1e5c80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e5c80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5c84:
    // 0x1e5c84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5c88:
    // 0x1e5c88: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e5c88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e5c8c:
    // 0x1e5c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5c90:
    // 0x1e5c90: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e5c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e5c94:
    // 0x1e5c94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5c98:
    // 0x1e5c98: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1e5c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e5c9c:
    // 0x1e5c9c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1e5c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5ca0:
    // 0x1e5ca0: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x1e5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
label_1e5ca4:
    // 0x1e5ca4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e5ca8:
    // 0x1e5ca8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_1e5cac:
    // 0x1e5cac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e5cb0:
    // 0x1e5cb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e5cb4:
    // 0x1e5cb4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1e5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1e5cb8:
    // 0x1e5cb8: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1e5cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1e5cbc:
    // 0x1e5cbc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1e5cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e5cc0:
    // 0x1e5cc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5cc4:
    // 0x1e5cc4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e5cc8:
    // 0x1e5cc8: 0x320f809  jalr        $t9
label_1e5ccc:
    if (ctx->pc == 0x1E5CCCu) {
        ctx->pc = 0x1E5CCCu;
            // 0x1e5ccc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E5CD0u;
        goto label_1e5cd0;
    }
    ctx->pc = 0x1E5CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5CD0u);
        ctx->pc = 0x1E5CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CC8u;
            // 0x1e5ccc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CD0u; }
            if (ctx->pc != 0x1E5CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5CD0u;
label_1e5cd0:
    // 0x1e5cd0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1e5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1e5cd4:
    // 0x1e5cd4: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_1e5cd8:
    if (ctx->pc == 0x1E5CD8u) {
        ctx->pc = 0x1E5CD8u;
            // 0x1e5cd8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1E5CDCu;
        goto label_1e5cdc;
    }
    ctx->pc = 0x1E5CD4u;
    {
        const bool branch_taken_0x1e5cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cd4) {
            ctx->pc = 0x1E5CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CD4u;
            // 0x1e5cd8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5D10u;
            goto label_1e5d10;
        }
    }
    ctx->pc = 0x1E5CDCu;
label_1e5cdc:
    // 0x1e5cdc: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1e5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1e5ce0:
    // 0x1e5ce0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e5ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ce4:
    // 0x1e5ce4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1e5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e5ce8:
    // 0x1e5ce8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e5ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5cec:
    // 0x1e5cec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e5cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e5cf0:
    // 0x1e5cf0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e5cf4:
    // 0x1e5cf4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1e5cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1e5cf8:
    // 0x1e5cf8: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1e5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1e5cfc:
    // 0x1e5cfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5d00:
    // 0x1e5d00: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e5d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e5d04:
    // 0x1e5d04: 0x320f809  jalr        $t9
label_1e5d08:
    if (ctx->pc == 0x1E5D08u) {
        ctx->pc = 0x1E5D08u;
            // 0x1e5d08: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E5D0Cu;
        goto label_1e5d0c;
    }
    ctx->pc = 0x1E5D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5D0Cu);
        ctx->pc = 0x1E5D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D04u;
            // 0x1e5d08: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5D0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D0Cu; }
            if (ctx->pc != 0x1E5D0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E5D0Cu;
label_1e5d0c:
    // 0x1e5d0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e5d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e5d10:
    // 0x1e5d10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5d10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5d14:
    // 0x1e5d14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5d14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5d18:
    // 0x1e5d18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5d1c:
    // 0x1e5d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5d20:
    // 0x1e5d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5d24:
    // 0x1e5d24: 0x3e00008  jr          $ra
label_1e5d28:
    if (ctx->pc == 0x1E5D28u) {
        ctx->pc = 0x1E5D28u;
            // 0x1e5d28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E5D2Cu;
        goto label_1e5d2c;
    }
    ctx->pc = 0x1E5D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D24u;
            // 0x1e5d28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5D2Cu;
label_1e5d2c:
    // 0x1e5d2c: 0x0  nop
    ctx->pc = 0x1e5d2cu;
    // NOP
label_1e5d30:
    // 0x1e5d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e5d34:
    // 0x1e5d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e5d38:
    // 0x1e5d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5d3c:
    // 0x1e5d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5d40:
    // 0x1e5d40: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_1e5d44:
    if (ctx->pc == 0x1E5D44u) {
        ctx->pc = 0x1E5D44u;
            // 0x1e5d44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D48u;
        goto label_1e5d48;
    }
    ctx->pc = 0x1E5D40u;
    {
        const bool branch_taken_0x1e5d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d40) {
            ctx->pc = 0x1E5D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D40u;
            // 0x1e5d44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5DD0u;
            goto label_1e5dd0;
        }
    }
    ctx->pc = 0x1E5D48u;
label_1e5d48:
    // 0x1e5d48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5d4c:
    // 0x1e5d4c: 0x2442d540  addiu       $v0, $v0, -0x2AC0
    ctx->pc = 0x1e5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956352));
label_1e5d50:
    // 0x1e5d50: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1e5d54:
    if (ctx->pc == 0x1E5D54u) {
        ctx->pc = 0x1E5D54u;
            // 0x1e5d54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E5D58u;
        goto label_1e5d58;
    }
    ctx->pc = 0x1E5D50u;
    {
        const bool branch_taken_0x1e5d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D50u;
            // 0x1e5d54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d50) {
            ctx->pc = 0x1E5DA4u;
            goto label_1e5da4;
        }
    }
    ctx->pc = 0x1E5D58u;
label_1e5d58:
    // 0x1e5d58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5d5c:
    // 0x1e5d5c: 0x2442d580  addiu       $v0, $v0, -0x2A80
    ctx->pc = 0x1e5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956416));
label_1e5d60:
    // 0x1e5d60: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1e5d64:
    if (ctx->pc == 0x1E5D64u) {
        ctx->pc = 0x1E5D64u;
            // 0x1e5d64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E5D68u;
        goto label_1e5d68;
    }
    ctx->pc = 0x1E5D60u;
    {
        const bool branch_taken_0x1e5d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D60u;
            // 0x1e5d64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d60) {
            ctx->pc = 0x1E5DA4u;
            goto label_1e5da4;
        }
    }
    ctx->pc = 0x1E5D68u;
label_1e5d68:
    // 0x1e5d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5d6c:
    // 0x1e5d6c: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x1e5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
label_1e5d70:
    // 0x1e5d70: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1e5d74:
    if (ctx->pc == 0x1E5D74u) {
        ctx->pc = 0x1E5D74u;
            // 0x1e5d74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E5D78u;
        goto label_1e5d78;
    }
    ctx->pc = 0x1E5D70u;
    {
        const bool branch_taken_0x1e5d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D70u;
            // 0x1e5d74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d70) {
            ctx->pc = 0x1E5DA4u;
            goto label_1e5da4;
        }
    }
    ctx->pc = 0x1E5D78u;
label_1e5d78:
    // 0x1e5d78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5d7c:
    // 0x1e5d7c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e5d80:
    // 0x1e5d80: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e5d84:
    if (ctx->pc == 0x1E5D84u) {
        ctx->pc = 0x1E5D84u;
            // 0x1e5d84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E5D88u;
        goto label_1e5d88;
    }
    ctx->pc = 0x1E5D80u;
    {
        const bool branch_taken_0x1e5d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D80u;
            // 0x1e5d84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d80) {
            ctx->pc = 0x1E5DA4u;
            goto label_1e5da4;
        }
    }
    ctx->pc = 0x1E5D88u;
label_1e5d88:
    // 0x1e5d88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5d8c:
    // 0x1e5d8c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e5d90:
    // 0x1e5d90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e5d94:
    if (ctx->pc == 0x1E5D94u) {
        ctx->pc = 0x1E5D94u;
            // 0x1e5d94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E5D98u;
        goto label_1e5d98;
    }
    ctx->pc = 0x1E5D90u;
    {
        const bool branch_taken_0x1e5d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D90u;
            // 0x1e5d94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d90) {
            ctx->pc = 0x1E5DA4u;
            goto label_1e5da4;
        }
    }
    ctx->pc = 0x1E5D98u;
label_1e5d98:
    // 0x1e5d98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5d9c:
    // 0x1e5d9c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e5da0:
    // 0x1e5da0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e5da4:
    // 0x1e5da4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e5da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e5da8:
    // 0x1e5da8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e5da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e5dac:
    // 0x1e5dac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e5db0:
    if (ctx->pc == 0x1E5DB0u) {
        ctx->pc = 0x1E5DB4u;
        goto label_1e5db4;
    }
    ctx->pc = 0x1E5DACu;
    {
        const bool branch_taken_0x1e5dac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e5dac) {
            ctx->pc = 0x1E5DCCu;
            goto label_1e5dcc;
        }
    }
    ctx->pc = 0x1E5DB4u;
label_1e5db4:
    // 0x1e5db4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5db8:
    // 0x1e5db8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e5db8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1e5dbc:
    // 0x1e5dbc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e5dc0:
    // 0x1e5dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5dc4:
    // 0x1e5dc4: 0xc0a7ab4  jal         func_29EAD0
label_1e5dc8:
    if (ctx->pc == 0x1E5DC8u) {
        ctx->pc = 0x1E5DC8u;
            // 0x1e5dc8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E5DCCu;
        goto label_1e5dcc;
    }
    ctx->pc = 0x1E5DC4u;
    SET_GPR_U32(ctx, 31, 0x1E5DCCu);
    ctx->pc = 0x1E5DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DC4u;
            // 0x1e5dc8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DCCu; }
        if (ctx->pc != 0x1E5DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DCCu; }
        if (ctx->pc != 0x1E5DCCu) { return; }
    }
    ctx->pc = 0x1E5DCCu;
label_1e5dcc:
    // 0x1e5dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5dd0:
    // 0x1e5dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5dd4:
    // 0x1e5dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5dd8:
    // 0x1e5dd8: 0x3e00008  jr          $ra
label_1e5ddc:
    if (ctx->pc == 0x1E5DDCu) {
        ctx->pc = 0x1E5DDCu;
            // 0x1e5ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E5DE0u;
        goto label_1e5de0;
    }
    ctx->pc = 0x1E5DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DD8u;
            // 0x1e5ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5DE0u;
label_1e5de0:
    // 0x1e5de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e5de4:
    // 0x1e5de4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e5de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e5de8:
    // 0x1e5de8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e5dec:
    // 0x1e5dec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e5decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e5df0:
    // 0x1e5df0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e5df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e5df4:
    // 0x1e5df4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e5df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5df8:
    // 0x1e5df8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e5dfc:
    // 0x1e5dfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e5e00:
    // 0x1e5e00: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1e5e00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1e5e04:
    // 0x1e5e04: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1e5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e5e08:
    // 0x1e5e08: 0xc079330  jal         func_1E4CC0
label_1e5e0c:
    if (ctx->pc == 0x1E5E0Cu) {
        ctx->pc = 0x1E5E0Cu;
            // 0x1e5e0c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E10u;
        goto label_1e5e10;
    }
    ctx->pc = 0x1E5E08u;
    SET_GPR_U32(ctx, 31, 0x1E5E10u);
    ctx->pc = 0x1E5E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E08u;
            // 0x1e5e0c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4CC0u;
    if (runtime->hasFunction(0x1E4CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E4CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E10u; }
        if (ctx->pc != 0x1E5E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4CC0_0x1e4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E10u; }
        if (ctx->pc != 0x1E5E10u) { return; }
    }
    ctx->pc = 0x1E5E10u;
label_1e5e10:
    // 0x1e5e10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5e14:
    // 0x1e5e14: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1e5e14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5e18:
    // 0x1e5e18: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1e5e1c:
    if (ctx->pc == 0x1E5E1Cu) {
        ctx->pc = 0x1E5E20u;
        goto label_1e5e20;
    }
    ctx->pc = 0x1E5E18u;
    {
        const bool branch_taken_0x1e5e18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e18) {
            ctx->pc = 0x1E5EB8u;
            goto label_1e5eb8;
        }
    }
    ctx->pc = 0x1E5E20u;
label_1e5e20:
    // 0x1e5e20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e5e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5e24:
    // 0x1e5e24: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5e28:
    // 0x1e5e28: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1e5e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e5e2c:
    // 0x1e5e2c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1e5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5e30:
    // 0x1e5e30: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e5e30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e5e34:
    // 0x1e5e34: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1e5e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1e5e38:
    // 0x1e5e38: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e5e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1e5e3c:
    // 0x1e5e3c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5e40:
    // 0x1e5e40: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1e5e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5e44:
    // 0x1e5e44: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e5e44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e5e48:
    // 0x1e5e48: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1e5e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1e5e4c:
    // 0x1e5e4c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1e5e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1e5e50:
    // 0x1e5e50: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e5e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5e54:
    // 0x1e5e54: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1e5e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5e58:
    // 0x1e5e58: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e5e58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e5e5c:
    // 0x1e5e5c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1e5e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1e5e60:
    // 0x1e5e60: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1e5e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1e5e64:
    // 0x1e5e64: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1e5e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5e68:
    // 0x1e5e68: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1e5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5e6c:
    // 0x1e5e6c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e5e6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e5e70:
    // 0x1e5e70: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1e5e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1e5e74:
    // 0x1e5e74: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1e5e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1e5e78:
    // 0x1e5e78: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1e5e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5e7c:
    // 0x1e5e7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e5e7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e5e80:
    // 0x1e5e80: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1e5e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1e5e84:
    // 0x1e5e84: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1e5e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5e88:
    // 0x1e5e88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e5e88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e5e8c:
    // 0x1e5e8c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1e5e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1e5e90:
    // 0x1e5e90: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1e5e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5e94:
    // 0x1e5e94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e5e94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e5e98:
    // 0x1e5e98: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1e5e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1e5e9c:
    // 0x1e5e9c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1e5e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5ea0:
    // 0x1e5ea0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1e5ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1e5ea4:
    // 0x1e5ea4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5ea8:
    // 0x1e5ea8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1e5ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e5eac:
    // 0x1e5eac: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1e5eacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5eb0:
    // 0x1e5eb0: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1e5eb4:
    if (ctx->pc == 0x1E5EB4u) {
        ctx->pc = 0x1E5EB4u;
            // 0x1e5eb4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E5EB8u;
        goto label_1e5eb8;
    }
    ctx->pc = 0x1E5EB0u;
    {
        const bool branch_taken_0x1e5eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5eb0) {
            ctx->pc = 0x1E5EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EB0u;
            // 0x1e5eb4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5EB8u;
label_1e5eb8:
    // 0x1e5eb8: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1e5eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5ebc:
    // 0x1e5ebc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1e5ebcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5ec0:
    // 0x1e5ec0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1e5ec4:
    if (ctx->pc == 0x1E5EC4u) {
        ctx->pc = 0x1E5EC4u;
            // 0x1e5ec4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1E5EC8u;
        goto label_1e5ec8;
    }
    ctx->pc = 0x1E5EC0u;
    {
        const bool branch_taken_0x1e5ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5ec0) {
            ctx->pc = 0x1E5EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EC0u;
            // 0x1e5ec4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5F68u;
            goto label_1e5f68;
        }
    }
    ctx->pc = 0x1E5EC8u;
label_1e5ec8:
    // 0x1e5ec8: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1e5ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5ecc:
    // 0x1e5ecc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5ed0:
    // 0x1e5ed0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e5ed0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e5ed4:
    // 0x1e5ed4: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1e5ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
label_1e5ed8:
    // 0x1e5ed8: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1e5ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5edc:
    // 0x1e5edc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e5edcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e5ee0:
    // 0x1e5ee0: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1e5ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
label_1e5ee4:
    // 0x1e5ee4: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1e5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5ee8:
    // 0x1e5ee8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e5ee8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e5eec:
    // 0x1e5eec: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1e5eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
label_1e5ef0:
    // 0x1e5ef0: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1e5ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5ef4:
    // 0x1e5ef4: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1e5ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
label_1e5ef8:
    // 0x1e5ef8: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1e5ef8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
label_1e5efc:
    // 0x1e5efc: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1e5efcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
label_1e5f00:
    // 0x1e5f00: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1e5f00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1e5f04:
    // 0x1e5f04: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1e5f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1e5f08:
    // 0x1e5f08: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1e5f08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1e5f0c:
    // 0x1e5f0c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1e5f0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1e5f10:
    // 0x1e5f10: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1e5f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1e5f14:
    // 0x1e5f14: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1e5f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1e5f18:
    // 0x1e5f18: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1e5f18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1e5f1c:
    // 0x1e5f1c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1e5f1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1e5f20:
    // 0x1e5f20: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1e5f20u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
label_1e5f24:
    // 0x1e5f24: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e5f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e5f28:
    // 0x1e5f28: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e5f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1e5f2c:
    // 0x1e5f2c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1e5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1e5f30:
    // 0x1e5f30: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1e5f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1e5f34:
    // 0x1e5f34: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1e5f34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1e5f38:
    // 0x1e5f38: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1e5f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1e5f3c:
    // 0x1e5f3c: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1e5f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1e5f40:
    // 0x1e5f40: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1e5f40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1e5f44:
    // 0x1e5f44: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1e5f44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1e5f48:
    // 0x1e5f48: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1e5f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1e5f4c:
    // 0x1e5f4c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1e5f50:
    if (ctx->pc == 0x1E5F50u) {
        ctx->pc = 0x1E5F54u;
        goto label_1e5f54;
    }
    ctx->pc = 0x1E5F4Cu;
    {
        const bool branch_taken_0x1e5f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5f4c) {
            ctx->pc = 0x1E5F64u;
            goto label_1e5f64;
        }
    }
    ctx->pc = 0x1E5F54u;
label_1e5f54:
    // 0x1e5f54: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1e5f54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
label_1e5f58:
    // 0x1e5f58: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1e5f58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
label_1e5f5c:
    // 0x1e5f5c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1e5f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1e5f60:
    // 0x1e5f60: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1e5f60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1e5f64:
    // 0x1e5f64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e5f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5f68:
    // 0x1e5f68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e5f6c:
    // 0x1e5f6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5f70:
    // 0x1e5f70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e5f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5f74:
    // 0x1e5f74: 0x3e00008  jr          $ra
label_1e5f78:
    if (ctx->pc == 0x1E5F78u) {
        ctx->pc = 0x1E5F78u;
            // 0x1e5f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E5F7Cu;
        goto label_1e5f7c;
    }
    ctx->pc = 0x1E5F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F74u;
            // 0x1e5f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5F7Cu;
label_1e5f7c:
    // 0x1e5f7c: 0x0  nop
    ctx->pc = 0x1e5f7cu;
    // NOP
label_1e5f80:
    // 0x1e5f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e5f84:
    // 0x1e5f84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e5f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f88:
    // 0x1e5f88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e5f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f8c:
    // 0x1e5f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e5f90:
    // 0x1e5f90: 0xc07971c  jal         func_1E5C70
label_1e5f94:
    if (ctx->pc == 0x1E5F94u) {
        ctx->pc = 0x1E5F94u;
            // 0x1e5f94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F98u;
        goto label_1e5f98;
    }
    ctx->pc = 0x1E5F90u;
    SET_GPR_U32(ctx, 31, 0x1E5F98u);
    ctx->pc = 0x1E5F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F90u;
            // 0x1e5f94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5C70u;
    goto label_1e5c70;
    ctx->pc = 0x1E5F98u;
label_1e5f98:
    // 0x1e5f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5f9c:
    // 0x1e5f9c: 0x3e00008  jr          $ra
label_1e5fa0:
    if (ctx->pc == 0x1E5FA0u) {
        ctx->pc = 0x1E5FA0u;
            // 0x1e5fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E5FA4u;
        goto label_1e5fa4;
    }
    ctx->pc = 0x1E5F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F9Cu;
            // 0x1e5fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5FA4u;
label_1e5fa4:
    // 0x1e5fa4: 0x0  nop
    ctx->pc = 0x1e5fa4u;
    // NOP
label_1e5fa8:
    // 0x1e5fa8: 0x0  nop
    ctx->pc = 0x1e5fa8u;
    // NOP
label_1e5fac:
    // 0x1e5fac: 0x0  nop
    ctx->pc = 0x1e5facu;
    // NOP
label_1e5fb0:
    // 0x1e5fb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e5fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e5fb4:
    // 0x1e5fb4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e5fb8:
    // 0x1e5fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e5fbc:
    // 0x1e5fbc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1e5fbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5fc0:
    // 0x1e5fc0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e5fc4:
    // 0x1e5fc4: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e5fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e5fc8:
    // 0x1e5fc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5fcc:
    // 0x1e5fcc: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1e5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1e5fd0:
    // 0x1e5fd0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1e5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1e5fd4:
    // 0x1e5fd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e5fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5fd8:
    // 0x1e5fd8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1e5fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5fdc:
    // 0x1e5fdc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1e5fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1e5fe0:
    // 0x1e5fe0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1e5fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1e5fe4:
    // 0x1e5fe4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1e5fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_1e5fe8:
    // 0x1e5fe8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1e5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1e5fec:
    // 0x1e5fec: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1e5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_1e5ff0:
    // 0x1e5ff0: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1e5ff0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1e5ff4:
    // 0x1e5ff4: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1e5ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
label_1e5ff8:
    // 0x1e5ff8: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1e5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e5ffc:
    // 0x1e5ffc: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1e5ffcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e6000:
    // 0x1e6000: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1e6000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e6004:
    // 0x1e6004: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1e6004u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1e6008:
    // 0x1e6008: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1e6008u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e600c:
    // 0x1e600c: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1e600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e6010:
    // 0x1e6010: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1e6010u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1e6014:
    // 0x1e6014: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1e6014u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e6018:
    // 0x1e6018: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1e6018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e601c:
    // 0x1e601c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1e601cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1e6020:
    // 0x1e6020: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1e6020u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e6024:
    // 0x1e6024: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1e6024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6028:
    // 0x1e6028: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1e6028u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1e602c:
    // 0x1e602c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1e602cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1e6030:
    // 0x1e6030: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1e6030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6034:
    // 0x1e6034: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1e6034u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1e6038:
    // 0x1e6038: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1e6038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1e603c:
    // 0x1e603c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1e603cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1e6040:
    // 0x1e6040: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1e6040u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e6044:
    // 0x1e6044: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1e6044u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e6048:
    // 0x1e6048: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1e6048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1e604c:
    // 0x1e604c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1e604cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e6050:
    // 0x1e6050: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e6050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
label_1e6054:
    // 0x1e6054: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1e6054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e6058:
    // 0x1e6058: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e6058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e605c:
    // 0x1e605c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1e605cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e6060:
    // 0x1e6060: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1e6060u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e6064:
    // 0x1e6064: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1e6064u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1e6068:
    // 0x1e6068: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
label_1e606c:
    if (ctx->pc == 0x1E606Cu) {
        ctx->pc = 0x1E606Cu;
            // 0x1e606c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1E6070u;
        goto label_1e6070;
    }
    ctx->pc = 0x1E6068u;
    {
        const bool branch_taken_0x1e6068 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6068u;
            // 0x1e606c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6068) {
            ctx->pc = 0x1E60B4u;
            goto label_1e60b4;
        }
    }
    ctx->pc = 0x1E6070u;
label_1e6070:
    // 0x1e6070: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e6070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6074:
    // 0x1e6074: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1e6074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
label_1e6078:
    // 0x1e6078: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e6078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1e607c:
    // 0x1e607c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e607cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e6080:
    // 0x1e6080: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e6080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e6084:
    // 0x1e6084: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e6084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e6088:
    // 0x1e6088: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1e6088u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e608c:
    // 0x1e608c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e608cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e6090:
    // 0x1e6090: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1e6090u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e6094:
    // 0x1e6094: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1e6094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e6098:
    // 0x1e6098: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1e6098u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e609c:
    // 0x1e609c: 0xc079500  jal         func_1E5400
label_1e60a0:
    if (ctx->pc == 0x1E60A0u) {
        ctx->pc = 0x1E60A0u;
            // 0x1e60a0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1E60A4u;
        goto label_1e60a4;
    }
    ctx->pc = 0x1E609Cu;
    SET_GPR_U32(ctx, 31, 0x1E60A4u);
    ctx->pc = 0x1E60A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E609Cu;
            // 0x1e60a0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5400u;
    if (runtime->hasFunction(0x1E5400u)) {
        auto targetFn = runtime->lookupFunction(0x1E5400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60A4u; }
        if (ctx->pc != 0x1E60A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5400_0x1e5400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60A4u; }
        if (ctx->pc != 0x1E60A4u) { return; }
    }
    ctx->pc = 0x1E60A4u;
label_1e60a4:
    // 0x1e60a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e60a8:
    // 0x1e60a8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e60ac:
    // 0x1e60ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e60b0:
    if (ctx->pc == 0x1E60B0u) {
        ctx->pc = 0x1E60B0u;
            // 0x1e60b0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1E60B4u;
        goto label_1e60b4;
    }
    ctx->pc = 0x1E60ACu;
    {
        const bool branch_taken_0x1e60ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60ACu;
            // 0x1e60b0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60ac) {
            ctx->pc = 0x1E60CCu;
            goto label_1e60cc;
        }
    }
    ctx->pc = 0x1E60B4u;
label_1e60b4:
    // 0x1e60b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e60b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e60b8:
    // 0x1e60b8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e60bc:
    // 0x1e60bc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e60bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e60c0:
    // 0x1e60c0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e60c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e60c4:
    // 0x1e60c4: 0xc079500  jal         func_1E5400
label_1e60c8:
    if (ctx->pc == 0x1E60C8u) {
        ctx->pc = 0x1E60C8u;
            // 0x1e60c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E60CCu;
        goto label_1e60cc;
    }
    ctx->pc = 0x1E60C4u;
    SET_GPR_U32(ctx, 31, 0x1E60CCu);
    ctx->pc = 0x1E60C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60C4u;
            // 0x1e60c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5400u;
    if (runtime->hasFunction(0x1E5400u)) {
        auto targetFn = runtime->lookupFunction(0x1E5400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60CCu; }
        if (ctx->pc != 0x1E60CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5400_0x1e5400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60CCu; }
        if (ctx->pc != 0x1E60CCu) { return; }
    }
    ctx->pc = 0x1E60CCu;
label_1e60cc:
    // 0x1e60cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e60d0:
    // 0x1e60d0: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e60d4:
    // 0x1e60d4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1e60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1e60d8:
    // 0x1e60d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e60d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e60dc:
    // 0x1e60dc: 0x3e00008  jr          $ra
label_1e60e0:
    if (ctx->pc == 0x1E60E0u) {
        ctx->pc = 0x1E60E0u;
            // 0x1e60e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E60E4u;
        goto label_1e60e4;
    }
    ctx->pc = 0x1E60DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E60E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60DCu;
            // 0x1e60e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E60E4u;
label_1e60e4:
    // 0x1e60e4: 0x0  nop
    ctx->pc = 0x1e60e4u;
    // NOP
label_1e60e8:
    // 0x1e60e8: 0x0  nop
    ctx->pc = 0x1e60e8u;
    // NOP
label_1e60ec:
    // 0x1e60ec: 0x0  nop
    ctx->pc = 0x1e60ecu;
    // NOP
label_1e60f0:
    // 0x1e60f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e60f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e60f4:
    // 0x1e60f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e60f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e60f8:
    // 0x1e60f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e60f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e60fc:
    // 0x1e60fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e60fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6100:
    // 0x1e6100: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1e6104:
    if (ctx->pc == 0x1E6104u) {
        ctx->pc = 0x1E6104u;
            // 0x1e6104: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E6108u;
        goto label_1e6108;
    }
    ctx->pc = 0x1E6100u;
    {
        const bool branch_taken_0x1e6100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6100u;
            // 0x1e6104: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6100) {
            ctx->pc = 0x1E6178u;
            goto label_1e6178;
        }
    }
    ctx->pc = 0x1E6108u;
label_1e6108:
    // 0x1e6108: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e610c:
    // 0x1e610c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1e6110:
    // 0x1e6110: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e6114:
    if (ctx->pc == 0x1E6114u) {
        ctx->pc = 0x1E6114u;
            // 0x1e6114: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6118u;
        goto label_1e6118;
    }
    ctx->pc = 0x1E6110u;
    {
        const bool branch_taken_0x1e6110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6110u;
            // 0x1e6114: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6110) {
            ctx->pc = 0x1E6124u;
            goto label_1e6124;
        }
    }
    ctx->pc = 0x1E6118u;
label_1e6118:
    // 0x1e6118: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e611c:
    // 0x1e611c: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x1e611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
label_1e6120:
    // 0x1e6120: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e6120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e6124:
    // 0x1e6124: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e6124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e6128:
    // 0x1e6128: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e6128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e612c:
    // 0x1e612c: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_1e6130:
    if (ctx->pc == 0x1E6130u) {
        ctx->pc = 0x1E6130u;
            // 0x1e6130: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6134u;
        goto label_1e6134;
    }
    ctx->pc = 0x1E612Cu;
    {
        const bool branch_taken_0x1e612c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e612c) {
            ctx->pc = 0x1E6130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E612Cu;
            // 0x1e6130: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E617Cu;
            goto label_1e617c;
        }
    }
    ctx->pc = 0x1E6134u;
label_1e6134:
    // 0x1e6134: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e6134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e6138:
    // 0x1e6138: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1e6138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e613c:
    // 0x1e613c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1e613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e6140:
    // 0x1e6140: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e6144:
    // 0x1e6144: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e6144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6148:
    // 0x1e6148: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1e614c:
    if (ctx->pc == 0x1E614Cu) {
        ctx->pc = 0x1E614Cu;
            // 0x1e614c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x1E6150u;
        goto label_1e6150;
    }
    ctx->pc = 0x1E6148u;
    {
        const bool branch_taken_0x1e6148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6148) {
            ctx->pc = 0x1E614Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6148u;
            // 0x1e614c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6164u;
            goto label_1e6164;
        }
    }
    ctx->pc = 0x1E6150u;
label_1e6150:
    // 0x1e6150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6154:
    // 0x1e6154: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e6154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e6158:
    // 0x1e6158: 0xc0a79ec  jal         func_29E7B0
label_1e615c:
    if (ctx->pc == 0x1E615Cu) {
        ctx->pc = 0x1E615Cu;
            // 0x1e615c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6160u;
        goto label_1e6160;
    }
    ctx->pc = 0x1E6158u;
    SET_GPR_U32(ctx, 31, 0x1E6160u);
    ctx->pc = 0x1E615Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6158u;
            // 0x1e615c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6160u; }
        if (ctx->pc != 0x1E6160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6160u; }
        if (ctx->pc != 0x1E6160u) { return; }
    }
    ctx->pc = 0x1E6160u;
label_1e6160:
    // 0x1e6160: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1e6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e6164:
    // 0x1e6164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e6168:
    // 0x1e6168: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1e6168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1e616c:
    // 0x1e616c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1e616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e6170:
    // 0x1e6170: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e6170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e6174:
    // 0x1e6174: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x1e6174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
label_1e6178:
    // 0x1e6178: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e6178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e617c:
    // 0x1e617c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6180:
    // 0x1e6180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6184:
    // 0x1e6184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6188:
    // 0x1e6188: 0x3e00008  jr          $ra
label_1e618c:
    if (ctx->pc == 0x1E618Cu) {
        ctx->pc = 0x1E618Cu;
            // 0x1e618c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E6190u;
        goto label_1e6190;
    }
    ctx->pc = 0x1E6188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6188u;
            // 0x1e618c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6190u;
label_1e6190:
    // 0x1e6190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6194:
    // 0x1e6194: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e6194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e6198:
    // 0x1e6198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e619c:
    // 0x1e619c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e619cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e61a0:
    // 0x1e61a0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1e61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1e61a4:
    // 0x1e61a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e61a8:
    // 0x1e61a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e61a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e61ac:
    // 0x1e61ac: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1e61acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1e61b0:
    // 0x1e61b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e61b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e61b4:
    // 0x1e61b4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1e61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1e61b8:
    // 0x1e61b8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e61b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e61bc:
    // 0x1e61bc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e61c0:
    // 0x1e61c0: 0xc079620  jal         func_1E5880
label_1e61c4:
    if (ctx->pc == 0x1E61C4u) {
        ctx->pc = 0x1E61C4u;
            // 0x1e61c4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E61C8u;
        goto label_1e61c8;
    }
    ctx->pc = 0x1E61C0u;
    SET_GPR_U32(ctx, 31, 0x1E61C8u);
    ctx->pc = 0x1E61C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61C0u;
            // 0x1e61c4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5880u;
    if (runtime->hasFunction(0x1E5880u)) {
        auto targetFn = runtime->lookupFunction(0x1E5880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E61C8u; }
        if (ctx->pc != 0x1E61C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5880_0x1e5880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E61C8u; }
        if (ctx->pc != 0x1E61C8u) { return; }
    }
    ctx->pc = 0x1E61C8u;
label_1e61c8:
    // 0x1e61c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e61cc:
    // 0x1e61cc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e61d0:
    // 0x1e61d0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e61d4:
    // 0x1e61d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e61d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e61d8:
    // 0x1e61d8: 0x3e00008  jr          $ra
label_1e61dc:
    if (ctx->pc == 0x1E61DCu) {
        ctx->pc = 0x1E61DCu;
            // 0x1e61dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E61E0u;
        goto label_1e61e0;
    }
    ctx->pc = 0x1E61D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E61DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61D8u;
            // 0x1e61dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E61E0u;
label_1e61e0:
    // 0x1e61e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e61e4:
    // 0x1e61e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e61e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e61e8:
    // 0x1e61e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e61ec:
    // 0x1e61ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e61ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e61f0:
    // 0x1e61f0: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1e61f4:
    if (ctx->pc == 0x1E61F4u) {
        ctx->pc = 0x1E61F4u;
            // 0x1e61f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E61F8u;
        goto label_1e61f8;
    }
    ctx->pc = 0x1E61F0u;
    {
        const bool branch_taken_0x1e61f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61F0u;
            // 0x1e61f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61f0) {
            ctx->pc = 0x1E6268u;
            goto label_1e6268;
        }
    }
    ctx->pc = 0x1E61F8u;
label_1e61f8:
    // 0x1e61f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e61fc:
    // 0x1e61fc: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1e61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1e6200:
    // 0x1e6200: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e6204:
    if (ctx->pc == 0x1E6204u) {
        ctx->pc = 0x1E6204u;
            // 0x1e6204: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6208u;
        goto label_1e6208;
    }
    ctx->pc = 0x1E6200u;
    {
        const bool branch_taken_0x1e6200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6200u;
            // 0x1e6204: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6200) {
            ctx->pc = 0x1E6214u;
            goto label_1e6214;
        }
    }
    ctx->pc = 0x1E6208u;
label_1e6208:
    // 0x1e6208: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e620c:
    // 0x1e620c: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x1e620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
label_1e6210:
    // 0x1e6210: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e6210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e6214:
    // 0x1e6214: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e6214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e6218:
    // 0x1e6218: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e6218u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e621c:
    // 0x1e621c: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_1e6220:
    if (ctx->pc == 0x1E6220u) {
        ctx->pc = 0x1E6220u;
            // 0x1e6220: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6224u;
        goto label_1e6224;
    }
    ctx->pc = 0x1E621Cu;
    {
        const bool branch_taken_0x1e621c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e621c) {
            ctx->pc = 0x1E6220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E621Cu;
            // 0x1e6220: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E626Cu;
            goto label_1e626c;
        }
    }
    ctx->pc = 0x1E6224u;
label_1e6224:
    // 0x1e6224: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e6224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e6228:
    // 0x1e6228: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1e6228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e622c:
    // 0x1e622c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e6230:
    // 0x1e6230: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e6230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e6234:
    // 0x1e6234: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e6234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6238:
    // 0x1e6238: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1e623c:
    if (ctx->pc == 0x1E623Cu) {
        ctx->pc = 0x1E623Cu;
            // 0x1e623c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1E6240u;
        goto label_1e6240;
    }
    ctx->pc = 0x1E6238u;
    {
        const bool branch_taken_0x1e6238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6238) {
            ctx->pc = 0x1E623Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6238u;
            // 0x1e623c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6254u;
            goto label_1e6254;
        }
    }
    ctx->pc = 0x1E6240u;
label_1e6240:
    // 0x1e6240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6244:
    // 0x1e6244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6248:
    // 0x1e6248: 0xc0a79ec  jal         func_29E7B0
label_1e624c:
    if (ctx->pc == 0x1E624Cu) {
        ctx->pc = 0x1E624Cu;
            // 0x1e624c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6250u;
        goto label_1e6250;
    }
    ctx->pc = 0x1E6248u;
    SET_GPR_U32(ctx, 31, 0x1E6250u);
    ctx->pc = 0x1E624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6248u;
            // 0x1e624c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6250u; }
        if (ctx->pc != 0x1E6250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6250u; }
        if (ctx->pc != 0x1E6250u) { return; }
    }
    ctx->pc = 0x1E6250u;
label_1e6250:
    // 0x1e6250: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e6254:
    // 0x1e6254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e6258:
    // 0x1e6258: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1e6258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1e625c:
    // 0x1e625c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e6260:
    // 0x1e6260: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e6260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e6264:
    // 0x1e6264: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x1e6264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_1e6268:
    // 0x1e6268: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e6268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e626c:
    // 0x1e626c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e626cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6270:
    // 0x1e6270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6274:
    // 0x1e6274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6278:
    // 0x1e6278: 0x3e00008  jr          $ra
label_1e627c:
    if (ctx->pc == 0x1E627Cu) {
        ctx->pc = 0x1E627Cu;
            // 0x1e627c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E6280u;
        goto label_1e6280;
    }
    ctx->pc = 0x1E6278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6278u;
            // 0x1e627c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6280u;
label_1e6280:
    // 0x1e6280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6284:
    // 0x1e6284: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e6284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e6288:
    // 0x1e6288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e628c:
    // 0x1e628c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e6290:
    // 0x1e6290: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1e6290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1e6294:
    // 0x1e6294: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e6298:
    // 0x1e6298: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1e6298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e629c:
    // 0x1e629c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1e629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1e62a0:
    // 0x1e62a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e62a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e62a4:
    // 0x1e62a4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1e62a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1e62a8:
    // 0x1e62a8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1e62a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e62ac:
    // 0x1e62ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e62acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e62b0:
    // 0x1e62b0: 0xc079590  jal         func_1E5640
label_1e62b4:
    if (ctx->pc == 0x1E62B4u) {
        ctx->pc = 0x1E62B4u;
            // 0x1e62b4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E62B8u;
        goto label_1e62b8;
    }
    ctx->pc = 0x1E62B0u;
    SET_GPR_U32(ctx, 31, 0x1E62B8u);
    ctx->pc = 0x1E62B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62B0u;
            // 0x1e62b4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5640u;
    if (runtime->hasFunction(0x1E5640u)) {
        auto targetFn = runtime->lookupFunction(0x1E5640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62B8u; }
        if (ctx->pc != 0x1E62B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5640_0x1e5640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62B8u; }
        if (ctx->pc != 0x1E62B8u) { return; }
    }
    ctx->pc = 0x1E62B8u;
label_1e62b8:
    // 0x1e62b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e62bc:
    // 0x1e62bc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e62bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e62c0:
    // 0x1e62c0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e62c4:
    // 0x1e62c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e62c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e62c8:
    // 0x1e62c8: 0x3e00008  jr          $ra
label_1e62cc:
    if (ctx->pc == 0x1E62CCu) {
        ctx->pc = 0x1E62CCu;
            // 0x1e62cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E62D0u;
        goto label_1e62d0;
    }
    ctx->pc = 0x1E62C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E62CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62C8u;
            // 0x1e62cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E62D0u;
label_1e62d0:
    // 0x1e62d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e62d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e62d4:
    // 0x1e62d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e62d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e62d8:
    // 0x1e62d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e62d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e62dc:
    // 0x1e62dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e62e0:
    // 0x1e62e0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1e62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1e62e4:
    // 0x1e62e4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1e62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1e62e8:
    // 0x1e62e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e62e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e62ec:
    // 0x1e62ec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e62ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e62f0:
    // 0x1e62f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1e62f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e62f4:
    // 0x1e62f4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e62f8:
    // 0x1e62f8: 0xc0796dc  jal         func_1E5B70
label_1e62fc:
    if (ctx->pc == 0x1E62FCu) {
        ctx->pc = 0x1E62FCu;
            // 0x1e62fc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E6300u;
        goto label_1e6300;
    }
    ctx->pc = 0x1E62F8u;
    SET_GPR_U32(ctx, 31, 0x1E6300u);
    ctx->pc = 0x1E62FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62F8u;
            // 0x1e62fc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B70u;
    if (runtime->hasFunction(0x1E5B70u)) {
        auto targetFn = runtime->lookupFunction(0x1E5B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6300u; }
        if (ctx->pc != 0x1E6300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5B70_0x1e5b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6300u; }
        if (ctx->pc != 0x1E6300u) { return; }
    }
    ctx->pc = 0x1E6300u;
label_1e6300:
    // 0x1e6300: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e6300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e6304:
    // 0x1e6304: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e6304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1e6308:
    // 0x1e6308: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e6308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e630c:
    // 0x1e630c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e630cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6310:
    // 0x1e6310: 0x3e00008  jr          $ra
label_1e6314:
    if (ctx->pc == 0x1E6314u) {
        ctx->pc = 0x1E6314u;
            // 0x1e6314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E6318u;
        goto label_1e6318;
    }
    ctx->pc = 0x1E6310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6310u;
            // 0x1e6314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6318u;
label_1e6318:
    // 0x1e6318: 0x0  nop
    ctx->pc = 0x1e6318u;
    // NOP
label_1e631c:
    // 0x1e631c: 0x0  nop
    ctx->pc = 0x1e631cu;
    // NOP
label_1e6320:
    // 0x1e6320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e6324:
    // 0x1e6324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e6328:
    // 0x1e6328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e632c:
    // 0x1e632c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e632cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6330:
    // 0x1e6330: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1e6334:
    if (ctx->pc == 0x1E6334u) {
        ctx->pc = 0x1E6334u;
            // 0x1e6334: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E6338u;
        goto label_1e6338;
    }
    ctx->pc = 0x1E6330u;
    {
        const bool branch_taken_0x1e6330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6330u;
            // 0x1e6334: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6330) {
            ctx->pc = 0x1E63A8u;
            goto label_1e63a8;
        }
    }
    ctx->pc = 0x1E6338u;
label_1e6338:
    // 0x1e6338: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e633c:
    // 0x1e633c: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1e633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1e6340:
    // 0x1e6340: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e6344:
    if (ctx->pc == 0x1E6344u) {
        ctx->pc = 0x1E6344u;
            // 0x1e6344: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6348u;
        goto label_1e6348;
    }
    ctx->pc = 0x1E6340u;
    {
        const bool branch_taken_0x1e6340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6340u;
            // 0x1e6344: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6340) {
            ctx->pc = 0x1E6354u;
            goto label_1e6354;
        }
    }
    ctx->pc = 0x1E6348u;
label_1e6348:
    // 0x1e6348: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e634c:
    // 0x1e634c: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x1e634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
label_1e6350:
    // 0x1e6350: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e6350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e6354:
    // 0x1e6354: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e6354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e6358:
    // 0x1e6358: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e6358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e635c:
    // 0x1e635c: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_1e6360:
    if (ctx->pc == 0x1E6360u) {
        ctx->pc = 0x1E6360u;
            // 0x1e6360: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6364u;
        goto label_1e6364;
    }
    ctx->pc = 0x1E635Cu;
    {
        const bool branch_taken_0x1e635c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e635c) {
            ctx->pc = 0x1E6360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E635Cu;
            // 0x1e6360: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E63ACu;
            goto label_1e63ac;
        }
    }
    ctx->pc = 0x1E6364u;
label_1e6364:
    // 0x1e6364: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e6364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e6368:
    // 0x1e6368: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1e6368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e636c:
    // 0x1e636c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1e636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1e6370:
    // 0x1e6370: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e6370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e6374:
    // 0x1e6374: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e6374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6378:
    // 0x1e6378: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1e637c:
    if (ctx->pc == 0x1E637Cu) {
        ctx->pc = 0x1E637Cu;
            // 0x1e637c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1E6380u;
        goto label_1e6380;
    }
    ctx->pc = 0x1E6378u;
    {
        const bool branch_taken_0x1e6378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6378) {
            ctx->pc = 0x1E637Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6378u;
            // 0x1e637c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6394u;
            goto label_1e6394;
        }
    }
    ctx->pc = 0x1E6380u;
label_1e6380:
    // 0x1e6380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6384:
    // 0x1e6384: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e6384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6388:
    // 0x1e6388: 0xc0a79ec  jal         func_29E7B0
label_1e638c:
    if (ctx->pc == 0x1E638Cu) {
        ctx->pc = 0x1E638Cu;
            // 0x1e638c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6390u;
        goto label_1e6390;
    }
    ctx->pc = 0x1E6388u;
    SET_GPR_U32(ctx, 31, 0x1E6390u);
    ctx->pc = 0x1E638Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6388u;
            // 0x1e638c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6390u; }
        if (ctx->pc != 0x1E6390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6390u; }
        if (ctx->pc != 0x1E6390u) { return; }
    }
    ctx->pc = 0x1E6390u;
label_1e6390:
    // 0x1e6390: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1e6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1e6394:
    // 0x1e6394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e6398:
    // 0x1e6398: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1e6398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1e639c:
    // 0x1e639c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e63a0:
    // 0x1e63a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e63a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e63a4:
    // 0x1e63a4: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x1e63a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_1e63a8:
    // 0x1e63a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e63a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e63ac:
    // 0x1e63ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e63acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e63b0:
    // 0x1e63b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e63b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e63b4:
    // 0x1e63b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e63b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e63b8:
    // 0x1e63b8: 0x3e00008  jr          $ra
label_1e63bc:
    if (ctx->pc == 0x1E63BCu) {
        ctx->pc = 0x1E63BCu;
            // 0x1e63bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E63C0u;
        goto label_1e63c0;
    }
    ctx->pc = 0x1E63B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E63BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63B8u;
            // 0x1e63bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E63C0u;
label_1e63c0:
    // 0x1e63c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e63c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e63c4:
    // 0x1e63c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e63c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e63c8:
    // 0x1e63c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e63c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e63cc:
    // 0x1e63cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e63d0:
    // 0x1e63d0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1e63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1e63d4:
    // 0x1e63d4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1e63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1e63d8:
    // 0x1e63d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e63d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e63dc:
    // 0x1e63dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e63e0:
    // 0x1e63e0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e63e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e63e4:
    // 0x1e63e4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1e63e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e63e8:
    // 0x1e63e8: 0xc0796a4  jal         func_1E5A90
label_1e63ec:
    if (ctx->pc == 0x1E63ECu) {
        ctx->pc = 0x1E63ECu;
            // 0x1e63ec: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E63F0u;
        goto label_1e63f0;
    }
    ctx->pc = 0x1E63E8u;
    SET_GPR_U32(ctx, 31, 0x1E63F0u);
    ctx->pc = 0x1E63ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63E8u;
            // 0x1e63ec: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A90u;
    if (runtime->hasFunction(0x1E5A90u)) {
        auto targetFn = runtime->lookupFunction(0x1E5A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63F0u; }
        if (ctx->pc != 0x1E63F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5A90_0x1e5a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63F0u; }
        if (ctx->pc != 0x1E63F0u) { return; }
    }
    ctx->pc = 0x1E63F0u;
label_1e63f0:
    // 0x1e63f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e63f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e63f4:
    // 0x1e63f4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1e63f8:
    // 0x1e63f8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e63f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e63fc:
    // 0x1e63fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e63fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6400:
    // 0x1e6400: 0x3e00008  jr          $ra
label_1e6404:
    if (ctx->pc == 0x1E6404u) {
        ctx->pc = 0x1E6404u;
            // 0x1e6404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E6408u;
        goto label_1e6408;
    }
    ctx->pc = 0x1E6400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6400u;
            // 0x1e6404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6408u;
label_1e6408:
    // 0x1e6408: 0x0  nop
    ctx->pc = 0x1e6408u;
    // NOP
label_1e640c:
    // 0x1e640c: 0x0  nop
    ctx->pc = 0x1e640cu;
    // NOP
label_1e6410:
    // 0x1e6410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e6414:
    // 0x1e6414: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e6414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e6418:
    // 0x1e6418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e641c:
    // 0x1e641c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1e641cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6420:
    // 0x1e6420: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1e6420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e6424:
    // 0x1e6424: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e6424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e6428:
    // 0x1e6428: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e642c:
    // 0x1e642c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1e642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1e6430:
    // 0x1e6430: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1e6430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_1e6434:
    // 0x1e6434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6438:
    // 0x1e6438: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1e6438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e643c:
    // 0x1e643c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1e643cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1e6440:
    // 0x1e6440: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1e6440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1e6444:
    // 0x1e6444: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1e6444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_1e6448:
    // 0x1e6448: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1e6448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1e644c:
    // 0x1e644c: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1e644cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_1e6450:
    // 0x1e6450: 0x80e50010  lb          $a1, 0x10($a3)
    ctx->pc = 0x1e6450u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1e6454:
    // 0x1e6454: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x1e6454u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_1e6458:
    // 0x1e6458: 0xc4e90020  lwc1        $f9, 0x20($a3)
    ctx->pc = 0x1e6458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e645c:
    // 0x1e645c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1e645cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e6460:
    // 0x1e6460: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x1e6460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e6464:
    // 0x1e6464: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1e6464u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1e6468:
    // 0x1e6468: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1e6468u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e646c:
    // 0x1e646c: 0xc4e70028  lwc1        $f7, 0x28($a3)
    ctx->pc = 0x1e646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e6470:
    // 0x1e6470: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1e6470u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1e6474:
    // 0x1e6474: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1e6474u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e6478:
    // 0x1e6478: 0xc4e6002c  lwc1        $f6, 0x2C($a3)
    ctx->pc = 0x1e6478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e647c:
    // 0x1e647c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1e647cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1e6480:
    // 0x1e6480: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1e6480u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e6484:
    // 0x1e6484: 0xc4e50030  lwc1        $f5, 0x30($a3)
    ctx->pc = 0x1e6484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6488:
    // 0x1e6488: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1e6488u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1e648c:
    // 0x1e648c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1e648cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1e6490:
    // 0x1e6490: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x1e6490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6494:
    // 0x1e6494: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1e6494u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1e6498:
    // 0x1e6498: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1e6498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_1e649c:
    // 0x1e649c: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1e649cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1e64a0:
    // 0x1e64a0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1e64a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e64a4:
    // 0x1e64a4: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1e64a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e64a8:
    // 0x1e64a8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1e64a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1e64ac:
    // 0x1e64ac: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1e64acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e64b0:
    // 0x1e64b0: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1e64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1e64b4:
    // 0x1e64b4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1e64b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e64b8:
    // 0x1e64b8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e64b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e64bc:
    // 0x1e64bc: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1e64bcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e64c0:
    // 0x1e64c0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1e64c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e64c4:
    // 0x1e64c4: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1e64c4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1e64c8:
    // 0x1e64c8: 0x11200012  beqz        $t1, . + 4 + (0x12 << 2)
label_1e64cc:
    if (ctx->pc == 0x1E64CCu) {
        ctx->pc = 0x1E64CCu;
            // 0x1e64cc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1E64D0u;
        goto label_1e64d0;
    }
    ctx->pc = 0x1E64C8u;
    {
        const bool branch_taken_0x1e64c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64C8u;
            // 0x1e64cc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64c8) {
            ctx->pc = 0x1E6514u;
            goto label_1e6514;
        }
    }
    ctx->pc = 0x1E64D0u;
label_1e64d0:
    // 0x1e64d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e64d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e64d4:
    // 0x1e64d4: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1e64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1e64d8:
    // 0x1e64d8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e64d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1e64dc:
    // 0x1e64dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e64e0:
    // 0x1e64e0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1e64e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1e64e4:
    // 0x1e64e4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1e64e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e64e8:
    // 0x1e64e8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1e64e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e64ec:
    // 0x1e64ec: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1e64ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e64f0:
    // 0x1e64f0: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1e64f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e64f4:
    // 0x1e64f4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1e64f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e64f8:
    // 0x1e64f8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1e64f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e64fc:
    // 0x1e64fc: 0xc079418  jal         func_1E5060
label_1e6500:
    if (ctx->pc == 0x1E6500u) {
        ctx->pc = 0x1E6500u;
            // 0x1e6500: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1E6504u;
        goto label_1e6504;
    }
    ctx->pc = 0x1E64FCu;
    SET_GPR_U32(ctx, 31, 0x1E6504u);
    ctx->pc = 0x1E6500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64FCu;
            // 0x1e6500: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5060u;
    if (runtime->hasFunction(0x1E5060u)) {
        auto targetFn = runtime->lookupFunction(0x1E5060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6504u; }
        if (ctx->pc != 0x1E6504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5060_0x1e5060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6504u; }
        if (ctx->pc != 0x1E6504u) { return; }
    }
    ctx->pc = 0x1E6504u;
label_1e6504:
    // 0x1e6504: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e6504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e6508:
    // 0x1e6508: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e6508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e650c:
    // 0x1e650c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e6510:
    if (ctx->pc == 0x1E6510u) {
        ctx->pc = 0x1E6510u;
            // 0x1e6510: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1E6514u;
        goto label_1e6514;
    }
    ctx->pc = 0x1E650Cu;
    {
        const bool branch_taken_0x1e650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E650Cu;
            // 0x1e6510: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e650c) {
            ctx->pc = 0x1E652Cu;
            goto label_1e652c;
        }
    }
    ctx->pc = 0x1E6514u;
label_1e6514:
    // 0x1e6514: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e6514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e6518:
    // 0x1e6518: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1e6518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e651c:
    // 0x1e651c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1e651cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1e6520:
    // 0x1e6520: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1e6520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e6524:
    // 0x1e6524: 0xc079418  jal         func_1E5060
label_1e6528:
    if (ctx->pc == 0x1E6528u) {
        ctx->pc = 0x1E6528u;
            // 0x1e6528: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E652Cu;
        goto label_1e652c;
    }
    ctx->pc = 0x1E6524u;
    SET_GPR_U32(ctx, 31, 0x1E652Cu);
    ctx->pc = 0x1E6528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6524u;
            // 0x1e6528: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5060u;
    if (runtime->hasFunction(0x1E5060u)) {
        auto targetFn = runtime->lookupFunction(0x1E5060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E652Cu; }
        if (ctx->pc != 0x1E652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5060_0x1e5060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E652Cu; }
        if (ctx->pc != 0x1E652Cu) { return; }
    }
    ctx->pc = 0x1E652Cu;
label_1e652c:
    // 0x1e652c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e652cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e6530:
    // 0x1e6530: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e6530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e6534:
    // 0x1e6534: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1e6534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1e6538:
    // 0x1e6538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e653c:
    // 0x1e653c: 0x3e00008  jr          $ra
label_1e6540:
    if (ctx->pc == 0x1E6540u) {
        ctx->pc = 0x1E6540u;
            // 0x1e6540: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E6544u;
        goto label_1e6544;
    }
    ctx->pc = 0x1E653Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E653Cu;
            // 0x1e6540: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6544u;
label_1e6544:
    // 0x1e6544: 0x0  nop
    ctx->pc = 0x1e6544u;
    // NOP
label_1e6548:
    // 0x1e6548: 0x0  nop
    ctx->pc = 0x1e6548u;
    // NOP
label_1e654c:
    // 0x1e654c: 0x0  nop
    ctx->pc = 0x1e654cu;
    // NOP
}
