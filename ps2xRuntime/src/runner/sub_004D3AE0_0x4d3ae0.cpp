#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D3AE0
// Address: 0x4d3ae0 - 0x4d4050
void sub_004D3AE0_0x4d3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3AE0_0x4d3ae0");
#endif

    switch (ctx->pc) {
        case 0x4d3ae0u: goto label_4d3ae0;
        case 0x4d3ae4u: goto label_4d3ae4;
        case 0x4d3ae8u: goto label_4d3ae8;
        case 0x4d3aecu: goto label_4d3aec;
        case 0x4d3af0u: goto label_4d3af0;
        case 0x4d3af4u: goto label_4d3af4;
        case 0x4d3af8u: goto label_4d3af8;
        case 0x4d3afcu: goto label_4d3afc;
        case 0x4d3b00u: goto label_4d3b00;
        case 0x4d3b04u: goto label_4d3b04;
        case 0x4d3b08u: goto label_4d3b08;
        case 0x4d3b0cu: goto label_4d3b0c;
        case 0x4d3b10u: goto label_4d3b10;
        case 0x4d3b14u: goto label_4d3b14;
        case 0x4d3b18u: goto label_4d3b18;
        case 0x4d3b1cu: goto label_4d3b1c;
        case 0x4d3b20u: goto label_4d3b20;
        case 0x4d3b24u: goto label_4d3b24;
        case 0x4d3b28u: goto label_4d3b28;
        case 0x4d3b2cu: goto label_4d3b2c;
        case 0x4d3b30u: goto label_4d3b30;
        case 0x4d3b34u: goto label_4d3b34;
        case 0x4d3b38u: goto label_4d3b38;
        case 0x4d3b3cu: goto label_4d3b3c;
        case 0x4d3b40u: goto label_4d3b40;
        case 0x4d3b44u: goto label_4d3b44;
        case 0x4d3b48u: goto label_4d3b48;
        case 0x4d3b4cu: goto label_4d3b4c;
        case 0x4d3b50u: goto label_4d3b50;
        case 0x4d3b54u: goto label_4d3b54;
        case 0x4d3b58u: goto label_4d3b58;
        case 0x4d3b5cu: goto label_4d3b5c;
        case 0x4d3b60u: goto label_4d3b60;
        case 0x4d3b64u: goto label_4d3b64;
        case 0x4d3b68u: goto label_4d3b68;
        case 0x4d3b6cu: goto label_4d3b6c;
        case 0x4d3b70u: goto label_4d3b70;
        case 0x4d3b74u: goto label_4d3b74;
        case 0x4d3b78u: goto label_4d3b78;
        case 0x4d3b7cu: goto label_4d3b7c;
        case 0x4d3b80u: goto label_4d3b80;
        case 0x4d3b84u: goto label_4d3b84;
        case 0x4d3b88u: goto label_4d3b88;
        case 0x4d3b8cu: goto label_4d3b8c;
        case 0x4d3b90u: goto label_4d3b90;
        case 0x4d3b94u: goto label_4d3b94;
        case 0x4d3b98u: goto label_4d3b98;
        case 0x4d3b9cu: goto label_4d3b9c;
        case 0x4d3ba0u: goto label_4d3ba0;
        case 0x4d3ba4u: goto label_4d3ba4;
        case 0x4d3ba8u: goto label_4d3ba8;
        case 0x4d3bacu: goto label_4d3bac;
        case 0x4d3bb0u: goto label_4d3bb0;
        case 0x4d3bb4u: goto label_4d3bb4;
        case 0x4d3bb8u: goto label_4d3bb8;
        case 0x4d3bbcu: goto label_4d3bbc;
        case 0x4d3bc0u: goto label_4d3bc0;
        case 0x4d3bc4u: goto label_4d3bc4;
        case 0x4d3bc8u: goto label_4d3bc8;
        case 0x4d3bccu: goto label_4d3bcc;
        case 0x4d3bd0u: goto label_4d3bd0;
        case 0x4d3bd4u: goto label_4d3bd4;
        case 0x4d3bd8u: goto label_4d3bd8;
        case 0x4d3bdcu: goto label_4d3bdc;
        case 0x4d3be0u: goto label_4d3be0;
        case 0x4d3be4u: goto label_4d3be4;
        case 0x4d3be8u: goto label_4d3be8;
        case 0x4d3becu: goto label_4d3bec;
        case 0x4d3bf0u: goto label_4d3bf0;
        case 0x4d3bf4u: goto label_4d3bf4;
        case 0x4d3bf8u: goto label_4d3bf8;
        case 0x4d3bfcu: goto label_4d3bfc;
        case 0x4d3c00u: goto label_4d3c00;
        case 0x4d3c04u: goto label_4d3c04;
        case 0x4d3c08u: goto label_4d3c08;
        case 0x4d3c0cu: goto label_4d3c0c;
        case 0x4d3c10u: goto label_4d3c10;
        case 0x4d3c14u: goto label_4d3c14;
        case 0x4d3c18u: goto label_4d3c18;
        case 0x4d3c1cu: goto label_4d3c1c;
        case 0x4d3c20u: goto label_4d3c20;
        case 0x4d3c24u: goto label_4d3c24;
        case 0x4d3c28u: goto label_4d3c28;
        case 0x4d3c2cu: goto label_4d3c2c;
        case 0x4d3c30u: goto label_4d3c30;
        case 0x4d3c34u: goto label_4d3c34;
        case 0x4d3c38u: goto label_4d3c38;
        case 0x4d3c3cu: goto label_4d3c3c;
        case 0x4d3c40u: goto label_4d3c40;
        case 0x4d3c44u: goto label_4d3c44;
        case 0x4d3c48u: goto label_4d3c48;
        case 0x4d3c4cu: goto label_4d3c4c;
        case 0x4d3c50u: goto label_4d3c50;
        case 0x4d3c54u: goto label_4d3c54;
        case 0x4d3c58u: goto label_4d3c58;
        case 0x4d3c5cu: goto label_4d3c5c;
        case 0x4d3c60u: goto label_4d3c60;
        case 0x4d3c64u: goto label_4d3c64;
        case 0x4d3c68u: goto label_4d3c68;
        case 0x4d3c6cu: goto label_4d3c6c;
        case 0x4d3c70u: goto label_4d3c70;
        case 0x4d3c74u: goto label_4d3c74;
        case 0x4d3c78u: goto label_4d3c78;
        case 0x4d3c7cu: goto label_4d3c7c;
        case 0x4d3c80u: goto label_4d3c80;
        case 0x4d3c84u: goto label_4d3c84;
        case 0x4d3c88u: goto label_4d3c88;
        case 0x4d3c8cu: goto label_4d3c8c;
        case 0x4d3c90u: goto label_4d3c90;
        case 0x4d3c94u: goto label_4d3c94;
        case 0x4d3c98u: goto label_4d3c98;
        case 0x4d3c9cu: goto label_4d3c9c;
        case 0x4d3ca0u: goto label_4d3ca0;
        case 0x4d3ca4u: goto label_4d3ca4;
        case 0x4d3ca8u: goto label_4d3ca8;
        case 0x4d3cacu: goto label_4d3cac;
        case 0x4d3cb0u: goto label_4d3cb0;
        case 0x4d3cb4u: goto label_4d3cb4;
        case 0x4d3cb8u: goto label_4d3cb8;
        case 0x4d3cbcu: goto label_4d3cbc;
        case 0x4d3cc0u: goto label_4d3cc0;
        case 0x4d3cc4u: goto label_4d3cc4;
        case 0x4d3cc8u: goto label_4d3cc8;
        case 0x4d3cccu: goto label_4d3ccc;
        case 0x4d3cd0u: goto label_4d3cd0;
        case 0x4d3cd4u: goto label_4d3cd4;
        case 0x4d3cd8u: goto label_4d3cd8;
        case 0x4d3cdcu: goto label_4d3cdc;
        case 0x4d3ce0u: goto label_4d3ce0;
        case 0x4d3ce4u: goto label_4d3ce4;
        case 0x4d3ce8u: goto label_4d3ce8;
        case 0x4d3cecu: goto label_4d3cec;
        case 0x4d3cf0u: goto label_4d3cf0;
        case 0x4d3cf4u: goto label_4d3cf4;
        case 0x4d3cf8u: goto label_4d3cf8;
        case 0x4d3cfcu: goto label_4d3cfc;
        case 0x4d3d00u: goto label_4d3d00;
        case 0x4d3d04u: goto label_4d3d04;
        case 0x4d3d08u: goto label_4d3d08;
        case 0x4d3d0cu: goto label_4d3d0c;
        case 0x4d3d10u: goto label_4d3d10;
        case 0x4d3d14u: goto label_4d3d14;
        case 0x4d3d18u: goto label_4d3d18;
        case 0x4d3d1cu: goto label_4d3d1c;
        case 0x4d3d20u: goto label_4d3d20;
        case 0x4d3d24u: goto label_4d3d24;
        case 0x4d3d28u: goto label_4d3d28;
        case 0x4d3d2cu: goto label_4d3d2c;
        case 0x4d3d30u: goto label_4d3d30;
        case 0x4d3d34u: goto label_4d3d34;
        case 0x4d3d38u: goto label_4d3d38;
        case 0x4d3d3cu: goto label_4d3d3c;
        case 0x4d3d40u: goto label_4d3d40;
        case 0x4d3d44u: goto label_4d3d44;
        case 0x4d3d48u: goto label_4d3d48;
        case 0x4d3d4cu: goto label_4d3d4c;
        case 0x4d3d50u: goto label_4d3d50;
        case 0x4d3d54u: goto label_4d3d54;
        case 0x4d3d58u: goto label_4d3d58;
        case 0x4d3d5cu: goto label_4d3d5c;
        case 0x4d3d60u: goto label_4d3d60;
        case 0x4d3d64u: goto label_4d3d64;
        case 0x4d3d68u: goto label_4d3d68;
        case 0x4d3d6cu: goto label_4d3d6c;
        case 0x4d3d70u: goto label_4d3d70;
        case 0x4d3d74u: goto label_4d3d74;
        case 0x4d3d78u: goto label_4d3d78;
        case 0x4d3d7cu: goto label_4d3d7c;
        case 0x4d3d80u: goto label_4d3d80;
        case 0x4d3d84u: goto label_4d3d84;
        case 0x4d3d88u: goto label_4d3d88;
        case 0x4d3d8cu: goto label_4d3d8c;
        case 0x4d3d90u: goto label_4d3d90;
        case 0x4d3d94u: goto label_4d3d94;
        case 0x4d3d98u: goto label_4d3d98;
        case 0x4d3d9cu: goto label_4d3d9c;
        case 0x4d3da0u: goto label_4d3da0;
        case 0x4d3da4u: goto label_4d3da4;
        case 0x4d3da8u: goto label_4d3da8;
        case 0x4d3dacu: goto label_4d3dac;
        case 0x4d3db0u: goto label_4d3db0;
        case 0x4d3db4u: goto label_4d3db4;
        case 0x4d3db8u: goto label_4d3db8;
        case 0x4d3dbcu: goto label_4d3dbc;
        case 0x4d3dc0u: goto label_4d3dc0;
        case 0x4d3dc4u: goto label_4d3dc4;
        case 0x4d3dc8u: goto label_4d3dc8;
        case 0x4d3dccu: goto label_4d3dcc;
        case 0x4d3dd0u: goto label_4d3dd0;
        case 0x4d3dd4u: goto label_4d3dd4;
        case 0x4d3dd8u: goto label_4d3dd8;
        case 0x4d3ddcu: goto label_4d3ddc;
        case 0x4d3de0u: goto label_4d3de0;
        case 0x4d3de4u: goto label_4d3de4;
        case 0x4d3de8u: goto label_4d3de8;
        case 0x4d3decu: goto label_4d3dec;
        case 0x4d3df0u: goto label_4d3df0;
        case 0x4d3df4u: goto label_4d3df4;
        case 0x4d3df8u: goto label_4d3df8;
        case 0x4d3dfcu: goto label_4d3dfc;
        case 0x4d3e00u: goto label_4d3e00;
        case 0x4d3e04u: goto label_4d3e04;
        case 0x4d3e08u: goto label_4d3e08;
        case 0x4d3e0cu: goto label_4d3e0c;
        case 0x4d3e10u: goto label_4d3e10;
        case 0x4d3e14u: goto label_4d3e14;
        case 0x4d3e18u: goto label_4d3e18;
        case 0x4d3e1cu: goto label_4d3e1c;
        case 0x4d3e20u: goto label_4d3e20;
        case 0x4d3e24u: goto label_4d3e24;
        case 0x4d3e28u: goto label_4d3e28;
        case 0x4d3e2cu: goto label_4d3e2c;
        case 0x4d3e30u: goto label_4d3e30;
        case 0x4d3e34u: goto label_4d3e34;
        case 0x4d3e38u: goto label_4d3e38;
        case 0x4d3e3cu: goto label_4d3e3c;
        case 0x4d3e40u: goto label_4d3e40;
        case 0x4d3e44u: goto label_4d3e44;
        case 0x4d3e48u: goto label_4d3e48;
        case 0x4d3e4cu: goto label_4d3e4c;
        case 0x4d3e50u: goto label_4d3e50;
        case 0x4d3e54u: goto label_4d3e54;
        case 0x4d3e58u: goto label_4d3e58;
        case 0x4d3e5cu: goto label_4d3e5c;
        case 0x4d3e60u: goto label_4d3e60;
        case 0x4d3e64u: goto label_4d3e64;
        case 0x4d3e68u: goto label_4d3e68;
        case 0x4d3e6cu: goto label_4d3e6c;
        case 0x4d3e70u: goto label_4d3e70;
        case 0x4d3e74u: goto label_4d3e74;
        case 0x4d3e78u: goto label_4d3e78;
        case 0x4d3e7cu: goto label_4d3e7c;
        case 0x4d3e80u: goto label_4d3e80;
        case 0x4d3e84u: goto label_4d3e84;
        case 0x4d3e88u: goto label_4d3e88;
        case 0x4d3e8cu: goto label_4d3e8c;
        case 0x4d3e90u: goto label_4d3e90;
        case 0x4d3e94u: goto label_4d3e94;
        case 0x4d3e98u: goto label_4d3e98;
        case 0x4d3e9cu: goto label_4d3e9c;
        case 0x4d3ea0u: goto label_4d3ea0;
        case 0x4d3ea4u: goto label_4d3ea4;
        case 0x4d3ea8u: goto label_4d3ea8;
        case 0x4d3eacu: goto label_4d3eac;
        case 0x4d3eb0u: goto label_4d3eb0;
        case 0x4d3eb4u: goto label_4d3eb4;
        case 0x4d3eb8u: goto label_4d3eb8;
        case 0x4d3ebcu: goto label_4d3ebc;
        case 0x4d3ec0u: goto label_4d3ec0;
        case 0x4d3ec4u: goto label_4d3ec4;
        case 0x4d3ec8u: goto label_4d3ec8;
        case 0x4d3eccu: goto label_4d3ecc;
        case 0x4d3ed0u: goto label_4d3ed0;
        case 0x4d3ed4u: goto label_4d3ed4;
        case 0x4d3ed8u: goto label_4d3ed8;
        case 0x4d3edcu: goto label_4d3edc;
        case 0x4d3ee0u: goto label_4d3ee0;
        case 0x4d3ee4u: goto label_4d3ee4;
        case 0x4d3ee8u: goto label_4d3ee8;
        case 0x4d3eecu: goto label_4d3eec;
        case 0x4d3ef0u: goto label_4d3ef0;
        case 0x4d3ef4u: goto label_4d3ef4;
        case 0x4d3ef8u: goto label_4d3ef8;
        case 0x4d3efcu: goto label_4d3efc;
        case 0x4d3f00u: goto label_4d3f00;
        case 0x4d3f04u: goto label_4d3f04;
        case 0x4d3f08u: goto label_4d3f08;
        case 0x4d3f0cu: goto label_4d3f0c;
        case 0x4d3f10u: goto label_4d3f10;
        case 0x4d3f14u: goto label_4d3f14;
        case 0x4d3f18u: goto label_4d3f18;
        case 0x4d3f1cu: goto label_4d3f1c;
        case 0x4d3f20u: goto label_4d3f20;
        case 0x4d3f24u: goto label_4d3f24;
        case 0x4d3f28u: goto label_4d3f28;
        case 0x4d3f2cu: goto label_4d3f2c;
        case 0x4d3f30u: goto label_4d3f30;
        case 0x4d3f34u: goto label_4d3f34;
        case 0x4d3f38u: goto label_4d3f38;
        case 0x4d3f3cu: goto label_4d3f3c;
        case 0x4d3f40u: goto label_4d3f40;
        case 0x4d3f44u: goto label_4d3f44;
        case 0x4d3f48u: goto label_4d3f48;
        case 0x4d3f4cu: goto label_4d3f4c;
        case 0x4d3f50u: goto label_4d3f50;
        case 0x4d3f54u: goto label_4d3f54;
        case 0x4d3f58u: goto label_4d3f58;
        case 0x4d3f5cu: goto label_4d3f5c;
        case 0x4d3f60u: goto label_4d3f60;
        case 0x4d3f64u: goto label_4d3f64;
        case 0x4d3f68u: goto label_4d3f68;
        case 0x4d3f6cu: goto label_4d3f6c;
        case 0x4d3f70u: goto label_4d3f70;
        case 0x4d3f74u: goto label_4d3f74;
        case 0x4d3f78u: goto label_4d3f78;
        case 0x4d3f7cu: goto label_4d3f7c;
        case 0x4d3f80u: goto label_4d3f80;
        case 0x4d3f84u: goto label_4d3f84;
        case 0x4d3f88u: goto label_4d3f88;
        case 0x4d3f8cu: goto label_4d3f8c;
        case 0x4d3f90u: goto label_4d3f90;
        case 0x4d3f94u: goto label_4d3f94;
        case 0x4d3f98u: goto label_4d3f98;
        case 0x4d3f9cu: goto label_4d3f9c;
        case 0x4d3fa0u: goto label_4d3fa0;
        case 0x4d3fa4u: goto label_4d3fa4;
        case 0x4d3fa8u: goto label_4d3fa8;
        case 0x4d3facu: goto label_4d3fac;
        case 0x4d3fb0u: goto label_4d3fb0;
        case 0x4d3fb4u: goto label_4d3fb4;
        case 0x4d3fb8u: goto label_4d3fb8;
        case 0x4d3fbcu: goto label_4d3fbc;
        case 0x4d3fc0u: goto label_4d3fc0;
        case 0x4d3fc4u: goto label_4d3fc4;
        case 0x4d3fc8u: goto label_4d3fc8;
        case 0x4d3fccu: goto label_4d3fcc;
        case 0x4d3fd0u: goto label_4d3fd0;
        case 0x4d3fd4u: goto label_4d3fd4;
        case 0x4d3fd8u: goto label_4d3fd8;
        case 0x4d3fdcu: goto label_4d3fdc;
        case 0x4d3fe0u: goto label_4d3fe0;
        case 0x4d3fe4u: goto label_4d3fe4;
        case 0x4d3fe8u: goto label_4d3fe8;
        case 0x4d3fecu: goto label_4d3fec;
        case 0x4d3ff0u: goto label_4d3ff0;
        case 0x4d3ff4u: goto label_4d3ff4;
        case 0x4d3ff8u: goto label_4d3ff8;
        case 0x4d3ffcu: goto label_4d3ffc;
        case 0x4d4000u: goto label_4d4000;
        case 0x4d4004u: goto label_4d4004;
        case 0x4d4008u: goto label_4d4008;
        case 0x4d400cu: goto label_4d400c;
        case 0x4d4010u: goto label_4d4010;
        case 0x4d4014u: goto label_4d4014;
        case 0x4d4018u: goto label_4d4018;
        case 0x4d401cu: goto label_4d401c;
        case 0x4d4020u: goto label_4d4020;
        case 0x4d4024u: goto label_4d4024;
        case 0x4d4028u: goto label_4d4028;
        case 0x4d402cu: goto label_4d402c;
        case 0x4d4030u: goto label_4d4030;
        case 0x4d4034u: goto label_4d4034;
        case 0x4d4038u: goto label_4d4038;
        case 0x4d403cu: goto label_4d403c;
        case 0x4d4040u: goto label_4d4040;
        case 0x4d4044u: goto label_4d4044;
        case 0x4d4048u: goto label_4d4048;
        case 0x4d404cu: goto label_4d404c;
        default: break;
    }

    ctx->pc = 0x4d3ae0u;

