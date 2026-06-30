#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3C90
// Address: 0x2a3c90 - 0x2a4260
void sub_002A3C90_0x2a3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3C90_0x2a3c90");
#endif

    switch (ctx->pc) {
        case 0x2a3c90u: goto label_2a3c90;
        case 0x2a3c94u: goto label_2a3c94;
        case 0x2a3c98u: goto label_2a3c98;
        case 0x2a3c9cu: goto label_2a3c9c;
        case 0x2a3ca0u: goto label_2a3ca0;
        case 0x2a3ca4u: goto label_2a3ca4;
        case 0x2a3ca8u: goto label_2a3ca8;
        case 0x2a3cacu: goto label_2a3cac;
        case 0x2a3cb0u: goto label_2a3cb0;
        case 0x2a3cb4u: goto label_2a3cb4;
        case 0x2a3cb8u: goto label_2a3cb8;
        case 0x2a3cbcu: goto label_2a3cbc;
        case 0x2a3cc0u: goto label_2a3cc0;
        case 0x2a3cc4u: goto label_2a3cc4;
        case 0x2a3cc8u: goto label_2a3cc8;
        case 0x2a3cccu: goto label_2a3ccc;
        case 0x2a3cd0u: goto label_2a3cd0;
        case 0x2a3cd4u: goto label_2a3cd4;
        case 0x2a3cd8u: goto label_2a3cd8;
        case 0x2a3cdcu: goto label_2a3cdc;
        case 0x2a3ce0u: goto label_2a3ce0;
        case 0x2a3ce4u: goto label_2a3ce4;
        case 0x2a3ce8u: goto label_2a3ce8;
        case 0x2a3cecu: goto label_2a3cec;
        case 0x2a3cf0u: goto label_2a3cf0;
        case 0x2a3cf4u: goto label_2a3cf4;
        case 0x2a3cf8u: goto label_2a3cf8;
        case 0x2a3cfcu: goto label_2a3cfc;
        case 0x2a3d00u: goto label_2a3d00;
        case 0x2a3d04u: goto label_2a3d04;
        case 0x2a3d08u: goto label_2a3d08;
        case 0x2a3d0cu: goto label_2a3d0c;
        case 0x2a3d10u: goto label_2a3d10;
        case 0x2a3d14u: goto label_2a3d14;
        case 0x2a3d18u: goto label_2a3d18;
        case 0x2a3d1cu: goto label_2a3d1c;
        case 0x2a3d20u: goto label_2a3d20;
        case 0x2a3d24u: goto label_2a3d24;
        case 0x2a3d28u: goto label_2a3d28;
        case 0x2a3d2cu: goto label_2a3d2c;
        case 0x2a3d30u: goto label_2a3d30;
        case 0x2a3d34u: goto label_2a3d34;
        case 0x2a3d38u: goto label_2a3d38;
        case 0x2a3d3cu: goto label_2a3d3c;
        case 0x2a3d40u: goto label_2a3d40;
        case 0x2a3d44u: goto label_2a3d44;
        case 0x2a3d48u: goto label_2a3d48;
        case 0x2a3d4cu: goto label_2a3d4c;
        case 0x2a3d50u: goto label_2a3d50;
        case 0x2a3d54u: goto label_2a3d54;
        case 0x2a3d58u: goto label_2a3d58;
        case 0x2a3d5cu: goto label_2a3d5c;
        case 0x2a3d60u: goto label_2a3d60;
        case 0x2a3d64u: goto label_2a3d64;
        case 0x2a3d68u: goto label_2a3d68;
        case 0x2a3d6cu: goto label_2a3d6c;
        case 0x2a3d70u: goto label_2a3d70;
        case 0x2a3d74u: goto label_2a3d74;
        case 0x2a3d78u: goto label_2a3d78;
        case 0x2a3d7cu: goto label_2a3d7c;
        case 0x2a3d80u: goto label_2a3d80;
        case 0x2a3d84u: goto label_2a3d84;
        case 0x2a3d88u: goto label_2a3d88;
        case 0x2a3d8cu: goto label_2a3d8c;
        case 0x2a3d90u: goto label_2a3d90;
        case 0x2a3d94u: goto label_2a3d94;
        case 0x2a3d98u: goto label_2a3d98;
        case 0x2a3d9cu: goto label_2a3d9c;
        case 0x2a3da0u: goto label_2a3da0;
        case 0x2a3da4u: goto label_2a3da4;
        case 0x2a3da8u: goto label_2a3da8;
        case 0x2a3dacu: goto label_2a3dac;
        case 0x2a3db0u: goto label_2a3db0;
        case 0x2a3db4u: goto label_2a3db4;
        case 0x2a3db8u: goto label_2a3db8;
        case 0x2a3dbcu: goto label_2a3dbc;
        case 0x2a3dc0u: goto label_2a3dc0;
        case 0x2a3dc4u: goto label_2a3dc4;
        case 0x2a3dc8u: goto label_2a3dc8;
        case 0x2a3dccu: goto label_2a3dcc;
        case 0x2a3dd0u: goto label_2a3dd0;
        case 0x2a3dd4u: goto label_2a3dd4;
        case 0x2a3dd8u: goto label_2a3dd8;
        case 0x2a3ddcu: goto label_2a3ddc;
        case 0x2a3de0u: goto label_2a3de0;
        case 0x2a3de4u: goto label_2a3de4;
        case 0x2a3de8u: goto label_2a3de8;
        case 0x2a3decu: goto label_2a3dec;
        case 0x2a3df0u: goto label_2a3df0;
        case 0x2a3df4u: goto label_2a3df4;
        case 0x2a3df8u: goto label_2a3df8;
        case 0x2a3dfcu: goto label_2a3dfc;
        case 0x2a3e00u: goto label_2a3e00;
        case 0x2a3e04u: goto label_2a3e04;
        case 0x2a3e08u: goto label_2a3e08;
        case 0x2a3e0cu: goto label_2a3e0c;
        case 0x2a3e10u: goto label_2a3e10;
        case 0x2a3e14u: goto label_2a3e14;
        case 0x2a3e18u: goto label_2a3e18;
        case 0x2a3e1cu: goto label_2a3e1c;
        case 0x2a3e20u: goto label_2a3e20;
        case 0x2a3e24u: goto label_2a3e24;
        case 0x2a3e28u: goto label_2a3e28;
        case 0x2a3e2cu: goto label_2a3e2c;
        case 0x2a3e30u: goto label_2a3e30;
        case 0x2a3e34u: goto label_2a3e34;
        case 0x2a3e38u: goto label_2a3e38;
        case 0x2a3e3cu: goto label_2a3e3c;
        case 0x2a3e40u: goto label_2a3e40;
        case 0x2a3e44u: goto label_2a3e44;
        case 0x2a3e48u: goto label_2a3e48;
        case 0x2a3e4cu: goto label_2a3e4c;
        case 0x2a3e50u: goto label_2a3e50;
        case 0x2a3e54u: goto label_2a3e54;
        case 0x2a3e58u: goto label_2a3e58;
        case 0x2a3e5cu: goto label_2a3e5c;
        case 0x2a3e60u: goto label_2a3e60;
        case 0x2a3e64u: goto label_2a3e64;
        case 0x2a3e68u: goto label_2a3e68;
        case 0x2a3e6cu: goto label_2a3e6c;
        case 0x2a3e70u: goto label_2a3e70;
        case 0x2a3e74u: goto label_2a3e74;
        case 0x2a3e78u: goto label_2a3e78;
        case 0x2a3e7cu: goto label_2a3e7c;
        case 0x2a3e80u: goto label_2a3e80;
        case 0x2a3e84u: goto label_2a3e84;
        case 0x2a3e88u: goto label_2a3e88;
        case 0x2a3e8cu: goto label_2a3e8c;
        case 0x2a3e90u: goto label_2a3e90;
        case 0x2a3e94u: goto label_2a3e94;
        case 0x2a3e98u: goto label_2a3e98;
        case 0x2a3e9cu: goto label_2a3e9c;
        case 0x2a3ea0u: goto label_2a3ea0;
        case 0x2a3ea4u: goto label_2a3ea4;
        case 0x2a3ea8u: goto label_2a3ea8;
        case 0x2a3eacu: goto label_2a3eac;
        case 0x2a3eb0u: goto label_2a3eb0;
        case 0x2a3eb4u: goto label_2a3eb4;
        case 0x2a3eb8u: goto label_2a3eb8;
        case 0x2a3ebcu: goto label_2a3ebc;
        case 0x2a3ec0u: goto label_2a3ec0;
        case 0x2a3ec4u: goto label_2a3ec4;
        case 0x2a3ec8u: goto label_2a3ec8;
        case 0x2a3eccu: goto label_2a3ecc;
        case 0x2a3ed0u: goto label_2a3ed0;
        case 0x2a3ed4u: goto label_2a3ed4;
        case 0x2a3ed8u: goto label_2a3ed8;
        case 0x2a3edcu: goto label_2a3edc;
        case 0x2a3ee0u: goto label_2a3ee0;
        case 0x2a3ee4u: goto label_2a3ee4;
        case 0x2a3ee8u: goto label_2a3ee8;
        case 0x2a3eecu: goto label_2a3eec;
        case 0x2a3ef0u: goto label_2a3ef0;
        case 0x2a3ef4u: goto label_2a3ef4;
        case 0x2a3ef8u: goto label_2a3ef8;
        case 0x2a3efcu: goto label_2a3efc;
        case 0x2a3f00u: goto label_2a3f00;
        case 0x2a3f04u: goto label_2a3f04;
        case 0x2a3f08u: goto label_2a3f08;
        case 0x2a3f0cu: goto label_2a3f0c;
        case 0x2a3f10u: goto label_2a3f10;
        case 0x2a3f14u: goto label_2a3f14;
        case 0x2a3f18u: goto label_2a3f18;
        case 0x2a3f1cu: goto label_2a3f1c;
        case 0x2a3f20u: goto label_2a3f20;
        case 0x2a3f24u: goto label_2a3f24;
        case 0x2a3f28u: goto label_2a3f28;
        case 0x2a3f2cu: goto label_2a3f2c;
        case 0x2a3f30u: goto label_2a3f30;
        case 0x2a3f34u: goto label_2a3f34;
        case 0x2a3f38u: goto label_2a3f38;
        case 0x2a3f3cu: goto label_2a3f3c;
        case 0x2a3f40u: goto label_2a3f40;
        case 0x2a3f44u: goto label_2a3f44;
        case 0x2a3f48u: goto label_2a3f48;
        case 0x2a3f4cu: goto label_2a3f4c;
        case 0x2a3f50u: goto label_2a3f50;
        case 0x2a3f54u: goto label_2a3f54;
        case 0x2a3f58u: goto label_2a3f58;
        case 0x2a3f5cu: goto label_2a3f5c;
        case 0x2a3f60u: goto label_2a3f60;
        case 0x2a3f64u: goto label_2a3f64;
        case 0x2a3f68u: goto label_2a3f68;
        case 0x2a3f6cu: goto label_2a3f6c;
        case 0x2a3f70u: goto label_2a3f70;
        case 0x2a3f74u: goto label_2a3f74;
        case 0x2a3f78u: goto label_2a3f78;
        case 0x2a3f7cu: goto label_2a3f7c;
        case 0x2a3f80u: goto label_2a3f80;
        case 0x2a3f84u: goto label_2a3f84;
        case 0x2a3f88u: goto label_2a3f88;
        case 0x2a3f8cu: goto label_2a3f8c;
        case 0x2a3f90u: goto label_2a3f90;
        case 0x2a3f94u: goto label_2a3f94;
        case 0x2a3f98u: goto label_2a3f98;
        case 0x2a3f9cu: goto label_2a3f9c;
        case 0x2a3fa0u: goto label_2a3fa0;
        case 0x2a3fa4u: goto label_2a3fa4;
        case 0x2a3fa8u: goto label_2a3fa8;
        case 0x2a3facu: goto label_2a3fac;
        case 0x2a3fb0u: goto label_2a3fb0;
        case 0x2a3fb4u: goto label_2a3fb4;
        case 0x2a3fb8u: goto label_2a3fb8;
        case 0x2a3fbcu: goto label_2a3fbc;
        case 0x2a3fc0u: goto label_2a3fc0;
        case 0x2a3fc4u: goto label_2a3fc4;
        case 0x2a3fc8u: goto label_2a3fc8;
        case 0x2a3fccu: goto label_2a3fcc;
        case 0x2a3fd0u: goto label_2a3fd0;
        case 0x2a3fd4u: goto label_2a3fd4;
        case 0x2a3fd8u: goto label_2a3fd8;
        case 0x2a3fdcu: goto label_2a3fdc;
        case 0x2a3fe0u: goto label_2a3fe0;
        case 0x2a3fe4u: goto label_2a3fe4;
        case 0x2a3fe8u: goto label_2a3fe8;
        case 0x2a3fecu: goto label_2a3fec;
        case 0x2a3ff0u: goto label_2a3ff0;
        case 0x2a3ff4u: goto label_2a3ff4;
        case 0x2a3ff8u: goto label_2a3ff8;
        case 0x2a3ffcu: goto label_2a3ffc;
        case 0x2a4000u: goto label_2a4000;
        case 0x2a4004u: goto label_2a4004;
        case 0x2a4008u: goto label_2a4008;
        case 0x2a400cu: goto label_2a400c;
        case 0x2a4010u: goto label_2a4010;
        case 0x2a4014u: goto label_2a4014;
        case 0x2a4018u: goto label_2a4018;
        case 0x2a401cu: goto label_2a401c;
        case 0x2a4020u: goto label_2a4020;
        case 0x2a4024u: goto label_2a4024;
        case 0x2a4028u: goto label_2a4028;
        case 0x2a402cu: goto label_2a402c;
        case 0x2a4030u: goto label_2a4030;
        case 0x2a4034u: goto label_2a4034;
        case 0x2a4038u: goto label_2a4038;
        case 0x2a403cu: goto label_2a403c;
        case 0x2a4040u: goto label_2a4040;
        case 0x2a4044u: goto label_2a4044;
        case 0x2a4048u: goto label_2a4048;
        case 0x2a404cu: goto label_2a404c;
        case 0x2a4050u: goto label_2a4050;
        case 0x2a4054u: goto label_2a4054;
        case 0x2a4058u: goto label_2a4058;
        case 0x2a405cu: goto label_2a405c;
        case 0x2a4060u: goto label_2a4060;
        case 0x2a4064u: goto label_2a4064;
        case 0x2a4068u: goto label_2a4068;
        case 0x2a406cu: goto label_2a406c;
        case 0x2a4070u: goto label_2a4070;
        case 0x2a4074u: goto label_2a4074;
        case 0x2a4078u: goto label_2a4078;
        case 0x2a407cu: goto label_2a407c;
        case 0x2a4080u: goto label_2a4080;
        case 0x2a4084u: goto label_2a4084;
        case 0x2a4088u: goto label_2a4088;
        case 0x2a408cu: goto label_2a408c;
        case 0x2a4090u: goto label_2a4090;
        case 0x2a4094u: goto label_2a4094;
        case 0x2a4098u: goto label_2a4098;
        case 0x2a409cu: goto label_2a409c;
        case 0x2a40a0u: goto label_2a40a0;
        case 0x2a40a4u: goto label_2a40a4;
        case 0x2a40a8u: goto label_2a40a8;
        case 0x2a40acu: goto label_2a40ac;
        case 0x2a40b0u: goto label_2a40b0;
        case 0x2a40b4u: goto label_2a40b4;
        case 0x2a40b8u: goto label_2a40b8;
        case 0x2a40bcu: goto label_2a40bc;
        case 0x2a40c0u: goto label_2a40c0;
        case 0x2a40c4u: goto label_2a40c4;
        case 0x2a40c8u: goto label_2a40c8;
        case 0x2a40ccu: goto label_2a40cc;
        case 0x2a40d0u: goto label_2a40d0;
        case 0x2a40d4u: goto label_2a40d4;
        case 0x2a40d8u: goto label_2a40d8;
        case 0x2a40dcu: goto label_2a40dc;
        case 0x2a40e0u: goto label_2a40e0;
        case 0x2a40e4u: goto label_2a40e4;
        case 0x2a40e8u: goto label_2a40e8;
        case 0x2a40ecu: goto label_2a40ec;
        case 0x2a40f0u: goto label_2a40f0;
        case 0x2a40f4u: goto label_2a40f4;
        case 0x2a40f8u: goto label_2a40f8;
        case 0x2a40fcu: goto label_2a40fc;
        case 0x2a4100u: goto label_2a4100;
        case 0x2a4104u: goto label_2a4104;
        case 0x2a4108u: goto label_2a4108;
        case 0x2a410cu: goto label_2a410c;
        case 0x2a4110u: goto label_2a4110;
        case 0x2a4114u: goto label_2a4114;
        case 0x2a4118u: goto label_2a4118;
        case 0x2a411cu: goto label_2a411c;
        case 0x2a4120u: goto label_2a4120;
        case 0x2a4124u: goto label_2a4124;
        case 0x2a4128u: goto label_2a4128;
        case 0x2a412cu: goto label_2a412c;
        case 0x2a4130u: goto label_2a4130;
        case 0x2a4134u: goto label_2a4134;
        case 0x2a4138u: goto label_2a4138;
        case 0x2a413cu: goto label_2a413c;
        case 0x2a4140u: goto label_2a4140;
        case 0x2a4144u: goto label_2a4144;
        case 0x2a4148u: goto label_2a4148;
        case 0x2a414cu: goto label_2a414c;
        case 0x2a4150u: goto label_2a4150;
        case 0x2a4154u: goto label_2a4154;
        case 0x2a4158u: goto label_2a4158;
        case 0x2a415cu: goto label_2a415c;
        case 0x2a4160u: goto label_2a4160;
        case 0x2a4164u: goto label_2a4164;
        case 0x2a4168u: goto label_2a4168;
        case 0x2a416cu: goto label_2a416c;
        case 0x2a4170u: goto label_2a4170;
        case 0x2a4174u: goto label_2a4174;
        case 0x2a4178u: goto label_2a4178;
        case 0x2a417cu: goto label_2a417c;
        case 0x2a4180u: goto label_2a4180;
        case 0x2a4184u: goto label_2a4184;
        case 0x2a4188u: goto label_2a4188;
        case 0x2a418cu: goto label_2a418c;
        case 0x2a4190u: goto label_2a4190;
        case 0x2a4194u: goto label_2a4194;
        case 0x2a4198u: goto label_2a4198;
        case 0x2a419cu: goto label_2a419c;
        case 0x2a41a0u: goto label_2a41a0;
        case 0x2a41a4u: goto label_2a41a4;
        case 0x2a41a8u: goto label_2a41a8;
        case 0x2a41acu: goto label_2a41ac;
        case 0x2a41b0u: goto label_2a41b0;
        case 0x2a41b4u: goto label_2a41b4;
        case 0x2a41b8u: goto label_2a41b8;
        case 0x2a41bcu: goto label_2a41bc;
        case 0x2a41c0u: goto label_2a41c0;
        case 0x2a41c4u: goto label_2a41c4;
        case 0x2a41c8u: goto label_2a41c8;
        case 0x2a41ccu: goto label_2a41cc;
        case 0x2a41d0u: goto label_2a41d0;
        case 0x2a41d4u: goto label_2a41d4;
        case 0x2a41d8u: goto label_2a41d8;
        case 0x2a41dcu: goto label_2a41dc;
        case 0x2a41e0u: goto label_2a41e0;
        case 0x2a41e4u: goto label_2a41e4;
        case 0x2a41e8u: goto label_2a41e8;
        case 0x2a41ecu: goto label_2a41ec;
        case 0x2a41f0u: goto label_2a41f0;
        case 0x2a41f4u: goto label_2a41f4;
        case 0x2a41f8u: goto label_2a41f8;
        case 0x2a41fcu: goto label_2a41fc;
        case 0x2a4200u: goto label_2a4200;
        case 0x2a4204u: goto label_2a4204;
        case 0x2a4208u: goto label_2a4208;
        case 0x2a420cu: goto label_2a420c;
        case 0x2a4210u: goto label_2a4210;
        case 0x2a4214u: goto label_2a4214;
        case 0x2a4218u: goto label_2a4218;
        case 0x2a421cu: goto label_2a421c;
        case 0x2a4220u: goto label_2a4220;
        case 0x2a4224u: goto label_2a4224;
        case 0x2a4228u: goto label_2a4228;
        case 0x2a422cu: goto label_2a422c;
        case 0x2a4230u: goto label_2a4230;
        case 0x2a4234u: goto label_2a4234;
        case 0x2a4238u: goto label_2a4238;
        case 0x2a423cu: goto label_2a423c;
        case 0x2a4240u: goto label_2a4240;
        case 0x2a4244u: goto label_2a4244;
        case 0x2a4248u: goto label_2a4248;
        case 0x2a424cu: goto label_2a424c;
        case 0x2a4250u: goto label_2a4250;
        case 0x2a4254u: goto label_2a4254;
        case 0x2a4258u: goto label_2a4258;
        case 0x2a425cu: goto label_2a425c;
        default: break;
    }

    ctx->pc = 0x2a3c90u;

