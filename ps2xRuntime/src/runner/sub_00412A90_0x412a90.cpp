#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412A90
// Address: 0x412a90 - 0x4130f0
void sub_00412A90_0x412a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412A90_0x412a90");
#endif

    switch (ctx->pc) {
        case 0x412a90u: goto label_412a90;
        case 0x412a94u: goto label_412a94;
        case 0x412a98u: goto label_412a98;
        case 0x412a9cu: goto label_412a9c;
        case 0x412aa0u: goto label_412aa0;
        case 0x412aa4u: goto label_412aa4;
        case 0x412aa8u: goto label_412aa8;
        case 0x412aacu: goto label_412aac;
        case 0x412ab0u: goto label_412ab0;
        case 0x412ab4u: goto label_412ab4;
        case 0x412ab8u: goto label_412ab8;
        case 0x412abcu: goto label_412abc;
        case 0x412ac0u: goto label_412ac0;
        case 0x412ac4u: goto label_412ac4;
        case 0x412ac8u: goto label_412ac8;
        case 0x412accu: goto label_412acc;
        case 0x412ad0u: goto label_412ad0;
        case 0x412ad4u: goto label_412ad4;
        case 0x412ad8u: goto label_412ad8;
        case 0x412adcu: goto label_412adc;
        case 0x412ae0u: goto label_412ae0;
        case 0x412ae4u: goto label_412ae4;
        case 0x412ae8u: goto label_412ae8;
        case 0x412aecu: goto label_412aec;
        case 0x412af0u: goto label_412af0;
        case 0x412af4u: goto label_412af4;
        case 0x412af8u: goto label_412af8;
        case 0x412afcu: goto label_412afc;
        case 0x412b00u: goto label_412b00;
        case 0x412b04u: goto label_412b04;
        case 0x412b08u: goto label_412b08;
        case 0x412b0cu: goto label_412b0c;
        case 0x412b10u: goto label_412b10;
        case 0x412b14u: goto label_412b14;
        case 0x412b18u: goto label_412b18;
        case 0x412b1cu: goto label_412b1c;
        case 0x412b20u: goto label_412b20;
        case 0x412b24u: goto label_412b24;
        case 0x412b28u: goto label_412b28;
        case 0x412b2cu: goto label_412b2c;
        case 0x412b30u: goto label_412b30;
        case 0x412b34u: goto label_412b34;
        case 0x412b38u: goto label_412b38;
        case 0x412b3cu: goto label_412b3c;
        case 0x412b40u: goto label_412b40;
        case 0x412b44u: goto label_412b44;
        case 0x412b48u: goto label_412b48;
        case 0x412b4cu: goto label_412b4c;
        case 0x412b50u: goto label_412b50;
        case 0x412b54u: goto label_412b54;
        case 0x412b58u: goto label_412b58;
        case 0x412b5cu: goto label_412b5c;
        case 0x412b60u: goto label_412b60;
        case 0x412b64u: goto label_412b64;
        case 0x412b68u: goto label_412b68;
        case 0x412b6cu: goto label_412b6c;
        case 0x412b70u: goto label_412b70;
        case 0x412b74u: goto label_412b74;
        case 0x412b78u: goto label_412b78;
        case 0x412b7cu: goto label_412b7c;
        case 0x412b80u: goto label_412b80;
        case 0x412b84u: goto label_412b84;
        case 0x412b88u: goto label_412b88;
        case 0x412b8cu: goto label_412b8c;
        case 0x412b90u: goto label_412b90;
        case 0x412b94u: goto label_412b94;
        case 0x412b98u: goto label_412b98;
        case 0x412b9cu: goto label_412b9c;
        case 0x412ba0u: goto label_412ba0;
        case 0x412ba4u: goto label_412ba4;
        case 0x412ba8u: goto label_412ba8;
        case 0x412bacu: goto label_412bac;
        case 0x412bb0u: goto label_412bb0;
        case 0x412bb4u: goto label_412bb4;
        case 0x412bb8u: goto label_412bb8;
        case 0x412bbcu: goto label_412bbc;
        case 0x412bc0u: goto label_412bc0;
        case 0x412bc4u: goto label_412bc4;
        case 0x412bc8u: goto label_412bc8;
        case 0x412bccu: goto label_412bcc;
        case 0x412bd0u: goto label_412bd0;
        case 0x412bd4u: goto label_412bd4;
        case 0x412bd8u: goto label_412bd8;
        case 0x412bdcu: goto label_412bdc;
        case 0x412be0u: goto label_412be0;
        case 0x412be4u: goto label_412be4;
        case 0x412be8u: goto label_412be8;
        case 0x412becu: goto label_412bec;
        case 0x412bf0u: goto label_412bf0;
        case 0x412bf4u: goto label_412bf4;
        case 0x412bf8u: goto label_412bf8;
        case 0x412bfcu: goto label_412bfc;
        case 0x412c00u: goto label_412c00;
        case 0x412c04u: goto label_412c04;
        case 0x412c08u: goto label_412c08;
        case 0x412c0cu: goto label_412c0c;
        case 0x412c10u: goto label_412c10;
        case 0x412c14u: goto label_412c14;
        case 0x412c18u: goto label_412c18;
        case 0x412c1cu: goto label_412c1c;
        case 0x412c20u: goto label_412c20;
        case 0x412c24u: goto label_412c24;
        case 0x412c28u: goto label_412c28;
        case 0x412c2cu: goto label_412c2c;
        case 0x412c30u: goto label_412c30;
        case 0x412c34u: goto label_412c34;
        case 0x412c38u: goto label_412c38;
        case 0x412c3cu: goto label_412c3c;
        case 0x412c40u: goto label_412c40;
        case 0x412c44u: goto label_412c44;
        case 0x412c48u: goto label_412c48;
        case 0x412c4cu: goto label_412c4c;
        case 0x412c50u: goto label_412c50;
        case 0x412c54u: goto label_412c54;
        case 0x412c58u: goto label_412c58;
        case 0x412c5cu: goto label_412c5c;
        case 0x412c60u: goto label_412c60;
        case 0x412c64u: goto label_412c64;
        case 0x412c68u: goto label_412c68;
        case 0x412c6cu: goto label_412c6c;
        case 0x412c70u: goto label_412c70;
        case 0x412c74u: goto label_412c74;
        case 0x412c78u: goto label_412c78;
        case 0x412c7cu: goto label_412c7c;
        case 0x412c80u: goto label_412c80;
        case 0x412c84u: goto label_412c84;
        case 0x412c88u: goto label_412c88;
        case 0x412c8cu: goto label_412c8c;
        case 0x412c90u: goto label_412c90;
        case 0x412c94u: goto label_412c94;
        case 0x412c98u: goto label_412c98;
        case 0x412c9cu: goto label_412c9c;
        case 0x412ca0u: goto label_412ca0;
        case 0x412ca4u: goto label_412ca4;
        case 0x412ca8u: goto label_412ca8;
        case 0x412cacu: goto label_412cac;
        case 0x412cb0u: goto label_412cb0;
        case 0x412cb4u: goto label_412cb4;
        case 0x412cb8u: goto label_412cb8;
        case 0x412cbcu: goto label_412cbc;
        case 0x412cc0u: goto label_412cc0;
        case 0x412cc4u: goto label_412cc4;
        case 0x412cc8u: goto label_412cc8;
        case 0x412cccu: goto label_412ccc;
        case 0x412cd0u: goto label_412cd0;
        case 0x412cd4u: goto label_412cd4;
        case 0x412cd8u: goto label_412cd8;
        case 0x412cdcu: goto label_412cdc;
        case 0x412ce0u: goto label_412ce0;
        case 0x412ce4u: goto label_412ce4;
        case 0x412ce8u: goto label_412ce8;
        case 0x412cecu: goto label_412cec;
        case 0x412cf0u: goto label_412cf0;
        case 0x412cf4u: goto label_412cf4;
        case 0x412cf8u: goto label_412cf8;
        case 0x412cfcu: goto label_412cfc;
        case 0x412d00u: goto label_412d00;
        case 0x412d04u: goto label_412d04;
        case 0x412d08u: goto label_412d08;
        case 0x412d0cu: goto label_412d0c;
        case 0x412d10u: goto label_412d10;
        case 0x412d14u: goto label_412d14;
        case 0x412d18u: goto label_412d18;
        case 0x412d1cu: goto label_412d1c;
        case 0x412d20u: goto label_412d20;
        case 0x412d24u: goto label_412d24;
        case 0x412d28u: goto label_412d28;
        case 0x412d2cu: goto label_412d2c;
        case 0x412d30u: goto label_412d30;
        case 0x412d34u: goto label_412d34;
        case 0x412d38u: goto label_412d38;
        case 0x412d3cu: goto label_412d3c;
        case 0x412d40u: goto label_412d40;
        case 0x412d44u: goto label_412d44;
        case 0x412d48u: goto label_412d48;
        case 0x412d4cu: goto label_412d4c;
        case 0x412d50u: goto label_412d50;
        case 0x412d54u: goto label_412d54;
        case 0x412d58u: goto label_412d58;
        case 0x412d5cu: goto label_412d5c;
        case 0x412d60u: goto label_412d60;
        case 0x412d64u: goto label_412d64;
        case 0x412d68u: goto label_412d68;
        case 0x412d6cu: goto label_412d6c;
        case 0x412d70u: goto label_412d70;
        case 0x412d74u: goto label_412d74;
        case 0x412d78u: goto label_412d78;
        case 0x412d7cu: goto label_412d7c;
        case 0x412d80u: goto label_412d80;
        case 0x412d84u: goto label_412d84;
        case 0x412d88u: goto label_412d88;
        case 0x412d8cu: goto label_412d8c;
        case 0x412d90u: goto label_412d90;
        case 0x412d94u: goto label_412d94;
        case 0x412d98u: goto label_412d98;
        case 0x412d9cu: goto label_412d9c;
        case 0x412da0u: goto label_412da0;
        case 0x412da4u: goto label_412da4;
        case 0x412da8u: goto label_412da8;
        case 0x412dacu: goto label_412dac;
        case 0x412db0u: goto label_412db0;
        case 0x412db4u: goto label_412db4;
        case 0x412db8u: goto label_412db8;
        case 0x412dbcu: goto label_412dbc;
        case 0x412dc0u: goto label_412dc0;
        case 0x412dc4u: goto label_412dc4;
        case 0x412dc8u: goto label_412dc8;
        case 0x412dccu: goto label_412dcc;
        case 0x412dd0u: goto label_412dd0;
        case 0x412dd4u: goto label_412dd4;
        case 0x412dd8u: goto label_412dd8;
        case 0x412ddcu: goto label_412ddc;
        case 0x412de0u: goto label_412de0;
        case 0x412de4u: goto label_412de4;
        case 0x412de8u: goto label_412de8;
        case 0x412decu: goto label_412dec;
        case 0x412df0u: goto label_412df0;
        case 0x412df4u: goto label_412df4;
        case 0x412df8u: goto label_412df8;
        case 0x412dfcu: goto label_412dfc;
        case 0x412e00u: goto label_412e00;
        case 0x412e04u: goto label_412e04;
        case 0x412e08u: goto label_412e08;
        case 0x412e0cu: goto label_412e0c;
        case 0x412e10u: goto label_412e10;
        case 0x412e14u: goto label_412e14;
        case 0x412e18u: goto label_412e18;
        case 0x412e1cu: goto label_412e1c;
        case 0x412e20u: goto label_412e20;
        case 0x412e24u: goto label_412e24;
        case 0x412e28u: goto label_412e28;
        case 0x412e2cu: goto label_412e2c;
        case 0x412e30u: goto label_412e30;
        case 0x412e34u: goto label_412e34;
        case 0x412e38u: goto label_412e38;
        case 0x412e3cu: goto label_412e3c;
        case 0x412e40u: goto label_412e40;
        case 0x412e44u: goto label_412e44;
        case 0x412e48u: goto label_412e48;
        case 0x412e4cu: goto label_412e4c;
        case 0x412e50u: goto label_412e50;
        case 0x412e54u: goto label_412e54;
        case 0x412e58u: goto label_412e58;
        case 0x412e5cu: goto label_412e5c;
        case 0x412e60u: goto label_412e60;
        case 0x412e64u: goto label_412e64;
        case 0x412e68u: goto label_412e68;
        case 0x412e6cu: goto label_412e6c;
        case 0x412e70u: goto label_412e70;
        case 0x412e74u: goto label_412e74;
        case 0x412e78u: goto label_412e78;
        case 0x412e7cu: goto label_412e7c;
        case 0x412e80u: goto label_412e80;
        case 0x412e84u: goto label_412e84;
        case 0x412e88u: goto label_412e88;
        case 0x412e8cu: goto label_412e8c;
        case 0x412e90u: goto label_412e90;
        case 0x412e94u: goto label_412e94;
        case 0x412e98u: goto label_412e98;
        case 0x412e9cu: goto label_412e9c;
        case 0x412ea0u: goto label_412ea0;
        case 0x412ea4u: goto label_412ea4;
        case 0x412ea8u: goto label_412ea8;
        case 0x412eacu: goto label_412eac;
        case 0x412eb0u: goto label_412eb0;
        case 0x412eb4u: goto label_412eb4;
        case 0x412eb8u: goto label_412eb8;
        case 0x412ebcu: goto label_412ebc;
        case 0x412ec0u: goto label_412ec0;
        case 0x412ec4u: goto label_412ec4;
        case 0x412ec8u: goto label_412ec8;
        case 0x412eccu: goto label_412ecc;
        case 0x412ed0u: goto label_412ed0;
        case 0x412ed4u: goto label_412ed4;
        case 0x412ed8u: goto label_412ed8;
        case 0x412edcu: goto label_412edc;
        case 0x412ee0u: goto label_412ee0;
        case 0x412ee4u: goto label_412ee4;
        case 0x412ee8u: goto label_412ee8;
        case 0x412eecu: goto label_412eec;
        case 0x412ef0u: goto label_412ef0;
        case 0x412ef4u: goto label_412ef4;
        case 0x412ef8u: goto label_412ef8;
        case 0x412efcu: goto label_412efc;
        case 0x412f00u: goto label_412f00;
        case 0x412f04u: goto label_412f04;
        case 0x412f08u: goto label_412f08;
        case 0x412f0cu: goto label_412f0c;
        case 0x412f10u: goto label_412f10;
        case 0x412f14u: goto label_412f14;
        case 0x412f18u: goto label_412f18;
        case 0x412f1cu: goto label_412f1c;
        case 0x412f20u: goto label_412f20;
        case 0x412f24u: goto label_412f24;
        case 0x412f28u: goto label_412f28;
        case 0x412f2cu: goto label_412f2c;
        case 0x412f30u: goto label_412f30;
        case 0x412f34u: goto label_412f34;
        case 0x412f38u: goto label_412f38;
        case 0x412f3cu: goto label_412f3c;
        case 0x412f40u: goto label_412f40;
        case 0x412f44u: goto label_412f44;
        case 0x412f48u: goto label_412f48;
        case 0x412f4cu: goto label_412f4c;
        case 0x412f50u: goto label_412f50;
        case 0x412f54u: goto label_412f54;
        case 0x412f58u: goto label_412f58;
        case 0x412f5cu: goto label_412f5c;
        case 0x412f60u: goto label_412f60;
        case 0x412f64u: goto label_412f64;
        case 0x412f68u: goto label_412f68;
        case 0x412f6cu: goto label_412f6c;
        case 0x412f70u: goto label_412f70;
        case 0x412f74u: goto label_412f74;
        case 0x412f78u: goto label_412f78;
        case 0x412f7cu: goto label_412f7c;
        case 0x412f80u: goto label_412f80;
        case 0x412f84u: goto label_412f84;
        case 0x412f88u: goto label_412f88;
        case 0x412f8cu: goto label_412f8c;
        case 0x412f90u: goto label_412f90;
        case 0x412f94u: goto label_412f94;
        case 0x412f98u: goto label_412f98;
        case 0x412f9cu: goto label_412f9c;
        case 0x412fa0u: goto label_412fa0;
        case 0x412fa4u: goto label_412fa4;
        case 0x412fa8u: goto label_412fa8;
        case 0x412facu: goto label_412fac;
        case 0x412fb0u: goto label_412fb0;
        case 0x412fb4u: goto label_412fb4;
        case 0x412fb8u: goto label_412fb8;
        case 0x412fbcu: goto label_412fbc;
        case 0x412fc0u: goto label_412fc0;
        case 0x412fc4u: goto label_412fc4;
        case 0x412fc8u: goto label_412fc8;
        case 0x412fccu: goto label_412fcc;
        case 0x412fd0u: goto label_412fd0;
        case 0x412fd4u: goto label_412fd4;
        case 0x412fd8u: goto label_412fd8;
        case 0x412fdcu: goto label_412fdc;
        case 0x412fe0u: goto label_412fe0;
        case 0x412fe4u: goto label_412fe4;
        case 0x412fe8u: goto label_412fe8;
        case 0x412fecu: goto label_412fec;
        case 0x412ff0u: goto label_412ff0;
        case 0x412ff4u: goto label_412ff4;
        case 0x412ff8u: goto label_412ff8;
        case 0x412ffcu: goto label_412ffc;
        case 0x413000u: goto label_413000;
        case 0x413004u: goto label_413004;
        case 0x413008u: goto label_413008;
        case 0x41300cu: goto label_41300c;
        case 0x413010u: goto label_413010;
        case 0x413014u: goto label_413014;
        case 0x413018u: goto label_413018;
        case 0x41301cu: goto label_41301c;
        case 0x413020u: goto label_413020;
        case 0x413024u: goto label_413024;
        case 0x413028u: goto label_413028;
        case 0x41302cu: goto label_41302c;
        case 0x413030u: goto label_413030;
        case 0x413034u: goto label_413034;
        case 0x413038u: goto label_413038;
        case 0x41303cu: goto label_41303c;
        case 0x413040u: goto label_413040;
        case 0x413044u: goto label_413044;
        case 0x413048u: goto label_413048;
        case 0x41304cu: goto label_41304c;
        case 0x413050u: goto label_413050;
        case 0x413054u: goto label_413054;
        case 0x413058u: goto label_413058;
        case 0x41305cu: goto label_41305c;
        case 0x413060u: goto label_413060;
        case 0x413064u: goto label_413064;
        case 0x413068u: goto label_413068;
        case 0x41306cu: goto label_41306c;
        case 0x413070u: goto label_413070;
        case 0x413074u: goto label_413074;
        case 0x413078u: goto label_413078;
        case 0x41307cu: goto label_41307c;
        case 0x413080u: goto label_413080;
        case 0x413084u: goto label_413084;
        case 0x413088u: goto label_413088;
        case 0x41308cu: goto label_41308c;
        case 0x413090u: goto label_413090;
        case 0x413094u: goto label_413094;
        case 0x413098u: goto label_413098;
        case 0x41309cu: goto label_41309c;
        case 0x4130a0u: goto label_4130a0;
        case 0x4130a4u: goto label_4130a4;
        case 0x4130a8u: goto label_4130a8;
        case 0x4130acu: goto label_4130ac;
        case 0x4130b0u: goto label_4130b0;
        case 0x4130b4u: goto label_4130b4;
        case 0x4130b8u: goto label_4130b8;
        case 0x4130bcu: goto label_4130bc;
        case 0x4130c0u: goto label_4130c0;
        case 0x4130c4u: goto label_4130c4;
        case 0x4130c8u: goto label_4130c8;
        case 0x4130ccu: goto label_4130cc;
        case 0x4130d0u: goto label_4130d0;
        case 0x4130d4u: goto label_4130d4;
        case 0x4130d8u: goto label_4130d8;
        case 0x4130dcu: goto label_4130dc;
        case 0x4130e0u: goto label_4130e0;
        case 0x4130e4u: goto label_4130e4;
        case 0x4130e8u: goto label_4130e8;
        case 0x4130ecu: goto label_4130ec;
        default: break;
    }

    ctx->pc = 0x412a90u;