label_4d3ae0:
    // 0x4d3ae0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4d3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4d3ae4:
    // 0x4d3ae4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4d3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4d3ae8:
    // 0x4d3ae8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4d3ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4d3aec:
    // 0x4d3aec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d3aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d3af0:
    // 0x4d3af0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d3af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d3af4:
    // 0x4d3af4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4d3af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4d3af8:
    // 0x4d3af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d3af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d3afc:
    // 0x4d3afc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4d3afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b00:
    // 0x4d3b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d3b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d3b04:
    // 0x4d3b04: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4d3b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b08:
    // 0x4d3b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d3b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d3b0c:
    // 0x4d3b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d3b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b10:
    // 0x4d3b10: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x4d3b10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4d3b14:
    // 0x4d3b14: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_4d3b18:
    if (ctx->pc == 0x4D3B18u) {
        ctx->pc = 0x4D3B18u;
            // 0x4d3b18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3B1Cu;
        goto label_4d3b1c;
    }
    ctx->pc = 0x4D3B14u;
    {
        const bool branch_taken_0x4d3b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3B14u;
            // 0x4d3b18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3b14) {
            ctx->pc = 0x4D3CFCu;
            goto label_4d3cfc;
        }
    }
    ctx->pc = 0x4D3B1Cu;
label_4d3b1c:
    // 0x4d3b1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d3b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b20:
    // 0x4d3b20: 0xc04f278  jal         func_13C9E0