label_2a3c90:
    // 0x2a3c90: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2a3c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a3c94:
    // 0x2a3c94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a3c98:
    // 0x2a3c98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a3c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2a3c9c:
    // 0x2a3c9c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2a3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2a3ca0:
    // 0x2a3ca0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2a3ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2a3ca4:
    // 0x2a3ca4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2a3ca8:
    // 0x2a3ca8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2a3cac:
    // 0x2a3cac: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2a3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_2a3cb0:
    // 0x2a3cb0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2a3cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a3cb4:
    // 0x2a3cb4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2a3cb8:
    // 0x2a3cb8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2a3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2a3cbc:
    // 0x2a3cbc: 0x3e00008  jr          $ra
label_2a3cc0:
    if (ctx->pc == 0x2A3CC0u) {
        ctx->pc = 0x2A3CC0u;
            // 0x2a3cc0: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->pc = 0x2A3CC4u;
        goto label_2a3cc4;
    }
    ctx->pc = 0x2A3CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3CBCu;
            // 0x2a3cc0: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3CC4u;
label_2a3cc4:
    // 0x2a3cc4: 0x0  nop
    ctx->pc = 0x2a3cc4u;
    // NOP
label_2a3cc8:
    // 0x2a3cc8: 0x0  nop
    ctx->pc = 0x2a3cc8u;
    // NOP
