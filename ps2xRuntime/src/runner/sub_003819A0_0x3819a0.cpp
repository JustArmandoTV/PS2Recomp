#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003819A0
// Address: 0x3819a0 - 0x381fe0
void sub_003819A0_0x3819a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003819A0_0x3819a0");
#endif

    switch (ctx->pc) {
        case 0x3819a0u: goto label_3819a0;
        case 0x3819a4u: goto label_3819a4;
        case 0x3819a8u: goto label_3819a8;
        case 0x3819acu: goto label_3819ac;
        case 0x3819b0u: goto label_3819b0;
        case 0x3819b4u: goto label_3819b4;
        case 0x3819b8u: goto label_3819b8;
        case 0x3819bcu: goto label_3819bc;
        case 0x3819c0u: goto label_3819c0;
        case 0x3819c4u: goto label_3819c4;
        case 0x3819c8u: goto label_3819c8;
        case 0x3819ccu: goto label_3819cc;
        case 0x3819d0u: goto label_3819d0;
        case 0x3819d4u: goto label_3819d4;
        case 0x3819d8u: goto label_3819d8;
        case 0x3819dcu: goto label_3819dc;
        case 0x3819e0u: goto label_3819e0;
        case 0x3819e4u: goto label_3819e4;
        case 0x3819e8u: goto label_3819e8;
        case 0x3819ecu: goto label_3819ec;
        case 0x3819f0u: goto label_3819f0;
        case 0x3819f4u: goto label_3819f4;
        case 0x3819f8u: goto label_3819f8;
        case 0x3819fcu: goto label_3819fc;
        case 0x381a00u: goto label_381a00;
        case 0x381a04u: goto label_381a04;
        case 0x381a08u: goto label_381a08;
        case 0x381a0cu: goto label_381a0c;
        case 0x381a10u: goto label_381a10;
        case 0x381a14u: goto label_381a14;
        case 0x381a18u: goto label_381a18;
        case 0x381a1cu: goto label_381a1c;
        case 0x381a20u: goto label_381a20;
        case 0x381a24u: goto label_381a24;
        case 0x381a28u: goto label_381a28;
        case 0x381a2cu: goto label_381a2c;
        case 0x381a30u: goto label_381a30;
        case 0x381a34u: goto label_381a34;
        case 0x381a38u: goto label_381a38;
        case 0x381a3cu: goto label_381a3c;
        case 0x381a40u: goto label_381a40;
        case 0x381a44u: goto label_381a44;
        case 0x381a48u: goto label_381a48;
        case 0x381a4cu: goto label_381a4c;
        case 0x381a50u: goto label_381a50;
        case 0x381a54u: goto label_381a54;
        case 0x381a58u: goto label_381a58;
        case 0x381a5cu: goto label_381a5c;
        case 0x381a60u: goto label_381a60;
        case 0x381a64u: goto label_381a64;
        case 0x381a68u: goto label_381a68;
        case 0x381a6cu: goto label_381a6c;
        case 0x381a70u: goto label_381a70;
        case 0x381a74u: goto label_381a74;
        case 0x381a78u: goto label_381a78;
        case 0x381a7cu: goto label_381a7c;
        case 0x381a80u: goto label_381a80;
        case 0x381a84u: goto label_381a84;
        case 0x381a88u: goto label_381a88;
        case 0x381a8cu: goto label_381a8c;
        case 0x381a90u: goto label_381a90;
        case 0x381a94u: goto label_381a94;
        case 0x381a98u: goto label_381a98;
        case 0x381a9cu: goto label_381a9c;
        case 0x381aa0u: goto label_381aa0;
        case 0x381aa4u: goto label_381aa4;
        case 0x381aa8u: goto label_381aa8;
        case 0x381aacu: goto label_381aac;
        case 0x381ab0u: goto label_381ab0;
        case 0x381ab4u: goto label_381ab4;
        case 0x381ab8u: goto label_381ab8;
        case 0x381abcu: goto label_381abc;
        case 0x381ac0u: goto label_381ac0;
        case 0x381ac4u: goto label_381ac4;
        case 0x381ac8u: goto label_381ac8;
        case 0x381accu: goto label_381acc;
        case 0x381ad0u: goto label_381ad0;
        case 0x381ad4u: goto label_381ad4;
        case 0x381ad8u: goto label_381ad8;
        case 0x381adcu: goto label_381adc;
        case 0x381ae0u: goto label_381ae0;
        case 0x381ae4u: goto label_381ae4;
        case 0x381ae8u: goto label_381ae8;
        case 0x381aecu: goto label_381aec;
        case 0x381af0u: goto label_381af0;
        case 0x381af4u: goto label_381af4;
        case 0x381af8u: goto label_381af8;
        case 0x381afcu: goto label_381afc;
        case 0x381b00u: goto label_381b00;
        case 0x381b04u: goto label_381b04;
        case 0x381b08u: goto label_381b08;
        case 0x381b0cu: goto label_381b0c;
        case 0x381b10u: goto label_381b10;
        case 0x381b14u: goto label_381b14;
        case 0x381b18u: goto label_381b18;
        case 0x381b1cu: goto label_381b1c;
        case 0x381b20u: goto label_381b20;
        case 0x381b24u: goto label_381b24;
        case 0x381b28u: goto label_381b28;
        case 0x381b2cu: goto label_381b2c;
        case 0x381b30u: goto label_381b30;
        case 0x381b34u: goto label_381b34;
        case 0x381b38u: goto label_381b38;
        case 0x381b3cu: goto label_381b3c;
        case 0x381b40u: goto label_381b40;
        case 0x381b44u: goto label_381b44;
        case 0x381b48u: goto label_381b48;
        case 0x381b4cu: goto label_381b4c;
        case 0x381b50u: goto label_381b50;
        case 0x381b54u: goto label_381b54;
        case 0x381b58u: goto label_381b58;
        case 0x381b5cu: goto label_381b5c;
        case 0x381b60u: goto label_381b60;
        case 0x381b64u: goto label_381b64;
        case 0x381b68u: goto label_381b68;
        case 0x381b6cu: goto label_381b6c;
        case 0x381b70u: goto label_381b70;
        case 0x381b74u: goto label_381b74;
        case 0x381b78u: goto label_381b78;
        case 0x381b7cu: goto label_381b7c;
        case 0x381b80u: goto label_381b80;
        case 0x381b84u: goto label_381b84;
        case 0x381b88u: goto label_381b88;
        case 0x381b8cu: goto label_381b8c;
        case 0x381b90u: goto label_381b90;
        case 0x381b94u: goto label_381b94;
        case 0x381b98u: goto label_381b98;
        case 0x381b9cu: goto label_381b9c;
        case 0x381ba0u: goto label_381ba0;
        case 0x381ba4u: goto label_381ba4;
        case 0x381ba8u: goto label_381ba8;
        case 0x381bacu: goto label_381bac;
        case 0x381bb0u: goto label_381bb0;
        case 0x381bb4u: goto label_381bb4;
        case 0x381bb8u: goto label_381bb8;
        case 0x381bbcu: goto label_381bbc;
        case 0x381bc0u: goto label_381bc0;
        case 0x381bc4u: goto label_381bc4;
        case 0x381bc8u: goto label_381bc8;
        case 0x381bccu: goto label_381bcc;
        case 0x381bd0u: goto label_381bd0;
        case 0x381bd4u: goto label_381bd4;
        case 0x381bd8u: goto label_381bd8;
        case 0x381bdcu: goto label_381bdc;
        case 0x381be0u: goto label_381be0;
        case 0x381be4u: goto label_381be4;
        case 0x381be8u: goto label_381be8;
        case 0x381becu: goto label_381bec;
        case 0x381bf0u: goto label_381bf0;
        case 0x381bf4u: goto label_381bf4;
        case 0x381bf8u: goto label_381bf8;
        case 0x381bfcu: goto label_381bfc;
        case 0x381c00u: goto label_381c00;
        case 0x381c04u: goto label_381c04;
        case 0x381c08u: goto label_381c08;
        case 0x381c0cu: goto label_381c0c;
        case 0x381c10u: goto label_381c10;
        case 0x381c14u: goto label_381c14;
        case 0x381c18u: goto label_381c18;
        case 0x381c1cu: goto label_381c1c;
        case 0x381c20u: goto label_381c20;
        case 0x381c24u: goto label_381c24;
        case 0x381c28u: goto label_381c28;
        case 0x381c2cu: goto label_381c2c;
        case 0x381c30u: goto label_381c30;
        case 0x381c34u: goto label_381c34;
        case 0x381c38u: goto label_381c38;
        case 0x381c3cu: goto label_381c3c;
        case 0x381c40u: goto label_381c40;
        case 0x381c44u: goto label_381c44;
        case 0x381c48u: goto label_381c48;
        case 0x381c4cu: goto label_381c4c;
        case 0x381c50u: goto label_381c50;
        case 0x381c54u: goto label_381c54;
        case 0x381c58u: goto label_381c58;
        case 0x381c5cu: goto label_381c5c;
        case 0x381c60u: goto label_381c60;
        case 0x381c64u: goto label_381c64;
        case 0x381c68u: goto label_381c68;
        case 0x381c6cu: goto label_381c6c;
        case 0x381c70u: goto label_381c70;
        case 0x381c74u: goto label_381c74;
        case 0x381c78u: goto label_381c78;
        case 0x381c7cu: goto label_381c7c;
        case 0x381c80u: goto label_381c80;
        case 0x381c84u: goto label_381c84;
        case 0x381c88u: goto label_381c88;
        case 0x381c8cu: goto label_381c8c;
        case 0x381c90u: goto label_381c90;
        case 0x381c94u: goto label_381c94;
        case 0x381c98u: goto label_381c98;
        case 0x381c9cu: goto label_381c9c;
        case 0x381ca0u: goto label_381ca0;
        case 0x381ca4u: goto label_381ca4;
        case 0x381ca8u: goto label_381ca8;
        case 0x381cacu: goto label_381cac;
        case 0x381cb0u: goto label_381cb0;
        case 0x381cb4u: goto label_381cb4;
        case 0x381cb8u: goto label_381cb8;
        case 0x381cbcu: goto label_381cbc;
        case 0x381cc0u: goto label_381cc0;
        case 0x381cc4u: goto label_381cc4;
        case 0x381cc8u: goto label_381cc8;
        case 0x381cccu: goto label_381ccc;
        case 0x381cd0u: goto label_381cd0;
        case 0x381cd4u: goto label_381cd4;
        case 0x381cd8u: goto label_381cd8;
        case 0x381cdcu: goto label_381cdc;
        case 0x381ce0u: goto label_381ce0;
        case 0x381ce4u: goto label_381ce4;
        case 0x381ce8u: goto label_381ce8;
        case 0x381cecu: goto label_381cec;
        case 0x381cf0u: goto label_381cf0;
        case 0x381cf4u: goto label_381cf4;
        case 0x381cf8u: goto label_381cf8;
        case 0x381cfcu: goto label_381cfc;
        case 0x381d00u: goto label_381d00;
        case 0x381d04u: goto label_381d04;
        case 0x381d08u: goto label_381d08;
        case 0x381d0cu: goto label_381d0c;
        case 0x381d10u: goto label_381d10;
        case 0x381d14u: goto label_381d14;
        case 0x381d18u: goto label_381d18;
        case 0x381d1cu: goto label_381d1c;
        case 0x381d20u: goto label_381d20;
        case 0x381d24u: goto label_381d24;
        case 0x381d28u: goto label_381d28;
        case 0x381d2cu: goto label_381d2c;
        case 0x381d30u: goto label_381d30;
        case 0x381d34u: goto label_381d34;
        case 0x381d38u: goto label_381d38;
        case 0x381d3cu: goto label_381d3c;
        case 0x381d40u: goto label_381d40;
        case 0x381d44u: goto label_381d44;
        case 0x381d48u: goto label_381d48;
        case 0x381d4cu: goto label_381d4c;
        case 0x381d50u: goto label_381d50;
        case 0x381d54u: goto label_381d54;
        case 0x381d58u: goto label_381d58;
        case 0x381d5cu: goto label_381d5c;
        case 0x381d60u: goto label_381d60;
        case 0x381d64u: goto label_381d64;
        case 0x381d68u: goto label_381d68;
        case 0x381d6cu: goto label_381d6c;
        case 0x381d70u: goto label_381d70;
        case 0x381d74u: goto label_381d74;
        case 0x381d78u: goto label_381d78;
        case 0x381d7cu: goto label_381d7c;
        case 0x381d80u: goto label_381d80;
        case 0x381d84u: goto label_381d84;
        case 0x381d88u: goto label_381d88;
        case 0x381d8cu: goto label_381d8c;
        case 0x381d90u: goto label_381d90;
        case 0x381d94u: goto label_381d94;
        case 0x381d98u: goto label_381d98;
        case 0x381d9cu: goto label_381d9c;
        case 0x381da0u: goto label_381da0;
        case 0x381da4u: goto label_381da4;
        case 0x381da8u: goto label_381da8;
        case 0x381dacu: goto label_381dac;
        case 0x381db0u: goto label_381db0;
        case 0x381db4u: goto label_381db4;
        case 0x381db8u: goto label_381db8;
        case 0x381dbcu: goto label_381dbc;
        case 0x381dc0u: goto label_381dc0;
        case 0x381dc4u: goto label_381dc4;
        case 0x381dc8u: goto label_381dc8;
        case 0x381dccu: goto label_381dcc;
        case 0x381dd0u: goto label_381dd0;
        case 0x381dd4u: goto label_381dd4;
        case 0x381dd8u: goto label_381dd8;
        case 0x381ddcu: goto label_381ddc;
        case 0x381de0u: goto label_381de0;
        case 0x381de4u: goto label_381de4;
        case 0x381de8u: goto label_381de8;
        case 0x381decu: goto label_381dec;
        case 0x381df0u: goto label_381df0;
        case 0x381df4u: goto label_381df4;
        case 0x381df8u: goto label_381df8;
        case 0x381dfcu: goto label_381dfc;
        case 0x381e00u: goto label_381e00;
        case 0x381e04u: goto label_381e04;
        case 0x381e08u: goto label_381e08;
        case 0x381e0cu: goto label_381e0c;
        case 0x381e10u: goto label_381e10;
        case 0x381e14u: goto label_381e14;
        case 0x381e18u: goto label_381e18;
        case 0x381e1cu: goto label_381e1c;
        case 0x381e20u: goto label_381e20;
        case 0x381e24u: goto label_381e24;
        case 0x381e28u: goto label_381e28;
        case 0x381e2cu: goto label_381e2c;
        case 0x381e30u: goto label_381e30;
        case 0x381e34u: goto label_381e34;
        case 0x381e38u: goto label_381e38;
        case 0x381e3cu: goto label_381e3c;
        case 0x381e40u: goto label_381e40;
        case 0x381e44u: goto label_381e44;
        case 0x381e48u: goto label_381e48;
        case 0x381e4cu: goto label_381e4c;
        case 0x381e50u: goto label_381e50;
        case 0x381e54u: goto label_381e54;
        case 0x381e58u: goto label_381e58;
        case 0x381e5cu: goto label_381e5c;
        case 0x381e60u: goto label_381e60;
        case 0x381e64u: goto label_381e64;
        case 0x381e68u: goto label_381e68;
        case 0x381e6cu: goto label_381e6c;
        case 0x381e70u: goto label_381e70;
        case 0x381e74u: goto label_381e74;
        case 0x381e78u: goto label_381e78;
        case 0x381e7cu: goto label_381e7c;
        case 0x381e80u: goto label_381e80;
        case 0x381e84u: goto label_381e84;
        case 0x381e88u: goto label_381e88;
        case 0x381e8cu: goto label_381e8c;
        case 0x381e90u: goto label_381e90;
        case 0x381e94u: goto label_381e94;
        case 0x381e98u: goto label_381e98;
        case 0x381e9cu: goto label_381e9c;
        case 0x381ea0u: goto label_381ea0;
        case 0x381ea4u: goto label_381ea4;
        case 0x381ea8u: goto label_381ea8;
        case 0x381eacu: goto label_381eac;
        case 0x381eb0u: goto label_381eb0;
        case 0x381eb4u: goto label_381eb4;
        case 0x381eb8u: goto label_381eb8;
        case 0x381ebcu: goto label_381ebc;
        case 0x381ec0u: goto label_381ec0;
        case 0x381ec4u: goto label_381ec4;
        case 0x381ec8u: goto label_381ec8;
        case 0x381eccu: goto label_381ecc;
        case 0x381ed0u: goto label_381ed0;
        case 0x381ed4u: goto label_381ed4;
        case 0x381ed8u: goto label_381ed8;
        case 0x381edcu: goto label_381edc;
        case 0x381ee0u: goto label_381ee0;
        case 0x381ee4u: goto label_381ee4;
        case 0x381ee8u: goto label_381ee8;
        case 0x381eecu: goto label_381eec;
        case 0x381ef0u: goto label_381ef0;
        case 0x381ef4u: goto label_381ef4;
        case 0x381ef8u: goto label_381ef8;
        case 0x381efcu: goto label_381efc;
        case 0x381f00u: goto label_381f00;
        case 0x381f04u: goto label_381f04;
        case 0x381f08u: goto label_381f08;
        case 0x381f0cu: goto label_381f0c;
        case 0x381f10u: goto label_381f10;
        case 0x381f14u: goto label_381f14;
        case 0x381f18u: goto label_381f18;
        case 0x381f1cu: goto label_381f1c;
        case 0x381f20u: goto label_381f20;
        case 0x381f24u: goto label_381f24;
        case 0x381f28u: goto label_381f28;
        case 0x381f2cu: goto label_381f2c;
        case 0x381f30u: goto label_381f30;
        case 0x381f34u: goto label_381f34;
        case 0x381f38u: goto label_381f38;
        case 0x381f3cu: goto label_381f3c;
        case 0x381f40u: goto label_381f40;
        case 0x381f44u: goto label_381f44;
        case 0x381f48u: goto label_381f48;
        case 0x381f4cu: goto label_381f4c;
        case 0x381f50u: goto label_381f50;
        case 0x381f54u: goto label_381f54;
        case 0x381f58u: goto label_381f58;
        case 0x381f5cu: goto label_381f5c;
        case 0x381f60u: goto label_381f60;
        case 0x381f64u: goto label_381f64;
        case 0x381f68u: goto label_381f68;
        case 0x381f6cu: goto label_381f6c;
        case 0x381f70u: goto label_381f70;
        case 0x381f74u: goto label_381f74;
        case 0x381f78u: goto label_381f78;
        case 0x381f7cu: goto label_381f7c;
        case 0x381f80u: goto label_381f80;
        case 0x381f84u: goto label_381f84;
        case 0x381f88u: goto label_381f88;
        case 0x381f8cu: goto label_381f8c;
        case 0x381f90u: goto label_381f90;
        case 0x381f94u: goto label_381f94;
        case 0x381f98u: goto label_381f98;
        case 0x381f9cu: goto label_381f9c;
        case 0x381fa0u: goto label_381fa0;
        case 0x381fa4u: goto label_381fa4;
        case 0x381fa8u: goto label_381fa8;
        case 0x381facu: goto label_381fac;
        case 0x381fb0u: goto label_381fb0;
        case 0x381fb4u: goto label_381fb4;
        case 0x381fb8u: goto label_381fb8;
        case 0x381fbcu: goto label_381fbc;
        case 0x381fc0u: goto label_381fc0;
        case 0x381fc4u: goto label_381fc4;
        case 0x381fc8u: goto label_381fc8;
        case 0x381fccu: goto label_381fcc;
        case 0x381fd0u: goto label_381fd0;
        case 0x381fd4u: goto label_381fd4;
        case 0x381fd8u: goto label_381fd8;
        case 0x381fdcu: goto label_381fdc;
        default: break;
    }

    ctx->pc = 0x3819a0u;

