#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B3AF0
// Address: 0x4b3af0 - 0x4b4300
void sub_004B3AF0_0x4b3af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3AF0_0x4b3af0");
#endif

    switch (ctx->pc) {
        case 0x4b3af0u: goto label_4b3af0;
        case 0x4b3af4u: goto label_4b3af4;
        case 0x4b3af8u: goto label_4b3af8;
        case 0x4b3afcu: goto label_4b3afc;
        case 0x4b3b00u: goto label_4b3b00;
        case 0x4b3b04u: goto label_4b3b04;
        case 0x4b3b08u: goto label_4b3b08;
        case 0x4b3b0cu: goto label_4b3b0c;
        case 0x4b3b10u: goto label_4b3b10;
        case 0x4b3b14u: goto label_4b3b14;
        case 0x4b3b18u: goto label_4b3b18;
        case 0x4b3b1cu: goto label_4b3b1c;
        case 0x4b3b20u: goto label_4b3b20;
        case 0x4b3b24u: goto label_4b3b24;
        case 0x4b3b28u: goto label_4b3b28;
        case 0x4b3b2cu: goto label_4b3b2c;
        case 0x4b3b30u: goto label_4b3b30;
        case 0x4b3b34u: goto label_4b3b34;
        case 0x4b3b38u: goto label_4b3b38;
        case 0x4b3b3cu: goto label_4b3b3c;
        case 0x4b3b40u: goto label_4b3b40;
        case 0x4b3b44u: goto label_4b3b44;
        case 0x4b3b48u: goto label_4b3b48;
        case 0x4b3b4cu: goto label_4b3b4c;
        case 0x4b3b50u: goto label_4b3b50;
        case 0x4b3b54u: goto label_4b3b54;
        case 0x4b3b58u: goto label_4b3b58;
        case 0x4b3b5cu: goto label_4b3b5c;
        case 0x4b3b60u: goto label_4b3b60;
        case 0x4b3b64u: goto label_4b3b64;
        case 0x4b3b68u: goto label_4b3b68;
        case 0x4b3b6cu: goto label_4b3b6c;
        case 0x4b3b70u: goto label_4b3b70;
        case 0x4b3b74u: goto label_4b3b74;
        case 0x4b3b78u: goto label_4b3b78;
        case 0x4b3b7cu: goto label_4b3b7c;
        case 0x4b3b80u: goto label_4b3b80;
        case 0x4b3b84u: goto label_4b3b84;
        case 0x4b3b88u: goto label_4b3b88;
        case 0x4b3b8cu: goto label_4b3b8c;
        case 0x4b3b90u: goto label_4b3b90;
        case 0x4b3b94u: goto label_4b3b94;
        case 0x4b3b98u: goto label_4b3b98;
        case 0x4b3b9cu: goto label_4b3b9c;
        case 0x4b3ba0u: goto label_4b3ba0;
        case 0x4b3ba4u: goto label_4b3ba4;
        case 0x4b3ba8u: goto label_4b3ba8;
        case 0x4b3bacu: goto label_4b3bac;
        case 0x4b3bb0u: goto label_4b3bb0;
        case 0x4b3bb4u: goto label_4b3bb4;
        case 0x4b3bb8u: goto label_4b3bb8;
        case 0x4b3bbcu: goto label_4b3bbc;
        case 0x4b3bc0u: goto label_4b3bc0;
        case 0x4b3bc4u: goto label_4b3bc4;
        case 0x4b3bc8u: goto label_4b3bc8;
        case 0x4b3bccu: goto label_4b3bcc;
        case 0x4b3bd0u: goto label_4b3bd0;
        case 0x4b3bd4u: goto label_4b3bd4;
        case 0x4b3bd8u: goto label_4b3bd8;
        case 0x4b3bdcu: goto label_4b3bdc;
        case 0x4b3be0u: goto label_4b3be0;
        case 0x4b3be4u: goto label_4b3be4;
        case 0x4b3be8u: goto label_4b3be8;
        case 0x4b3becu: goto label_4b3bec;
        case 0x4b3bf0u: goto label_4b3bf0;
        case 0x4b3bf4u: goto label_4b3bf4;
        case 0x4b3bf8u: goto label_4b3bf8;
        case 0x4b3bfcu: goto label_4b3bfc;
        case 0x4b3c00u: goto label_4b3c00;
        case 0x4b3c04u: goto label_4b3c04;
        case 0x4b3c08u: goto label_4b3c08;
        case 0x4b3c0cu: goto label_4b3c0c;
        case 0x4b3c10u: goto label_4b3c10;
        case 0x4b3c14u: goto label_4b3c14;
        case 0x4b3c18u: goto label_4b3c18;
        case 0x4b3c1cu: goto label_4b3c1c;
        case 0x4b3c20u: goto label_4b3c20;
        case 0x4b3c24u: goto label_4b3c24;
        case 0x4b3c28u: goto label_4b3c28;
        case 0x4b3c2cu: goto label_4b3c2c;
        case 0x4b3c30u: goto label_4b3c30;
        case 0x4b3c34u: goto label_4b3c34;
        case 0x4b3c38u: goto label_4b3c38;
        case 0x4b3c3cu: goto label_4b3c3c;
        case 0x4b3c40u: goto label_4b3c40;
        case 0x4b3c44u: goto label_4b3c44;
        case 0x4b3c48u: goto label_4b3c48;
        case 0x4b3c4cu: goto label_4b3c4c;
        case 0x4b3c50u: goto label_4b3c50;
        case 0x4b3c54u: goto label_4b3c54;
        case 0x4b3c58u: goto label_4b3c58;
        case 0x4b3c5cu: goto label_4b3c5c;
        case 0x4b3c60u: goto label_4b3c60;
        case 0x4b3c64u: goto label_4b3c64;
        case 0x4b3c68u: goto label_4b3c68;
        case 0x4b3c6cu: goto label_4b3c6c;
        case 0x4b3c70u: goto label_4b3c70;
        case 0x4b3c74u: goto label_4b3c74;
        case 0x4b3c78u: goto label_4b3c78;
        case 0x4b3c7cu: goto label_4b3c7c;
        case 0x4b3c80u: goto label_4b3c80;
        case 0x4b3c84u: goto label_4b3c84;
        case 0x4b3c88u: goto label_4b3c88;
        case 0x4b3c8cu: goto label_4b3c8c;
        case 0x4b3c90u: goto label_4b3c90;
        case 0x4b3c94u: goto label_4b3c94;
        case 0x4b3c98u: goto label_4b3c98;
        case 0x4b3c9cu: goto label_4b3c9c;
        case 0x4b3ca0u: goto label_4b3ca0;
        case 0x4b3ca4u: goto label_4b3ca4;
        case 0x4b3ca8u: goto label_4b3ca8;
        case 0x4b3cacu: goto label_4b3cac;
        case 0x4b3cb0u: goto label_4b3cb0;
        case 0x4b3cb4u: goto label_4b3cb4;
        case 0x4b3cb8u: goto label_4b3cb8;
        case 0x4b3cbcu: goto label_4b3cbc;
        case 0x4b3cc0u: goto label_4b3cc0;
        case 0x4b3cc4u: goto label_4b3cc4;
        case 0x4b3cc8u: goto label_4b3cc8;
        case 0x4b3cccu: goto label_4b3ccc;
        case 0x4b3cd0u: goto label_4b3cd0;
        case 0x4b3cd4u: goto label_4b3cd4;
        case 0x4b3cd8u: goto label_4b3cd8;
        case 0x4b3cdcu: goto label_4b3cdc;
        case 0x4b3ce0u: goto label_4b3ce0;
        case 0x4b3ce4u: goto label_4b3ce4;
        case 0x4b3ce8u: goto label_4b3ce8;
        case 0x4b3cecu: goto label_4b3cec;
        case 0x4b3cf0u: goto label_4b3cf0;
        case 0x4b3cf4u: goto label_4b3cf4;
        case 0x4b3cf8u: goto label_4b3cf8;
        case 0x4b3cfcu: goto label_4b3cfc;
        case 0x4b3d00u: goto label_4b3d00;
        case 0x4b3d04u: goto label_4b3d04;
        case 0x4b3d08u: goto label_4b3d08;
        case 0x4b3d0cu: goto label_4b3d0c;
        case 0x4b3d10u: goto label_4b3d10;
        case 0x4b3d14u: goto label_4b3d14;
        case 0x4b3d18u: goto label_4b3d18;
        case 0x4b3d1cu: goto label_4b3d1c;
        case 0x4b3d20u: goto label_4b3d20;
        case 0x4b3d24u: goto label_4b3d24;
        case 0x4b3d28u: goto label_4b3d28;
        case 0x4b3d2cu: goto label_4b3d2c;
        case 0x4b3d30u: goto label_4b3d30;
        case 0x4b3d34u: goto label_4b3d34;
        case 0x4b3d38u: goto label_4b3d38;
        case 0x4b3d3cu: goto label_4b3d3c;
        case 0x4b3d40u: goto label_4b3d40;
        case 0x4b3d44u: goto label_4b3d44;
        case 0x4b3d48u: goto label_4b3d48;
        case 0x4b3d4cu: goto label_4b3d4c;
        case 0x4b3d50u: goto label_4b3d50;
        case 0x4b3d54u: goto label_4b3d54;
        case 0x4b3d58u: goto label_4b3d58;
        case 0x4b3d5cu: goto label_4b3d5c;
        case 0x4b3d60u: goto label_4b3d60;
        case 0x4b3d64u: goto label_4b3d64;
        case 0x4b3d68u: goto label_4b3d68;
        case 0x4b3d6cu: goto label_4b3d6c;
        case 0x4b3d70u: goto label_4b3d70;
        case 0x4b3d74u: goto label_4b3d74;
        case 0x4b3d78u: goto label_4b3d78;
        case 0x4b3d7cu: goto label_4b3d7c;
        case 0x4b3d80u: goto label_4b3d80;
        case 0x4b3d84u: goto label_4b3d84;
        case 0x4b3d88u: goto label_4b3d88;
        case 0x4b3d8cu: goto label_4b3d8c;
        case 0x4b3d90u: goto label_4b3d90;
        case 0x4b3d94u: goto label_4b3d94;
        case 0x4b3d98u: goto label_4b3d98;
        case 0x4b3d9cu: goto label_4b3d9c;
        case 0x4b3da0u: goto label_4b3da0;
        case 0x4b3da4u: goto label_4b3da4;
        case 0x4b3da8u: goto label_4b3da8;
        case 0x4b3dacu: goto label_4b3dac;
        case 0x4b3db0u: goto label_4b3db0;
        case 0x4b3db4u: goto label_4b3db4;
        case 0x4b3db8u: goto label_4b3db8;
        case 0x4b3dbcu: goto label_4b3dbc;
        case 0x4b3dc0u: goto label_4b3dc0;
        case 0x4b3dc4u: goto label_4b3dc4;
        case 0x4b3dc8u: goto label_4b3dc8;
        case 0x4b3dccu: goto label_4b3dcc;
        case 0x4b3dd0u: goto label_4b3dd0;
        case 0x4b3dd4u: goto label_4b3dd4;
        case 0x4b3dd8u: goto label_4b3dd8;
        case 0x4b3ddcu: goto label_4b3ddc;
        case 0x4b3de0u: goto label_4b3de0;
        case 0x4b3de4u: goto label_4b3de4;
        case 0x4b3de8u: goto label_4b3de8;
        case 0x4b3decu: goto label_4b3dec;
        case 0x4b3df0u: goto label_4b3df0;
        case 0x4b3df4u: goto label_4b3df4;
        case 0x4b3df8u: goto label_4b3df8;
        case 0x4b3dfcu: goto label_4b3dfc;
        case 0x4b3e00u: goto label_4b3e00;
        case 0x4b3e04u: goto label_4b3e04;
        case 0x4b3e08u: goto label_4b3e08;
        case 0x4b3e0cu: goto label_4b3e0c;
        case 0x4b3e10u: goto label_4b3e10;
        case 0x4b3e14u: goto label_4b3e14;
        case 0x4b3e18u: goto label_4b3e18;
        case 0x4b3e1cu: goto label_4b3e1c;
        case 0x4b3e20u: goto label_4b3e20;
        case 0x4b3e24u: goto label_4b3e24;
        case 0x4b3e28u: goto label_4b3e28;
        case 0x4b3e2cu: goto label_4b3e2c;
        case 0x4b3e30u: goto label_4b3e30;
        case 0x4b3e34u: goto label_4b3e34;
        case 0x4b3e38u: goto label_4b3e38;
        case 0x4b3e3cu: goto label_4b3e3c;
        case 0x4b3e40u: goto label_4b3e40;
        case 0x4b3e44u: goto label_4b3e44;
        case 0x4b3e48u: goto label_4b3e48;
        case 0x4b3e4cu: goto label_4b3e4c;
        case 0x4b3e50u: goto label_4b3e50;
        case 0x4b3e54u: goto label_4b3e54;
        case 0x4b3e58u: goto label_4b3e58;
        case 0x4b3e5cu: goto label_4b3e5c;
        case 0x4b3e60u: goto label_4b3e60;
        case 0x4b3e64u: goto label_4b3e64;
        case 0x4b3e68u: goto label_4b3e68;
        case 0x4b3e6cu: goto label_4b3e6c;
        case 0x4b3e70u: goto label_4b3e70;
        case 0x4b3e74u: goto label_4b3e74;
        case 0x4b3e78u: goto label_4b3e78;
        case 0x4b3e7cu: goto label_4b3e7c;
        case 0x4b3e80u: goto label_4b3e80;
        case 0x4b3e84u: goto label_4b3e84;
        case 0x4b3e88u: goto label_4b3e88;
        case 0x4b3e8cu: goto label_4b3e8c;
        case 0x4b3e90u: goto label_4b3e90;
        case 0x4b3e94u: goto label_4b3e94;
        case 0x4b3e98u: goto label_4b3e98;
        case 0x4b3e9cu: goto label_4b3e9c;
        case 0x4b3ea0u: goto label_4b3ea0;
        case 0x4b3ea4u: goto label_4b3ea4;
        case 0x4b3ea8u: goto label_4b3ea8;
        case 0x4b3eacu: goto label_4b3eac;
        case 0x4b3eb0u: goto label_4b3eb0;
        case 0x4b3eb4u: goto label_4b3eb4;
        case 0x4b3eb8u: goto label_4b3eb8;
        case 0x4b3ebcu: goto label_4b3ebc;
        case 0x4b3ec0u: goto label_4b3ec0;
        case 0x4b3ec4u: goto label_4b3ec4;
        case 0x4b3ec8u: goto label_4b3ec8;
        case 0x4b3eccu: goto label_4b3ecc;
        case 0x4b3ed0u: goto label_4b3ed0;
        case 0x4b3ed4u: goto label_4b3ed4;
        case 0x4b3ed8u: goto label_4b3ed8;
        case 0x4b3edcu: goto label_4b3edc;
        case 0x4b3ee0u: goto label_4b3ee0;
        case 0x4b3ee4u: goto label_4b3ee4;
        case 0x4b3ee8u: goto label_4b3ee8;
        case 0x4b3eecu: goto label_4b3eec;
        case 0x4b3ef0u: goto label_4b3ef0;
        case 0x4b3ef4u: goto label_4b3ef4;
        case 0x4b3ef8u: goto label_4b3ef8;
        case 0x4b3efcu: goto label_4b3efc;
        case 0x4b3f00u: goto label_4b3f00;
        case 0x4b3f04u: goto label_4b3f04;
        case 0x4b3f08u: goto label_4b3f08;
        case 0x4b3f0cu: goto label_4b3f0c;
        case 0x4b3f10u: goto label_4b3f10;
        case 0x4b3f14u: goto label_4b3f14;
        case 0x4b3f18u: goto label_4b3f18;
        case 0x4b3f1cu: goto label_4b3f1c;
        case 0x4b3f20u: goto label_4b3f20;
        case 0x4b3f24u: goto label_4b3f24;
        case 0x4b3f28u: goto label_4b3f28;
        case 0x4b3f2cu: goto label_4b3f2c;
        case 0x4b3f30u: goto label_4b3f30;
        case 0x4b3f34u: goto label_4b3f34;
        case 0x4b3f38u: goto label_4b3f38;
        case 0x4b3f3cu: goto label_4b3f3c;
        case 0x4b3f40u: goto label_4b3f40;
        case 0x4b3f44u: goto label_4b3f44;
        case 0x4b3f48u: goto label_4b3f48;
        case 0x4b3f4cu: goto label_4b3f4c;
        case 0x4b3f50u: goto label_4b3f50;
        case 0x4b3f54u: goto label_4b3f54;
        case 0x4b3f58u: goto label_4b3f58;
        case 0x4b3f5cu: goto label_4b3f5c;
        case 0x4b3f60u: goto label_4b3f60;
        case 0x4b3f64u: goto label_4b3f64;
        case 0x4b3f68u: goto label_4b3f68;
        case 0x4b3f6cu: goto label_4b3f6c;
        case 0x4b3f70u: goto label_4b3f70;
        case 0x4b3f74u: goto label_4b3f74;
        case 0x4b3f78u: goto label_4b3f78;
        case 0x4b3f7cu: goto label_4b3f7c;
        case 0x4b3f80u: goto label_4b3f80;
        case 0x4b3f84u: goto label_4b3f84;
        case 0x4b3f88u: goto label_4b3f88;
        case 0x4b3f8cu: goto label_4b3f8c;
        case 0x4b3f90u: goto label_4b3f90;
        case 0x4b3f94u: goto label_4b3f94;
        case 0x4b3f98u: goto label_4b3f98;
        case 0x4b3f9cu: goto label_4b3f9c;
        case 0x4b3fa0u: goto label_4b3fa0;
        case 0x4b3fa4u: goto label_4b3fa4;
        case 0x4b3fa8u: goto label_4b3fa8;
        case 0x4b3facu: goto label_4b3fac;
        case 0x4b3fb0u: goto label_4b3fb0;
        case 0x4b3fb4u: goto label_4b3fb4;
        case 0x4b3fb8u: goto label_4b3fb8;
        case 0x4b3fbcu: goto label_4b3fbc;
        case 0x4b3fc0u: goto label_4b3fc0;
        case 0x4b3fc4u: goto label_4b3fc4;
        case 0x4b3fc8u: goto label_4b3fc8;
        case 0x4b3fccu: goto label_4b3fcc;
        case 0x4b3fd0u: goto label_4b3fd0;
        case 0x4b3fd4u: goto label_4b3fd4;
        case 0x4b3fd8u: goto label_4b3fd8;
        case 0x4b3fdcu: goto label_4b3fdc;
        case 0x4b3fe0u: goto label_4b3fe0;
        case 0x4b3fe4u: goto label_4b3fe4;
        case 0x4b3fe8u: goto label_4b3fe8;
        case 0x4b3fecu: goto label_4b3fec;
        case 0x4b3ff0u: goto label_4b3ff0;
        case 0x4b3ff4u: goto label_4b3ff4;
        case 0x4b3ff8u: goto label_4b3ff8;
        case 0x4b3ffcu: goto label_4b3ffc;
        case 0x4b4000u: goto label_4b4000;
        case 0x4b4004u: goto label_4b4004;
        case 0x4b4008u: goto label_4b4008;
        case 0x4b400cu: goto label_4b400c;
        case 0x4b4010u: goto label_4b4010;
        case 0x4b4014u: goto label_4b4014;
        case 0x4b4018u: goto label_4b4018;
        case 0x4b401cu: goto label_4b401c;
        case 0x4b4020u: goto label_4b4020;
        case 0x4b4024u: goto label_4b4024;
        case 0x4b4028u: goto label_4b4028;
        case 0x4b402cu: goto label_4b402c;
        case 0x4b4030u: goto label_4b4030;
        case 0x4b4034u: goto label_4b4034;
        case 0x4b4038u: goto label_4b4038;
        case 0x4b403cu: goto label_4b403c;
        case 0x4b4040u: goto label_4b4040;
        case 0x4b4044u: goto label_4b4044;
        case 0x4b4048u: goto label_4b4048;
        case 0x4b404cu: goto label_4b404c;
        case 0x4b4050u: goto label_4b4050;
        case 0x4b4054u: goto label_4b4054;
        case 0x4b4058u: goto label_4b4058;
        case 0x4b405cu: goto label_4b405c;
        case 0x4b4060u: goto label_4b4060;
        case 0x4b4064u: goto label_4b4064;
        case 0x4b4068u: goto label_4b4068;
        case 0x4b406cu: goto label_4b406c;
        case 0x4b4070u: goto label_4b4070;
        case 0x4b4074u: goto label_4b4074;
        case 0x4b4078u: goto label_4b4078;
        case 0x4b407cu: goto label_4b407c;
        case 0x4b4080u: goto label_4b4080;
        case 0x4b4084u: goto label_4b4084;
        case 0x4b4088u: goto label_4b4088;
        case 0x4b408cu: goto label_4b408c;
        case 0x4b4090u: goto label_4b4090;
        case 0x4b4094u: goto label_4b4094;
        case 0x4b4098u: goto label_4b4098;
        case 0x4b409cu: goto label_4b409c;
        case 0x4b40a0u: goto label_4b40a0;
        case 0x4b40a4u: goto label_4b40a4;
        case 0x4b40a8u: goto label_4b40a8;
        case 0x4b40acu: goto label_4b40ac;
        case 0x4b40b0u: goto label_4b40b0;
        case 0x4b40b4u: goto label_4b40b4;
        case 0x4b40b8u: goto label_4b40b8;
        case 0x4b40bcu: goto label_4b40bc;
        case 0x4b40c0u: goto label_4b40c0;
        case 0x4b40c4u: goto label_4b40c4;
        case 0x4b40c8u: goto label_4b40c8;
        case 0x4b40ccu: goto label_4b40cc;
        case 0x4b40d0u: goto label_4b40d0;
        case 0x4b40d4u: goto label_4b40d4;
        case 0x4b40d8u: goto label_4b40d8;
        case 0x4b40dcu: goto label_4b40dc;
        case 0x4b40e0u: goto label_4b40e0;
        case 0x4b40e4u: goto label_4b40e4;
        case 0x4b40e8u: goto label_4b40e8;
        case 0x4b40ecu: goto label_4b40ec;
        case 0x4b40f0u: goto label_4b40f0;
        case 0x4b40f4u: goto label_4b40f4;
        case 0x4b40f8u: goto label_4b40f8;
        case 0x4b40fcu: goto label_4b40fc;
        case 0x4b4100u: goto label_4b4100;
        case 0x4b4104u: goto label_4b4104;
        case 0x4b4108u: goto label_4b4108;
        case 0x4b410cu: goto label_4b410c;
        case 0x4b4110u: goto label_4b4110;
        case 0x4b4114u: goto label_4b4114;
        case 0x4b4118u: goto label_4b4118;
        case 0x4b411cu: goto label_4b411c;
        case 0x4b4120u: goto label_4b4120;
        case 0x4b4124u: goto label_4b4124;
        case 0x4b4128u: goto label_4b4128;
        case 0x4b412cu: goto label_4b412c;
        case 0x4b4130u: goto label_4b4130;
        case 0x4b4134u: goto label_4b4134;
        case 0x4b4138u: goto label_4b4138;
        case 0x4b413cu: goto label_4b413c;
        case 0x4b4140u: goto label_4b4140;
        case 0x4b4144u: goto label_4b4144;
        case 0x4b4148u: goto label_4b4148;
        case 0x4b414cu: goto label_4b414c;
        case 0x4b4150u: goto label_4b4150;
        case 0x4b4154u: goto label_4b4154;
        case 0x4b4158u: goto label_4b4158;
        case 0x4b415cu: goto label_4b415c;
        case 0x4b4160u: goto label_4b4160;
        case 0x4b4164u: goto label_4b4164;
        case 0x4b4168u: goto label_4b4168;
        case 0x4b416cu: goto label_4b416c;
        case 0x4b4170u: goto label_4b4170;
        case 0x4b4174u: goto label_4b4174;
        case 0x4b4178u: goto label_4b4178;
        case 0x4b417cu: goto label_4b417c;
        case 0x4b4180u: goto label_4b4180;
        case 0x4b4184u: goto label_4b4184;
        case 0x4b4188u: goto label_4b4188;
        case 0x4b418cu: goto label_4b418c;
        case 0x4b4190u: goto label_4b4190;
        case 0x4b4194u: goto label_4b4194;
        case 0x4b4198u: goto label_4b4198;
        case 0x4b419cu: goto label_4b419c;
        case 0x4b41a0u: goto label_4b41a0;
        case 0x4b41a4u: goto label_4b41a4;
        case 0x4b41a8u: goto label_4b41a8;
        case 0x4b41acu: goto label_4b41ac;
        case 0x4b41b0u: goto label_4b41b0;
        case 0x4b41b4u: goto label_4b41b4;
        case 0x4b41b8u: goto label_4b41b8;
        case 0x4b41bcu: goto label_4b41bc;
        case 0x4b41c0u: goto label_4b41c0;
        case 0x4b41c4u: goto label_4b41c4;
        case 0x4b41c8u: goto label_4b41c8;
        case 0x4b41ccu: goto label_4b41cc;
        case 0x4b41d0u: goto label_4b41d0;
        case 0x4b41d4u: goto label_4b41d4;
        case 0x4b41d8u: goto label_4b41d8;
        case 0x4b41dcu: goto label_4b41dc;
        case 0x4b41e0u: goto label_4b41e0;
        case 0x4b41e4u: goto label_4b41e4;
        case 0x4b41e8u: goto label_4b41e8;
        case 0x4b41ecu: goto label_4b41ec;
        case 0x4b41f0u: goto label_4b41f0;
        case 0x4b41f4u: goto label_4b41f4;
        case 0x4b41f8u: goto label_4b41f8;
        case 0x4b41fcu: goto label_4b41fc;
        case 0x4b4200u: goto label_4b4200;
        case 0x4b4204u: goto label_4b4204;
        case 0x4b4208u: goto label_4b4208;
        case 0x4b420cu: goto label_4b420c;
        case 0x4b4210u: goto label_4b4210;
        case 0x4b4214u: goto label_4b4214;
        case 0x4b4218u: goto label_4b4218;
        case 0x4b421cu: goto label_4b421c;
        case 0x4b4220u: goto label_4b4220;
        case 0x4b4224u: goto label_4b4224;
        case 0x4b4228u: goto label_4b4228;
        case 0x4b422cu: goto label_4b422c;
        case 0x4b4230u: goto label_4b4230;
        case 0x4b4234u: goto label_4b4234;
        case 0x4b4238u: goto label_4b4238;
        case 0x4b423cu: goto label_4b423c;
        case 0x4b4240u: goto label_4b4240;
        case 0x4b4244u: goto label_4b4244;
        case 0x4b4248u: goto label_4b4248;
        case 0x4b424cu: goto label_4b424c;
        case 0x4b4250u: goto label_4b4250;
        case 0x4b4254u: goto label_4b4254;
        case 0x4b4258u: goto label_4b4258;
        case 0x4b425cu: goto label_4b425c;
        case 0x4b4260u: goto label_4b4260;
        case 0x4b4264u: goto label_4b4264;
        case 0x4b4268u: goto label_4b4268;
        case 0x4b426cu: goto label_4b426c;
        case 0x4b4270u: goto label_4b4270;
        case 0x4b4274u: goto label_4b4274;
        case 0x4b4278u: goto label_4b4278;
        case 0x4b427cu: goto label_4b427c;
        case 0x4b4280u: goto label_4b4280;
        case 0x4b4284u: goto label_4b4284;
        case 0x4b4288u: goto label_4b4288;
        case 0x4b428cu: goto label_4b428c;
        case 0x4b4290u: goto label_4b4290;
        case 0x4b4294u: goto label_4b4294;
        case 0x4b4298u: goto label_4b4298;
        case 0x4b429cu: goto label_4b429c;
        case 0x4b42a0u: goto label_4b42a0;
        case 0x4b42a4u: goto label_4b42a4;
        case 0x4b42a8u: goto label_4b42a8;
        case 0x4b42acu: goto label_4b42ac;
        case 0x4b42b0u: goto label_4b42b0;
        case 0x4b42b4u: goto label_4b42b4;
        case 0x4b42b8u: goto label_4b42b8;
        case 0x4b42bcu: goto label_4b42bc;
        case 0x4b42c0u: goto label_4b42c0;
        case 0x4b42c4u: goto label_4b42c4;
        case 0x4b42c8u: goto label_4b42c8;
        case 0x4b42ccu: goto label_4b42cc;
        case 0x4b42d0u: goto label_4b42d0;
        case 0x4b42d4u: goto label_4b42d4;
        case 0x4b42d8u: goto label_4b42d8;
        case 0x4b42dcu: goto label_4b42dc;
        case 0x4b42e0u: goto label_4b42e0;
        case 0x4b42e4u: goto label_4b42e4;
        case 0x4b42e8u: goto label_4b42e8;
        case 0x4b42ecu: goto label_4b42ec;
        case 0x4b42f0u: goto label_4b42f0;
        case 0x4b42f4u: goto label_4b42f4;
        case 0x4b42f8u: goto label_4b42f8;
        case 0x4b42fcu: goto label_4b42fc;
        default: break;
    }

    ctx->pc = 0x4b3af0u;