label_4d3b24:
    if (ctx->pc == 0x4D3B24u) {
        ctx->pc = 0x4D3B24u;
            // 0x4d3b24: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4D3B28u;
        goto label_4d3b28;
    }
    ctx->pc = 0x4D3B20u;
    SET_GPR_U32(ctx, 31, 0x4D3B28u);
    ctx->pc = 0x4D3B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3B20u;
            // 0x4d3b24: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B28u; }
        if (ctx->pc != 0x4D3B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B28u; }
        if (ctx->pc != 0x4D3B28u) { return; }
    }
    ctx->pc = 0x4D3B28u;
label_4d3b28:
    // 0x4d3b28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d3b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b2c:
    // 0x4d3b2c: 0xc04ce80  jal         func_133A00
label_4d3b30:
    if (ctx->pc == 0x4D3B30u) {
        ctx->pc = 0x4D3B30u;
            // 0x4d3b30: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4D3B34u;
        goto label_4d3b34;
    }
    ctx->pc = 0x4D3B2Cu;
    SET_GPR_U32(ctx, 31, 0x4D3B34u);
    ctx->pc = 0x4D3B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3B2Cu;
            // 0x4d3b30: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B34u; }
        if (ctx->pc != 0x4D3B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B34u; }
        if (ctx->pc != 0x4D3B34u) { return; }
    }
    ctx->pc = 0x4D3B34u;
label_4d3b34:
    // 0x4d3b34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d3b38:
    // 0x4d3b38: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x4d3b38u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_4d3b3c:
    // 0x4d3b3c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4d3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4d3b40:
    // 0x4d3b40: 0xc07698c  jal         func_1DA630
label_4d3b44:
    if (ctx->pc == 0x4D3B44u) {
        ctx->pc = 0x4D3B44u;
            // 0x4d3b44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3B48u;
        goto label_4d3b48;
    }
    ctx->pc = 0x4D3B40u;
    SET_GPR_U32(ctx, 31, 0x4D3B48u);
    ctx->pc = 0x4D3B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3B40u;
            // 0x4d3b44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B48u; }
        if (ctx->pc != 0x4D3B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B48u; }
        if (ctx->pc != 0x4D3B48u) { return; }
    }
    ctx->pc = 0x4D3B48u;
