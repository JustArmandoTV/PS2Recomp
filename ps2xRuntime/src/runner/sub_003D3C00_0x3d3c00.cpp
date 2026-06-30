#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D3C00
// Address: 0x3d3c00 - 0x3d4990
void sub_003D3C00_0x3d3c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3C00_0x3d3c00");
#endif

    switch (ctx->pc) {
        case 0x3d3c00u: goto label_3d3c00;
        case 0x3d3c04u: goto label_3d3c04;
        case 0x3d3c08u: goto label_3d3c08;
        case 0x3d3c0cu: goto label_3d3c0c;
        case 0x3d3c10u: goto label_3d3c10;
        case 0x3d3c14u: goto label_3d3c14;
        case 0x3d3c18u: goto label_3d3c18;
        case 0x3d3c1cu: goto label_3d3c1c;
        case 0x3d3c20u: goto label_3d3c20;
        case 0x3d3c24u: goto label_3d3c24;
        case 0x3d3c28u: goto label_3d3c28;
        case 0x3d3c2cu: goto label_3d3c2c;
        case 0x3d3c30u: goto label_3d3c30;
        case 0x3d3c34u: goto label_3d3c34;
        case 0x3d3c38u: goto label_3d3c38;
        case 0x3d3c3cu: goto label_3d3c3c;
        case 0x3d3c40u: goto label_3d3c40;
        case 0x3d3c44u: goto label_3d3c44;
        case 0x3d3c48u: goto label_3d3c48;
        case 0x3d3c4cu: goto label_3d3c4c;
        case 0x3d3c50u: goto label_3d3c50;
        case 0x3d3c54u: goto label_3d3c54;
        case 0x3d3c58u: goto label_3d3c58;
        case 0x3d3c5cu: goto label_3d3c5c;
        case 0x3d3c60u: goto label_3d3c60;
        case 0x3d3c64u: goto label_3d3c64;
        case 0x3d3c68u: goto label_3d3c68;
        case 0x3d3c6cu: goto label_3d3c6c;
        case 0x3d3c70u: goto label_3d3c70;
        case 0x3d3c74u: goto label_3d3c74;
        case 0x3d3c78u: goto label_3d3c78;
        case 0x3d3c7cu: goto label_3d3c7c;
        case 0x3d3c80u: goto label_3d3c80;
        case 0x3d3c84u: goto label_3d3c84;
        case 0x3d3c88u: goto label_3d3c88;
        case 0x3d3c8cu: goto label_3d3c8c;
        case 0x3d3c90u: goto label_3d3c90;
        case 0x3d3c94u: goto label_3d3c94;
        case 0x3d3c98u: goto label_3d3c98;
        case 0x3d3c9cu: goto label_3d3c9c;
        case 0x3d3ca0u: goto label_3d3ca0;
        case 0x3d3ca4u: goto label_3d3ca4;
        case 0x3d3ca8u: goto label_3d3ca8;
        case 0x3d3cacu: goto label_3d3cac;
        case 0x3d3cb0u: goto label_3d3cb0;
        case 0x3d3cb4u: goto label_3d3cb4;
        case 0x3d3cb8u: goto label_3d3cb8;
        case 0x3d3cbcu: goto label_3d3cbc;
        case 0x3d3cc0u: goto label_3d3cc0;
        case 0x3d3cc4u: goto label_3d3cc4;
        case 0x3d3cc8u: goto label_3d3cc8;
        case 0x3d3cccu: goto label_3d3ccc;
        case 0x3d3cd0u: goto label_3d3cd0;
        case 0x3d3cd4u: goto label_3d3cd4;
        case 0x3d3cd8u: goto label_3d3cd8;
        case 0x3d3cdcu: goto label_3d3cdc;
        case 0x3d3ce0u: goto label_3d3ce0;
        case 0x3d3ce4u: goto label_3d3ce4;
        case 0x3d3ce8u: goto label_3d3ce8;
        case 0x3d3cecu: goto label_3d3cec;
        case 0x3d3cf0u: goto label_3d3cf0;
        case 0x3d3cf4u: goto label_3d3cf4;
        case 0x3d3cf8u: goto label_3d3cf8;
        case 0x3d3cfcu: goto label_3d3cfc;
        case 0x3d3d00u: goto label_3d3d00;
        case 0x3d3d04u: goto label_3d3d04;
        case 0x3d3d08u: goto label_3d3d08;
        case 0x3d3d0cu: goto label_3d3d0c;
        case 0x3d3d10u: goto label_3d3d10;
        case 0x3d3d14u: goto label_3d3d14;
        case 0x3d3d18u: goto label_3d3d18;
        case 0x3d3d1cu: goto label_3d3d1c;
        case 0x3d3d20u: goto label_3d3d20;
        case 0x3d3d24u: goto label_3d3d24;
        case 0x3d3d28u: goto label_3d3d28;
        case 0x3d3d2cu: goto label_3d3d2c;
        case 0x3d3d30u: goto label_3d3d30;
        case 0x3d3d34u: goto label_3d3d34;
        case 0x3d3d38u: goto label_3d3d38;
        case 0x3d3d3cu: goto label_3d3d3c;
        case 0x3d3d40u: goto label_3d3d40;
        case 0x3d3d44u: goto label_3d3d44;
        case 0x3d3d48u: goto label_3d3d48;
        case 0x3d3d4cu: goto label_3d3d4c;
        case 0x3d3d50u: goto label_3d3d50;
        case 0x3d3d54u: goto label_3d3d54;
        case 0x3d3d58u: goto label_3d3d58;
        case 0x3d3d5cu: goto label_3d3d5c;
        case 0x3d3d60u: goto label_3d3d60;
        case 0x3d3d64u: goto label_3d3d64;
        case 0x3d3d68u: goto label_3d3d68;
        case 0x3d3d6cu: goto label_3d3d6c;
        case 0x3d3d70u: goto label_3d3d70;
        case 0x3d3d74u: goto label_3d3d74;
        case 0x3d3d78u: goto label_3d3d78;
        case 0x3d3d7cu: goto label_3d3d7c;
        case 0x3d3d80u: goto label_3d3d80;
        case 0x3d3d84u: goto label_3d3d84;
        case 0x3d3d88u: goto label_3d3d88;
        case 0x3d3d8cu: goto label_3d3d8c;
        case 0x3d3d90u: goto label_3d3d90;
        case 0x3d3d94u: goto label_3d3d94;
        case 0x3d3d98u: goto label_3d3d98;
        case 0x3d3d9cu: goto label_3d3d9c;
        case 0x3d3da0u: goto label_3d3da0;
        case 0x3d3da4u: goto label_3d3da4;
        case 0x3d3da8u: goto label_3d3da8;
        case 0x3d3dacu: goto label_3d3dac;
        case 0x3d3db0u: goto label_3d3db0;
        case 0x3d3db4u: goto label_3d3db4;
        case 0x3d3db8u: goto label_3d3db8;
        case 0x3d3dbcu: goto label_3d3dbc;
        case 0x3d3dc0u: goto label_3d3dc0;
        case 0x3d3dc4u: goto label_3d3dc4;
        case 0x3d3dc8u: goto label_3d3dc8;
        case 0x3d3dccu: goto label_3d3dcc;
        case 0x3d3dd0u: goto label_3d3dd0;
        case 0x3d3dd4u: goto label_3d3dd4;
        case 0x3d3dd8u: goto label_3d3dd8;
        case 0x3d3ddcu: goto label_3d3ddc;
        case 0x3d3de0u: goto label_3d3de0;
        case 0x3d3de4u: goto label_3d3de4;
        case 0x3d3de8u: goto label_3d3de8;
        case 0x3d3decu: goto label_3d3dec;
        case 0x3d3df0u: goto label_3d3df0;
        case 0x3d3df4u: goto label_3d3df4;
        case 0x3d3df8u: goto label_3d3df8;
        case 0x3d3dfcu: goto label_3d3dfc;
        case 0x3d3e00u: goto label_3d3e00;
        case 0x3d3e04u: goto label_3d3e04;
        case 0x3d3e08u: goto label_3d3e08;
        case 0x3d3e0cu: goto label_3d3e0c;
        case 0x3d3e10u: goto label_3d3e10;
        case 0x3d3e14u: goto label_3d3e14;
        case 0x3d3e18u: goto label_3d3e18;
        case 0x3d3e1cu: goto label_3d3e1c;
        case 0x3d3e20u: goto label_3d3e20;
        case 0x3d3e24u: goto label_3d3e24;
        case 0x3d3e28u: goto label_3d3e28;
        case 0x3d3e2cu: goto label_3d3e2c;
        case 0x3d3e30u: goto label_3d3e30;
        case 0x3d3e34u: goto label_3d3e34;
        case 0x3d3e38u: goto label_3d3e38;
        case 0x3d3e3cu: goto label_3d3e3c;
        case 0x3d3e40u: goto label_3d3e40;
        case 0x3d3e44u: goto label_3d3e44;
        case 0x3d3e48u: goto label_3d3e48;
        case 0x3d3e4cu: goto label_3d3e4c;
        case 0x3d3e50u: goto label_3d3e50;
        case 0x3d3e54u: goto label_3d3e54;
        case 0x3d3e58u: goto label_3d3e58;
        case 0x3d3e5cu: goto label_3d3e5c;
        case 0x3d3e60u: goto label_3d3e60;
        case 0x3d3e64u: goto label_3d3e64;
        case 0x3d3e68u: goto label_3d3e68;
        case 0x3d3e6cu: goto label_3d3e6c;
        case 0x3d3e70u: goto label_3d3e70;
        case 0x3d3e74u: goto label_3d3e74;
        case 0x3d3e78u: goto label_3d3e78;
        case 0x3d3e7cu: goto label_3d3e7c;
        case 0x3d3e80u: goto label_3d3e80;
        case 0x3d3e84u: goto label_3d3e84;
        case 0x3d3e88u: goto label_3d3e88;
        case 0x3d3e8cu: goto label_3d3e8c;
        case 0x3d3e90u: goto label_3d3e90;
        case 0x3d3e94u: goto label_3d3e94;
        case 0x3d3e98u: goto label_3d3e98;
        case 0x3d3e9cu: goto label_3d3e9c;
        case 0x3d3ea0u: goto label_3d3ea0;
        case 0x3d3ea4u: goto label_3d3ea4;
        case 0x3d3ea8u: goto label_3d3ea8;
        case 0x3d3eacu: goto label_3d3eac;
        case 0x3d3eb0u: goto label_3d3eb0;
        case 0x3d3eb4u: goto label_3d3eb4;
        case 0x3d3eb8u: goto label_3d3eb8;
        case 0x3d3ebcu: goto label_3d3ebc;
        case 0x3d3ec0u: goto label_3d3ec0;
        case 0x3d3ec4u: goto label_3d3ec4;
        case 0x3d3ec8u: goto label_3d3ec8;
        case 0x3d3eccu: goto label_3d3ecc;
        case 0x3d3ed0u: goto label_3d3ed0;
        case 0x3d3ed4u: goto label_3d3ed4;
        case 0x3d3ed8u: goto label_3d3ed8;
        case 0x3d3edcu: goto label_3d3edc;
        case 0x3d3ee0u: goto label_3d3ee0;
        case 0x3d3ee4u: goto label_3d3ee4;
        case 0x3d3ee8u: goto label_3d3ee8;
        case 0x3d3eecu: goto label_3d3eec;
        case 0x3d3ef0u: goto label_3d3ef0;
        case 0x3d3ef4u: goto label_3d3ef4;
        case 0x3d3ef8u: goto label_3d3ef8;
        case 0x3d3efcu: goto label_3d3efc;
        case 0x3d3f00u: goto label_3d3f00;
        case 0x3d3f04u: goto label_3d3f04;
        case 0x3d3f08u: goto label_3d3f08;
        case 0x3d3f0cu: goto label_3d3f0c;
        case 0x3d3f10u: goto label_3d3f10;
        case 0x3d3f14u: goto label_3d3f14;
        case 0x3d3f18u: goto label_3d3f18;
        case 0x3d3f1cu: goto label_3d3f1c;
        case 0x3d3f20u: goto label_3d3f20;
        case 0x3d3f24u: goto label_3d3f24;
        case 0x3d3f28u: goto label_3d3f28;
        case 0x3d3f2cu: goto label_3d3f2c;
        case 0x3d3f30u: goto label_3d3f30;
        case 0x3d3f34u: goto label_3d3f34;
        case 0x3d3f38u: goto label_3d3f38;
        case 0x3d3f3cu: goto label_3d3f3c;
        case 0x3d3f40u: goto label_3d3f40;
        case 0x3d3f44u: goto label_3d3f44;
        case 0x3d3f48u: goto label_3d3f48;
        case 0x3d3f4cu: goto label_3d3f4c;
        case 0x3d3f50u: goto label_3d3f50;
        case 0x3d3f54u: goto label_3d3f54;
        case 0x3d3f58u: goto label_3d3f58;
        case 0x3d3f5cu: goto label_3d3f5c;
        case 0x3d3f60u: goto label_3d3f60;
        case 0x3d3f64u: goto label_3d3f64;
        case 0x3d3f68u: goto label_3d3f68;
        case 0x3d3f6cu: goto label_3d3f6c;
        case 0x3d3f70u: goto label_3d3f70;
        case 0x3d3f74u: goto label_3d3f74;
        case 0x3d3f78u: goto label_3d3f78;
        case 0x3d3f7cu: goto label_3d3f7c;
        case 0x3d3f80u: goto label_3d3f80;
        case 0x3d3f84u: goto label_3d3f84;
        case 0x3d3f88u: goto label_3d3f88;
        case 0x3d3f8cu: goto label_3d3f8c;
        case 0x3d3f90u: goto label_3d3f90;
        case 0x3d3f94u: goto label_3d3f94;
        case 0x3d3f98u: goto label_3d3f98;
        case 0x3d3f9cu: goto label_3d3f9c;
        case 0x3d3fa0u: goto label_3d3fa0;
        case 0x3d3fa4u: goto label_3d3fa4;
        case 0x3d3fa8u: goto label_3d3fa8;
        case 0x3d3facu: goto label_3d3fac;
        case 0x3d3fb0u: goto label_3d3fb0;
        case 0x3d3fb4u: goto label_3d3fb4;
        case 0x3d3fb8u: goto label_3d3fb8;
        case 0x3d3fbcu: goto label_3d3fbc;
        case 0x3d3fc0u: goto label_3d3fc0;
        case 0x3d3fc4u: goto label_3d3fc4;
        case 0x3d3fc8u: goto label_3d3fc8;
        case 0x3d3fccu: goto label_3d3fcc;
        case 0x3d3fd0u: goto label_3d3fd0;
        case 0x3d3fd4u: goto label_3d3fd4;
        case 0x3d3fd8u: goto label_3d3fd8;
        case 0x3d3fdcu: goto label_3d3fdc;
        case 0x3d3fe0u: goto label_3d3fe0;
        case 0x3d3fe4u: goto label_3d3fe4;
        case 0x3d3fe8u: goto label_3d3fe8;
        case 0x3d3fecu: goto label_3d3fec;
        case 0x3d3ff0u: goto label_3d3ff0;
        case 0x3d3ff4u: goto label_3d3ff4;
        case 0x3d3ff8u: goto label_3d3ff8;
        case 0x3d3ffcu: goto label_3d3ffc;
        case 0x3d4000u: goto label_3d4000;
        case 0x3d4004u: goto label_3d4004;
        case 0x3d4008u: goto label_3d4008;
        case 0x3d400cu: goto label_3d400c;
        case 0x3d4010u: goto label_3d4010;
        case 0x3d4014u: goto label_3d4014;
        case 0x3d4018u: goto label_3d4018;
        case 0x3d401cu: goto label_3d401c;
        case 0x3d4020u: goto label_3d4020;
        case 0x3d4024u: goto label_3d4024;
        case 0x3d4028u: goto label_3d4028;
        case 0x3d402cu: goto label_3d402c;
        case 0x3d4030u: goto label_3d4030;
        case 0x3d4034u: goto label_3d4034;
        case 0x3d4038u: goto label_3d4038;
        case 0x3d403cu: goto label_3d403c;
        case 0x3d4040u: goto label_3d4040;
        case 0x3d4044u: goto label_3d4044;
        case 0x3d4048u: goto label_3d4048;
        case 0x3d404cu: goto label_3d404c;
        case 0x3d4050u: goto label_3d4050;
        case 0x3d4054u: goto label_3d4054;
        case 0x3d4058u: goto label_3d4058;
        case 0x3d405cu: goto label_3d405c;
        case 0x3d4060u: goto label_3d4060;
        case 0x3d4064u: goto label_3d4064;
        case 0x3d4068u: goto label_3d4068;
        case 0x3d406cu: goto label_3d406c;
        case 0x3d4070u: goto label_3d4070;
        case 0x3d4074u: goto label_3d4074;
        case 0x3d4078u: goto label_3d4078;
        case 0x3d407cu: goto label_3d407c;
        case 0x3d4080u: goto label_3d4080;
        case 0x3d4084u: goto label_3d4084;
        case 0x3d4088u: goto label_3d4088;
        case 0x3d408cu: goto label_3d408c;
        case 0x3d4090u: goto label_3d4090;
        case 0x3d4094u: goto label_3d4094;
        case 0x3d4098u: goto label_3d4098;
        case 0x3d409cu: goto label_3d409c;
        case 0x3d40a0u: goto label_3d40a0;
        case 0x3d40a4u: goto label_3d40a4;
        case 0x3d40a8u: goto label_3d40a8;
        case 0x3d40acu: goto label_3d40ac;
        case 0x3d40b0u: goto label_3d40b0;
        case 0x3d40b4u: goto label_3d40b4;
        case 0x3d40b8u: goto label_3d40b8;
        case 0x3d40bcu: goto label_3d40bc;
        case 0x3d40c0u: goto label_3d40c0;
        case 0x3d40c4u: goto label_3d40c4;
        case 0x3d40c8u: goto label_3d40c8;
        case 0x3d40ccu: goto label_3d40cc;
        case 0x3d40d0u: goto label_3d40d0;
        case 0x3d40d4u: goto label_3d40d4;
        case 0x3d40d8u: goto label_3d40d8;
        case 0x3d40dcu: goto label_3d40dc;
        case 0x3d40e0u: goto label_3d40e0;
        case 0x3d40e4u: goto label_3d40e4;
        case 0x3d40e8u: goto label_3d40e8;
        case 0x3d40ecu: goto label_3d40ec;
        case 0x3d40f0u: goto label_3d40f0;
        case 0x3d40f4u: goto label_3d40f4;
        case 0x3d40f8u: goto label_3d40f8;
        case 0x3d40fcu: goto label_3d40fc;
        case 0x3d4100u: goto label_3d4100;
        case 0x3d4104u: goto label_3d4104;
        case 0x3d4108u: goto label_3d4108;
        case 0x3d410cu: goto label_3d410c;
        case 0x3d4110u: goto label_3d4110;
        case 0x3d4114u: goto label_3d4114;
        case 0x3d4118u: goto label_3d4118;
        case 0x3d411cu: goto label_3d411c;
        case 0x3d4120u: goto label_3d4120;
        case 0x3d4124u: goto label_3d4124;
        case 0x3d4128u: goto label_3d4128;
        case 0x3d412cu: goto label_3d412c;
        case 0x3d4130u: goto label_3d4130;
        case 0x3d4134u: goto label_3d4134;
        case 0x3d4138u: goto label_3d4138;
        case 0x3d413cu: goto label_3d413c;
        case 0x3d4140u: goto label_3d4140;
        case 0x3d4144u: goto label_3d4144;
        case 0x3d4148u: goto label_3d4148;
        case 0x3d414cu: goto label_3d414c;
        case 0x3d4150u: goto label_3d4150;
        case 0x3d4154u: goto label_3d4154;
        case 0x3d4158u: goto label_3d4158;
        case 0x3d415cu: goto label_3d415c;
        case 0x3d4160u: goto label_3d4160;
        case 0x3d4164u: goto label_3d4164;
        case 0x3d4168u: goto label_3d4168;
        case 0x3d416cu: goto label_3d416c;
        case 0x3d4170u: goto label_3d4170;
        case 0x3d4174u: goto label_3d4174;
        case 0x3d4178u: goto label_3d4178;
        case 0x3d417cu: goto label_3d417c;
        case 0x3d4180u: goto label_3d4180;
        case 0x3d4184u: goto label_3d4184;
        case 0x3d4188u: goto label_3d4188;
        case 0x3d418cu: goto label_3d418c;
        case 0x3d4190u: goto label_3d4190;
        case 0x3d4194u: goto label_3d4194;
        case 0x3d4198u: goto label_3d4198;
        case 0x3d419cu: goto label_3d419c;
        case 0x3d41a0u: goto label_3d41a0;
        case 0x3d41a4u: goto label_3d41a4;
        case 0x3d41a8u: goto label_3d41a8;
        case 0x3d41acu: goto label_3d41ac;
        case 0x3d41b0u: goto label_3d41b0;
        case 0x3d41b4u: goto label_3d41b4;
        case 0x3d41b8u: goto label_3d41b8;
        case 0x3d41bcu: goto label_3d41bc;
        case 0x3d41c0u: goto label_3d41c0;
        case 0x3d41c4u: goto label_3d41c4;
        case 0x3d41c8u: goto label_3d41c8;
        case 0x3d41ccu: goto label_3d41cc;
        case 0x3d41d0u: goto label_3d41d0;
        case 0x3d41d4u: goto label_3d41d4;
        case 0x3d41d8u: goto label_3d41d8;
        case 0x3d41dcu: goto label_3d41dc;
        case 0x3d41e0u: goto label_3d41e0;
        case 0x3d41e4u: goto label_3d41e4;
        case 0x3d41e8u: goto label_3d41e8;
        case 0x3d41ecu: goto label_3d41ec;
        case 0x3d41f0u: goto label_3d41f0;
        case 0x3d41f4u: goto label_3d41f4;
        case 0x3d41f8u: goto label_3d41f8;
        case 0x3d41fcu: goto label_3d41fc;
        case 0x3d4200u: goto label_3d4200;
        case 0x3d4204u: goto label_3d4204;
        case 0x3d4208u: goto label_3d4208;
        case 0x3d420cu: goto label_3d420c;
        case 0x3d4210u: goto label_3d4210;
        case 0x3d4214u: goto label_3d4214;
        case 0x3d4218u: goto label_3d4218;
        case 0x3d421cu: goto label_3d421c;
        case 0x3d4220u: goto label_3d4220;
        case 0x3d4224u: goto label_3d4224;
        case 0x3d4228u: goto label_3d4228;
        case 0x3d422cu: goto label_3d422c;
        case 0x3d4230u: goto label_3d4230;
        case 0x3d4234u: goto label_3d4234;
        case 0x3d4238u: goto label_3d4238;
        case 0x3d423cu: goto label_3d423c;
        case 0x3d4240u: goto label_3d4240;
        case 0x3d4244u: goto label_3d4244;
        case 0x3d4248u: goto label_3d4248;
        case 0x3d424cu: goto label_3d424c;
        case 0x3d4250u: goto label_3d4250;
        case 0x3d4254u: goto label_3d4254;
        case 0x3d4258u: goto label_3d4258;
        case 0x3d425cu: goto label_3d425c;
        case 0x3d4260u: goto label_3d4260;
        case 0x3d4264u: goto label_3d4264;
        case 0x3d4268u: goto label_3d4268;
        case 0x3d426cu: goto label_3d426c;
        case 0x3d4270u: goto label_3d4270;
        case 0x3d4274u: goto label_3d4274;
        case 0x3d4278u: goto label_3d4278;
        case 0x3d427cu: goto label_3d427c;
        case 0x3d4280u: goto label_3d4280;
        case 0x3d4284u: goto label_3d4284;
        case 0x3d4288u: goto label_3d4288;
        case 0x3d428cu: goto label_3d428c;
        case 0x3d4290u: goto label_3d4290;
        case 0x3d4294u: goto label_3d4294;
        case 0x3d4298u: goto label_3d4298;
        case 0x3d429cu: goto label_3d429c;
        case 0x3d42a0u: goto label_3d42a0;
        case 0x3d42a4u: goto label_3d42a4;
        case 0x3d42a8u: goto label_3d42a8;
        case 0x3d42acu: goto label_3d42ac;
        case 0x3d42b0u: goto label_3d42b0;
        case 0x3d42b4u: goto label_3d42b4;
        case 0x3d42b8u: goto label_3d42b8;
        case 0x3d42bcu: goto label_3d42bc;
        case 0x3d42c0u: goto label_3d42c0;
        case 0x3d42c4u: goto label_3d42c4;
        case 0x3d42c8u: goto label_3d42c8;
        case 0x3d42ccu: goto label_3d42cc;
        case 0x3d42d0u: goto label_3d42d0;
        case 0x3d42d4u: goto label_3d42d4;
        case 0x3d42d8u: goto label_3d42d8;
        case 0x3d42dcu: goto label_3d42dc;
        case 0x3d42e0u: goto label_3d42e0;
        case 0x3d42e4u: goto label_3d42e4;
        case 0x3d42e8u: goto label_3d42e8;
        case 0x3d42ecu: goto label_3d42ec;
        case 0x3d42f0u: goto label_3d42f0;
        case 0x3d42f4u: goto label_3d42f4;
        case 0x3d42f8u: goto label_3d42f8;
        case 0x3d42fcu: goto label_3d42fc;
        case 0x3d4300u: goto label_3d4300;
        case 0x3d4304u: goto label_3d4304;
        case 0x3d4308u: goto label_3d4308;
        case 0x3d430cu: goto label_3d430c;
        case 0x3d4310u: goto label_3d4310;
        case 0x3d4314u: goto label_3d4314;
        case 0x3d4318u: goto label_3d4318;
        case 0x3d431cu: goto label_3d431c;
        case 0x3d4320u: goto label_3d4320;
        case 0x3d4324u: goto label_3d4324;
        case 0x3d4328u: goto label_3d4328;
        case 0x3d432cu: goto label_3d432c;
        case 0x3d4330u: goto label_3d4330;
        case 0x3d4334u: goto label_3d4334;
        case 0x3d4338u: goto label_3d4338;
        case 0x3d433cu: goto label_3d433c;
        case 0x3d4340u: goto label_3d4340;
        case 0x3d4344u: goto label_3d4344;
        case 0x3d4348u: goto label_3d4348;
        case 0x3d434cu: goto label_3d434c;
        case 0x3d4350u: goto label_3d4350;
        case 0x3d4354u: goto label_3d4354;
        case 0x3d4358u: goto label_3d4358;
        case 0x3d435cu: goto label_3d435c;
        case 0x3d4360u: goto label_3d4360;
        case 0x3d4364u: goto label_3d4364;
        case 0x3d4368u: goto label_3d4368;
        case 0x3d436cu: goto label_3d436c;
        case 0x3d4370u: goto label_3d4370;
        case 0x3d4374u: goto label_3d4374;
        case 0x3d4378u: goto label_3d4378;
        case 0x3d437cu: goto label_3d437c;
        case 0x3d4380u: goto label_3d4380;
        case 0x3d4384u: goto label_3d4384;
        case 0x3d4388u: goto label_3d4388;
        case 0x3d438cu: goto label_3d438c;
        case 0x3d4390u: goto label_3d4390;
        case 0x3d4394u: goto label_3d4394;
        case 0x3d4398u: goto label_3d4398;
        case 0x3d439cu: goto label_3d439c;
        case 0x3d43a0u: goto label_3d43a0;
        case 0x3d43a4u: goto label_3d43a4;
        case 0x3d43a8u: goto label_3d43a8;
        case 0x3d43acu: goto label_3d43ac;
        case 0x3d43b0u: goto label_3d43b0;
        case 0x3d43b4u: goto label_3d43b4;
        case 0x3d43b8u: goto label_3d43b8;
        case 0x3d43bcu: goto label_3d43bc;
        case 0x3d43c0u: goto label_3d43c0;
        case 0x3d43c4u: goto label_3d43c4;
        case 0x3d43c8u: goto label_3d43c8;
        case 0x3d43ccu: goto label_3d43cc;
        case 0x3d43d0u: goto label_3d43d0;
        case 0x3d43d4u: goto label_3d43d4;
        case 0x3d43d8u: goto label_3d43d8;
        case 0x3d43dcu: goto label_3d43dc;
        case 0x3d43e0u: goto label_3d43e0;
        case 0x3d43e4u: goto label_3d43e4;
        case 0x3d43e8u: goto label_3d43e8;
        case 0x3d43ecu: goto label_3d43ec;
        case 0x3d43f0u: goto label_3d43f0;
        case 0x3d43f4u: goto label_3d43f4;
        case 0x3d43f8u: goto label_3d43f8;
        case 0x3d43fcu: goto label_3d43fc;
        case 0x3d4400u: goto label_3d4400;
        case 0x3d4404u: goto label_3d4404;
        case 0x3d4408u: goto label_3d4408;
        case 0x3d440cu: goto label_3d440c;
        case 0x3d4410u: goto label_3d4410;
        case 0x3d4414u: goto label_3d4414;
        case 0x3d4418u: goto label_3d4418;
        case 0x3d441cu: goto label_3d441c;
        case 0x3d4420u: goto label_3d4420;
        case 0x3d4424u: goto label_3d4424;
        case 0x3d4428u: goto label_3d4428;
        case 0x3d442cu: goto label_3d442c;
        case 0x3d4430u: goto label_3d4430;
        case 0x3d4434u: goto label_3d4434;
        case 0x3d4438u: goto label_3d4438;
        case 0x3d443cu: goto label_3d443c;
        case 0x3d4440u: goto label_3d4440;
        case 0x3d4444u: goto label_3d4444;
        case 0x3d4448u: goto label_3d4448;
        case 0x3d444cu: goto label_3d444c;
        case 0x3d4450u: goto label_3d4450;
        case 0x3d4454u: goto label_3d4454;
        case 0x3d4458u: goto label_3d4458;
        case 0x3d445cu: goto label_3d445c;
        case 0x3d4460u: goto label_3d4460;
        case 0x3d4464u: goto label_3d4464;
        case 0x3d4468u: goto label_3d4468;
        case 0x3d446cu: goto label_3d446c;
        case 0x3d4470u: goto label_3d4470;
        case 0x3d4474u: goto label_3d4474;
        case 0x3d4478u: goto label_3d4478;
        case 0x3d447cu: goto label_3d447c;
        case 0x3d4480u: goto label_3d4480;
        case 0x3d4484u: goto label_3d4484;
        case 0x3d4488u: goto label_3d4488;
        case 0x3d448cu: goto label_3d448c;
        case 0x3d4490u: goto label_3d4490;
        case 0x3d4494u: goto label_3d4494;
        case 0x3d4498u: goto label_3d4498;
        case 0x3d449cu: goto label_3d449c;
        case 0x3d44a0u: goto label_3d44a0;
        case 0x3d44a4u: goto label_3d44a4;
        case 0x3d44a8u: goto label_3d44a8;
        case 0x3d44acu: goto label_3d44ac;
        case 0x3d44b0u: goto label_3d44b0;
        case 0x3d44b4u: goto label_3d44b4;
        case 0x3d44b8u: goto label_3d44b8;
        case 0x3d44bcu: goto label_3d44bc;
        case 0x3d44c0u: goto label_3d44c0;
        case 0x3d44c4u: goto label_3d44c4;
        case 0x3d44c8u: goto label_3d44c8;
        case 0x3d44ccu: goto label_3d44cc;
        case 0x3d44d0u: goto label_3d44d0;
        case 0x3d44d4u: goto label_3d44d4;
        case 0x3d44d8u: goto label_3d44d8;
        case 0x3d44dcu: goto label_3d44dc;
        case 0x3d44e0u: goto label_3d44e0;
        case 0x3d44e4u: goto label_3d44e4;
        case 0x3d44e8u: goto label_3d44e8;
        case 0x3d44ecu: goto label_3d44ec;
        case 0x3d44f0u: goto label_3d44f0;
        case 0x3d44f4u: goto label_3d44f4;
        case 0x3d44f8u: goto label_3d44f8;
        case 0x3d44fcu: goto label_3d44fc;
        case 0x3d4500u: goto label_3d4500;
        case 0x3d4504u: goto label_3d4504;
        case 0x3d4508u: goto label_3d4508;
        case 0x3d450cu: goto label_3d450c;
        case 0x3d4510u: goto label_3d4510;
        case 0x3d4514u: goto label_3d4514;
        case 0x3d4518u: goto label_3d4518;
        case 0x3d451cu: goto label_3d451c;
        case 0x3d4520u: goto label_3d4520;
        case 0x3d4524u: goto label_3d4524;
        case 0x3d4528u: goto label_3d4528;
        case 0x3d452cu: goto label_3d452c;
        case 0x3d4530u: goto label_3d4530;
        case 0x3d4534u: goto label_3d4534;
        case 0x3d4538u: goto label_3d4538;
        case 0x3d453cu: goto label_3d453c;
        case 0x3d4540u: goto label_3d4540;
        case 0x3d4544u: goto label_3d4544;
        case 0x3d4548u: goto label_3d4548;
        case 0x3d454cu: goto label_3d454c;
        case 0x3d4550u: goto label_3d4550;
        case 0x3d4554u: goto label_3d4554;
        case 0x3d4558u: goto label_3d4558;
        case 0x3d455cu: goto label_3d455c;
        case 0x3d4560u: goto label_3d4560;
        case 0x3d4564u: goto label_3d4564;
        case 0x3d4568u: goto label_3d4568;
        case 0x3d456cu: goto label_3d456c;
        case 0x3d4570u: goto label_3d4570;
        case 0x3d4574u: goto label_3d4574;
        case 0x3d4578u: goto label_3d4578;
        case 0x3d457cu: goto label_3d457c;
        case 0x3d4580u: goto label_3d4580;
        case 0x3d4584u: goto label_3d4584;
        case 0x3d4588u: goto label_3d4588;
        case 0x3d458cu: goto label_3d458c;
        case 0x3d4590u: goto label_3d4590;
        case 0x3d4594u: goto label_3d4594;
        case 0x3d4598u: goto label_3d4598;
        case 0x3d459cu: goto label_3d459c;
        case 0x3d45a0u: goto label_3d45a0;
        case 0x3d45a4u: goto label_3d45a4;
        case 0x3d45a8u: goto label_3d45a8;
        case 0x3d45acu: goto label_3d45ac;
        case 0x3d45b0u: goto label_3d45b0;
        case 0x3d45b4u: goto label_3d45b4;
        case 0x3d45b8u: goto label_3d45b8;
        case 0x3d45bcu: goto label_3d45bc;
        case 0x3d45c0u: goto label_3d45c0;
        case 0x3d45c4u: goto label_3d45c4;
        case 0x3d45c8u: goto label_3d45c8;
        case 0x3d45ccu: goto label_3d45cc;
        case 0x3d45d0u: goto label_3d45d0;
        case 0x3d45d4u: goto label_3d45d4;
        case 0x3d45d8u: goto label_3d45d8;
        case 0x3d45dcu: goto label_3d45dc;
        case 0x3d45e0u: goto label_3d45e0;
        case 0x3d45e4u: goto label_3d45e4;
        case 0x3d45e8u: goto label_3d45e8;
        case 0x3d45ecu: goto label_3d45ec;
        case 0x3d45f0u: goto label_3d45f0;
        case 0x3d45f4u: goto label_3d45f4;
        case 0x3d45f8u: goto label_3d45f8;
        case 0x3d45fcu: goto label_3d45fc;
        case 0x3d4600u: goto label_3d4600;
        case 0x3d4604u: goto label_3d4604;
        case 0x3d4608u: goto label_3d4608;
        case 0x3d460cu: goto label_3d460c;
        case 0x3d4610u: goto label_3d4610;
        case 0x3d4614u: goto label_3d4614;
        case 0x3d4618u: goto label_3d4618;
        case 0x3d461cu: goto label_3d461c;
        case 0x3d4620u: goto label_3d4620;
        case 0x3d4624u: goto label_3d4624;
        case 0x3d4628u: goto label_3d4628;
        case 0x3d462cu: goto label_3d462c;
        case 0x3d4630u: goto label_3d4630;
        case 0x3d4634u: goto label_3d4634;
        case 0x3d4638u: goto label_3d4638;
        case 0x3d463cu: goto label_3d463c;
        case 0x3d4640u: goto label_3d4640;
        case 0x3d4644u: goto label_3d4644;
        case 0x3d4648u: goto label_3d4648;
        case 0x3d464cu: goto label_3d464c;
        case 0x3d4650u: goto label_3d4650;
        case 0x3d4654u: goto label_3d4654;
        case 0x3d4658u: goto label_3d4658;
        case 0x3d465cu: goto label_3d465c;
        case 0x3d4660u: goto label_3d4660;
        case 0x3d4664u: goto label_3d4664;
        case 0x3d4668u: goto label_3d4668;
        case 0x3d466cu: goto label_3d466c;
        case 0x3d4670u: goto label_3d4670;
        case 0x3d4674u: goto label_3d4674;
        case 0x3d4678u: goto label_3d4678;
        case 0x3d467cu: goto label_3d467c;
        case 0x3d4680u: goto label_3d4680;
        case 0x3d4684u: goto label_3d4684;
        case 0x3d4688u: goto label_3d4688;
        case 0x3d468cu: goto label_3d468c;
        case 0x3d4690u: goto label_3d4690;
        case 0x3d4694u: goto label_3d4694;
        case 0x3d4698u: goto label_3d4698;
        case 0x3d469cu: goto label_3d469c;
        case 0x3d46a0u: goto label_3d46a0;
        case 0x3d46a4u: goto label_3d46a4;
        case 0x3d46a8u: goto label_3d46a8;
        case 0x3d46acu: goto label_3d46ac;
        case 0x3d46b0u: goto label_3d46b0;
        case 0x3d46b4u: goto label_3d46b4;
        case 0x3d46b8u: goto label_3d46b8;
        case 0x3d46bcu: goto label_3d46bc;
        case 0x3d46c0u: goto label_3d46c0;
        case 0x3d46c4u: goto label_3d46c4;
        case 0x3d46c8u: goto label_3d46c8;
        case 0x3d46ccu: goto label_3d46cc;
        case 0x3d46d0u: goto label_3d46d0;
        case 0x3d46d4u: goto label_3d46d4;
        case 0x3d46d8u: goto label_3d46d8;
        case 0x3d46dcu: goto label_3d46dc;
        case 0x3d46e0u: goto label_3d46e0;
        case 0x3d46e4u: goto label_3d46e4;
        case 0x3d46e8u: goto label_3d46e8;
        case 0x3d46ecu: goto label_3d46ec;
        case 0x3d46f0u: goto label_3d46f0;
        case 0x3d46f4u: goto label_3d46f4;
        case 0x3d46f8u: goto label_3d46f8;
        case 0x3d46fcu: goto label_3d46fc;
        case 0x3d4700u: goto label_3d4700;
        case 0x3d4704u: goto label_3d4704;
        case 0x3d4708u: goto label_3d4708;
        case 0x3d470cu: goto label_3d470c;
        case 0x3d4710u: goto label_3d4710;
        case 0x3d4714u: goto label_3d4714;
        case 0x3d4718u: goto label_3d4718;
        case 0x3d471cu: goto label_3d471c;
        case 0x3d4720u: goto label_3d4720;
        case 0x3d4724u: goto label_3d4724;
        case 0x3d4728u: goto label_3d4728;
        case 0x3d472cu: goto label_3d472c;
        case 0x3d4730u: goto label_3d4730;
        case 0x3d4734u: goto label_3d4734;
        case 0x3d4738u: goto label_3d4738;
        case 0x3d473cu: goto label_3d473c;
        case 0x3d4740u: goto label_3d4740;
        case 0x3d4744u: goto label_3d4744;
        case 0x3d4748u: goto label_3d4748;
        case 0x3d474cu: goto label_3d474c;
        case 0x3d4750u: goto label_3d4750;
        case 0x3d4754u: goto label_3d4754;
        case 0x3d4758u: goto label_3d4758;
        case 0x3d475cu: goto label_3d475c;
        case 0x3d4760u: goto label_3d4760;
        case 0x3d4764u: goto label_3d4764;
        case 0x3d4768u: goto label_3d4768;
        case 0x3d476cu: goto label_3d476c;
        case 0x3d4770u: goto label_3d4770;
        case 0x3d4774u: goto label_3d4774;
        case 0x3d4778u: goto label_3d4778;
        case 0x3d477cu: goto label_3d477c;
        case 0x3d4780u: goto label_3d4780;
        case 0x3d4784u: goto label_3d4784;
        case 0x3d4788u: goto label_3d4788;
        case 0x3d478cu: goto label_3d478c;
        case 0x3d4790u: goto label_3d4790;
        case 0x3d4794u: goto label_3d4794;
        case 0x3d4798u: goto label_3d4798;
        case 0x3d479cu: goto label_3d479c;
        case 0x3d47a0u: goto label_3d47a0;
        case 0x3d47a4u: goto label_3d47a4;
        case 0x3d47a8u: goto label_3d47a8;
        case 0x3d47acu: goto label_3d47ac;
        case 0x3d47b0u: goto label_3d47b0;
        case 0x3d47b4u: goto label_3d47b4;
        case 0x3d47b8u: goto label_3d47b8;
        case 0x3d47bcu: goto label_3d47bc;
        case 0x3d47c0u: goto label_3d47c0;
        case 0x3d47c4u: goto label_3d47c4;
        case 0x3d47c8u: goto label_3d47c8;
        case 0x3d47ccu: goto label_3d47cc;
        case 0x3d47d0u: goto label_3d47d0;
        case 0x3d47d4u: goto label_3d47d4;
        case 0x3d47d8u: goto label_3d47d8;
        case 0x3d47dcu: goto label_3d47dc;
        case 0x3d47e0u: goto label_3d47e0;
        case 0x3d47e4u: goto label_3d47e4;
        case 0x3d47e8u: goto label_3d47e8;
        case 0x3d47ecu: goto label_3d47ec;
        case 0x3d47f0u: goto label_3d47f0;
        case 0x3d47f4u: goto label_3d47f4;
        case 0x3d47f8u: goto label_3d47f8;
        case 0x3d47fcu: goto label_3d47fc;
        case 0x3d4800u: goto label_3d4800;
        case 0x3d4804u: goto label_3d4804;
        case 0x3d4808u: goto label_3d4808;
        case 0x3d480cu: goto label_3d480c;
        case 0x3d4810u: goto label_3d4810;
        case 0x3d4814u: goto label_3d4814;
        case 0x3d4818u: goto label_3d4818;
        case 0x3d481cu: goto label_3d481c;
        case 0x3d4820u: goto label_3d4820;
        case 0x3d4824u: goto label_3d4824;
        case 0x3d4828u: goto label_3d4828;
        case 0x3d482cu: goto label_3d482c;
        case 0x3d4830u: goto label_3d4830;
        case 0x3d4834u: goto label_3d4834;
        case 0x3d4838u: goto label_3d4838;
        case 0x3d483cu: goto label_3d483c;
        case 0x3d4840u: goto label_3d4840;
        case 0x3d4844u: goto label_3d4844;
        case 0x3d4848u: goto label_3d4848;
        case 0x3d484cu: goto label_3d484c;
        case 0x3d4850u: goto label_3d4850;
        case 0x3d4854u: goto label_3d4854;
        case 0x3d4858u: goto label_3d4858;
        case 0x3d485cu: goto label_3d485c;
        case 0x3d4860u: goto label_3d4860;
        case 0x3d4864u: goto label_3d4864;
        case 0x3d4868u: goto label_3d4868;
        case 0x3d486cu: goto label_3d486c;
        case 0x3d4870u: goto label_3d4870;
        case 0x3d4874u: goto label_3d4874;
        case 0x3d4878u: goto label_3d4878;
        case 0x3d487cu: goto label_3d487c;
        case 0x3d4880u: goto label_3d4880;
        case 0x3d4884u: goto label_3d4884;
        case 0x3d4888u: goto label_3d4888;
        case 0x3d488cu: goto label_3d488c;
        case 0x3d4890u: goto label_3d4890;
        case 0x3d4894u: goto label_3d4894;
        case 0x3d4898u: goto label_3d4898;
        case 0x3d489cu: goto label_3d489c;
        case 0x3d48a0u: goto label_3d48a0;
        case 0x3d48a4u: goto label_3d48a4;
        case 0x3d48a8u: goto label_3d48a8;
        case 0x3d48acu: goto label_3d48ac;
        case 0x3d48b0u: goto label_3d48b0;
        case 0x3d48b4u: goto label_3d48b4;
        case 0x3d48b8u: goto label_3d48b8;
        case 0x3d48bcu: goto label_3d48bc;
        case 0x3d48c0u: goto label_3d48c0;
        case 0x3d48c4u: goto label_3d48c4;
        case 0x3d48c8u: goto label_3d48c8;
        case 0x3d48ccu: goto label_3d48cc;
        case 0x3d48d0u: goto label_3d48d0;
        case 0x3d48d4u: goto label_3d48d4;
        case 0x3d48d8u: goto label_3d48d8;
        case 0x3d48dcu: goto label_3d48dc;
        case 0x3d48e0u: goto label_3d48e0;
        case 0x3d48e4u: goto label_3d48e4;
        case 0x3d48e8u: goto label_3d48e8;
        case 0x3d48ecu: goto label_3d48ec;
        case 0x3d48f0u: goto label_3d48f0;
        case 0x3d48f4u: goto label_3d48f4;
        case 0x3d48f8u: goto label_3d48f8;
        case 0x3d48fcu: goto label_3d48fc;
        case 0x3d4900u: goto label_3d4900;
        case 0x3d4904u: goto label_3d4904;
        case 0x3d4908u: goto label_3d4908;
        case 0x3d490cu: goto label_3d490c;
        case 0x3d4910u: goto label_3d4910;
        case 0x3d4914u: goto label_3d4914;
        case 0x3d4918u: goto label_3d4918;
        case 0x3d491cu: goto label_3d491c;
        case 0x3d4920u: goto label_3d4920;
        case 0x3d4924u: goto label_3d4924;
        case 0x3d4928u: goto label_3d4928;
        case 0x3d492cu: goto label_3d492c;
        case 0x3d4930u: goto label_3d4930;
        case 0x3d4934u: goto label_3d4934;
        case 0x3d4938u: goto label_3d4938;
        case 0x3d493cu: goto label_3d493c;
        case 0x3d4940u: goto label_3d4940;
        case 0x3d4944u: goto label_3d4944;
        case 0x3d4948u: goto label_3d4948;
        case 0x3d494cu: goto label_3d494c;
        case 0x3d4950u: goto label_3d4950;
        case 0x3d4954u: goto label_3d4954;
        case 0x3d4958u: goto label_3d4958;
        case 0x3d495cu: goto label_3d495c;
        case 0x3d4960u: goto label_3d4960;
        case 0x3d4964u: goto label_3d4964;
        case 0x3d4968u: goto label_3d4968;
        case 0x3d496cu: goto label_3d496c;
        case 0x3d4970u: goto label_3d4970;
        case 0x3d4974u: goto label_3d4974;
        case 0x3d4978u: goto label_3d4978;
        case 0x3d497cu: goto label_3d497c;
        case 0x3d4980u: goto label_3d4980;
        case 0x3d4984u: goto label_3d4984;
        case 0x3d4988u: goto label_3d4988;
        case 0x3d498cu: goto label_3d498c;
        default: break;
    }

    ctx->pc = 0x3d3c00u;