label_2a3ccc:
    // 0x2a3ccc: 0x0  nop
    ctx->pc = 0x2a3cccu;
    // NOP
label_2a3cd0:
    // 0x2a3cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a3cd4:
    // 0x2a3cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3cd8:
    // 0x2a3cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a3cdc:
    // 0x2a3cdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a3cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3ce0:
    // 0x2a3ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a3ce4:
    // 0x2a3ce4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a3ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a3ce8:
    // 0x2a3ce8: 0x8083010c  lb          $v1, 0x10C($a0)
    ctx->pc = 0x2a3ce8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a3cec:
    // 0x2a3cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3cf0:
    // 0x2a3cf0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a3cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a3cf4:
    // 0x2a3cf4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2a3cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a3cf8:
    // 0x2a3cf8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2a3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3cfc:
    // 0x2a3cfc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2a3d00:
    // 0x2a3d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3d04:
    // 0x2a3d04: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2a3d08:
    // 0x2a3d08: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a3d0c:
    // 0x2a3d0c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x2a3d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_2a3d10:
    // 0x2a3d10: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x2a3d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2a3d14:
    // 0x2a3d14: 0x8085010d  lb          $a1, 0x10D($a0)
    ctx->pc = 0x2a3d14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
label_2a3d18:
    // 0x2a3d18: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2a3d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2a3d1c:
    // 0x2a3d1c: 0x320f809  jalr        $t9
label_2a3d20:
    if (ctx->pc == 0x2A3D20u) {
        ctx->pc = 0x2A3D20u;
            // 0x2a3d20: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A3D24u;
        goto label_2a3d24;
    }
    ctx->pc = 0x2A3D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A3D24u);
        ctx->pc = 0x2A3D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D1Cu;
            // 0x2a3d20: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3D24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D24u; }
            if (ctx->pc != 0x2A3D24u) { return; }
        }
        }
    }
    ctx->pc = 0x2A3D24u;