label_4d3b48:
    // 0x4d3b48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d3b4c:
    // 0x4d3b4c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4d3b50:
    if (ctx->pc == 0x4D3B50u) {
        ctx->pc = 0x4D3B54u;
        goto label_4d3b54;
    }
    ctx->pc = 0x4D3B4Cu;
    {
        const bool branch_taken_0x4d3b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4d3b4c) {
            ctx->pc = 0x4D3B5Cu;
            goto label_4d3b5c;
        }
    }
    ctx->pc = 0x4D3B54u;
label_4d3b54:
    // 0x4d3b54: 0x10000033  b           . + 4 + (0x33 << 2)
label_4d3b58:
    if (ctx->pc == 0x4D3B58u) {
        ctx->pc = 0x4D3B58u;
            // 0x4d3b58: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4D3B5Cu;
        goto label_4d3b5c;
    }
    ctx->pc = 0x4D3B54u;
    {
        const bool branch_taken_0x4d3b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3B54u;
            // 0x4d3b58: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3b54) {
            ctx->pc = 0x4D3C24u;
            goto label_4d3c24;
        }
    }
    ctx->pc = 0x4D3B5Cu;
label_4d3b5c:
    // 0x4d3b5c: 0xc0576f4  jal         func_15DBD0
label_4d3b60:
    if (ctx->pc == 0x4D3B60u) {
        ctx->pc = 0x4D3B64u;
        goto label_4d3b64;
    }
    ctx->pc = 0x4D3B5Cu;
    SET_GPR_U32(ctx, 31, 0x4D3B64u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B64u; }
        if (ctx->pc != 0x4D3B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B64u; }
        if (ctx->pc != 0x4D3B64u) { return; }
    }
    ctx->pc = 0x4D3B64u;
label_4d3b64:
    // 0x4d3b64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d3b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b68:
    // 0x4d3b68: 0xc076984  jal         func_1DA610
label_4d3b6c:
    if (ctx->pc == 0x4D3B6Cu) {
        ctx->pc = 0x4D3B6Cu;
            // 0x4d3b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3B70u;
        goto label_4d3b70;
    }
    ctx->pc = 0x4D3B68u;
    SET_GPR_U32(ctx, 31, 0x4D3B70u);
    ctx->pc = 0x4D3B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3B68u;
            // 0x4d3b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B70u; }
        if (ctx->pc != 0x4D3B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3B70u; }
        if (ctx->pc != 0x4D3B70u) { return; }
    }
    ctx->pc = 0x4D3B70u;
label_4d3b70:
    // 0x4d3b70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d3b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b74:
    // 0x4d3b74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4d3b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d3b78:
    // 0x4d3b78: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d3b7c:
    // 0x4d3b7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d3b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b80:
    // 0x4d3b80: 0xc442c9c0  lwc1        $f2, -0x3640($v0)
    ctx->pc = 0x4d3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d3b84:
    // 0x4d3b84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4d3b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b88:
    // 0x4d3b88: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d3b8c:
    // 0x4d3b8c: 0xc441c9c8  lwc1        $f1, -0x3638($v0)
    ctx->pc = 0x4d3b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3b90:
    // 0x4d3b90: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4d3b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4d3b94:
    // 0x4d3b94: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d3b98:
    // 0x4d3b98: 0xc440c9cc  lwc1        $f0, -0x3634($v0)
    ctx->pc = 0x4d3b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d3b9c:
    // 0x4d3b9c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4d3b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4d3ba0:
    // 0x4d3ba0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d3ba4:
    // 0x4d3ba4: 0x8c42c9c4  lw          $v0, -0x363C($v0)
    ctx->pc = 0x4d3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953412)));
label_4d3ba8:
    // 0x4d3ba8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4d3ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4d3bac:
    // 0x4d3bac: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x4d3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_4d3bb0:
    // 0x4d3bb0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x4d3bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d3bb4:
    // 0x4d3bb4: 0xc04cca0  jal         func_133280
label_4d3bb8:
    if (ctx->pc == 0x4D3BB8u) {
        ctx->pc = 0x4D3BB8u;
            // 0x4d3bb8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x4D3BBCu;
        goto label_4d3bbc;
    }
    ctx->pc = 0x4D3BB4u;
    SET_GPR_U32(ctx, 31, 0x4D3BBCu);
    ctx->pc = 0x4D3BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3BB4u;
            // 0x4d3bb8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3BBCu; }
        if (ctx->pc != 0x4D3BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3BBCu; }
        if (ctx->pc != 0x4D3BBCu) { return; }
    }
    ctx->pc = 0x4D3BBCu;
label_4d3bbc:
    // 0x4d3bbc: 0xc076980  jal         func_1DA600
label_4d3bc0:
    if (ctx->pc == 0x4D3BC0u) {
        ctx->pc = 0x4D3BC0u;
            // 0x4d3bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3BC4u;
        goto label_4d3bc4;
    }
    ctx->pc = 0x4D3BBCu;
    SET_GPR_U32(ctx, 31, 0x4D3BC4u);
    ctx->pc = 0x4D3BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3BBCu;
            // 0x4d3bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3BC4u; }
        if (ctx->pc != 0x4D3BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3BC4u; }
        if (ctx->pc != 0x4D3BC4u) { return; }
    }
    ctx->pc = 0x4D3BC4u;
label_4d3bc4:
    // 0x4d3bc4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4d3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d3bc8:
    // 0x4d3bc8: 0xc04cc34  jal         func_1330D0
label_4d3bcc:
    if (ctx->pc == 0x4D3BCCu) {
        ctx->pc = 0x4D3BCCu;
            // 0x4d3bcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3BD0u;
        goto label_4d3bd0;
    }
    ctx->pc = 0x4D3BC8u;
    SET_GPR_U32(ctx, 31, 0x4D3BD0u);
    ctx->pc = 0x4D3BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3BC8u;
            // 0x4d3bcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3BD0u; }
        if (ctx->pc != 0x4D3BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3BD0u; }
        if (ctx->pc != 0x4D3BD0u) { return; }
    }
    ctx->pc = 0x4D3BD0u;
label_4d3bd0:
    // 0x4d3bd0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4d3bd4:
    // 0x4d3bd4: 0xc4617c00  lwc1        $f1, 0x7C00($v1)
    ctx->pc = 0x4d3bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3bd8:
    // 0x4d3bd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d3bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d3bdc:
    // 0x4d3bdc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4d3be0:
    if (ctx->pc == 0x4D3BE0u) {
        ctx->pc = 0x4D3BE0u;
            // 0x4d3be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3BE4u;
        goto label_4d3be4;
    }
    ctx->pc = 0x4D3BDCu;
    {
        const bool branch_taken_0x4d3bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d3bdc) {
            ctx->pc = 0x4D3BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3BDCu;
            // 0x4d3be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D3BECu;
            goto label_4d3bec;
        }
    }
    ctx->pc = 0x4D3BE4u;
label_4d3be4:
    // 0x4d3be4: 0x1000000f  b           . + 4 + (0xF << 2)
label_4d3be8:
    if (ctx->pc == 0x4D3BE8u) {
        ctx->pc = 0x4D3BE8u;
            // 0x4d3be8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4D3BECu;
        goto label_4d3bec;
    }
    ctx->pc = 0x4D3BE4u;
    {
        const bool branch_taken_0x4d3be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3BE4u;
            // 0x4d3be8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3be4) {
            ctx->pc = 0x4D3C24u;
            goto label_4d3c24;
        }
    }
    ctx->pc = 0x4D3BECu;
label_4d3bec:
    // 0x4d3bec: 0xc07697c  jal         func_1DA5F0
label_4d3bf0:
    if (ctx->pc == 0x4D3BF0u) {
        ctx->pc = 0x4D3BF4u;
        goto label_4d3bf4;
    }
    ctx->pc = 0x4D3BECu;
    SET_GPR_U32(ctx, 31, 0x4D3BF4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3BF4u; }
        if (ctx->pc != 0x4D3BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3BF4u; }
        if (ctx->pc != 0x4D3BF4u) { return; }
    }
    ctx->pc = 0x4D3BF4u;
label_4d3bf4:
    // 0x4d3bf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d3bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d3bf8:
    // 0x4d3bf8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4d3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4d3bfc:
    // 0x4d3bfc: 0xc04cd60  jal         func_133580