label_4b3af0:
    // 0x4b3af0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4b3af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4b3af4:
    // 0x4b3af4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4b3af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4b3af8:
    // 0x4b3af8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4b3af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4b3afc:
    // 0x4b3afc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4b3afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4b3b00:
    // 0x4b3b00: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4b3b00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b3b04:
    // 0x4b3b04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4b3b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4b3b08:
    // 0x4b3b08: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x4b3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_4b3b0c:
    // 0x4b3b0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b3b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4b3b10:
    // 0x4b3b10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b3b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b3b14:
    // 0x4b3b14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4b3b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b3b18:
    // 0x4b3b18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b3b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b3b1c:
    // 0x4b3b1c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4b3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4b3b20:
    // 0x4b3b20: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4b3b20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4b3b24:
    // 0x4b3b24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b3b24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4b3b28:
    // 0x4b3b28: 0x8c631160  lw          $v1, 0x1160($v1)
    ctx->pc = 0x4b3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4448)));
label_4b3b2c:
    // 0x4b3b2c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4b3b2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4b3b30:
    // 0x4b3b30: 0x502000fa  beql        $at, $zero, . + 4 + (0xFA << 2)
label_4b3b34:
    if (ctx->pc == 0x4B3B34u) {
        ctx->pc = 0x4B3B34u;
            // 0x4b3b34: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4B3B38u;
        goto label_4b3b38;
    }
    ctx->pc = 0x4B3B30u;
    {
        const bool branch_taken_0x4b3b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3b30) {
            ctx->pc = 0x4B3B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3B30u;
            // 0x4b3b34: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3F1Cu;
            goto label_4b3f1c;
        }
    }
    ctx->pc = 0x4B3B38u;