label_2a3d24:
    // 0x2a3d24: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2a3d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a3d28:
    // 0x2a3d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3d2c:
    // 0x2a3d2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a3d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a3d30:
    // 0x2a3d30: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2a3d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2a3d34:
    // 0x2a3d34: 0x320f809  jalr        $t9
label_2a3d38:
    if (ctx->pc == 0x2A3D38u) {
        ctx->pc = 0x2A3D38u;
            // 0x2a3d38: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2A3D3Cu;
        goto label_2a3d3c;
    }
    ctx->pc = 0x2A3D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A3D3Cu);
        ctx->pc = 0x2A3D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D34u;
            // 0x2a3d38: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3D3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D3Cu; }
            if (ctx->pc != 0x2A3D3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A3D3Cu;
label_2a3d3c:
    // 0x2a3d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3d40:
    // 0x2a3d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3d44:
    // 0x2a3d44: 0x3e00008  jr          $ra
label_2a3d48:
    if (ctx->pc == 0x2A3D48u) {
        ctx->pc = 0x2A3D48u;
            // 0x2a3d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A3D4Cu;
        goto label_2a3d4c;
    }
    ctx->pc = 0x2A3D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D44u;
            // 0x2a3d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3D4Cu;
label_2a3d4c:
    // 0x2a3d4c: 0x0  nop
    ctx->pc = 0x2a3d4cu;
    // NOP
label_2a3d50:
    // 0x2a3d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a3d54:
    // 0x2a3d54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a3d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3d58:
    // 0x2a3d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a3d5c:
    // 0x2a3d5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2a3d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a3d60:
    // 0x2a3d60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a3d64:
    // 0x2a3d64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a3d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a3d68:
    // 0x2a3d68: 0x8085010d  lb          $a1, 0x10D($a0)
    ctx->pc = 0x2a3d68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
label_2a3d6c:
    // 0x2a3d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3d70:
    // 0x2a3d70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a3d74:
    // 0x2a3d74: 0xa085010e  sb          $a1, 0x10E($a0)
    ctx->pc = 0x2a3d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 270), (uint8_t)GPR_U32(ctx, 5));
label_2a3d78:
    // 0x2a3d78: 0xa080010d  sb          $zero, 0x10D($a0)
    ctx->pc = 0x2a3d78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 269), (uint8_t)GPR_U32(ctx, 0));
label_2a3d7c:
    // 0x2a3d7c: 0x8085010c  lb          $a1, 0x10C($a0)
    ctx->pc = 0x2a3d7cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a3d80:
    // 0x2a3d80: 0xe53023  subu        $a2, $a3, $a1
    ctx->pc = 0x2a3d80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2a3d84:
    // 0x2a3d84: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2a3d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2a3d88:
    // 0x2a3d88: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2a3d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2a3d8c:
    // 0x2a3d8c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2a3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2a3d90:
    // 0x2a3d90: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2a3d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2a3d94:
    // 0x2a3d94: 0xaca80080  sw          $t0, 0x80($a1)
    ctx->pc = 0x2a3d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 8));
label_2a3d98:
    // 0x2a3d98: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x2a3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_2a3d9c:
    // 0x2a3d9c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2a3da0:
    // 0x2a3da0: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
label_2a3da4:
    if (ctx->pc == 0x2A3DA4u) {
        ctx->pc = 0x2A3DA4u;
            // 0x2a3da4: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x2A3DA8u;
        goto label_2a3da8;
    }
    ctx->pc = 0x2A3DA0u;
    {
        const bool branch_taken_0x2a3da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a3da0) {
            ctx->pc = 0x2A3DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3DA0u;
            // 0x2a3da4: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A3DECu;
            goto label_2a3dec;
        }
    }
    ctx->pc = 0x2A3DA8u;
label_2a3da8:
    // 0x2a3da8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a3dac:
    // 0x2a3dac: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2a3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2a3db0:
    // 0x2a3db0: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x2a3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_2a3db4:
    // 0x2a3db4: 0x1447000c  bne         $v0, $a3, . + 4 + (0xC << 2)
label_2a3db8:
    if (ctx->pc == 0x2A3DB8u) {
        ctx->pc = 0x2A3DBCu;
        goto label_2a3dbc;
    }
    ctx->pc = 0x2A3DB4u;
    {
        const bool branch_taken_0x2a3db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a3db4) {
            ctx->pc = 0x2A3DE8u;
            goto label_2a3de8;
        }
    }
    ctx->pc = 0x2A3DBCu;
label_2a3dbc:
    // 0x2a3dbc: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x2a3dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2a3dc0:
    // 0x2a3dc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a3dc4:
    // 0x2a3dc4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2a3dc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2a3dc8:
    // 0x2a3dc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3dcc:
    // 0x2a3dcc: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2a3dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2a3dd0:
    // 0x2a3dd0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2a3dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2a3dd4:
    // 0x2a3dd4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a3dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a3dd8:
    // 0x2a3dd8: 0x320f809  jalr        $t9
label_2a3ddc:
    if (ctx->pc == 0x2A3DDCu) {
        ctx->pc = 0x2A3DDCu;
            // 0x2a3ddc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2A3DE0u;
        goto label_2a3de0;
    }
    ctx->pc = 0x2A3DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A3DE0u);
        ctx->pc = 0x2A3DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3DD8u;
            // 0x2a3ddc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3DE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3DE0u; }
            if (ctx->pc != 0x2A3DE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A3DE0u;
label_2a3de0:
    // 0x2a3de0: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a3de4:
    if (ctx->pc == 0x2A3DE4u) {
        ctx->pc = 0x2A3DE4u;
            // 0x2a3de4: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x2A3DE8u;
        goto label_2a3de8;
    }
    ctx->pc = 0x2A3DE0u;
    {
        const bool branch_taken_0x2a3de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3DE0u;
            // 0x2a3de4: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3de0) {
            ctx->pc = 0x2A3E10u;
            goto label_2a3e10;
        }
    }
    ctx->pc = 0x2A3DE8u;
label_2a3de8:
    // 0x2a3de8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2a3de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a3dec:
    // 0x2a3dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a3decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3df0:
    // 0x2a3df0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2a3df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a3df4:
    // 0x2a3df4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2a3df4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2a3df8:
    // 0x2a3df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3dfc:
    // 0x2a3dfc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2a3dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e00:
    // 0x2a3e00: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2a3e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2a3e04:
    // 0x2a3e04: 0x320f809  jalr        $t9
label_2a3e08:
    if (ctx->pc == 0x2A3E08u) {
        ctx->pc = 0x2A3E08u;
            // 0x2a3e08: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A3E0Cu;
        goto label_2a3e0c;
    }
    ctx->pc = 0x2A3E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A3E0Cu);
        ctx->pc = 0x2A3E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E04u;
            // 0x2a3e08: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3E0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E0Cu; }
            if (ctx->pc != 0x2A3E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A3E0Cu;
label_2a3e0c:
    // 0x2a3e0c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2a3e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a3e10:
    // 0x2a3e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e14:
    // 0x2a3e14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a3e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a3e18:
    // 0x2a3e18: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2a3e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2a3e1c:
    // 0x2a3e1c: 0x320f809  jalr        $t9
label_2a3e20:
    if (ctx->pc == 0x2A3E20u) {
        ctx->pc = 0x2A3E20u;
            // 0x2a3e20: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2A3E24u;
        goto label_2a3e24;
    }
    ctx->pc = 0x2A3E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A3E24u);
        ctx->pc = 0x2A3E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E1Cu;
            // 0x2a3e20: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3E24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E24u; }
            if (ctx->pc != 0x2A3E24u) { return; }
        }
        }
    }
    ctx->pc = 0x2A3E24u;
label_2a3e24:
    // 0x2a3e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3e28:
    // 0x2a3e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3e2c:
    // 0x2a3e2c: 0x3e00008  jr          $ra
label_2a3e30:
    if (ctx->pc == 0x2A3E30u) {
        ctx->pc = 0x2A3E30u;
            // 0x2a3e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A3E34u;
        goto label_2a3e34;
    }
    ctx->pc = 0x2A3E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E2Cu;
            // 0x2a3e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3E34u;
label_2a3e34:
    // 0x2a3e34: 0x0  nop
    ctx->pc = 0x2a3e34u;
    // NOP