label_4d3c00:
    if (ctx->pc == 0x4D3C00u) {
        ctx->pc = 0x4D3C00u;
            // 0x4d3c00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3C04u;
        goto label_4d3c04;
    }
    ctx->pc = 0x4D3BFCu;
    SET_GPR_U32(ctx, 31, 0x4D3C04u);
    ctx->pc = 0x4D3C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3BFCu;
            // 0x4d3c00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3C04u; }
        if (ctx->pc != 0x4D3C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3C04u; }
        if (ctx->pc != 0x4D3C04u) { return; }
    }
    ctx->pc = 0x4D3C04u;
label_4d3c04:
    // 0x4d3c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d3c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d3c08:
    // 0x4d3c08: 0xc04c650  jal         func_131940
label_4d3c0c:
    if (ctx->pc == 0x4D3C0Cu) {
        ctx->pc = 0x4D3C0Cu;
            // 0x4d3c0c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D3C10u;
        goto label_4d3c10;
    }
    ctx->pc = 0x4D3C08u;
    SET_GPR_U32(ctx, 31, 0x4D3C10u);
    ctx->pc = 0x4D3C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3C08u;
            // 0x4d3c0c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3C10u; }
        if (ctx->pc != 0x4D3C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3C10u; }
        if (ctx->pc != 0x4D3C10u) { return; }
    }
    ctx->pc = 0x4D3C10u;
label_4d3c10:
    // 0x4d3c10: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4d3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4d3c14:
    // 0x4d3c14: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4d3c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d3c18:
    // 0x4d3c18: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4d3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4d3c1c:
    // 0x4d3c1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4d3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4d3c20:
    // 0x4d3c20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4d3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4d3c24:
    // 0x4d3c24: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4d3c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4d3c28:
    // 0x4d3c28: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_4d3c2c:
    if (ctx->pc == 0x4D3C2Cu) {
        ctx->pc = 0x4D3C2Cu;
            // 0x4d3c2c: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4D3C30u;
        goto label_4d3c30;
    }
    ctx->pc = 0x4D3C28u;
    {
        const bool branch_taken_0x4d3c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3C28u;
            // 0x4d3c2c: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3c28) {
            ctx->pc = 0x4D3CFCu;
            goto label_4d3cfc;
        }
    }
    ctx->pc = 0x4D3C30u;
label_4d3c30:
    // 0x4d3c30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3c34:
    // 0x4d3c34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3c38:
    // 0x4d3c38: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4d3c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d3c3c:
    // 0x4d3c3c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4d3c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4d3c40:
    // 0x4d3c40: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x4d3c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4d3c44:
    // 0x4d3c44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3c48:
    // 0x4d3c48: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4d3c48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4d3c4c:
    // 0x4d3c4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3c50:
    // 0x4d3c50: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4d3c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4d3c54:
    // 0x4d3c54: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4d3c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4d3c58:
    // 0x4d3c58: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4d3c58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4d3c5c:
    // 0x4d3c5c: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x4d3c5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4d3c60:
    // 0x4d3c60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3c64:
    // 0x4d3c64: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d3c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_4d3c68:
    // 0x4d3c68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3c6c:
    // 0x4d3c6c: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x4d3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_4d3c70:
    // 0x4d3c70: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4d3c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4d3c74:
    // 0x4d3c74: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4d3c74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4d3c78:
    // 0x4d3c78: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4d3c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4d3c7c:
    // 0x4d3c7c: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x4d3c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4d3c80:
    // 0x4d3c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d3c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d3c84:
    // 0x4d3c84: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x4d3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_4d3c88:
    // 0x4d3c88: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4d3c88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4d3c8c:
    // 0x4d3c8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3c90:
    // 0x4d3c90: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x4d3c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4d3c94:
    // 0x4d3c94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3c98:
    // 0x4d3c98: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x4d3c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_4d3c9c:
    // 0x4d3c9c: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x4d3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_4d3ca0:
    // 0x4d3ca0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4d3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d3ca4:
    // 0x4d3ca4: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x4d3ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4d3ca8:
    // 0x4d3ca8: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x4d3ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_4d3cac:
    // 0x4d3cac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4d3cb0:
    // 0x4d3cb0: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x4d3cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_4d3cb4:
    // 0x4d3cb4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x4d3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4d3cb8:
    // 0x4d3cb8: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x4d3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_4d3cbc:
    // 0x4d3cbc: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4d3cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4d3cc0:
    // 0x4d3cc0: 0xc04e4a4  jal         func_139290
label_4d3cc4:
    if (ctx->pc == 0x4D3CC4u) {
        ctx->pc = 0x4D3CC4u;
            // 0x4d3cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3CC8u;
        goto label_4d3cc8;
    }
    ctx->pc = 0x4D3CC0u;
    SET_GPR_U32(ctx, 31, 0x4D3CC8u);
    ctx->pc = 0x4D3CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3CC0u;
            // 0x4d3cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3CC8u; }
        if (ctx->pc != 0x4D3CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3CC8u; }
        if (ctx->pc != 0x4D3CC8u) { return; }
    }
    ctx->pc = 0x4D3CC8u;
label_4d3cc8:
    // 0x4d3cc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d3cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d3ccc:
    // 0x4d3ccc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d3cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d3cd0:
    // 0x4d3cd0: 0xc04cd60  jal         func_133580
label_4d3cd4:
    if (ctx->pc == 0x4D3CD4u) {
        ctx->pc = 0x4D3CD4u;
            // 0x4d3cd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3CD8u;
        goto label_4d3cd8;
    }
    ctx->pc = 0x4D3CD0u;
    SET_GPR_U32(ctx, 31, 0x4D3CD8u);
    ctx->pc = 0x4D3CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3CD0u;
            // 0x4d3cd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3CD8u; }
        if (ctx->pc != 0x4D3CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3CD8u; }
        if (ctx->pc != 0x4D3CD8u) { return; }
    }
    ctx->pc = 0x4D3CD8u;
label_4d3cd8:
    // 0x4d3cd8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4d3cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4d3cdc:
    // 0x4d3cdc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4d3cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4d3ce0:
    // 0x4d3ce0: 0x320f809  jalr        $t9
label_4d3ce4:
    if (ctx->pc == 0x4D3CE4u) {
        ctx->pc = 0x4D3CE4u;
            // 0x4d3ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3CE8u;
        goto label_4d3ce8;
    }
    ctx->pc = 0x4D3CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D3CE8u);
        ctx->pc = 0x4D3CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3CE0u;
            // 0x4d3ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D3CE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D3CE8u; }
            if (ctx->pc != 0x4D3CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x4D3CE8u;
label_4d3ce8:
    // 0x4d3ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d3ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d3cec:
    // 0x4d3cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d3cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d3cf0:
    // 0x4d3cf0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4d3cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4d3cf4:
    // 0x4d3cf4: 0xc054fd4  jal         func_153F50
label_4d3cf8:
    if (ctx->pc == 0x4D3CF8u) {
        ctx->pc = 0x4D3CF8u;
            // 0x4d3cf8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3CFCu;
        goto label_4d3cfc;
    }
    ctx->pc = 0x4D3CF4u;
    SET_GPR_U32(ctx, 31, 0x4D3CFCu);
    ctx->pc = 0x4D3CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3CF4u;
            // 0x4d3cf8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3CFCu; }
        if (ctx->pc != 0x4D3CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3CFCu; }
        if (ctx->pc != 0x4D3CFCu) { return; }
    }
    ctx->pc = 0x4D3CFCu;
label_4d3cfc:
    // 0x4d3cfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4d3cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4d3d00:
    // 0x4d3d00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4d3d00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d3d04:
    // 0x4d3d04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d3d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d3d08:
    // 0x4d3d08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d3d08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d3d0c:
    // 0x4d3d0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d3d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d3d10:
    // 0x4d3d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d3d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3d14:
    // 0x4d3d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3d18:
    // 0x4d3d18: 0x3e00008  jr          $ra
label_4d3d1c:
    if (ctx->pc == 0x4D3D1Cu) {
        ctx->pc = 0x4D3D1Cu;
            // 0x4d3d1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4D3D20u;
        goto label_4d3d20;
    }
    ctx->pc = 0x4D3D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3D18u;
            // 0x4d3d1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3D20u;
label_4d3d20:
    // 0x4d3d20: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d3d24:
    // 0x4d3d24: 0x3e00008  jr          $ra