label_3d3c00:
    // 0x3d3c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d3c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d3c04:
    // 0x3d3c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d3c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d3c08:
    // 0x3d3c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d3c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d3c0c:
    // 0x3d3c0c: 0xc0f4e74  jal         func_3D39D0
label_3d3c10:
    if (ctx->pc == 0x3D3C10u) {
        ctx->pc = 0x3D3C10u;
            // 0x3d3c10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C14u;
        goto label_3d3c14;
    }
    ctx->pc = 0x3D3C0Cu;
    SET_GPR_U32(ctx, 31, 0x3D3C14u);
    ctx->pc = 0x3D3C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3C0Cu;
            // 0x3d3c10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D39D0u;
    if (runtime->hasFunction(0x3D39D0u)) {
        auto targetFn = runtime->lookupFunction(0x3D39D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3C14u; }
        if (ctx->pc != 0x3D3C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D39D0_0x3d39d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3C14u; }
        if (ctx->pc != 0x3D3C14u) { return; }
    }
    ctx->pc = 0x3D3C14u;
label_3d3c14:
    // 0x3d3c14: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d3c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d3c18:
    // 0x3d3c18: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3d3c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d3c1c:
    // 0x3d3c1c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3d3c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3c20:
    // 0x3d3c20: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d3c24:
    // 0x3d3c24: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3d3c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3c28:
    // 0x3d3c28: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3d3c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3c2c:
    // 0x3d3c2c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3d3c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3d3c30:
    // 0x3d3c30: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3d3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3d3c34:
    // 0x3d3c34: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3d3c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3d3c38:
    // 0x3d3c38: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3d3c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3d3c3c:
    // 0x3d3c3c: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x3d3c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d3c40:
    // 0x3d3c40: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x3d3c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d3c44:
    // 0x3d3c44: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3d3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3c48:
    // 0x3d3c48: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3d3c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3c4c:
    // 0x3d3c4c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3d3c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d3c50:
    // 0x3d3c50: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3d3c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3d3c54:
    // 0x3d3c54: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3d3c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3d3c58:
    // 0x3d3c58: 0xc0892b0  jal         func_224AC0