label_3819a0:
    // 0x3819a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3819a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3819a4:
    // 0x3819a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3819a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3819a8:
    // 0x3819a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3819a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3819ac:
    // 0x3819ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3819acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3819b0:
    // 0x3819b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3819b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3819b4:
    // 0x3819b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3819b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3819b8:
    // 0x3819b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3819b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3819bc:
    // 0x3819bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3819bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3819c0:
    // 0x3819c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3819c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3819c4:
    // 0x3819c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3819c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3819c8:
    // 0x3819c8: 0xc10ca68  jal         func_4329A0
label_3819cc:
    if (ctx->pc == 0x3819CCu) {
        ctx->pc = 0x3819CCu;
            // 0x3819cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3819D0u;
        goto label_3819d0;
    }
    ctx->pc = 0x3819C8u;
    SET_GPR_U32(ctx, 31, 0x3819D0u);
    ctx->pc = 0x3819CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3819C8u;
            // 0x3819cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3819D0u; }
        if (ctx->pc != 0x3819D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3819D0u; }
        if (ctx->pc != 0x3819D0u) { return; }
    }
    ctx->pc = 0x3819D0u;
label_3819d0:
    // 0x3819d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3819d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3819d4:
    // 0x3819d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3819d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3819d8:
    // 0x3819d8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3819d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3819dc:
    // 0x3819dc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3819dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3819e0:
    // 0x3819e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3819e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3819e4:
    // 0x3819e4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3819e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3819e8:
    // 0x3819e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3819e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3819ec:
    // 0x3819ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3819ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3819f0:
    // 0x3819f0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3819f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3819f4:
    // 0x3819f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3819f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3819f8:
    // 0x3819f8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3819f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_3819fc:
    // 0x3819fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3819fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_381a00:
    // 0x381a00: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x381a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_381a04:
    // 0x381a04: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x381a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_381a08:
    // 0x381a08: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x381a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_381a0c:
    // 0x381a0c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x381a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_381a10:
    // 0x381a10: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x381a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_381a14:
    // 0x381a14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x381a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_381a18:
    // 0x381a18: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x381a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_381a1c:
    // 0x381a1c: 0xc0582cc  jal         func_160B30