label_412a90:
    // 0x412a90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x412a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_412a94:
    // 0x412a94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x412a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_412a98:
    // 0x412a98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x412a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_412a9c:
    // 0x412a9c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x412a9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_412aa0:
    // 0x412aa0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x412aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_412aa4:
    // 0x412aa4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x412aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_412aa8:
    // 0x412aa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x412aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_412aac:
    // 0x412aac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x412aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_412ab0:
    // 0x412ab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x412ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_412ab4:
    // 0x412ab4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x412ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412ab8:
    // 0x412ab8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x412ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_412abc:
    // 0x412abc: 0xc0aeaf4  jal         func_2BABD0
label_412ac0:
    if (ctx->pc == 0x412AC0u) {
        ctx->pc = 0x412AC0u;
            // 0x412ac0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x412AC4u;
        goto label_412ac4;
    }
    ctx->pc = 0x412ABCu;
    SET_GPR_U32(ctx, 31, 0x412AC4u);
    ctx->pc = 0x412AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412ABCu;
            // 0x412ac0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412AC4u; }
        if (ctx->pc != 0x412AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412AC4u; }
        if (ctx->pc != 0x412AC4u) { return; }
    }
    ctx->pc = 0x412AC4u;
label_412ac4:
    // 0x412ac4: 0xc104c9c  jal         func_413270