label_3d3c5c:
    if (ctx->pc == 0x3D3C5Cu) {
        ctx->pc = 0x3D3C5Cu;
            // 0x3d3c5c: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x3D3C60u;
        goto label_3d3c60;
    }
    ctx->pc = 0x3D3C58u;
    SET_GPR_U32(ctx, 31, 0x3D3C60u);
    ctx->pc = 0x3D3C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3C58u;
            // 0x3d3c5c: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3C60u; }
        if (ctx->pc != 0x3D3C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3C60u; }
        if (ctx->pc != 0x3D3C60u) { return; }
    }
    ctx->pc = 0x3D3C60u;
label_3d3c60:
    // 0x3d3c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d3c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3c64:
    // 0x3d3c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d3c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3c68:
    // 0x3d3c68: 0x3e00008  jr          $ra
label_3d3c6c:
    if (ctx->pc == 0x3D3C6Cu) {
        ctx->pc = 0x3D3C6Cu;
            // 0x3d3c6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3D3C70u;
        goto label_3d3c70;
    }
    ctx->pc = 0x3D3C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3C68u;
            // 0x3d3c6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3C70u;
label_3d3c70:
    // 0x3d3c70: 0x3e00008  jr          $ra
label_3d3c74:
    if (ctx->pc == 0x3D3C74u) {
        ctx->pc = 0x3D3C74u;
            // 0x3d3c74: 0x2402085c  addiu       $v0, $zero, 0x85C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2140));
        ctx->pc = 0x3D3C78u;
        goto label_3d3c78;
    }
    ctx->pc = 0x3D3C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3C70u;
            // 0x3d3c74: 0x2402085c  addiu       $v0, $zero, 0x85C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2140));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3C78u;
label_3d3c78:
    // 0x3d3c78: 0x0  nop
    ctx->pc = 0x3d3c78u;
    // NOP
label_3d3c7c:
    // 0x3d3c7c: 0x0  nop
    ctx->pc = 0x3d3c7cu;
    // NOP
label_3d3c80:
    // 0x3d3c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d3c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d3c84:
    // 0x3d3c84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d3c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3d3c88:
    // 0x3d3c88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d3c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d3c8c:
    // 0x3d3c8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d3c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d3c90:
    // 0x3d3c90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d3c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3c94:
    // 0x3d3c94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d3c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d3c98:
    // 0x3d3c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d3c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d3c9c:
    // 0x3d3c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d3c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d3ca0:
    // 0x3d3ca0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3d3ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d3ca4:
    // 0x3d3ca4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3d3ca8:
    if (ctx->pc == 0x3D3CA8u) {
        ctx->pc = 0x3D3CA8u;
            // 0x3d3ca8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CACu;
        goto label_3d3cac;
    }
    ctx->pc = 0x3D3CA4u;
    {
        const bool branch_taken_0x3d3ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3CA4u;
            // 0x3d3ca8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ca4) {
            ctx->pc = 0x3D3CE8u;
            goto label_3d3ce8;
        }
    }
    ctx->pc = 0x3D3CACu;
label_3d3cac:
    // 0x3d3cac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d3cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3cb0:
    // 0x3d3cb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d3cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3cb4:
    // 0x3d3cb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d3cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3cb8:
    // 0x3d3cb8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3d3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3d3cbc:
    // 0x3d3cbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3d3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3d3cc0:
    // 0x3d3cc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d3cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d3cc4:
    // 0x3d3cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d3cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d3cc8:
    // 0x3d3cc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d3cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d3ccc:
    // 0x3d3ccc: 0x320f809  jalr        $t9
label_3d3cd0:
    if (ctx->pc == 0x3D3CD0u) {
        ctx->pc = 0x3D3CD4u;
        goto label_3d3cd4;
    }
    ctx->pc = 0x3D3CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D3CD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D3CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D3CD4u; }
            if (ctx->pc != 0x3D3CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D3CD4u;
label_3d3cd4:
    // 0x3d3cd4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3d3cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3d3cd8:
    // 0x3d3cd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d3cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3d3cdc:
    // 0x3d3cdc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3d3cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d3ce0:
    // 0x3d3ce0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3d3ce4:
    if (ctx->pc == 0x3D3CE4u) {
        ctx->pc = 0x3D3CE4u;
            // 0x3d3ce4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3D3CE8u;
        goto label_3d3ce8;
    }
    ctx->pc = 0x3D3CE0u;
    {
        const bool branch_taken_0x3d3ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3CE0u;
            // 0x3d3ce4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ce0) {
            ctx->pc = 0x3D3CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d3cb8;
        }
    }
    ctx->pc = 0x3D3CE8u;
label_3d3ce8:
    // 0x3d3ce8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d3ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d3cec:
    // 0x3d3cec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d3cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d3cf0:
    // 0x3d3cf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d3cf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3cf4:
    // 0x3d3cf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d3cf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d3cf8:
    // 0x3d3cf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d3cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3cfc:
    // 0x3d3cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d3cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3d00:
    // 0x3d3d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d3d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3d04:
    // 0x3d3d04: 0x3e00008  jr          $ra
label_3d3d08:
    if (ctx->pc == 0x3D3D08u) {
        ctx->pc = 0x3D3D08u;
            // 0x3d3d08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D3D0Cu;
        goto label_3d3d0c;
    }
    ctx->pc = 0x3D3D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3D04u;
            // 0x3d3d08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3D0Cu;
label_3d3d0c:
    // 0x3d3d0c: 0x0  nop
    ctx->pc = 0x3d3d0cu;
    // NOP
label_3d3d10:
    // 0x3d3d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d3d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d3d14:
    // 0x3d3d14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d3d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3d18:
    // 0x3d3d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d3d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d3d1c:
    // 0x3d3d1c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3d3d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3d3d20:
    // 0x3d3d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d3d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d3d24:
    // 0x3d3d24: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3d3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3d3d28:
    // 0x3d3d28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d3d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d3d2c:
    // 0x3d3d2c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3d3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3d3d30:
    // 0x3d3d30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d3d34:
    // 0x3d3d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d3d38:
    // 0x3d3d38: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3d3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3d3d3c:
    // 0x3d3d3c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3d3d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3d40:
    // 0x3d3d40: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3d3d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d3d44:
    // 0x3d3d44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3d3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3d48:
    // 0x3d3d48: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3d3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3d3d4c:
    // 0x3d3d4c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3d3d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3d3d50:
    // 0x3d3d50: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3d3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3d3d54:
    // 0x3d3d54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d3d58:
    // 0x3d3d58: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3d3d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3d3d5c:
    // 0x3d3d5c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3d3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d3d60:
    // 0x3d3d60: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3d3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3d3d64:
    // 0x3d3d64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d3d68:
    // 0x3d3d68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3d3d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d3d6c:
    // 0x3d3d6c: 0xc0a997c  jal         func_2A65F0
label_3d3d70:
    if (ctx->pc == 0x3D3D70u) {
        ctx->pc = 0x3D3D70u;
            // 0x3d3d70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3D3D74u;
        goto label_3d3d74;
    }
    ctx->pc = 0x3D3D6Cu;
    SET_GPR_U32(ctx, 31, 0x3D3D74u);
    ctx->pc = 0x3D3D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3D6Cu;
            // 0x3d3d70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3D74u; }
        if (ctx->pc != 0x3D3D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3D74u; }
        if (ctx->pc != 0x3D3D74u) { return; }
    }
    ctx->pc = 0x3D3D74u;
label_3d3d74:
    // 0x3d3d74: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3d3d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3d3d78:
    // 0x3d3d78: 0xc0d879c  jal         func_361E70
label_3d3d7c:
    if (ctx->pc == 0x3D3D7Cu) {
        ctx->pc = 0x3D3D7Cu;
            // 0x3d3d7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D80u;
        goto label_3d3d80;
    }
    ctx->pc = 0x3D3D78u;
    SET_GPR_U32(ctx, 31, 0x3D3D80u);
    ctx->pc = 0x3D3D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3D78u;
            // 0x3d3d7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3D80u; }
        if (ctx->pc != 0x3D3D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3D80u; }
        if (ctx->pc != 0x3D3D80u) { return; }
    }
    ctx->pc = 0x3D3D80u;
label_3d3d80:
    // 0x3d3d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d3d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3d84:
    // 0x3d3d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d3d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3d88:
    // 0x3d3d88: 0x3e00008  jr          $ra
label_3d3d8c:
    if (ctx->pc == 0x3D3D8Cu) {
        ctx->pc = 0x3D3D8Cu;
            // 0x3d3d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D3D90u;
        goto label_3d3d90;
    }
    ctx->pc = 0x3D3D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3D88u;
            // 0x3d3d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3D90u;
label_3d3d90:
    // 0x3d3d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d3d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d3d94:
    // 0x3d3d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d3d98:
    // 0x3d3d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d3d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d3d9c:
    // 0x3d3d9c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3d3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3d3da0:
    // 0x3d3da0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3d3da4:
    if (ctx->pc == 0x3D3DA4u) {
        ctx->pc = 0x3D3DA4u;
            // 0x3d3da4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3DA8u;
        goto label_3d3da8;
    }
    ctx->pc = 0x3D3DA0u;
    {
        const bool branch_taken_0x3d3da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3DA0u;
            // 0x3d3da4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3da0) {
            ctx->pc = 0x3D3EC0u;
            goto label_3d3ec0;
        }
    }
    ctx->pc = 0x3D3DA8u;
label_3d3da8:
    // 0x3d3da8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3d3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d3dac:
    // 0x3d3dac: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3d3dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3d3db0:
    // 0x3d3db0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d3db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d3db4:
    // 0x3d3db4: 0xc075128  jal         func_1D44A0
label_3d3db8:
    if (ctx->pc == 0x3D3DB8u) {
        ctx->pc = 0x3D3DB8u;
            // 0x3d3db8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3D3DBCu;
        goto label_3d3dbc;
    }
    ctx->pc = 0x3D3DB4u;
    SET_GPR_U32(ctx, 31, 0x3D3DBCu);
    ctx->pc = 0x3D3DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3DB4u;
            // 0x3d3db8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3DBCu; }
        if (ctx->pc != 0x3D3DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3DBCu; }
        if (ctx->pc != 0x3D3DBCu) { return; }
    }
    ctx->pc = 0x3D3DBCu;
label_3d3dbc:
    // 0x3d3dbc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3d3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d3dc0:
    // 0x3d3dc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3dc4:
    // 0x3d3dc4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3d3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3d3dc8:
    // 0x3d3dc8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3d3dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3d3dcc:
    // 0x3d3dcc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d3dccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d3dd0:
    // 0x3d3dd0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d3dd4:
    if (ctx->pc == 0x3D3DD4u) {
        ctx->pc = 0x3D3DD4u;
            // 0x3d3dd4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3D3DD8u;
        goto label_3d3dd8;
    }
    ctx->pc = 0x3D3DD0u;
    {
        const bool branch_taken_0x3d3dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3DD0u;
            // 0x3d3dd4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3dd0) {
            ctx->pc = 0x3D3DE0u;
            goto label_3d3de0;
        }
    }
    ctx->pc = 0x3D3DD8u;
label_3d3dd8:
    // 0x3d3dd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3ddc:
    // 0x3d3ddc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3d3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3d3de0:
    // 0x3d3de0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d3de4:
    // 0x3d3de4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3de8:
    // 0x3d3de8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3d3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3d3dec:
    // 0x3d3dec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3d3decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3d3df0:
    // 0x3d3df0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d3df0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d3df4:
    // 0x3d3df4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d3df8:
    if (ctx->pc == 0x3D3DF8u) {
        ctx->pc = 0x3D3DF8u;
            // 0x3d3df8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D3DFCu;
        goto label_3d3dfc;
    }
    ctx->pc = 0x3D3DF4u;
    {
        const bool branch_taken_0x3d3df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3df4) {
            ctx->pc = 0x3D3DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3DF4u;
            // 0x3d3df8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D3E08u;
            goto label_3d3e08;
        }
    }
    ctx->pc = 0x3D3DFCu;
label_3d3dfc:
    // 0x3d3dfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3e00:
    // 0x3d3e00: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3d3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3d3e04:
    // 0x3d3e04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d3e08:
    // 0x3d3e08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3e0c:
    // 0x3d3e0c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3d3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3d3e10:
    // 0x3d3e10: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3d3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3d3e14:
    // 0x3d3e14: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d3e14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d3e18:
    // 0x3d3e18: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d3e1c:
    if (ctx->pc == 0x3D3E1Cu) {
        ctx->pc = 0x3D3E1Cu;
            // 0x3d3e1c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3D3E20u;
        goto label_3d3e20;
    }
    ctx->pc = 0x3D3E18u;
    {
        const bool branch_taken_0x3d3e18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3e18) {
            ctx->pc = 0x3D3E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3E18u;
            // 0x3d3e1c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D3E2Cu;
            goto label_3d3e2c;
        }
    }
    ctx->pc = 0x3D3E20u;
label_3d3e20:
    // 0x3d3e20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3e24:
    // 0x3d3e24: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3d3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3d3e28:
    // 0x3d3e28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d3e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d3e2c:
    // 0x3d3e2c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d3e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d3e30:
    // 0x3d3e30: 0x320f809  jalr        $t9
label_3d3e34:
    if (ctx->pc == 0x3D3E34u) {
        ctx->pc = 0x3D3E34u;
            // 0x3d3e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3E38u;
        goto label_3d3e38;
    }
    ctx->pc = 0x3D3E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D3E38u);
        ctx->pc = 0x3D3E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3E30u;
            // 0x3d3e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D3E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D3E38u; }
            if (ctx->pc != 0x3D3E38u) { return; }
        }
        }
    }
    ctx->pc = 0x3D3E38u;
label_3d3e38:
    // 0x3d3e38: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3d3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d3e3c:
    // 0x3d3e3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d3e40:
    // 0x3d3e40: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3d3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3d3e44:
    // 0x3d3e44: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3d3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3d3e48:
    // 0x3d3e48: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3d3e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d3e4c:
    // 0x3d3e4c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3d3e4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3d3e50:
    // 0x3d3e50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d3e54:
    if (ctx->pc == 0x3D3E54u) {
        ctx->pc = 0x3D3E54u;
            // 0x3d3e54: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3D3E58u;
        goto label_3d3e58;
    }
    ctx->pc = 0x3D3E50u;
    {
        const bool branch_taken_0x3d3e50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3e50) {
            ctx->pc = 0x3D3E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3E50u;
            // 0x3d3e54: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D3E64u;
            goto label_3d3e64;
        }
    }
    ctx->pc = 0x3D3E58u;
label_3d3e58:
    // 0x3d3e58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d3e5c:
    // 0x3d3e5c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3d3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3d3e60:
    // 0x3d3e60: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3d3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d3e64:
    // 0x3d3e64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d3e68:
    // 0x3d3e68: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3d3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3d3e6c:
    // 0x3d3e6c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3d3e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3d3e70:
    // 0x3d3e70: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3d3e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d3e74:
    // 0x3d3e74: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3d3e74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3d3e78:
    // 0x3d3e78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d3e7c:
    if (ctx->pc == 0x3D3E7Cu) {
        ctx->pc = 0x3D3E80u;
        goto label_3d3e80;
    }
    ctx->pc = 0x3D3E78u;
    {
        const bool branch_taken_0x3d3e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3e78) {
            ctx->pc = 0x3D3E88u;
            goto label_3d3e88;
        }
    }
    ctx->pc = 0x3D3E80u;