label_381a20:
    if (ctx->pc == 0x381A20u) {
        ctx->pc = 0x381A20u;
            // 0x381a20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x381A24u;
        goto label_381a24;
    }
    ctx->pc = 0x381A1Cu;
    SET_GPR_U32(ctx, 31, 0x381A24u);
    ctx->pc = 0x381A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381A1Cu;
            // 0x381a20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381A24u; }
        if (ctx->pc != 0x381A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381A24u; }
        if (ctx->pc != 0x381A24u) { return; }
    }
    ctx->pc = 0x381A24u;
label_381a24:
    // 0x381a24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x381a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_381a28:
    // 0x381a28: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x381a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_381a2c:
    // 0x381a2c: 0x246376d0  addiu       $v1, $v1, 0x76D0
    ctx->pc = 0x381a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30416));
label_381a30:
    // 0x381a30: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x381a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_381a34:
    // 0x381a34: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x381a34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_381a38:
    // 0x381a38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x381a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_381a3c:
    // 0x381a3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x381a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_381a40:
    // 0x381a40: 0xac446108  sw          $a0, 0x6108($v0)
    ctx->pc = 0x381a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24840), GPR_U32(ctx, 4));
label_381a44:
    // 0x381a44: 0x246376e0  addiu       $v1, $v1, 0x76E0
    ctx->pc = 0x381a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30432));
label_381a48:
    // 0x381a48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x381a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_381a4c:
    // 0x381a4c: 0x24427718  addiu       $v0, $v0, 0x7718
    ctx->pc = 0x381a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30488));
label_381a50:
    // 0x381a50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x381a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_381a54:
    // 0x381a54: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x381a54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_381a58:
    // 0x381a58: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x381a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_381a5c:
    // 0x381a5c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x381a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_381a60:
    // 0x381a60: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x381a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_381a64:
    // 0x381a64: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x381a64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_381a68:
    // 0x381a68: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x381a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_381a6c:
    // 0x381a6c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x381a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_381a70:
    // 0x381a70: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x381a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_381a74:
    // 0x381a74: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x381a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_381a78:
    // 0x381a78: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x381a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_381a7c:
    // 0x381a7c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x381a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_381a80:
    // 0x381a80: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x381a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_381a84:
    // 0x381a84: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_381a88:
    if (ctx->pc == 0x381A88u) {
        ctx->pc = 0x381A8Cu;
        goto label_381a8c;
    }
    ctx->pc = 0x381A84u;
    {
        const bool branch_taken_0x381a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x381a84) {
            ctx->pc = 0x381B18u;
            goto label_381b18;
        }
    }
    ctx->pc = 0x381A8Cu;
label_381a8c:
    // 0x381a8c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x381a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_381a90:
    // 0x381a90: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x381a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_381a94:
    // 0x381a94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x381a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_381a98:
    // 0x381a98: 0xc040138  jal         func_1004E0
label_381a9c:
    if (ctx->pc == 0x381A9Cu) {
        ctx->pc = 0x381A9Cu;
            // 0x381a9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x381AA0u;
        goto label_381aa0;
    }
    ctx->pc = 0x381A98u;
    SET_GPR_U32(ctx, 31, 0x381AA0u);
    ctx->pc = 0x381A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381A98u;
            // 0x381a9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381AA0u; }
        if (ctx->pc != 0x381AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381AA0u; }
        if (ctx->pc != 0x381AA0u) { return; }
    }
    ctx->pc = 0x381AA0u;
label_381aa0:
    // 0x381aa0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x381aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_381aa4:
    // 0x381aa4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x381aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_381aa8:
    // 0x381aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x381aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381aac:
    // 0x381aac: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x381aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
label_381ab0:
    // 0x381ab0: 0x24c610a0  addiu       $a2, $a2, 0x10A0
    ctx->pc = 0x381ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4256));
label_381ab4:
    // 0x381ab4: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x381ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_381ab8:
    // 0x381ab8: 0xc040840  jal         func_102100
label_381abc:
    if (ctx->pc == 0x381ABCu) {
        ctx->pc = 0x381ABCu;
            // 0x381abc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381AC0u;
        goto label_381ac0;
    }
    ctx->pc = 0x381AB8u;
    SET_GPR_U32(ctx, 31, 0x381AC0u);
    ctx->pc = 0x381ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381AB8u;
            // 0x381abc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381AC0u; }
        if (ctx->pc != 0x381AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381AC0u; }
        if (ctx->pc != 0x381AC0u) { return; }
    }
    ctx->pc = 0x381AC0u;
label_381ac0:
    // 0x381ac0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x381ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_381ac4:
    // 0x381ac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x381ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381ac8:
    // 0x381ac8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x381ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_381acc:
    // 0x381acc: 0xc0788fc  jal         func_1E23F0
label_381ad0:
    if (ctx->pc == 0x381AD0u) {
        ctx->pc = 0x381AD0u;
            // 0x381ad0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381AD4u;
        goto label_381ad4;
    }
    ctx->pc = 0x381ACCu;
    SET_GPR_U32(ctx, 31, 0x381AD4u);
    ctx->pc = 0x381AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381ACCu;
            // 0x381ad0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381AD4u; }
        if (ctx->pc != 0x381AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381AD4u; }
        if (ctx->pc != 0x381AD4u) { return; }
    }
    ctx->pc = 0x381AD4u;
label_381ad4:
    // 0x381ad4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x381ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_381ad8:
    // 0x381ad8: 0xc0788fc  jal         func_1E23F0
label_381adc:
    if (ctx->pc == 0x381ADCu) {
        ctx->pc = 0x381ADCu;
            // 0x381adc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381AE0u;
        goto label_381ae0;
    }
    ctx->pc = 0x381AD8u;
    SET_GPR_U32(ctx, 31, 0x381AE0u);
    ctx->pc = 0x381ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381AD8u;
            // 0x381adc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381AE0u; }
        if (ctx->pc != 0x381AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381AE0u; }
        if (ctx->pc != 0x381AE0u) { return; }
    }
    ctx->pc = 0x381AE0u;
label_381ae0:
    // 0x381ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x381ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381ae4:
    // 0x381ae4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x381ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_381ae8:
    // 0x381ae8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x381ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_381aec:
    // 0x381aec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x381aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_381af0:
    // 0x381af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x381af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381af4:
    // 0x381af4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x381af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_381af8:
    // 0x381af8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x381af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_381afc:
    // 0x381afc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x381afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_381b00:
    // 0x381b00: 0xc0a997c  jal         func_2A65F0
label_381b04:
    if (ctx->pc == 0x381B04u) {
        ctx->pc = 0x381B04u;
            // 0x381b04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x381B08u;
        goto label_381b08;
    }
    ctx->pc = 0x381B00u;
    SET_GPR_U32(ctx, 31, 0x381B08u);
    ctx->pc = 0x381B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381B00u;
            // 0x381b04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B08u; }
        if (ctx->pc != 0x381B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B08u; }
        if (ctx->pc != 0x381B08u) { return; }
    }
    ctx->pc = 0x381B08u;
label_381b08:
    // 0x381b08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x381b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_381b0c:
    // 0x381b0c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x381b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_381b10:
    // 0x381b10: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_381b14:
    if (ctx->pc == 0x381B14u) {
        ctx->pc = 0x381B14u;
            // 0x381b14: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x381B18u;
        goto label_381b18;
    }
    ctx->pc = 0x381B10u;
    {
        const bool branch_taken_0x381b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381B10u;
            // 0x381b14: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b10) {
            ctx->pc = 0x381AE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_381ae4;
        }
    }
    ctx->pc = 0x381B18u;