label_412ac8:
    if (ctx->pc == 0x412AC8u) {
        ctx->pc = 0x412AC8u;
            // 0x412ac8: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x412ACCu;
        goto label_412acc;
    }
    ctx->pc = 0x412AC4u;
    SET_GPR_U32(ctx, 31, 0x412ACCu);
    ctx->pc = 0x412AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412AC4u;
            // 0x412ac8: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x413270u;
    if (runtime->hasFunction(0x413270u)) {
        auto targetFn = runtime->lookupFunction(0x413270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412ACCu; }
        if (ctx->pc != 0x412ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413270_0x413270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412ACCu; }
        if (ctx->pc != 0x412ACCu) { return; }
    }
    ctx->pc = 0x412ACCu;
label_412acc:
    // 0x412acc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x412accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_412ad0:
    // 0x412ad0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x412ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_412ad4:
    // 0x412ad4: 0x2463af60  addiu       $v1, $v1, -0x50A0
    ctx->pc = 0x412ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946656));
label_412ad8:
    // 0x412ad8: 0x2442af98  addiu       $v0, $v0, -0x5068
    ctx->pc = 0x412ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946712));
label_412adc:
    // 0x412adc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x412adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_412ae0:
    // 0x412ae0: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x412ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_412ae4:
    // 0x412ae4: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x412ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_412ae8:
    // 0x412ae8: 0xc104c94  jal         func_413250
label_412aec:
    if (ctx->pc == 0x412AECu) {
        ctx->pc = 0x412AECu;
            // 0x412aec: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x412AF0u;
        goto label_412af0;
    }
    ctx->pc = 0x412AE8u;
    SET_GPR_U32(ctx, 31, 0x412AF0u);
    ctx->pc = 0x412AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412AE8u;
            // 0x412aec: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x413250u;
    if (runtime->hasFunction(0x413250u)) {
        auto targetFn = runtime->lookupFunction(0x413250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412AF0u; }
        if (ctx->pc != 0x412AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413250_0x413250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412AF0u; }
        if (ctx->pc != 0x412AF0u) { return; }
    }
    ctx->pc = 0x412AF0u;
label_412af0:
    // 0x412af0: 0xc104c94  jal         func_413250
label_412af4:
    if (ctx->pc == 0x412AF4u) {
        ctx->pc = 0x412AF4u;
            // 0x412af4: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x412AF8u;
        goto label_412af8;
    }
    ctx->pc = 0x412AF0u;
    SET_GPR_U32(ctx, 31, 0x412AF8u);
    ctx->pc = 0x412AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412AF0u;
            // 0x412af4: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x413250u;
    if (runtime->hasFunction(0x413250u)) {
        auto targetFn = runtime->lookupFunction(0x413250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412AF8u; }
        if (ctx->pc != 0x412AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413250_0x413250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412AF8u; }
        if (ctx->pc != 0x412AF8u) { return; }
    }
    ctx->pc = 0x412AF8u;
label_412af8:
    // 0x412af8: 0xc104c84  jal         func_413210
label_412afc:
    if (ctx->pc == 0x412AFCu) {
        ctx->pc = 0x412AFCu;
            // 0x412afc: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x412B00u;
        goto label_412b00;
    }
    ctx->pc = 0x412AF8u;
    SET_GPR_U32(ctx, 31, 0x412B00u);
    ctx->pc = 0x412AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412AF8u;
            // 0x412afc: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x413210u;
    if (runtime->hasFunction(0x413210u)) {
        auto targetFn = runtime->lookupFunction(0x413210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B00u; }
        if (ctx->pc != 0x412B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413210_0x413210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B00u; }
        if (ctx->pc != 0x412B00u) { return; }
    }
    ctx->pc = 0x412B00u;
label_412b00:
    // 0x412b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x412b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412b04:
    // 0x412b04: 0xc0aeac0  jal         func_2BAB00
label_412b08:
    if (ctx->pc == 0x412B08u) {
        ctx->pc = 0x412B08u;
            // 0x412b08: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
        ctx->pc = 0x412B0Cu;
        goto label_412b0c;
    }
    ctx->pc = 0x412B04u;
    SET_GPR_U32(ctx, 31, 0x412B0Cu);
    ctx->pc = 0x412B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412B04u;
            // 0x412b08: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B0Cu; }
        if (ctx->pc != 0x412B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B0Cu; }
        if (ctx->pc != 0x412B0Cu) { return; }
    }
    ctx->pc = 0x412B0Cu;
label_412b0c:
    // 0x412b0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x412b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412b10:
    // 0x412b10: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_412b14:
    if (ctx->pc == 0x412B14u) {
        ctx->pc = 0x412B18u;
        goto label_412b18;
    }
    ctx->pc = 0x412B10u;
    {
        const bool branch_taken_0x412b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x412b10) {
            ctx->pc = 0x412B88u;
            goto label_412b88;
        }
    }
    ctx->pc = 0x412B18u;
label_412b18:
    // 0x412b18: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x412b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_412b1c:
    // 0x412b1c: 0xc040138  jal         func_1004E0
label_412b20:
    if (ctx->pc == 0x412B20u) {
        ctx->pc = 0x412B20u;
            // 0x412b20: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x412B24u;
        goto label_412b24;
    }
    ctx->pc = 0x412B1Cu;
    SET_GPR_U32(ctx, 31, 0x412B24u);
    ctx->pc = 0x412B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412B1Cu;
            // 0x412b20: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B24u; }
        if (ctx->pc != 0x412B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B24u; }
        if (ctx->pc != 0x412B24u) { return; }
    }
    ctx->pc = 0x412B24u;
label_412b24:
    // 0x412b24: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x412b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_412b28:
    // 0x412b28: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x412b28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_412b2c:
    // 0x412b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x412b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412b30:
    // 0x412b30: 0x24a53120  addiu       $a1, $a1, 0x3120
    ctx->pc = 0x412b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12576));
label_412b34:
    // 0x412b34: 0x24c61a80  addiu       $a2, $a2, 0x1A80
    ctx->pc = 0x412b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6784));
label_412b38:
    // 0x412b38: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x412b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_412b3c:
    // 0x412b3c: 0xc040840  jal         func_102100
label_412b40:
    if (ctx->pc == 0x412B40u) {
        ctx->pc = 0x412B40u;
            // 0x412b40: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412B44u;
        goto label_412b44;
    }
    ctx->pc = 0x412B3Cu;
    SET_GPR_U32(ctx, 31, 0x412B44u);
    ctx->pc = 0x412B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412B3Cu;
            // 0x412b40: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B44u; }
        if (ctx->pc != 0x412B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B44u; }
        if (ctx->pc != 0x412B44u) { return; }
    }
    ctx->pc = 0x412B44u;
label_412b44:
    // 0x412b44: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x412b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_412b48:
    // 0x412b48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x412b48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412b4c:
    // 0x412b4c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x412b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_412b50:
    // 0x412b50: 0xc104c44  jal         func_413110
label_412b54:
    if (ctx->pc == 0x412B54u) {
        ctx->pc = 0x412B54u;
            // 0x412b54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412B58u;
        goto label_412b58;
    }
    ctx->pc = 0x412B50u;
    SET_GPR_U32(ctx, 31, 0x412B58u);
    ctx->pc = 0x412B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412B50u;
            // 0x412b54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x413110u;
    if (runtime->hasFunction(0x413110u)) {
        auto targetFn = runtime->lookupFunction(0x413110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B58u; }
        if (ctx->pc != 0x412B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413110_0x413110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B58u; }
        if (ctx->pc != 0x412B58u) { return; }
    }
    ctx->pc = 0x412B58u;
