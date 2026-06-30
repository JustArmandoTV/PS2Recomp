#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F1AC0
// Address: 0x3f1ac0 - 0x3f1e70
void sub_003F1AC0_0x3f1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1AC0_0x3f1ac0");
#endif

    switch (ctx->pc) {
        case 0x3f1ac0u: goto label_3f1ac0;
        case 0x3f1ac4u: goto label_3f1ac4;
        case 0x3f1ac8u: goto label_3f1ac8;
        case 0x3f1accu: goto label_3f1acc;
        case 0x3f1ad0u: goto label_3f1ad0;
        case 0x3f1ad4u: goto label_3f1ad4;
        case 0x3f1ad8u: goto label_3f1ad8;
        case 0x3f1adcu: goto label_3f1adc;
        case 0x3f1ae0u: goto label_3f1ae0;
        case 0x3f1ae4u: goto label_3f1ae4;
        case 0x3f1ae8u: goto label_3f1ae8;
        case 0x3f1aecu: goto label_3f1aec;
        case 0x3f1af0u: goto label_3f1af0;
        case 0x3f1af4u: goto label_3f1af4;
        case 0x3f1af8u: goto label_3f1af8;
        case 0x3f1afcu: goto label_3f1afc;
        case 0x3f1b00u: goto label_3f1b00;
        case 0x3f1b04u: goto label_3f1b04;
        case 0x3f1b08u: goto label_3f1b08;
        case 0x3f1b0cu: goto label_3f1b0c;
        case 0x3f1b10u: goto label_3f1b10;
        case 0x3f1b14u: goto label_3f1b14;
        case 0x3f1b18u: goto label_3f1b18;
        case 0x3f1b1cu: goto label_3f1b1c;
        case 0x3f1b20u: goto label_3f1b20;
        case 0x3f1b24u: goto label_3f1b24;
        case 0x3f1b28u: goto label_3f1b28;
        case 0x3f1b2cu: goto label_3f1b2c;
        case 0x3f1b30u: goto label_3f1b30;
        case 0x3f1b34u: goto label_3f1b34;
        case 0x3f1b38u: goto label_3f1b38;
        case 0x3f1b3cu: goto label_3f1b3c;
        case 0x3f1b40u: goto label_3f1b40;
        case 0x3f1b44u: goto label_3f1b44;
        case 0x3f1b48u: goto label_3f1b48;
        case 0x3f1b4cu: goto label_3f1b4c;
        case 0x3f1b50u: goto label_3f1b50;
        case 0x3f1b54u: goto label_3f1b54;
        case 0x3f1b58u: goto label_3f1b58;
        case 0x3f1b5cu: goto label_3f1b5c;
        case 0x3f1b60u: goto label_3f1b60;
        case 0x3f1b64u: goto label_3f1b64;
        case 0x3f1b68u: goto label_3f1b68;
        case 0x3f1b6cu: goto label_3f1b6c;
        case 0x3f1b70u: goto label_3f1b70;
        case 0x3f1b74u: goto label_3f1b74;
        case 0x3f1b78u: goto label_3f1b78;
        case 0x3f1b7cu: goto label_3f1b7c;
        case 0x3f1b80u: goto label_3f1b80;
        case 0x3f1b84u: goto label_3f1b84;
        case 0x3f1b88u: goto label_3f1b88;
        case 0x3f1b8cu: goto label_3f1b8c;
        case 0x3f1b90u: goto label_3f1b90;
        case 0x3f1b94u: goto label_3f1b94;
        case 0x3f1b98u: goto label_3f1b98;
        case 0x3f1b9cu: goto label_3f1b9c;
        case 0x3f1ba0u: goto label_3f1ba0;
        case 0x3f1ba4u: goto label_3f1ba4;
        case 0x3f1ba8u: goto label_3f1ba8;
        case 0x3f1bacu: goto label_3f1bac;
        case 0x3f1bb0u: goto label_3f1bb0;
        case 0x3f1bb4u: goto label_3f1bb4;
        case 0x3f1bb8u: goto label_3f1bb8;
        case 0x3f1bbcu: goto label_3f1bbc;
        case 0x3f1bc0u: goto label_3f1bc0;
        case 0x3f1bc4u: goto label_3f1bc4;
        case 0x3f1bc8u: goto label_3f1bc8;
        case 0x3f1bccu: goto label_3f1bcc;
        case 0x3f1bd0u: goto label_3f1bd0;
        case 0x3f1bd4u: goto label_3f1bd4;
        case 0x3f1bd8u: goto label_3f1bd8;
        case 0x3f1bdcu: goto label_3f1bdc;
        case 0x3f1be0u: goto label_3f1be0;
        case 0x3f1be4u: goto label_3f1be4;
        case 0x3f1be8u: goto label_3f1be8;
        case 0x3f1becu: goto label_3f1bec;
        case 0x3f1bf0u: goto label_3f1bf0;
        case 0x3f1bf4u: goto label_3f1bf4;
        case 0x3f1bf8u: goto label_3f1bf8;
        case 0x3f1bfcu: goto label_3f1bfc;
        case 0x3f1c00u: goto label_3f1c00;
        case 0x3f1c04u: goto label_3f1c04;
        case 0x3f1c08u: goto label_3f1c08;
        case 0x3f1c0cu: goto label_3f1c0c;
        case 0x3f1c10u: goto label_3f1c10;
        case 0x3f1c14u: goto label_3f1c14;
        case 0x3f1c18u: goto label_3f1c18;
        case 0x3f1c1cu: goto label_3f1c1c;
        case 0x3f1c20u: goto label_3f1c20;
        case 0x3f1c24u: goto label_3f1c24;
        case 0x3f1c28u: goto label_3f1c28;
        case 0x3f1c2cu: goto label_3f1c2c;
        case 0x3f1c30u: goto label_3f1c30;
        case 0x3f1c34u: goto label_3f1c34;
        case 0x3f1c38u: goto label_3f1c38;
        case 0x3f1c3cu: goto label_3f1c3c;
        case 0x3f1c40u: goto label_3f1c40;
        case 0x3f1c44u: goto label_3f1c44;
        case 0x3f1c48u: goto label_3f1c48;
        case 0x3f1c4cu: goto label_3f1c4c;
        case 0x3f1c50u: goto label_3f1c50;
        case 0x3f1c54u: goto label_3f1c54;
        case 0x3f1c58u: goto label_3f1c58;
        case 0x3f1c5cu: goto label_3f1c5c;
        case 0x3f1c60u: goto label_3f1c60;
        case 0x3f1c64u: goto label_3f1c64;
        case 0x3f1c68u: goto label_3f1c68;
        case 0x3f1c6cu: goto label_3f1c6c;
        case 0x3f1c70u: goto label_3f1c70;
        case 0x3f1c74u: goto label_3f1c74;
        case 0x3f1c78u: goto label_3f1c78;
        case 0x3f1c7cu: goto label_3f1c7c;
        case 0x3f1c80u: goto label_3f1c80;
        case 0x3f1c84u: goto label_3f1c84;
        case 0x3f1c88u: goto label_3f1c88;
        case 0x3f1c8cu: goto label_3f1c8c;
        case 0x3f1c90u: goto label_3f1c90;
        case 0x3f1c94u: goto label_3f1c94;
        case 0x3f1c98u: goto label_3f1c98;
        case 0x3f1c9cu: goto label_3f1c9c;
        case 0x3f1ca0u: goto label_3f1ca0;
        case 0x3f1ca4u: goto label_3f1ca4;
        case 0x3f1ca8u: goto label_3f1ca8;
        case 0x3f1cacu: goto label_3f1cac;
        case 0x3f1cb0u: goto label_3f1cb0;
        case 0x3f1cb4u: goto label_3f1cb4;
        case 0x3f1cb8u: goto label_3f1cb8;
        case 0x3f1cbcu: goto label_3f1cbc;
        case 0x3f1cc0u: goto label_3f1cc0;
        case 0x3f1cc4u: goto label_3f1cc4;
        case 0x3f1cc8u: goto label_3f1cc8;
        case 0x3f1cccu: goto label_3f1ccc;
        case 0x3f1cd0u: goto label_3f1cd0;
        case 0x3f1cd4u: goto label_3f1cd4;
        case 0x3f1cd8u: goto label_3f1cd8;
        case 0x3f1cdcu: goto label_3f1cdc;
        case 0x3f1ce0u: goto label_3f1ce0;
        case 0x3f1ce4u: goto label_3f1ce4;
        case 0x3f1ce8u: goto label_3f1ce8;
        case 0x3f1cecu: goto label_3f1cec;
        case 0x3f1cf0u: goto label_3f1cf0;
        case 0x3f1cf4u: goto label_3f1cf4;
        case 0x3f1cf8u: goto label_3f1cf8;
        case 0x3f1cfcu: goto label_3f1cfc;
        case 0x3f1d00u: goto label_3f1d00;
        case 0x3f1d04u: goto label_3f1d04;
        case 0x3f1d08u: goto label_3f1d08;
        case 0x3f1d0cu: goto label_3f1d0c;
        case 0x3f1d10u: goto label_3f1d10;
        case 0x3f1d14u: goto label_3f1d14;
        case 0x3f1d18u: goto label_3f1d18;
        case 0x3f1d1cu: goto label_3f1d1c;
        case 0x3f1d20u: goto label_3f1d20;
        case 0x3f1d24u: goto label_3f1d24;
        case 0x3f1d28u: goto label_3f1d28;
        case 0x3f1d2cu: goto label_3f1d2c;
        case 0x3f1d30u: goto label_3f1d30;
        case 0x3f1d34u: goto label_3f1d34;
        case 0x3f1d38u: goto label_3f1d38;
        case 0x3f1d3cu: goto label_3f1d3c;
        case 0x3f1d40u: goto label_3f1d40;
        case 0x3f1d44u: goto label_3f1d44;
        case 0x3f1d48u: goto label_3f1d48;
        case 0x3f1d4cu: goto label_3f1d4c;
        case 0x3f1d50u: goto label_3f1d50;
        case 0x3f1d54u: goto label_3f1d54;
        case 0x3f1d58u: goto label_3f1d58;
        case 0x3f1d5cu: goto label_3f1d5c;
        case 0x3f1d60u: goto label_3f1d60;
        case 0x3f1d64u: goto label_3f1d64;
        case 0x3f1d68u: goto label_3f1d68;
        case 0x3f1d6cu: goto label_3f1d6c;
        case 0x3f1d70u: goto label_3f1d70;
        case 0x3f1d74u: goto label_3f1d74;
        case 0x3f1d78u: goto label_3f1d78;
        case 0x3f1d7cu: goto label_3f1d7c;
        case 0x3f1d80u: goto label_3f1d80;
        case 0x3f1d84u: goto label_3f1d84;
        case 0x3f1d88u: goto label_3f1d88;
        case 0x3f1d8cu: goto label_3f1d8c;
        case 0x3f1d90u: goto label_3f1d90;
        case 0x3f1d94u: goto label_3f1d94;
        case 0x3f1d98u: goto label_3f1d98;
        case 0x3f1d9cu: goto label_3f1d9c;
        case 0x3f1da0u: goto label_3f1da0;
        case 0x3f1da4u: goto label_3f1da4;
        case 0x3f1da8u: goto label_3f1da8;
        case 0x3f1dacu: goto label_3f1dac;
        case 0x3f1db0u: goto label_3f1db0;
        case 0x3f1db4u: goto label_3f1db4;
        case 0x3f1db8u: goto label_3f1db8;
        case 0x3f1dbcu: goto label_3f1dbc;
        case 0x3f1dc0u: goto label_3f1dc0;
        case 0x3f1dc4u: goto label_3f1dc4;
        case 0x3f1dc8u: goto label_3f1dc8;
        case 0x3f1dccu: goto label_3f1dcc;
        case 0x3f1dd0u: goto label_3f1dd0;
        case 0x3f1dd4u: goto label_3f1dd4;
        case 0x3f1dd8u: goto label_3f1dd8;
        case 0x3f1ddcu: goto label_3f1ddc;
        case 0x3f1de0u: goto label_3f1de0;
        case 0x3f1de4u: goto label_3f1de4;
        case 0x3f1de8u: goto label_3f1de8;
        case 0x3f1decu: goto label_3f1dec;
        case 0x3f1df0u: goto label_3f1df0;
        case 0x3f1df4u: goto label_3f1df4;
        case 0x3f1df8u: goto label_3f1df8;
        case 0x3f1dfcu: goto label_3f1dfc;
        case 0x3f1e00u: goto label_3f1e00;
        case 0x3f1e04u: goto label_3f1e04;
        case 0x3f1e08u: goto label_3f1e08;
        case 0x3f1e0cu: goto label_3f1e0c;
        case 0x3f1e10u: goto label_3f1e10;
        case 0x3f1e14u: goto label_3f1e14;
        case 0x3f1e18u: goto label_3f1e18;
        case 0x3f1e1cu: goto label_3f1e1c;
        case 0x3f1e20u: goto label_3f1e20;
        case 0x3f1e24u: goto label_3f1e24;
        case 0x3f1e28u: goto label_3f1e28;
        case 0x3f1e2cu: goto label_3f1e2c;
        case 0x3f1e30u: goto label_3f1e30;
        case 0x3f1e34u: goto label_3f1e34;
        case 0x3f1e38u: goto label_3f1e38;
        case 0x3f1e3cu: goto label_3f1e3c;
        case 0x3f1e40u: goto label_3f1e40;
        case 0x3f1e44u: goto label_3f1e44;
        case 0x3f1e48u: goto label_3f1e48;
        case 0x3f1e4cu: goto label_3f1e4c;
        case 0x3f1e50u: goto label_3f1e50;
        case 0x3f1e54u: goto label_3f1e54;
        case 0x3f1e58u: goto label_3f1e58;
        case 0x3f1e5cu: goto label_3f1e5c;
        case 0x3f1e60u: goto label_3f1e60;
        case 0x3f1e64u: goto label_3f1e64;
        case 0x3f1e68u: goto label_3f1e68;
        case 0x3f1e6cu: goto label_3f1e6c;
        default: break;
    }

    ctx->pc = 0x3f1ac0u;