label_381b18:
    // 0x381b18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x381b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_381b1c:
    // 0x381b1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x381b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_381b20:
    // 0x381b20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x381b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_381b24:
    // 0x381b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x381b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_381b28:
    // 0x381b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381b2c:
    // 0x381b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_381b30:
    // 0x381b30: 0x3e00008  jr          $ra
label_381b34:
    if (ctx->pc == 0x381B34u) {
        ctx->pc = 0x381B34u;
            // 0x381b34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x381B38u;
        goto label_381b38;
    }
    ctx->pc = 0x381B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381B30u;
            // 0x381b34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381B38u;
label_381b38:
    // 0x381b38: 0x0  nop
    ctx->pc = 0x381b38u;
    // NOP
label_381b3c:
    // 0x381b3c: 0x0  nop
    ctx->pc = 0x381b3cu;
    // NOP
label_381b40:
    // 0x381b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_381b44:
    // 0x381b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_381b48:
    // 0x381b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_381b4c:
    // 0x381b4c: 0xc0aeebc  jal         func_2BBAF0
label_381b50:
    if (ctx->pc == 0x381B50u) {
        ctx->pc = 0x381B50u;
            // 0x381b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381B54u;
        goto label_381b54;
    }
    ctx->pc = 0x381B4Cu;
    SET_GPR_U32(ctx, 31, 0x381B54u);
    ctx->pc = 0x381B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381B4Cu;
            // 0x381b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B54u; }
        if (ctx->pc != 0x381B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B54u; }
        if (ctx->pc != 0x381B54u) { return; }
    }
    ctx->pc = 0x381B54u;
label_381b54:
    // 0x381b54: 0xc0aeeb4  jal         func_2BBAD0
label_381b58:
    if (ctx->pc == 0x381B58u) {
        ctx->pc = 0x381B58u;
            // 0x381b58: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x381B5Cu;
        goto label_381b5c;
    }
    ctx->pc = 0x381B54u;
    SET_GPR_U32(ctx, 31, 0x381B5Cu);
    ctx->pc = 0x381B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381B54u;
            // 0x381b58: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B5Cu; }
        if (ctx->pc != 0x381B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B5Cu; }
        if (ctx->pc != 0x381B5Cu) { return; }
    }
    ctx->pc = 0x381B5Cu;
label_381b5c:
    // 0x381b5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x381b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_381b60:
    // 0x381b60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x381b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_381b64:
    // 0x381b64: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x381b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_381b68:
    // 0x381b68: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x381b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_381b6c:
    // 0x381b6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x381b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_381b70:
    // 0x381b70: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x381b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_381b74:
    // 0x381b74: 0xc0aeea4  jal         func_2BBA90
label_381b78:
    if (ctx->pc == 0x381B78u) {
        ctx->pc = 0x381B78u;
            // 0x381b78: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x381B7Cu;
        goto label_381b7c;
    }
    ctx->pc = 0x381B74u;
    SET_GPR_U32(ctx, 31, 0x381B7Cu);
    ctx->pc = 0x381B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381B74u;
            // 0x381b78: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B7Cu; }
        if (ctx->pc != 0x381B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B7Cu; }
        if (ctx->pc != 0x381B7Cu) { return; }
    }
    ctx->pc = 0x381B7Cu;
label_381b7c:
    // 0x381b7c: 0xc0aee8c  jal         func_2BBA30
label_381b80:
    if (ctx->pc == 0x381B80u) {
        ctx->pc = 0x381B80u;
            // 0x381b80: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x381B84u;
        goto label_381b84;
    }
    ctx->pc = 0x381B7Cu;
    SET_GPR_U32(ctx, 31, 0x381B84u);
    ctx->pc = 0x381B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381B7Cu;
            // 0x381b80: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B84u; }
        if (ctx->pc != 0x381B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381B84u; }
        if (ctx->pc != 0x381B84u) { return; }
    }
    ctx->pc = 0x381B84u;
label_381b84:
    // 0x381b84: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x381b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_381b88:
    // 0x381b88: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x381b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_381b8c:
    // 0x381b8c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x381b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_381b90:
    // 0x381b90: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x381b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_381b94:
    // 0x381b94: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x381b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_381b98:
    // 0x381b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x381b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381b9c:
    // 0x381b9c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x381b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_381ba0:
    // 0x381ba0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x381ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_381ba4:
    // 0x381ba4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x381ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_381ba8:
    // 0x381ba8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x381ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_381bac:
    // 0x381bac: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x381bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_381bb0:
    // 0x381bb0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x381bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_381bb4:
    // 0x381bb4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x381bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_381bb8:
    // 0x381bb8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x381bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_381bbc:
    // 0x381bbc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x381bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_381bc0:
    // 0x381bc0: 0xc0775b8  jal         func_1DD6E0
label_381bc4:
    if (ctx->pc == 0x381BC4u) {
        ctx->pc = 0x381BC4u;
            // 0x381bc4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x381BC8u;
        goto label_381bc8;
    }
    ctx->pc = 0x381BC0u;
    SET_GPR_U32(ctx, 31, 0x381BC8u);
    ctx->pc = 0x381BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381BC0u;
            // 0x381bc4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381BC8u; }
        if (ctx->pc != 0x381BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381BC8u; }
        if (ctx->pc != 0x381BC8u) { return; }
    }
    ctx->pc = 0x381BC8u;
label_381bc8:
    // 0x381bc8: 0xc077314  jal         func_1DCC50
label_381bcc:
    if (ctx->pc == 0x381BCCu) {
        ctx->pc = 0x381BCCu;
            // 0x381bcc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x381BD0u;
        goto label_381bd0;
    }
    ctx->pc = 0x381BC8u;
    SET_GPR_U32(ctx, 31, 0x381BD0u);
    ctx->pc = 0x381BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381BC8u;
            // 0x381bcc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381BD0u; }
        if (ctx->pc != 0x381BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381BD0u; }
        if (ctx->pc != 0x381BD0u) { return; }
    }
    ctx->pc = 0x381BD0u;
label_381bd0:
    // 0x381bd0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x381bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_381bd4:
    // 0x381bd4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x381bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_381bd8:
    // 0x381bd8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x381bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_381bdc:
    // 0x381bdc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x381bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_381be0:
    // 0x381be0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x381be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_381be4:
    // 0x381be4: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x381be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_381be8:
    // 0x381be8: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x381be8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_381bec:
    // 0x381bec: 0x24a57780  addiu       $a1, $a1, 0x7780
    ctx->pc = 0x381becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30592));
label_381bf0:
    // 0x381bf0: 0x248477c0  addiu       $a0, $a0, 0x77C0
    ctx->pc = 0x381bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30656));
label_381bf4:
    // 0x381bf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x381bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381bf8:
    // 0x381bf8: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x381bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_381bfc:
    // 0x381bfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x381bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381c00:
    // 0x381c00: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x381c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_381c04:
    // 0x381c04: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x381c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_381c08:
    // 0x381c08: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x381c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_381c0c:
    // 0x381c0c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x381c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_381c10:
    // 0x381c10: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x381c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_381c14:
    // 0x381c14: 0xa20300e4  sb          $v1, 0xE4($s0)
    ctx->pc = 0x381c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 3));
label_381c18:
    // 0x381c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_381c1c:
    // 0x381c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_381c20:
    // 0x381c20: 0x3e00008  jr          $ra
label_381c24:
    if (ctx->pc == 0x381C24u) {
        ctx->pc = 0x381C24u;
            // 0x381c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x381C28u;
        goto label_381c28;
    }
    ctx->pc = 0x381C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381C20u;
            // 0x381c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381C28u;
label_381c28:
    // 0x381c28: 0x0  nop
    ctx->pc = 0x381c28u;
    // NOP
label_381c2c:
    // 0x381c2c: 0x0  nop
    ctx->pc = 0x381c2cu;
    // NOP
label_381c30:
    // 0x381c30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x381c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_381c34:
    // 0x381c34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x381c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_381c38:
    // 0x381c38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x381c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_381c3c:
    // 0x381c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_381c40:
    // 0x381c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_381c44:
    // 0x381c44: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x381c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_381c48:
    // 0x381c48: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
label_381c4c:
    if (ctx->pc == 0x381C4Cu) {
        ctx->pc = 0x381C4Cu;
            // 0x381c4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381C50u;
        goto label_381c50;
    }
    ctx->pc = 0x381C48u;
    {
        const bool branch_taken_0x381c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x381C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381C48u;
            // 0x381c4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c48) {
            ctx->pc = 0x381D50u;
            goto label_381d50;
        }
    }
    ctx->pc = 0x381C50u;
label_381c50:
    // 0x381c50: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x381c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_381c54:
    // 0x381c54: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x381c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_381c58:
    // 0x381c58: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_381c5c:
    if (ctx->pc == 0x381C5Cu) {
        ctx->pc = 0x381C5Cu;
            // 0x381c5c: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x381C60u;
        goto label_381c60;
    }
    ctx->pc = 0x381C58u;
    {
        const bool branch_taken_0x381c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381c58) {
            ctx->pc = 0x381C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381C58u;
            // 0x381c5c: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381D54u;
            goto label_381d54;
        }
    }
    ctx->pc = 0x381C60u;
label_381c60:
    // 0x381c60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x381c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_381c64:
    // 0x381c64: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x381c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_381c68:
    // 0x381c68: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x381c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_381c6c:
    // 0x381c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x381c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_381c70:
    // 0x381c70: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x381c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_381c74:
    // 0x381c74: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x381c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_381c78:
    // 0x381c78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x381c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381c7c:
    // 0x381c7c: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_381c80:
    if (ctx->pc == 0x381C80u) {
        ctx->pc = 0x381C80u;
            // 0x381c80: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->pc = 0x381C84u;
        goto label_381c84;
    }
    ctx->pc = 0x381C7Cu;
    {
        const bool branch_taken_0x381c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x381C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381C7Cu;
            // 0x381c80: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c7c) {
            ctx->pc = 0x381D50u;
            goto label_381d50;
        }
    }
    ctx->pc = 0x381C84u;