label_2a3e38:
    // 0x2a3e38: 0x0  nop
    ctx->pc = 0x2a3e38u;
    // NOP
label_2a3e3c:
    // 0x2a3e3c: 0x0  nop
    ctx->pc = 0x2a3e3cu;
    // NOP
label_2a3e40:
    // 0x2a3e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a3e44:
    // 0x2a3e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3e48:
    // 0x2a3e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a3e4c:
    // 0x2a3e4c: 0x8087010c  lb          $a3, 0x10C($a0)
    ctx->pc = 0x2a3e4cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a3e50:
    // 0x2a3e50: 0x674023  subu        $t0, $v1, $a3
    ctx->pc = 0x2a3e50u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2a3e54:
    // 0x2a3e54: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2a3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2a3e58:
    // 0x2a3e58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2a3e5c:
    // 0x2a3e5c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2a3e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2a3e60:
    // 0x2a3e60: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2a3e64:
    // 0x2a3e64: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2a3e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2a3e68:
    // 0x2a3e68: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a3e6c:
    // 0x2a3e6c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2a3e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2a3e70:
    // 0x2a3e70: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2a3e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2a3e74:
    // 0x2a3e74: 0xace6007c  sw          $a2, 0x7C($a3)
    ctx->pc = 0x2a3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 6));
label_2a3e78:
    // 0x2a3e78: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x2a3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2a3e7c:
    // 0x2a3e7c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2a3e7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a3e80:
    // 0x2a3e80: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_2a3e84:
    if (ctx->pc == 0x2A3E84u) {
        ctx->pc = 0x2A3E84u;
            // 0x2a3e84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2A3E88u;
        goto label_2a3e88;
    }
    ctx->pc = 0x2A3E80u;
    {
        const bool branch_taken_0x2a3e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e80) {
            ctx->pc = 0x2A3E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E80u;
            // 0x2a3e84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A3EC4u;
            goto label_2a3ec4;
        }
    }
    ctx->pc = 0x2A3E88u;
label_2a3e88:
    // 0x2a3e88: 0x8083010c  lb          $v1, 0x10C($a0)
    ctx->pc = 0x2a3e88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a3e8c:
    // 0x2a3e8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a3e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a3e90:
    // 0x2a3e90: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2a3e94:
    // 0x2a3e94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3e98:
    // 0x2a3e98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2a3e9c:
    // 0x2a3e9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a3ea0:
    // 0x2a3ea0: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x2a3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_2a3ea4:
    // 0x2a3ea4: 0x8082010c  lb          $v0, 0x10C($a0)
    ctx->pc = 0x2a3ea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a3ea8:
    // 0x2a3ea8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a3ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a3eac:
    // 0x2a3eac: 0xa082010c  sb          $v0, 0x10C($a0)
    ctx->pc = 0x2a3eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 268), (uint8_t)GPR_U32(ctx, 2));
label_2a3eb0:
    // 0x2a3eb0: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x2a3eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2a3eb4:
    // 0x2a3eb4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a3eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a3eb8:
    // 0x2a3eb8: 0x320f809  jalr        $t9
label_2a3ebc:
    if (ctx->pc == 0x2A3EBCu) {
        ctx->pc = 0x2A3EC0u;
        goto label_2a3ec0;
    }
    ctx->pc = 0x2A3EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A3EC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3EC0u; }
            if (ctx->pc != 0x2A3EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A3EC0u;
label_2a3ec0:
    // 0x2a3ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3ec4:
    // 0x2a3ec4: 0x3e00008  jr          $ra
label_2a3ec8:
    if (ctx->pc == 0x2A3EC8u) {
        ctx->pc = 0x2A3EC8u;
            // 0x2a3ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A3ECCu;
        goto label_2a3ecc;
    }
    ctx->pc = 0x2A3EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3EC4u;
            // 0x2a3ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3ECCu;
label_2a3ecc:
    // 0x2a3ecc: 0x0  nop
    ctx->pc = 0x2a3eccu;
    // NOP
label_2a3ed0:
    // 0x2a3ed0: 0x8088010c  lb          $t0, 0x10C($a0)
    ctx->pc = 0x2a3ed0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a3ed4:
    // 0x2a3ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3ed8:
    // 0x2a3ed8: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x2a3ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2a3edc:
    // 0x2a3edc: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x2a3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2a3ee0:
    // 0x2a3ee0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2a3ee4:
    // 0x2a3ee4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2a3ee8:
    // 0x2a3ee8: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x2a3ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a3eec:
    // 0x2a3eec: 0x8d030080  lw          $v1, 0x80($t0)
    ctx->pc = 0x2a3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
label_2a3ef0:
    // 0x2a3ef0: 0x2504007c  addiu       $a0, $t0, 0x7C
    ctx->pc = 0x2a3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 124));
label_2a3ef4:
    // 0x2a3ef4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3ef8:
    // 0x2a3ef8: 0xad030080  sw          $v1, 0x80($t0)
    ctx->pc = 0x2a3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
label_2a3efc:
    // 0x2a3efc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2a3f00:
    // 0x2a3f00: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a3f04:
    // 0x2a3f04: 0xa0650015  sb          $a1, 0x15($v1)
    ctx->pc = 0x2a3f04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 5));
label_2a3f08:
    // 0x2a3f08: 0xa0660014  sb          $a2, 0x14($v1)
    ctx->pc = 0x2a3f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 6));
label_2a3f0c:
    // 0x2a3f0c: 0xe46c0008  swc1        $f12, 0x8($v1)
    ctx->pc = 0x2a3f0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2a3f10:
    // 0x2a3f10: 0xe46d000c  swc1        $f13, 0xC($v1)
    ctx->pc = 0x2a3f10u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2a3f14:
    // 0x2a3f14: 0x3e00008  jr          $ra
label_2a3f18:
    if (ctx->pc == 0x2A3F18u) {
        ctx->pc = 0x2A3F18u;
            // 0x2a3f18: 0xac670010  sw          $a3, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
        ctx->pc = 0x2A3F1Cu;
        goto label_2a3f1c;
    }
    ctx->pc = 0x2A3F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F14u;
            // 0x2a3f18: 0xac670010  sw          $a3, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3F1Cu;
label_2a3f1c:
    // 0x2a3f1c: 0x0  nop
    ctx->pc = 0x2a3f1cu;
    // NOP
label_2a3f20:
    // 0x2a3f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a3f24:
    // 0x2a3f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a3f28:
    // 0x2a3f28: 0x8086010c  lb          $a2, 0x10C($a0)
    ctx->pc = 0x2a3f28u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a3f2c:
    // 0x2a3f2c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2a3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2a3f30:
    // 0x2a3f30: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a3f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2a3f34:
    // 0x2a3f34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2a3f38:
    // 0x2a3f38: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x2a3f38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a3f3c:
    // 0x2a3f3c: 0x8d270080  lw          $a3, 0x80($t1)
    ctx->pc = 0x2a3f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
label_2a3f40:
    // 0x2a3f40: 0x2528007c  addiu       $t0, $t1, 0x7C
    ctx->pc = 0x2a3f40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 124));
label_2a3f44:
    // 0x2a3f44: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2a3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2a3f48:
    // 0x2a3f48: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2a3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_2a3f4c:
    // 0x2a3f4c: 0x18e00012  blez        $a3, . + 4 + (0x12 << 2)
label_2a3f50:
    if (ctx->pc == 0x2A3F50u) {
        ctx->pc = 0x2A3F50u;
            // 0x2a3f50: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x2A3F54u;
        goto label_2a3f54;
    }
    ctx->pc = 0x2A3F4Cu;
    {
        const bool branch_taken_0x2a3f4c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2A3F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F4Cu;
            // 0x2a3f50: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3f4c) {
            ctx->pc = 0x2A3F98u;
            goto label_2a3f98;
        }
    }
    ctx->pc = 0x2A3F54u;
label_2a3f54:
    // 0x2a3f54: 0x8066000c  lb          $a2, 0xC($v1)
    ctx->pc = 0x2a3f54u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
label_2a3f58:
    // 0x2a3f58: 0x8085010f  lb          $a1, 0x10F($a0)
    ctx->pc = 0x2a3f58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_2a3f5c:
    // 0x2a3f5c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2a3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2a3f60:
    // 0x2a3f60: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x2a3f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