label_3f1ac0:
    // 0x3f1ac0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1ac4:
    // 0x3f1ac4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x3f1ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_3f1ac8:
    // 0x3f1ac8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x3f1ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3f1acc:
    // 0x3f1acc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1ad0:
    // 0x3f1ad0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x3f1ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3f1ad4:
    // 0x3f1ad4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x3f1ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_3f1ad8:
    // 0x3f1ad8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1adc:
    // 0x3f1adc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x3f1adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_3f1ae0:
    // 0x3f1ae0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1ae4:
    // 0x3f1ae4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x3f1ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3f1ae8:
    // 0x3f1ae8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x3f1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_3f1aec:
    // 0x3f1aec: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x3f1aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_3f1af0:
    // 0x3f1af0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x3f1af0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3f1af4:
    // 0x3f1af4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3f1af4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3f1af8:
    // 0x3f1af8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x3f1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_3f1afc:
    // 0x3f1afc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1b00:
    // 0x3f1b00: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3f1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_3f1b04:
    // 0x3f1b04: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3f1b04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3f1b08:
    // 0x3f1b08: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x3f1b08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_3f1b0c:
    // 0x3f1b0c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3f1b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3f1b10:
    // 0x3f1b10: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x3f1b10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_3f1b14:
    // 0x3f1b14: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3f1b14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_3f1b18:
    // 0x3f1b18: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x3f1b18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3f1b1c:
    // 0x3f1b1c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x3f1b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_3f1b20:
    // 0x3f1b20: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x3f1b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_3f1b24:
    // 0x3f1b24: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3f1b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_3f1b28:
    // 0x3f1b28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f1b2c:
    // 0x3f1b2c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x3f1b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_3f1b30:
    // 0x3f1b30: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x3f1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_3f1b34:
    // 0x3f1b34: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x3f1b34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3f1b38:
    // 0x3f1b38: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x3f1b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_3f1b3c:
    // 0x3f1b3c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x3f1b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_3f1b40:
    // 0x3f1b40: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x3f1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3f1b44:
    // 0x3f1b44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f1b48:
    // 0x3f1b48: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x3f1b48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_3f1b4c:
    // 0x3f1b4c: 0x3e00008  jr          $ra