label_3d3e80:
    // 0x3d3e80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d3e84:
    // 0x3d3e84: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3d3e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3d3e88:
    // 0x3d3e88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d3e8c:
    // 0x3d3e8c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3d3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3d3e90:
    // 0x3d3e90: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d3e90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d3e94:
    // 0x3d3e94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d3e98:
    if (ctx->pc == 0x3D3E98u) {
        ctx->pc = 0x3D3E9Cu;
        goto label_3d3e9c;
    }
    ctx->pc = 0x3D3E94u;
    {
        const bool branch_taken_0x3d3e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3e94) {
            ctx->pc = 0x3D3EA4u;
            goto label_3d3ea4;
        }
    }
    ctx->pc = 0x3D3E9Cu;
label_3d3e9c:
    // 0x3d3e9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d3e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d3ea0:
    // 0x3d3ea0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3d3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3d3ea4:
    // 0x3d3ea4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d3ea8:
    // 0x3d3ea8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3d3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3d3eac:
    // 0x3d3eac: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d3eacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d3eb0:
    // 0x3d3eb0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d3eb4:
    if (ctx->pc == 0x3D3EB4u) {
        ctx->pc = 0x3D3EB4u;
            // 0x3d3eb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D3EB8u;
        goto label_3d3eb8;
    }
    ctx->pc = 0x3D3EB0u;
    {
        const bool branch_taken_0x3d3eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3eb0) {
            ctx->pc = 0x3D3EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3EB0u;
            // 0x3d3eb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D3EC4u;
            goto label_3d3ec4;
        }
    }
    ctx->pc = 0x3D3EB8u;
label_3d3eb8:
    // 0x3d3eb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d3eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d3ebc:
    // 0x3d3ebc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3d3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3d3ec0:
    // 0x3d3ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d3ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3ec4:
    // 0x3d3ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d3ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3ec8:
    // 0x3d3ec8: 0x3e00008  jr          $ra
label_3d3ecc:
    if (ctx->pc == 0x3D3ECCu) {
        ctx->pc = 0x3D3ECCu;
            // 0x3d3ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D3ED0u;
        goto label_3d3ed0;
    }
    ctx->pc = 0x3D3EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3EC8u;
            // 0x3d3ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3ED0u;
label_3d3ed0:
    // 0x3d3ed0: 0x80d5bc0  j           func_356F00
label_3d3ed4:
    if (ctx->pc == 0x3D3ED4u) {
        ctx->pc = 0x3D3ED4u;
            // 0x3d3ed4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3D3ED8u;
        goto label_3d3ed8;
    }
    ctx->pc = 0x3D3ED0u;
    ctx->pc = 0x3D3ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3ED0u;
            // 0x3d3ed4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356F00u;
    if (runtime->hasFunction(0x356F00u)) {
        auto targetFn = runtime->lookupFunction(0x356F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00356F00_0x356f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3D3ED8u;
label_3d3ed8:
    // 0x3d3ed8: 0x0  nop
    ctx->pc = 0x3d3ed8u;
    // NOP
label_3d3edc:
    // 0x3d3edc: 0x0  nop
    ctx->pc = 0x3d3edcu;
    // NOP
label_3d3ee0:
    // 0x3d3ee0: 0x80f4874  j           func_3D21D0
label_3d3ee4:
    if (ctx->pc == 0x3D3EE4u) {
        ctx->pc = 0x3D3EE4u;
            // 0x3d3ee4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D3EE8u;
        goto label_3d3ee8;
    }
    ctx->pc = 0x3D3EE0u;
    ctx->pc = 0x3D3EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3EE0u;
            // 0x3d3ee4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D21D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3D21D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3D3EE8u;
label_3d3ee8:
    // 0x3d3ee8: 0x0  nop
    ctx->pc = 0x3d3ee8u;
    // NOP
label_3d3eec:
    // 0x3d3eec: 0x0  nop
    ctx->pc = 0x3d3eecu;
    // NOP
label_3d3ef0:
    // 0x3d3ef0: 0x80f46c8  j           func_3D1B20
label_3d3ef4:
    if (ctx->pc == 0x3D3EF4u) {
        ctx->pc = 0x3D3EF4u;
            // 0x3d3ef4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D3EF8u;
        goto label_3d3ef8;
    }
    ctx->pc = 0x3D3EF0u;
    ctx->pc = 0x3D3EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3EF0u;
            // 0x3d3ef4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D1B20u;
    if (runtime->hasFunction(0x3D1B20u)) {
        auto targetFn = runtime->lookupFunction(0x3D1B20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003D1B20_0x3d1b20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3D3EF8u;
label_3d3ef8:
    // 0x3d3ef8: 0x0  nop
    ctx->pc = 0x3d3ef8u;
    // NOP
label_3d3efc:
    // 0x3d3efc: 0x0  nop
    ctx->pc = 0x3d3efcu;
    // NOP
label_3d3f00:
    // 0x3d3f00: 0x80f46a4  j           func_3D1A90
label_3d3f04:
    if (ctx->pc == 0x3D3F04u) {
        ctx->pc = 0x3D3F04u;
            // 0x3d3f04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D3F08u;
        goto label_3d3f08;
    }
    ctx->pc = 0x3D3F00u;
    ctx->pc = 0x3D3F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3F00u;
            // 0x3d3f04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D1A90u;
    {
        auto targetFn = runtime->lookupFunction(0x3D1A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3D3F08u;
label_3d3f08:
    // 0x3d3f08: 0x0  nop
    ctx->pc = 0x3d3f08u;
    // NOP
label_3d3f0c:
    // 0x3d3f0c: 0x0  nop
    ctx->pc = 0x3d3f0cu;
    // NOP
label_3d3f10:
    // 0x3d3f10: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x3d3f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_3d3f14:
    // 0x3d3f14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d3f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3d3f18:
    // 0x3d3f18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3d3f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3d3f1c:
    // 0x3d3f1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d3f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3d3f20:
    // 0x3d3f20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d3f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3d3f24:
    // 0x3d3f24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d3f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d3f28:
    // 0x3d3f28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d3f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d3f2c:
    // 0x3d3f2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d3f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d3f30:
    // 0x3d3f30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d3f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d3f34:
    // 0x3d3f34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d3f34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3d3f38:
    // 0x3d3f38: 0x26500a50  addiu       $s0, $s2, 0xA50
    ctx->pc = 0x3d3f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_3d3f3c:
    // 0x3d3f3c: 0x8ca30a68  lw          $v1, 0xA68($a1)
    ctx->pc = 0x3d3f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2664)));
label_3d3f40:
    // 0x3d3f40: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x3d3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_3d3f44:
    // 0x3d3f44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d3f48:
    // 0x3d3f48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3d3f4c:
    // 0x3d3f4c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3d3f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d3f50:
    // 0x3d3f50: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x3d3f50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d3f54:
    // 0x3d3f54: 0x14200082  bnez        $at, . + 4 + (0x82 << 2)
label_3d3f58:
    if (ctx->pc == 0x3D3F58u) {
        ctx->pc = 0x3D3F58u;
            // 0x3d3f58: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F5Cu;
        goto label_3d3f5c;
    }
    ctx->pc = 0x3D3F54u;
    {
        const bool branch_taken_0x3d3f54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3F54u;
            // 0x3d3f58: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f54) {
            ctx->pc = 0x3D4160u;
            goto label_3d4160;
        }
    }
    ctx->pc = 0x3D3F5Cu;
label_3d3f5c:
    // 0x3d3f5c: 0x8e540d74  lw          $s4, 0xD74($s2)
    ctx->pc = 0x3d3f5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3d3f60:
    // 0x3d3f60: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3d3f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3d3f64:
    // 0x3d3f64: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x3d3f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3d3f68:
    // 0x3d3f68: 0x8e8202c8  lw          $v0, 0x2C8($s4)
    ctx->pc = 0x3d3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 712)));
label_3d3f6c:
    // 0x3d3f6c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3d3f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3d3f70:
    // 0x3d3f70: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x3d3f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3d3f74:
    // 0x3d3f74: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3d3f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3d3f78:
    // 0x3d3f78: 0xc0a545c  jal         func_295170
label_3d3f7c:
    if (ctx->pc == 0x3D3F7Cu) {
        ctx->pc = 0x3D3F7Cu;
            // 0x3d3f7c: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3D3F80u;
        goto label_3d3f80;
    }
    ctx->pc = 0x3D3F78u;
    SET_GPR_U32(ctx, 31, 0x3D3F80u);
    ctx->pc = 0x3D3F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3F78u;
            // 0x3d3f7c: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3F80u; }
        if (ctx->pc != 0x3D3F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3F80u; }
        if (ctx->pc != 0x3D3F80u) { return; }
    }
    ctx->pc = 0x3D3F80u;
label_3d3f80:
    // 0x3d3f80: 0xac55002c  sw          $s5, 0x2C($v0)
    ctx->pc = 0x3d3f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 21));
label_3d3f84:
    // 0x3d3f84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3f88:
    // 0x3d3f88: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x3d3f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3d3f8c:
    // 0x3d3f8c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d3f90:
    // 0x3d3f90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d3f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d3f94:
    // 0x3d3f94: 0xc08bf20  jal         func_22FC80
label_3d3f98:
    if (ctx->pc == 0x3D3F98u) {
        ctx->pc = 0x3D3F98u;
            // 0x3d3f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F9Cu;
        goto label_3d3f9c;
    }
    ctx->pc = 0x3D3F94u;
    SET_GPR_U32(ctx, 31, 0x3D3F9Cu);
    ctx->pc = 0x3D3F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3F94u;
            // 0x3d3f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3F9Cu; }
        if (ctx->pc != 0x3D3F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3F9Cu; }
        if (ctx->pc != 0x3D3F9Cu) { return; }
    }
    ctx->pc = 0x3D3F9Cu;
label_3d3f9c:
    // 0x3d3f9c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x3d3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3d3fa0:
    // 0x3d3fa0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d3fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d3fa4:
    // 0x3d3fa4: 0xae430db8  sw          $v1, 0xDB8($s2)
    ctx->pc = 0x3d3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 3));
label_3d3fa8:
    // 0x3d3fa8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d3fac:
    // 0x3d3fac: 0x8e6700a0  lw          $a3, 0xA0($s3)
    ctx->pc = 0x3d3facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3d3fb0:
    // 0x3d3fb0: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x3d3fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_3d3fb4:
    // 0x3d3fb4: 0x264507e0  addiu       $a1, $s2, 0x7E0
    ctx->pc = 0x3d3fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
label_3d3fb8:
    // 0x3d3fb8: 0x24c69350  addiu       $a2, $a2, -0x6CB0
    ctx->pc = 0x3d3fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939472));
label_3d3fbc:
    // 0x3d3fbc: 0x8ce30060  lw          $v1, 0x60($a3)
    ctx->pc = 0x3d3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
label_3d3fc0:
    // 0x3d3fc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d3fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d3fc4:
    // 0x3d3fc4: 0xc04cca0  jal         func_133280
label_3d3fc8:
    if (ctx->pc == 0x3D3FC8u) {
        ctx->pc = 0x3D3FC8u;
            // 0x3d3fc8: 0xace20060  sw          $v0, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x3D3FCCu;
        goto label_3d3fcc;
    }
    ctx->pc = 0x3D3FC4u;
    SET_GPR_U32(ctx, 31, 0x3D3FCCu);
    ctx->pc = 0x3D3FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3FC4u;
            // 0x3d3fc8: 0xace20060  sw          $v0, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3FCCu; }
        if (ctx->pc != 0x3D3FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3FCCu; }
        if (ctx->pc != 0x3D3FCCu) { return; }
    }
    ctx->pc = 0x3D3FCCu;
label_3d3fcc:
    // 0x3d3fcc: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3d3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3d3fd0:
    // 0x3d3fd0: 0xc075318  jal         func_1D4C60
label_3d3fd4:
    if (ctx->pc == 0x3D3FD4u) {
        ctx->pc = 0x3D3FD4u;
            // 0x3d3fd4: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->pc = 0x3D3FD8u;
        goto label_3d3fd8;
    }
    ctx->pc = 0x3D3FD0u;
    SET_GPR_U32(ctx, 31, 0x3D3FD8u);
    ctx->pc = 0x3D3FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3FD0u;
            // 0x3d3fd4: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3FD8u; }
        if (ctx->pc != 0x3D3FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3FD8u; }
        if (ctx->pc != 0x3D3FD8u) { return; }
    }
    ctx->pc = 0x3D3FD8u;
label_3d3fd8:
    // 0x3d3fd8: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x3d3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_3d3fdc:
    // 0x3d3fdc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3d3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3d3fe0:
    // 0x3d3fe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d3fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d3fe4:
    // 0x3d3fe4: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3d3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3d3fe8:
    // 0x3d3fe8: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3d3fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3d3fec:
    // 0x3d3fec: 0xc0c6250  jal         func_318940
label_3d3ff0:
    if (ctx->pc == 0x3D3FF0u) {
        ctx->pc = 0x3D3FF0u;
            // 0x3d3ff0: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x3D3FF4u;
        goto label_3d3ff4;
    }
    ctx->pc = 0x3D3FECu;
    SET_GPR_U32(ctx, 31, 0x3D3FF4u);
    ctx->pc = 0x3D3FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3FECu;
            // 0x3d3ff0: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3FF4u; }
        if (ctx->pc != 0x3D3FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3FF4u; }
        if (ctx->pc != 0x3D3FF4u) { return; }
    }
    ctx->pc = 0x3D3FF4u;
label_3d3ff4:
    // 0x3d3ff4: 0x8e420a5c  lw          $v0, 0xA5C($s2)
    ctx->pc = 0x3d3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2652)));
label_3d3ff8:
    // 0x3d3ff8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d3ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d3ffc:
    // 0x3d3ffc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3d3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3d4000:
    // 0x3d4000: 0x24c69340  addiu       $a2, $a2, -0x6CC0
    ctx->pc = 0x3d4000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939456));
label_3d4004:
    // 0x3d4004: 0xc04cca0  jal         func_133280
label_3d4008:
    if (ctx->pc == 0x3D4008u) {
        ctx->pc = 0x3D4008u;
            // 0x3d4008: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x3D400Cu;
        goto label_3d400c;
    }
    ctx->pc = 0x3D4004u;
    SET_GPR_U32(ctx, 31, 0x3D400Cu);
    ctx->pc = 0x3D4008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4004u;
            // 0x3d4008: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D400Cu; }
        if (ctx->pc != 0x3D400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D400Cu; }
        if (ctx->pc != 0x3D400Cu) { return; }
    }
    ctx->pc = 0x3D400Cu;
label_3d400c:
    // 0x3d400c: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3d400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3d4010:
    // 0x3d4010: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3d4010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3d4014:
    // 0x3d4014: 0xc075378  jal         func_1D4DE0
label_3d4018:
    if (ctx->pc == 0x3D4018u) {
        ctx->pc = 0x3D4018u;
            // 0x3d4018: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D401Cu;
        goto label_3d401c;
    }
    ctx->pc = 0x3D4014u;
    SET_GPR_U32(ctx, 31, 0x3D401Cu);
    ctx->pc = 0x3D4018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4014u;
            // 0x3d4018: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D401Cu; }
        if (ctx->pc != 0x3D401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D401Cu; }
        if (ctx->pc != 0x3D401Cu) { return; }
    }
    ctx->pc = 0x3D401Cu;
label_3d401c:
    // 0x3d401c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d401cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d4020:
    // 0x3d4020: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x3d4020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_3d4024:
    // 0x3d4024: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d4028:
    // 0x3d4028: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d4028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d402c:
    // 0x3d402c: 0xc0c753c  jal         func_31D4F0
label_3d4030:
    if (ctx->pc == 0x3D4030u) {
        ctx->pc = 0x3D4030u;
            // 0x3d4030: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3D4034u;
        goto label_3d4034;
    }
    ctx->pc = 0x3D402Cu;
    SET_GPR_U32(ctx, 31, 0x3D4034u);
    ctx->pc = 0x3D4030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D402Cu;
            // 0x3d4030: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4034u; }
        if (ctx->pc != 0x3D4034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4034u; }
        if (ctx->pc != 0x3D4034u) { return; }
    }
    ctx->pc = 0x3D4034u;
label_3d4034:
    // 0x3d4034: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d4038:
    // 0x3d4038: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x3d4038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_3d403c:
    // 0x3d403c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d403cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d4040:
    // 0x3d4040: 0xc0c753c  jal         func_31D4F0
label_3d4044:
    if (ctx->pc == 0x3D4044u) {
        ctx->pc = 0x3D4044u;
            // 0x3d4044: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3D4048u;
        goto label_3d4048;
    }
    ctx->pc = 0x3D4040u;
    SET_GPR_U32(ctx, 31, 0x3D4048u);
    ctx->pc = 0x3D4044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4040u;
            // 0x3d4044: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4048u; }
        if (ctx->pc != 0x3D4048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4048u; }
        if (ctx->pc != 0x3D4048u) { return; }
    }
    ctx->pc = 0x3D4048u;
label_3d4048:
    // 0x3d4048: 0x8e530550  lw          $s3, 0x550($s2)
    ctx->pc = 0x3d4048u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_3d404c:
    // 0x3d404c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3d404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3d4050:
    // 0x3d4050: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d4050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d4054:
    // 0x3d4054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d4054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4058:
    // 0x3d4058: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3d4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d405c:
    // 0x3d405c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x3d405cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3d4060:
    // 0x3d4060: 0x8262010c  lb          $v0, 0x10C($s3)
    ctx->pc = 0x3d4060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_3d4064:
    // 0x3d4064: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d4064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4068:
    // 0x3d4068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d4068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d406c:
    // 0x3d406c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d406cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d4070:
    // 0x3d4070: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3d4070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3d4074:
    // 0x3d4074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d4078:
    // 0x3d4078: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d4078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d407c:
    // 0x3d407c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3d407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3d4080:
    // 0x3d4080: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3d4080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3d4084:
    // 0x3d4084: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x3d4084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3d4088:
    // 0x3d4088: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x3d4088u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_3d408c:
    // 0x3d408c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3d408cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3d4090:
    // 0x3d4090: 0x320f809  jalr        $t9
label_3d4094:
    if (ctx->pc == 0x3D4094u) {
        ctx->pc = 0x3D4094u;
            // 0x3d4094: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3D4098u;
        goto label_3d4098;
    }
    ctx->pc = 0x3D4090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D4098u);
        ctx->pc = 0x3D4094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4090u;
            // 0x3d4094: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D4098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D4098u; }
            if (ctx->pc != 0x3D4098u) { return; }
        }
        }
    }
    ctx->pc = 0x3D4098u;
label_3d4098:
    // 0x3d4098: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x3d4098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3d409c:
    // 0x3d409c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d409cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d40a0:
    // 0x3d40a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d40a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d40a4:
    // 0x3d40a4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3d40a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3d40a8:
    // 0x3d40a8: 0x320f809  jalr        $t9
label_3d40ac:
    if (ctx->pc == 0x3D40ACu) {
        ctx->pc = 0x3D40ACu;
            // 0x3d40ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D40B0u;
        goto label_3d40b0;
    }
    ctx->pc = 0x3D40A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D40B0u);
        ctx->pc = 0x3D40ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D40A8u;
            // 0x3d40ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D40B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D40B0u; }
            if (ctx->pc != 0x3D40B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3D40B0u;
label_3d40b0:
    // 0x3d40b0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3d40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3d40b4:
    // 0x3d40b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d40b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d40b8:
    // 0x3d40b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d40bc:
    // 0x3d40bc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3d40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_3d40c0:
    // 0x3d40c0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x3d40c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d40c4:
    // 0x3d40c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d40c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d40c8:
    // 0x3d40c8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_3d40cc:
    if (ctx->pc == 0x3D40CCu) {
        ctx->pc = 0x3D40D0u;
        goto label_3d40d0;
    }
    ctx->pc = 0x3D40C8u;
    {
        const bool branch_taken_0x3d40c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d40c8) {
            ctx->pc = 0x3D4110u;
            goto label_3d4110;
        }
    }
    ctx->pc = 0x3D40D0u;
label_3d40d0:
    // 0x3d40d0: 0xc0754b4  jal         func_1D52D0
label_3d40d4:
    if (ctx->pc == 0x3D40D4u) {
        ctx->pc = 0x3D40D4u;
            // 0x3d40d4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x3D40D8u;
        goto label_3d40d8;
    }
    ctx->pc = 0x3D40D0u;
    SET_GPR_U32(ctx, 31, 0x3D40D8u);
    ctx->pc = 0x3D40D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D40D0u;
            // 0x3d40d4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D40D8u; }
        if (ctx->pc != 0x3D40D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D40D8u; }
        if (ctx->pc != 0x3D40D8u) { return; }
    }
    ctx->pc = 0x3D40D8u;
label_3d40d8:
    // 0x3d40d8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3d40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3d40dc:
    // 0x3d40dc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3d40dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3d40e0:
    // 0x3d40e0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3d40e4:
    if (ctx->pc == 0x3D40E4u) {
        ctx->pc = 0x3D40E4u;
            // 0x3d40e4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x3D40E8u;
        goto label_3d40e8;
    }
    ctx->pc = 0x3D40E0u;
    {
        const bool branch_taken_0x3d40e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d40e0) {
            ctx->pc = 0x3D40E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D40E0u;
            // 0x3d40e4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D4110u;
            goto label_3d4110;
        }
    }
    ctx->pc = 0x3D40E8u;
label_3d40e8:
    // 0x3d40e8: 0xc040180  jal         func_100600
label_3d40ec:
    if (ctx->pc == 0x3D40ECu) {
        ctx->pc = 0x3D40ECu;
            // 0x3d40ec: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x3D40F0u;
        goto label_3d40f0;
    }
    ctx->pc = 0x3D40E8u;
    SET_GPR_U32(ctx, 31, 0x3D40F0u);
    ctx->pc = 0x3D40ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D40E8u;
            // 0x3d40ec: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D40F0u; }
        if (ctx->pc != 0x3D40F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D40F0u; }
        if (ctx->pc != 0x3D40F0u) { return; }
    }
    ctx->pc = 0x3D40F0u;