label_2a3f64:
    // 0x2a3f64: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x2a3f64u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a3f68:
    // 0x2a3f68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a3f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2a3f6c:
    // 0x2a3f6c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2a3f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2a3f70:
    // 0x2a3f70: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
label_2a3f74:
    if (ctx->pc == 0x2A3F74u) {
        ctx->pc = 0x2A3F74u;
            // 0x2a3f74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2A3F78u;
        goto label_2a3f78;
    }
    ctx->pc = 0x2A3F70u;
    {
        const bool branch_taken_0x2a3f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3f70) {
            ctx->pc = 0x2A3F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F70u;
            // 0x2a3f74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A3FF8u;
            goto label_2a3ff8;
        }
    }
    ctx->pc = 0x2A3F78u;
label_2a3f78:
    // 0x2a3f78: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2a3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2a3f7c:
    // 0x2a3f7c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2a3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_2a3f80:
    // 0x2a3f80: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x2a3f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2a3f84:
    // 0x2a3f84: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a3f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a3f88:
    // 0x2a3f88: 0x320f809  jalr        $t9
label_2a3f8c:
    if (ctx->pc == 0x2A3F8Cu) {
        ctx->pc = 0x2A3F90u;
        goto label_2a3f90;
    }
    ctx->pc = 0x2A3F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A3F90u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3F90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F90u; }
            if (ctx->pc != 0x2A3F90u) { return; }
        }
        }
    }
    ctx->pc = 0x2A3F90u;
label_2a3f90:
    // 0x2a3f90: 0x10000018  b           . + 4 + (0x18 << 2)
label_2a3f94:
    if (ctx->pc == 0x2A3F94u) {
        ctx->pc = 0x2A3F98u;
        goto label_2a3f98;
    }
    ctx->pc = 0x2A3F90u;
    {
        const bool branch_taken_0x2a3f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3f90) {
            ctx->pc = 0x2A3FF4u;
            goto label_2a3ff4;
        }
    }
    ctx->pc = 0x2A3F98u;
label_2a3f98:
    // 0x2a3f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3f9c:
    // 0x2a3f9c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2a3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2a3fa0:
    // 0x2a3fa0: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x2a3fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2a3fa4:
    // 0x2a3fa4: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2a3fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2a3fa8:
    // 0x2a3fa8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2a3fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2a3fac:
    // 0x2a3fac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a3facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2a3fb0:
    // 0x2a3fb0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2a3fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2a3fb4:
    // 0x2a3fb4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2a3fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2a3fb8:
    // 0x2a3fb8: 0x8ca50080  lw          $a1, 0x80($a1)
    ctx->pc = 0x2a3fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_2a3fbc:
    // 0x2a3fbc: 0xa0282a  slt         $a1, $a1, $zero
    ctx->pc = 0x2a3fbcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2a3fc0:
    // 0x2a3fc0: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2a3fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_2a3fc4:
    // 0x2a3fc4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2a3fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2a3fc8:
    // 0x2a3fc8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2a3fcc:
    if (ctx->pc == 0x2A3FCCu) {
        ctx->pc = 0x2A3FD0u;
        goto label_2a3fd0;
    }
    ctx->pc = 0x2A3FC8u;
    {
        const bool branch_taken_0x2a3fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3fc8) {
            ctx->pc = 0x2A3FF4u;
            goto label_2a3ff4;
        }
    }
    ctx->pc = 0x2A3FD0u;
label_2a3fd0:
    // 0x2a3fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a3fd4:
    // 0x2a3fd4: 0xad220080  sw          $v0, 0x80($t1)
    ctx->pc = 0x2a3fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 2));
label_2a3fd8:
    // 0x2a3fd8: 0x8082010c  lb          $v0, 0x10C($a0)
    ctx->pc = 0x2a3fd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a3fdc:
    // 0x2a3fdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a3fe0:
    // 0x2a3fe0: 0xa082010c  sb          $v0, 0x10C($a0)
    ctx->pc = 0x2a3fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 268), (uint8_t)GPR_U32(ctx, 2));
label_2a3fe4:
    // 0x2a3fe4: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x2a3fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2a3fe8:
    // 0x2a3fe8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a3fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a3fec:
    // 0x2a3fec: 0x320f809  jalr        $t9
label_2a3ff0:
    if (ctx->pc == 0x2A3FF0u) {
        ctx->pc = 0x2A3FF4u;
        goto label_2a3ff4;
    }
    ctx->pc = 0x2A3FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A3FF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FF4u; }
            if (ctx->pc != 0x2A3FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2A3FF4u;
label_2a3ff4:
    // 0x2a3ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3ff8:
    // 0x2a3ff8: 0x3e00008  jr          $ra
label_2a3ffc:
    if (ctx->pc == 0x2A3FFCu) {
        ctx->pc = 0x2A3FFCu;
            // 0x2a3ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A4000u;
        goto label_2a4000;
    }
    ctx->pc = 0x2A3FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3FF8u;
            // 0x2a3ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4000u;
label_2a4000:
    // 0x2a4000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a4004:
    // 0x2a4004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a4008:
    // 0x2a4008: 0x8083010c  lb          $v1, 0x10C($a0)
    ctx->pc = 0x2a4008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_2a400c:
    // 0x2a400c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a400cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2a4010:
    // 0x2a4010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4014:
    // 0x2a4014: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a4014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2a4018:
    // 0x2a4018: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2a4018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a401c:
    // 0x2a401c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2a4020:
    // 0x2a4020: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a4020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2a4024:
    // 0x2a4024: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2a4024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4028:
    // 0x2a4028: 0x80c20090  lb          $v0, 0x90($a2)
    ctx->pc = 0x2a4028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 144)));
label_2a402c:
    // 0x2a402c: 0x24c50084  addiu       $a1, $a2, 0x84
    ctx->pc = 0x2a402cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 132));
label_2a4030:
    // 0x2a4030: 0xa082010f  sb          $v0, 0x10F($a0)
    ctx->pc = 0x2a4030u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 271), (uint8_t)GPR_U32(ctx, 2));
label_2a4034:
    // 0x2a4034: 0x80830112  lb          $v1, 0x112($a0)
    ctx->pc = 0x2a4034u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 274)));
label_2a4038:
    // 0x2a4038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a4038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a403c:
    // 0x2a403c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a403cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a4040:
    // 0x2a4040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a4040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a4044:
    // 0x2a4044: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2a4044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2a4048:
    // 0x2a4048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a404c:
    // 0x2a404c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2a404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2a4050:
    // 0x2a4050: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a4050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_2a4054:
    // 0x2a4054: 0x80c20091  lb          $v0, 0x91($a2)
    ctx->pc = 0x2a4054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 145)));
label_2a4058:
    // 0x2a4058: 0xa0820112  sb          $v0, 0x112($a0)
    ctx->pc = 0x2a4058u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 274), (uint8_t)GPR_U32(ctx, 2));
label_2a405c:
    // 0x2a405c: 0x8cc6008c  lw          $a2, 0x8C($a2)
    ctx->pc = 0x2a405cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
label_2a4060:
    // 0x2a4060: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x2a4060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_2a4064:
    // 0x2a4064: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2a4068:
    if (ctx->pc == 0x2A4068u) {
        ctx->pc = 0x2A406Cu;
        goto label_2a406c;
    }
    ctx->pc = 0x2A4064u;
    {
        const bool branch_taken_0x2a4064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4064) {
            ctx->pc = 0x2A40A4u;
            goto label_2a40a4;
        }
    }
    ctx->pc = 0x2A406Cu;
label_2a406c:
    // 0x2a406c: 0x80830112  lb          $v1, 0x112($a0)
    ctx->pc = 0x2a406cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 274)));
label_2a4070:
    // 0x2a4070: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x2a4070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a4074:
    // 0x2a4074: 0x8082010f  lb          $v0, 0x10F($a0)
    ctx->pc = 0x2a4074u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_2a4078:
    // 0x2a4078: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x2a4078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a407c:
    // 0x2a407c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a4080:
    // 0x2a4080: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a4080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a4084:
    // 0x2a4084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a4084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a4088:
    // 0x2a4088: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2a4088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2a408c:
    // 0x2a408c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4090:
    // 0x2a4090: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2a4090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2a4094:
    // 0x2a4094: 0xc0bf900  jal         func_2FE400