label_3f1b50:
    if (ctx->pc == 0x3F1B50u) {
        ctx->pc = 0x3F1B50u;
            // 0x3f1b50: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x3F1B54u;
        goto label_3f1b54;
    }
    ctx->pc = 0x3F1B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1B4Cu;
            // 0x3f1b50: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1B54u;
label_3f1b54:
    // 0x3f1b54: 0x0  nop
    ctx->pc = 0x3f1b54u;
    // NOP
label_3f1b58:
    // 0x3f1b58: 0x0  nop
    ctx->pc = 0x3f1b58u;
    // NOP
label_3f1b5c:
    // 0x3f1b5c: 0x0  nop
    ctx->pc = 0x3f1b5cu;
    // NOP
label_3f1b60:
    // 0x3f1b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f1b64:
    // 0x3f1b64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f1b68:
    // 0x3f1b68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f1b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f1b6c:
    // 0x3f1b6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f1b70:
    // 0x3f1b70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f1b74:
    // 0x3f1b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f1b78:
    // 0x3f1b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f1b7c:
    // 0x3f1b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f1b80:
    // 0x3f1b80: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3f1b80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3f1b84:
    // 0x3f1b84: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_3f1b88:
    if (ctx->pc == 0x3F1B88u) {
        ctx->pc = 0x3F1B88u;
            // 0x3f1b88: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1B8Cu;
        goto label_3f1b8c;
    }
    ctx->pc = 0x3F1B84u;
    {
        const bool branch_taken_0x3f1b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F1B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1B84u;
            // 0x3f1b88: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1b84) {
            ctx->pc = 0x3F1BF0u;
            goto label_3f1bf0;
        }
    }
    ctx->pc = 0x3F1B8Cu;
label_3f1b8c:
    // 0x3f1b8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f1b90:
    // 0x3f1b90: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
label_3f1b94:
    if (ctx->pc == 0x3F1B94u) {
        ctx->pc = 0x3F1B94u;
            // 0x3f1b94: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3F1B98u;
        goto label_3f1b98;
    }
    ctx->pc = 0x3F1B90u;
    {
        const bool branch_taken_0x3f1b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f1b90) {
            ctx->pc = 0x3F1B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1B90u;
            // 0x3f1b94: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1BE4u;
            goto label_3f1be4;
        }
    }
    ctx->pc = 0x3F1B98u;
label_3f1b98:
    // 0x3f1b98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f1b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f1b9c:
    // 0x3f1b9c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3f1ba0:
    if (ctx->pc == 0x3F1BA0u) {
        ctx->pc = 0x3F1BA0u;
            // 0x3f1ba0: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->pc = 0x3F1BA4u;
        goto label_3f1ba4;
    }
    ctx->pc = 0x3F1B9Cu;
    {
        const bool branch_taken_0x3f1b9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f1b9c) {
            ctx->pc = 0x3F1BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1B9Cu;
            // 0x3f1ba0: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1BACu;
            goto label_3f1bac;
        }
    }
    ctx->pc = 0x3F1BA4u;
label_3f1ba4:
    // 0x3f1ba4: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_3f1ba8:
    if (ctx->pc == 0x3F1BA8u) {
        ctx->pc = 0x3F1BACu;
        goto label_3f1bac;
    }
    ctx->pc = 0x3F1BA4u;
    {
        const bool branch_taken_0x3f1ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1ba4) {
            ctx->pc = 0x3F1E48u;
            goto label_3f1e48;
        }
    }
    ctx->pc = 0x3F1BACu;