label_381c84:
    // 0x381c84: 0xc0e32a4  jal         func_38CA90
label_381c88:
    if (ctx->pc == 0x381C88u) {
        ctx->pc = 0x381C88u;
            // 0x381c88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x381C8Cu;
        goto label_381c8c;
    }
    ctx->pc = 0x381C84u;
    SET_GPR_U32(ctx, 31, 0x381C8Cu);
    ctx->pc = 0x381C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381C84u;
            // 0x381c88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381C8Cu; }
        if (ctx->pc != 0x381C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381C8Cu; }
        if (ctx->pc != 0x381C8Cu) { return; }
    }
    ctx->pc = 0x381C8Cu;
label_381c8c:
    // 0x381c8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x381c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_381c90:
    // 0x381c90: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x381c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_381c94:
    // 0x381c94: 0xc0e082c  jal         func_3820B0
label_381c98:
    if (ctx->pc == 0x381C98u) {
        ctx->pc = 0x381C98u;
            // 0x381c98: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x381C9Cu;
        goto label_381c9c;
    }
    ctx->pc = 0x381C94u;
    SET_GPR_U32(ctx, 31, 0x381C9Cu);
    ctx->pc = 0x381C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381C94u;
            // 0x381c98: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381C9Cu; }
        if (ctx->pc != 0x381C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381C9Cu; }
        if (ctx->pc != 0x381C9Cu) { return; }
    }
    ctx->pc = 0x381C9Cu;
label_381c9c:
    // 0x381c9c: 0xc0e0828  jal         func_3820A0
label_381ca0:
    if (ctx->pc == 0x381CA0u) {
        ctx->pc = 0x381CA0u;
            // 0x381ca0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x381CA4u;
        goto label_381ca4;
    }
    ctx->pc = 0x381C9Cu;
    SET_GPR_U32(ctx, 31, 0x381CA4u);
    ctx->pc = 0x381CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381C9Cu;
            // 0x381ca0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CA4u; }
        if (ctx->pc != 0x381CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CA4u; }
        if (ctx->pc != 0x381CA4u) { return; }
    }
    ctx->pc = 0x381CA4u;
label_381ca4:
    // 0x381ca4: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x381ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_381ca8:
    // 0x381ca8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_381cac:
    if (ctx->pc == 0x381CACu) {
        ctx->pc = 0x381CACu;
            // 0x381cac: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x381CB0u;
        goto label_381cb0;
    }
    ctx->pc = 0x381CA8u;
    {
        const bool branch_taken_0x381ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381ca8) {
            ctx->pc = 0x381CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381CA8u;
            // 0x381cac: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381CE0u;
            goto label_381ce0;
        }
    }
    ctx->pc = 0x381CB0u;
label_381cb0:
    // 0x381cb0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x381cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_381cb4:
    // 0x381cb4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x381cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_381cb8:
    // 0x381cb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_381cbc:
    if (ctx->pc == 0x381CBCu) {
        ctx->pc = 0x381CC0u;
        goto label_381cc0;
    }
    ctx->pc = 0x381CB8u;
    {
        const bool branch_taken_0x381cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381cb8) {
            ctx->pc = 0x381CDCu;
            goto label_381cdc;
        }
    }
    ctx->pc = 0x381CC0u;
label_381cc0:
    // 0x381cc0: 0xc0dc408  jal         func_371020
label_381cc4:
    if (ctx->pc == 0x381CC4u) {
        ctx->pc = 0x381CC4u;
            // 0x381cc4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x381CC8u;
        goto label_381cc8;
    }
    ctx->pc = 0x381CC0u;
    SET_GPR_U32(ctx, 31, 0x381CC8u);
    ctx->pc = 0x381CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381CC0u;
            // 0x381cc4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CC8u; }
        if (ctx->pc != 0x381CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CC8u; }
        if (ctx->pc != 0x381CC8u) { return; }
    }
    ctx->pc = 0x381CC8u;
label_381cc8:
    // 0x381cc8: 0xc0e0824  jal         func_382090
label_381ccc:
    if (ctx->pc == 0x381CCCu) {
        ctx->pc = 0x381CCCu;
            // 0x381ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381CD0u;
        goto label_381cd0;
    }
    ctx->pc = 0x381CC8u;
    SET_GPR_U32(ctx, 31, 0x381CD0u);
    ctx->pc = 0x381CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381CC8u;
            // 0x381ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CD0u; }
        if (ctx->pc != 0x381CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CD0u; }
        if (ctx->pc != 0x381CD0u) { return; }
    }
    ctx->pc = 0x381CD0u;
label_381cd0:
    // 0x381cd0: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x381cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_381cd4:
    // 0x381cd4: 0xc0e081c  jal         func_382070
label_381cd8:
    if (ctx->pc == 0x381CD8u) {
        ctx->pc = 0x381CD8u;
            // 0x381cd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381CDCu;
        goto label_381cdc;
    }
    ctx->pc = 0x381CD4u;
    SET_GPR_U32(ctx, 31, 0x381CDCu);
    ctx->pc = 0x381CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381CD4u;
            // 0x381cd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CDCu; }
        if (ctx->pc != 0x381CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CDCu; }
        if (ctx->pc != 0x381CDCu) { return; }
    }
    ctx->pc = 0x381CDCu;
label_381cdc:
    // 0x381cdc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381ce0:
    // 0x381ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x381ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381ce4:
    // 0x381ce4: 0xc0e080c  jal         func_382030
label_381ce8:
    if (ctx->pc == 0x381CE8u) {
        ctx->pc = 0x381CE8u;
            // 0x381ce8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x381CECu;
        goto label_381cec;
    }
    ctx->pc = 0x381CE4u;
    SET_GPR_U32(ctx, 31, 0x381CECu);
    ctx->pc = 0x381CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381CE4u;
            // 0x381ce8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CECu; }
        if (ctx->pc != 0x381CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381CECu; }
        if (ctx->pc != 0x381CECu) { return; }
    }
    ctx->pc = 0x381CECu;
label_381cec:
    // 0x381cec: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381cf0:
    // 0x381cf0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x381cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_381cf4:
    // 0x381cf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x381cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381cf8:
    // 0x381cf8: 0xc08914c  jal         func_224530
label_381cfc:
    if (ctx->pc == 0x381CFCu) {
        ctx->pc = 0x381CFCu;
            // 0x381cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381D00u;
        goto label_381d00;
    }
    ctx->pc = 0x381CF8u;
    SET_GPR_U32(ctx, 31, 0x381D00u);
    ctx->pc = 0x381CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381CF8u;
            // 0x381cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D00u; }
        if (ctx->pc != 0x381D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D00u; }
        if (ctx->pc != 0x381D00u) { return; }
    }
    ctx->pc = 0x381D00u;
label_381d00:
    // 0x381d00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x381d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_381d04:
    // 0x381d04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x381d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_381d08:
    // 0x381d08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x381d08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_381d0c:
    // 0x381d0c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x381d0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_381d10:
    // 0x381d10: 0xc0b6df0  jal         func_2DB7C0
label_381d14:
    if (ctx->pc == 0x381D14u) {
        ctx->pc = 0x381D14u;
            // 0x381d14: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x381D18u;
        goto label_381d18;
    }
    ctx->pc = 0x381D10u;
    SET_GPR_U32(ctx, 31, 0x381D18u);
    ctx->pc = 0x381D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381D10u;
            // 0x381d14: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D18u; }
        if (ctx->pc != 0x381D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D18u; }
        if (ctx->pc != 0x381D18u) { return; }
    }
    ctx->pc = 0x381D18u;
label_381d18:
    // 0x381d18: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381d1c:
    // 0x381d1c: 0xc0e07f8  jal         func_381FE0
label_381d20:
    if (ctx->pc == 0x381D20u) {
        ctx->pc = 0x381D20u;
            // 0x381d20: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x381D24u;
        goto label_381d24;
    }
    ctx->pc = 0x381D1Cu;
    SET_GPR_U32(ctx, 31, 0x381D24u);
    ctx->pc = 0x381D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381D1Cu;
            // 0x381d20: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D24u; }
        if (ctx->pc != 0x381D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D24u; }
        if (ctx->pc != 0x381D24u) { return; }
    }
    ctx->pc = 0x381D24u;
label_381d24:
    // 0x381d24: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381d28:
    // 0x381d28: 0xc0dc3f4  jal         func_370FD0
label_381d2c:
    if (ctx->pc == 0x381D2Cu) {
        ctx->pc = 0x381D2Cu;
            // 0x381d2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x381D30u;
        goto label_381d30;
    }
    ctx->pc = 0x381D28u;
    SET_GPR_U32(ctx, 31, 0x381D30u);
    ctx->pc = 0x381D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381D28u;
            // 0x381d2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D30u; }
        if (ctx->pc != 0x381D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D30u; }
        if (ctx->pc != 0x381D30u) { return; }
    }
    ctx->pc = 0x381D30u;
label_381d30:
    // 0x381d30: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x381d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_381d34:
    // 0x381d34: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x381d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_381d38:
    // 0x381d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_381d3c:
    if (ctx->pc == 0x381D3Cu) {
        ctx->pc = 0x381D40u;
        goto label_381d40;
    }
    ctx->pc = 0x381D38u;
    {
        const bool branch_taken_0x381d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381d38) {
            ctx->pc = 0x381D50u;
            goto label_381d50;
        }
    }
    ctx->pc = 0x381D40u;
label_381d40:
    // 0x381d40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x381d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_381d44:
    // 0x381d44: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x381d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_381d48:
    // 0x381d48: 0x320f809  jalr        $t9