label_412b58:
    // 0x412b58: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x412b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_412b5c:
    // 0x412b5c: 0xc104c44  jal         func_413110
label_412b60:
    if (ctx->pc == 0x412B60u) {
        ctx->pc = 0x412B60u;
            // 0x412b60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412B64u;
        goto label_412b64;
    }
    ctx->pc = 0x412B5Cu;
    SET_GPR_U32(ctx, 31, 0x412B64u);
    ctx->pc = 0x412B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412B5Cu;
            // 0x412b60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x413110u;
    if (runtime->hasFunction(0x413110u)) {
        auto targetFn = runtime->lookupFunction(0x413110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B64u; }
        if (ctx->pc != 0x412B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00413110_0x413110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B64u; }
        if (ctx->pc != 0x412B64u) { return; }
    }
    ctx->pc = 0x412B64u;
label_412b64:
    // 0x412b64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x412b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412b68:
    // 0x412b68: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x412b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_412b6c:
    // 0x412b6c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x412b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_412b70:
    // 0x412b70: 0xc104c3c  jal         func_4130F0
label_412b74:
    if (ctx->pc == 0x412B74u) {
        ctx->pc = 0x412B74u;
            // 0x412b74: 0xafb4007c  sw          $s4, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 20));
        ctx->pc = 0x412B78u;
        goto label_412b78;
    }
    ctx->pc = 0x412B70u;
    SET_GPR_U32(ctx, 31, 0x412B78u);
    ctx->pc = 0x412B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412B70u;
            // 0x412b74: 0xafb4007c  sw          $s4, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4130F0u;
    if (runtime->hasFunction(0x4130F0u)) {
        auto targetFn = runtime->lookupFunction(0x4130F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B78u; }
        if (ctx->pc != 0x412B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004130F0_0x4130f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412B78u; }
        if (ctx->pc != 0x412B78u) { return; }
    }
    ctx->pc = 0x412B78u;
label_412b78:
    // 0x412b78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x412b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_412b7c:
    // 0x412b7c: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x412b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_412b80:
    // 0x412b80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_412b84:
    if (ctx->pc == 0x412B84u) {
        ctx->pc = 0x412B84u;
            // 0x412b84: 0x26940100  addiu       $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->pc = 0x412B88u;
        goto label_412b88;
    }
    ctx->pc = 0x412B80u;
    {
        const bool branch_taken_0x412b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412B80u;
            // 0x412b84: 0x26940100  addiu       $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412b80) {
            ctx->pc = 0x412B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_412b68;
        }
    }
    ctx->pc = 0x412B88u;
label_412b88:
    // 0x412b88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x412b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_412b8c:
    // 0x412b8c: 0x2442af00  addiu       $v0, $v0, -0x5100
    ctx->pc = 0x412b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946560));
label_412b90:
    // 0x412b90: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x412b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_412b94:
    // 0x412b94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x412b94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_412b98:
    // 0x412b98: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x412b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_412b9c:
    // 0x412b9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x412b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_412ba0:
    // 0x412ba0: 0x264400c8  addiu       $a0, $s2, 0xC8
    ctx->pc = 0x412ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
label_412ba4:
    // 0x412ba4: 0x2442af38  addiu       $v0, $v0, -0x50C8
    ctx->pc = 0x412ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946616));
label_412ba8:
    // 0x412ba8: 0x24a53060  addiu       $a1, $a1, 0x3060
    ctx->pc = 0x412ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12384));
label_412bac:
    // 0x412bac: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x412bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_412bb0:
    // 0x412bb0: 0x24c61b80  addiu       $a2, $a2, 0x1B80
    ctx->pc = 0x412bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7040));
label_412bb4:
    // 0x412bb4: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x412bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_412bb8:
    // 0x412bb8: 0xc040804  jal         func_102010
label_412bbc:
    if (ctx->pc == 0x412BBCu) {
        ctx->pc = 0x412BBCu;
            // 0x412bbc: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x412BC0u;
        goto label_412bc0;
    }
    ctx->pc = 0x412BB8u;
    SET_GPR_U32(ctx, 31, 0x412BC0u);
    ctx->pc = 0x412BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412BB8u;
            // 0x412bbc: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412BC0u; }
        if (ctx->pc != 0x412BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412BC0u; }
        if (ctx->pc != 0x412BC0u) { return; }
    }
    ctx->pc = 0x412BC0u;
label_412bc0:
    // 0x412bc0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x412bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_412bc4:
    // 0x412bc4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x412bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_412bc8:
    // 0x412bc8: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x412bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
label_412bcc:
    // 0x412bcc: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x412bccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
label_412bd0:
    // 0x412bd0: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x412bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
label_412bd4:
    // 0x412bd4: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x412bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
label_412bd8:
    // 0x412bd8: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x412bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
label_412bdc:
    // 0x412bdc: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x412bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_412be0:
    // 0x412be0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x412be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_412be4:
    // 0x412be4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x412be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_412be8:
    // 0x412be8: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x412be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
label_412bec:
    // 0x412bec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x412becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_412bf0:
    // 0x412bf0: 0xae400174  sw          $zero, 0x174($s2)
    ctx->pc = 0x412bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 0));
label_412bf4:
    // 0x412bf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x412bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_412bf8:
    // 0x412bf8: 0xae400178  sw          $zero, 0x178($s2)
    ctx->pc = 0x412bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 0));
label_412bfc:
    // 0x412bfc: 0x3c0d3fc0  lui         $t5, 0x3FC0
    ctx->pc = 0x412bfcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16320 << 16));
label_412c00:
    // 0x412c00: 0xae40017c  sw          $zero, 0x17C($s2)
    ctx->pc = 0x412c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 0));
label_412c04:
    // 0x412c04: 0x3c0c4080  lui         $t4, 0x4080
    ctx->pc = 0x412c04u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16512 << 16));
label_412c08:
    // 0x412c08: 0x8cae89c8  lw          $t6, -0x7638($a1)
    ctx->pc = 0x412c08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937032)));
label_412c0c:
    // 0x412c0c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x412c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_412c10:
    // 0x412c10: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x412c10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_412c14:
    // 0x412c14: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x412c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_412c18:
    // 0x412c18: 0xae4e0180  sw          $t6, 0x180($s2)
    ctx->pc = 0x412c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 14));
label_412c1c:
    // 0x412c1c: 0xae400184  sw          $zero, 0x184($s2)
    ctx->pc = 0x412c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 0));
label_412c20:
    // 0x412c20: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x412c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_412c24:
    // 0x412c24: 0xae40018c  sw          $zero, 0x18C($s2)
    ctx->pc = 0x412c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
label_412c28:
    // 0x412c28: 0x8d6b89c8  lw          $t3, -0x7638($t3)
    ctx->pc = 0x412c28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294937032)));
label_412c2c:
    // 0x412c2c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x412c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_412c30:
    // 0x412c30: 0xae4b0190  sw          $t3, 0x190($s2)
    ctx->pc = 0x412c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 11));
label_412c34:
    // 0x412c34: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x412c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_412c38:
    // 0x412c38: 0xae400198  sw          $zero, 0x198($s2)
    ctx->pc = 0x412c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
label_412c3c:
    // 0x412c3c: 0xae40019c  sw          $zero, 0x19C($s2)
    ctx->pc = 0x412c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
label_412c40:
    // 0x412c40: 0x8d4a89c8  lw          $t2, -0x7638($t2)
    ctx->pc = 0x412c40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294937032)));
label_412c44:
    // 0x412c44: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x412c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_412c48:
    // 0x412c48: 0xae4a01a0  sw          $t2, 0x1A0($s2)
    ctx->pc = 0x412c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 10));
label_412c4c:
    // 0x412c4c: 0xae4001a4  sw          $zero, 0x1A4($s2)
    ctx->pc = 0x412c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 0));
label_412c50:
    // 0x412c50: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x412c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
label_412c54:
    // 0x412c54: 0xae4001ac  sw          $zero, 0x1AC($s2)
    ctx->pc = 0x412c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 0));
label_412c58:
    // 0x412c58: 0x8d2989c8  lw          $t1, -0x7638($t1)
    ctx->pc = 0x412c58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294937032)));
label_412c5c:
    // 0x412c5c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x412c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_412c60:
    // 0x412c60: 0xae4901b0  sw          $t1, 0x1B0($s2)
    ctx->pc = 0x412c60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 9));
label_412c64:
    // 0x412c64: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x412c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
label_412c68:
    // 0x412c68: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x412c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
label_412c6c:
    // 0x412c6c: 0xae4001bc  sw          $zero, 0x1BC($s2)
    ctx->pc = 0x412c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 0));
label_412c70:
    // 0x412c70: 0x8d0889c8  lw          $t0, -0x7638($t0)
    ctx->pc = 0x412c70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294937032)));
label_412c74:
    // 0x412c74: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x412c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_412c78:
    // 0x412c78: 0xae4801c0  sw          $t0, 0x1C0($s2)
    ctx->pc = 0x412c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 8));
label_412c7c:
    // 0x412c7c: 0xae4001c4  sw          $zero, 0x1C4($s2)
    ctx->pc = 0x412c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
label_412c80:
    // 0x412c80: 0xae4001c8  sw          $zero, 0x1C8($s2)
    ctx->pc = 0x412c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 0));
label_412c84:
    // 0x412c84: 0xae4001cc  sw          $zero, 0x1CC($s2)
    ctx->pc = 0x412c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 0));
label_412c88:
    // 0x412c88: 0x8ce789c8  lw          $a3, -0x7638($a3)
    ctx->pc = 0x412c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294937032)));
label_412c8c:
    // 0x412c8c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x412c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_412c90:
    // 0x412c90: 0xae4701d0  sw          $a3, 0x1D0($s2)
    ctx->pc = 0x412c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 7));