label_3f1bac:
    // 0x3f1bac: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3f1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3f1bb0:
    // 0x3f1bb0: 0x8c63fa68  lw          $v1, -0x598($v1)
    ctx->pc = 0x3f1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965864)));
label_3f1bb4:
    // 0x3f1bb4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3f1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3f1bb8:
    // 0x3f1bb8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3f1bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3f1bbc:
    // 0x3f1bbc: 0x602027  not         $a0, $v1
    ctx->pc = 0x3f1bbcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3f1bc0:
    // 0x3f1bc0: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x3f1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_3f1bc4:
    // 0x3f1bc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f1bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3f1bc8:
    // 0x3f1bc8: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x3f1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_3f1bcc:
    // 0x3f1bcc: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x3f1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_3f1bd0:
    // 0x3f1bd0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3f1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3f1bd4:
    // 0x3f1bd4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3f1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3f1bd8:
    // 0x3f1bd8: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x3f1bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
label_3f1bdc:
    // 0x3f1bdc: 0x1000009a  b           . + 4 + (0x9A << 2)
label_3f1be0:
    if (ctx->pc == 0x3F1BE0u) {
        ctx->pc = 0x3F1BE0u;
            // 0x3f1be0: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->pc = 0x3F1BE4u;
        goto label_3f1be4;
    }
    ctx->pc = 0x3F1BDCu;
    {
        const bool branch_taken_0x3f1bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1BDCu;
            // 0x3f1be0: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1bdc) {
            ctx->pc = 0x3F1E48u;
            goto label_3f1e48;
        }
    }
    ctx->pc = 0x3F1BE4u;
label_3f1be4:
    // 0x3f1be4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3f1be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3f1be8:
    // 0x3f1be8: 0x320f809  jalr        $t9
label_3f1bec:
    if (ctx->pc == 0x3F1BECu) {
        ctx->pc = 0x3F1BF0u;
        goto label_3f1bf0;
    }
    ctx->pc = 0x3F1BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1BF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F1BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F1BF0u; }
            if (ctx->pc != 0x3F1BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F1BF0u;
label_3f1bf0:
    // 0x3f1bf0: 0x8e870098  lw          $a3, 0x98($s4)
    ctx->pc = 0x3f1bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
label_3f1bf4:
    // 0x3f1bf4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f1bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f1bf8:
    // 0x3f1bf8: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3f1bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f1bfc:
    // 0x3f1bfc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f1bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f1c00:
    // 0x3f1c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f1c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f1c04:
    // 0x3f1c04: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x3f1c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f1c08:
    // 0x3f1c08: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x3f1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
label_3f1c0c:
    // 0x3f1c0c: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x3f1c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_3f1c10:
    // 0x3f1c10: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x3f1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
label_3f1c14:
    // 0x3f1c14: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x3f1c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3f1c18:
    // 0x3f1c18: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3f1c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f1c1c:
    // 0x3f1c1c: 0x0  nop
    ctx->pc = 0x3f1c1cu;
    // NOP
label_3f1c20:
    // 0x3f1c20: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3f1c20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f1c24:
    // 0x3f1c24: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x3f1c24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_3f1c28:
    // 0x3f1c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f1c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f1c2c:
    // 0x3f1c2c: 0x0  nop
    ctx->pc = 0x3f1c2cu;
    // NOP
label_3f1c30:
    // 0x3f1c30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f1c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f1c34:
    // 0x3f1c34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3f1c38:
    if (ctx->pc == 0x3F1C38u) {
        ctx->pc = 0x3F1C38u;
            // 0x3f1c38: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x3F1C3Cu;
        goto label_3f1c3c;
    }
    ctx->pc = 0x3F1C34u;
    {
        const bool branch_taken_0x3f1c34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F1C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1C34u;
            // 0x3f1c38: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c34) {
            ctx->pc = 0x3F1C40u;
            goto label_3f1c40;
        }
    }
    ctx->pc = 0x3F1C3Cu;
label_3f1c3c:
    // 0x3f1c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f1c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c40:
    // 0x3f1c40: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3f1c44:
    if (ctx->pc == 0x3F1C44u) {
        ctx->pc = 0x3F1C44u;
            // 0x3f1c44: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3F1C48u;
        goto label_3f1c48;
    }
    ctx->pc = 0x3F1C40u;
    {
        const bool branch_taken_0x3f1c40 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3f1c40) {
            ctx->pc = 0x3F1C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1C40u;
            // 0x3f1c44: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F1C54u;
            goto label_3f1c54;
        }
    }
    ctx->pc = 0x3F1C48u;
label_3f1c48:
    // 0x3f1c48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f1c48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f1c4c:
    // 0x3f1c4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f1c50:
    if (ctx->pc == 0x3F1C50u) {
        ctx->pc = 0x3F1C50u;
            // 0x3f1c50: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3F1C54u;
        goto label_3f1c54;
    }
    ctx->pc = 0x3F1C4Cu;
    {
        const bool branch_taken_0x3f1c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1C4Cu;
            // 0x3f1c50: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c4c) {
            ctx->pc = 0x3F1C6Cu;
            goto label_3f1c6c;
        }
    }
    ctx->pc = 0x3F1C54u;
label_3f1c54:
    // 0x3f1c54: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3f1c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3f1c58:
    // 0x3f1c58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3f1c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3f1c5c:
    // 0x3f1c5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f1c5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f1c60:
    // 0x3f1c60: 0x0  nop
    ctx->pc = 0x3f1c60u;
    // NOP
label_3f1c64:
    // 0x3f1c64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3f1c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f1c68:
    // 0x3f1c68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3f1c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3f1c6c:
    // 0x3f1c6c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3f1c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1c70:
    // 0x3f1c70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f1c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f1c74:
    // 0x3f1c74: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3f1c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3f1c78:
    // 0x3f1c78: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x3f1c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_3f1c7c:
    // 0x3f1c7c: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
label_3f1c80:
    if (ctx->pc == 0x3F1C80u) {
        ctx->pc = 0x3F1C84u;
        goto label_3f1c84;
    }
    ctx->pc = 0x3F1C7Cu;
    {
        const bool branch_taken_0x3f1c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1c7c) {
            ctx->pc = 0x3F1E48u;
            goto label_3f1e48;
        }
    }
    ctx->pc = 0x3F1C84u;