label_4b3b38:
    // 0x4b3b38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b3b3c:
    // 0x4b3b3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b3b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b3b40:
    // 0x4b3b40: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x4b3b40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4b3b44:
    // 0x4b3b44: 0x8e450d70  lw          $a1, 0xD70($s2)
    ctx->pc = 0x4b3b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_4b3b48:
    // 0x4b3b48: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x4b3b48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4b3b4c:
    // 0x4b3b4c: 0x8ca200cc  lw          $v0, 0xCC($a1)
    ctx->pc = 0x4b3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_4b3b50:
    // 0x4b3b50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b3b54:
    // 0x4b3b54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4b3b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b3b58:
    // 0x4b3b58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b3b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4b3b5c:
    // 0x4b3b5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x4b3b5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4b3b60:
    // 0x4b3b60: 0x56030003  bnel        $s0, $v1, . + 4 + (0x3 << 2)
label_4b3b64:
    if (ctx->pc == 0x4B3B64u) {
        ctx->pc = 0x4B3B64u;
            // 0x4b3b64: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B68u;
        goto label_4b3b68;
    }
    ctx->pc = 0x4B3B60u;
    {
        const bool branch_taken_0x4b3b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b3b60) {
            ctx->pc = 0x4B3B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3B60u;
            // 0x4b3b64: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3B70u;
            goto label_4b3b70;
        }
    }
    ctx->pc = 0x4B3B68u;
label_4b3b68:
    // 0x4b3b68: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b3b6c:
    if (ctx->pc == 0x4B3B6Cu) {
        ctx->pc = 0x4B3B6Cu;
            // 0x4b3b6c: 0x24930054  addiu       $s3, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->pc = 0x4B3B70u;
        goto label_4b3b70;
    }
    ctx->pc = 0x4B3B68u;
    {
        const bool branch_taken_0x4b3b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3B68u;
            // 0x4b3b6c: 0x24930054  addiu       $s3, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b68) {
            ctx->pc = 0x4B3B7Cu;
            goto label_4b3b7c;
        }
    }
    ctx->pc = 0x4B3B70u;
label_4b3b70:
    // 0x4b3b70: 0xc0be258  jal         func_2F8960
label_4b3b74:
    if (ctx->pc == 0x4B3B74u) {
        ctx->pc = 0x4B3B78u;
        goto label_4b3b78;
    }
    ctx->pc = 0x4B3B70u;
    SET_GPR_U32(ctx, 31, 0x4B3B78u);
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3B78u; }
        if (ctx->pc != 0x4B3B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3B78u; }
        if (ctx->pc != 0x4B3B78u) { return; }
    }
    ctx->pc = 0x4B3B78u;
label_4b3b78:
    // 0x4b3b78: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x4b3b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_4b3b7c:
    // 0x4b3b7c: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x4b3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_4b3b80:
    // 0x4b3b80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4b3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b3b84:
    // 0x4b3b84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4b3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4b3b88:
    // 0x4b3b88: 0xc04cce8  jal         func_1333A0
label_4b3b8c:
    if (ctx->pc == 0x4B3B8Cu) {
        ctx->pc = 0x4B3B8Cu;
            // 0x4b3b8c: 0x24450180  addiu       $a1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->pc = 0x4B3B90u;
        goto label_4b3b90;
    }
    ctx->pc = 0x4B3B88u;
    SET_GPR_U32(ctx, 31, 0x4B3B90u);
    ctx->pc = 0x4B3B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3B88u;
            // 0x4b3b8c: 0x24450180  addiu       $a1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3B90u; }
        if (ctx->pc != 0x4B3B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3B90u; }
        if (ctx->pc != 0x4B3B90u) { return; }
    }
    ctx->pc = 0x4B3B90u;
label_4b3b90:
    // 0x4b3b90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4b3b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4b3b94:
    // 0x4b3b94: 0xc04cce4  jal         func_133390
label_4b3b98:
    if (ctx->pc == 0x4B3B98u) {
        ctx->pc = 0x4B3B98u;
            // 0x4b3b98: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4B3B9Cu;
        goto label_4b3b9c;
    }
    ctx->pc = 0x4B3B94u;
    SET_GPR_U32(ctx, 31, 0x4B3B9Cu);
    ctx->pc = 0x4B3B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3B94u;
            // 0x4b3b98: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3B9Cu; }
        if (ctx->pc != 0x4B3B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3B9Cu; }
        if (ctx->pc != 0x4B3B9Cu) { return; }
    }
    ctx->pc = 0x4B3B9Cu;
label_4b3b9c:
    // 0x4b3b9c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b3b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b3ba0:
    // 0x4b3ba0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4b3ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b3ba4:
    // 0x4b3ba4: 0xc04ce80  jal         func_133A00
label_4b3ba8:
    if (ctx->pc == 0x4B3BA8u) {
        ctx->pc = 0x4B3BA8u;
            // 0x4b3ba8: 0x24a55960  addiu       $a1, $a1, 0x5960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22880));
        ctx->pc = 0x4B3BACu;
        goto label_4b3bac;
    }
    ctx->pc = 0x4B3BA4u;
    SET_GPR_U32(ctx, 31, 0x4B3BACu);
    ctx->pc = 0x4B3BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3BA4u;
            // 0x4b3ba8: 0x24a55960  addiu       $a1, $a1, 0x5960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BACu; }
        if (ctx->pc != 0x4B3BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BACu; }
        if (ctx->pc != 0x4B3BACu) { return; }
    }
    ctx->pc = 0x4B3BACu;
label_4b3bac:
    // 0x4b3bac: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4b3bacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4b3bb0:
    // 0x4b3bb0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b3bb4:
    // 0x4b3bb4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4b3bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b3bb8:
    // 0x4b3bb8: 0xc04cca0  jal         func_133280