label_381d4c:
    if (ctx->pc == 0x381D4Cu) {
        ctx->pc = 0x381D4Cu;
            // 0x381d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381D50u;
        goto label_381d50;
    }
    ctx->pc = 0x381D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381D50u);
        ctx->pc = 0x381D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381D48u;
            // 0x381d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x381D50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x381D50u; }
            if (ctx->pc != 0x381D50u) { return; }
        }
        }
    }
    ctx->pc = 0x381D50u;
label_381d50:
    // 0x381d50: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x381d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_381d54:
    // 0x381d54: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x381d54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_381d58:
    // 0x381d58: 0x52200067  beql        $s1, $zero, . + 4 + (0x67 << 2)
label_381d5c:
    if (ctx->pc == 0x381D5Cu) {
        ctx->pc = 0x381D5Cu;
            // 0x381d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381D60u;
        goto label_381d60;
    }
    ctx->pc = 0x381D58u;
    {
        const bool branch_taken_0x381d58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x381d58) {
            ctx->pc = 0x381D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381D58u;
            // 0x381d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381EF8u;
            goto label_381ef8;
        }
    }
    ctx->pc = 0x381D60u;
label_381d60:
    // 0x381d60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x381d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_381d64:
    // 0x381d64: 0xc04cce8  jal         func_1333A0
label_381d68:
    if (ctx->pc == 0x381D68u) {
        ctx->pc = 0x381D68u;
            // 0x381d68: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x381D6Cu;
        goto label_381d6c;
    }
    ctx->pc = 0x381D64u;
    SET_GPR_U32(ctx, 31, 0x381D6Cu);
    ctx->pc = 0x381D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381D64u;
            // 0x381d68: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D6Cu; }
        if (ctx->pc != 0x381D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D6Cu; }
        if (ctx->pc != 0x381D6Cu) { return; }
    }
    ctx->pc = 0x381D6Cu;
label_381d6c:
    // 0x381d6c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x381d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_381d70:
    // 0x381d70: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x381d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
label_381d74:
    // 0x381d74: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x381d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_381d78:
    // 0x381d78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x381d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_381d7c:
    // 0x381d7c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x381d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_381d80:
    // 0x381d80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x381d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381d84:
    // 0x381d84: 0xc04ce50  jal         func_133940
label_381d88:
    if (ctx->pc == 0x381D88u) {
        ctx->pc = 0x381D88u;
            // 0x381d88: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x381D8Cu;
        goto label_381d8c;
    }
    ctx->pc = 0x381D84u;
    SET_GPR_U32(ctx, 31, 0x381D8Cu);
    ctx->pc = 0x381D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381D84u;
            // 0x381d88: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D8Cu; }
        if (ctx->pc != 0x381D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D8Cu; }
        if (ctx->pc != 0x381D8Cu) { return; }
    }
    ctx->pc = 0x381D8Cu;
label_381d8c:
    // 0x381d8c: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x381d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_381d90:
    // 0x381d90: 0xc04ce80  jal         func_133A00
label_381d94:
    if (ctx->pc == 0x381D94u) {
        ctx->pc = 0x381D94u;
            // 0x381d94: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x381D98u;
        goto label_381d98;
    }
    ctx->pc = 0x381D90u;
    SET_GPR_U32(ctx, 31, 0x381D98u);
    ctx->pc = 0x381D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381D90u;
            // 0x381d94: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D98u; }
        if (ctx->pc != 0x381D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381D98u; }
        if (ctx->pc != 0x381D98u) { return; }
    }
    ctx->pc = 0x381D98u;
label_381d98:
    // 0x381d98: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x381d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_381d9c:
    // 0x381d9c: 0xc04ccf4  jal         func_1333D0
label_381da0:
    if (ctx->pc == 0x381DA0u) {
        ctx->pc = 0x381DA0u;
            // 0x381da0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x381DA4u;
        goto label_381da4;
    }
    ctx->pc = 0x381D9Cu;
    SET_GPR_U32(ctx, 31, 0x381DA4u);
    ctx->pc = 0x381DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381D9Cu;
            // 0x381da0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381DA4u; }
        if (ctx->pc != 0x381DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381DA4u; }
        if (ctx->pc != 0x381DA4u) { return; }
    }
    ctx->pc = 0x381DA4u;
label_381da4:
    // 0x381da4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x381da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_381da8:
    // 0x381da8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x381da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_381dac:
    // 0x381dac: 0xc04cca0  jal         func_133280
label_381db0:
    if (ctx->pc == 0x381DB0u) {
        ctx->pc = 0x381DB0u;
            // 0x381db0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x381DB4u;
        goto label_381db4;
    }
    ctx->pc = 0x381DACu;
    SET_GPR_U32(ctx, 31, 0x381DB4u);
    ctx->pc = 0x381DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381DACu;
            // 0x381db0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381DB4u; }
        if (ctx->pc != 0x381DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381DB4u; }
        if (ctx->pc != 0x381DB4u) { return; }
    }
    ctx->pc = 0x381DB4u;
label_381db4:
    // 0x381db4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x381db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_381db8:
    // 0x381db8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x381db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_381dbc:
    // 0x381dbc: 0x0  nop
    ctx->pc = 0x381dbcu;
    // NOP
label_381dc0:
    // 0x381dc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x381dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381dc4:
    // 0x381dc4: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
label_381dc8:
    if (ctx->pc == 0x381DC8u) {
        ctx->pc = 0x381DC8u;
            // 0x381dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381DCCu;
        goto label_381dcc;
    }
    ctx->pc = 0x381DC4u;
    {
        const bool branch_taken_0x381dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x381dc4) {
            ctx->pc = 0x381DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381DC4u;
            // 0x381dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381E20u;
            goto label_381e20;
        }
    }
    ctx->pc = 0x381DCCu;
label_381dcc:
    // 0x381dcc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x381dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381dd0:
    // 0x381dd0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x381dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_381dd4:
    // 0x381dd4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x381dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_381dd8:
    // 0x381dd8: 0x0  nop
    ctx->pc = 0x381dd8u;
    // NOP
label_381ddc:
    // 0x381ddc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x381ddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381de0:
    // 0x381de0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_381de4:
    if (ctx->pc == 0x381DE4u) {
        ctx->pc = 0x381DE8u;
        goto label_381de8;
    }
    ctx->pc = 0x381DE0u;
    {
        const bool branch_taken_0x381de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x381de0) {
            ctx->pc = 0x381E1Cu;
            goto label_381e1c;
        }
    }
    ctx->pc = 0x381DE8u;
label_381de8:
    // 0x381de8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x381de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_381dec:
    // 0x381dec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x381decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_381df0:
    // 0x381df0: 0x0  nop
    ctx->pc = 0x381df0u;
    // NOP
label_381df4:
    // 0x381df4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x381df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381df8:
    // 0x381df8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_381dfc:
    if (ctx->pc == 0x381DFCu) {
        ctx->pc = 0x381E00u;
        goto label_381e00;
    }
    ctx->pc = 0x381DF8u;
    {
        const bool branch_taken_0x381df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x381df8) {
            ctx->pc = 0x381E1Cu;
            goto label_381e1c;
        }
    }
    ctx->pc = 0x381E00u;
label_381e00:
    // 0x381e00: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x381e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381e04:
    // 0x381e04: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x381e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381e08:
    // 0x381e08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_381e0c:
    if (ctx->pc == 0x381E0Cu) {
        ctx->pc = 0x381E10u;
        goto label_381e10;
    }
    ctx->pc = 0x381E08u;
    {
        const bool branch_taken_0x381e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x381e08) {
            ctx->pc = 0x381E1Cu;
            goto label_381e1c;
        }
    }
    ctx->pc = 0x381E10u;
label_381e10:
    // 0x381e10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x381e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381e14:
    // 0x381e14: 0x4502006d  bc1fl       . + 4 + (0x6D << 2)
label_381e18:
    if (ctx->pc == 0x381E18u) {
        ctx->pc = 0x381E18u;
            // 0x381e18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x381E1Cu;
        goto label_381e1c;
    }
    ctx->pc = 0x381E14u;
    {
        const bool branch_taken_0x381e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x381e14) {
            ctx->pc = 0x381E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381E14u;
            // 0x381e18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381FCCu;
            goto label_381fcc;
        }
    }
    ctx->pc = 0x381E1Cu;
label_381e1c:
    // 0x381e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381e20:
    // 0x381e20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x381e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_381e24:
    // 0x381e24: 0xc0e32a4  jal         func_38CA90
label_381e28:
    if (ctx->pc == 0x381E28u) {
        ctx->pc = 0x381E28u;
            // 0x381e28: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x381E2Cu;
        goto label_381e2c;
    }
    ctx->pc = 0x381E24u;
    SET_GPR_U32(ctx, 31, 0x381E2Cu);
    ctx->pc = 0x381E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381E24u;
            // 0x381e28: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E2Cu; }
        if (ctx->pc != 0x381E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E2Cu; }
        if (ctx->pc != 0x381E2Cu) { return; }
    }
    ctx->pc = 0x381E2Cu;
label_381e2c:
    // 0x381e2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x381e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_381e30:
    // 0x381e30: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x381e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_381e34:
    // 0x381e34: 0xc0e082c  jal         func_3820B0
label_381e38:
    if (ctx->pc == 0x381E38u) {
        ctx->pc = 0x381E38u;
            // 0x381e38: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x381E3Cu;
        goto label_381e3c;
    }
    ctx->pc = 0x381E34u;
    SET_GPR_U32(ctx, 31, 0x381E3Cu);
    ctx->pc = 0x381E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381E34u;
            // 0x381e38: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E3Cu; }
        if (ctx->pc != 0x381E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E3Cu; }
        if (ctx->pc != 0x381E3Cu) { return; }
    }
    ctx->pc = 0x381E3Cu;