label_3f1c84:
    // 0x3f1c84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f1c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c88:
    // 0x3f1c88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f1c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1c8c:
    // 0x3f1c8c: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3f1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3f1c90:
    // 0x3f1c90: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3f1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3f1c94:
    // 0x3f1c94: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3f1c94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f1c98:
    // 0x3f1c98: 0xc0fc7ac  jal         func_3F1EB0
label_3f1c9c:
    if (ctx->pc == 0x3F1C9Cu) {
        ctx->pc = 0x3F1C9Cu;
            // 0x3f1c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CA0u;
        goto label_3f1ca0;
    }
    ctx->pc = 0x3F1C98u;
    SET_GPR_U32(ctx, 31, 0x3F1CA0u);
    ctx->pc = 0x3F1C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1C98u;
            // 0x3f1c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1EB0u;
    if (runtime->hasFunction(0x3F1EB0u)) {
        auto targetFn = runtime->lookupFunction(0x3F1EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1CA0u; }
        if (ctx->pc != 0x3F1CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1EB0_0x3f1eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1CA0u; }
        if (ctx->pc != 0x3F1CA0u) { return; }
    }
    ctx->pc = 0x3F1CA0u;
label_3f1ca0:
    // 0x3f1ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f1ca4:
    // 0x3f1ca4: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_3f1ca8:
    if (ctx->pc == 0x3F1CA8u) {
        ctx->pc = 0x3F1CACu;
        goto label_3f1cac;
    }
    ctx->pc = 0x3F1CA4u;
    {
        const bool branch_taken_0x3f1ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f1ca4) {
            ctx->pc = 0x3F1CE0u;
            goto label_3f1ce0;
        }
    }
    ctx->pc = 0x3F1CACu;
label_3f1cac:
    // 0x3f1cac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f1cb0:
    if (ctx->pc == 0x3F1CB0u) {
        ctx->pc = 0x3F1CB4u;
        goto label_3f1cb4;
    }
    ctx->pc = 0x3F1CACu;
    {
        const bool branch_taken_0x3f1cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1cac) {
            ctx->pc = 0x3F1CC0u;
            goto label_3f1cc0;
        }
    }
    ctx->pc = 0x3F1CB4u;
label_3f1cb4:
    // 0x3f1cb4: 0x10000060  b           . + 4 + (0x60 << 2)
label_3f1cb8:
    if (ctx->pc == 0x3F1CB8u) {
        ctx->pc = 0x3F1CBCu;
        goto label_3f1cbc;
    }
    ctx->pc = 0x3F1CB4u;
    {
        const bool branch_taken_0x3f1cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1cb4) {
            ctx->pc = 0x3F1E38u;
            goto label_3f1e38;
        }
    }
    ctx->pc = 0x3F1CBCu;
label_3f1cbc:
    // 0x3f1cbc: 0x0  nop
    ctx->pc = 0x3f1cbcu;
    // NOP
label_3f1cc0:
    // 0x3f1cc0: 0xc0fc7a8  jal         func_3F1EA0
label_3f1cc4:
    if (ctx->pc == 0x3F1CC4u) {
        ctx->pc = 0x3F1CC4u;
            // 0x3f1cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CC8u;
        goto label_3f1cc8;
    }
    ctx->pc = 0x3F1CC0u;
    SET_GPR_U32(ctx, 31, 0x3F1CC8u);
    ctx->pc = 0x3F1CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1CC0u;
            // 0x3f1cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1EA0u;
    if (runtime->hasFunction(0x3F1EA0u)) {
        auto targetFn = runtime->lookupFunction(0x3F1EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1CC8u; }
        if (ctx->pc != 0x3F1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1EA0_0x3f1ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1CC8u; }
        if (ctx->pc != 0x3F1CC8u) { return; }
    }
    ctx->pc = 0x3F1CC8u;
label_3f1cc8:
    // 0x3f1cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f1cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1ccc:
    // 0x3f1ccc: 0xc0fc7a4  jal         func_3F1E90
label_3f1cd0:
    if (ctx->pc == 0x3F1CD0u) {
        ctx->pc = 0x3F1CD0u;
            // 0x3f1cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F1CD4u;
        goto label_3f1cd4;
    }
    ctx->pc = 0x3F1CCCu;
    SET_GPR_U32(ctx, 31, 0x3F1CD4u);
    ctx->pc = 0x3F1CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1CCCu;
            // 0x3f1cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1E90u;
    if (runtime->hasFunction(0x3F1E90u)) {
        auto targetFn = runtime->lookupFunction(0x3F1E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1CD4u; }
        if (ctx->pc != 0x3F1CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1E90_0x3f1e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1CD4u; }
        if (ctx->pc != 0x3F1CD4u) { return; }
    }
    ctx->pc = 0x3F1CD4u;
label_3f1cd4:
    // 0x3f1cd4: 0x10000058  b           . + 4 + (0x58 << 2)
label_3f1cd8:
    if (ctx->pc == 0x3F1CD8u) {
        ctx->pc = 0x3F1CDCu;
        goto label_3f1cdc;
    }
    ctx->pc = 0x3F1CD4u;
    {
        const bool branch_taken_0x3f1cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1cd4) {
            ctx->pc = 0x3F1E38u;
            goto label_3f1e38;
        }
    }
    ctx->pc = 0x3F1CDCu;
label_3f1cdc:
    // 0x3f1cdc: 0x0  nop
    ctx->pc = 0x3f1cdcu;
    // NOP
label_3f1ce0:
    // 0x3f1ce0: 0xc0fc7a0  jal         func_3F1E80
label_3f1ce4:
    if (ctx->pc == 0x3F1CE4u) {
        ctx->pc = 0x3F1CE4u;
            // 0x3f1ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CE8u;
        goto label_3f1ce8;
    }
    ctx->pc = 0x3F1CE0u;
    SET_GPR_U32(ctx, 31, 0x3F1CE8u);
    ctx->pc = 0x3F1CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1CE0u;
            // 0x3f1ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1E80u;
    if (runtime->hasFunction(0x3F1E80u)) {
        auto targetFn = runtime->lookupFunction(0x3F1E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1CE8u; }
        if (ctx->pc != 0x3F1CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1E80_0x3f1e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1CE8u; }
        if (ctx->pc != 0x3F1CE8u) { return; }
    }
    ctx->pc = 0x3F1CE8u;
label_3f1ce8:
    // 0x3f1ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f1cec:
    // 0x3f1cec: 0x1045003a  beq         $v0, $a1, . + 4 + (0x3A << 2)