label_4d3d28:
    if (ctx->pc == 0x4D3D28u) {
        ctx->pc = 0x4D3D28u;
            // 0x4d3d28: 0x24427bf0  addiu       $v0, $v0, 0x7BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
        ctx->pc = 0x4D3D2Cu;
        goto label_4d3d2c;
    }
    ctx->pc = 0x4D3D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3D24u;
            // 0x4d3d28: 0x24427bf0  addiu       $v0, $v0, 0x7BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3D2Cu;
label_4d3d2c:
    // 0x4d3d2c: 0x0  nop
    ctx->pc = 0x4d3d2cu;
    // NOP
label_4d3d30:
    // 0x4d3d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d3d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d3d34:
    // 0x4d3d34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4d3d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4d3d38:
    // 0x4d3d38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d3d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d3d3c:
    // 0x4d3d3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d3d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d3d40:
    // 0x4d3d40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d3d40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3d44:
    // 0x4d3d44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d3d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d3d48:
    // 0x4d3d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d3d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d3d4c:
    // 0x4d3d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d3d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d3d50:
    // 0x4d3d50: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4d3d50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d3d54:
    // 0x4d3d54: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4d3d58:
    if (ctx->pc == 0x4D3D58u) {
        ctx->pc = 0x4D3D58u;
            // 0x4d3d58: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3D5Cu;
        goto label_4d3d5c;
    }
    ctx->pc = 0x4D3D54u;
    {
        const bool branch_taken_0x4d3d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3D54u;
            // 0x4d3d58: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3d54) {
            ctx->pc = 0x4D3D98u;
            goto label_4d3d98;
        }
    }
    ctx->pc = 0x4D3D5Cu;
label_4d3d5c:
    // 0x4d3d5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d3d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d3d60:
    // 0x4d3d60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d3d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d3d64:
    // 0x4d3d64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d3d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d3d68:
    // 0x4d3d68: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4d3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4d3d6c:
    // 0x4d3d6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d3d70:
    // 0x4d3d70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d3d74:
    // 0x4d3d74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d3d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d3d78:
    // 0x4d3d78: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4d3d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4d3d7c:
    // 0x4d3d7c: 0x320f809  jalr        $t9
label_4d3d80:
    if (ctx->pc == 0x4D3D80u) {
        ctx->pc = 0x4D3D84u;
        goto label_4d3d84;
    }
    ctx->pc = 0x4D3D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D3D84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D3D84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D3D84u; }
            if (ctx->pc != 0x4D3D84u) { return; }
        }
        }
    }
    ctx->pc = 0x4D3D84u;
label_4d3d84:
    // 0x4d3d84: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4d3d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4d3d88:
    // 0x4d3d88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d3d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d3d8c:
    // 0x4d3d8c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4d3d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d3d90:
    // 0x4d3d90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4d3d94:
    if (ctx->pc == 0x4D3D94u) {
        ctx->pc = 0x4D3D94u;
            // 0x4d3d94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D3D98u;
        goto label_4d3d98;
    }
    ctx->pc = 0x4D3D90u;
    {
        const bool branch_taken_0x4d3d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3D90u;
            // 0x4d3d94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3d90) {
            ctx->pc = 0x4D3D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d3d68;
        }
    }
    ctx->pc = 0x4D3D98u;
label_4d3d98:
    // 0x4d3d98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d3d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d3d9c:
    // 0x4d3d9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4d3d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d3da0:
    // 0x4d3da0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d3da0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d3da4:
    // 0x4d3da4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d3da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d3da8:
    // 0x4d3da8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d3da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d3dac:
    // 0x4d3dac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d3dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3db0:
    // 0x4d3db0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3db4:
    // 0x4d3db4: 0x3e00008  jr          $ra
label_4d3db8:
    if (ctx->pc == 0x4D3DB8u) {
        ctx->pc = 0x4D3DB8u;
            // 0x4d3db8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D3DBCu;
        goto label_4d3dbc;
    }
    ctx->pc = 0x4D3DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3DB4u;
            // 0x4d3db8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3DBCu;
label_4d3dbc:
    // 0x4d3dbc: 0x0  nop
    ctx->pc = 0x4d3dbcu;
    // NOP
label_4d3dc0:
    // 0x4d3dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d3dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d3dc4:
    // 0x4d3dc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d3dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d3dc8:
    // 0x4d3dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d3dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d3dcc:
    // 0x4d3dcc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4d3dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4d3dd0:
    // 0x4d3dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d3dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d3dd4:
    // 0x4d3dd4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4d3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d3dd8:
    // 0x4d3dd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d3dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d3ddc:
    // 0x4d3ddc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4d3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4d3de0:
    // 0x4d3de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d3de4:
    // 0x4d3de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d3de8:
    // 0x4d3de8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4d3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4d3dec:
    // 0x4d3dec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4d3decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d3df0:
    // 0x4d3df0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d3df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4d3df4:
    // 0x4d3df4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4d3df8:
    // 0x4d3df8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4d3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4d3dfc:
    // 0x4d3dfc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4d3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4d3e00:
    // 0x4d3e00: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4d3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d3e04:
    // 0x4d3e04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d3e08:
    // 0x4d3e08: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4d3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4d3e0c:
    // 0x4d3e0c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4d3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d3e10:
    // 0x4d3e10: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4d3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4d3e14:
    // 0x4d3e14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d3e18:
    // 0x4d3e18: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4d3e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d3e1c:
    // 0x4d3e1c: 0xc0a997c  jal         func_2A65F0
label_4d3e20:
    if (ctx->pc == 0x4D3E20u) {
        ctx->pc = 0x4D3E20u;
            // 0x4d3e20: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4D3E24u;
        goto label_4d3e24;
    }
    ctx->pc = 0x4D3E1Cu;
    SET_GPR_U32(ctx, 31, 0x4D3E24u);
    ctx->pc = 0x4D3E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3E1Cu;
            // 0x4d3e20: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3E24u; }
        if (ctx->pc != 0x4D3E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3E24u; }
        if (ctx->pc != 0x4D3E24u) { return; }
    }
    ctx->pc = 0x4D3E24u;
label_4d3e24:
    // 0x4d3e24: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4d3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4d3e28:
    // 0x4d3e28: 0xc0d879c  jal         func_361E70
label_4d3e2c:
    if (ctx->pc == 0x4D3E2Cu) {
        ctx->pc = 0x4D3E2Cu;
            // 0x4d3e2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3E30u;
        goto label_4d3e30;
    }
    ctx->pc = 0x4D3E28u;
    SET_GPR_U32(ctx, 31, 0x4D3E30u);
    ctx->pc = 0x4D3E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3E28u;
            // 0x4d3e2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3E30u; }
        if (ctx->pc != 0x4D3E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3E30u; }
        if (ctx->pc != 0x4D3E30u) { return; }
    }
    ctx->pc = 0x4D3E30u;
label_4d3e30:
    // 0x4d3e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d3e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3e34:
    // 0x4d3e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3e38:
    // 0x4d3e38: 0x3e00008  jr          $ra
label_4d3e3c:
    if (ctx->pc == 0x4D3E3Cu) {
        ctx->pc = 0x4D3E3Cu;
            // 0x4d3e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D3E40u;
        goto label_4d3e40;
    }
    ctx->pc = 0x4D3E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3E38u;
            // 0x4d3e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3E40u;
label_4d3e40:
    // 0x4d3e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d3e44:
    // 0x4d3e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d3e48:
    // 0x4d3e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d3e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d3e4c:
    // 0x4d3e4c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4d3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4d3e50:
    // 0x4d3e50: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4d3e54:
    if (ctx->pc == 0x4D3E54u) {
        ctx->pc = 0x4D3E54u;
            // 0x4d3e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3E58u;
        goto label_4d3e58;
    }
    ctx->pc = 0x4D3E50u;
    {
        const bool branch_taken_0x4d3e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3E50u;
            // 0x4d3e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3e50) {
            ctx->pc = 0x4D3F70u;
            goto label_4d3f70;
        }
    }
    ctx->pc = 0x4D3E58u;
label_4d3e58:
    // 0x4d3e58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d3e5c:
    // 0x4d3e5c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4d3e60:
    // 0x4d3e60: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d3e64:
    // 0x4d3e64: 0xc075128  jal         func_1D44A0