label_412c94:
    // 0x412c94: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x412c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
label_412c98:
    // 0x412c98: 0xae4001d8  sw          $zero, 0x1D8($s2)
    ctx->pc = 0x412c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 0));
label_412c9c:
    // 0x412c9c: 0xae4001dc  sw          $zero, 0x1DC($s2)
    ctx->pc = 0x412c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 0));
label_412ca0:
    // 0x412ca0: 0x8c8489c8  lw          $a0, -0x7638($a0)
    ctx->pc = 0x412ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937032)));
label_412ca4:
    // 0x412ca4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x412ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_412ca8:
    // 0x412ca8: 0xae4401e0  sw          $a0, 0x1E0($s2)
    ctx->pc = 0x412ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 4));
label_412cac:
    // 0x412cac: 0xae4001e4  sw          $zero, 0x1E4($s2)
    ctx->pc = 0x412cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 0));
label_412cb0:
    // 0x412cb0: 0xae4001e8  sw          $zero, 0x1E8($s2)
    ctx->pc = 0x412cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 0));
label_412cb4:
    // 0x412cb4: 0xae4001ec  sw          $zero, 0x1EC($s2)
    ctx->pc = 0x412cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 0));
label_412cb8:
    // 0x412cb8: 0x8c6389c8  lw          $v1, -0x7638($v1)
    ctx->pc = 0x412cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937032)));
label_412cbc:
    // 0x412cbc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x412cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_412cc0:
    // 0x412cc0: 0xae4301f0  sw          $v1, 0x1F0($s2)
    ctx->pc = 0x412cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 3));
label_412cc4:
    // 0x412cc4: 0xae4001f4  sw          $zero, 0x1F4($s2)
    ctx->pc = 0x412cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 0));
label_412cc8:
    // 0x412cc8: 0xae4001f8  sw          $zero, 0x1F8($s2)
    ctx->pc = 0x412cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 0));
label_412ccc:
    // 0x412ccc: 0xae4001fc  sw          $zero, 0x1FC($s2)
    ctx->pc = 0x412cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 0));
label_412cd0:
    // 0x412cd0: 0xae400200  sw          $zero, 0x200($s2)
    ctx->pc = 0x412cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
label_412cd4:
    // 0x412cd4: 0xae400204  sw          $zero, 0x204($s2)
    ctx->pc = 0x412cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 0));
label_412cd8:
    // 0x412cd8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x412cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_412cdc:
    // 0x412cdc: 0xafac0064  sw          $t4, 0x64($sp)
    ctx->pc = 0x412cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 12));
label_412ce0:
    // 0x412ce0: 0xafad0060  sw          $t5, 0x60($sp)
    ctx->pc = 0x412ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 13));
label_412ce4:
    // 0x412ce4: 0xafad0068  sw          $t5, 0x68($sp)
    ctx->pc = 0x412ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 13));
label_412ce8:
    // 0x412ce8: 0xc0a7a88  jal         func_29EA20
label_412cec:
    if (ctx->pc == 0x412CECu) {
        ctx->pc = 0x412CECu;
            // 0x412cec: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x412CF0u;
        goto label_412cf0;
    }
    ctx->pc = 0x412CE8u;
    SET_GPR_U32(ctx, 31, 0x412CF0u);
    ctx->pc = 0x412CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412CE8u;
            // 0x412cec: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412CF0u; }
        if (ctx->pc != 0x412CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412CF0u; }
        if (ctx->pc != 0x412CF0u) { return; }
    }
    ctx->pc = 0x412CF0u;
label_412cf0:
    // 0x412cf0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x412cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_412cf4:
    // 0x412cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x412cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412cf8:
    // 0x412cf8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_412cfc:
    if (ctx->pc == 0x412CFCu) {
        ctx->pc = 0x412CFCu;
            // 0x412cfc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x412D00u;
        goto label_412d00;
    }
    ctx->pc = 0x412CF8u;
    {
        const bool branch_taken_0x412cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x412CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412CF8u;
            // 0x412cfc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412cf8) {
            ctx->pc = 0x412D14u;
            goto label_412d14;
        }
    }
    ctx->pc = 0x412D00u;
label_412d00:
    // 0x412d00: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x412d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_412d04:
    // 0x412d04: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x412d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_412d08:
    // 0x412d08: 0xc0804bc  jal         func_2012F0
label_412d0c:
    if (ctx->pc == 0x412D0Cu) {
        ctx->pc = 0x412D0Cu;
            // 0x412d0c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x412D10u;
        goto label_412d10;
    }
    ctx->pc = 0x412D08u;
    SET_GPR_U32(ctx, 31, 0x412D10u);
    ctx->pc = 0x412D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412D08u;
            // 0x412d0c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D10u; }
        if (ctx->pc != 0x412D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D10u; }
        if (ctx->pc != 0x412D10u) { return; }
    }
    ctx->pc = 0x412D10u;
label_412d10:
    // 0x412d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x412d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412d14:
    // 0x412d14: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x412d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_412d18:
    // 0x412d18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x412d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_412d1c:
    // 0x412d1c: 0xc0b4a18  jal         func_2D2860
label_412d20:
    if (ctx->pc == 0x412D20u) {
        ctx->pc = 0x412D20u;
            // 0x412d20: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->pc = 0x412D24u;
        goto label_412d24;
    }
    ctx->pc = 0x412D1Cu;
    SET_GPR_U32(ctx, 31, 0x412D24u);
    ctx->pc = 0x412D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412D1Cu;
            // 0x412d20: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D24u; }
        if (ctx->pc != 0x412D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D24u; }
        if (ctx->pc != 0x412D24u) { return; }
    }
    ctx->pc = 0x412D24u;
label_412d24:
    // 0x412d24: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x412d24u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_412d28:
    // 0x412d28: 0x26440170  addiu       $a0, $s2, 0x170
    ctx->pc = 0x412d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_412d2c:
    // 0x412d2c: 0xc0b4a18  jal         func_2D2860
label_412d30:
    if (ctx->pc == 0x412D30u) {
        ctx->pc = 0x412D30u;
            // 0x412d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412D34u;
        goto label_412d34;
    }
    ctx->pc = 0x412D2Cu;
    SET_GPR_U32(ctx, 31, 0x412D34u);
    ctx->pc = 0x412D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412D2Cu;
            // 0x412d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D34u; }
        if (ctx->pc != 0x412D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D34u; }
        if (ctx->pc != 0x412D34u) { return; }
    }
    ctx->pc = 0x412D34u;
label_412d34:
    // 0x412d34: 0x26420170  addiu       $v0, $s2, 0x170
    ctx->pc = 0x412d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_412d38:
    // 0x412d38: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x412d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_412d3c:
    // 0x412d3c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x412d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_412d40:
    // 0x412d40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412d44:
    // 0x412d44: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x412d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_412d48:
    // 0x412d48: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x412d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_412d4c:
    // 0x412d4c: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x412d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_412d50:
    // 0x412d50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412d54:
    // 0x412d54: 0xc0b4904  jal         func_2D2410
label_412d58:
    if (ctx->pc == 0x412D58u) {
        ctx->pc = 0x412D58u;
            // 0x412d58: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x412D5Cu;
        goto label_412d5c;
    }
    ctx->pc = 0x412D54u;
    SET_GPR_U32(ctx, 31, 0x412D5Cu);
    ctx->pc = 0x412D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412D54u;
            // 0x412d58: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D5Cu; }
        if (ctx->pc != 0x412D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D5Cu; }
        if (ctx->pc != 0x412D5Cu) { return; }
    }
    ctx->pc = 0x412D5Cu;
label_412d5c:
    // 0x412d5c: 0x264401b0  addiu       $a0, $s2, 0x1B0
    ctx->pc = 0x412d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_412d60:
    // 0x412d60: 0xc0b4a18  jal         func_2D2860
label_412d64:
    if (ctx->pc == 0x412D64u) {
        ctx->pc = 0x412D64u;
            // 0x412d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412D68u;
        goto label_412d68;
    }
    ctx->pc = 0x412D60u;
    SET_GPR_U32(ctx, 31, 0x412D68u);
    ctx->pc = 0x412D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412D60u;
            // 0x412d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D68u; }
        if (ctx->pc != 0x412D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D68u; }
        if (ctx->pc != 0x412D68u) { return; }
    }
    ctx->pc = 0x412D68u;
label_412d68:
    // 0x412d68: 0x264201b0  addiu       $v0, $s2, 0x1B0
    ctx->pc = 0x412d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_412d6c:
    // 0x412d6c: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x412d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_412d70:
    // 0x412d70: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x412d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_412d74:
    // 0x412d74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412d78:
    // 0x412d78: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x412d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_412d7c:
    // 0x412d7c: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x412d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_412d80:
    // 0x412d80: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x412d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_412d84:
    // 0x412d84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412d88:
    // 0x412d88: 0xc0b4904  jal         func_2D2410
label_412d8c:
    if (ctx->pc == 0x412D8Cu) {
        ctx->pc = 0x412D8Cu;
            // 0x412d8c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x412D90u;
        goto label_412d90;
    }
    ctx->pc = 0x412D88u;
    SET_GPR_U32(ctx, 31, 0x412D90u);
    ctx->pc = 0x412D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412D88u;
            // 0x412d8c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D90u; }
        if (ctx->pc != 0x412D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D90u; }
        if (ctx->pc != 0x412D90u) { return; }
    }
    ctx->pc = 0x412D90u;
label_412d90:
    // 0x412d90: 0x26440190  addiu       $a0, $s2, 0x190
    ctx->pc = 0x412d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
label_412d94:
    // 0x412d94: 0xc0b4a18  jal         func_2D2860