label_3f1cf0:
    if (ctx->pc == 0x3F1CF0u) {
        ctx->pc = 0x3F1CF4u;
        goto label_3f1cf4;
    }
    ctx->pc = 0x3F1CECu;
    {
        const bool branch_taken_0x3f1cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f1cec) {
            ctx->pc = 0x3F1DD8u;
            goto label_3f1dd8;
        }
    }
    ctx->pc = 0x3F1CF4u;
label_3f1cf4:
    // 0x3f1cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f1cf8:
    if (ctx->pc == 0x3F1CF8u) {
        ctx->pc = 0x3F1CFCu;
        goto label_3f1cfc;
    }
    ctx->pc = 0x3F1CF4u;
    {
        const bool branch_taken_0x3f1cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1cf4) {
            ctx->pc = 0x3F1D08u;
            goto label_3f1d08;
        }
    }
    ctx->pc = 0x3F1CFCu;
label_3f1cfc:
    // 0x3f1cfc: 0x1000004e  b           . + 4 + (0x4E << 2)
label_3f1d00:
    if (ctx->pc == 0x3F1D00u) {
        ctx->pc = 0x3F1D04u;
        goto label_3f1d04;
    }
    ctx->pc = 0x3F1CFCu;
    {
        const bool branch_taken_0x3f1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1cfc) {
            ctx->pc = 0x3F1E38u;
            goto label_3f1e38;
        }
    }
    ctx->pc = 0x3F1D04u;
label_3f1d04:
    // 0x3f1d04: 0x0  nop
    ctx->pc = 0x3f1d04u;
    // NOP
label_3f1d08:
    // 0x3f1d08: 0xc6410084  lwc1        $f1, 0x84($s2)
    ctx->pc = 0x3f1d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f1d0c:
    // 0x3f1d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f1d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f1d10:
    // 0x3f1d10: 0x0  nop
    ctx->pc = 0x3f1d10u;
    // NOP
label_3f1d14:
    // 0x3f1d14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f1d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f1d18:
    // 0x3f1d18: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_3f1d1c:
    if (ctx->pc == 0x3F1D1Cu) {
        ctx->pc = 0x3F1D20u;
        goto label_3f1d20;
    }
    ctx->pc = 0x3F1D18u;
    {
        const bool branch_taken_0x3f1d18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f1d18) {
            ctx->pc = 0x3F1DB8u;
            goto label_3f1db8;
        }
    }
    ctx->pc = 0x3F1D20u;
label_3f1d20:
    // 0x3f1d20: 0xc0775b8  jal         func_1DD6E0
label_3f1d24:
    if (ctx->pc == 0x3F1D24u) {
        ctx->pc = 0x3F1D28u;
        goto label_3f1d28;
    }
    ctx->pc = 0x3F1D20u;
    SET_GPR_U32(ctx, 31, 0x3F1D28u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D28u; }
        if (ctx->pc != 0x3F1D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D28u; }
        if (ctx->pc != 0x3F1D28u) { return; }
    }
    ctx->pc = 0x3F1D28u;
label_3f1d28:
    // 0x3f1d28: 0xc0775b4  jal         func_1DD6D0
label_3f1d2c:
    if (ctx->pc == 0x3F1D2Cu) {
        ctx->pc = 0x3F1D2Cu;
            // 0x3f1d2c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3F1D30u;
        goto label_3f1d30;
    }
    ctx->pc = 0x3F1D28u;
    SET_GPR_U32(ctx, 31, 0x3F1D30u);
    ctx->pc = 0x3F1D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1D28u;
            // 0x3f1d2c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D30u; }
        if (ctx->pc != 0x3F1D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D30u; }
        if (ctx->pc != 0x3F1D30u) { return; }
    }
    ctx->pc = 0x3F1D30u;
label_3f1d30:
    // 0x3f1d30: 0xc6420084  lwc1        $f2, 0x84($s2)
    ctx->pc = 0x3f1d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f1d34:
    // 0x3f1d34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f1d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f1d38:
    // 0x3f1d38: 0x0  nop
    ctx->pc = 0x3f1d38u;
    // NOP
label_3f1d3c:
    // 0x3f1d3c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3f1d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3f1d40:
    // 0x3f1d40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f1d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f1d44:
    // 0x3f1d44: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_3f1d48:
    if (ctx->pc == 0x3F1D48u) {
        ctx->pc = 0x3F1D48u;
            // 0x3f1d48: 0xe6400084  swc1        $f0, 0x84($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
        ctx->pc = 0x3F1D4Cu;
        goto label_3f1d4c;
    }
    ctx->pc = 0x3F1D44u;
    {
        const bool branch_taken_0x3f1d44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F1D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1D44u;
            // 0x3f1d48: 0xe6400084  swc1        $f0, 0x84($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d44) {
            ctx->pc = 0x3F1E38u;
            goto label_3f1e38;
        }
    }
    ctx->pc = 0x3F1D4Cu;
label_3f1d4c:
    // 0x3f1d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f1d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1d50:
    // 0x3f1d50: 0xc0fc79c  jal         func_3F1E70
label_3f1d54:
    if (ctx->pc == 0x3F1D54u) {
        ctx->pc = 0x3F1D54u;
            // 0x3f1d54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F1D58u;
        goto label_3f1d58;
    }
    ctx->pc = 0x3F1D50u;
    SET_GPR_U32(ctx, 31, 0x3F1D58u);
    ctx->pc = 0x3F1D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1D50u;
            // 0x3f1d54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1E70u;
    if (runtime->hasFunction(0x3F1E70u)) {
        auto targetFn = runtime->lookupFunction(0x3F1E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D58u; }
        if (ctx->pc != 0x3F1D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1E70_0x3f1e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D58u; }
        if (ctx->pc != 0x3F1D58u) { return; }
    }
    ctx->pc = 0x3F1D58u;
label_3f1d58:
    // 0x3f1d58: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x3f1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_3f1d5c:
    // 0x3f1d5c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3f1d60:
    if (ctx->pc == 0x3F1D60u) {
        ctx->pc = 0x3F1D64u;
        goto label_3f1d64;
    }
    ctx->pc = 0x3F1D5Cu;
    {
        const bool branch_taken_0x3f1d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1d5c) {
            ctx->pc = 0x3F1D98u;
            goto label_3f1d98;
        }
    }
    ctx->pc = 0x3F1D64u;
label_3f1d64:
    // 0x3f1d64: 0xc0d1c10  jal         func_347040