label_2a4098:
    if (ctx->pc == 0x2A4098u) {
        ctx->pc = 0x2A4098u;
            // 0x2a4098: 0x34c60010  ori         $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->pc = 0x2A409Cu;
        goto label_2a409c;
    }
    ctx->pc = 0x2A4094u;
    SET_GPR_U32(ctx, 31, 0x2A409Cu);
    ctx->pc = 0x2A4098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4094u;
            // 0x2a4098: 0x34c60010  ori         $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE400u;
    if (runtime->hasFunction(0x2FE400u)) {
        auto targetFn = runtime->lookupFunction(0x2FE400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A409Cu; }
        if (ctx->pc != 0x2A409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE400_0x2fe400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A409Cu; }
        if (ctx->pc != 0x2A409Cu) { return; }
    }
    ctx->pc = 0x2A409Cu;
label_2a409c:
    // 0x2a409c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2a40a0:
    if (ctx->pc == 0x2A40A0u) {
        ctx->pc = 0x2A40A0u;
            // 0x2a40a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2A40A4u;
        goto label_2a40a4;
    }
    ctx->pc = 0x2A409Cu;
    {
        const bool branch_taken_0x2a409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A40A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A409Cu;
            // 0x2a40a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a409c) {
            ctx->pc = 0x2A410Cu;
            goto label_2a410c;
        }
    }
    ctx->pc = 0x2A40A4u;
label_2a40a4:
    // 0x2a40a4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2a40a8:
    if (ctx->pc == 0x2A40A8u) {
        ctx->pc = 0x2A40A8u;
            // 0x2a40a8: 0x80830112  lb          $v1, 0x112($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 274)));
        ctx->pc = 0x2A40ACu;
        goto label_2a40ac;
    }
    ctx->pc = 0x2A40A4u;
    {
        const bool branch_taken_0x2a40a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a40a4) {
            ctx->pc = 0x2A40A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A40A4u;
            // 0x2a40a8: 0x80830112  lb          $v1, 0x112($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 274)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A40E4u;
            goto label_2a40e4;
        }
    }
    ctx->pc = 0x2A40ACu;
label_2a40ac:
    // 0x2a40ac: 0x80830112  lb          $v1, 0x112($a0)
    ctx->pc = 0x2a40acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 274)));
label_2a40b0:
    // 0x2a40b0: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x2a40b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a40b4:
    // 0x2a40b4: 0x8082010f  lb          $v0, 0x10F($a0)
    ctx->pc = 0x2a40b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_2a40b8:
    // 0x2a40b8: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x2a40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a40bc:
    // 0x2a40bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a40c0:
    // 0x2a40c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a40c4:
    // 0x2a40c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a40c8:
    // 0x2a40c8: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2a40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2a40cc:
    // 0x2a40cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a40d0:
    // 0x2a40d0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2a40d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2a40d4:
    // 0x2a40d4: 0xc0bf900  jal         func_2FE400
label_2a40d8:
    if (ctx->pc == 0x2A40D8u) {
        ctx->pc = 0x2A40D8u;
            // 0x2a40d8: 0x34c60020  ori         $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x2A40DCu;
        goto label_2a40dc;
    }
    ctx->pc = 0x2A40D4u;
    SET_GPR_U32(ctx, 31, 0x2A40DCu);
    ctx->pc = 0x2A40D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A40D4u;
            // 0x2a40d8: 0x34c60020  ori         $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE400u;
    if (runtime->hasFunction(0x2FE400u)) {
        auto targetFn = runtime->lookupFunction(0x2FE400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40DCu; }
        if (ctx->pc != 0x2A40DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE400_0x2fe400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40DCu; }
        if (ctx->pc != 0x2A40DCu) { return; }
    }
    ctx->pc = 0x2A40DCu;
label_2a40dc:
    // 0x2a40dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a40e0:
    if (ctx->pc == 0x2A40E0u) {
        ctx->pc = 0x2A40E4u;
        goto label_2a40e4;
    }
    ctx->pc = 0x2A40DCu;
    {
        const bool branch_taken_0x2a40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a40dc) {
            ctx->pc = 0x2A4108u;
            goto label_2a4108;
        }
    }
    ctx->pc = 0x2A40E4u;
label_2a40e4:
    // 0x2a40e4: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x2a40e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a40e8:
    // 0x2a40e8: 0x8082010f  lb          $v0, 0x10F($a0)
    ctx->pc = 0x2a40e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_2a40ec:
    // 0x2a40ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a40f0:
    // 0x2a40f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a40f4:
    // 0x2a40f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a40f8:
    // 0x2a40f8: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2a40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2a40fc:
    // 0x2a40fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4100:
    // 0x2a4100: 0xc0bf918  jal         func_2FE460
label_2a4104:
    if (ctx->pc == 0x2A4104u) {
        ctx->pc = 0x2A4104u;
            // 0x2a4104: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x2A4108u;
        goto label_2a4108;
    }
    ctx->pc = 0x2A4100u;
    SET_GPR_U32(ctx, 31, 0x2A4108u);
    ctx->pc = 0x2A4104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4100u;
            // 0x2a4104: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE460u;
    if (runtime->hasFunction(0x2FE460u)) {
        auto targetFn = runtime->lookupFunction(0x2FE460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4108u; }
        if (ctx->pc != 0x2A4108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE460_0x2fe460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4108u; }
        if (ctx->pc != 0x2A4108u) { return; }
    }
    ctx->pc = 0x2A4108u;
label_2a4108:
    // 0x2a4108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a410c:
    // 0x2a410c: 0x3e00008  jr          $ra
label_2a4110:
    if (ctx->pc == 0x2A4110u) {
        ctx->pc = 0x2A4110u;
            // 0x2a4110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A4114u;
        goto label_2a4114;
    }
    ctx->pc = 0x2A410Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A410Cu;
            // 0x2a4110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4114u;
label_2a4114:
    // 0x2a4114: 0x0  nop
    ctx->pc = 0x2a4114u;
    // NOP
label_2a4118:
    // 0x2a4118: 0x0  nop
    ctx->pc = 0x2a4118u;
    // NOP
label_2a411c:
    // 0x2a411c: 0x0  nop
    ctx->pc = 0x2a411cu;
    // NOP
label_2a4120:
    // 0x2a4120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a4124:
    // 0x2a4124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a4128:
    // 0x2a4128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a4128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a412c:
    // 0x2a412c: 0xc0bfa64  jal         func_2FE990
label_2a4130:
    if (ctx->pc == 0x2A4130u) {
        ctx->pc = 0x2A4130u;
            // 0x2a4130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4134u;
        goto label_2a4134;
    }
    ctx->pc = 0x2A412Cu;
    SET_GPR_U32(ctx, 31, 0x2A4134u);
    ctx->pc = 0x2A4130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A412Cu;
            // 0x2a4130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE990u;
    if (runtime->hasFunction(0x2FE990u)) {
        auto targetFn = runtime->lookupFunction(0x2FE990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4134u; }
        if (ctx->pc != 0x2A4134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE990_0x2fe990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4134u; }
        if (ctx->pc != 0x2A4134u) { return; }
    }
    ctx->pc = 0x2A4134u;
label_2a4134:
    // 0x2a4134: 0xa200010c  sb          $zero, 0x10C($s0)
    ctx->pc = 0x2a4134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 0));
label_2a4138:
    // 0x2a4138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a413c:
    // 0x2a413c: 0xa200010f  sb          $zero, 0x10F($s0)
    ctx->pc = 0x2a413cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 271), (uint8_t)GPR_U32(ctx, 0));
label_2a4140:
    // 0x2a4140: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x2a4140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_2a4144:
    // 0x2a4144: 0xa200010e  sb          $zero, 0x10E($s0)
    ctx->pc = 0x2a4144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 0));
label_2a4148:
    // 0x2a4148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a414c:
    // 0x2a414c: 0xa200010d  sb          $zero, 0x10D($s0)
    ctx->pc = 0x2a414cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 0));
label_2a4150:
    // 0x2a4150: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x2a4150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2a4154:
    // 0x2a4154: 0xa2000110  sb          $zero, 0x110($s0)
    ctx->pc = 0x2a4154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 0));