label_412d98:
    if (ctx->pc == 0x412D98u) {
        ctx->pc = 0x412D98u;
            // 0x412d98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412D9Cu;
        goto label_412d9c;
    }
    ctx->pc = 0x412D94u;
    SET_GPR_U32(ctx, 31, 0x412D9Cu);
    ctx->pc = 0x412D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412D94u;
            // 0x412d98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D9Cu; }
        if (ctx->pc != 0x412D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412D9Cu; }
        if (ctx->pc != 0x412D9Cu) { return; }
    }
    ctx->pc = 0x412D9Cu;
label_412d9c:
    // 0x412d9c: 0x26420190  addiu       $v0, $s2, 0x190
    ctx->pc = 0x412d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
label_412da0:
    // 0x412da0: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x412da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_412da4:
    // 0x412da4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x412da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_412da8:
    // 0x412da8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412dac:
    // 0x412dac: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x412dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_412db0:
    // 0x412db0: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x412db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_412db4:
    // 0x412db4: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x412db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_412db8:
    // 0x412db8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412dbc:
    // 0x412dbc: 0xc0b4904  jal         func_2D2410
label_412dc0:
    if (ctx->pc == 0x412DC0u) {
        ctx->pc = 0x412DC0u;
            // 0x412dc0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x412DC4u;
        goto label_412dc4;
    }
    ctx->pc = 0x412DBCu;
    SET_GPR_U32(ctx, 31, 0x412DC4u);
    ctx->pc = 0x412DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412DBCu;
            // 0x412dc0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412DC4u; }
        if (ctx->pc != 0x412DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412DC4u; }
        if (ctx->pc != 0x412DC4u) { return; }
    }
    ctx->pc = 0x412DC4u;
label_412dc4:
    // 0x412dc4: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x412dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_412dc8:
    // 0x412dc8: 0xc0b4a18  jal         func_2D2860
label_412dcc:
    if (ctx->pc == 0x412DCCu) {
        ctx->pc = 0x412DCCu;
            // 0x412dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412DD0u;
        goto label_412dd0;
    }
    ctx->pc = 0x412DC8u;
    SET_GPR_U32(ctx, 31, 0x412DD0u);
    ctx->pc = 0x412DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412DC8u;
            // 0x412dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412DD0u; }
        if (ctx->pc != 0x412DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412DD0u; }
        if (ctx->pc != 0x412DD0u) { return; }
    }
    ctx->pc = 0x412DD0u;
label_412dd0:
    // 0x412dd0: 0x264201d0  addiu       $v0, $s2, 0x1D0
    ctx->pc = 0x412dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_412dd4:
    // 0x412dd4: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x412dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_412dd8:
    // 0x412dd8: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x412dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_412ddc:
    // 0x412ddc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412de0:
    // 0x412de0: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x412de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_412de4:
    // 0x412de4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x412de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_412de8:
    // 0x412de8: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x412de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_412dec:
    // 0x412dec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412df0:
    // 0x412df0: 0xc0b4904  jal         func_2D2410
label_412df4:
    if (ctx->pc == 0x412DF4u) {
        ctx->pc = 0x412DF4u;
            // 0x412df4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x412DF8u;
        goto label_412df8;
    }
    ctx->pc = 0x412DF0u;
    SET_GPR_U32(ctx, 31, 0x412DF8u);
    ctx->pc = 0x412DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412DF0u;
            // 0x412df4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412DF8u; }
        if (ctx->pc != 0x412DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412DF8u; }
        if (ctx->pc != 0x412DF8u) { return; }
    }
    ctx->pc = 0x412DF8u;
label_412df8:
    // 0x412df8: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x412df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_412dfc:
    // 0x412dfc: 0xc0b4a18  jal         func_2D2860
label_412e00:
    if (ctx->pc == 0x412E00u) {
        ctx->pc = 0x412E00u;
            // 0x412e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412E04u;
        goto label_412e04;
    }
    ctx->pc = 0x412DFCu;
    SET_GPR_U32(ctx, 31, 0x412E04u);
    ctx->pc = 0x412E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412DFCu;
            // 0x412e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E04u; }
        if (ctx->pc != 0x412E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E04u; }
        if (ctx->pc != 0x412E04u) { return; }
    }
    ctx->pc = 0x412E04u;
label_412e04:
    // 0x412e04: 0x26420180  addiu       $v0, $s2, 0x180
    ctx->pc = 0x412e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_412e08:
    // 0x412e08: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x412e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_412e0c:
    // 0x412e0c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x412e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_412e10:
    // 0x412e10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412e14:
    // 0x412e14: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x412e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_412e18:
    // 0x412e18: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x412e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_412e1c:
    // 0x412e1c: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x412e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_412e20:
    // 0x412e20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412e24:
    // 0x412e24: 0xc0b4904  jal         func_2D2410
label_412e28:
    if (ctx->pc == 0x412E28u) {
        ctx->pc = 0x412E28u;
            // 0x412e28: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x412E2Cu;
        goto label_412e2c;
    }
    ctx->pc = 0x412E24u;
    SET_GPR_U32(ctx, 31, 0x412E2Cu);
    ctx->pc = 0x412E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412E24u;
            // 0x412e28: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E2Cu; }
        if (ctx->pc != 0x412E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E2Cu; }
        if (ctx->pc != 0x412E2Cu) { return; }
    }
    ctx->pc = 0x412E2Cu;
label_412e2c:
    // 0x412e2c: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x412e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_412e30:
    // 0x412e30: 0xc0b4a18  jal         func_2D2860
label_412e34:
    if (ctx->pc == 0x412E34u) {
        ctx->pc = 0x412E34u;
            // 0x412e34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412E38u;
        goto label_412e38;
    }
    ctx->pc = 0x412E30u;
    SET_GPR_U32(ctx, 31, 0x412E38u);
    ctx->pc = 0x412E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412E30u;
            // 0x412e34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E38u; }
        if (ctx->pc != 0x412E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E38u; }
        if (ctx->pc != 0x412E38u) { return; }
    }
    ctx->pc = 0x412E38u;
label_412e38:
    // 0x412e38: 0x264201c0  addiu       $v0, $s2, 0x1C0
    ctx->pc = 0x412e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_412e3c:
    // 0x412e3c: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x412e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_412e40:
    // 0x412e40: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x412e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_412e44:
    // 0x412e44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412e48:
    // 0x412e48: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x412e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_412e4c:
    // 0x412e4c: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x412e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_412e50:
    // 0x412e50: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x412e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_412e54:
    // 0x412e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412e58:
    // 0x412e58: 0xc0b4904  jal         func_2D2410
label_412e5c:
    if (ctx->pc == 0x412E5Cu) {
        ctx->pc = 0x412E5Cu;
            // 0x412e5c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x412E60u;
        goto label_412e60;
    }
    ctx->pc = 0x412E58u;
    SET_GPR_U32(ctx, 31, 0x412E60u);
    ctx->pc = 0x412E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412E58u;
            // 0x412e5c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E60u; }
        if (ctx->pc != 0x412E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E60u; }
        if (ctx->pc != 0x412E60u) { return; }
    }
    ctx->pc = 0x412E60u;
label_412e60:
    // 0x412e60: 0x264401a0  addiu       $a0, $s2, 0x1A0
    ctx->pc = 0x412e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_412e64:
    // 0x412e64: 0xc0b4a18  jal         func_2D2860
label_412e68:
    if (ctx->pc == 0x412E68u) {
        ctx->pc = 0x412E68u;
            // 0x412e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412E6Cu;
        goto label_412e6c;
    }
    ctx->pc = 0x412E64u;
    SET_GPR_U32(ctx, 31, 0x412E6Cu);
    ctx->pc = 0x412E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412E64u;
            // 0x412e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E6Cu; }
        if (ctx->pc != 0x412E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E6Cu; }
        if (ctx->pc != 0x412E6Cu) { return; }
    }
    ctx->pc = 0x412E6Cu;
label_412e6c:
    // 0x412e6c: 0x264201a0  addiu       $v0, $s2, 0x1A0
    ctx->pc = 0x412e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_412e70:
    // 0x412e70: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x412e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_412e74:
    // 0x412e74: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x412e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_412e78:
    // 0x412e78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412e7c:
    // 0x412e7c: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x412e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_412e80:
    // 0x412e80: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x412e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_412e84:
    // 0x412e84: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x412e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_412e88:
    // 0x412e88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412e8c:
    // 0x412e8c: 0xc0b4904  jal         func_2D2410
label_412e90:
    if (ctx->pc == 0x412E90u) {
        ctx->pc = 0x412E90u;
            // 0x412e90: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x412E94u;
        goto label_412e94;
    }
    ctx->pc = 0x412E8Cu;
    SET_GPR_U32(ctx, 31, 0x412E94u);
    ctx->pc = 0x412E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412E8Cu;
            // 0x412e90: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E94u; }
        if (ctx->pc != 0x412E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412E94u; }
        if (ctx->pc != 0x412E94u) { return; }
    }
    ctx->pc = 0x412E94u;
label_412e94:
    // 0x412e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x412e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412e98:
    // 0x412e98: 0xc0b4a18  jal         func_2D2860
label_412e9c:
    if (ctx->pc == 0x412E9Cu) {
        ctx->pc = 0x412E9Cu;
            // 0x412e9c: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x412EA0u;
        goto label_412ea0;
    }
    ctx->pc = 0x412E98u;
    SET_GPR_U32(ctx, 31, 0x412EA0u);
    ctx->pc = 0x412E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412E98u;
            // 0x412e9c: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412EA0u; }
        if (ctx->pc != 0x412EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412EA0u; }
        if (ctx->pc != 0x412EA0u) { return; }
    }
    ctx->pc = 0x412EA0u;