label_4b3bbc:
    if (ctx->pc == 0x4B3BBCu) {
        ctx->pc = 0x4B3BBCu;
            // 0x4b3bbc: 0x24c65950  addiu       $a2, $a2, 0x5950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22864));
        ctx->pc = 0x4B3BC0u;
        goto label_4b3bc0;
    }
    ctx->pc = 0x4B3BB8u;
    SET_GPR_U32(ctx, 31, 0x4B3BC0u);
    ctx->pc = 0x4B3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3BB8u;
            // 0x4b3bbc: 0x24c65950  addiu       $a2, $a2, 0x5950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BC0u; }
        if (ctx->pc != 0x4B3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BC0u; }
        if (ctx->pc != 0x4B3BC0u) { return; }
    }
    ctx->pc = 0x4B3BC0u;
label_4b3bc0:
    // 0x4b3bc0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b3bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b3bc4:
    // 0x4b3bc4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b3bc8:
    // 0x4b3bc8: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x4b3bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
label_4b3bcc:
    // 0x4b3bcc: 0xc04cc08  jal         func_133020
label_4b3bd0:
    if (ctx->pc == 0x4B3BD0u) {
        ctx->pc = 0x4B3BD0u;
            // 0x4b3bd0: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x4B3BD4u;
        goto label_4b3bd4;
    }
    ctx->pc = 0x4B3BCCu;
    SET_GPR_U32(ctx, 31, 0x4B3BD4u);
    ctx->pc = 0x4B3BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3BCCu;
            // 0x4b3bd0: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BD4u; }
        if (ctx->pc != 0x4B3BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BD4u; }
        if (ctx->pc != 0x4B3BD4u) { return; }
    }
    ctx->pc = 0x4B3BD4u;
label_4b3bd4:
    // 0x4b3bd4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4b3bd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4b3bd8:
    // 0x4b3bd8: 0xc04cc14  jal         func_133050
label_4b3bdc:
    if (ctx->pc == 0x4B3BDCu) {
        ctx->pc = 0x4B3BDCu;
            // 0x4b3bdc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4B3BE0u;
        goto label_4b3be0;
    }
    ctx->pc = 0x4B3BD8u;
    SET_GPR_U32(ctx, 31, 0x4B3BE0u);
    ctx->pc = 0x4B3BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3BD8u;
            // 0x4b3bdc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BE0u; }
        if (ctx->pc != 0x4B3BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BE0u; }
        if (ctx->pc != 0x4B3BE0u) { return; }
    }
    ctx->pc = 0x4B3BE0u;
label_4b3be0:
    // 0x4b3be0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4b3be4:
    // 0x4b3be4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4b3be4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4b3be8:
    // 0x4b3be8: 0xc04cc14  jal         func_133050
label_4b3bec:
    if (ctx->pc == 0x4B3BECu) {
        ctx->pc = 0x4B3BECu;
            // 0x4b3bec: 0x24845950  addiu       $a0, $a0, 0x5950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22864));
        ctx->pc = 0x4B3BF0u;
        goto label_4b3bf0;
    }
    ctx->pc = 0x4B3BE8u;
    SET_GPR_U32(ctx, 31, 0x4B3BF0u);
    ctx->pc = 0x4B3BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3BE8u;
            // 0x4b3bec: 0x24845950  addiu       $a0, $a0, 0x5950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BF0u; }
        if (ctx->pc != 0x4B3BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3BF0u; }
        if (ctx->pc != 0x4B3BF0u) { return; }
    }
    ctx->pc = 0x4B3BF0u;
label_4b3bf0:
    // 0x4b3bf0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4b3bf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4b3bf4:
    // 0x4b3bf4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4b3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4b3bf8:
    // 0x4b3bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b3bfc:
    // 0x4b3bfc: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x4b3bfcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
label_4b3c00:
    // 0x4b3c00: 0x0  nop
    ctx->pc = 0x4b3c00u;
    // NOP
label_4b3c04:
    // 0x4b3c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b3c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b3c08:
    // 0x4b3c08: 0x0  nop
    ctx->pc = 0x4b3c08u;
    // NOP
label_4b3c0c:
    // 0x4b3c0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b3c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b3c10:
    // 0x4b3c10: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b3c14:
    if (ctx->pc == 0x4B3C14u) {
        ctx->pc = 0x4B3C14u;
            // 0x4b3c14: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x4B3C18u;
        goto label_4b3c18;
    }
    ctx->pc = 0x4B3C10u;
    {
        const bool branch_taken_0x4b3c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b3c10) {
            ctx->pc = 0x4B3C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3C10u;
            // 0x4b3c14: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3C20u;
            goto label_4b3c20;
        }
    }
    ctx->pc = 0x4B3C18u;
label_4b3c18:
    // 0x4b3c18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b3c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3c1c:
    // 0x4b3c1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b3c20:
    // 0x4b3c20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4b3c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4b3c24:
    // 0x4b3c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b3c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b3c28:
    // 0x4b3c28: 0x0  nop
    ctx->pc = 0x4b3c28u;
    // NOP
label_4b3c2c:
    // 0x4b3c2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b3c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b3c30:
    // 0x4b3c30: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4b3c34:
    if (ctx->pc == 0x4B3C34u) {
        ctx->pc = 0x4B3C34u;
            // 0x4b3c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B3C38u;
        goto label_4b3c38;
    }
    ctx->pc = 0x4B3C30u;
    {
        const bool branch_taken_0x4b3c30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B3C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3C30u;
            // 0x4b3c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c30) {
            ctx->pc = 0x4B3C3Cu;
            goto label_4b3c3c;
        }
    }
    ctx->pc = 0x4B3C38u;
label_4b3c38:
    // 0x4b3c38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b3c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3c3c:
    // 0x4b3c3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4b3c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4b3c40:
    // 0x4b3c40: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x4b3c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4b3c44:
    // 0x4b3c44: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b3c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4b3c48:
    // 0x4b3c48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4b3c48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b3c4c:
    // 0x4b3c4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b3c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4b3c50:
    // 0x4b3c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b3c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b3c54:
    // 0x4b3c54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4b3c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b3c58:
    // 0x4b3c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b3c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b3c5c:
    // 0x4b3c5c: 0x0  nop
    ctx->pc = 0x4b3c5cu;
    // NOP
label_4b3c60:
    // 0x4b3c60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b3c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b3c64:
    // 0x4b3c64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4b3c64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4b3c68:
    // 0x4b3c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b3c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b3c6c:
    // 0x4b3c6c: 0x0  nop
    ctx->pc = 0x4b3c6cu;
    // NOP
label_4b3c70:
    // 0x4b3c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b3c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b3c74:
    // 0x4b3c74: 0xc0477fe  jal         func_11DFF8
label_4b3c78:
    if (ctx->pc == 0x4B3C78u) {
        ctx->pc = 0x4B3C78u;
            // 0x4b3c78: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4B3C7Cu;
        goto label_4b3c7c;
    }
    ctx->pc = 0x4B3C74u;
    SET_GPR_U32(ctx, 31, 0x4B3C7Cu);
    ctx->pc = 0x4B3C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3C74u;
            // 0x4b3c78: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3C7Cu; }
        if (ctx->pc != 0x4B3C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3C7Cu; }
        if (ctx->pc != 0x4B3C7Cu) { return; }
    }
    ctx->pc = 0x4B3C7Cu;
label_4b3c7c:
    // 0x4b3c7c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x4b3c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b3c80:
    // 0x4b3c80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b3c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b3c84:
    // 0x4b3c84: 0x0  nop
    ctx->pc = 0x4b3c84u;
    // NOP
label_4b3c88:
    // 0x4b3c88: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4b3c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b3c8c:
    // 0x4b3c8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4b3c90:
    if (ctx->pc == 0x4B3C90u) {
        ctx->pc = 0x4B3C90u;
            // 0x4b3c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B3C94u;
        goto label_4b3c94;
    }
    ctx->pc = 0x4B3C8Cu;
    {
        const bool branch_taken_0x4b3c8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B3C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3C8Cu;
            // 0x4b3c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c8c) {
            ctx->pc = 0x4B3C98u;
            goto label_4b3c98;
        }
    }
    ctx->pc = 0x4B3C94u;
label_4b3c94:
    // 0x4b3c94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b3c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3c98:
    // 0x4b3c98: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4b3c9c:
    if (ctx->pc == 0x4B3C9Cu) {
        ctx->pc = 0x4B3C9Cu;
            // 0x4b3c9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4B3CA0u;
        goto label_4b3ca0;
    }
    ctx->pc = 0x4B3C98u;
    {
        const bool branch_taken_0x4b3c98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b3c98) {
            ctx->pc = 0x4B3C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3C98u;
            // 0x4b3c9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3CACu;
            goto label_4b3cac;
        }
    }
    ctx->pc = 0x4B3CA0u;
label_4b3ca0:
    // 0x4b3ca0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b3ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b3ca4:
    // 0x4b3ca4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b3ca8:
    if (ctx->pc == 0x4B3CA8u) {
        ctx->pc = 0x4B3CA8u;
            // 0x4b3ca8: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B3CACu;
        goto label_4b3cac;
    }
    ctx->pc = 0x4B3CA4u;
    {
        const bool branch_taken_0x4b3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3CA4u;
            // 0x4b3ca8: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ca4) {
            ctx->pc = 0x4B3CC4u;
            goto label_4b3cc4;
        }
    }
    ctx->pc = 0x4B3CACu;
label_4b3cac:
    // 0x4b3cac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b3cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b3cb0:
    // 0x4b3cb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b3cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b3cb4:
    // 0x4b3cb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b3cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b3cb8:
    // 0x4b3cb8: 0x0  nop
    ctx->pc = 0x4b3cb8u;
    // NOP
label_4b3cbc:
    // 0x4b3cbc: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x4b3cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_4b3cc0:
    // 0x4b3cc0: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x4b3cc0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_4b3cc4:
    // 0x4b3cc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4b3cc8:
    // 0x4b3cc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4b3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4b3ccc:
    // 0x4b3ccc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4b3cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b3cd0:
    // 0x4b3cd0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4b3cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b3cd4:
    // 0x4b3cd4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4b3cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4b3cd8:
    // 0x4b3cd8: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4b3cd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4b3cdc:
    // 0x4b3cdc: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4b3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_4b3ce0:
    // 0x4b3ce0: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x4b3ce0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_4b3ce4:
    // 0x4b3ce4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4b3ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_4b3ce8:
    // 0x4b3ce8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4b3ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4b3cec:
    // 0x4b3cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b3cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b3cf0:
    // 0x4b3cf0: 0x0  nop
    ctx->pc = 0x4b3cf0u;
    // NOP
label_4b3cf4:
    // 0x4b3cf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4b3cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b3cf8:
    // 0x4b3cf8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b3cf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b3cfc:
    // 0x4b3cfc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4b3cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4b3d00:
    // 0x4b3d00: 0xc04f2b8  jal         func_13CAE0
label_4b3d04:
    if (ctx->pc == 0x4B3D04u) {
        ctx->pc = 0x4B3D04u;
            // 0x4b3d04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4B3D08u;
        goto label_4b3d08;
    }
    ctx->pc = 0x4B3D00u;
    SET_GPR_U32(ctx, 31, 0x4B3D08u);
    ctx->pc = 0x4B3D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3D00u;
            // 0x4b3d04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3D08u; }
        if (ctx->pc != 0x4B3D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3D08u; }
        if (ctx->pc != 0x4B3D08u) { return; }
    }
    ctx->pc = 0x4B3D08u;
label_4b3d08:
    // 0x4b3d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b3d0c:
    // 0x4b3d0c: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
label_4b3d10:
    if (ctx->pc == 0x4B3D10u) {
        ctx->pc = 0x4B3D10u;
            // 0x4b3d10: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4B3D14u;
        goto label_4b3d14;
    }
    ctx->pc = 0x4B3D0Cu;
    {
        const bool branch_taken_0x4b3d0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b3d0c) {
            ctx->pc = 0x4B3D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3D0Cu;
            // 0x4b3d10: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3D34u;
            goto label_4b3d34;
        }
    }
    ctx->pc = 0x4B3D14u;