label_3d40f0:
    // 0x3d40f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d40f4:
    if (ctx->pc == 0x3D40F4u) {
        ctx->pc = 0x3D40F8u;
        goto label_3d40f8;
    }
    ctx->pc = 0x3D40F0u;
    {
        const bool branch_taken_0x3d40f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d40f0) {
            ctx->pc = 0x3D410Cu;
            goto label_3d410c;
        }
    }
    ctx->pc = 0x3D40F8u;
label_3d40f8:
    // 0x3d40f8: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x3d40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_3d40fc:
    // 0x3d40fc: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x3d40fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d4100:
    // 0x3d4100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d4100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4104:
    // 0x3d4104: 0xc11ebc4  jal         func_47AF10
label_3d4108:
    if (ctx->pc == 0x3D4108u) {
        ctx->pc = 0x3D4108u;
            // 0x3d4108: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3D410Cu;
        goto label_3d410c;
    }
    ctx->pc = 0x3D4104u;
    SET_GPR_U32(ctx, 31, 0x3D410Cu);
    ctx->pc = 0x3D4108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4104u;
            // 0x3d4108: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D410Cu; }
        if (ctx->pc != 0x3D410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D410Cu; }
        if (ctx->pc != 0x3D410Cu) { return; }
    }
    ctx->pc = 0x3D410Cu;
label_3d410c:
    // 0x3d410c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3d410cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3d4110:
    // 0x3d4110: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d4110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d4114:
    // 0x3d4114: 0x8c4465a0  lw          $a0, 0x65A0($v0)
    ctx->pc = 0x3d4114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26016)));
label_3d4118:
    // 0x3d4118: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3d411c:
    if (ctx->pc == 0x3D411Cu) {
        ctx->pc = 0x3D4120u;
        goto label_3d4120;
    }
    ctx->pc = 0x3D4118u;
    {
        const bool branch_taken_0x3d4118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4118) {
            ctx->pc = 0x3D413Cu;
            goto label_3d413c;
        }
    }
    ctx->pc = 0x3D4120u;
label_3d4120:
    // 0x3d4120: 0xc0f6824  jal         func_3DA090
label_3d4124:
    if (ctx->pc == 0x3D4124u) {
        ctx->pc = 0x3D4128u;
        goto label_3d4128;
    }
    ctx->pc = 0x3D4120u;
    SET_GPR_U32(ctx, 31, 0x3D4128u);
    ctx->pc = 0x3DA090u;
    if (runtime->hasFunction(0x3DA090u)) {
        auto targetFn = runtime->lookupFunction(0x3DA090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4128u; }
        if (ctx->pc != 0x3D4128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA090_0x3da090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4128u; }
        if (ctx->pc != 0x3D4128u) { return; }
    }
    ctx->pc = 0x3D4128u;
label_3d4128:
    // 0x3d4128: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d412c:
    if (ctx->pc == 0x3D412Cu) {
        ctx->pc = 0x3D4130u;
        goto label_3d4130;
    }
    ctx->pc = 0x3D4128u;
    {
        const bool branch_taken_0x3d4128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4128) {
            ctx->pc = 0x3D413Cu;
            goto label_3d413c;
        }
    }
    ctx->pc = 0x3D4130u;
label_3d4130:
    // 0x3d4130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d4130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4134:
    // 0x3d4134: 0xc0f6a54  jal         func_3DA950
label_3d4138:
    if (ctx->pc == 0x3D4138u) {
        ctx->pc = 0x3D4138u;
            // 0x3d4138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D413Cu;
        goto label_3d413c;
    }
    ctx->pc = 0x3D4134u;
    SET_GPR_U32(ctx, 31, 0x3D413Cu);
    ctx->pc = 0x3D4138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4134u;
            // 0x3d4138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA950u;
    if (runtime->hasFunction(0x3DA950u)) {
        auto targetFn = runtime->lookupFunction(0x3DA950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D413Cu; }
        if (ctx->pc != 0x3D413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA950_0x3da950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D413Cu; }
        if (ctx->pc != 0x3D413Cu) { return; }
    }
    ctx->pc = 0x3D413Cu;
label_3d413c:
    // 0x3d413c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d413cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d4140:
    // 0x3d4140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4144:
    // 0x3d4144: 0xc4408400  lwc1        $f0, -0x7C00($v0)
    ctx->pc = 0x3d4144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d4148:
    // 0x3d4148: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3d4148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d414c:
    // 0x3d414c: 0xe62001cc  swc1        $f0, 0x1CC($s1)
    ctx->pc = 0x3d414cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
label_3d4150:
    // 0x3d4150: 0xc0f0f84  jal         func_3C3E10
label_3d4154:
    if (ctx->pc == 0x3D4154u) {
        ctx->pc = 0x3D4154u;
            // 0x3d4154: 0xae400e30  sw          $zero, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 0));
        ctx->pc = 0x3D4158u;
        goto label_3d4158;
    }
    ctx->pc = 0x3D4150u;
    SET_GPR_U32(ctx, 31, 0x3D4158u);
    ctx->pc = 0x3D4154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4150u;
            // 0x3d4154: 0xae400e30  sw          $zero, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4158u; }
        if (ctx->pc != 0x3D4158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4158u; }
        if (ctx->pc != 0x3D4158u) { return; }
    }
    ctx->pc = 0x3D4158u;
label_3d4158:
    // 0x3d4158: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_3d415c:
    if (ctx->pc == 0x3D415Cu) {
        ctx->pc = 0x3D415Cu;
            // 0x3d415c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3D4160u;
        goto label_3d4160;
    }
    ctx->pc = 0x3D4158u;
    {
        const bool branch_taken_0x3d4158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4158u;
            // 0x3d415c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4158) {
            ctx->pc = 0x3D4848u;
            goto label_3d4848;
        }
    }
    ctx->pc = 0x3D4160u;
label_3d4160:
    // 0x3d4160: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x3d4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_3d4164:
    // 0x3d4164: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3d4164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d4168:
    // 0x3d4168: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x3d4168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d416c:
    // 0x3d416c: 0xc44d0024  lwc1        $f13, 0x24($v0)
    ctx->pc = 0x3d416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d4170:
    // 0x3d4170: 0xc44e0028  lwc1        $f14, 0x28($v0)
    ctx->pc = 0x3d4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d4174:
    // 0x3d4174: 0xc04cbd8  jal         func_132F60
label_3d4178:
    if (ctx->pc == 0x3D4178u) {
        ctx->pc = 0x3D4178u;
            // 0x3d4178: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3D417Cu;
        goto label_3d417c;
    }
    ctx->pc = 0x3D4174u;
    SET_GPR_U32(ctx, 31, 0x3D417Cu);
    ctx->pc = 0x3D4178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4174u;
            // 0x3d4178: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D417Cu; }
        if (ctx->pc != 0x3D417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D417Cu; }
        if (ctx->pc != 0x3D417Cu) { return; }
    }
    ctx->pc = 0x3D417Cu;
label_3d417c:
    // 0x3d417c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3d417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3d4180:
    // 0x3d4180: 0xc04f278  jal         func_13C9E0
label_3d4184:
    if (ctx->pc == 0x3D4184u) {
        ctx->pc = 0x3D4184u;
            // 0x3d4184: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x3D4188u;
        goto label_3d4188;
    }
    ctx->pc = 0x3D4180u;
    SET_GPR_U32(ctx, 31, 0x3D4188u);
    ctx->pc = 0x3D4184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4180u;
            // 0x3d4184: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4188u; }
        if (ctx->pc != 0x3D4188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4188u; }
        if (ctx->pc != 0x3D4188u) { return; }
    }
    ctx->pc = 0x3D4188u;
label_3d4188:
    // 0x3d4188: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x3d4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d418c:
    // 0x3d418c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3d4190:
    // 0x3d4190: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d4190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d4194:
    // 0x3d4194: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3d4194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3d4198:
    // 0x3d4198: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x3d4198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d419c:
    // 0x3d419c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d419cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d41a0:
    // 0x3d41a0: 0xc7ad0134  lwc1        $f13, 0x134($sp)
    ctx->pc = 0x3d41a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d41a4:
    // 0x3d41a4: 0xc04ce50  jal         func_133940
label_3d41a8:
    if (ctx->pc == 0x3D41A8u) {
        ctx->pc = 0x3D41A8u;
            // 0x3d41a8: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3D41ACu;
        goto label_3d41ac;
    }
    ctx->pc = 0x3D41A4u;
    SET_GPR_U32(ctx, 31, 0x3D41ACu);
    ctx->pc = 0x3D41A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D41A4u;
            // 0x3d41a8: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D41ACu; }
        if (ctx->pc != 0x3D41ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D41ACu; }
        if (ctx->pc != 0x3D41ACu) { return; }
    }
    ctx->pc = 0x3D41ACu;
label_3d41ac:
    // 0x3d41ac: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3d41acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3d41b0:
    // 0x3d41b0: 0xc04cce8  jal         func_1333A0
label_3d41b4:
    if (ctx->pc == 0x3D41B4u) {
        ctx->pc = 0x3D41B4u;
            // 0x3d41b4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x3D41B8u;
        goto label_3d41b8;
    }
    ctx->pc = 0x3D41B0u;
    SET_GPR_U32(ctx, 31, 0x3D41B8u);
    ctx->pc = 0x3D41B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D41B0u;
            // 0x3d41b4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D41B8u; }
        if (ctx->pc != 0x3D41B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D41B8u; }
        if (ctx->pc != 0x3D41B8u) { return; }
    }
    ctx->pc = 0x3D41B8u;
label_3d41b8:
    // 0x3d41b8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3d41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3d41bc:
    // 0x3d41bc: 0xc04ce80  jal         func_133A00
label_3d41c0:
    if (ctx->pc == 0x3D41C0u) {
        ctx->pc = 0x3D41C0u;
            // 0x3d41c0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x3D41C4u;
        goto label_3d41c4;
    }
    ctx->pc = 0x3D41BCu;
    SET_GPR_U32(ctx, 31, 0x3D41C4u);
    ctx->pc = 0x3D41C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D41BCu;
            // 0x3d41c0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D41C4u; }
        if (ctx->pc != 0x3D41C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D41C4u; }
        if (ctx->pc != 0x3D41C4u) { return; }
    }
    ctx->pc = 0x3D41C4u;
label_3d41c4:
    // 0x3d41c4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3d41c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3d41c8:
    // 0x3d41c8: 0xc04ccf4  jal         func_1333D0
label_3d41cc:
    if (ctx->pc == 0x3D41CCu) {
        ctx->pc = 0x3D41CCu;
            // 0x3d41cc: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x3D41D0u;
        goto label_3d41d0;
    }
    ctx->pc = 0x3D41C8u;
    SET_GPR_U32(ctx, 31, 0x3D41D0u);
    ctx->pc = 0x3D41CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D41C8u;
            // 0x3d41cc: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D41D0u; }
        if (ctx->pc != 0x3D41D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D41D0u; }
        if (ctx->pc != 0x3D41D0u) { return; }
    }
    ctx->pc = 0x3D41D0u;
label_3d41d0:
    // 0x3d41d0: 0x8e440e30  lw          $a0, 0xE30($s2)
    ctx->pc = 0x3d41d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
label_3d41d4:
    // 0x3d41d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d41d8:
    // 0x3d41d8: 0x50830042  beql        $a0, $v1, . + 4 + (0x42 << 2)
label_3d41dc:
    if (ctx->pc == 0x3D41DCu) {
        ctx->pc = 0x3D41DCu;
            // 0x3d41dc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3D41E0u;
        goto label_3d41e0;
    }
    ctx->pc = 0x3D41D8u;
    {
        const bool branch_taken_0x3d41d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d41d8) {
            ctx->pc = 0x3D41DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D41D8u;
            // 0x3d41dc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D42E4u;
            goto label_3d42e4;
        }
    }
    ctx->pc = 0x3D41E0u;
label_3d41e0:
    // 0x3d41e0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3d41e4:
    if (ctx->pc == 0x3D41E4u) {
        ctx->pc = 0x3D41E4u;
            // 0x3d41e4: 0x8e6700a0  lw          $a3, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->pc = 0x3D41E8u;
        goto label_3d41e8;
    }
    ctx->pc = 0x3D41E0u;
    {
        const bool branch_taken_0x3d41e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d41e0) {
            ctx->pc = 0x3D41E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D41E0u;
            // 0x3d41e4: 0x8e6700a0  lw          $a3, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D41F0u;
            goto label_3d41f0;
        }
    }
    ctx->pc = 0x3D41E8u;
label_3d41e8:
    // 0x3d41e8: 0x10000196  b           . + 4 + (0x196 << 2)
label_3d41ec:
    if (ctx->pc == 0x3D41ECu) {
        ctx->pc = 0x3D41F0u;
        goto label_3d41f0;
    }
    ctx->pc = 0x3D41E8u;
    {
        const bool branch_taken_0x3d41e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d41e8) {
            ctx->pc = 0x3D4844u;
            goto label_3d4844;
        }
    }
    ctx->pc = 0x3D41F0u;
label_3d41f0:
    // 0x3d41f0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d41f4:
    // 0x3d41f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3d41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3d41f8:
    // 0x3d41f8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3d41f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3d41fc:
    // 0x3d41fc: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x3d41fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3d4200:
    // 0x3d4200: 0x8ce30060  lw          $v1, 0x60($a3)
    ctx->pc = 0x3d4200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
label_3d4204:
    // 0x3d4204: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d4204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d4208:
    // 0x3d4208: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d4208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d420c:
    // 0x3d420c: 0xc04cca0  jal         func_133280
label_3d4210:
    if (ctx->pc == 0x3D4210u) {
        ctx->pc = 0x3D4210u;
            // 0x3d4210: 0xace20060  sw          $v0, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x3D4214u;
        goto label_3d4214;
    }
    ctx->pc = 0x3D420Cu;
    SET_GPR_U32(ctx, 31, 0x3D4214u);
    ctx->pc = 0x3D4210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D420Cu;
            // 0x3d4210: 0xace20060  sw          $v0, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4214u; }
        if (ctx->pc != 0x3D4214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4214u; }
        if (ctx->pc != 0x3D4214u) { return; }
    }
    ctx->pc = 0x3D4214u;
label_3d4214:
    // 0x3d4214: 0xc7b40118  lwc1        $f20, 0x118($sp)
    ctx->pc = 0x3d4214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d4218:
    // 0x3d4218: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3d4218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3d421c:
    // 0x3d421c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d421cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4220:
    // 0x3d4220: 0xc04cc44  jal         func_133110
label_3d4224:
    if (ctx->pc == 0x3D4224u) {
        ctx->pc = 0x3D4224u;
            // 0x3d4224: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x3D4228u;
        goto label_3d4228;
    }
    ctx->pc = 0x3D4220u;
    SET_GPR_U32(ctx, 31, 0x3D4228u);
    ctx->pc = 0x3D4224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4220u;
            // 0x3d4224: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4228u; }
        if (ctx->pc != 0x3D4228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4228u; }
        if (ctx->pc != 0x3D4228u) { return; }
    }
    ctx->pc = 0x3D4228u;
label_3d4228:
    // 0x3d4228: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x3d4228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_3d422c:
    // 0x3d422c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x3d422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_3d4230:
    // 0x3d4230: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3d4230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3d4234:
    // 0x3d4234: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d4234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4238:
    // 0x3d4238: 0xc04cc70  jal         func_1331C0
label_3d423c:
    if (ctx->pc == 0x3D423Cu) {
        ctx->pc = 0x3D423Cu;
            // 0x3d423c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3D4240u;
        goto label_3d4240;
    }
    ctx->pc = 0x3D4238u;
    SET_GPR_U32(ctx, 31, 0x3D4240u);
    ctx->pc = 0x3D423Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4238u;
            // 0x3d423c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4240u; }
        if (ctx->pc != 0x3D4240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4240u; }
        if (ctx->pc != 0x3D4240u) { return; }
    }
    ctx->pc = 0x3D4240u;
label_3d4240:
    // 0x3d4240: 0xe6340068  swc1        $f20, 0x68($s1)
    ctx->pc = 0x3d4240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_3d4244:
    // 0x3d4244: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3d4244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3d4248:
    // 0x3d4248: 0x8e500550  lw          $s0, 0x550($s2)
    ctx->pc = 0x3d4248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_3d424c:
    // 0x3d424c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d424cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d4250:
    // 0x3d4250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d4250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4254:
    // 0x3d4254: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3d4254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d4258:
    // 0x3d4258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d4258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d425c:
    // 0x3d425c: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x3d425cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_3d4260:
    // 0x3d4260: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x3d4260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3d4264:
    // 0x3d4264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4268:
    // 0x3d4268: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d4268u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d426c:
    // 0x3d426c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3d426cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3d4270:
    // 0x3d4270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d4270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d4274:
    // 0x3d4274: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d4274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d4278:
    // 0x3d4278: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d4278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3d427c:
    // 0x3d427c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3d427cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3d4280:
    // 0x3d4280: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3d4280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3d4284:
    // 0x3d4284: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3d4284u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3d4288:
    // 0x3d4288: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3d4288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3d428c:
    // 0x3d428c: 0x320f809  jalr        $t9
label_3d4290:
    if (ctx->pc == 0x3D4290u) {
        ctx->pc = 0x3D4290u;
            // 0x3d4290: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3D4294u;
        goto label_3d4294;
    }
    ctx->pc = 0x3D428Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D4294u);
        ctx->pc = 0x3D4290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D428Cu;
            // 0x3d4290: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D4294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D4294u; }
            if (ctx->pc != 0x3D4294u) { return; }
        }
        }
    }
    ctx->pc = 0x3D4294u;
label_3d4294:
    // 0x3d4294: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3d4294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3d4298:
    // 0x3d4298: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d4298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d429c:
    // 0x3d429c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d42a0:
    // 0x3d42a0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3d42a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3d42a4:
    // 0x3d42a4: 0x320f809  jalr        $t9
label_3d42a8:
    if (ctx->pc == 0x3D42A8u) {
        ctx->pc = 0x3D42A8u;
            // 0x3d42a8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D42ACu;
        goto label_3d42ac;
    }
    ctx->pc = 0x3D42A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D42ACu);
        ctx->pc = 0x3D42A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D42A4u;
            // 0x3d42a8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D42ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D42ACu; }
            if (ctx->pc != 0x3D42ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3D42ACu;
label_3d42ac:
    // 0x3d42ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d42acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d42b0:
    // 0x3d42b0: 0xc07649c  jal         func_1D9270
label_3d42b4:
    if (ctx->pc == 0x3D42B4u) {
        ctx->pc = 0x3D42B4u;
            // 0x3d42b4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x3D42B8u;
        goto label_3d42b8;
    }
    ctx->pc = 0x3D42B0u;
    SET_GPR_U32(ctx, 31, 0x3D42B8u);
    ctx->pc = 0x3D42B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D42B0u;
            // 0x3d42b4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D42B8u; }
        if (ctx->pc != 0x3D42B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D42B8u; }
        if (ctx->pc != 0x3D42B8u) { return; }
    }
    ctx->pc = 0x3D42B8u;
label_3d42b8:
    // 0x3d42b8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3d42b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d42bc:
    // 0x3d42bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d42bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d42c0:
    // 0x3d42c0: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x3d42c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_3d42c4:
    // 0x3d42c4: 0x320f809  jalr        $t9
label_3d42c8:
    if (ctx->pc == 0x3D42C8u) {
        ctx->pc = 0x3D42C8u;
            // 0x3d42c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D42CCu;
        goto label_3d42cc;
    }
    ctx->pc = 0x3D42C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D42CCu);
        ctx->pc = 0x3D42C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D42C4u;
            // 0x3d42c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D42CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D42CCu; }
            if (ctx->pc != 0x3D42CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D42CCu;
label_3d42cc:
    // 0x3d42cc: 0xae2001b0  sw          $zero, 0x1B0($s1)
    ctx->pc = 0x3d42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 0));
label_3d42d0:
    // 0x3d42d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d42d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d42d4:
    // 0x3d42d4: 0xae430db8  sw          $v1, 0xDB8($s2)
    ctx->pc = 0x3d42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 3));
label_3d42d8:
    // 0x3d42d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d42dc:
    // 0x3d42dc: 0x10000159  b           . + 4 + (0x159 << 2)
label_3d42e0:
    if (ctx->pc == 0x3D42E0u) {
        ctx->pc = 0x3D42E0u;
            // 0x3d42e0: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x3D42E4u;
        goto label_3d42e4;
    }
    ctx->pc = 0x3D42DCu;
    {
        const bool branch_taken_0x3d42dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D42E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D42DCu;
            // 0x3d42e0: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42dc) {
            ctx->pc = 0x3D4844u;
            goto label_3d4844;
        }
    }
    ctx->pc = 0x3D42E4u;
label_3d42e4:
    // 0x3d42e4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x3d42e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3d42e8:
    // 0x3d42e8: 0xc04cca0  jal         func_133280
label_3d42ec:
    if (ctx->pc == 0x3D42ECu) {
        ctx->pc = 0x3D42ECu;
            // 0x3d42ec: 0x26260060  addiu       $a2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x3D42F0u;
        goto label_3d42f0;
    }
    ctx->pc = 0x3D42E8u;
    SET_GPR_U32(ctx, 31, 0x3D42F0u);
    ctx->pc = 0x3D42ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D42E8u;
            // 0x3d42ec: 0x26260060  addiu       $a2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D42F0u; }
        if (ctx->pc != 0x3D42F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D42F0u; }
        if (ctx->pc != 0x3D42F0u) { return; }
    }
    ctx->pc = 0x3D42F0u;
label_3d42f0:
    // 0x3d42f0: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x3d42f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_3d42f4:
    // 0x3d42f4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x3d42f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3d42f8:
    // 0x3d42f8: 0xc04cc90  jal         func_133240