label_412ea0:
    // 0x412ea0: 0x264201e0  addiu       $v0, $s2, 0x1E0
    ctx->pc = 0x412ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_412ea4:
    // 0x412ea4: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x412ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_412ea8:
    // 0x412ea8: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x412ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_412eac:
    // 0x412eac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412eb0:
    // 0x412eb0: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x412eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_412eb4:
    // 0x412eb4: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x412eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_412eb8:
    // 0x412eb8: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x412eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_412ebc:
    // 0x412ebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412ec0:
    // 0x412ec0: 0xc0b4904  jal         func_2D2410
label_412ec4:
    if (ctx->pc == 0x412EC4u) {
        ctx->pc = 0x412EC4u;
            // 0x412ec4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x412EC8u;
        goto label_412ec8;
    }
    ctx->pc = 0x412EC0u;
    SET_GPR_U32(ctx, 31, 0x412EC8u);
    ctx->pc = 0x412EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412EC0u;
            // 0x412ec4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412EC8u; }
        if (ctx->pc != 0x412EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412EC8u; }
        if (ctx->pc != 0x412EC8u) { return; }
    }
    ctx->pc = 0x412EC8u;
label_412ec8:
    // 0x412ec8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x412ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412ecc:
    // 0x412ecc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x412eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_412ed0:
    // 0x412ed0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x412ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412ed4:
    // 0x412ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x412ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412ed8:
    // 0x412ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x412ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412edc:
    // 0x412edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x412edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_412ee0:
    // 0x412ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x412ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_412ee4:
    // 0x412ee4: 0x3e00008  jr          $ra
label_412ee8:
    if (ctx->pc == 0x412EE8u) {
        ctx->pc = 0x412EE8u;
            // 0x412ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x412EECu;
        goto label_412eec;
    }
    ctx->pc = 0x412EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412EE4u;
            // 0x412ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412EECu;
label_412eec:
    // 0x412eec: 0x0  nop
    ctx->pc = 0x412eecu;
    // NOP
label_412ef0:
    // 0x412ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x412ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_412ef4:
    // 0x412ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x412ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_412ef8:
    // 0x412ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x412ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_412efc:
    // 0x412efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x412efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_412f00:
    // 0x412f00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x412f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412f04:
    // 0x412f04: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_412f08:
    if (ctx->pc == 0x412F08u) {
        ctx->pc = 0x412F08u;
            // 0x412f08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412F0Cu;
        goto label_412f0c;
    }
    ctx->pc = 0x412F04u;
    {
        const bool branch_taken_0x412f04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x412F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412F04u;
            // 0x412f08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412f04) {
            ctx->pc = 0x413044u;
            goto label_413044;
        }
    }
    ctx->pc = 0x412F0Cu;
label_412f0c:
    // 0x412f0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x412f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_412f10:
    // 0x412f10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x412f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_412f14:
    // 0x412f14: 0x2463af60  addiu       $v1, $v1, -0x50A0
    ctx->pc = 0x412f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946656));
label_412f18:
    // 0x412f18: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x412f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_412f1c:
    // 0x412f1c: 0x2442af98  addiu       $v0, $v0, -0x5068
    ctx->pc = 0x412f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946712));
label_412f20:
    // 0x412f20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x412f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_412f24:
    // 0x412f24: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x412f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_412f28:
    // 0x412f28: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x412f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_412f2c:
    // 0x412f2c: 0xc0407c0  jal         func_101F00
label_412f30:
    if (ctx->pc == 0x412F30u) {
        ctx->pc = 0x412F30u;
            // 0x412f30: 0x24a51a80  addiu       $a1, $a1, 0x1A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6784));
        ctx->pc = 0x412F34u;
        goto label_412f34;
    }
    ctx->pc = 0x412F2Cu;
    SET_GPR_U32(ctx, 31, 0x412F34u);
    ctx->pc = 0x412F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412F2Cu;
            // 0x412f30: 0x24a51a80  addiu       $a1, $a1, 0x1A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412F34u; }
        if (ctx->pc != 0x412F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412F34u; }
        if (ctx->pc != 0x412F34u) { return; }
    }
    ctx->pc = 0x412F34u;
label_412f34:
    // 0x412f34: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x412f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_412f38:
    // 0x412f38: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_412f3c:
    if (ctx->pc == 0x412F3Cu) {
        ctx->pc = 0x412F3Cu;
            // 0x412f3c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x412F40u;
        goto label_412f40;
    }
    ctx->pc = 0x412F38u;
    {
        const bool branch_taken_0x412f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f38) {
            ctx->pc = 0x412F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412F38u;
            // 0x412f3c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412F58u;
            goto label_412f58;
        }
    }
    ctx->pc = 0x412F40u;
label_412f40:
    // 0x412f40: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x412f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_412f44:
    // 0x412f44: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x412f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_412f48:
    // 0x412f48: 0x24a533e0  addiu       $a1, $a1, 0x33E0
    ctx->pc = 0x412f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
label_412f4c:
    // 0x412f4c: 0xc0407e8  jal         func_101FA0
label_412f50:
    if (ctx->pc == 0x412F50u) {
        ctx->pc = 0x412F50u;
            // 0x412f50: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412F54u;
        goto label_412f54;
    }
    ctx->pc = 0x412F4Cu;
    SET_GPR_U32(ctx, 31, 0x412F54u);
    ctx->pc = 0x412F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412F4Cu;
            // 0x412f50: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412F54u; }
        if (ctx->pc != 0x412F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412F54u; }
        if (ctx->pc != 0x412F54u) { return; }
    }
    ctx->pc = 0x412F54u;
label_412f54:
    // 0x412f54: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x412f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_412f58:
    // 0x412f58: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_412f5c:
    if (ctx->pc == 0x412F5Cu) {
        ctx->pc = 0x412F5Cu;
            // 0x412f5c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x412F60u;
        goto label_412f60;
    }
    ctx->pc = 0x412F58u;
    {
        const bool branch_taken_0x412f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f58) {
            ctx->pc = 0x412F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412F58u;
            // 0x412f5c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412F88u;
            goto label_412f88;
        }
    }
    ctx->pc = 0x412F60u;
label_412f60:
    // 0x412f60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_412f64:
    if (ctx->pc == 0x412F64u) {
        ctx->pc = 0x412F68u;
        goto label_412f68;
    }
    ctx->pc = 0x412F60u;
    {
        const bool branch_taken_0x412f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f60) {
            ctx->pc = 0x412F84u;
            goto label_412f84;
        }
    }
    ctx->pc = 0x412F68u;
label_412f68:
    // 0x412f68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_412f6c:
    if (ctx->pc == 0x412F6Cu) {
        ctx->pc = 0x412F70u;
        goto label_412f70;
    }
    ctx->pc = 0x412F68u;
    {
        const bool branch_taken_0x412f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f68) {
            ctx->pc = 0x412F84u;
            goto label_412f84;
        }
    }
    ctx->pc = 0x412F70u;
label_412f70:
    // 0x412f70: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x412f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_412f74:
    // 0x412f74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_412f78:
    if (ctx->pc == 0x412F78u) {
        ctx->pc = 0x412F7Cu;
        goto label_412f7c;
    }
    ctx->pc = 0x412F74u;
    {
        const bool branch_taken_0x412f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f74) {
            ctx->pc = 0x412F84u;
            goto label_412f84;
        }
    }
    ctx->pc = 0x412F7Cu;
label_412f7c:
    // 0x412f7c: 0xc0400a8  jal         func_1002A0
label_412f80:
    if (ctx->pc == 0x412F80u) {
        ctx->pc = 0x412F84u;
        goto label_412f84;
    }
    ctx->pc = 0x412F7Cu;
    SET_GPR_U32(ctx, 31, 0x412F84u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412F84u; }
        if (ctx->pc != 0x412F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412F84u; }
        if (ctx->pc != 0x412F84u) { return; }
    }
    ctx->pc = 0x412F84u;
label_412f84:
    // 0x412f84: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x412f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_412f88:
    // 0x412f88: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_412f8c:
    if (ctx->pc == 0x412F8Cu) {
        ctx->pc = 0x412F8Cu;
            // 0x412f8c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x412F90u;
        goto label_412f90;
    }
    ctx->pc = 0x412F88u;
    {
        const bool branch_taken_0x412f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f88) {
            ctx->pc = 0x412F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412F88u;
            // 0x412f8c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412FB8u;
            goto label_412fb8;
        }
    }
    ctx->pc = 0x412F90u;
label_412f90:
    // 0x412f90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_412f94:
    if (ctx->pc == 0x412F94u) {
        ctx->pc = 0x412F98u;
        goto label_412f98;
    }
    ctx->pc = 0x412F90u;
    {
        const bool branch_taken_0x412f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f90) {
            ctx->pc = 0x412FB4u;
            goto label_412fb4;
        }
    }
    ctx->pc = 0x412F98u;
label_412f98:
    // 0x412f98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_412f9c:
    if (ctx->pc == 0x412F9Cu) {
        ctx->pc = 0x412FA0u;
        goto label_412fa0;
    }
    ctx->pc = 0x412F98u;
    {
        const bool branch_taken_0x412f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f98) {
            ctx->pc = 0x412FB4u;
            goto label_412fb4;
        }
    }
    ctx->pc = 0x412FA0u;
label_412fa0:
    // 0x412fa0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x412fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_412fa4:
    // 0x412fa4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_412fa8:
    if (ctx->pc == 0x412FA8u) {
        ctx->pc = 0x412FACu;
        goto label_412fac;
    }
    ctx->pc = 0x412FA4u;
    {
        const bool branch_taken_0x412fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x412fa4) {
            ctx->pc = 0x412FB4u;
            goto label_412fb4;
        }
    }
    ctx->pc = 0x412FACu;
label_412fac:
    // 0x412fac: 0xc0400a8  jal         func_1002A0