label_4b3d14:
    // 0x4b3d14: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4b3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4b3d18:
    // 0x4b3d18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4b3d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4b3d1c:
    // 0x4b3d1c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x4b3d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b3d20:
    // 0x4b3d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b3d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b3d24:
    // 0x4b3d24: 0x0  nop
    ctx->pc = 0x4b3d24u;
    // NOP
label_4b3d28:
    // 0x4b3d28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4b3d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4b3d2c:
    // 0x4b3d2c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x4b3d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4b3d30:
    // 0x4b3d30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4b3d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b3d34:
    // 0x4b3d34: 0xc04ce80  jal         func_133A00
label_4b3d38:
    if (ctx->pc == 0x4B3D38u) {
        ctx->pc = 0x4B3D38u;
            // 0x4b3d38: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B3D3Cu;
        goto label_4b3d3c;
    }
    ctx->pc = 0x4B3D34u;
    SET_GPR_U32(ctx, 31, 0x4B3D3Cu);
    ctx->pc = 0x4B3D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3D34u;
            // 0x4b3d38: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3D3Cu; }
        if (ctx->pc != 0x4B3D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3D3Cu; }
        if (ctx->pc != 0x4B3D3Cu) { return; }
    }
    ctx->pc = 0x4B3D3Cu;
label_4b3d3c:
    // 0x4b3d3c: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x4b3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
label_4b3d40:
    // 0x4b3d40: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4b3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4b3d44:
    // 0x4b3d44: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x4b3d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_4b3d48:
    // 0x4b3d48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4b3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b3d4c:
    // 0x4b3d4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4b3d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b3d50:
    // 0x4b3d50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b3d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b3d54:
    // 0x4b3d54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b3d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b3d58:
    // 0x4b3d58: 0xc04ce50  jal         func_133940
label_4b3d5c:
    if (ctx->pc == 0x4B3D5Cu) {
        ctx->pc = 0x4B3D5Cu;
            // 0x4b3d5c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B3D60u;
        goto label_4b3d60;
    }
    ctx->pc = 0x4B3D58u;
    SET_GPR_U32(ctx, 31, 0x4B3D60u);
    ctx->pc = 0x4B3D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3D58u;
            // 0x4b3d5c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3D60u; }
        if (ctx->pc != 0x4B3D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3D60u; }
        if (ctx->pc != 0x4B3D60u) { return; }
    }
    ctx->pc = 0x4B3D60u;
label_4b3d60:
    // 0x4b3d60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4b3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b3d64:
    // 0x4b3d64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b3d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b3d68:
    // 0x4b3d68: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4b3d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4b3d6c:
    // 0x4b3d6c: 0xc04e4a4  jal         func_139290
label_4b3d70:
    if (ctx->pc == 0x4B3D70u) {
        ctx->pc = 0x4B3D70u;
            // 0x4b3d70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3D74u;
        goto label_4b3d74;
    }
    ctx->pc = 0x4B3D6Cu;
    SET_GPR_U32(ctx, 31, 0x4B3D74u);
    ctx->pc = 0x4B3D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3D6Cu;
            // 0x4b3d70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3D74u; }
        if (ctx->pc != 0x4B3D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3D74u; }
        if (ctx->pc != 0x4B3D74u) { return; }
    }
    ctx->pc = 0x4B3D74u;
label_4b3d74:
    // 0x4b3d74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b3d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b3d78:
    // 0x4b3d78: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4b3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_4b3d7c:
    // 0x4b3d7c: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x4b3d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_4b3d80:
    // 0x4b3d80: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x4b3d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4b3d84:
    // 0x4b3d84: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x4b3d84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4b3d88:
    // 0x4b3d88: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x4b3d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_4b3d8c:
    // 0x4b3d8c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x4b3d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_4b3d90:
    // 0x4b3d90: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4b3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4b3d94:
    // 0x4b3d94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b3d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b3d98:
    // 0x4b3d98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b3d9c:
    if (ctx->pc == 0x4B3D9Cu) {
        ctx->pc = 0x4B3DA0u;
        goto label_4b3da0;
    }
    ctx->pc = 0x4B3D98u;
    {
        const bool branch_taken_0x4b3d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3d98) {
            ctx->pc = 0x4B3DB4u;
            goto label_4b3db4;
        }
    }
    ctx->pc = 0x4B3DA0u;
label_4b3da0:
    // 0x4b3da0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b3da4:
    // 0x4b3da4: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x4b3da4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_4b3da8:
    // 0x4b3da8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b3dac:
    // 0x4b3dac: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b3db0:
    if (ctx->pc == 0x4B3DB0u) {
        ctx->pc = 0x4B3DB0u;
            // 0x4b3db0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x4B3DB4u;
        goto label_4b3db4;
    }
    ctx->pc = 0x4B3DACu;
    {
        const bool branch_taken_0x4b3dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3DACu;
            // 0x4b3db0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3dac) {
            ctx->pc = 0x4B3DC4u;
            goto label_4b3dc4;
        }
    }
    ctx->pc = 0x4B3DB4u;
label_4b3db4:
    // 0x4b3db4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b3db8:
    // 0x4b3db8: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x4b3db8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_4b3dbc:
    // 0x4b3dbc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b3dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b3dc0:
    // 0x4b3dc0: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x4b3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_4b3dc4:
    // 0x4b3dc4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x4b3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_4b3dc8:
    // 0x4b3dc8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x4b3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_4b3dcc:
    // 0x4b3dcc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x4b3dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_4b3dd0:
    // 0x4b3dd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4b3dd4:
    // 0x4b3dd4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b3dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_4b3dd8:
    // 0x4b3dd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x4b3dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_4b3ddc:
    // 0x4b3ddc: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x4b3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_4b3de0:
    // 0x4b3de0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4b3de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4b3de4:
    // 0x4b3de4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4b3de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4b3de8:
    // 0x4b3de8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b3dec:
    // 0x4b3dec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x4b3decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_4b3df0:
    // 0x4b3df0: 0xfc44ce70  sd          $a0, -0x3190($v0)
    ctx->pc = 0x4b3df0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954608), GPR_U64(ctx, 4));
label_4b3df4:
    // 0x4b3df4: 0xdc6357f0  ld          $v1, 0x57F0($v1)
    ctx->pc = 0x4b3df4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 22512)));
label_4b3df8:
    // 0x4b3df8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b3dfc:
    // 0x4b3dfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b3dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3e00:
    // 0x4b3e00: 0xc0574d8  jal         func_15D360
label_4b3e04:
    if (ctx->pc == 0x4B3E04u) {
        ctx->pc = 0x4B3E04u;
            // 0x4b3e04: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->pc = 0x4B3E08u;
        goto label_4b3e08;
    }
    ctx->pc = 0x4B3E00u;
    SET_GPR_U32(ctx, 31, 0x4B3E08u);
    ctx->pc = 0x4B3E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3E00u;
            // 0x4b3e04: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3E08u; }
        if (ctx->pc != 0x4B3E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3E08u; }
        if (ctx->pc != 0x4B3E08u) { return; }
    }
    ctx->pc = 0x4B3E08u;
label_4b3e08:
    // 0x4b3e08: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4b3e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b3e0c:
    // 0x4b3e0c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4b3e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b3e10:
    // 0x4b3e10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4b3e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b3e14:
    // 0x4b3e14: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4b3e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4b3e18:
    // 0x4b3e18: 0xc055234  jal         func_1548D0
label_4b3e1c:
    if (ctx->pc == 0x4B3E1Cu) {
        ctx->pc = 0x4B3E1Cu;
            // 0x4b3e1c: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x4B3E20u;
        goto label_4b3e20;
    }
    ctx->pc = 0x4B3E18u;
    SET_GPR_U32(ctx, 31, 0x4B3E20u);
    ctx->pc = 0x4B3E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3E18u;
            // 0x4b3e1c: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3E20u; }
        if (ctx->pc != 0x4B3E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3E20u; }
        if (ctx->pc != 0x4B3E20u) { return; }
    }
    ctx->pc = 0x4B3E20u;
label_4b3e20:
    // 0x4b3e20: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4b3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4b3e24:
    // 0x4b3e24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b3e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b3e28:
    // 0x4b3e28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b3e2c:
    if (ctx->pc == 0x4B3E2Cu) {
        ctx->pc = 0x4B3E30u;
        goto label_4b3e30;
    }
    ctx->pc = 0x4B3E28u;
    {
        const bool branch_taken_0x4b3e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3e28) {
            ctx->pc = 0x4B3E44u;
            goto label_4b3e44;
        }
    }
    ctx->pc = 0x4B3E30u;
label_4b3e30:
    // 0x4b3e30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b3e34:
    // 0x4b3e34: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x4b3e34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_4b3e38:
    // 0x4b3e38: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b3e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b3e3c:
    // 0x4b3e3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b3e40:
    if (ctx->pc == 0x4B3E40u) {
        ctx->pc = 0x4B3E40u;
            // 0x4b3e40: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x4B3E44u;
        goto label_4b3e44;
    }
    ctx->pc = 0x4B3E3Cu;
    {
        const bool branch_taken_0x4b3e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3E3Cu;
            // 0x4b3e40: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3e3c) {
            ctx->pc = 0x4B3E54u;
            goto label_4b3e54;
        }
    }
    ctx->pc = 0x4B3E44u;
label_4b3e44:
    // 0x4b3e44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b3e48:
    // 0x4b3e48: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x4b3e48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_4b3e4c:
    // 0x4b3e4c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b3e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b3e50:
    // 0x4b3e50: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x4b3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_4b3e54:
    // 0x4b3e54: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x4b3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_4b3e58:
    // 0x4b3e58: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x4b3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_4b3e5c:
    // 0x4b3e5c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x4b3e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_4b3e60:
    // 0x4b3e60: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x4b3e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_4b3e64:
    // 0x4b3e64: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x4b3e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_4b3e68:
    // 0x4b3e68: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x4b3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_4b3e6c:
    // 0x4b3e6c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4b3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4b3e70:
    // 0x4b3e70: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4b3e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4b3e74:
    // 0x4b3e74: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4b3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_4b3e78:
    // 0x4b3e78: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x4b3e78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
label_4b3e7c:
    // 0x4b3e7c: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x4b3e7cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_4b3e80:
    // 0x4b3e80: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x4b3e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_4b3e84:
    // 0x4b3e84: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x4b3e84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
label_4b3e88:
    // 0x4b3e88: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b3e8c:
    // 0x4b3e8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b3e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3e90:
    // 0x4b3e90: 0xc0574d8  jal         func_15D360
label_4b3e94:
    if (ctx->pc == 0x4B3E94u) {
        ctx->pc = 0x4B3E94u;
            // 0x4b3e94: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->pc = 0x4B3E98u;
        goto label_4b3e98;
    }
    ctx->pc = 0x4B3E90u;
    SET_GPR_U32(ctx, 31, 0x4B3E98u);
    ctx->pc = 0x4B3E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3E90u;
            // 0x4b3e94: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3E98u; }
        if (ctx->pc != 0x4B3E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3E98u; }
        if (ctx->pc != 0x4B3E98u) { return; }
    }
    ctx->pc = 0x4B3E98u;
label_4b3e98:
    // 0x4b3e98: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4b3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_4b3e9c:
    // 0x4b3e9c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4b3e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4b3ea0:
    // 0x4b3ea0: 0x34425001  ori         $v0, $v0, 0x5001
    ctx->pc = 0x4b3ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20481);
label_4b3ea4:
    // 0x4b3ea4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b3ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b3ea8:
    // 0x4b3ea8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x4b3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_4b3eac:
    // 0x4b3eac: 0xc04a508  jal         func_129420
label_4b3eb0:
    if (ctx->pc == 0x4B3EB0u) {
        ctx->pc = 0x4B3EB0u;
            // 0x4b3eb0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4B3EB4u;
        goto label_4b3eb4;
    }
    ctx->pc = 0x4B3EACu;
    SET_GPR_U32(ctx, 31, 0x4B3EB4u);
    ctx->pc = 0x4B3EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3EACu;
            // 0x4b3eb0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3EB4u; }
        if (ctx->pc != 0x4B3EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3EB4u; }
        if (ctx->pc != 0x4B3EB4u) { return; }
    }
    ctx->pc = 0x4B3EB4u;