label_3d42fc:
    if (ctx->pc == 0x3D42FCu) {
        ctx->pc = 0x3D42FCu;
            // 0x3d42fc: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x3D4300u;
        goto label_3d4300;
    }
    ctx->pc = 0x3D42F8u;
    SET_GPR_U32(ctx, 31, 0x3D4300u);
    ctx->pc = 0x3D42FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D42F8u;
            // 0x3d42fc: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4300u; }
        if (ctx->pc != 0x3D4300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4300u; }
        if (ctx->pc != 0x3D4300u) { return; }
    }
    ctx->pc = 0x3D4300u;
label_3d4300:
    // 0x3d4300: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d4300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d4304:
    // 0x3d4304: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d4304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d4308:
    // 0x3d4308: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3d4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3d430c:
    // 0x3d430c: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x3d430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_3d4310:
    // 0x3d4310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d4310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d4314:
    // 0x3d4314: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d4314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4318:
    // 0x3d4318: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3d4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d431c:
    // 0x3d431c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3d431cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
label_3d4320:
    // 0x3d4320: 0x0  nop
    ctx->pc = 0x3d4320u;
    // NOP
label_3d4324:
    // 0x3d4324: 0x0  nop
    ctx->pc = 0x3d4324u;
    // NOP
label_3d4328:
    // 0x3d4328: 0xc04cc70  jal         func_1331C0
label_3d432c:
    if (ctx->pc == 0x3D432Cu) {
        ctx->pc = 0x3D4330u;
        goto label_3d4330;
    }
    ctx->pc = 0x3D4328u;
    SET_GPR_U32(ctx, 31, 0x3D4330u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4330u; }
        if (ctx->pc != 0x3D4330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4330u; }
        if (ctx->pc != 0x3D4330u) { return; }
    }
    ctx->pc = 0x3D4330u;
label_3d4330:
    // 0x3d4330: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x3d4330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d4334:
    // 0x3d4334: 0xc62d0064  lwc1        $f13, 0x64($s1)
    ctx->pc = 0x3d4334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d4338:
    // 0x3d4338: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d433c:
    // 0x3d433c: 0xc04cbd8  jal         func_132F60
label_3d4340:
    if (ctx->pc == 0x3D4340u) {
        ctx->pc = 0x3D4340u;
            // 0x3d4340: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3D4344u;
        goto label_3d4344;
    }
    ctx->pc = 0x3D433Cu;
    SET_GPR_U32(ctx, 31, 0x3D4344u);
    ctx->pc = 0x3D4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D433Cu;
            // 0x3d4340: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4344u; }
        if (ctx->pc != 0x3D4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4344u; }
        if (ctx->pc != 0x3D4344u) { return; }
    }
    ctx->pc = 0x3D4344u;
label_3d4344:
    // 0x3d4344: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x3d4344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_3d4348:
    // 0x3d4348: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x3d4348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3d434c:
    // 0x3d434c: 0xc04cca0  jal         func_133280
label_3d4350:
    if (ctx->pc == 0x3D4350u) {
        ctx->pc = 0x3D4350u;
            // 0x3d4350: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3D4354u;
        goto label_3d4354;
    }
    ctx->pc = 0x3D434Cu;
    SET_GPR_U32(ctx, 31, 0x3D4354u);
    ctx->pc = 0x3D4350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D434Cu;
            // 0x3d4350: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4354u; }
        if (ctx->pc != 0x3D4354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4354u; }
        if (ctx->pc != 0x3D4354u) { return; }
    }
    ctx->pc = 0x3D4354u;
label_3d4354:
    // 0x3d4354: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x3d4354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_3d4358:
    // 0x3d4358: 0xc04cc44  jal         func_133110
label_3d435c:
    if (ctx->pc == 0x3D435Cu) {
        ctx->pc = 0x3D435Cu;
            // 0x3d435c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4360u;
        goto label_3d4360;
    }
    ctx->pc = 0x3D4358u;
    SET_GPR_U32(ctx, 31, 0x3D4360u);
    ctx->pc = 0x3D435Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4358u;
            // 0x3d435c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4360u; }
        if (ctx->pc != 0x3D4360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4360u; }
        if (ctx->pc != 0x3D4360u) { return; }
    }
    ctx->pc = 0x3D4360u;
label_3d4360:
    // 0x3d4360: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3d4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3d4364:
    // 0x3d4364: 0xc075318  jal         func_1D4C60
label_3d4368:
    if (ctx->pc == 0x3D4368u) {
        ctx->pc = 0x3D4368u;
            // 0x3d4368: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->pc = 0x3D436Cu;
        goto label_3d436c;
    }
    ctx->pc = 0x3D4364u;
    SET_GPR_U32(ctx, 31, 0x3D436Cu);
    ctx->pc = 0x3D4368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4364u;
            // 0x3d4368: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D436Cu; }
        if (ctx->pc != 0x3D436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D436Cu; }
        if (ctx->pc != 0x3D436Cu) { return; }
    }
    ctx->pc = 0x3D436Cu;
label_3d436c:
    // 0x3d436c: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x3d436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_3d4370:
    // 0x3d4370: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3d4370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3d4374:
    // 0x3d4374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d4374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4378:
    // 0x3d4378: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3d4378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3d437c:
    // 0x3d437c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3d437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3d4380:
    // 0x3d4380: 0xc0c6250  jal         func_318940
label_3d4384:
    if (ctx->pc == 0x3D4384u) {
        ctx->pc = 0x3D4384u;
            // 0x3d4384: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x3D4388u;
        goto label_3d4388;
    }
    ctx->pc = 0x3D4380u;
    SET_GPR_U32(ctx, 31, 0x3D4388u);
    ctx->pc = 0x3D4384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4380u;
            // 0x3d4384: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4388u; }
        if (ctx->pc != 0x3D4388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4388u; }
        if (ctx->pc != 0x3D4388u) { return; }
    }
    ctx->pc = 0x3D4388u;
label_3d4388:
    // 0x3d4388: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d4388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d438c:
    // 0x3d438c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3d438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3d4390:
    // 0x3d4390: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x3d4390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3d4394:
    // 0x3d4394: 0xc04cca0  jal         func_133280
label_3d4398:
    if (ctx->pc == 0x3D4398u) {
        ctx->pc = 0x3D4398u;
            // 0x3d4398: 0x24c69340  addiu       $a2, $a2, -0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939456));
        ctx->pc = 0x3D439Cu;
        goto label_3d439c;
    }
    ctx->pc = 0x3D4394u;
    SET_GPR_U32(ctx, 31, 0x3D439Cu);
    ctx->pc = 0x3D4398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4394u;
            // 0x3d4398: 0x24c69340  addiu       $a2, $a2, -0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D439Cu; }
        if (ctx->pc != 0x3D439Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D439Cu; }
        if (ctx->pc != 0x3D439Cu) { return; }
    }
    ctx->pc = 0x3D439Cu;
label_3d439c:
    // 0x3d439c: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3d439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3d43a0:
    // 0x3d43a0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3d43a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3d43a4:
    // 0x3d43a4: 0xc075378  jal         func_1D4DE0
label_3d43a8:
    if (ctx->pc == 0x3D43A8u) {
        ctx->pc = 0x3D43A8u;
            // 0x3d43a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D43ACu;
        goto label_3d43ac;
    }
    ctx->pc = 0x3D43A4u;
    SET_GPR_U32(ctx, 31, 0x3D43ACu);
    ctx->pc = 0x3D43A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D43A4u;
            // 0x3d43a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D43ACu; }
        if (ctx->pc != 0x3D43ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D43ACu; }
        if (ctx->pc != 0x3D43ACu) { return; }
    }
    ctx->pc = 0x3D43ACu;
label_3d43ac:
    // 0x3d43ac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d43acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d43b0:
    // 0x3d43b0: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x3d43b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_3d43b4:
    // 0x3d43b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3d43b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3d43b8:
    // 0x3d43b8: 0xc0c753c  jal         func_31D4F0
label_3d43bc:
    if (ctx->pc == 0x3D43BCu) {
        ctx->pc = 0x3D43BCu;
            // 0x3d43bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3D43C0u;
        goto label_3d43c0;
    }
    ctx->pc = 0x3D43B8u;
    SET_GPR_U32(ctx, 31, 0x3D43C0u);
    ctx->pc = 0x3D43BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D43B8u;
            // 0x3d43bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D43C0u; }
        if (ctx->pc != 0x3D43C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D43C0u; }
        if (ctx->pc != 0x3D43C0u) { return; }
    }
    ctx->pc = 0x3D43C0u;
label_3d43c0:
    // 0x3d43c0: 0x926700d5  lbu         $a3, 0xD5($s3)
    ctx->pc = 0x3d43c0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 213)));
label_3d43c4:
    // 0x3d43c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d43c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d43c8:
    // 0x3d43c8: 0x266500d4  addiu       $a1, $s3, 0xD4
    ctx->pc = 0x3d43c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 212));
label_3d43cc:
    // 0x3d43cc: 0xc0ba6a8  jal         func_2E9AA0
label_3d43d0:
    if (ctx->pc == 0x3D43D0u) {
        ctx->pc = 0x3D43D0u;
            // 0x3d43d0: 0x266600d0  addiu       $a2, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->pc = 0x3D43D4u;
        goto label_3d43d4;
    }
    ctx->pc = 0x3D43CCu;
    SET_GPR_U32(ctx, 31, 0x3D43D4u);
    ctx->pc = 0x3D43D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D43CCu;
            // 0x3d43d0: 0x266600d0  addiu       $a2, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9AA0u;
    if (runtime->hasFunction(0x2E9AA0u)) {
        auto targetFn = runtime->lookupFunction(0x2E9AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D43D4u; }
        if (ctx->pc != 0x3D43D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9AA0_0x2e9aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D43D4u; }
        if (ctx->pc != 0x3D43D4u) { return; }
    }
    ctx->pc = 0x3D43D4u;
label_3d43d4:
    // 0x3d43d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3d43d8:
    if (ctx->pc == 0x3D43D8u) {
        ctx->pc = 0x3D43D8u;
            // 0x3d43d8: 0xc62201b0  lwc1        $f2, 0x1B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3D43DCu;
        goto label_3d43dc;
    }
    ctx->pc = 0x3D43D4u;
    {
        const bool branch_taken_0x3d43d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d43d4) {
            ctx->pc = 0x3D43D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D43D4u;
            // 0x3d43d8: 0xc62201b0  lwc1        $f2, 0x1B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D43F4u;
            goto label_3d43f4;
        }
    }
    ctx->pc = 0x3D43DCu;
label_3d43dc:
    // 0x3d43dc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3d43dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d43e0:
    // 0x3d43e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d43e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d43e4:
    // 0x3d43e4: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x3d43e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_3d43e8:
    // 0x3d43e8: 0x320f809  jalr        $t9
label_3d43ec:
    if (ctx->pc == 0x3D43ECu) {
        ctx->pc = 0x3D43ECu;
            // 0x3d43ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D43F0u;
        goto label_3d43f0;
    }
    ctx->pc = 0x3D43E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D43F0u);
        ctx->pc = 0x3D43ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D43E8u;
            // 0x3d43ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D43F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D43F0u; }
            if (ctx->pc != 0x3D43F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3D43F0u;
label_3d43f0:
    // 0x3d43f0: 0xc62201b0  lwc1        $f2, 0x1B0($s1)
    ctx->pc = 0x3d43f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d43f4:
    // 0x3d43f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d43f8:
    // 0x3d43f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d43f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d43fc:
    // 0x3d43fc: 0x0  nop
    ctx->pc = 0x3d43fcu;
    // NOP
label_3d4400:
    // 0x3d4400: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3d4400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d4404:
    // 0x3d4404: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_3d4408:
    if (ctx->pc == 0x3D4408u) {
        ctx->pc = 0x3D4408u;
            // 0x3d4408: 0x263401b0  addiu       $s4, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->pc = 0x3D440Cu;
        goto label_3d440c;
    }
    ctx->pc = 0x3D4404u;
    {
        const bool branch_taken_0x3d4404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D4408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4404u;
            // 0x3d4408: 0x263401b0  addiu       $s4, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4404) {
            ctx->pc = 0x3D4430u;
            goto label_3d4430;
        }
    }
    ctx->pc = 0x3D440Cu;
label_3d440c:
    // 0x3d440c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3d440cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3d4410:
    // 0x3d4410: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3d4410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d4414:
    // 0x3d4414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d4414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d4418:
    // 0x3d4418: 0x0  nop
    ctx->pc = 0x3d4418u;
    // NOP
label_3d441c:
    // 0x3d441c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3d441cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3d4420:
    // 0x3d4420: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d4420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d4424:
    // 0x3d4424: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3d4428:
    if (ctx->pc == 0x3D4428u) {
        ctx->pc = 0x3D4428u;
            // 0x3d4428: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->pc = 0x3D442Cu;
        goto label_3d442c;
    }
    ctx->pc = 0x3D4424u;
    {
        const bool branch_taken_0x3d4424 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D4428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4424u;
            // 0x3d4428: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4424) {
            ctx->pc = 0x3D4430u;
            goto label_3d4430;
        }
    }
    ctx->pc = 0x3D442Cu;
label_3d442c:
    // 0x3d442c: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x3d442cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_3d4430:
    // 0x3d4430: 0xc0754b4  jal         func_1D52D0
label_3d4434:
    if (ctx->pc == 0x3D4434u) {
        ctx->pc = 0x3D4434u;
            // 0x3d4434: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x3D4438u;
        goto label_3d4438;
    }
    ctx->pc = 0x3D4430u;
    SET_GPR_U32(ctx, 31, 0x3D4438u);
    ctx->pc = 0x3D4434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4430u;
            // 0x3d4434: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4438u; }
        if (ctx->pc != 0x3D4438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4438u; }
        if (ctx->pc != 0x3D4438u) { return; }
    }
    ctx->pc = 0x3D4438u;
label_3d4438:
    // 0x3d4438: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x3d4438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3d443c:
    // 0x3d443c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d4440:
    // 0x3d4440: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x3d4440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_3d4444:
    // 0x3d4444: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3d4444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3d4448:
    // 0x3d4448: 0x54600021  bnel        $v1, $zero, . + 4 + (0x21 << 2)
label_3d444c:
    if (ctx->pc == 0x3D444Cu) {
        ctx->pc = 0x3D444Cu;
            // 0x3d444c: 0x3c033f6d  lui         $v1, 0x3F6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16237 << 16));
        ctx->pc = 0x3D4450u;
        goto label_3d4450;
    }
    ctx->pc = 0x3D4448u;
    {
        const bool branch_taken_0x3d4448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4448) {
            ctx->pc = 0x3D444Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4448u;
            // 0x3d444c: 0x3c033f6d  lui         $v1, 0x3F6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16237 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D44D0u;
            goto label_3d44d0;
        }
    }
    ctx->pc = 0x3D4450u;
label_3d4450:
    // 0x3d4450: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x3d4450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3d4454:
    // 0x3d4454: 0xc04cc1c  jal         func_133070
label_3d4458:
    if (ctx->pc == 0x3D4458u) {
        ctx->pc = 0x3D4458u;
            // 0x3d4458: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->pc = 0x3D445Cu;
        goto label_3d445c;
    }
    ctx->pc = 0x3D4454u;
    SET_GPR_U32(ctx, 31, 0x3D445Cu);
    ctx->pc = 0x3D4458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4454u;
            // 0x3d4458: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D445Cu; }
        if (ctx->pc != 0x3D445Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D445Cu; }
        if (ctx->pc != 0x3D445Cu) { return; }
    }
    ctx->pc = 0x3D445Cu;
label_3d445c:
    // 0x3d445c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3d445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3d4460:
    // 0x3d4460: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x3d4460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d4464:
    // 0x3d4464: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_3d4468:
    if (ctx->pc == 0x3D4468u) {
        ctx->pc = 0x3D4468u;
            // 0x3d4468: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x3D446Cu;
        goto label_3d446c;
    }
    ctx->pc = 0x3D4464u;
    {
        const bool branch_taken_0x3d4464 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4464) {
            ctx->pc = 0x3D4468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4464u;
            // 0x3d4468: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D4474u;
            goto label_3d4474;
        }
    }
    ctx->pc = 0x3D446Cu;
label_3d446c:
    // 0x3d446c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d4470:
    // 0x3d4470: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3d4470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3d4474:
    // 0x3d4474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4478:
    // 0x3d4478: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d4478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d447c:
    // 0x3d447c: 0x24429330  addiu       $v0, $v0, -0x6CD0
    ctx->pc = 0x3d447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939440));
label_3d4480:
    // 0x3d4480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d4480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d4484:
    // 0x3d4484: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3d4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d4488:
    // 0x3d4488: 0xc0eea40  jal         func_3BA900
label_3d448c:
    if (ctx->pc == 0x3D448Cu) {
        ctx->pc = 0x3D448Cu;
            // 0x3d448c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3D4490u;
        goto label_3d4490;
    }
    ctx->pc = 0x3D4488u;
    SET_GPR_U32(ctx, 31, 0x3D4490u);
    ctx->pc = 0x3D448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4488u;
            // 0x3d448c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA900u;
    if (runtime->hasFunction(0x3BA900u)) {
        auto targetFn = runtime->lookupFunction(0x3BA900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4490u; }
        if (ctx->pc != 0x3D4490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA900_0x3ba900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4490u; }
        if (ctx->pc != 0x3D4490u) { return; }
    }
    ctx->pc = 0x3D4490u;
label_3d4490:
    // 0x3d4490: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d4490u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d4494:
    // 0x3d4494: 0xc0754b4  jal         func_1D52D0
label_3d4498:
    if (ctx->pc == 0x3D4498u) {
        ctx->pc = 0x3D4498u;
            // 0x3d4498: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x3D449Cu;
        goto label_3d449c;
    }
    ctx->pc = 0x3D4494u;
    SET_GPR_U32(ctx, 31, 0x3D449Cu);
    ctx->pc = 0x3D4498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4494u;
            // 0x3d4498: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D449Cu; }
        if (ctx->pc != 0x3D449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D449Cu; }
        if (ctx->pc != 0x3D449Cu) { return; }
    }
    ctx->pc = 0x3D449Cu;
label_3d449c:
    // 0x3d449c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x3d449cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3d44a0:
    // 0x3d44a0: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3d44a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_3d44a4:
    // 0x3d44a4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3d44a8:
    if (ctx->pc == 0x3D44A8u) {
        ctx->pc = 0x3D44ACu;
        goto label_3d44ac;
    }
    ctx->pc = 0x3D44A4u;
    {
        const bool branch_taken_0x3d44a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d44a4) {
            ctx->pc = 0x3D44CCu;
            goto label_3d44cc;
        }
    }
    ctx->pc = 0x3D44ACu;
label_3d44ac:
    // 0x3d44ac: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x3d44acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d44b0:
    // 0x3d44b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d44b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d44b4:
    // 0x3d44b4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d44b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3d44b8:
    // 0x3d44b8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x3d44b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_3d44bc:
    // 0x3d44bc: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x3d44bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d44c0:
    // 0x3d44c0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d44c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3d44c4:
    // 0x3d44c4: 0xc0eea24  jal         func_3BA890
label_3d44c8:
    if (ctx->pc == 0x3D44C8u) {
        ctx->pc = 0x3D44C8u;
            // 0x3d44c8: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->pc = 0x3D44CCu;
        goto label_3d44cc;
    }
    ctx->pc = 0x3D44C4u;
    SET_GPR_U32(ctx, 31, 0x3D44CCu);
    ctx->pc = 0x3D44C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D44C4u;
            // 0x3d44c8: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D44CCu; }
        if (ctx->pc != 0x3D44CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D44CCu; }
        if (ctx->pc != 0x3D44CCu) { return; }
    }
    ctx->pc = 0x3D44CCu;
label_3d44cc:
    // 0x3d44cc: 0x3c033f6d  lui         $v1, 0x3F6D
    ctx->pc = 0x3d44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16237 << 16));
label_3d44d0:
    // 0x3d44d0: 0x3464097b  ori         $a0, $v1, 0x97B
    ctx->pc = 0x3d44d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3d44d4:
    // 0x3d44d4: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x3d44d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d44d8:
    // 0x3d44d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d44dc:
    // 0x3d44dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d44dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d44e0:
    // 0x3d44e0: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x3d44e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d44e4:
    // 0x3d44e4: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x3d44e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3d44e8:
    // 0x3d44e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d44e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d44ec:
    // 0x3d44ec: 0x0  nop
    ctx->pc = 0x3d44ecu;
    // NOP
label_3d44f0:
    // 0x3d44f0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3d44f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3d44f4:
    // 0x3d44f4: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x3d44f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_3d44f8:
    // 0x3d44f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d44f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d44fc:
    // 0x3d44fc: 0x0  nop
    ctx->pc = 0x3d44fcu;
    // NOP
label_3d4500:
    // 0x3d4500: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d4500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d4504:
    // 0x3d4504: 0x450100cf  bc1t        . + 4 + (0xCF << 2)
label_3d4508:
    if (ctx->pc == 0x3D4508u) {
        ctx->pc = 0x3D4508u;
            // 0x3d4508: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->pc = 0x3D450Cu;
        goto label_3d450c;
    }
    ctx->pc = 0x3D4504u;
    {
        const bool branch_taken_0x3d4504 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D4508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4504u;
            // 0x3d4508: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4504) {
            ctx->pc = 0x3D4844u;
            goto label_3d4844;
        }
    }
    ctx->pc = 0x3D450Cu;
label_3d450c:
    // 0x3d450c: 0x8e540d74  lw          $s4, 0xD74($s2)
    ctx->pc = 0x3d450cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3d4510:
    // 0x3d4510: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3d4510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3d4514:
    // 0x3d4514: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x3d4514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3d4518:
    // 0x3d4518: 0x8e8202c8  lw          $v0, 0x2C8($s4)
    ctx->pc = 0x3d4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 712)));