label_3f1d68:
    if (ctx->pc == 0x3F1D68u) {
        ctx->pc = 0x3F1D68u;
            // 0x3f1d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1D6Cu;
        goto label_3f1d6c;
    }
    ctx->pc = 0x3F1D64u;
    SET_GPR_U32(ctx, 31, 0x3F1D6Cu);
    ctx->pc = 0x3F1D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1D64u;
            // 0x3f1d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D6Cu; }
        if (ctx->pc != 0x3F1D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D6Cu; }
        if (ctx->pc != 0x3F1D6Cu) { return; }
    }
    ctx->pc = 0x3F1D6Cu;
label_3f1d6c:
    // 0x3f1d6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f1d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1d70:
    // 0x3f1d70: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f1d74:
    // 0x3f1d74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f1d78:
    // 0x3f1d78: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x3f1d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_3f1d7c:
    // 0x3f1d7c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3f1d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3f1d80:
    // 0x3f1d80: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x3f1d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_3f1d84:
    // 0x3f1d84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f1d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1d88:
    // 0x3f1d88: 0xc0bb0e8  jal         func_2EC3A0
label_3f1d8c:
    if (ctx->pc == 0x3F1D8Cu) {
        ctx->pc = 0x3F1D8Cu;
            // 0x3f1d8c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F1D90u;
        goto label_3f1d90;
    }
    ctx->pc = 0x3F1D88u;
    SET_GPR_U32(ctx, 31, 0x3F1D90u);
    ctx->pc = 0x3F1D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1D88u;
            // 0x3f1d8c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D90u; }
        if (ctx->pc != 0x3F1D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1D90u; }
        if (ctx->pc != 0x3F1D90u) { return; }
    }
    ctx->pc = 0x3F1D90u;
label_3f1d90:
    // 0x3f1d90: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x3f1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_3f1d94:
    // 0x3f1d94: 0x0  nop
    ctx->pc = 0x3f1d94u;
    // NOP
label_3f1d98:
    // 0x3f1d98: 0xc0d1c10  jal         func_347040
label_3f1d9c:
    if (ctx->pc == 0x3F1D9Cu) {
        ctx->pc = 0x3F1D9Cu;
            // 0x3f1d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1DA0u;
        goto label_3f1da0;
    }
    ctx->pc = 0x3F1D98u;
    SET_GPR_U32(ctx, 31, 0x3F1DA0u);
    ctx->pc = 0x3F1D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1D98u;
            // 0x3f1d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DA0u; }
        if (ctx->pc != 0x3F1DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DA0u; }
        if (ctx->pc != 0x3F1DA0u) { return; }
    }
    ctx->pc = 0x3F1DA0u;
label_3f1da0:
    // 0x3f1da0: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x3f1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_3f1da4:
    // 0x3f1da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f1da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1da8:
    // 0x3f1da8: 0xc122d2c  jal         func_48B4B0
label_3f1dac:
    if (ctx->pc == 0x3F1DACu) {
        ctx->pc = 0x3F1DACu;
            // 0x3f1dac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1DB0u;
        goto label_3f1db0;
    }
    ctx->pc = 0x3F1DA8u;
    SET_GPR_U32(ctx, 31, 0x3F1DB0u);
    ctx->pc = 0x3F1DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1DA8u;
            // 0x3f1dac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DB0u; }
        if (ctx->pc != 0x3F1DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DB0u; }
        if (ctx->pc != 0x3F1DB0u) { return; }
    }
    ctx->pc = 0x3F1DB0u;
label_3f1db0:
    // 0x3f1db0: 0x10000021  b           . + 4 + (0x21 << 2)
label_3f1db4:
    if (ctx->pc == 0x3F1DB4u) {
        ctx->pc = 0x3F1DB8u;
        goto label_3f1db8;
    }
    ctx->pc = 0x3F1DB0u;
    {
        const bool branch_taken_0x3f1db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1db0) {
            ctx->pc = 0x3F1E38u;
            goto label_3f1e38;
        }
    }
    ctx->pc = 0x3F1DB8u;
label_3f1db8:
    // 0x3f1db8: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x3f1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3f1dbc:
    // 0x3f1dbc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_3f1dc0:
    if (ctx->pc == 0x3F1DC0u) {
        ctx->pc = 0x3F1DC4u;
        goto label_3f1dc4;
    }
    ctx->pc = 0x3F1DBCu;
    {
        const bool branch_taken_0x3f1dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1dbc) {
            ctx->pc = 0x3F1E38u;
            goto label_3f1e38;
        }
    }
    ctx->pc = 0x3F1DC4u;
label_3f1dc4:
    // 0x3f1dc4: 0xc0fc8f0  jal         func_3F23C0
label_3f1dc8:
    if (ctx->pc == 0x3F1DC8u) {
        ctx->pc = 0x3F1DC8u;
            // 0x3f1dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1DCCu;
        goto label_3f1dcc;
    }
    ctx->pc = 0x3F1DC4u;
    SET_GPR_U32(ctx, 31, 0x3F1DCCu);
    ctx->pc = 0x3F1DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1DC4u;
            // 0x3f1dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F23C0u;
    if (runtime->hasFunction(0x3F23C0u)) {
        auto targetFn = runtime->lookupFunction(0x3F23C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DCCu; }
        if (ctx->pc != 0x3F1DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F23C0_0x3f23c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DCCu; }
        if (ctx->pc != 0x3F1DCCu) { return; }
    }
    ctx->pc = 0x3F1DCCu;
label_3f1dcc:
    // 0x3f1dcc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3f1dd0:
    if (ctx->pc == 0x3F1DD0u) {
        ctx->pc = 0x3F1DD4u;
        goto label_3f1dd4;
    }
    ctx->pc = 0x3F1DCCu;
    {
        const bool branch_taken_0x3f1dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1dcc) {
            ctx->pc = 0x3F1E38u;
            goto label_3f1e38;
        }
    }
    ctx->pc = 0x3F1DD4u;
label_3f1dd4:
    // 0x3f1dd4: 0x0  nop
    ctx->pc = 0x3f1dd4u;
    // NOP
label_3f1dd8:
    // 0x3f1dd8: 0xc0fc8ec  jal         func_3F23B0
label_3f1ddc:
    if (ctx->pc == 0x3F1DDCu) {
        ctx->pc = 0x3F1DDCu;
            // 0x3f1ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1DE0u;
        goto label_3f1de0;
    }
    ctx->pc = 0x3F1DD8u;
    SET_GPR_U32(ctx, 31, 0x3F1DE0u);
    ctx->pc = 0x3F1DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1DD8u;
            // 0x3f1ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F23B0u;
    if (runtime->hasFunction(0x3F23B0u)) {
        auto targetFn = runtime->lookupFunction(0x3F23B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DE0u; }
        if (ctx->pc != 0x3F1DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F23B0_0x3f23b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DE0u; }
        if (ctx->pc != 0x3F1DE0u) { return; }
    }
    ctx->pc = 0x3F1DE0u;