label_4d3e68:
    if (ctx->pc == 0x4D3E68u) {
        ctx->pc = 0x4D3E68u;
            // 0x4d3e68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4D3E6Cu;
        goto label_4d3e6c;
    }
    ctx->pc = 0x4D3E64u;
    SET_GPR_U32(ctx, 31, 0x4D3E6Cu);
    ctx->pc = 0x4D3E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3E64u;
            // 0x4d3e68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3E6Cu; }
        if (ctx->pc != 0x4D3E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3E6Cu; }
        if (ctx->pc != 0x4D3E6Cu) { return; }
    }
    ctx->pc = 0x4D3E6Cu;
label_4d3e6c:
    // 0x4d3e6c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4d3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d3e70:
    // 0x4d3e70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3e74:
    // 0x4d3e74: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4d3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4d3e78:
    // 0x4d3e78: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4d3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4d3e7c:
    // 0x4d3e7c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d3e7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d3e80:
    // 0x4d3e80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d3e84:
    if (ctx->pc == 0x4D3E84u) {
        ctx->pc = 0x4D3E84u;
            // 0x4d3e84: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4D3E88u;
        goto label_4d3e88;
    }
    ctx->pc = 0x4D3E80u;
    {
        const bool branch_taken_0x4d3e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3E80u;
            // 0x4d3e84: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3e80) {
            ctx->pc = 0x4D3E90u;
            goto label_4d3e90;
        }
    }
    ctx->pc = 0x4D3E88u;
label_4d3e88:
    // 0x4d3e88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3e8c:
    // 0x4d3e8c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4d3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4d3e90:
    // 0x4d3e90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d3e94:
    // 0x4d3e94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3e98:
    // 0x4d3e98: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4d3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4d3e9c:
    // 0x4d3e9c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d3e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d3ea0:
    // 0x4d3ea0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d3ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d3ea4:
    // 0x4d3ea4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d3ea8:
    if (ctx->pc == 0x4D3EA8u) {
        ctx->pc = 0x4D3EA8u;
            // 0x4d3ea8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D3EACu;
        goto label_4d3eac;
    }
    ctx->pc = 0x4D3EA4u;
    {
        const bool branch_taken_0x4d3ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3ea4) {
            ctx->pc = 0x4D3EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3EA4u;
            // 0x4d3ea8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D3EB8u;
            goto label_4d3eb8;
        }
    }
    ctx->pc = 0x4D3EACu;
label_4d3eac:
    // 0x4d3eac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3eb0:
    // 0x4d3eb0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4d3eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4d3eb4:
    // 0x4d3eb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d3eb8:
    // 0x4d3eb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3ebc:
    // 0x4d3ebc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4d3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4d3ec0:
    // 0x4d3ec0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d3ec4:
    // 0x4d3ec4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d3ec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d3ec8:
    // 0x4d3ec8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d3ecc:
    if (ctx->pc == 0x4D3ECCu) {
        ctx->pc = 0x4D3ECCu;
            // 0x4d3ecc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4D3ED0u;
        goto label_4d3ed0;
    }
    ctx->pc = 0x4D3EC8u;
    {
        const bool branch_taken_0x4d3ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3ec8) {
            ctx->pc = 0x4D3ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3EC8u;
            // 0x4d3ecc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D3EDCu;
            goto label_4d3edc;
        }
    }
    ctx->pc = 0x4D3ED0u;
label_4d3ed0:
    // 0x4d3ed0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3ed4:
    // 0x4d3ed4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4d3ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4d3ed8:
    // 0x4d3ed8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4d3ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d3edc:
    // 0x4d3edc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d3edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d3ee0:
    // 0x4d3ee0: 0x320f809  jalr        $t9
label_4d3ee4:
    if (ctx->pc == 0x4D3EE4u) {
        ctx->pc = 0x4D3EE4u;
            // 0x4d3ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3EE8u;
        goto label_4d3ee8;
    }
    ctx->pc = 0x4D3EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D3EE8u);
        ctx->pc = 0x4D3EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3EE0u;
            // 0x4d3ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D3EE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D3EE8u; }
            if (ctx->pc != 0x4D3EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x4D3EE8u;
label_4d3ee8:
    // 0x4d3ee8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d3eec:
    // 0x4d3eec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3ef0:
    // 0x4d3ef0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4d3ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4d3ef4:
    // 0x4d3ef4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d3ef8:
    // 0x4d3ef8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d3ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d3efc:
    // 0x4d3efc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d3efcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d3f00:
    // 0x4d3f00: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d3f04:
    if (ctx->pc == 0x4D3F04u) {
        ctx->pc = 0x4D3F04u;
            // 0x4d3f04: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4D3F08u;
        goto label_4d3f08;
    }
    ctx->pc = 0x4D3F00u;
    {
        const bool branch_taken_0x4d3f00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3f00) {
            ctx->pc = 0x4D3F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3F00u;
            // 0x4d3f04: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D3F14u;
            goto label_4d3f14;
        }
    }
    ctx->pc = 0x4D3F08u;
label_4d3f08:
    // 0x4d3f08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3f0c:
    // 0x4d3f0c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4d3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4d3f10:
    // 0x4d3f10: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d3f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d3f14:
    // 0x4d3f14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3f18:
    // 0x4d3f18: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4d3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4d3f1c:
    // 0x4d3f1c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d3f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d3f20:
    // 0x4d3f20: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d3f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d3f24:
    // 0x4d3f24: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d3f24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d3f28:
    // 0x4d3f28: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d3f2c:
    if (ctx->pc == 0x4D3F2Cu) {
        ctx->pc = 0x4D3F30u;
        goto label_4d3f30;
    }
    ctx->pc = 0x4D3F28u;
    {
        const bool branch_taken_0x4d3f28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3f28) {
            ctx->pc = 0x4D3F38u;
            goto label_4d3f38;
        }
    }
    ctx->pc = 0x4D3F30u;
label_4d3f30:
    // 0x4d3f30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3f34:
    // 0x4d3f34: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4d3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4d3f38:
    // 0x4d3f38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3f3c:
    // 0x4d3f3c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4d3f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4d3f40:
    // 0x4d3f40: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d3f40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d3f44:
    // 0x4d3f44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d3f48:
    if (ctx->pc == 0x4D3F48u) {
        ctx->pc = 0x4D3F4Cu;
        goto label_4d3f4c;
    }
    ctx->pc = 0x4D3F44u;
    {
        const bool branch_taken_0x4d3f44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3f44) {
            ctx->pc = 0x4D3F54u;
            goto label_4d3f54;
        }
    }
    ctx->pc = 0x4D3F4Cu;
label_4d3f4c:
    // 0x4d3f4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3f50:
    // 0x4d3f50: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4d3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4d3f54:
    // 0x4d3f54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3f58:
    // 0x4d3f58: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4d3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4d3f5c:
    // 0x4d3f5c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d3f5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d3f60:
    // 0x4d3f60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d3f64:
    if (ctx->pc == 0x4D3F64u) {
        ctx->pc = 0x4D3F64u;
            // 0x4d3f64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D3F68u;
        goto label_4d3f68;
    }
    ctx->pc = 0x4D3F60u;
    {
        const bool branch_taken_0x4d3f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3f60) {
            ctx->pc = 0x4D3F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3F60u;
            // 0x4d3f64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D3F74u;
            goto label_4d3f74;
        }
    }
    ctx->pc = 0x4D3F68u;
label_4d3f68:
    // 0x4d3f68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3f6c:
    // 0x4d3f6c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4d3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4d3f70:
    // 0x4d3f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d3f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3f74:
    // 0x4d3f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3f78:
    // 0x4d3f78: 0x3e00008  jr          $ra
label_4d3f7c:
    if (ctx->pc == 0x4D3F7Cu) {
        ctx->pc = 0x4D3F7Cu;
            // 0x4d3f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D3F80u;
        goto label_4d3f80;
    }
    ctx->pc = 0x4D3F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3F78u;
            // 0x4d3f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3F80u;
label_4d3f80:
    // 0x4d3f80: 0x8134b28  j           func_4D2CA0