label_2a4158:
    // 0x2a4158: 0xa2000111  sb          $zero, 0x111($s0)
    ctx->pc = 0x2a4158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 273), (uint8_t)GPR_U32(ctx, 0));
label_2a415c:
    // 0x2a415c: 0xa2000112  sb          $zero, 0x112($s0)
    ctx->pc = 0x2a415cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 274), (uint8_t)GPR_U32(ctx, 0));
label_2a4160:
    // 0x2a4160: 0xa2000113  sb          $zero, 0x113($s0)
    ctx->pc = 0x2a4160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 275), (uint8_t)GPR_U32(ctx, 0));
label_2a4164:
    // 0x2a4164: 0xa2000114  sb          $zero, 0x114($s0)
    ctx->pc = 0x2a4164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 276), (uint8_t)GPR_U32(ctx, 0));
label_2a4168:
    // 0x2a4168: 0xc04a576  jal         func_1295D8
label_2a416c:
    if (ctx->pc == 0x2A416Cu) {
        ctx->pc = 0x2A416Cu;
            // 0x2a416c: 0xa2020115  sb          $v0, 0x115($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2A4170u;
        goto label_2a4170;
    }
    ctx->pc = 0x2A4168u;
    SET_GPR_U32(ctx, 31, 0x2A4170u);
    ctx->pc = 0x2A416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4168u;
            // 0x2a416c: 0xa2020115  sb          $v0, 0x115($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4170u; }
        if (ctx->pc != 0x2A4170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4170u; }
        if (ctx->pc != 0x2A4170u) { return; }
    }
    ctx->pc = 0x2A4170u;
label_2a4170:
    // 0x2a4170: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a4170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4174:
    // 0x2a4174: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2a4174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_2a4178:
    // 0x2a4178: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2a4178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_2a417c:
    // 0x2a417c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4180:
    // 0x2a4180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a4180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4184:
    // 0x2a4184: 0x3e00008  jr          $ra
label_2a4188:
    if (ctx->pc == 0x2A4188u) {
        ctx->pc = 0x2A4188u;
            // 0x2a4188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A418Cu;
        goto label_2a418c;
    }
    ctx->pc = 0x2A4184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4184u;
            // 0x2a4188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A418Cu;
label_2a418c:
    // 0x2a418c: 0x0  nop
    ctx->pc = 0x2a418cu;
    // NOP
label_2a4190:
    // 0x2a4190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a4190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a4194:
    // 0x2a4194: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a4194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a4198:
    // 0x2a4198: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a4198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a419c:
    // 0x2a419c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a41a0:
    // 0x2a41a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a41a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a41a4:
    // 0x2a41a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a41a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a41a8:
    // 0x2a41a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a41a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a41ac:
    // 0x2a41ac: 0x5963c  dsll32      $s2, $a1, 24
    ctx->pc = 0x2a41acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 24));
label_2a41b0:
    // 0x2a41b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a41b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a41b4:
    // 0x2a41b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a41b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a41b8:
    // 0x2a41b8: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x2a41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2a41bc:
    // 0x2a41bc: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x2a41bcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_2a41c0:
    // 0x2a41c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a41c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a41c4:
    // 0x2a41c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a41c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a41c8:
    // 0x2a41c8: 0xc0cc4a0  jal         func_331280
label_2a41cc:
    if (ctx->pc == 0x2A41CCu) {
        ctx->pc = 0x2A41CCu;
            // 0x2a41cc: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x2A41D0u;
        goto label_2a41d0;
    }
    ctx->pc = 0x2A41C8u;
    SET_GPR_U32(ctx, 31, 0x2A41D0u);
    ctx->pc = 0x2A41CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A41C8u;
            // 0x2a41cc: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x331280u;
    if (runtime->hasFunction(0x331280u)) {
        auto targetFn = runtime->lookupFunction(0x331280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41D0u; }
        if (ctx->pc != 0x2A41D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00331280_0x331280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41D0u; }
        if (ctx->pc != 0x2A41D0u) { return; }
    }
    ctx->pc = 0x2A41D0u;
label_2a41d0:
    // 0x2a41d0: 0x13363c  dsll32      $a2, $s3, 24
    ctx->pc = 0x2a41d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 24));
label_2a41d4:
    // 0x2a41d4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2a41d4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_2a41d8:
    // 0x2a41d8: 0x58c00007  blezl       $a2, . + 4 + (0x7 << 2)
label_2a41dc:
    if (ctx->pc == 0x2A41DCu) {
        ctx->pc = 0x2A41DCu;
            // 0x2a41dc: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->pc = 0x2A41E0u;
        goto label_2a41e0;
    }
    ctx->pc = 0x2A41D8u;
    {
        const bool branch_taken_0x2a41d8 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2a41d8) {
            ctx->pc = 0x2A41DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A41D8u;
            // 0x2a41dc: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A41F8u;
            goto label_2a41f8;
        }
    }
    ctx->pc = 0x2A41E0u;
label_2a41e0:
    // 0x2a41e0: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x2a41e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_2a41e4:
    // 0x2a41e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2a41e8:
    if (ctx->pc == 0x2A41E8u) {
        ctx->pc = 0x2A41ECu;
        goto label_2a41ec;
    }
    ctx->pc = 0x2A41E4u;
    {
        const bool branch_taken_0x2a41e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a41e4) {
            ctx->pc = 0x2A41F4u;
            goto label_2a41f4;
        }
    }
    ctx->pc = 0x2A41ECu;
label_2a41ec:
    // 0x2a41ec: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2a41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2a41f0:
    // 0x2a41f0: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x2a41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_2a41f4:
    // 0x2a41f4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2a41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2a41f8:
    // 0x2a41f8: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x2a41f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2a41fc:
    // 0x2a41fc: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2a41fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2a4200:
    // 0x2a4200: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2a4200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2a4204:
    // 0x2a4204: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x2a4204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2a4208:
    // 0x2a4208: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2a4208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2a420c:
    // 0x2a420c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2a420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2a4210:
    // 0x2a4210: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x2a4210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_2a4214:
    // 0x2a4214: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2a4214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2a4218:
    // 0x2a4218: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a4218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a421c:
    // 0x2a421c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a4220:
    // 0x2a4220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4224:
    // 0x2a4224: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a4224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4228:
    // 0x2a4228: 0x320f809  jalr        $t9
label_2a422c:
    if (ctx->pc == 0x2A422Cu) {
        ctx->pc = 0x2A422Cu;
            // 0x2a422c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A4230u;
        goto label_2a4230;
    }
    ctx->pc = 0x2A4228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A4230u);
        ctx->pc = 0x2A422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4228u;
            // 0x2a422c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A4230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A4230u; }
            if (ctx->pc != 0x2A4230u) { return; }
        }
        }
    }
    ctx->pc = 0x2A4230u;
label_2a4230:
    // 0x2a4230: 0xa230010d  sb          $s0, 0x10D($s1)
    ctx->pc = 0x2a4230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 269), (uint8_t)GPR_U32(ctx, 16));
label_2a4234:
    // 0x2a4234: 0xa230010e  sb          $s0, 0x10E($s1)
    ctx->pc = 0x2a4234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 270), (uint8_t)GPR_U32(ctx, 16));
label_2a4238:
    // 0x2a4238: 0xa2300112  sb          $s0, 0x112($s1)
    ctx->pc = 0x2a4238u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 274), (uint8_t)GPR_U32(ctx, 16));
label_2a423c:
    // 0x2a423c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a423cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4240:
    // 0x2a4240: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a4240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4244:
    // 0x2a4244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a4244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4248:
    // 0x2a4248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a4248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a424c:
    // 0x2a424c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a424cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4250:
    // 0x2a4250: 0x3e00008  jr          $ra
label_2a4254:
    if (ctx->pc == 0x2A4254u) {
        ctx->pc = 0x2A4254u;
            // 0x2a4254: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2A4258u;
        goto label_2a4258;
    }
    ctx->pc = 0x2A4250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4250u;
            // 0x2a4254: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4258u;
label_2a4258:
    // 0x2a4258: 0x0  nop
    ctx->pc = 0x2a4258u;
    // NOP
label_2a425c:
    // 0x2a425c: 0x0  nop
    ctx->pc = 0x2a425cu;
    // NOP
}