label_4b3eb4:
    // 0x4b3eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b3eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b3eb8:
    // 0x4b3eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b3eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3ebc:
    // 0x4b3ebc: 0xc04a576  jal         func_1295D8
label_4b3ec0:
    if (ctx->pc == 0x4B3EC0u) {
        ctx->pc = 0x4B3EC0u;
            // 0x4b3ec0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4B3EC4u;
        goto label_4b3ec4;
    }
    ctx->pc = 0x4B3EBCu;
    SET_GPR_U32(ctx, 31, 0x4B3EC4u);
    ctx->pc = 0x4B3EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3EBCu;
            // 0x4b3ec0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3EC4u; }
        if (ctx->pc != 0x4B3EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3EC4u; }
        if (ctx->pc != 0x4B3EC4u) { return; }
    }
    ctx->pc = 0x4B3EC4u;
label_4b3ec4:
    // 0x4b3ec4: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x4b3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_4b3ec8:
    // 0x4b3ec8: 0x3442e6e6  ori         $v0, $v0, 0xE6E6
    ctx->pc = 0x4b3ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59110);
label_4b3ecc:
    // 0x4b3ecc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b3eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b3ed0:
    // 0x4b3ed0: 0xc054c3c  jal         func_1530F0
label_4b3ed4:
    if (ctx->pc == 0x4B3ED4u) {
        ctx->pc = 0x4B3ED4u;
            // 0x4b3ed4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4B3ED8u;
        goto label_4b3ed8;
    }
    ctx->pc = 0x4B3ED0u;
    SET_GPR_U32(ctx, 31, 0x4B3ED8u);
    ctx->pc = 0x4B3ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3ED0u;
            // 0x4b3ed4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3ED8u; }
        if (ctx->pc != 0x4B3ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3ED8u; }
        if (ctx->pc != 0x4B3ED8u) { return; }
    }
    ctx->pc = 0x4B3ED8u;
label_4b3ed8:
    // 0x4b3ed8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4b3ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b3edc:
    // 0x4b3edc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4b3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_4b3ee0:
    // 0x4b3ee0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4b3ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b3ee4:
    // 0x4b3ee4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4b3ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b3ee8:
    // 0x4b3ee8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4b3ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4b3eec:
    // 0x4b3eec: 0xc055234  jal         func_1548D0
label_4b3ef0:
    if (ctx->pc == 0x4B3EF0u) {
        ctx->pc = 0x4B3EF0u;
            // 0x4b3ef0: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x4B3EF4u;
        goto label_4b3ef4;
    }
    ctx->pc = 0x4B3EECu;
    SET_GPR_U32(ctx, 31, 0x4B3EF4u);
    ctx->pc = 0x4B3EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3EECu;
            // 0x4b3ef0: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3EF4u; }
        if (ctx->pc != 0x4B3EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3EF4u; }
        if (ctx->pc != 0x4B3EF4u) { return; }
    }
    ctx->pc = 0x4B3EF4u;
label_4b3ef4:
    // 0x4b3ef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b3ef8:
    // 0x4b3ef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b3ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b3efc:
    // 0x4b3efc: 0xc054c3c  jal         func_1530F0
label_4b3f00:
    if (ctx->pc == 0x4B3F00u) {
        ctx->pc = 0x4B3F00u;
            // 0x4b3f00: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4B3F04u;
        goto label_4b3f04;
    }
    ctx->pc = 0x4B3EFCu;
    SET_GPR_U32(ctx, 31, 0x4B3F04u);
    ctx->pc = 0x4B3F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3EFCu;
            // 0x4b3f00: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3F04u; }
        if (ctx->pc != 0x4B3F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3F04u; }
        if (ctx->pc != 0x4B3F04u) { return; }
    }
    ctx->pc = 0x4B3F04u;
label_4b3f04:
    // 0x4b3f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b3f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b3f08:
    // 0x4b3f08: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4b3f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4b3f0c:
    // 0x4b3f0c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4b3f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4b3f10:
    // 0x4b3f10: 0xc04a508  jal         func_129420
label_4b3f14:
    if (ctx->pc == 0x4B3F14u) {
        ctx->pc = 0x4B3F14u;
            // 0x4b3f14: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->pc = 0x4B3F18u;
        goto label_4b3f18;
    }
    ctx->pc = 0x4B3F10u;
    SET_GPR_U32(ctx, 31, 0x4B3F18u);
    ctx->pc = 0x4B3F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3F10u;
            // 0x4b3f14: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3F18u; }
        if (ctx->pc != 0x4B3F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3F18u; }
        if (ctx->pc != 0x4B3F18u) { return; }
    }
    ctx->pc = 0x4B3F18u;
label_4b3f18:
    // 0x4b3f18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4b3f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4b3f1c:
    // 0x4b3f1c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4b3f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4b3f20:
    // 0x4b3f20: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4b3f20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b3f24:
    // 0x4b3f24: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b3f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b3f28:
    // 0x4b3f28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4b3f28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b3f2c:
    // 0x4b3f2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4b3f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b3f30:
    // 0x4b3f30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b3f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b3f34:
    // 0x4b3f34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b3f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b3f38:
    // 0x4b3f38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b3f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b3f3c:
    // 0x4b3f3c: 0x3e00008  jr          $ra
label_4b3f40:
    if (ctx->pc == 0x4B3F40u) {
        ctx->pc = 0x4B3F40u;
            // 0x4b3f40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4B3F44u;
        goto label_4b3f44;
    }
    ctx->pc = 0x4B3F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3F3Cu;
            // 0x4b3f40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3F44u;
label_4b3f44:
    // 0x4b3f44: 0x0  nop
    ctx->pc = 0x4b3f44u;
    // NOP
label_4b3f48:
    // 0x4b3f48: 0x0  nop
    ctx->pc = 0x4b3f48u;
    // NOP
label_4b3f4c:
    // 0x4b3f4c: 0x0  nop
    ctx->pc = 0x4b3f4cu;
    // NOP
label_4b3f50:
    // 0x4b3f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b3f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4b3f54:
    // 0x4b3f54: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4b3f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b3f58:
    // 0x4b3f58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b3f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4b3f5c:
    // 0x4b3f5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b3f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b3f60:
    // 0x4b3f60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b3f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b3f64:
    // 0x4b3f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b3f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b3f68:
    // 0x4b3f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b3f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b3f6c:
    // 0x4b3f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b3f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b3f70:
    // 0x4b3f70: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4b3f70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b3f74:
    // 0x4b3f74: 0x10a70010  beq         $a1, $a3, . + 4 + (0x10 << 2)
label_4b3f78:
    if (ctx->pc == 0x4B3F78u) {
        ctx->pc = 0x4B3F78u;
            // 0x4b3f78: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3F7Cu;
        goto label_4b3f7c;
    }
    ctx->pc = 0x4B3F74u;
    {
        const bool branch_taken_0x4b3f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x4B3F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3F74u;
            // 0x4b3f78: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3f74) {
            ctx->pc = 0x4B3FB8u;
            goto label_4b3fb8;
        }
    }
    ctx->pc = 0x4B3F7Cu;
label_4b3f7c:
    // 0x4b3f7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b3f80:
    // 0x4b3f80: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4b3f84:
    if (ctx->pc == 0x4B3F84u) {
        ctx->pc = 0x4B3F88u;
        goto label_4b3f88;
    }
    ctx->pc = 0x4B3F80u;
    {
        const bool branch_taken_0x4b3f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b3f80) {
            ctx->pc = 0x4B3F90u;
            goto label_4b3f90;
        }
    }
    ctx->pc = 0x4B3F88u;
label_4b3f88:
    // 0x4b3f88: 0x10000047  b           . + 4 + (0x47 << 2)
label_4b3f8c:
    if (ctx->pc == 0x4B3F8Cu) {
        ctx->pc = 0x4B3F90u;
        goto label_4b3f90;
    }
    ctx->pc = 0x4B3F88u;
    {
        const bool branch_taken_0x4b3f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3f88) {
            ctx->pc = 0x4B40A8u;
            goto label_4b40a8;
        }
    }
    ctx->pc = 0x4B3F90u;
label_4b3f90:
    // 0x4b3f90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b3f94:
    // 0x4b3f94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b3f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b3f98:
    // 0x4b3f98: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4b3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4b3f9c:
    // 0x4b3f9c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4b3f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4b3fa0:
    // 0x4b3fa0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4b3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4b3fa4:
    // 0x4b3fa4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b3fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4b3fa8:
    // 0x4b3fa8: 0x320f809  jalr        $t9
label_4b3fac:
    if (ctx->pc == 0x4B3FACu) {
        ctx->pc = 0x4B3FACu;
            // 0x4b3fac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4B3FB0u;
        goto label_4b3fb0;
    }
    ctx->pc = 0x4B3FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B3FB0u);
        ctx->pc = 0x4B3FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3FA8u;
            // 0x4b3fac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B3FB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B3FB0u; }
            if (ctx->pc != 0x4B3FB0u) { return; }
        }
        }
    }
    ctx->pc = 0x4B3FB0u;
label_4b3fb0:
    // 0x4b3fb0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4b3fb4:
    if (ctx->pc == 0x4B3FB4u) {
        ctx->pc = 0x4B3FB8u;
        goto label_4b3fb8;
    }
    ctx->pc = 0x4B3FB0u;
    {
        const bool branch_taken_0x4b3fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3fb0) {
            ctx->pc = 0x4B40A8u;
            goto label_4b40a8;
        }
    }
    ctx->pc = 0x4B3FB8u;
label_4b3fb8:
    // 0x4b3fb8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4b3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4b3fbc:
    // 0x4b3fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b3fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fc0:
    // 0x4b3fc0: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x4b3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4b3fc4:
    // 0x4b3fc4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b3fc8:
    // 0x4b3fc8: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4b3fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4b3fcc:
    // 0x4b3fcc: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4b3fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4b3fd0:
    // 0x4b3fd0: 0x8cc40cb4  lw          $a0, 0xCB4($a2)
    ctx->pc = 0x4b3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4b3fd4:
    // 0x4b3fd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b3fd8:
    // 0x4b3fd8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_4b3fdc:
    if (ctx->pc == 0x4B3FDCu) {
        ctx->pc = 0x4B3FDCu;
            // 0x4b3fdc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3FE0u;
        goto label_4b3fe0;
    }
    ctx->pc = 0x4B3FD8u;
    {
        const bool branch_taken_0x4b3fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B3FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3FD8u;
            // 0x4b3fdc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3fd8) {
            ctx->pc = 0x4B3FF8u;
            goto label_4b3ff8;
        }
    }
    ctx->pc = 0x4B3FE0u;
label_4b3fe0:
    // 0x4b3fe0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b3fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b3fe4:
    // 0x4b3fe4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x4b3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4b3fe8:
    // 0x4b3fe8: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4b3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4b3fec:
    // 0x4b3fec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b3ff0:
    // 0x4b3ff0: 0x10000019  b           . + 4 + (0x19 << 2)
label_4b3ff4:
    if (ctx->pc == 0x4B3FF4u) {
        ctx->pc = 0x4B3FF4u;
            // 0x4b3ff4: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x4B3FF8u;
        goto label_4b3ff8;
    }
    ctx->pc = 0x4B3FF0u;
    {
        const bool branch_taken_0x4b3ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3FF0u;
            // 0x4b3ff4: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ff0) {
            ctx->pc = 0x4B4058u;
            goto label_4b4058;
        }
    }
    ctx->pc = 0x4B3FF8u;
label_4b3ff8:
    // 0x4b3ff8: 0x8cc40998  lw          $a0, 0x998($a2)
    ctx->pc = 0x4b3ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2456)));
label_4b3ffc:
    // 0x4b3ffc: 0x1087000f  beq         $a0, $a3, . + 4 + (0xF << 2)
label_4b4000:
    if (ctx->pc == 0x4B4000u) {
        ctx->pc = 0x4B4004u;
        goto label_4b4004;
    }
    ctx->pc = 0x4B3FFCu;
    {
        const bool branch_taken_0x4b3ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x4b3ffc) {
            ctx->pc = 0x4B403Cu;
            goto label_4b403c;
        }
    }
    ctx->pc = 0x4B4004u;