label_4d3f84:
    if (ctx->pc == 0x4D3F84u) {
        ctx->pc = 0x4D3F84u;
            // 0x4d3f84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D3F88u;
        goto label_4d3f88;
    }
    ctx->pc = 0x4D3F80u;
    ctx->pc = 0x4D3F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3F80u;
            // 0x4d3f84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2CA0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D2CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D3F88u;
label_4d3f88:
    // 0x4d3f88: 0x0  nop
    ctx->pc = 0x4d3f88u;
    // NOP
label_4d3f8c:
    // 0x4d3f8c: 0x0  nop
    ctx->pc = 0x4d3f8cu;
    // NOP
label_4d3f90:
    // 0x4d3f90: 0x8134998  j           func_4D2660
label_4d3f94:
    if (ctx->pc == 0x4D3F94u) {
        ctx->pc = 0x4D3F94u;
            // 0x4d3f94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D3F98u;
        goto label_4d3f98;
    }
    ctx->pc = 0x4D3F90u;
    ctx->pc = 0x4D3F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3F90u;
            // 0x4d3f94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2660u;
    if (runtime->hasFunction(0x4D2660u)) {
        auto targetFn = runtime->lookupFunction(0x4D2660u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004D2660_0x4d2660(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4D3F98u;
label_4d3f98:
    // 0x4d3f98: 0x0  nop
    ctx->pc = 0x4d3f98u;
    // NOP
label_4d3f9c:
    // 0x4d3f9c: 0x0  nop
    ctx->pc = 0x4d3f9cu;
    // NOP
label_4d3fa0:
    // 0x4d3fa0: 0x81349f0  j           func_4D27C0
label_4d3fa4:
    if (ctx->pc == 0x4D3FA4u) {
        ctx->pc = 0x4D3FA4u;
            // 0x4d3fa4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4D3FA8u;
        goto label_4d3fa8;
    }
    ctx->pc = 0x4D3FA0u;
    ctx->pc = 0x4D3FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3FA0u;
            // 0x4d3fa4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D27C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D3FA8u;
label_4d3fa8:
    // 0x4d3fa8: 0x0  nop
    ctx->pc = 0x4d3fa8u;
    // NOP
label_4d3fac:
    // 0x4d3fac: 0x0  nop
    ctx->pc = 0x4d3facu;
    // NOP
label_4d3fb0:
    // 0x4d3fb0: 0x8134974  j           func_4D25D0
label_4d3fb4:
    if (ctx->pc == 0x4D3FB4u) {
        ctx->pc = 0x4D3FB4u;
            // 0x4d3fb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D3FB8u;
        goto label_4d3fb8;
    }
    ctx->pc = 0x4D3FB0u;
    ctx->pc = 0x4D3FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3FB0u;
            // 0x4d3fb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D25D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D25D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D3FB8u;
label_4d3fb8:
    // 0x4d3fb8: 0x0  nop
    ctx->pc = 0x4d3fb8u;
    // NOP
label_4d3fbc:
    // 0x4d3fbc: 0x0  nop
    ctx->pc = 0x4d3fbcu;
    // NOP
label_4d3fc0:
    // 0x4d3fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d3fc4:
    // 0x4d3fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d3fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d3fc8:
    // 0x4d3fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d3fcc:
    // 0x4d3fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d3fd0:
    // 0x4d3fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d3fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3fd4:
    // 0x4d3fd4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4d3fd8:
    if (ctx->pc == 0x4D3FD8u) {
        ctx->pc = 0x4D3FD8u;
            // 0x4d3fd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3FDCu;
        goto label_4d3fdc;
    }
    ctx->pc = 0x4D3FD4u;
    {
        const bool branch_taken_0x4d3fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3FD4u;
            // 0x4d3fd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3fd4) {
            ctx->pc = 0x4D4030u;
            goto label_4d4030;
        }
    }
    ctx->pc = 0x4D3FDCu;
label_4d3fdc:
    // 0x4d3fdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d3fe0:
    // 0x4d3fe0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d3fe4:
    // 0x4d3fe4: 0x24632410  addiu       $v1, $v1, 0x2410
    ctx->pc = 0x4d3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9232));
label_4d3fe8:
    // 0x4d3fe8: 0x24422448  addiu       $v0, $v0, 0x2448
    ctx->pc = 0x4d3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9288));
label_4d3fec:
    // 0x4d3fec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d3ff0:
    // 0x4d3ff0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4d3ff4:
    if (ctx->pc == 0x4D3FF4u) {
        ctx->pc = 0x4D3FF4u;
            // 0x4d3ff4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D3FF8u;
        goto label_4d3ff8;
    }
    ctx->pc = 0x4D3FF0u;
    {
        const bool branch_taken_0x4d3ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3FF0u;
            // 0x4d3ff4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3ff0) {
            ctx->pc = 0x4D4018u;
            goto label_4d4018;
        }
    }
    ctx->pc = 0x4D3FF8u;
label_4d3ff8:
    // 0x4d3ff8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d3ffc:
    // 0x4d3ffc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d4000:
    // 0x4d4000: 0x246324c0  addiu       $v1, $v1, 0x24C0
    ctx->pc = 0x4d4000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9408));
label_4d4004:
    // 0x4d4004: 0x244224f8  addiu       $v0, $v0, 0x24F8
    ctx->pc = 0x4d4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9464));
label_4d4008:
    // 0x4d4008: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d4008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d400c:
    // 0x4d400c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d400cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4010:
    // 0x4d4010: 0xc135014  jal         func_4D4050
label_4d4014:
    if (ctx->pc == 0x4D4014u) {
        ctx->pc = 0x4D4014u;
            // 0x4d4014: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D4018u;
        goto label_4d4018;
    }
    ctx->pc = 0x4D4010u;
    SET_GPR_U32(ctx, 31, 0x4D4018u);
    ctx->pc = 0x4D4014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4010u;
            // 0x4d4014: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4050u;
    if (runtime->hasFunction(0x4D4050u)) {
        auto targetFn = runtime->lookupFunction(0x4D4050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4018u; }
        if (ctx->pc != 0x4D4018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4050_0x4d4050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4018u; }
        if (ctx->pc != 0x4D4018u) { return; }
    }
    ctx->pc = 0x4D4018u;
label_4d4018:
    // 0x4d4018: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d4018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4d401c:
    // 0x4d401c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d401cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d4020:
    // 0x4d4020: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d4024:
    if (ctx->pc == 0x4D4024u) {
        ctx->pc = 0x4D4024u;
            // 0x4d4024: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4028u;
        goto label_4d4028;
    }
    ctx->pc = 0x4D4020u;
    {
        const bool branch_taken_0x4d4020 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d4020) {
            ctx->pc = 0x4D4024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4020u;
            // 0x4d4024: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4034u;
            goto label_4d4034;
        }
    }
    ctx->pc = 0x4D4028u;
label_4d4028:
    // 0x4d4028: 0xc0400a8  jal         func_1002A0
label_4d402c:
    if (ctx->pc == 0x4D402Cu) {
        ctx->pc = 0x4D402Cu;
            // 0x4d402c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4030u;
        goto label_4d4030;
    }
    ctx->pc = 0x4D4028u;
    SET_GPR_U32(ctx, 31, 0x4D4030u);
    ctx->pc = 0x4D402Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4028u;
            // 0x4d402c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4030u; }
        if (ctx->pc != 0x4D4030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4030u; }
        if (ctx->pc != 0x4D4030u) { return; }
    }
    ctx->pc = 0x4D4030u;
label_4d4030:
    // 0x4d4030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d4030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4034:
    // 0x4d4034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d4034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4038:
    // 0x4d4038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d4038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d403c:
    // 0x4d403c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d403cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4040:
    // 0x4d4040: 0x3e00008  jr          $ra
label_4d4044:
    if (ctx->pc == 0x4D4044u) {
        ctx->pc = 0x4D4044u;
            // 0x4d4044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D4048u;
        goto label_4d4048;
    }
    ctx->pc = 0x4D4040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4040u;
            // 0x4d4044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4048u;
label_4d4048:
    // 0x4d4048: 0x0  nop
    ctx->pc = 0x4d4048u;
    // NOP
label_4d404c:
    // 0x4d404c: 0x0  nop
    ctx->pc = 0x4d404cu;
    // NOP
}