label_3d451c:
    // 0x3d451c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3d451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3d4520:
    // 0x3d4520: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x3d4520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3d4524:
    // 0x3d4524: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3d4524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3d4528:
    // 0x3d4528: 0xc0a545c  jal         func_295170
label_3d452c:
    if (ctx->pc == 0x3D452Cu) {
        ctx->pc = 0x3D452Cu;
            // 0x3d452c: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3D4530u;
        goto label_3d4530;
    }
    ctx->pc = 0x3D4528u;
    SET_GPR_U32(ctx, 31, 0x3D4530u);
    ctx->pc = 0x3D452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4528u;
            // 0x3d452c: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4530u; }
        if (ctx->pc != 0x3D4530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4530u; }
        if (ctx->pc != 0x3D4530u) { return; }
    }
    ctx->pc = 0x3D4530u;
label_3d4530:
    // 0x3d4530: 0xac55002c  sw          $s5, 0x2C($v0)
    ctx->pc = 0x3d4530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 21));
label_3d4534:
    // 0x3d4534: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d4534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d4538:
    // 0x3d4538: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x3d4538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3d453c:
    // 0x3d453c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d4540:
    // 0x3d4540: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d4540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d4544:
    // 0x3d4544: 0xc08bf20  jal         func_22FC80
label_3d4548:
    if (ctx->pc == 0x3D4548u) {
        ctx->pc = 0x3D4548u;
            // 0x3d4548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D454Cu;
        goto label_3d454c;
    }
    ctx->pc = 0x3D4544u;
    SET_GPR_U32(ctx, 31, 0x3D454Cu);
    ctx->pc = 0x3D4548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4544u;
            // 0x3d4548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D454Cu; }
        if (ctx->pc != 0x3D454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D454Cu; }
        if (ctx->pc != 0x3D454Cu) { return; }
    }
    ctx->pc = 0x3D454Cu;
label_3d454c:
    // 0x3d454c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x3d454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3d4550:
    // 0x3d4550: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d4550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d4554:
    // 0x3d4554: 0xae430db8  sw          $v1, 0xDB8($s2)
    ctx->pc = 0x3d4554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 3));
label_3d4558:
    // 0x3d4558: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d4558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d455c:
    // 0x3d455c: 0x8e6700a0  lw          $a3, 0xA0($s3)
    ctx->pc = 0x3d455cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3d4560:
    // 0x3d4560: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x3d4560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_3d4564:
    // 0x3d4564: 0x264507e0  addiu       $a1, $s2, 0x7E0
    ctx->pc = 0x3d4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
label_3d4568:
    // 0x3d4568: 0x24c69350  addiu       $a2, $a2, -0x6CB0
    ctx->pc = 0x3d4568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939472));
label_3d456c:
    // 0x3d456c: 0x8ce30060  lw          $v1, 0x60($a3)
    ctx->pc = 0x3d456cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
label_3d4570:
    // 0x3d4570: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d4570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d4574:
    // 0x3d4574: 0xc04cca0  jal         func_133280
label_3d4578:
    if (ctx->pc == 0x3D4578u) {
        ctx->pc = 0x3D4578u;
            // 0x3d4578: 0xace20060  sw          $v0, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x3D457Cu;
        goto label_3d457c;
    }
    ctx->pc = 0x3D4574u;
    SET_GPR_U32(ctx, 31, 0x3D457Cu);
    ctx->pc = 0x3D4578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4574u;
            // 0x3d4578: 0xace20060  sw          $v0, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D457Cu; }
        if (ctx->pc != 0x3D457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D457Cu; }
        if (ctx->pc != 0x3D457Cu) { return; }
    }
    ctx->pc = 0x3D457Cu;
label_3d457c:
    // 0x3d457c: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3d457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3d4580:
    // 0x3d4580: 0xc075318  jal         func_1D4C60
label_3d4584:
    if (ctx->pc == 0x3D4584u) {
        ctx->pc = 0x3D4584u;
            // 0x3d4584: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->pc = 0x3D4588u;
        goto label_3d4588;
    }
    ctx->pc = 0x3D4580u;
    SET_GPR_U32(ctx, 31, 0x3D4588u);
    ctx->pc = 0x3D4584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4580u;
            // 0x3d4584: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4588u; }
        if (ctx->pc != 0x3D4588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4588u; }
        if (ctx->pc != 0x3D4588u) { return; }
    }
    ctx->pc = 0x3D4588u;
label_3d4588:
    // 0x3d4588: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x3d4588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3d458c:
    // 0x3d458c: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x3d458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
label_3d4590:
    // 0x3d4590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d4590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4594:
    // 0x3d4594: 0xc0c6250  jal         func_318940
label_3d4598:
    if (ctx->pc == 0x3D4598u) {
        ctx->pc = 0x3D4598u;
            // 0x3d4598: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D459Cu;
        goto label_3d459c;
    }
    ctx->pc = 0x3D4594u;
    SET_GPR_U32(ctx, 31, 0x3D459Cu);
    ctx->pc = 0x3D4598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4594u;
            // 0x3d4598: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D459Cu; }
        if (ctx->pc != 0x3D459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D459Cu; }
        if (ctx->pc != 0x3D459Cu) { return; }
    }
    ctx->pc = 0x3D459Cu;
label_3d459c:
    // 0x3d459c: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x3d459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_3d45a0:
    // 0x3d45a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3d45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3d45a4:
    // 0x3d45a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d45a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d45a8:
    // 0x3d45a8: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3d45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3d45ac:
    // 0x3d45ac: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3d45acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3d45b0:
    // 0x3d45b0: 0xc0c6250  jal         func_318940
label_3d45b4:
    if (ctx->pc == 0x3D45B4u) {
        ctx->pc = 0x3D45B4u;
            // 0x3d45b4: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x3D45B8u;
        goto label_3d45b8;
    }
    ctx->pc = 0x3D45B0u;
    SET_GPR_U32(ctx, 31, 0x3D45B8u);
    ctx->pc = 0x3D45B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D45B0u;
            // 0x3d45b4: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D45B8u; }
        if (ctx->pc != 0x3D45B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D45B8u; }
        if (ctx->pc != 0x3D45B8u) { return; }
    }
    ctx->pc = 0x3D45B8u;
label_3d45b8:
    // 0x3d45b8: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x3d45b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3d45bc:
    // 0x3d45bc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3d45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3d45c0:
    // 0x3d45c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3d45c4:
    if (ctx->pc == 0x3D45C4u) {
        ctx->pc = 0x3D45C4u;
            // 0x3d45c4: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->pc = 0x3D45C8u;
        goto label_3d45c8;
    }
    ctx->pc = 0x3D45C0u;
    {
        const bool branch_taken_0x3d45c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d45c0) {
            ctx->pc = 0x3D45C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D45C0u;
            // 0x3d45c4: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D45E8u;
            goto label_3d45e8;
        }
    }
    ctx->pc = 0x3D45C8u;
label_3d45c8:
    // 0x3d45c8: 0x8e420a5c  lw          $v0, 0xA5C($s2)
    ctx->pc = 0x3d45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2652)));
label_3d45cc:
    // 0x3d45cc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d45ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d45d0:
    // 0x3d45d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d45d4:
    // 0x3d45d4: 0x24c69340  addiu       $a2, $a2, -0x6CC0
    ctx->pc = 0x3d45d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939456));
label_3d45d8:
    // 0x3d45d8: 0xc04cca0  jal         func_133280
label_3d45dc:
    if (ctx->pc == 0x3D45DCu) {
        ctx->pc = 0x3D45DCu;
            // 0x3d45dc: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x3D45E0u;
        goto label_3d45e0;
    }
    ctx->pc = 0x3D45D8u;
    SET_GPR_U32(ctx, 31, 0x3D45E0u);
    ctx->pc = 0x3D45DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D45D8u;
            // 0x3d45dc: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D45E0u; }
        if (ctx->pc != 0x3D45E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D45E0u; }
        if (ctx->pc != 0x3D45E0u) { return; }
    }
    ctx->pc = 0x3D45E0u;
label_3d45e0:
    // 0x3d45e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d45e4:
    if (ctx->pc == 0x3D45E4u) {
        ctx->pc = 0x3D45E8u;
        goto label_3d45e8;
    }
    ctx->pc = 0x3D45E0u;
    {
        const bool branch_taken_0x3d45e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d45e0) {
            ctx->pc = 0x3D4604u;
            goto label_3d4604;
        }
    }
    ctx->pc = 0x3D45E8u;
label_3d45e8:
    // 0x3d45e8: 0xc04f278  jal         func_13C9E0
label_3d45ec:
    if (ctx->pc == 0x3D45ECu) {
        ctx->pc = 0x3D45ECu;
            // 0x3d45ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D45F0u;
        goto label_3d45f0;
    }
    ctx->pc = 0x3D45E8u;
    SET_GPR_U32(ctx, 31, 0x3D45F0u);
    ctx->pc = 0x3D45ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D45E8u;
            // 0x3d45ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D45F0u; }
        if (ctx->pc != 0x3D45F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D45F0u; }
        if (ctx->pc != 0x3D45F0u) { return; }
    }
    ctx->pc = 0x3D45F0u;
label_3d45f0:
    // 0x3d45f0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d45f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d45f4:
    // 0x3d45f4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d45f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d45f8:
    // 0x3d45f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3d45f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d45fc:
    // 0x3d45fc: 0xc04cca0  jal         func_133280
label_3d4600:
    if (ctx->pc == 0x3D4600u) {
        ctx->pc = 0x3D4600u;
            // 0x3d4600: 0x24c69340  addiu       $a2, $a2, -0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939456));
        ctx->pc = 0x3D4604u;
        goto label_3d4604;
    }
    ctx->pc = 0x3D45FCu;
    SET_GPR_U32(ctx, 31, 0x3D4604u);
    ctx->pc = 0x3D4600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D45FCu;
            // 0x3d4600: 0x24c69340  addiu       $a2, $a2, -0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4604u; }
        if (ctx->pc != 0x3D4604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4604u; }
        if (ctx->pc != 0x3D4604u) { return; }
    }
    ctx->pc = 0x3D4604u;
label_3d4604:
    // 0x3d4604: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d4604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d4608:
    // 0x3d4608: 0x96430c7e  lhu         $v1, 0xC7E($s2)
    ctx->pc = 0x3d4608u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3198)));
label_3d460c:
    // 0x3d460c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3d460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3d4610:
    // 0x3d4610: 0x26450c6c  addiu       $a1, $s2, 0xC6C
    ctx->pc = 0x3d4610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3180));
label_3d4614:
    // 0x3d4614: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3d4614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3d4618:
    // 0x3d4618: 0x8c55012c  lw          $s5, 0x12C($v0)
    ctx->pc = 0x3d4618u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_3d461c:
    // 0x3d461c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3d461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3d4620:
    // 0x3d4620: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d4620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d4624:
    // 0x3d4624: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3d4624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d4628:
    // 0x3d4628: 0xc0c5f58  jal         func_317D60
label_3d462c:
    if (ctx->pc == 0x3D462Cu) {
        ctx->pc = 0x3D462Cu;
            // 0x3d462c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3D4630u;
        goto label_3d4630;
    }
    ctx->pc = 0x3D4628u;
    SET_GPR_U32(ctx, 31, 0x3D4630u);
    ctx->pc = 0x3D462Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4628u;
            // 0x3d462c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317D60u;
    if (runtime->hasFunction(0x317D60u)) {
        auto targetFn = runtime->lookupFunction(0x317D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4630u; }
        if (ctx->pc != 0x3D4630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317D60_0x317d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4630u; }
        if (ctx->pc != 0x3D4630u) { return; }
    }
    ctx->pc = 0x3D4630u;
label_3d4630:
    // 0x3d4630: 0xc6410c84  lwc1        $f1, 0xC84($s2)
    ctx->pc = 0x3d4630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d4634:
    // 0x3d4634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d4634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d4638:
    // 0x3d4638: 0x0  nop
    ctx->pc = 0x3d4638u;
    // NOP
label_3d463c:
    // 0x3d463c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d463cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d4640:
    // 0x3d4640: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_3d4644:
    if (ctx->pc == 0x3D4644u) {
        ctx->pc = 0x3D4644u;
            // 0x3d4644: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x3D4648u;
        goto label_3d4648;
    }
    ctx->pc = 0x3D4640u;
    {
        const bool branch_taken_0x3d4640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d4640) {
            ctx->pc = 0x3D4644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4640u;
            // 0x3d4644: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D4678u;
            goto label_3d4678;
        }
    }
    ctx->pc = 0x3D4648u;
label_3d4648:
    // 0x3d4648: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x3d4648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3d464c:
    // 0x3d464c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d4650:
    // 0x3d4650: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x3d4650u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_3d4654:
    // 0x3d4654: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x3d4654u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_3d4658:
    // 0x3d4658: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3d4658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3d465c:
    // 0x3d465c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d465cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d4660:
    // 0x3d4660: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d4660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d4664:
    // 0x3d4664: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x3d4664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3d4668:
    // 0x3d4668: 0xc04cc90  jal         func_133240
label_3d466c:
    if (ctx->pc == 0x3D466Cu) {
        ctx->pc = 0x3D466Cu;
            // 0x3d466c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x3D4670u;
        goto label_3d4670;
    }
    ctx->pc = 0x3D4668u;
    SET_GPR_U32(ctx, 31, 0x3D4670u);
    ctx->pc = 0x3D466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4668u;
            // 0x3d466c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4670u; }
        if (ctx->pc != 0x3D4670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4670u; }
        if (ctx->pc != 0x3D4670u) { return; }
    }
    ctx->pc = 0x3D4670u;
label_3d4670:
    // 0x3d4670: 0x1000000b  b           . + 4 + (0xB << 2)
label_3d4674:
    if (ctx->pc == 0x3D4674u) {
        ctx->pc = 0x3D4674u;
            // 0x3d4674: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D4678u;
        goto label_3d4678;
    }
    ctx->pc = 0x3D4670u;
    {
        const bool branch_taken_0x3d4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4670u;
            // 0x3d4674: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4670) {
            ctx->pc = 0x3D46A0u;
            goto label_3d46a0;
        }
    }
    ctx->pc = 0x3D4678u;
label_3d4678:
    // 0x3d4678: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d4678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d467c:
    // 0x3d467c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x3d467cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_3d4680:
    // 0x3d4680: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x3d4680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_3d4684:
    // 0x3d4684: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3d4684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3d4688:
    // 0x3d4688: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d4688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d468c:
    // 0x3d468c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d468cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d4690:
    // 0x3d4690: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x3d4690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3d4694:
    // 0x3d4694: 0xc04cc90  jal         func_133240
label_3d4698:
    if (ctx->pc == 0x3D4698u) {
        ctx->pc = 0x3D4698u;
            // 0x3d4698: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x3D469Cu;
        goto label_3d469c;
    }
    ctx->pc = 0x3D4694u;
    SET_GPR_U32(ctx, 31, 0x3D469Cu);
    ctx->pc = 0x3D4698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4694u;
            // 0x3d4698: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D469Cu; }
        if (ctx->pc != 0x3D469Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D469Cu; }
        if (ctx->pc != 0x3D469Cu) { return; }
    }
    ctx->pc = 0x3D469Cu;
label_3d469c:
    // 0x3d469c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d46a0:
    // 0x3d46a0: 0xc04cc44  jal         func_133110
label_3d46a4:
    if (ctx->pc == 0x3D46A4u) {
        ctx->pc = 0x3D46A4u;
            // 0x3d46a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D46A8u;
        goto label_3d46a8;
    }
    ctx->pc = 0x3D46A0u;
    SET_GPR_U32(ctx, 31, 0x3D46A8u);
    ctx->pc = 0x3D46A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D46A0u;
            // 0x3d46a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D46A8u; }
        if (ctx->pc != 0x3D46A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D46A8u; }
        if (ctx->pc != 0x3D46A8u) { return; }
    }
    ctx->pc = 0x3D46A8u;
label_3d46a8:
    // 0x3d46a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d46a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d46ac:
    // 0x3d46ac: 0xc04cc08  jal         func_133020
label_3d46b0:
    if (ctx->pc == 0x3D46B0u) {
        ctx->pc = 0x3D46B0u;
            // 0x3d46b0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3D46B4u;
        goto label_3d46b4;
    }
    ctx->pc = 0x3D46ACu;
    SET_GPR_U32(ctx, 31, 0x3D46B4u);
    ctx->pc = 0x3D46B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D46ACu;
            // 0x3d46b0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D46B4u; }
        if (ctx->pc != 0x3D46B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D46B4u; }
        if (ctx->pc != 0x3D46B4u) { return; }
    }
    ctx->pc = 0x3D46B4u;
label_3d46b4:
    // 0x3d46b4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x3d46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_3d46b8:
    // 0x3d46b8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3d46b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_3d46bc:
    // 0x3d46bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d46bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d46c0:
    // 0x3d46c0: 0x0  nop
    ctx->pc = 0x3d46c0u;
    // NOP
label_3d46c4:
    // 0x3d46c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d46c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d46c8:
    // 0x3d46c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_3d46cc:
    if (ctx->pc == 0x3D46CCu) {
        ctx->pc = 0x3D46D0u;
        goto label_3d46d0;
    }
    ctx->pc = 0x3D46C8u;
    {
        const bool branch_taken_0x3d46c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d46c8) {
            ctx->pc = 0x3D46E4u;
            goto label_3d46e4;
        }
    }
    ctx->pc = 0x3D46D0u;
label_3d46d0:
    // 0x3d46d0: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x3d46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_3d46d4:
    // 0x3d46d4: 0x24026996  addiu       $v0, $zero, 0x6996
    ctx->pc = 0x3d46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27030));
label_3d46d8:
    // 0x3d46d8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3d46d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3d46dc:
    // 0x3d46dc: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_3d46e0:
    if (ctx->pc == 0x3D46E0u) {
        ctx->pc = 0x3D46E0u;
            // 0x3d46e0: 0x26440560  addiu       $a0, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x3D46E4u;
        goto label_3d46e4;
    }
    ctx->pc = 0x3D46DCu;
    {
        const bool branch_taken_0x3d46dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d46dc) {
            ctx->pc = 0x3D46E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D46DCu;
            // 0x3d46e0: 0x26440560  addiu       $a0, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D46FCu;
            goto label_3d46fc;
        }
    }
    ctx->pc = 0x3D46E4u;
label_3d46e4:
    // 0x3d46e4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d46e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d46e8:
    // 0x3d46e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d46ec:
    // 0x3d46ec: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x3d46ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3d46f0:
    // 0x3d46f0: 0xc04cca0  jal         func_133280
label_3d46f4:
    if (ctx->pc == 0x3D46F4u) {
        ctx->pc = 0x3D46F4u;
            // 0x3d46f4: 0x24c69340  addiu       $a2, $a2, -0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939456));
        ctx->pc = 0x3D46F8u;
        goto label_3d46f8;
    }
    ctx->pc = 0x3D46F0u;
    SET_GPR_U32(ctx, 31, 0x3D46F8u);
    ctx->pc = 0x3D46F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D46F0u;
            // 0x3d46f4: 0x24c69340  addiu       $a2, $a2, -0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D46F8u; }
        if (ctx->pc != 0x3D46F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D46F8u; }
        if (ctx->pc != 0x3D46F8u) { return; }
    }
    ctx->pc = 0x3D46F8u;
label_3d46f8:
    // 0x3d46f8: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3d46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3d46fc:
    // 0x3d46fc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3d46fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d4700:
    // 0x3d4700: 0xc075378  jal         func_1D4DE0
label_3d4704:
    if (ctx->pc == 0x3D4704u) {
        ctx->pc = 0x3D4704u;
            // 0x3d4704: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4708u;
        goto label_3d4708;
    }
    ctx->pc = 0x3D4700u;
    SET_GPR_U32(ctx, 31, 0x3D4708u);
    ctx->pc = 0x3D4704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4700u;
            // 0x3d4704: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4708u; }
        if (ctx->pc != 0x3D4708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4708u; }
        if (ctx->pc != 0x3D4708u) { return; }
    }
    ctx->pc = 0x3D4708u;
label_3d4708:
    // 0x3d4708: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d4708u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d470c:
    // 0x3d470c: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x3d470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_3d4710:
    // 0x3d4710: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d4714:
    // 0x3d4714: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d4714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d4718:
    // 0x3d4718: 0xc0c753c  jal         func_31D4F0
label_3d471c:
    if (ctx->pc == 0x3D471Cu) {
        ctx->pc = 0x3D471Cu;
            // 0x3d471c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3D4720u;
        goto label_3d4720;
    }
    ctx->pc = 0x3D4718u;
    SET_GPR_U32(ctx, 31, 0x3D4720u);
    ctx->pc = 0x3D471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4718u;
            // 0x3d471c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4720u; }
        if (ctx->pc != 0x3D4720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4720u; }
        if (ctx->pc != 0x3D4720u) { return; }
    }
    ctx->pc = 0x3D4720u;
label_3d4720:
    // 0x3d4720: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d4724:
    // 0x3d4724: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x3d4724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_3d4728:
    // 0x3d4728: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d4728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d472c:
    // 0x3d472c: 0xc0c753c  jal         func_31D4F0
label_3d4730:
    if (ctx->pc == 0x3D4730u) {
        ctx->pc = 0x3D4730u;
            // 0x3d4730: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3D4734u;
        goto label_3d4734;
    }
    ctx->pc = 0x3D472Cu;
    SET_GPR_U32(ctx, 31, 0x3D4734u);
    ctx->pc = 0x3D4730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D472Cu;
            // 0x3d4730: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4734u; }
        if (ctx->pc != 0x3D4734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4734u; }
        if (ctx->pc != 0x3D4734u) { return; }
    }
    ctx->pc = 0x3D4734u;