label_4b4004:
    // 0x4b4004: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b4004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b4008:
    // 0x4b4008: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4b400c:
    if (ctx->pc == 0x4B400Cu) {
        ctx->pc = 0x4B4010u;
        goto label_4b4010;
    }
    ctx->pc = 0x4B4008u;
    {
        const bool branch_taken_0x4b4008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b4008) {
            ctx->pc = 0x4B4018u;
            goto label_4b4018;
        }
    }
    ctx->pc = 0x4B4010u;
label_4b4010:
    // 0x4b4010: 0x1000000d  b           . + 4 + (0xD << 2)
label_4b4014:
    if (ctx->pc == 0x4B4014u) {
        ctx->pc = 0x4B4014u;
            // 0x4b4014: 0x3c0300af  lui         $v1, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
        ctx->pc = 0x4B4018u;
        goto label_4b4018;
    }
    ctx->pc = 0x4B4010u;
    {
        const bool branch_taken_0x4b4010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4010u;
            // 0x4b4014: 0x3c0300af  lui         $v1, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4010) {
            ctx->pc = 0x4B4048u;
            goto label_4b4048;
        }
    }
    ctx->pc = 0x4B4018u;
label_4b4018:
    // 0x4b4018: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b4018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b401c:
    // 0x4b401c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4b401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4b4020:
    // 0x4b4020: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b4020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b4024:
    // 0x4b4024: 0x8063007b  lb          $v1, 0x7B($v1)
    ctx->pc = 0x4b4024u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 123)));
label_4b4028:
    // 0x4b4028: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x4b4028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4b402c:
    // 0x4b402c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_4b4030:
    if (ctx->pc == 0x4B4030u) {
        ctx->pc = 0x4B4030u;
            // 0x4b4030: 0x8c860e84  lw          $a2, 0xE84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3716)));
        ctx->pc = 0x4B4034u;
        goto label_4b4034;
    }
    ctx->pc = 0x4B402Cu;
    {
        const bool branch_taken_0x4b402c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B402Cu;
            // 0x4b4030: 0x8c860e84  lw          $a2, 0xE84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b402c) {
            ctx->pc = 0x4B4058u;
            goto label_4b4058;
        }
    }
    ctx->pc = 0x4B4034u;
label_4b4034:
    // 0x4b4034: 0x10000008  b           . + 4 + (0x8 << 2)
label_4b4038:
    if (ctx->pc == 0x4B4038u) {
        ctx->pc = 0x4B4038u;
            // 0x4b4038: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4B403Cu;
        goto label_4b403c;
    }
    ctx->pc = 0x4B4034u;
    {
        const bool branch_taken_0x4b4034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4034u;
            // 0x4b4038: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4034) {
            ctx->pc = 0x4B4058u;
            goto label_4b4058;
        }
    }
    ctx->pc = 0x4B403Cu;
label_4b403c:
    // 0x4b403c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b403cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b4040:
    // 0x4b4040: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b4044:
    if (ctx->pc == 0x4B4044u) {
        ctx->pc = 0x4B4044u;
            // 0x4b4044: 0x8c660e88  lw          $a2, 0xE88($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3720)));
        ctx->pc = 0x4B4048u;
        goto label_4b4048;
    }
    ctx->pc = 0x4B4040u;
    {
        const bool branch_taken_0x4b4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4040u;
            // 0x4b4044: 0x8c660e88  lw          $a2, 0xE88($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4040) {
            ctx->pc = 0x4B4058u;
            goto label_4b4058;
        }
    }
    ctx->pc = 0x4B4048u;
label_4b4048:
    // 0x4b4048: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x4b4048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4b404c:
    // 0x4b404c: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4b404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4b4050:
    // 0x4b4050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b4050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b4054:
    // 0x4b4054: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4b4054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b4058:
    // 0x4b4058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4b405c:
    if (ctx->pc == 0x4B405Cu) {
        ctx->pc = 0x4B4060u;
        goto label_4b4060;
    }
    ctx->pc = 0x4B4058u;
    {
        const bool branch_taken_0x4b4058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4058) {
            ctx->pc = 0x4B4070u;
            goto label_4b4070;
        }
    }
    ctx->pc = 0x4B4060u;
label_4b4060:
    // 0x4b4060: 0xc12cebc  jal         func_4B3AF0
label_4b4064:
    if (ctx->pc == 0x4B4064u) {
        ctx->pc = 0x4B4064u;
            // 0x4b4064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4068u;
        goto label_4b4068;
    }
    ctx->pc = 0x4B4060u;
    SET_GPR_U32(ctx, 31, 0x4B4068u);
    ctx->pc = 0x4B4064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4060u;
            // 0x4b4064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B3AF0u;
    goto label_4b3af0;
    ctx->pc = 0x4B4068u;
label_4b4068:
    // 0x4b4068: 0x1000000f  b           . + 4 + (0xF << 2)
label_4b406c:
    if (ctx->pc == 0x4B406Cu) {
        ctx->pc = 0x4B4070u;
        goto label_4b4070;
    }
    ctx->pc = 0x4B4068u;
    {
        const bool branch_taken_0x4b4068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4068) {
            ctx->pc = 0x4B40A8u;
            goto label_4b40a8;
        }
    }
    ctx->pc = 0x4B4070u;
label_4b4070:
    // 0x4b4070: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b4070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b4074:
    // 0x4b4074: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x4b4074u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_4b4078:
    // 0x4b4078: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b4078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b407c:
    // 0x4b407c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b407cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4080:
    // 0x4b4080: 0x26940e80  addiu       $s4, $s4, 0xE80
    ctx->pc = 0x4b4080u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3712));
label_4b4084:
    // 0x4b4084: 0x8053007b  lb          $s3, 0x7B($v0)
    ctx->pc = 0x4b4084u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 123)));
label_4b4088:
    // 0x4b4088: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x4b4088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4b408c:
    // 0x4b408c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b4090:
    // 0x4b4090: 0xc12cebc  jal         func_4B3AF0
label_4b4094:
    if (ctx->pc == 0x4B4094u) {
        ctx->pc = 0x4B4094u;
            // 0x4b4094: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4098u;
        goto label_4b4098;
    }
    ctx->pc = 0x4B4090u;
    SET_GPR_U32(ctx, 31, 0x4B4098u);
    ctx->pc = 0x4B4094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4090u;
            // 0x4b4094: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B3AF0u;
    goto label_4b3af0;
    ctx->pc = 0x4B4098u;
label_4b4098:
    // 0x4b4098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4b4098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4b409c:
    // 0x4b409c: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x4b409cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4b40a0:
    // 0x4b40a0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4b40a4:
    if (ctx->pc == 0x4B40A4u) {
        ctx->pc = 0x4B40A4u;
            // 0x4b40a4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x4B40A8u;
        goto label_4b40a8;
    }
    ctx->pc = 0x4B40A0u;
    {
        const bool branch_taken_0x4b40a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B40A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B40A0u;
            // 0x4b40a4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b40a0) {
            ctx->pc = 0x4B4088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b4088;
        }
    }
    ctx->pc = 0x4B40A8u;
label_4b40a8:
    // 0x4b40a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b40a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b40ac:
    // 0x4b40ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b40acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b40b0:
    // 0x4b40b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b40b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b40b4:
    // 0x4b40b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b40b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b40b8:
    // 0x4b40b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b40b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b40bc:
    // 0x4b40bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b40bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b40c0:
    // 0x4b40c0: 0x3e00008  jr          $ra
label_4b40c4:
    if (ctx->pc == 0x4B40C4u) {
        ctx->pc = 0x4B40C4u;
            // 0x4b40c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4B40C8u;
        goto label_4b40c8;
    }
    ctx->pc = 0x4B40C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B40C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B40C0u;
            // 0x4b40c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B40C8u;
label_4b40c8:
    // 0x4b40c8: 0x0  nop
    ctx->pc = 0x4b40c8u;
    // NOP
label_4b40cc:
    // 0x4b40cc: 0x0  nop
    ctx->pc = 0x4b40ccu;
    // NOP
label_4b40d0:
    // 0x4b40d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b40d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b40d4:
    // 0x4b40d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b40d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b40d8:
    // 0x4b40d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b40d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b40dc:
    // 0x4b40dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b40dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b40e0:
    // 0x4b40e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b40e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b40e4:
    // 0x4b40e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4b40e8:
    if (ctx->pc == 0x4B40E8u) {
        ctx->pc = 0x4B40E8u;
            // 0x4b40e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B40ECu;
        goto label_4b40ec;
    }
    ctx->pc = 0x4B40E4u;
    {
        const bool branch_taken_0x4b40e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B40E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B40E4u;
            // 0x4b40e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b40e4) {
            ctx->pc = 0x4B4128u;
            goto label_4b4128;
        }
    }
    ctx->pc = 0x4B40ECu;
label_4b40ec:
    // 0x4b40ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b40f0:
    // 0x4b40f0: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x4b40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
label_4b40f4:
    // 0x4b40f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4b40f8:
    if (ctx->pc == 0x4B40F8u) {
        ctx->pc = 0x4B40F8u;
            // 0x4b40f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B40FCu;
        goto label_4b40fc;
    }
    ctx->pc = 0x4B40F4u;
    {
        const bool branch_taken_0x4b40f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B40F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B40F4u;
            // 0x4b40f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b40f4) {
            ctx->pc = 0x4B4110u;
            goto label_4b4110;
        }
    }
    ctx->pc = 0x4B40FCu;
label_4b40fc:
    // 0x4b40fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b4100:
    // 0x4b4100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b4100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4104:
    // 0x4b4104: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4b4104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4b4108:
    // 0x4b4108: 0xc057a68  jal         func_15E9A0
label_4b410c:
    if (ctx->pc == 0x4B410Cu) {
        ctx->pc = 0x4B410Cu;
            // 0x4b410c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B4110u;
        goto label_4b4110;
    }
    ctx->pc = 0x4B4108u;
    SET_GPR_U32(ctx, 31, 0x4B4110u);
    ctx->pc = 0x4B410Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4108u;
            // 0x4b410c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4110u; }
        if (ctx->pc != 0x4B4110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4110u; }
        if (ctx->pc != 0x4B4110u) { return; }
    }
    ctx->pc = 0x4B4110u;
label_4b4110:
    // 0x4b4110: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b4110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b4114:
    // 0x4b4114: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b4114u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b4118:
    // 0x4b4118: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b411c:
    if (ctx->pc == 0x4B411Cu) {
        ctx->pc = 0x4B411Cu;
            // 0x4b411c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4120u;
        goto label_4b4120;
    }
    ctx->pc = 0x4B4118u;
    {
        const bool branch_taken_0x4b4118 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b4118) {
            ctx->pc = 0x4B411Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4118u;
            // 0x4b411c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B412Cu;
            goto label_4b412c;
        }
    }
    ctx->pc = 0x4B4120u;
label_4b4120:
    // 0x4b4120: 0xc0400a8  jal         func_1002A0
label_4b4124:
    if (ctx->pc == 0x4B4124u) {
        ctx->pc = 0x4B4124u;
            // 0x4b4124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4128u;
        goto label_4b4128;
    }
    ctx->pc = 0x4B4120u;
    SET_GPR_U32(ctx, 31, 0x4B4128u);
    ctx->pc = 0x4B4124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4120u;
            // 0x4b4124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4128u; }
        if (ctx->pc != 0x4B4128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4128u; }
        if (ctx->pc != 0x4B4128u) { return; }
    }
    ctx->pc = 0x4B4128u;
label_4b4128:
    // 0x4b4128: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b412c:
    // 0x4b412c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b412cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4130:
    // 0x4b4130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4134:
    // 0x4b4134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b4138:
    // 0x4b4138: 0x3e00008  jr          $ra
label_4b413c:
    if (ctx->pc == 0x4B413Cu) {
        ctx->pc = 0x4B413Cu;
            // 0x4b413c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B4140u;
        goto label_4b4140;
    }
    ctx->pc = 0x4B4138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4138u;
            // 0x4b413c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4140u;
label_4b4140:
    // 0x4b4140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b4140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b4144:
    // 0x4b4144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b4144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4b4148:
    // 0x4b4148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b414c:
    // 0x4b414c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b4150:
    // 0x4b4150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b4154:
    // 0x4b4154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b4158:
    // 0x4b4158: 0x90830060  lbu         $v1, 0x60($a0)
    ctx->pc = 0x4b4158u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_4b415c:
    // 0x4b415c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_4b4160:
    if (ctx->pc == 0x4B4160u) {
        ctx->pc = 0x4B4160u;
            // 0x4b4160: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4164u;
        goto label_4b4164;
    }
    ctx->pc = 0x4B415Cu;
    {
        const bool branch_taken_0x4b415c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B415Cu;
            // 0x4b4160: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b415c) {
            ctx->pc = 0x4B4228u;
            goto label_4b4228;
        }
    }
    ctx->pc = 0x4B4164u;