label_381e3c:
    // 0x381e3c: 0xc0e0828  jal         func_3820A0
label_381e40:
    if (ctx->pc == 0x381E40u) {
        ctx->pc = 0x381E40u;
            // 0x381e40: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x381E44u;
        goto label_381e44;
    }
    ctx->pc = 0x381E3Cu;
    SET_GPR_U32(ctx, 31, 0x381E44u);
    ctx->pc = 0x381E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381E3Cu;
            // 0x381e40: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E44u; }
        if (ctx->pc != 0x381E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E44u; }
        if (ctx->pc != 0x381E44u) { return; }
    }
    ctx->pc = 0x381E44u;
label_381e44:
    // 0x381e44: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x381e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_381e48:
    // 0x381e48: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_381e4c:
    if (ctx->pc == 0x381E4Cu) {
        ctx->pc = 0x381E4Cu;
            // 0x381e4c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x381E50u;
        goto label_381e50;
    }
    ctx->pc = 0x381E48u;
    {
        const bool branch_taken_0x381e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381e48) {
            ctx->pc = 0x381E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381E48u;
            // 0x381e4c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381E80u;
            goto label_381e80;
        }
    }
    ctx->pc = 0x381E50u;
label_381e50:
    // 0x381e50: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x381e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_381e54:
    // 0x381e54: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x381e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_381e58:
    // 0x381e58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_381e5c:
    if (ctx->pc == 0x381E5Cu) {
        ctx->pc = 0x381E60u;
        goto label_381e60;
    }
    ctx->pc = 0x381E58u;
    {
        const bool branch_taken_0x381e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381e58) {
            ctx->pc = 0x381E7Cu;
            goto label_381e7c;
        }
    }
    ctx->pc = 0x381E60u;
label_381e60:
    // 0x381e60: 0xc0dc408  jal         func_371020
label_381e64:
    if (ctx->pc == 0x381E64u) {
        ctx->pc = 0x381E64u;
            // 0x381e64: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x381E68u;
        goto label_381e68;
    }
    ctx->pc = 0x381E60u;
    SET_GPR_U32(ctx, 31, 0x381E68u);
    ctx->pc = 0x381E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381E60u;
            // 0x381e64: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E68u; }
        if (ctx->pc != 0x381E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E68u; }
        if (ctx->pc != 0x381E68u) { return; }
    }
    ctx->pc = 0x381E68u;
label_381e68:
    // 0x381e68: 0xc0e0824  jal         func_382090
label_381e6c:
    if (ctx->pc == 0x381E6Cu) {
        ctx->pc = 0x381E6Cu;
            // 0x381e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381E70u;
        goto label_381e70;
    }
    ctx->pc = 0x381E68u;
    SET_GPR_U32(ctx, 31, 0x381E70u);
    ctx->pc = 0x381E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381E68u;
            // 0x381e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E70u; }
        if (ctx->pc != 0x381E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E70u; }
        if (ctx->pc != 0x381E70u) { return; }
    }
    ctx->pc = 0x381E70u;
label_381e70:
    // 0x381e70: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x381e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_381e74:
    // 0x381e74: 0xc0e081c  jal         func_382070
label_381e78:
    if (ctx->pc == 0x381E78u) {
        ctx->pc = 0x381E78u;
            // 0x381e78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381E7Cu;
        goto label_381e7c;
    }
    ctx->pc = 0x381E74u;
    SET_GPR_U32(ctx, 31, 0x381E7Cu);
    ctx->pc = 0x381E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381E74u;
            // 0x381e78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E7Cu; }
        if (ctx->pc != 0x381E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E7Cu; }
        if (ctx->pc != 0x381E7Cu) { return; }
    }
    ctx->pc = 0x381E7Cu;
label_381e7c:
    // 0x381e7c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381e80:
    // 0x381e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x381e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381e84:
    // 0x381e84: 0xc0e080c  jal         func_382030
label_381e88:
    if (ctx->pc == 0x381E88u) {
        ctx->pc = 0x381E88u;
            // 0x381e88: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x381E8Cu;
        goto label_381e8c;
    }
    ctx->pc = 0x381E84u;
    SET_GPR_U32(ctx, 31, 0x381E8Cu);
    ctx->pc = 0x381E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381E84u;
            // 0x381e88: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E8Cu; }
        if (ctx->pc != 0x381E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381E8Cu; }
        if (ctx->pc != 0x381E8Cu) { return; }
    }
    ctx->pc = 0x381E8Cu;
label_381e8c:
    // 0x381e8c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381e90:
    // 0x381e90: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x381e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_381e94:
    // 0x381e94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x381e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381e98:
    // 0x381e98: 0xc08914c  jal         func_224530
label_381e9c:
    if (ctx->pc == 0x381E9Cu) {
        ctx->pc = 0x381E9Cu;
            // 0x381e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381EA0u;
        goto label_381ea0;
    }
    ctx->pc = 0x381E98u;
    SET_GPR_U32(ctx, 31, 0x381EA0u);
    ctx->pc = 0x381E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381E98u;
            // 0x381e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381EA0u; }
        if (ctx->pc != 0x381EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381EA0u; }
        if (ctx->pc != 0x381EA0u) { return; }
    }
    ctx->pc = 0x381EA0u;
label_381ea0:
    // 0x381ea0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x381ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_381ea4:
    // 0x381ea4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x381ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_381ea8:
    // 0x381ea8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x381ea8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_381eac:
    // 0x381eac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x381eacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_381eb0:
    // 0x381eb0: 0xc0b6df0  jal         func_2DB7C0
label_381eb4:
    if (ctx->pc == 0x381EB4u) {
        ctx->pc = 0x381EB4u;
            // 0x381eb4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x381EB8u;
        goto label_381eb8;
    }
    ctx->pc = 0x381EB0u;
    SET_GPR_U32(ctx, 31, 0x381EB8u);
    ctx->pc = 0x381EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381EB0u;
            // 0x381eb4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381EB8u; }
        if (ctx->pc != 0x381EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381EB8u; }
        if (ctx->pc != 0x381EB8u) { return; }
    }
    ctx->pc = 0x381EB8u;
label_381eb8:
    // 0x381eb8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381ebc:
    // 0x381ebc: 0xc0e07f8  jal         func_381FE0
label_381ec0:
    if (ctx->pc == 0x381EC0u) {
        ctx->pc = 0x381EC0u;
            // 0x381ec0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x381EC4u;
        goto label_381ec4;
    }
    ctx->pc = 0x381EBCu;
    SET_GPR_U32(ctx, 31, 0x381EC4u);
    ctx->pc = 0x381EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381EBCu;
            // 0x381ec0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381EC4u; }
        if (ctx->pc != 0x381EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381EC4u; }
        if (ctx->pc != 0x381EC4u) { return; }
    }
    ctx->pc = 0x381EC4u;
label_381ec4:
    // 0x381ec4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381ec8:
    // 0x381ec8: 0xc0dc3f4  jal         func_370FD0
label_381ecc:
    if (ctx->pc == 0x381ECCu) {
        ctx->pc = 0x381ECCu;
            // 0x381ecc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x381ED0u;
        goto label_381ed0;
    }
    ctx->pc = 0x381EC8u;
    SET_GPR_U32(ctx, 31, 0x381ED0u);
    ctx->pc = 0x381ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381EC8u;
            // 0x381ecc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381ED0u; }
        if (ctx->pc != 0x381ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381ED0u; }
        if (ctx->pc != 0x381ED0u) { return; }
    }
    ctx->pc = 0x381ED0u;
label_381ed0:
    // 0x381ed0: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x381ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_381ed4:
    // 0x381ed4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x381ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_381ed8:
    // 0x381ed8: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_381edc:
    if (ctx->pc == 0x381EDCu) {
        ctx->pc = 0x381EE0u;
        goto label_381ee0;
    }
    ctx->pc = 0x381ED8u;
    {
        const bool branch_taken_0x381ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x381ed8) {
            ctx->pc = 0x381FC8u;
            goto label_381fc8;
        }
    }
    ctx->pc = 0x381EE0u;
label_381ee0:
    // 0x381ee0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x381ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_381ee4:
    // 0x381ee4: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x381ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_381ee8:
    // 0x381ee8: 0x320f809  jalr        $t9
label_381eec:
    if (ctx->pc == 0x381EECu) {
        ctx->pc = 0x381EECu;
            // 0x381eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381EF0u;
        goto label_381ef0;
    }
    ctx->pc = 0x381EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381EF0u);
        ctx->pc = 0x381EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381EE8u;
            // 0x381eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x381EF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x381EF0u; }
            if (ctx->pc != 0x381EF0u) { return; }
        }
        }
    }
    ctx->pc = 0x381EF0u;
label_381ef0:
    // 0x381ef0: 0x10000035  b           . + 4 + (0x35 << 2)
label_381ef4:
    if (ctx->pc == 0x381EF4u) {
        ctx->pc = 0x381EF8u;
        goto label_381ef8;
    }
    ctx->pc = 0x381EF0u;
    {
        const bool branch_taken_0x381ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x381ef0) {
            ctx->pc = 0x381FC8u;
            goto label_381fc8;
        }
    }
    ctx->pc = 0x381EF8u;
label_381ef8:
    // 0x381ef8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x381ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_381efc:
    // 0x381efc: 0xc0e32a4  jal         func_38CA90
label_381f00:
    if (ctx->pc == 0x381F00u) {
        ctx->pc = 0x381F00u;
            // 0x381f00: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x381F04u;
        goto label_381f04;
    }
    ctx->pc = 0x381EFCu;
    SET_GPR_U32(ctx, 31, 0x381F04u);
    ctx->pc = 0x381F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381EFCu;
            // 0x381f00: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F04u; }
        if (ctx->pc != 0x381F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F04u; }
        if (ctx->pc != 0x381F04u) { return; }
    }
    ctx->pc = 0x381F04u;