label_3f1de0:
    // 0x3f1de0: 0xc0fc91c  jal         func_3F2470
label_3f1de4:
    if (ctx->pc == 0x3F1DE4u) {
        ctx->pc = 0x3F1DE4u;
            // 0x3f1de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1DE8u;
        goto label_3f1de8;
    }
    ctx->pc = 0x3F1DE0u;
    SET_GPR_U32(ctx, 31, 0x3F1DE8u);
    ctx->pc = 0x3F1DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1DE0u;
            // 0x3f1de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2470u;
    if (runtime->hasFunction(0x3F2470u)) {
        auto targetFn = runtime->lookupFunction(0x3F2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DE8u; }
        if (ctx->pc != 0x3F1DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2470_0x3f2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DE8u; }
        if (ctx->pc != 0x3F1DE8u) { return; }
    }
    ctx->pc = 0x3F1DE8u;
label_3f1de8:
    // 0x3f1de8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3f1dec:
    if (ctx->pc == 0x3F1DECu) {
        ctx->pc = 0x3F1DF0u;
        goto label_3f1df0;
    }
    ctx->pc = 0x3F1DE8u;
    {
        const bool branch_taken_0x3f1de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1de8) {
            ctx->pc = 0x3F1E38u;
            goto label_3f1e38;
        }
    }
    ctx->pc = 0x3F1DF0u;
label_3f1df0:
    // 0x3f1df0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f1df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1df4:
    // 0x3f1df4: 0xc0fc79c  jal         func_3F1E70
label_3f1df8:
    if (ctx->pc == 0x3F1DF8u) {
        ctx->pc = 0x3F1DF8u;
            // 0x3f1df8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1DFCu;
        goto label_3f1dfc;
    }
    ctx->pc = 0x3F1DF4u;
    SET_GPR_U32(ctx, 31, 0x3F1DFCu);
    ctx->pc = 0x3F1DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1DF4u;
            // 0x3f1df8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1E70u;
    if (runtime->hasFunction(0x3F1E70u)) {
        auto targetFn = runtime->lookupFunction(0x3F1E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DFCu; }
        if (ctx->pc != 0x3F1DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F1E70_0x3f1e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1DFCu; }
        if (ctx->pc != 0x3F1DFCu) { return; }
    }
    ctx->pc = 0x3F1DFCu;
label_3f1dfc:
    // 0x3f1dfc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3f1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3f1e00:
    // 0x3f1e00: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x3f1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_3f1e04:
    // 0x3f1e04: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x3f1e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_3f1e08:
    // 0x3f1e08: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3f1e0c:
    if (ctx->pc == 0x3F1E0Cu) {
        ctx->pc = 0x3F1E10u;
        goto label_3f1e10;
    }
    ctx->pc = 0x3F1E08u;
    {
        const bool branch_taken_0x3f1e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1e08) {
            ctx->pc = 0x3F1E28u;
            goto label_3f1e28;
        }
    }
    ctx->pc = 0x3F1E10u;
label_3f1e10:
    // 0x3f1e10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f1e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f1e14:
    // 0x3f1e14: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f1e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f1e18:
    // 0x3f1e18: 0x320f809  jalr        $t9
label_3f1e1c:
    if (ctx->pc == 0x3F1E1Cu) {
        ctx->pc = 0x3F1E1Cu;
            // 0x3f1e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E20u;
        goto label_3f1e20;
    }
    ctx->pc = 0x3F1E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1E20u);
        ctx->pc = 0x3F1E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1E18u;
            // 0x3f1e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F1E20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F1E20u; }
            if (ctx->pc != 0x3F1E20u) { return; }
        }
        }
    }
    ctx->pc = 0x3F1E20u;
label_3f1e20:
    // 0x3f1e20: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x3f1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
label_3f1e24:
    // 0x3f1e24: 0x0  nop
    ctx->pc = 0x3f1e24u;
    // NOP
label_3f1e28:
    // 0x3f1e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1e2c:
    // 0x3f1e2c: 0xc0fc8ec  jal         func_3F23B0
label_3f1e30:
    if (ctx->pc == 0x3F1E30u) {
        ctx->pc = 0x3F1E30u;
            // 0x3f1e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E34u;
        goto label_3f1e34;
    }
    ctx->pc = 0x3F1E2Cu;
    SET_GPR_U32(ctx, 31, 0x3F1E34u);
    ctx->pc = 0x3F1E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1E2Cu;
            // 0x3f1e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F23B0u;
    if (runtime->hasFunction(0x3F23B0u)) {
        auto targetFn = runtime->lookupFunction(0x3F23B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1E34u; }
        if (ctx->pc != 0x3F1E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F23B0_0x3f23b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1E34u; }
        if (ctx->pc != 0x3F1E34u) { return; }
    }
    ctx->pc = 0x3F1E34u;
label_3f1e34:
    // 0x3f1e34: 0x0  nop
    ctx->pc = 0x3f1e34u;
    // NOP
label_3f1e38:
    // 0x3f1e38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3f1e38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3f1e3c:
    // 0x3f1e3c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x3f1e3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3f1e40:
    // 0x3f1e40: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
label_3f1e44:
    if (ctx->pc == 0x3F1E44u) {
        ctx->pc = 0x3F1E44u;
            // 0x3f1e44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3F1E48u;
        goto label_3f1e48;
    }
    ctx->pc = 0x3F1E40u;
    {
        const bool branch_taken_0x3f1e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1E40u;
            // 0x3f1e44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1e40) {
            ctx->pc = 0x3F1C8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f1c8c;
        }
    }
    ctx->pc = 0x3F1E48u;
label_3f1e48:
    // 0x3f1e48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f1e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f1e4c:
    // 0x3f1e4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f1e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1e50:
    // 0x3f1e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f1e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1e54:
    // 0x3f1e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1e58:
    // 0x3f1e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1e5c:
    // 0x3f1e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1e60:
    // 0x3f1e60: 0x3e00008  jr          $ra
label_3f1e64:
    if (ctx->pc == 0x3F1E64u) {
        ctx->pc = 0x3F1E64u;
            // 0x3f1e64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F1E68u;
        goto label_3f1e68;
    }
    ctx->pc = 0x3F1E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1E60u;
            // 0x3f1e64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1E68u;
label_3f1e68:
    // 0x3f1e68: 0x0  nop
    ctx->pc = 0x3f1e68u;
    // NOP
label_3f1e6c:
    // 0x3f1e6c: 0x0  nop
    ctx->pc = 0x3f1e6cu;
    // NOP
}