label_3d4734:
    // 0x3d4734: 0x8e530550  lw          $s3, 0x550($s2)
    ctx->pc = 0x3d4734u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_3d4738:
    // 0x3d4738: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3d4738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3d473c:
    // 0x3d473c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d473cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d4740:
    // 0x3d4740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d4740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4744:
    // 0x3d4744: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3d4744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d4748:
    // 0x3d4748: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x3d4748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3d474c:
    // 0x3d474c: 0x8262010c  lb          $v0, 0x10C($s3)
    ctx->pc = 0x3d474cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_3d4750:
    // 0x3d4750: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d4750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4754:
    // 0x3d4754: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d4754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d4758:
    // 0x3d4758: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d4758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d475c:
    // 0x3d475c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3d475cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3d4760:
    // 0x3d4760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d4760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d4764:
    // 0x3d4764: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d4764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3d4768:
    // 0x3d4768: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3d4768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3d476c:
    // 0x3d476c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3d476cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3d4770:
    // 0x3d4770: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x3d4770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3d4774:
    // 0x3d4774: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x3d4774u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_3d4778:
    // 0x3d4778: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3d4778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3d477c:
    // 0x3d477c: 0x320f809  jalr        $t9
label_3d4780:
    if (ctx->pc == 0x3D4780u) {
        ctx->pc = 0x3D4780u;
            // 0x3d4780: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3D4784u;
        goto label_3d4784;
    }
    ctx->pc = 0x3D477Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D4784u);
        ctx->pc = 0x3D4780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D477Cu;
            // 0x3d4780: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D4784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D4784u; }
            if (ctx->pc != 0x3D4784u) { return; }
        }
        }
    }
    ctx->pc = 0x3D4784u;
label_3d4784:
    // 0x3d4784: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x3d4784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3d4788:
    // 0x3d4788: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d4788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d478c:
    // 0x3d478c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d4790:
    // 0x3d4790: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3d4790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3d4794:
    // 0x3d4794: 0x320f809  jalr        $t9
label_3d4798:
    if (ctx->pc == 0x3D4798u) {
        ctx->pc = 0x3D4798u;
            // 0x3d4798: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D479Cu;
        goto label_3d479c;
    }
    ctx->pc = 0x3D4794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D479Cu);
        ctx->pc = 0x3D4798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4794u;
            // 0x3d4798: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D479Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D479Cu; }
            if (ctx->pc != 0x3D479Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D479Cu;
label_3d479c:
    // 0x3d479c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3d479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3d47a0:
    // 0x3d47a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d47a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d47a4:
    // 0x3d47a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d47a8:
    // 0x3d47a8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3d47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_3d47ac:
    // 0x3d47ac: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x3d47acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d47b0:
    // 0x3d47b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d47b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d47b4:
    // 0x3d47b4: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_3d47b8:
    if (ctx->pc == 0x3D47B8u) {
        ctx->pc = 0x3D47BCu;
        goto label_3d47bc;
    }
    ctx->pc = 0x3D47B4u;
    {
        const bool branch_taken_0x3d47b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d47b4) {
            ctx->pc = 0x3D47FCu;
            goto label_3d47fc;
        }
    }
    ctx->pc = 0x3D47BCu;
label_3d47bc:
    // 0x3d47bc: 0xc0754b4  jal         func_1D52D0
label_3d47c0:
    if (ctx->pc == 0x3D47C0u) {
        ctx->pc = 0x3D47C0u;
            // 0x3d47c0: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x3D47C4u;
        goto label_3d47c4;
    }
    ctx->pc = 0x3D47BCu;
    SET_GPR_U32(ctx, 31, 0x3D47C4u);
    ctx->pc = 0x3D47C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D47BCu;
            // 0x3d47c0: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D47C4u; }
        if (ctx->pc != 0x3D47C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D47C4u; }
        if (ctx->pc != 0x3D47C4u) { return; }
    }
    ctx->pc = 0x3D47C4u;
label_3d47c4:
    // 0x3d47c4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3d47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3d47c8:
    // 0x3d47c8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3d47c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3d47cc:
    // 0x3d47cc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3d47d0:
    if (ctx->pc == 0x3D47D0u) {
        ctx->pc = 0x3D47D0u;
            // 0x3d47d0: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x3D47D4u;
        goto label_3d47d4;
    }
    ctx->pc = 0x3D47CCu;
    {
        const bool branch_taken_0x3d47cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d47cc) {
            ctx->pc = 0x3D47D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D47CCu;
            // 0x3d47d0: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D47FCu;
            goto label_3d47fc;
        }
    }
    ctx->pc = 0x3D47D4u;
label_3d47d4:
    // 0x3d47d4: 0xc040180  jal         func_100600
label_3d47d8:
    if (ctx->pc == 0x3D47D8u) {
        ctx->pc = 0x3D47D8u;
            // 0x3d47d8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x3D47DCu;
        goto label_3d47dc;
    }
    ctx->pc = 0x3D47D4u;
    SET_GPR_U32(ctx, 31, 0x3D47DCu);
    ctx->pc = 0x3D47D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D47D4u;
            // 0x3d47d8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D47DCu; }
        if (ctx->pc != 0x3D47DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D47DCu; }
        if (ctx->pc != 0x3D47DCu) { return; }
    }
    ctx->pc = 0x3D47DCu;
label_3d47dc:
    // 0x3d47dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d47e0:
    if (ctx->pc == 0x3D47E0u) {
        ctx->pc = 0x3D47E4u;
        goto label_3d47e4;
    }
    ctx->pc = 0x3D47DCu;
    {
        const bool branch_taken_0x3d47dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d47dc) {
            ctx->pc = 0x3D47F8u;
            goto label_3d47f8;
        }
    }
    ctx->pc = 0x3D47E4u;
label_3d47e4:
    // 0x3d47e4: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x3d47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_3d47e8:
    // 0x3d47e8: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x3d47e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d47ec:
    // 0x3d47ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d47ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d47f0:
    // 0x3d47f0: 0xc11ebc4  jal         func_47AF10
label_3d47f4:
    if (ctx->pc == 0x3D47F4u) {
        ctx->pc = 0x3D47F4u;
            // 0x3d47f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3D47F8u;
        goto label_3d47f8;
    }
    ctx->pc = 0x3D47F0u;
    SET_GPR_U32(ctx, 31, 0x3D47F8u);
    ctx->pc = 0x3D47F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D47F0u;
            // 0x3d47f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D47F8u; }
        if (ctx->pc != 0x3D47F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D47F8u; }
        if (ctx->pc != 0x3D47F8u) { return; }
    }
    ctx->pc = 0x3D47F8u;
label_3d47f8:
    // 0x3d47f8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3d47f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3d47fc:
    // 0x3d47fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d4800:
    // 0x3d4800: 0x8c4465a0  lw          $a0, 0x65A0($v0)
    ctx->pc = 0x3d4800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26016)));
label_3d4804:
    // 0x3d4804: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3d4808:
    if (ctx->pc == 0x3D4808u) {
        ctx->pc = 0x3D480Cu;
        goto label_3d480c;
    }
    ctx->pc = 0x3D4804u;
    {
        const bool branch_taken_0x3d4804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4804) {
            ctx->pc = 0x3D4828u;
            goto label_3d4828;
        }
    }
    ctx->pc = 0x3D480Cu;
label_3d480c:
    // 0x3d480c: 0xc0f6824  jal         func_3DA090
label_3d4810:
    if (ctx->pc == 0x3D4810u) {
        ctx->pc = 0x3D4814u;
        goto label_3d4814;
    }
    ctx->pc = 0x3D480Cu;
    SET_GPR_U32(ctx, 31, 0x3D4814u);
    ctx->pc = 0x3DA090u;
    if (runtime->hasFunction(0x3DA090u)) {
        auto targetFn = runtime->lookupFunction(0x3DA090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4814u; }
        if (ctx->pc != 0x3D4814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA090_0x3da090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4814u; }
        if (ctx->pc != 0x3D4814u) { return; }
    }
    ctx->pc = 0x3D4814u;
label_3d4814:
    // 0x3d4814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d4818:
    if (ctx->pc == 0x3D4818u) {
        ctx->pc = 0x3D481Cu;
        goto label_3d481c;
    }
    ctx->pc = 0x3D4814u;
    {
        const bool branch_taken_0x3d4814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4814) {
            ctx->pc = 0x3D4828u;
            goto label_3d4828;
        }
    }
    ctx->pc = 0x3D481Cu;
label_3d481c:
    // 0x3d481c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4820:
    // 0x3d4820: 0xc0f6a54  jal         func_3DA950
label_3d4824:
    if (ctx->pc == 0x3D4824u) {
        ctx->pc = 0x3D4824u;
            // 0x3d4824: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4828u;
        goto label_3d4828;
    }
    ctx->pc = 0x3D4820u;
    SET_GPR_U32(ctx, 31, 0x3D4828u);
    ctx->pc = 0x3D4824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4820u;
            // 0x3d4824: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA950u;
    if (runtime->hasFunction(0x3DA950u)) {
        auto targetFn = runtime->lookupFunction(0x3DA950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4828u; }
        if (ctx->pc != 0x3D4828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA950_0x3da950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4828u; }
        if (ctx->pc != 0x3D4828u) { return; }
    }
    ctx->pc = 0x3D4828u;
label_3d4828:
    // 0x3d4828: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d4828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d482c:
    // 0x3d482c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4830:
    // 0x3d4830: 0xc4408400  lwc1        $f0, -0x7C00($v0)
    ctx->pc = 0x3d4830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d4834:
    // 0x3d4834: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3d4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d4838:
    // 0x3d4838: 0xe62001cc  swc1        $f0, 0x1CC($s1)
    ctx->pc = 0x3d4838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
label_3d483c:
    // 0x3d483c: 0xc0f0f84  jal         func_3C3E10
label_3d4840:
    if (ctx->pc == 0x3D4840u) {
        ctx->pc = 0x3D4840u;
            // 0x3d4840: 0xae400e30  sw          $zero, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 0));
        ctx->pc = 0x3D4844u;
        goto label_3d4844;
    }
    ctx->pc = 0x3D483Cu;
    SET_GPR_U32(ctx, 31, 0x3D4844u);
    ctx->pc = 0x3D4840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D483Cu;
            // 0x3d4840: 0xae400e30  sw          $zero, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4844u; }
        if (ctx->pc != 0x3D4844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4844u; }
        if (ctx->pc != 0x3D4844u) { return; }
    }
    ctx->pc = 0x3D4844u;
label_3d4844:
    // 0x3d4844: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d4844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d4848:
    // 0x3d4848: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d4848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d484c:
    // 0x3d484c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3d484cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d4850:
    // 0x3d4850: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d4850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d4854:
    // 0x3d4854: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d4854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4858:
    // 0x3d4858: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d4858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d485c:
    // 0x3d485c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d485cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4860:
    // 0x3d4860: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d4860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4864:
    // 0x3d4864: 0x3e00008  jr          $ra
label_3d4868:
    if (ctx->pc == 0x3D4868u) {
        ctx->pc = 0x3D4868u;
            // 0x3d4868: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x3D486Cu;
        goto label_3d486c;
    }
    ctx->pc = 0x3D4864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4864u;
            // 0x3d4868: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D486Cu;
label_3d486c:
    // 0x3d486c: 0x0  nop
    ctx->pc = 0x3d486cu;
    // NOP
label_3d4870:
    // 0x3d4870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d4870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d4874:
    // 0x3d4874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d4874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d4878:
    // 0x3d4878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d4878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d487c:
    // 0x3d487c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d4880:
    // 0x3d4880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d4880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4884:
    // 0x3d4884: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3d4888:
    if (ctx->pc == 0x3D4888u) {
        ctx->pc = 0x3D4888u;
            // 0x3d4888: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D488Cu;
        goto label_3d488c;
    }
    ctx->pc = 0x3D4884u;
    {
        const bool branch_taken_0x3d4884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4884u;
            // 0x3d4888: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4884) {
            ctx->pc = 0x3D48C8u;
            goto label_3d48c8;
        }
    }
    ctx->pc = 0x3D488Cu;
label_3d488c:
    // 0x3d488c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d4890:
    // 0x3d4890: 0x244293d0  addiu       $v0, $v0, -0x6C30
    ctx->pc = 0x3d4890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939600));
label_3d4894:
    // 0x3d4894: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3d4898:
    if (ctx->pc == 0x3D4898u) {
        ctx->pc = 0x3D4898u;
            // 0x3d4898: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3D489Cu;
        goto label_3d489c;
    }
    ctx->pc = 0x3D4894u;
    {
        const bool branch_taken_0x3d4894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4894u;
            // 0x3d4898: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4894) {
            ctx->pc = 0x3D48B0u;
            goto label_3d48b0;
        }
    }
    ctx->pc = 0x3D489Cu;
label_3d489c:
    // 0x3d489c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d489cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d48a0:
    // 0x3d48a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d48a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d48a4:
    // 0x3d48a4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3d48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3d48a8:
    // 0x3d48a8: 0xc057a68  jal         func_15E9A0
label_3d48ac:
    if (ctx->pc == 0x3D48ACu) {
        ctx->pc = 0x3D48ACu;
            // 0x3d48ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3D48B0u;
        goto label_3d48b0;
    }
    ctx->pc = 0x3D48A8u;
    SET_GPR_U32(ctx, 31, 0x3D48B0u);
    ctx->pc = 0x3D48ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D48A8u;
            // 0x3d48ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D48B0u; }
        if (ctx->pc != 0x3D48B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D48B0u; }
        if (ctx->pc != 0x3D48B0u) { return; }
    }
    ctx->pc = 0x3D48B0u;
label_3d48b0:
    // 0x3d48b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d48b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d48b4:
    // 0x3d48b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d48b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d48b8:
    // 0x3d48b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d48bc:
    if (ctx->pc == 0x3D48BCu) {
        ctx->pc = 0x3D48BCu;
            // 0x3d48bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D48C0u;
        goto label_3d48c0;
    }
    ctx->pc = 0x3D48B8u;
    {
        const bool branch_taken_0x3d48b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d48b8) {
            ctx->pc = 0x3D48BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D48B8u;
            // 0x3d48bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D48CCu;
            goto label_3d48cc;
        }
    }
    ctx->pc = 0x3D48C0u;
label_3d48c0:
    // 0x3d48c0: 0xc0400a8  jal         func_1002A0
label_3d48c4:
    if (ctx->pc == 0x3D48C4u) {
        ctx->pc = 0x3D48C4u;
            // 0x3d48c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D48C8u;
        goto label_3d48c8;
    }
    ctx->pc = 0x3D48C0u;
    SET_GPR_U32(ctx, 31, 0x3D48C8u);
    ctx->pc = 0x3D48C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D48C0u;
            // 0x3d48c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D48C8u; }
        if (ctx->pc != 0x3D48C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D48C8u; }
        if (ctx->pc != 0x3D48C8u) { return; }
    }
    ctx->pc = 0x3D48C8u;
label_3d48c8:
    // 0x3d48c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d48c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d48cc:
    // 0x3d48cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d48ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d48d0:
    // 0x3d48d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d48d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d48d4:
    // 0x3d48d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d48d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d48d8:
    // 0x3d48d8: 0x3e00008  jr          $ra
label_3d48dc:
    if (ctx->pc == 0x3D48DCu) {
        ctx->pc = 0x3D48DCu;
            // 0x3d48dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D48E0u;
        goto label_3d48e0;
    }
    ctx->pc = 0x3D48D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D48DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D48D8u;
            // 0x3d48dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D48E0u;
label_3d48e0:
    // 0x3d48e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d48e4:
    // 0x3d48e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d48e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3d48e8:
    // 0x3d48e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d48ec:
    // 0x3d48ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d48f0:
    // 0x3d48f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d48f4:
    // 0x3d48f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d48f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d48f8:
    // 0x3d48f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d48fc:
    // 0x3d48fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d48fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d4900:
    // 0x3d4900: 0x8c7189f0  lw          $s1, -0x7610($v1)
    ctx->pc = 0x3d4900u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_3d4904:
    // 0x3d4904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d4904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4908:
    // 0x3d4908: 0x8c52e3e8  lw          $s2, -0x1C18($v0)
    ctx->pc = 0x3d4908u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_3d490c:
    // 0x3d490c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3d490cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d4910:
    // 0x3d4910: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3d4910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3d4914:
    // 0x3d4914: 0x320f809  jalr        $t9
label_3d4918:
    if (ctx->pc == 0x3D4918u) {
        ctx->pc = 0x3D4918u;
            // 0x3d4918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D491Cu;
        goto label_3d491c;
    }
    ctx->pc = 0x3D4914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D491Cu);
        ctx->pc = 0x3D4918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4914u;
            // 0x3d4918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D491Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D491Cu; }
            if (ctx->pc != 0x3D491Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D491Cu;
label_3d491c:
    // 0x3d491c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3d491cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d4920:
    // 0x3d4920: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3d4920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3d4924:
    // 0x3d4924: 0x320f809  jalr        $t9
label_3d4928:
    if (ctx->pc == 0x3D4928u) {
        ctx->pc = 0x3D4928u;
            // 0x3d4928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D492Cu;
        goto label_3d492c;
    }
    ctx->pc = 0x3D4924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D492Cu);
        ctx->pc = 0x3D4928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4924u;
            // 0x3d4928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D492Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D492Cu; }
            if (ctx->pc != 0x3D492Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D492Cu;
label_3d492c:
    // 0x3d492c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d4930:
    // 0x3d4930: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3d4930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3d4934:
    // 0x3d4934: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3d4938:
    if (ctx->pc == 0x3D4938u) {
        ctx->pc = 0x3D4938u;
            // 0x3d4938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D493Cu;
        goto label_3d493c;
    }
    ctx->pc = 0x3D4934u;
    {
        const bool branch_taken_0x3d4934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4934) {
            ctx->pc = 0x3D4938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4934u;
            // 0x3d4938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D494Cu;
            goto label_3d494c;
        }
    }
    ctx->pc = 0x3D493Cu;
label_3d493c:
    // 0x3d493c: 0xc0f5264  jal         func_3D4990
label_3d4940:
    if (ctx->pc == 0x3D4940u) {
        ctx->pc = 0x3D4940u;
            // 0x3d4940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4944u;
        goto label_3d4944;
    }
    ctx->pc = 0x3D493Cu;
    SET_GPR_U32(ctx, 31, 0x3D4944u);
    ctx->pc = 0x3D4940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D493Cu;
            // 0x3d4940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D4990u;
    if (runtime->hasFunction(0x3D4990u)) {
        auto targetFn = runtime->lookupFunction(0x3D4990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4944u; }
        if (ctx->pc != 0x3D4944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D4990_0x3d4990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4944u; }
        if (ctx->pc != 0x3D4944u) { return; }
    }
    ctx->pc = 0x3D4944u;
label_3d4944:
    // 0x3d4944: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d4948:
    if (ctx->pc == 0x3D4948u) {
        ctx->pc = 0x3D4948u;
            // 0x3d4948: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3D494Cu;
        goto label_3d494c;
    }
    ctx->pc = 0x3D4944u;
    {
        const bool branch_taken_0x3d4944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4944u;
            // 0x3d4948: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4944) {
            ctx->pc = 0x3D4958u;
            goto label_3d4958;
        }
    }
    ctx->pc = 0x3D494Cu;
label_3d494c:
    // 0x3d494c: 0xc0f5358  jal         func_3D4D60
label_3d4950:
    if (ctx->pc == 0x3D4950u) {
        ctx->pc = 0x3D4954u;
        goto label_3d4954;
    }
    ctx->pc = 0x3D494Cu;
    SET_GPR_U32(ctx, 31, 0x3D4954u);
    ctx->pc = 0x3D4D60u;
    if (runtime->hasFunction(0x3D4D60u)) {
        auto targetFn = runtime->lookupFunction(0x3D4D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4954u; }
        if (ctx->pc != 0x3D4954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D4D60_0x3d4d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4954u; }
        if (ctx->pc != 0x3D4954u) { return; }
    }
    ctx->pc = 0x3D4954u;
label_3d4954:
    // 0x3d4954: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3d4954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d4958:
    // 0x3d4958: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x3d4958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_3d495c:
    // 0x3d495c: 0x320f809  jalr        $t9
label_3d4960:
    if (ctx->pc == 0x3D4960u) {
        ctx->pc = 0x3D4960u;
            // 0x3d4960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4964u;
        goto label_3d4964;
    }
    ctx->pc = 0x3D495Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D4964u);
        ctx->pc = 0x3D4960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D495Cu;
            // 0x3d4960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D4964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D4964u; }
            if (ctx->pc != 0x3D4964u) { return; }
        }
        }
    }
    ctx->pc = 0x3D4964u;
label_3d4964:
    // 0x3d4964: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3d4964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d4968:
    // 0x3d4968: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d4968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d496c:
    // 0x3d496c: 0x320f809  jalr        $t9
label_3d4970:
    if (ctx->pc == 0x3D4970u) {
        ctx->pc = 0x3D4970u;
            // 0x3d4970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4974u;
        goto label_3d4974;
    }
    ctx->pc = 0x3D496Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D4974u);
        ctx->pc = 0x3D4970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D496Cu;
            // 0x3d4970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D4974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D4974u; }
            if (ctx->pc != 0x3D4974u) { return; }
        }
        }
    }
    ctx->pc = 0x3D4974u;
label_3d4974:
    // 0x3d4974: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d4974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d4978:
    // 0x3d4978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d4978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d497c:
    // 0x3d497c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d497cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4980:
    // 0x3d4980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d4980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4984:
    // 0x3d4984: 0x3e00008  jr          $ra
label_3d4988:
    if (ctx->pc == 0x3D4988u) {
        ctx->pc = 0x3D4988u;
            // 0x3d4988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3D498Cu;
        goto label_3d498c;
    }
    ctx->pc = 0x3D4984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4984u;
            // 0x3d4988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D498Cu;
label_3d498c:
    // 0x3d498c: 0x0  nop
    ctx->pc = 0x3d498cu;
    // NOP
}