label_4b4164:
    // 0x4b4164: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b4164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b4168:
    // 0x4b4168: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b4168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b416c:
    // 0x4b416c: 0x8c70e378  lw          $s0, -0x1C88($v1)
    ctx->pc = 0x4b416cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4b4170:
    // 0x4b4170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b4170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4174:
    // 0x4b4174: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x4b4174u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4b4178:
    // 0x4b4178: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4b4178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4b417c:
    // 0x4b417c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b417cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b4180:
    // 0x4b4180: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4b4180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4b4184:
    // 0x4b4184: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b4184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b4188:
    // 0x4b4188: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4b4188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4b418c:
    // 0x4b418c: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4b418cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4b4190:
    // 0x4b4190: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4b4190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4b4194:
    // 0x4b4194: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4b4194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4b4198:
    // 0x4b4198: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4b4198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4b419c:
    // 0x4b419c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4b419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b41a0:
    // 0x4b41a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b41a4:
    // 0x4b41a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b41a8:
    // 0x4b41a8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4b41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4b41ac:
    // 0x4b41ac: 0xc04e4a4  jal         func_139290
label_4b41b0:
    if (ctx->pc == 0x4B41B0u) {
        ctx->pc = 0x4B41B0u;
            // 0x4b41b0: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x4B41B4u;
        goto label_4b41b4;
    }
    ctx->pc = 0x4B41ACu;
    SET_GPR_U32(ctx, 31, 0x4B41B4u);
    ctx->pc = 0x4B41B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B41ACu;
            // 0x4b41b0: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B41B4u; }
        if (ctx->pc != 0x4B41B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B41B4u; }
        if (ctx->pc != 0x4B41B4u) { return; }
    }
    ctx->pc = 0x4B41B4u;
label_4b41b4:
    // 0x4b41b4: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x4b41b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4b41b8:
    // 0x4b41b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b41b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b41bc:
    // 0x4b41bc: 0xc04cd60  jal         func_133580
label_4b41c0:
    if (ctx->pc == 0x4B41C0u) {
        ctx->pc = 0x4B41C0u;
            // 0x4b41c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B41C4u;
        goto label_4b41c4;
    }
    ctx->pc = 0x4B41BCu;
    SET_GPR_U32(ctx, 31, 0x4B41C4u);
    ctx->pc = 0x4B41C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B41BCu;
            // 0x4b41c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B41C4u; }
        if (ctx->pc != 0x4B41C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B41C4u; }
        if (ctx->pc != 0x4B41C4u) { return; }
    }
    ctx->pc = 0x4B41C4u;
label_4b41c4:
    // 0x4b41c4: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4b41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4b41c8:
    // 0x4b41c8: 0xc04e738  jal         func_139CE0
label_4b41cc:
    if (ctx->pc == 0x4B41CCu) {
        ctx->pc = 0x4B41CCu;
            // 0x4b41cc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x4B41D0u;
        goto label_4b41d0;
    }
    ctx->pc = 0x4B41C8u;
    SET_GPR_U32(ctx, 31, 0x4B41D0u);
    ctx->pc = 0x4B41CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B41C8u;
            // 0x4b41cc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B41D0u; }
        if (ctx->pc != 0x4B41D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B41D0u; }
        if (ctx->pc != 0x4B41D0u) { return; }
    }
    ctx->pc = 0x4B41D0u;
label_4b41d0:
    // 0x4b41d0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4b41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4b41d4:
    // 0x4b41d4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4b41d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4b41d8:
    // 0x4b41d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b41d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b41dc:
    // 0x4b41dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b41dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b41e0:
    // 0x4b41e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4b41e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b41e4:
    // 0x4b41e4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4b41e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4b41e8:
    // 0x4b41e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4b41e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b41ec:
    // 0x4b41ec: 0xc04cfcc  jal         func_133F30
label_4b41f0:
    if (ctx->pc == 0x4B41F0u) {
        ctx->pc = 0x4B41F0u;
            // 0x4b41f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B41F4u;
        goto label_4b41f4;
    }
    ctx->pc = 0x4B41ECu;
    SET_GPR_U32(ctx, 31, 0x4B41F4u);
    ctx->pc = 0x4B41F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B41ECu;
            // 0x4b41f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B41F4u; }
        if (ctx->pc != 0x4B41F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B41F4u; }
        if (ctx->pc != 0x4B41F4u) { return; }
    }
    ctx->pc = 0x4B41F4u;
label_4b41f4:
    // 0x4b41f4: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4b41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4b41f8:
    // 0x4b41f8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4b41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4b41fc:
    // 0x4b41fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b41fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b4200:
    // 0x4b4200: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x4b4200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4b4204:
    // 0x4b4204: 0xc054bbc  jal         func_152EF0
label_4b4208:
    if (ctx->pc == 0x4B4208u) {
        ctx->pc = 0x4B4208u;
            // 0x4b4208: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4B420Cu;
        goto label_4b420c;
    }
    ctx->pc = 0x4B4204u;
    SET_GPR_U32(ctx, 31, 0x4B420Cu);
    ctx->pc = 0x4B4208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4204u;
            // 0x4b4208: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B420Cu; }
        if (ctx->pc != 0x4B420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B420Cu; }
        if (ctx->pc != 0x4B420Cu) { return; }
    }
    ctx->pc = 0x4B420Cu;
label_4b420c:
    // 0x4b420c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4b420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4b4210:
    // 0x4b4210: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b4210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b4214:
    // 0x4b4214: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b4214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b4218:
    // 0x4b4218: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4b4218u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4b421c:
    // 0x4b421c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4b421cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4b4220:
    // 0x4b4220: 0xc054c2c  jal         func_1530B0
label_4b4224:
    if (ctx->pc == 0x4B4224u) {
        ctx->pc = 0x4B4224u;
            // 0x4b4224: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4B4228u;
        goto label_4b4228;
    }
    ctx->pc = 0x4B4220u;
    SET_GPR_U32(ctx, 31, 0x4B4228u);
    ctx->pc = 0x4B4224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4220u;
            // 0x4b4224: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4228u; }
        if (ctx->pc != 0x4B4228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4228u; }
        if (ctx->pc != 0x4B4228u) { return; }
    }
    ctx->pc = 0x4B4228u;
label_4b4228:
    // 0x4b4228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b4228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b422c:
    // 0x4b422c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b422cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b4230:
    // 0x4b4230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b4230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4234:
    // 0x4b4234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4238:
    // 0x4b4238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b423c:
    // 0x4b423c: 0x3e00008  jr          $ra
label_4b4240:
    if (ctx->pc == 0x4B4240u) {
        ctx->pc = 0x4B4240u;
            // 0x4b4240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4B4244u;
        goto label_4b4244;
    }
    ctx->pc = 0x4B423Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B423Cu;
            // 0x4b4240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4244u;
label_4b4244:
    // 0x4b4244: 0x0  nop
    ctx->pc = 0x4b4244u;
    // NOP
label_4b4248:
    // 0x4b4248: 0x0  nop
    ctx->pc = 0x4b4248u;
    // NOP
label_4b424c:
    // 0x4b424c: 0x0  nop
    ctx->pc = 0x4b424cu;
    // NOP
label_4b4250:
    // 0x4b4250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b4254:
    // 0x4b4254: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b4254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b4258:
    // 0x4b4258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b4258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b425c:
    // 0x4b425c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b4260:
    // 0x4b4260: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4b4260u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b4264:
    // 0x4b4264: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_4b4268:
    if (ctx->pc == 0x4B4268u) {
        ctx->pc = 0x4B4268u;
            // 0x4b4268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B426Cu;
        goto label_4b426c;
    }
    ctx->pc = 0x4B4264u;
    {
        const bool branch_taken_0x4b4264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B4268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4264u;
            // 0x4b4268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4264) {
            ctx->pc = 0x4B428Cu;
            goto label_4b428c;
        }
    }
    ctx->pc = 0x4B426Cu;
label_4b426c:
    // 0x4b426c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b4270:
    // 0x4b4270: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4b4274:
    if (ctx->pc == 0x4B4274u) {
        ctx->pc = 0x4B4274u;
            // 0x4b4274: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B4278u;
        goto label_4b4278;
    }
    ctx->pc = 0x4B4270u;
    {
        const bool branch_taken_0x4b4270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b4270) {
            ctx->pc = 0x4B4274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4270u;
            // 0x4b4274: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4280u;
            goto label_4b4280;
        }
    }
    ctx->pc = 0x4B4278u;
label_4b4278:
    // 0x4b4278: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4b427c:
    if (ctx->pc == 0x4B427Cu) {
        ctx->pc = 0x4B427Cu;
            // 0x4b427c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4B4280u;
        goto label_4b4280;
    }
    ctx->pc = 0x4B4278u;
    {
        const bool branch_taken_0x4b4278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4278u;
            // 0x4b427c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4278) {
            ctx->pc = 0x4B42E8u;
            goto label_4b42e8;
        }
    }
    ctx->pc = 0x4B4280u;
label_4b4280:
    // 0x4b4280: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4b4280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4b4284:
    // 0x4b4284: 0x320f809  jalr        $t9
label_4b4288:
    if (ctx->pc == 0x4B4288u) {
        ctx->pc = 0x4B428Cu;
        goto label_4b428c;
    }
    ctx->pc = 0x4B4284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B428Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B428Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B428Cu; }
            if (ctx->pc != 0x4B428Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B428Cu;
label_4b428c:
    // 0x4b428c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x4b428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4b4290:
    // 0x4b4290: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4b4290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4b4294:
    // 0x4b4294: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4b4294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b4298:
    // 0x4b4298: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b4298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b429c:
    // 0x4b429c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x4b429cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4b42a0:
    // 0x4b42a0: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x4b42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b42a4:
    // 0x4b42a4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4b42a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b42a8:
    // 0x4b42a8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b42a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b42ac:
    // 0x4b42ac: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x4b42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b42b0:
    // 0x4b42b0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x4b42b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4b42b4:
    // 0x4b42b4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4b42b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b42b8:
    // 0x4b42b8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x4b42b8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_4b42bc:
    // 0x4b42bc: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x4b42bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_4b42c0:
    // 0x4b42c0: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x4b42c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_4b42c4:
    // 0x4b42c4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4b42c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4b42c8:
    // 0x4b42c8: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x4b42c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b42cc:
    // 0x4b42cc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x4b42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4b42d0:
    // 0x4b42d0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4b42d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b42d4:
    // 0x4b42d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b42d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b42d8:
    // 0x4b42d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4b42dc:
    if (ctx->pc == 0x4B42DCu) {
        ctx->pc = 0x4B42E0u;
        goto label_4b42e0;
    }
    ctx->pc = 0x4B42D8u;
    {
        const bool branch_taken_0x4b42d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b42d8) {
            ctx->pc = 0x4B42E4u;
            goto label_4b42e4;
        }
    }
    ctx->pc = 0x4B42E0u;
label_4b42e0:
    // 0x4b42e0: 0xe602005c  swc1        $f2, 0x5C($s0)
    ctx->pc = 0x4b42e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_4b42e4:
    // 0x4b42e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b42e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b42e8:
    // 0x4b42e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b42e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b42ec:
    // 0x4b42ec: 0x3e00008  jr          $ra
label_4b42f0:
    if (ctx->pc == 0x4B42F0u) {
        ctx->pc = 0x4B42F0u;
            // 0x4b42f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B42F4u;
        goto label_4b42f4;
    }
    ctx->pc = 0x4B42ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B42F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B42ECu;
            // 0x4b42f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B42F4u;
label_4b42f4:
    // 0x4b42f4: 0x0  nop
    ctx->pc = 0x4b42f4u;
    // NOP
label_4b42f8:
    // 0x4b42f8: 0x0  nop
    ctx->pc = 0x4b42f8u;
    // NOP
label_4b42fc:
    // 0x4b42fc: 0x0  nop
    ctx->pc = 0x4b42fcu;
    // NOP
}