label_412fb0:
    if (ctx->pc == 0x412FB0u) {
        ctx->pc = 0x412FB4u;
        goto label_412fb4;
    }
    ctx->pc = 0x412FACu;
    SET_GPR_U32(ctx, 31, 0x412FB4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412FB4u; }
        if (ctx->pc != 0x412FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412FB4u; }
        if (ctx->pc != 0x412FB4u) { return; }
    }
    ctx->pc = 0x412FB4u;
label_412fb4:
    // 0x412fb4: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x412fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_412fb8:
    // 0x412fb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_412fbc:
    if (ctx->pc == 0x412FBCu) {
        ctx->pc = 0x412FC0u;
        goto label_412fc0;
    }
    ctx->pc = 0x412FB8u;
    {
        const bool branch_taken_0x412fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412fb8) {
            ctx->pc = 0x412FD4u;
            goto label_412fd4;
        }
    }
    ctx->pc = 0x412FC0u;
label_412fc0:
    // 0x412fc0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x412fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_412fc4:
    // 0x412fc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x412fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_412fc8:
    // 0x412fc8: 0x2463af48  addiu       $v1, $v1, -0x50B8
    ctx->pc = 0x412fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946632));
label_412fcc:
    // 0x412fcc: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x412fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_412fd0:
    // 0x412fd0: 0xac407308  sw          $zero, 0x7308($v0)
    ctx->pc = 0x412fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29448), GPR_U32(ctx, 0));
label_412fd4:
    // 0x412fd4: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_412fd8:
    if (ctx->pc == 0x412FD8u) {
        ctx->pc = 0x412FD8u;
            // 0x412fd8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x412FDCu;
        goto label_412fdc;
    }
    ctx->pc = 0x412FD4u;
    {
        const bool branch_taken_0x412fd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x412fd4) {
            ctx->pc = 0x412FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412FD4u;
            // 0x412fd8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413030u;
            goto label_413030;
        }
    }
    ctx->pc = 0x412FDCu;
label_412fdc:
    // 0x412fdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x412fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_412fe0:
    // 0x412fe0: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x412fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_412fe4:
    // 0x412fe4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x412fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_412fe8:
    // 0x412fe8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x412fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_412fec:
    // 0x412fec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_412ff0:
    if (ctx->pc == 0x412FF0u) {
        ctx->pc = 0x412FF0u;
            // 0x412ff0: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x412FF4u;
        goto label_412ff4;
    }
    ctx->pc = 0x412FECu;
    {
        const bool branch_taken_0x412fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x412fec) {
            ctx->pc = 0x412FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412FECu;
            // 0x412ff0: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413008u;
            goto label_413008;
        }
    }
    ctx->pc = 0x412FF4u;
label_412ff4:
    // 0x412ff4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x412ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_412ff8:
    // 0x412ff8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x412ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_412ffc:
    // 0x412ffc: 0x320f809  jalr        $t9
label_413000:
    if (ctx->pc == 0x413000u) {
        ctx->pc = 0x413000u;
            // 0x413000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x413004u;
        goto label_413004;
    }
    ctx->pc = 0x412FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x413004u);
        ctx->pc = 0x413000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412FFCu;
            // 0x413000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x413004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x413004u; }
            if (ctx->pc != 0x413004u) { return; }
        }
        }
    }
    ctx->pc = 0x413004u;
label_413004:
    // 0x413004: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x413004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_413008:
    // 0x413008: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41300c:
    if (ctx->pc == 0x41300Cu) {
        ctx->pc = 0x41300Cu;
            // 0x41300c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413010u;
        goto label_413010;
    }
    ctx->pc = 0x413008u;
    {
        const bool branch_taken_0x413008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x413008) {
            ctx->pc = 0x41300Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413008u;
            // 0x41300c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413024u;
            goto label_413024;
        }
    }
    ctx->pc = 0x413010u;
label_413010:
    // 0x413010: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x413010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_413014:
    // 0x413014: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x413014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_413018:
    // 0x413018: 0x320f809  jalr        $t9
label_41301c:
    if (ctx->pc == 0x41301Cu) {
        ctx->pc = 0x41301Cu;
            // 0x41301c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x413020u;
        goto label_413020;
    }
    ctx->pc = 0x413018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x413020u);
        ctx->pc = 0x41301Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413018u;
            // 0x41301c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x413020u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x413020u; }
            if (ctx->pc != 0x413020u) { return; }
        }
        }
    }
    ctx->pc = 0x413020u;
label_413020:
    // 0x413020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x413020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_413024:
    // 0x413024: 0xc075bf8  jal         func_1D6FE0
label_413028:
    if (ctx->pc == 0x413028u) {
        ctx->pc = 0x413028u;
            // 0x413028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41302Cu;
        goto label_41302c;
    }
    ctx->pc = 0x413024u;
    SET_GPR_U32(ctx, 31, 0x41302Cu);
    ctx->pc = 0x413028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413024u;
            // 0x413028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41302Cu; }
        if (ctx->pc != 0x41302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41302Cu; }
        if (ctx->pc != 0x41302Cu) { return; }
    }
    ctx->pc = 0x41302Cu;
label_41302c:
    // 0x41302c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_413030:
    // 0x413030: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x413030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_413034:
    // 0x413034: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_413038:
    if (ctx->pc == 0x413038u) {
        ctx->pc = 0x413038u;
            // 0x413038: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41303Cu;
        goto label_41303c;
    }
    ctx->pc = 0x413034u;
    {
        const bool branch_taken_0x413034 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x413034) {
            ctx->pc = 0x413038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413034u;
            // 0x413038: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413048u;
            goto label_413048;
        }
    }
    ctx->pc = 0x41303Cu;
label_41303c:
    // 0x41303c: 0xc0400a8  jal         func_1002A0
label_413040:
    if (ctx->pc == 0x413040u) {
        ctx->pc = 0x413040u;
            // 0x413040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413044u;
        goto label_413044;
    }
    ctx->pc = 0x41303Cu;
    SET_GPR_U32(ctx, 31, 0x413044u);
    ctx->pc = 0x413040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41303Cu;
            // 0x413040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413044u; }
        if (ctx->pc != 0x413044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413044u; }
        if (ctx->pc != 0x413044u) { return; }
    }
    ctx->pc = 0x413044u;
label_413044:
    // 0x413044: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x413044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_413048:
    // 0x413048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x413048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41304c:
    // 0x41304c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41304cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413050:
    // 0x413050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_413054:
    // 0x413054: 0x3e00008  jr          $ra
label_413058:
    if (ctx->pc == 0x413058u) {
        ctx->pc = 0x413058u;
            // 0x413058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41305Cu;
        goto label_41305c;
    }
    ctx->pc = 0x413054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413054u;
            // 0x413058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41305Cu;
label_41305c:
    // 0x41305c: 0x0  nop
    ctx->pc = 0x41305cu;
    // NOP
label_413060:
    // 0x413060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413064:
    // 0x413064: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x413064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_413068:
    // 0x413068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41306c:
    // 0x41306c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41306cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_413070:
    // 0x413070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_413074:
    // 0x413074: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x413074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_413078:
    // 0x413078: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x413078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_41307c:
    // 0x41307c: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x41307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_413080:
    // 0x413080: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x413080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_413084:
    // 0x413084: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x413084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_413088:
    // 0x413088: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x413088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_41308c:
    // 0x41308c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x41308cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_413090:
    // 0x413090: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x413090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_413094:
    // 0x413094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x413094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413098:
    // 0x413098: 0x24a5b050  addiu       $a1, $a1, -0x4FB0
    ctx->pc = 0x413098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946896));
label_41309c:
    // 0x41309c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x41309cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_4130a0:
    // 0x4130a0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4130a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4130a4:
    // 0x4130a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4130a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4130a8:
    // 0x4130a8: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x4130a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
label_4130ac:
    // 0x4130ac: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x4130acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4130b0:
    // 0x4130b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4130b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4130b4:
    // 0x4130b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4130b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4130b8:
    // 0x4130b8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4130b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4130bc:
    // 0x4130bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4130bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_4130c0:
    // 0x4130c0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4130c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_4130c4:
    // 0x4130c4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4130c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_4130c8:
    // 0x4130c8: 0xc0b4a18  jal         func_2D2860
label_4130cc:
    if (ctx->pc == 0x4130CCu) {
        ctx->pc = 0x4130CCu;
            // 0x4130cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4130D0u;
        goto label_4130d0;
    }
    ctx->pc = 0x4130C8u;
    SET_GPR_U32(ctx, 31, 0x4130D0u);
    ctx->pc = 0x4130CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4130C8u;
            // 0x4130cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4130D0u; }
        if (ctx->pc != 0x4130D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4130D0u; }
        if (ctx->pc != 0x4130D0u) { return; }
    }
    ctx->pc = 0x4130D0u;
label_4130d0:
    // 0x4130d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4130d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4130d4:
    // 0x4130d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4130d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4130d8:
    // 0x4130d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4130d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4130dc:
    // 0x4130dc: 0x3e00008  jr          $ra
label_4130e0:
    if (ctx->pc == 0x4130E0u) {
        ctx->pc = 0x4130E0u;
            // 0x4130e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4130E4u;
        goto label_4130e4;
    }
    ctx->pc = 0x4130DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4130E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4130DCu;
            // 0x4130e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4130E4u;
label_4130e4:
    // 0x4130e4: 0x0  nop
    ctx->pc = 0x4130e4u;
    // NOP
label_4130e8:
    // 0x4130e8: 0x0  nop
    ctx->pc = 0x4130e8u;
    // NOP
label_4130ec:
    // 0x4130ec: 0x0  nop
    ctx->pc = 0x4130ecu;
    // NOP
}