label_381f04:
    // 0x381f04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x381f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_381f08:
    // 0x381f08: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x381f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_381f0c:
    // 0x381f0c: 0xc0e082c  jal         func_3820B0
label_381f10:
    if (ctx->pc == 0x381F10u) {
        ctx->pc = 0x381F10u;
            // 0x381f10: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x381F14u;
        goto label_381f14;
    }
    ctx->pc = 0x381F0Cu;
    SET_GPR_U32(ctx, 31, 0x381F14u);
    ctx->pc = 0x381F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F0Cu;
            // 0x381f10: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F14u; }
        if (ctx->pc != 0x381F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F14u; }
        if (ctx->pc != 0x381F14u) { return; }
    }
    ctx->pc = 0x381F14u;
label_381f14:
    // 0x381f14: 0xc0e0828  jal         func_3820A0
label_381f18:
    if (ctx->pc == 0x381F18u) {
        ctx->pc = 0x381F18u;
            // 0x381f18: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x381F1Cu;
        goto label_381f1c;
    }
    ctx->pc = 0x381F14u;
    SET_GPR_U32(ctx, 31, 0x381F1Cu);
    ctx->pc = 0x381F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F14u;
            // 0x381f18: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F1Cu; }
        if (ctx->pc != 0x381F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F1Cu; }
        if (ctx->pc != 0x381F1Cu) { return; }
    }
    ctx->pc = 0x381F1Cu;
label_381f1c:
    // 0x381f1c: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x381f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_381f20:
    // 0x381f20: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_381f24:
    if (ctx->pc == 0x381F24u) {
        ctx->pc = 0x381F24u;
            // 0x381f24: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x381F28u;
        goto label_381f28;
    }
    ctx->pc = 0x381F20u;
    {
        const bool branch_taken_0x381f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381f20) {
            ctx->pc = 0x381F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381F20u;
            // 0x381f24: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381F58u;
            goto label_381f58;
        }
    }
    ctx->pc = 0x381F28u;
label_381f28:
    // 0x381f28: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x381f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_381f2c:
    // 0x381f2c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x381f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_381f30:
    // 0x381f30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_381f34:
    if (ctx->pc == 0x381F34u) {
        ctx->pc = 0x381F38u;
        goto label_381f38;
    }
    ctx->pc = 0x381F30u;
    {
        const bool branch_taken_0x381f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381f30) {
            ctx->pc = 0x381F54u;
            goto label_381f54;
        }
    }
    ctx->pc = 0x381F38u;
label_381f38:
    // 0x381f38: 0xc0dc408  jal         func_371020
label_381f3c:
    if (ctx->pc == 0x381F3Cu) {
        ctx->pc = 0x381F3Cu;
            // 0x381f3c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x381F40u;
        goto label_381f40;
    }
    ctx->pc = 0x381F38u;
    SET_GPR_U32(ctx, 31, 0x381F40u);
    ctx->pc = 0x381F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F38u;
            // 0x381f3c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F40u; }
        if (ctx->pc != 0x381F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F40u; }
        if (ctx->pc != 0x381F40u) { return; }
    }
    ctx->pc = 0x381F40u;
label_381f40:
    // 0x381f40: 0xc0e0824  jal         func_382090
label_381f44:
    if (ctx->pc == 0x381F44u) {
        ctx->pc = 0x381F44u;
            // 0x381f44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381F48u;
        goto label_381f48;
    }
    ctx->pc = 0x381F40u;
    SET_GPR_U32(ctx, 31, 0x381F48u);
    ctx->pc = 0x381F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F40u;
            // 0x381f44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F48u; }
        if (ctx->pc != 0x381F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F48u; }
        if (ctx->pc != 0x381F48u) { return; }
    }
    ctx->pc = 0x381F48u;
label_381f48:
    // 0x381f48: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x381f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_381f4c:
    // 0x381f4c: 0xc0e081c  jal         func_382070
label_381f50:
    if (ctx->pc == 0x381F50u) {
        ctx->pc = 0x381F50u;
            // 0x381f50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381F54u;
        goto label_381f54;
    }
    ctx->pc = 0x381F4Cu;
    SET_GPR_U32(ctx, 31, 0x381F54u);
    ctx->pc = 0x381F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F4Cu;
            // 0x381f50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F54u; }
        if (ctx->pc != 0x381F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F54u; }
        if (ctx->pc != 0x381F54u) { return; }
    }
    ctx->pc = 0x381F54u;
label_381f54:
    // 0x381f54: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381f58:
    // 0x381f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x381f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381f5c:
    // 0x381f5c: 0xc0e080c  jal         func_382030
label_381f60:
    if (ctx->pc == 0x381F60u) {
        ctx->pc = 0x381F60u;
            // 0x381f60: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x381F64u;
        goto label_381f64;
    }
    ctx->pc = 0x381F5Cu;
    SET_GPR_U32(ctx, 31, 0x381F64u);
    ctx->pc = 0x381F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F5Cu;
            // 0x381f60: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F64u; }
        if (ctx->pc != 0x381F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F64u; }
        if (ctx->pc != 0x381F64u) { return; }
    }
    ctx->pc = 0x381F64u;
label_381f64:
    // 0x381f64: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381f68:
    // 0x381f68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x381f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_381f6c:
    // 0x381f6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x381f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381f70:
    // 0x381f70: 0xc08914c  jal         func_224530
label_381f74:
    if (ctx->pc == 0x381F74u) {
        ctx->pc = 0x381F74u;
            // 0x381f74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381F78u;
        goto label_381f78;
    }
    ctx->pc = 0x381F70u;
    SET_GPR_U32(ctx, 31, 0x381F78u);
    ctx->pc = 0x381F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F70u;
            // 0x381f74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F78u; }
        if (ctx->pc != 0x381F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F78u; }
        if (ctx->pc != 0x381F78u) { return; }
    }
    ctx->pc = 0x381F78u;
label_381f78:
    // 0x381f78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x381f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_381f7c:
    // 0x381f7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x381f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_381f80:
    // 0x381f80: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x381f80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_381f84:
    // 0x381f84: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x381f84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_381f88:
    // 0x381f88: 0xc0b6df0  jal         func_2DB7C0
label_381f8c:
    if (ctx->pc == 0x381F8Cu) {
        ctx->pc = 0x381F8Cu;
            // 0x381f8c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x381F90u;
        goto label_381f90;
    }
    ctx->pc = 0x381F88u;
    SET_GPR_U32(ctx, 31, 0x381F90u);
    ctx->pc = 0x381F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F88u;
            // 0x381f8c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F90u; }
        if (ctx->pc != 0x381F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F90u; }
        if (ctx->pc != 0x381F90u) { return; }
    }
    ctx->pc = 0x381F90u;
label_381f90:
    // 0x381f90: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381f94:
    // 0x381f94: 0xc0e07f8  jal         func_381FE0
label_381f98:
    if (ctx->pc == 0x381F98u) {
        ctx->pc = 0x381F98u;
            // 0x381f98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x381F9Cu;
        goto label_381f9c;
    }
    ctx->pc = 0x381F94u;
    SET_GPR_U32(ctx, 31, 0x381F9Cu);
    ctx->pc = 0x381F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381F94u;
            // 0x381f98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F9Cu; }
        if (ctx->pc != 0x381F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381F9Cu; }
        if (ctx->pc != 0x381F9Cu) { return; }
    }
    ctx->pc = 0x381F9Cu;
label_381f9c:
    // 0x381f9c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x381f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_381fa0:
    // 0x381fa0: 0xc0dc3f4  jal         func_370FD0
label_381fa4:
    if (ctx->pc == 0x381FA4u) {
        ctx->pc = 0x381FA4u;
            // 0x381fa4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x381FA8u;
        goto label_381fa8;
    }
    ctx->pc = 0x381FA0u;
    SET_GPR_U32(ctx, 31, 0x381FA8u);
    ctx->pc = 0x381FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381FA0u;
            // 0x381fa4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381FA8u; }
        if (ctx->pc != 0x381FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381FA8u; }
        if (ctx->pc != 0x381FA8u) { return; }
    }
    ctx->pc = 0x381FA8u;
label_381fa8:
    // 0x381fa8: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x381fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_381fac:
    // 0x381fac: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x381facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_381fb0:
    // 0x381fb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_381fb4:
    if (ctx->pc == 0x381FB4u) {
        ctx->pc = 0x381FB8u;
        goto label_381fb8;
    }
    ctx->pc = 0x381FB0u;
    {
        const bool branch_taken_0x381fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x381fb0) {
            ctx->pc = 0x381FC8u;
            goto label_381fc8;
        }
    }
    ctx->pc = 0x381FB8u;
label_381fb8:
    // 0x381fb8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x381fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_381fbc:
    // 0x381fbc: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x381fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_381fc0:
    // 0x381fc0: 0x320f809  jalr        $t9
label_381fc4:
    if (ctx->pc == 0x381FC4u) {
        ctx->pc = 0x381FC4u;
            // 0x381fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381FC8u;
        goto label_381fc8;
    }
    ctx->pc = 0x381FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381FC8u);
        ctx->pc = 0x381FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381FC0u;
            // 0x381fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x381FC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x381FC8u; }
            if (ctx->pc != 0x381FC8u) { return; }
        }
        }
    }
    ctx->pc = 0x381FC8u;
label_381fc8:
    // 0x381fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x381fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_381fcc:
    // 0x381fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381fd0:
    // 0x381fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_381fd4:
    // 0x381fd4: 0x3e00008  jr          $ra
label_381fd8:
    if (ctx->pc == 0x381FD8u) {
        ctx->pc = 0x381FD8u;
            // 0x381fd8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x381FDCu;
        goto label_381fdc;
    }
    ctx->pc = 0x381FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381FD4u;
            // 0x381fd8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381FDCu;
label_381fdc:
    // 0x381fdc: 0x0  nop
    ctx->pc = 0x381fdcu;
    // NOP
}
