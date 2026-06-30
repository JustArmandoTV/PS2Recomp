#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343AB0
// Address: 0x343ab0 - 0x344130
void sub_00343AB0_0x343ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343AB0_0x343ab0");
#endif

    switch (ctx->pc) {
        case 0x343ab0u: goto label_343ab0;
        case 0x343ab4u: goto label_343ab4;
        case 0x343ab8u: goto label_343ab8;
        case 0x343abcu: goto label_343abc;
        case 0x343ac0u: goto label_343ac0;
        case 0x343ac4u: goto label_343ac4;
        case 0x343ac8u: goto label_343ac8;
        case 0x343accu: goto label_343acc;
        case 0x343ad0u: goto label_343ad0;
        case 0x343ad4u: goto label_343ad4;
        case 0x343ad8u: goto label_343ad8;
        case 0x343adcu: goto label_343adc;
        case 0x343ae0u: goto label_343ae0;
        case 0x343ae4u: goto label_343ae4;
        case 0x343ae8u: goto label_343ae8;
        case 0x343aecu: goto label_343aec;
        case 0x343af0u: goto label_343af0;
        case 0x343af4u: goto label_343af4;
        case 0x343af8u: goto label_343af8;
        case 0x343afcu: goto label_343afc;
        case 0x343b00u: goto label_343b00;
        case 0x343b04u: goto label_343b04;
        case 0x343b08u: goto label_343b08;
        case 0x343b0cu: goto label_343b0c;
        case 0x343b10u: goto label_343b10;
        case 0x343b14u: goto label_343b14;
        case 0x343b18u: goto label_343b18;
        case 0x343b1cu: goto label_343b1c;
        case 0x343b20u: goto label_343b20;
        case 0x343b24u: goto label_343b24;
        case 0x343b28u: goto label_343b28;
        case 0x343b2cu: goto label_343b2c;
        case 0x343b30u: goto label_343b30;
        case 0x343b34u: goto label_343b34;
        case 0x343b38u: goto label_343b38;
        case 0x343b3cu: goto label_343b3c;
        case 0x343b40u: goto label_343b40;
        case 0x343b44u: goto label_343b44;
        case 0x343b48u: goto label_343b48;
        case 0x343b4cu: goto label_343b4c;
        case 0x343b50u: goto label_343b50;
        case 0x343b54u: goto label_343b54;
        case 0x343b58u: goto label_343b58;
        case 0x343b5cu: goto label_343b5c;
        case 0x343b60u: goto label_343b60;
        case 0x343b64u: goto label_343b64;
        case 0x343b68u: goto label_343b68;
        case 0x343b6cu: goto label_343b6c;
        case 0x343b70u: goto label_343b70;
        case 0x343b74u: goto label_343b74;
        case 0x343b78u: goto label_343b78;
        case 0x343b7cu: goto label_343b7c;
        case 0x343b80u: goto label_343b80;
        case 0x343b84u: goto label_343b84;
        case 0x343b88u: goto label_343b88;
        case 0x343b8cu: goto label_343b8c;
        case 0x343b90u: goto label_343b90;
        case 0x343b94u: goto label_343b94;
        case 0x343b98u: goto label_343b98;
        case 0x343b9cu: goto label_343b9c;
        case 0x343ba0u: goto label_343ba0;
        case 0x343ba4u: goto label_343ba4;
        case 0x343ba8u: goto label_343ba8;
        case 0x343bacu: goto label_343bac;
        case 0x343bb0u: goto label_343bb0;
        case 0x343bb4u: goto label_343bb4;
        case 0x343bb8u: goto label_343bb8;
        case 0x343bbcu: goto label_343bbc;
        case 0x343bc0u: goto label_343bc0;
        case 0x343bc4u: goto label_343bc4;
        case 0x343bc8u: goto label_343bc8;
        case 0x343bccu: goto label_343bcc;
        case 0x343bd0u: goto label_343bd0;
        case 0x343bd4u: goto label_343bd4;
        case 0x343bd8u: goto label_343bd8;
        case 0x343bdcu: goto label_343bdc;
        case 0x343be0u: goto label_343be0;
        case 0x343be4u: goto label_343be4;
        case 0x343be8u: goto label_343be8;
        case 0x343becu: goto label_343bec;
        case 0x343bf0u: goto label_343bf0;
        case 0x343bf4u: goto label_343bf4;
        case 0x343bf8u: goto label_343bf8;
        case 0x343bfcu: goto label_343bfc;
        case 0x343c00u: goto label_343c00;
        case 0x343c04u: goto label_343c04;
        case 0x343c08u: goto label_343c08;
        case 0x343c0cu: goto label_343c0c;
        case 0x343c10u: goto label_343c10;
        case 0x343c14u: goto label_343c14;
        case 0x343c18u: goto label_343c18;
        case 0x343c1cu: goto label_343c1c;
        case 0x343c20u: goto label_343c20;
        case 0x343c24u: goto label_343c24;
        case 0x343c28u: goto label_343c28;
        case 0x343c2cu: goto label_343c2c;
        case 0x343c30u: goto label_343c30;
        case 0x343c34u: goto label_343c34;
        case 0x343c38u: goto label_343c38;
        case 0x343c3cu: goto label_343c3c;
        case 0x343c40u: goto label_343c40;
        case 0x343c44u: goto label_343c44;
        case 0x343c48u: goto label_343c48;
        case 0x343c4cu: goto label_343c4c;
        case 0x343c50u: goto label_343c50;
        case 0x343c54u: goto label_343c54;
        case 0x343c58u: goto label_343c58;
        case 0x343c5cu: goto label_343c5c;
        case 0x343c60u: goto label_343c60;
        case 0x343c64u: goto label_343c64;
        case 0x343c68u: goto label_343c68;
        case 0x343c6cu: goto label_343c6c;
        case 0x343c70u: goto label_343c70;
        case 0x343c74u: goto label_343c74;
        case 0x343c78u: goto label_343c78;
        case 0x343c7cu: goto label_343c7c;
        case 0x343c80u: goto label_343c80;
        case 0x343c84u: goto label_343c84;
        case 0x343c88u: goto label_343c88;
        case 0x343c8cu: goto label_343c8c;
        case 0x343c90u: goto label_343c90;
        case 0x343c94u: goto label_343c94;
        case 0x343c98u: goto label_343c98;
        case 0x343c9cu: goto label_343c9c;
        case 0x343ca0u: goto label_343ca0;
        case 0x343ca4u: goto label_343ca4;
        case 0x343ca8u: goto label_343ca8;
        case 0x343cacu: goto label_343cac;
        case 0x343cb0u: goto label_343cb0;
        case 0x343cb4u: goto label_343cb4;
        case 0x343cb8u: goto label_343cb8;
        case 0x343cbcu: goto label_343cbc;
        case 0x343cc0u: goto label_343cc0;
        case 0x343cc4u: goto label_343cc4;
        case 0x343cc8u: goto label_343cc8;
        case 0x343cccu: goto label_343ccc;
        case 0x343cd0u: goto label_343cd0;
        case 0x343cd4u: goto label_343cd4;
        case 0x343cd8u: goto label_343cd8;
        case 0x343cdcu: goto label_343cdc;
        case 0x343ce0u: goto label_343ce0;
        case 0x343ce4u: goto label_343ce4;
        case 0x343ce8u: goto label_343ce8;
        case 0x343cecu: goto label_343cec;
        case 0x343cf0u: goto label_343cf0;
        case 0x343cf4u: goto label_343cf4;
        case 0x343cf8u: goto label_343cf8;
        case 0x343cfcu: goto label_343cfc;
        case 0x343d00u: goto label_343d00;
        case 0x343d04u: goto label_343d04;
        case 0x343d08u: goto label_343d08;
        case 0x343d0cu: goto label_343d0c;
        case 0x343d10u: goto label_343d10;
        case 0x343d14u: goto label_343d14;
        case 0x343d18u: goto label_343d18;
        case 0x343d1cu: goto label_343d1c;
        case 0x343d20u: goto label_343d20;
        case 0x343d24u: goto label_343d24;
        case 0x343d28u: goto label_343d28;
        case 0x343d2cu: goto label_343d2c;
        case 0x343d30u: goto label_343d30;
        case 0x343d34u: goto label_343d34;
        case 0x343d38u: goto label_343d38;
        case 0x343d3cu: goto label_343d3c;
        case 0x343d40u: goto label_343d40;
        case 0x343d44u: goto label_343d44;
        case 0x343d48u: goto label_343d48;
        case 0x343d4cu: goto label_343d4c;
        case 0x343d50u: goto label_343d50;
        case 0x343d54u: goto label_343d54;
        case 0x343d58u: goto label_343d58;
        case 0x343d5cu: goto label_343d5c;
        case 0x343d60u: goto label_343d60;
        case 0x343d64u: goto label_343d64;
        case 0x343d68u: goto label_343d68;
        case 0x343d6cu: goto label_343d6c;
        case 0x343d70u: goto label_343d70;
        case 0x343d74u: goto label_343d74;
        case 0x343d78u: goto label_343d78;
        case 0x343d7cu: goto label_343d7c;
        case 0x343d80u: goto label_343d80;
        case 0x343d84u: goto label_343d84;
        case 0x343d88u: goto label_343d88;
        case 0x343d8cu: goto label_343d8c;
        case 0x343d90u: goto label_343d90;
        case 0x343d94u: goto label_343d94;
        case 0x343d98u: goto label_343d98;
        case 0x343d9cu: goto label_343d9c;
        case 0x343da0u: goto label_343da0;
        case 0x343da4u: goto label_343da4;
        case 0x343da8u: goto label_343da8;
        case 0x343dacu: goto label_343dac;
        case 0x343db0u: goto label_343db0;
        case 0x343db4u: goto label_343db4;
        case 0x343db8u: goto label_343db8;
        case 0x343dbcu: goto label_343dbc;
        case 0x343dc0u: goto label_343dc0;
        case 0x343dc4u: goto label_343dc4;
        case 0x343dc8u: goto label_343dc8;
        case 0x343dccu: goto label_343dcc;
        case 0x343dd0u: goto label_343dd0;
        case 0x343dd4u: goto label_343dd4;
        case 0x343dd8u: goto label_343dd8;
        case 0x343ddcu: goto label_343ddc;
        case 0x343de0u: goto label_343de0;
        case 0x343de4u: goto label_343de4;
        case 0x343de8u: goto label_343de8;
        case 0x343decu: goto label_343dec;
        case 0x343df0u: goto label_343df0;
        case 0x343df4u: goto label_343df4;
        case 0x343df8u: goto label_343df8;
        case 0x343dfcu: goto label_343dfc;
        case 0x343e00u: goto label_343e00;
        case 0x343e04u: goto label_343e04;
        case 0x343e08u: goto label_343e08;
        case 0x343e0cu: goto label_343e0c;
        case 0x343e10u: goto label_343e10;
        case 0x343e14u: goto label_343e14;
        case 0x343e18u: goto label_343e18;
        case 0x343e1cu: goto label_343e1c;
        case 0x343e20u: goto label_343e20;
        case 0x343e24u: goto label_343e24;
        case 0x343e28u: goto label_343e28;
        case 0x343e2cu: goto label_343e2c;
        case 0x343e30u: goto label_343e30;
        case 0x343e34u: goto label_343e34;
        case 0x343e38u: goto label_343e38;
        case 0x343e3cu: goto label_343e3c;
        case 0x343e40u: goto label_343e40;
        case 0x343e44u: goto label_343e44;
        case 0x343e48u: goto label_343e48;
        case 0x343e4cu: goto label_343e4c;
        case 0x343e50u: goto label_343e50;
        case 0x343e54u: goto label_343e54;
        case 0x343e58u: goto label_343e58;
        case 0x343e5cu: goto label_343e5c;
        case 0x343e60u: goto label_343e60;
        case 0x343e64u: goto label_343e64;
        case 0x343e68u: goto label_343e68;
        case 0x343e6cu: goto label_343e6c;
        case 0x343e70u: goto label_343e70;
        case 0x343e74u: goto label_343e74;
        case 0x343e78u: goto label_343e78;
        case 0x343e7cu: goto label_343e7c;
        case 0x343e80u: goto label_343e80;
        case 0x343e84u: goto label_343e84;
        case 0x343e88u: goto label_343e88;
        case 0x343e8cu: goto label_343e8c;
        case 0x343e90u: goto label_343e90;
        case 0x343e94u: goto label_343e94;
        case 0x343e98u: goto label_343e98;
        case 0x343e9cu: goto label_343e9c;
        case 0x343ea0u: goto label_343ea0;
        case 0x343ea4u: goto label_343ea4;
        case 0x343ea8u: goto label_343ea8;
        case 0x343eacu: goto label_343eac;
        case 0x343eb0u: goto label_343eb0;
        case 0x343eb4u: goto label_343eb4;
        case 0x343eb8u: goto label_343eb8;
        case 0x343ebcu: goto label_343ebc;
        case 0x343ec0u: goto label_343ec0;
        case 0x343ec4u: goto label_343ec4;
        case 0x343ec8u: goto label_343ec8;
        case 0x343eccu: goto label_343ecc;
        case 0x343ed0u: goto label_343ed0;
        case 0x343ed4u: goto label_343ed4;
        case 0x343ed8u: goto label_343ed8;
        case 0x343edcu: goto label_343edc;
        case 0x343ee0u: goto label_343ee0;
        case 0x343ee4u: goto label_343ee4;
        case 0x343ee8u: goto label_343ee8;
        case 0x343eecu: goto label_343eec;
        case 0x343ef0u: goto label_343ef0;
        case 0x343ef4u: goto label_343ef4;
        case 0x343ef8u: goto label_343ef8;
        case 0x343efcu: goto label_343efc;
        case 0x343f00u: goto label_343f00;
        case 0x343f04u: goto label_343f04;
        case 0x343f08u: goto label_343f08;
        case 0x343f0cu: goto label_343f0c;
        case 0x343f10u: goto label_343f10;
        case 0x343f14u: goto label_343f14;
        case 0x343f18u: goto label_343f18;
        case 0x343f1cu: goto label_343f1c;
        case 0x343f20u: goto label_343f20;
        case 0x343f24u: goto label_343f24;
        case 0x343f28u: goto label_343f28;
        case 0x343f2cu: goto label_343f2c;
        case 0x343f30u: goto label_343f30;
        case 0x343f34u: goto label_343f34;
        case 0x343f38u: goto label_343f38;
        case 0x343f3cu: goto label_343f3c;
        case 0x343f40u: goto label_343f40;
        case 0x343f44u: goto label_343f44;
        case 0x343f48u: goto label_343f48;
        case 0x343f4cu: goto label_343f4c;
        case 0x343f50u: goto label_343f50;
        case 0x343f54u: goto label_343f54;
        case 0x343f58u: goto label_343f58;
        case 0x343f5cu: goto label_343f5c;
        case 0x343f60u: goto label_343f60;
        case 0x343f64u: goto label_343f64;
        case 0x343f68u: goto label_343f68;
        case 0x343f6cu: goto label_343f6c;
        case 0x343f70u: goto label_343f70;
        case 0x343f74u: goto label_343f74;
        case 0x343f78u: goto label_343f78;
        case 0x343f7cu: goto label_343f7c;
        case 0x343f80u: goto label_343f80;
        case 0x343f84u: goto label_343f84;
        case 0x343f88u: goto label_343f88;
        case 0x343f8cu: goto label_343f8c;
        case 0x343f90u: goto label_343f90;
        case 0x343f94u: goto label_343f94;
        case 0x343f98u: goto label_343f98;
        case 0x343f9cu: goto label_343f9c;
        case 0x343fa0u: goto label_343fa0;
        case 0x343fa4u: goto label_343fa4;
        case 0x343fa8u: goto label_343fa8;
        case 0x343facu: goto label_343fac;
        case 0x343fb0u: goto label_343fb0;
        case 0x343fb4u: goto label_343fb4;
        case 0x343fb8u: goto label_343fb8;
        case 0x343fbcu: goto label_343fbc;
        case 0x343fc0u: goto label_343fc0;
        case 0x343fc4u: goto label_343fc4;
        case 0x343fc8u: goto label_343fc8;
        case 0x343fccu: goto label_343fcc;
        case 0x343fd0u: goto label_343fd0;
        case 0x343fd4u: goto label_343fd4;
        case 0x343fd8u: goto label_343fd8;
        case 0x343fdcu: goto label_343fdc;
        case 0x343fe0u: goto label_343fe0;
        case 0x343fe4u: goto label_343fe4;
        case 0x343fe8u: goto label_343fe8;
        case 0x343fecu: goto label_343fec;
        case 0x343ff0u: goto label_343ff0;
        case 0x343ff4u: goto label_343ff4;
        case 0x343ff8u: goto label_343ff8;
        case 0x343ffcu: goto label_343ffc;
        case 0x344000u: goto label_344000;
        case 0x344004u: goto label_344004;
        case 0x344008u: goto label_344008;
        case 0x34400cu: goto label_34400c;
        case 0x344010u: goto label_344010;
        case 0x344014u: goto label_344014;
        case 0x344018u: goto label_344018;
        case 0x34401cu: goto label_34401c;
        case 0x344020u: goto label_344020;
        case 0x344024u: goto label_344024;
        case 0x344028u: goto label_344028;
        case 0x34402cu: goto label_34402c;
        case 0x344030u: goto label_344030;
        case 0x344034u: goto label_344034;
        case 0x344038u: goto label_344038;
        case 0x34403cu: goto label_34403c;
        case 0x344040u: goto label_344040;
        case 0x344044u: goto label_344044;
        case 0x344048u: goto label_344048;
        case 0x34404cu: goto label_34404c;
        case 0x344050u: goto label_344050;
        case 0x344054u: goto label_344054;
        case 0x344058u: goto label_344058;
        case 0x34405cu: goto label_34405c;
        case 0x344060u: goto label_344060;
        case 0x344064u: goto label_344064;
        case 0x344068u: goto label_344068;
        case 0x34406cu: goto label_34406c;
        case 0x344070u: goto label_344070;
        case 0x344074u: goto label_344074;
        case 0x344078u: goto label_344078;
        case 0x34407cu: goto label_34407c;
        case 0x344080u: goto label_344080;
        case 0x344084u: goto label_344084;
        case 0x344088u: goto label_344088;
        case 0x34408cu: goto label_34408c;
        case 0x344090u: goto label_344090;
        case 0x344094u: goto label_344094;
        case 0x344098u: goto label_344098;
        case 0x34409cu: goto label_34409c;
        case 0x3440a0u: goto label_3440a0;
        case 0x3440a4u: goto label_3440a4;
        case 0x3440a8u: goto label_3440a8;
        case 0x3440acu: goto label_3440ac;
        case 0x3440b0u: goto label_3440b0;
        case 0x3440b4u: goto label_3440b4;
        case 0x3440b8u: goto label_3440b8;
        case 0x3440bcu: goto label_3440bc;
        case 0x3440c0u: goto label_3440c0;
        case 0x3440c4u: goto label_3440c4;
        case 0x3440c8u: goto label_3440c8;
        case 0x3440ccu: goto label_3440cc;
        case 0x3440d0u: goto label_3440d0;
        case 0x3440d4u: goto label_3440d4;
        case 0x3440d8u: goto label_3440d8;
        case 0x3440dcu: goto label_3440dc;
        case 0x3440e0u: goto label_3440e0;
        case 0x3440e4u: goto label_3440e4;
        case 0x3440e8u: goto label_3440e8;
        case 0x3440ecu: goto label_3440ec;
        case 0x3440f0u: goto label_3440f0;
        case 0x3440f4u: goto label_3440f4;
        case 0x3440f8u: goto label_3440f8;
        case 0x3440fcu: goto label_3440fc;
        case 0x344100u: goto label_344100;
        case 0x344104u: goto label_344104;
        case 0x344108u: goto label_344108;
        case 0x34410cu: goto label_34410c;
        case 0x344110u: goto label_344110;
        case 0x344114u: goto label_344114;
        case 0x344118u: goto label_344118;
        case 0x34411cu: goto label_34411c;
        case 0x344120u: goto label_344120;
        case 0x344124u: goto label_344124;
        case 0x344128u: goto label_344128;
        case 0x34412cu: goto label_34412c;
        default: break;
    }

    ctx->pc = 0x343ab0u;

label_343ab0:
    // 0x343ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_343ab4:
    // 0x343ab4: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x343ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_343ab8:
    // 0x343ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_343abc:
    // 0x343abc: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x343abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_343ac0:
    // 0x343ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x343ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_343ac4:
    // 0x343ac4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_343ac8:
    if (ctx->pc == 0x343AC8u) {
        ctx->pc = 0x343AC8u;
            // 0x343ac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343ACCu;
        goto label_343acc;
    }
    ctx->pc = 0x343AC4u;
    {
        const bool branch_taken_0x343ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343AC4u;
            // 0x343ac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ac4) {
            ctx->pc = 0x343AD4u;
            goto label_343ad4;
        }
    }
    ctx->pc = 0x343ACCu;
label_343acc:
    // 0x343acc: 0x10000002  b           . + 4 + (0x2 << 2)
label_343ad0:
    if (ctx->pc == 0x343AD0u) {
        ctx->pc = 0x343AD0u;
            // 0x343ad0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343AD4u;
        goto label_343ad4;
    }
    ctx->pc = 0x343ACCu;
    {
        const bool branch_taken_0x343acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343ACCu;
            // 0x343ad0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343acc) {
            ctx->pc = 0x343AD8u;
            goto label_343ad8;
        }
    }
    ctx->pc = 0x343AD4u;
label_343ad4:
    // 0x343ad4: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x343ad4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_343ad8:
    // 0x343ad8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x343ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_343adc:
    // 0x343adc: 0xc10ca68  jal         func_4329A0
label_343ae0:
    if (ctx->pc == 0x343AE0u) {
        ctx->pc = 0x343AE0u;
            // 0x343ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343AE4u;
        goto label_343ae4;
    }
    ctx->pc = 0x343ADCu;
    SET_GPR_U32(ctx, 31, 0x343AE4u);
    ctx->pc = 0x343AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343ADCu;
            // 0x343ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343AE4u; }
        if (ctx->pc != 0x343AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343AE4u; }
        if (ctx->pc != 0x343AE4u) { return; }
    }
    ctx->pc = 0x343AE4u;
label_343ae4:
    // 0x343ae4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x343ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_343ae8:
    // 0x343ae8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x343ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_343aec:
    // 0x343aec: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x343aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_343af0:
    // 0x343af0: 0x24425680  addiu       $v0, $v0, 0x5680
    ctx->pc = 0x343af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22144));
label_343af4:
    // 0x343af4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x343af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_343af8:
    // 0x343af8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x343af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_343afc:
    // 0x343afc: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x343afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
label_343b00:
    // 0x343b00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x343b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_343b04:
    // 0x343b04: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x343b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_343b08:
    // 0x343b08: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x343b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_343b0c:
    // 0x343b0c: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x343b0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_343b10:
    // 0x343b10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_343b14:
    if (ctx->pc == 0x343B14u) {
        ctx->pc = 0x343B18u;
        goto label_343b18;
    }
    ctx->pc = 0x343B10u;
    {
        const bool branch_taken_0x343b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343b10) {
            ctx->pc = 0x343B34u;
            goto label_343b34;
        }
    }
    ctx->pc = 0x343B18u;
label_343b18:
    // 0x343b18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x343b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_343b1c:
    // 0x343b1c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x343b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_343b20:
    // 0x343b20: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x343b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
label_343b24:
    // 0x343b24: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x343b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
label_343b28:
    // 0x343b28: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x343b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_343b2c:
    // 0x343b2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_343b30:
    if (ctx->pc == 0x343B30u) {
        ctx->pc = 0x343B30u;
            // 0x343b30: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->pc = 0x343B34u;
        goto label_343b34;
    }
    ctx->pc = 0x343B2Cu;
    {
        const bool branch_taken_0x343b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343B2Cu;
            // 0x343b30: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b2c) {
            ctx->pc = 0x343B4Cu;
            goto label_343b4c;
        }
    }
    ctx->pc = 0x343B34u;
label_343b34:
    // 0x343b34: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x343b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_343b38:
    // 0x343b38: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x343b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_343b3c:
    // 0x343b3c: 0x24630a10  addiu       $v1, $v1, 0xA10
    ctx->pc = 0x343b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
label_343b40:
    // 0x343b40: 0x24420b80  addiu       $v0, $v0, 0xB80
    ctx->pc = 0x343b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2944));
label_343b44:
    // 0x343b44: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x343b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_343b48:
    // 0x343b48: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x343b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_343b4c:
    // 0x343b4c: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x343b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_343b50:
    // 0x343b50: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x343b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_343b54:
    // 0x343b54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x343b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343b58:
    // 0x343b58: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x343b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_343b5c:
    // 0x343b5c: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x343b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
label_343b60:
    // 0x343b60: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x343b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_343b64:
    // 0x343b64: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x343b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_343b68:
    // 0x343b68: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x343b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_343b6c:
    // 0x343b6c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x343b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_343b70:
    // 0x343b70: 0xa6000074  sh          $zero, 0x74($s0)
    ctx->pc = 0x343b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 0));
label_343b74:
    // 0x343b74: 0xa6000076  sh          $zero, 0x76($s0)
    ctx->pc = 0x343b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 0));
label_343b78:
    // 0x343b78: 0xa6000078  sh          $zero, 0x78($s0)
    ctx->pc = 0x343b78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
label_343b7c:
    // 0x343b7c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x343b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_343b80:
    // 0x343b80: 0x96050076  lhu         $a1, 0x76($s0)
    ctx->pc = 0x343b80u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
label_343b84:
    // 0x343b84: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x343b84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_343b88:
    // 0x343b88: 0x2c640002  sltiu       $a0, $v1, 0x2
    ctx->pc = 0x343b88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_343b8c:
    // 0x343b8c: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x343b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_343b90:
    // 0x343b90: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x343b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_343b94:
    // 0x343b94: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x343b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_343b98:
    // 0x343b98: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x343b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_343b9c:
    // 0x343b9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x343b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_343ba0:
    // 0x343ba0: 0xc51806  srlv        $v1, $a1, $a2
    ctx->pc = 0x343ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_343ba4:
    // 0x343ba4: 0xa6030076  sh          $v1, 0x76($s0)
    ctx->pc = 0x343ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 3));
label_343ba8:
    // 0x343ba8: 0x96030078  lhu         $v1, 0x78($s0)
    ctx->pc = 0x343ba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
label_343bac:
    // 0x343bac: 0xc31806  srlv        $v1, $v1, $a2
    ctx->pc = 0x343bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_343bb0:
    // 0x343bb0: 0xa6030078  sh          $v1, 0x78($s0)
    ctx->pc = 0x343bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 3));
label_343bb4:
    // 0x343bb4: 0x96030074  lhu         $v1, 0x74($s0)
    ctx->pc = 0x343bb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
label_343bb8:
    // 0x343bb8: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x343bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_343bbc:
    // 0x343bbc: 0xa6030074  sh          $v1, 0x74($s0)
    ctx->pc = 0x343bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 3));
label_343bc0:
    // 0x343bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_343bc4:
    // 0x343bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_343bc8:
    // 0x343bc8: 0x3e00008  jr          $ra
label_343bcc:
    if (ctx->pc == 0x343BCCu) {
        ctx->pc = 0x343BCCu;
            // 0x343bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x343BD0u;
        goto label_343bd0;
    }
    ctx->pc = 0x343BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343BC8u;
            // 0x343bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x343BD0u;
label_343bd0:
    // 0x343bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x343bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_343bd4:
    // 0x343bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x343bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_343bd8:
    // 0x343bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x343bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_343bdc:
    // 0x343bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x343bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_343be0:
    // 0x343be0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x343be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343be4:
    // 0x343be4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_343be8:
    if (ctx->pc == 0x343BE8u) {
        ctx->pc = 0x343BE8u;
            // 0x343be8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343BECu;
        goto label_343bec;
    }
    ctx->pc = 0x343BE4u;
    {
        const bool branch_taken_0x343be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x343BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343BE4u;
            // 0x343be8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343be4) {
            ctx->pc = 0x343C28u;
            goto label_343c28;
        }
    }
    ctx->pc = 0x343BECu;
label_343bec:
    // 0x343bec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x343becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_343bf0:
    // 0x343bf0: 0x244256b0  addiu       $v0, $v0, 0x56B0
    ctx->pc = 0x343bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22192));
label_343bf4:
    // 0x343bf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_343bf8:
    if (ctx->pc == 0x343BF8u) {
        ctx->pc = 0x343BF8u;
            // 0x343bf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x343BFCu;
        goto label_343bfc;
    }
    ctx->pc = 0x343BF4u;
    {
        const bool branch_taken_0x343bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x343BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343BF4u;
            // 0x343bf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343bf4) {
            ctx->pc = 0x343C10u;
            goto label_343c10;
        }
    }
    ctx->pc = 0x343BFCu;
label_343bfc:
    // 0x343bfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x343bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_343c00:
    // 0x343c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343c04:
    // 0x343c04: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x343c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_343c08:
    // 0x343c08: 0xc057a68  jal         func_15E9A0
label_343c0c:
    if (ctx->pc == 0x343C0Cu) {
        ctx->pc = 0x343C0Cu;
            // 0x343c0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x343C10u;
        goto label_343c10;
    }
    ctx->pc = 0x343C08u;
    SET_GPR_U32(ctx, 31, 0x343C10u);
    ctx->pc = 0x343C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343C08u;
            // 0x343c0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C10u; }
        if (ctx->pc != 0x343C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C10u; }
        if (ctx->pc != 0x343C10u) { return; }
    }
    ctx->pc = 0x343C10u;
label_343c10:
    // 0x343c10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x343c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_343c14:
    // 0x343c14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x343c14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_343c18:
    // 0x343c18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_343c1c:
    if (ctx->pc == 0x343C1Cu) {
        ctx->pc = 0x343C1Cu;
            // 0x343c1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343C20u;
        goto label_343c20;
    }
    ctx->pc = 0x343C18u;
    {
        const bool branch_taken_0x343c18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x343c18) {
            ctx->pc = 0x343C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343C18u;
            // 0x343c1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343C2Cu;
            goto label_343c2c;
        }
    }
    ctx->pc = 0x343C20u;
label_343c20:
    // 0x343c20: 0xc0400a8  jal         func_1002A0
label_343c24:
    if (ctx->pc == 0x343C24u) {
        ctx->pc = 0x343C24u;
            // 0x343c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343C28u;
        goto label_343c28;
    }
    ctx->pc = 0x343C20u;
    SET_GPR_U32(ctx, 31, 0x343C28u);
    ctx->pc = 0x343C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343C20u;
            // 0x343c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C28u; }
        if (ctx->pc != 0x343C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C28u; }
        if (ctx->pc != 0x343C28u) { return; }
    }
    ctx->pc = 0x343C28u;
label_343c28:
    // 0x343c28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x343c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_343c2c:
    // 0x343c2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x343c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_343c30:
    // 0x343c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x343c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_343c34:
    // 0x343c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_343c38:
    // 0x343c38: 0x3e00008  jr          $ra
label_343c3c:
    if (ctx->pc == 0x343C3Cu) {
        ctx->pc = 0x343C3Cu;
            // 0x343c3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x343C40u;
        goto label_343c40;
    }
    ctx->pc = 0x343C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343C38u;
            // 0x343c3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x343C40u;
label_343c40:
    // 0x343c40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x343c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_343c44:
    // 0x343c44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x343c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_343c48:
    // 0x343c48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x343c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_343c4c:
    // 0x343c4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x343c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_343c50:
    // 0x343c50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x343c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_343c54:
    // 0x343c54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x343c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_343c58:
    // 0x343c58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x343c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_343c5c:
    // 0x343c5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x343c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_343c60:
    // 0x343c60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x343c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_343c64:
    // 0x343c64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x343c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_343c68:
    // 0x343c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x343c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_343c6c:
    // 0x343c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x343c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_343c70:
    // 0x343c70: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x343c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_343c74:
    // 0x343c74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_343c78:
    if (ctx->pc == 0x343C78u) {
        ctx->pc = 0x343C78u;
            // 0x343c78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343C7Cu;
        goto label_343c7c;
    }
    ctx->pc = 0x343C74u;
    {
        const bool branch_taken_0x343c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343C74u;
            // 0x343c78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c74) {
            ctx->pc = 0x343C88u;
            goto label_343c88;
        }
    }
    ctx->pc = 0x343C7Cu;
label_343c7c:
    // 0x343c7c: 0x90630c75  lbu         $v1, 0xC75($v1)
    ctx->pc = 0x343c7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3189)));
label_343c80:
    // 0x343c80: 0x50600120  beql        $v1, $zero, . + 4 + (0x120 << 2)
label_343c84:
    if (ctx->pc == 0x343C84u) {
        ctx->pc = 0x343C84u;
            // 0x343c84: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x343C88u;
        goto label_343c88;
    }
    ctx->pc = 0x343C80u;
    {
        const bool branch_taken_0x343c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x343c80) {
            ctx->pc = 0x343C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343C80u;
            // 0x343c84: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344104u;
            goto label_344104;
        }
    }
    ctx->pc = 0x343C88u;
label_343c88:
    // 0x343c88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x343c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_343c8c:
    // 0x343c8c: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x343c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_343c90:
    // 0x343c90: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x343c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_343c94:
    // 0x343c94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x343c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_343c98:
    // 0x343c98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_343c9c:
    if (ctx->pc == 0x343C9Cu) {
        ctx->pc = 0x343CA0u;
        goto label_343ca0;
    }
    ctx->pc = 0x343C98u;
    {
        const bool branch_taken_0x343c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343c98) {
            ctx->pc = 0x343CB4u;
            goto label_343cb4;
        }
    }
    ctx->pc = 0x343CA0u;
label_343ca0:
    // 0x343ca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x343ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_343ca4:
    // 0x343ca4: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x343ca4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_343ca8:
    // 0x343ca8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x343ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_343cac:
    // 0x343cac: 0x10000005  b           . + 4 + (0x5 << 2)
label_343cb0:
    if (ctx->pc == 0x343CB0u) {
        ctx->pc = 0x343CB0u;
            // 0x343cb0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x343CB4u;
        goto label_343cb4;
    }
    ctx->pc = 0x343CACu;
    {
        const bool branch_taken_0x343cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343CACu;
            // 0x343cb0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343cac) {
            ctx->pc = 0x343CC4u;
            goto label_343cc4;
        }
    }
    ctx->pc = 0x343CB4u;
label_343cb4:
    // 0x343cb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x343cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_343cb8:
    // 0x343cb8: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x343cb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_343cbc:
    // 0x343cbc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x343cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_343cc0:
    // 0x343cc0: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x343cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_343cc4:
    // 0x343cc4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x343cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_343cc8:
    // 0x343cc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x343cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_343ccc:
    // 0x343ccc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x343cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_343cd0:
    // 0x343cd0: 0x9c453ea0  lwu         $a1, 0x3EA0($v0)
    ctx->pc = 0x343cd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_343cd4:
    // 0x343cd4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x343cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_343cd8:
    // 0x343cd8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x343cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_343cdc:
    // 0x343cdc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x343cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_343ce0:
    // 0x343ce0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x343ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_343ce4:
    // 0x343ce4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x343ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_343ce8:
    // 0x343ce8: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x343ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_343cec:
    // 0x343cec: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x343cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_343cf0:
    // 0x343cf0: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x343cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_343cf4:
    // 0x343cf4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x343cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_343cf8:
    // 0x343cf8: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x343cf8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
label_343cfc:
    // 0x343cfc: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x343cfcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_343d00:
    // 0x343d00: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x343d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_343d04:
    // 0x343d04: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x343d04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
label_343d08:
    // 0x343d08: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x343d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_343d0c:
    // 0x343d0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x343d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343d10:
    // 0x343d10: 0xc0574d8  jal         func_15D360
label_343d14:
    if (ctx->pc == 0x343D14u) {
        ctx->pc = 0x343D14u;
            // 0x343d14: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->pc = 0x343D18u;
        goto label_343d18;
    }
    ctx->pc = 0x343D10u;
    SET_GPR_U32(ctx, 31, 0x343D18u);
    ctx->pc = 0x343D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343D10u;
            // 0x343d14: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D18u; }
        if (ctx->pc != 0x343D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D18u; }
        if (ctx->pc != 0x343D18u) { return; }
    }
    ctx->pc = 0x343D18u;
label_343d18:
    // 0x343d18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x343d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_343d1c:
    // 0x343d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343d20:
    // 0x343d20: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x343d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_343d24:
    // 0x343d24: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x343d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_343d28:
    // 0x343d28: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x343d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_343d2c:
    // 0x343d2c: 0x320f809  jalr        $t9
label_343d30:
    if (ctx->pc == 0x343D30u) {
        ctx->pc = 0x343D30u;
            // 0x343d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343D34u;
        goto label_343d34;
    }
    ctx->pc = 0x343D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x343D34u);
        ctx->pc = 0x343D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343D2Cu;
            // 0x343d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x343D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x343D34u; }
            if (ctx->pc != 0x343D34u) { return; }
        }
        }
    }
    ctx->pc = 0x343D34u;
label_343d34:
    // 0x343d34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x343d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_343d38:
    // 0x343d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_343d3c:
    // 0x343d3c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x343d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_343d40:
    // 0x343d40: 0x320f809  jalr        $t9
label_343d44:
    if (ctx->pc == 0x343D44u) {
        ctx->pc = 0x343D44u;
            // 0x343d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x343D48u;
        goto label_343d48;
    }
    ctx->pc = 0x343D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x343D48u);
        ctx->pc = 0x343D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343D40u;
            // 0x343d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x343D48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x343D48u; }
            if (ctx->pc != 0x343D48u) { return; }
        }
        }
    }
    ctx->pc = 0x343D48u;
label_343d48:
    // 0x343d48: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x343d48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_343d4c:
    // 0x343d4c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x343d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_343d50:
    // 0x343d50: 0x24050840  addiu       $a1, $zero, 0x840
    ctx->pc = 0x343d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
label_343d54:
    // 0x343d54: 0xc05750c  jal         func_15D430
label_343d58:
    if (ctx->pc == 0x343D58u) {
        ctx->pc = 0x343D58u;
            // 0x343d58: 0x24060083  addiu       $a2, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->pc = 0x343D5Cu;
        goto label_343d5c;
    }
    ctx->pc = 0x343D54u;
    SET_GPR_U32(ctx, 31, 0x343D5Cu);
    ctx->pc = 0x343D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343D54u;
            // 0x343d58: 0x24060083  addiu       $a2, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D5Cu; }
        if (ctx->pc != 0x343D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D5Cu; }
        if (ctx->pc != 0x343D5Cu) { return; }
    }
    ctx->pc = 0x343D5Cu;
label_343d5c:
    // 0x343d5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x343d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343d60:
    // 0x343d60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x343d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343d64:
    // 0x343d64: 0xde260000  ld          $a2, 0x0($s1)
    ctx->pc = 0x343d64u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_343d68:
    // 0x343d68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343d6c:
    // 0x343d6c: 0xde270008  ld          $a3, 0x8($s1)
    ctx->pc = 0x343d6cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_343d70:
    // 0x343d70: 0xc057540  jal         func_15D500
label_343d74:
    if (ctx->pc == 0x343D74u) {
        ctx->pc = 0x343D74u;
            // 0x343d74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343D78u;
        goto label_343d78;
    }
    ctx->pc = 0x343D70u;
    SET_GPR_U32(ctx, 31, 0x343D78u);
    ctx->pc = 0x343D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343D70u;
            // 0x343d74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D78u; }
        if (ctx->pc != 0x343D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D78u; }
        if (ctx->pc != 0x343D78u) { return; }
    }
    ctx->pc = 0x343D78u;
label_343d78:
    // 0x343d78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x343d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_343d7c:
    // 0x343d7c: 0x2e62000b  sltiu       $v0, $s3, 0xB
    ctx->pc = 0x343d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_343d80:
    // 0x343d80: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_343d84:
    if (ctx->pc == 0x343D84u) {
        ctx->pc = 0x343D84u;
            // 0x343d84: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x343D88u;
        goto label_343d88;
    }
    ctx->pc = 0x343D80u;
    {
        const bool branch_taken_0x343d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343D80u;
            // 0x343d84: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d80) {
            ctx->pc = 0x343D64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343d64;
        }
    }
    ctx->pc = 0x343D88u;
label_343d88:
    // 0x343d88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x343d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343d8c:
    // 0x343d8c: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x343d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_343d90:
    // 0x343d90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x343d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343d94:
    // 0x343d94: 0x3c023e5a  lui         $v0, 0x3E5A
    ctx->pc = 0x343d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15962 << 16));
label_343d98:
    // 0x343d98: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x343d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_343d9c:
    // 0x343d9c: 0x34425a5a  ori         $v0, $v0, 0x5A5A
    ctx->pc = 0x343d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23130);
label_343da0:
    // 0x343da0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343da4:
    // 0x343da4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343da8:
    // 0x343da8: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x343da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_343dac:
    // 0x343dac: 0xc057540  jal         func_15D500
label_343db0:
    if (ctx->pc == 0x343DB0u) {
        ctx->pc = 0x343DB0u;
            // 0x343db0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x343DB4u;
        goto label_343db4;
    }
    ctx->pc = 0x343DACu;
    SET_GPR_U32(ctx, 31, 0x343DB4u);
    ctx->pc = 0x343DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343DACu;
            // 0x343db0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DB4u; }
        if (ctx->pc != 0x343DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DB4u; }
        if (ctx->pc != 0x343DB4u) { return; }
    }
    ctx->pc = 0x343DB4u;
label_343db4:
    // 0x343db4: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x343db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_343db8:
    // 0x343db8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343dbc:
    // 0x343dbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x343dbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_343dc0:
    // 0x343dc0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x343dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_343dc4:
    // 0x343dc4: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x343dc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_343dc8:
    // 0x343dc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343dcc:
    // 0x343dcc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x343dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_343dd0:
    // 0x343dd0: 0xc057540  jal         func_15D500
label_343dd4:
    if (ctx->pc == 0x343DD4u) {
        ctx->pc = 0x343DD4u;
            // 0x343dd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x343DD8u;
        goto label_343dd8;
    }
    ctx->pc = 0x343DD0u;
    SET_GPR_U32(ctx, 31, 0x343DD8u);
    ctx->pc = 0x343DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343DD0u;
            // 0x343dd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DD8u; }
        if (ctx->pc != 0x343DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DD8u; }
        if (ctx->pc != 0x343DD8u) { return; }
    }
    ctx->pc = 0x343DD8u;
label_343dd8:
    // 0x343dd8: 0x9e040054  lwu         $a0, 0x54($s0)
    ctx->pc = 0x343dd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_343ddc:
    // 0x343ddc: 0x26426c00  addiu       $v0, $s2, 0x6C00
    ctx->pc = 0x343ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 27648));
label_343de0:
    // 0x343de0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_343de4:
    // 0x343de4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343de8:
    // 0x343de8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x343de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_343dec:
    // 0x343dec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x343decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_343df0:
    // 0x343df0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x343df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_343df4:
    // 0x343df4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x343df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_343df8:
    // 0x343df8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x343df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_343dfc:
    // 0x343dfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_343e00:
    // 0x343e00: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x343e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_343e04:
    // 0x343e04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343e08:
    // 0x343e08: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x343e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_343e0c:
    // 0x343e0c: 0xc057540  jal         func_15D500
label_343e10:
    if (ctx->pc == 0x343E10u) {
        ctx->pc = 0x343E10u;
            // 0x343e10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x343E14u;
        goto label_343e14;
    }
    ctx->pc = 0x343E0Cu;
    SET_GPR_U32(ctx, 31, 0x343E14u);
    ctx->pc = 0x343E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E0Cu;
            // 0x343e10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E14u; }
        if (ctx->pc != 0x343E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E14u; }
        if (ctx->pc != 0x343E14u) { return; }
    }
    ctx->pc = 0x343E14u;
label_343e14:
    // 0x343e14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x343e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343e18:
    // 0x343e18: 0x3c023e5a  lui         $v0, 0x3E5A
    ctx->pc = 0x343e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15962 << 16));
label_343e1c:
    // 0x343e1c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x343e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_343e20:
    // 0x343e20: 0x34425a5a  ori         $v0, $v0, 0x5A5A
    ctx->pc = 0x343e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23130);
label_343e24:
    // 0x343e24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343e28:
    // 0x343e28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343e2c:
    // 0x343e2c: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x343e2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_343e30:
    // 0x343e30: 0xc057540  jal         func_15D500
label_343e34:
    if (ctx->pc == 0x343E34u) {
        ctx->pc = 0x343E34u;
            // 0x343e34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x343E38u;
        goto label_343e38;
    }
    ctx->pc = 0x343E30u;
    SET_GPR_U32(ctx, 31, 0x343E38u);
    ctx->pc = 0x343E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E30u;
            // 0x343e34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E38u; }
        if (ctx->pc != 0x343E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E38u; }
        if (ctx->pc != 0x343E38u) { return; }
    }
    ctx->pc = 0x343E38u;
label_343e38:
    // 0x343e38: 0x9e030058  lwu         $v1, 0x58($s0)
    ctx->pc = 0x343e38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_343e3c:
    // 0x343e3c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x343e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_343e40:
    // 0x343e40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343e44:
    // 0x343e44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x343e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_343e48:
    // 0x343e48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343e4c:
    // 0x343e4c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x343e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_343e50:
    // 0x343e50: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x343e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_343e54:
    // 0x343e54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x343e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_343e58:
    // 0x343e58: 0xc057540  jal         func_15D500
label_343e5c:
    if (ctx->pc == 0x343E5Cu) {
        ctx->pc = 0x343E5Cu;
            // 0x343e5c: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x343E60u;
        goto label_343e60;
    }
    ctx->pc = 0x343E58u;
    SET_GPR_U32(ctx, 31, 0x343E60u);
    ctx->pc = 0x343E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E58u;
            // 0x343e5c: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E60u; }
        if (ctx->pc != 0x343E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E60u; }
        if (ctx->pc != 0x343E60u) { return; }
    }
    ctx->pc = 0x343E60u;
label_343e60:
    // 0x343e60: 0x9e04005c  lwu         $a0, 0x5C($s0)
    ctx->pc = 0x343e60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_343e64:
    // 0x343e64: 0x26226c00  addiu       $v0, $s1, 0x6C00
    ctx->pc = 0x343e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 27648));
label_343e68:
    // 0x343e68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_343e6c:
    // 0x343e6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343e70:
    // 0x343e70: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x343e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_343e74:
    // 0x343e74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x343e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_343e78:
    // 0x343e78: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x343e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_343e7c:
    // 0x343e7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x343e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_343e80:
    // 0x343e80: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x343e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_343e84:
    // 0x343e84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_343e88:
    // 0x343e88: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x343e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_343e8c:
    // 0x343e8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343e90:
    // 0x343e90: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x343e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_343e94:
    // 0x343e94: 0xc057540  jal         func_15D500
label_343e98:
    if (ctx->pc == 0x343E98u) {
        ctx->pc = 0x343E98u;
            // 0x343e98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x343E9Cu;
        goto label_343e9c;
    }
    ctx->pc = 0x343E94u;
    SET_GPR_U32(ctx, 31, 0x343E9Cu);
    ctx->pc = 0x343E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E94u;
            // 0x343e98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E9Cu; }
        if (ctx->pc != 0x343E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E9Cu; }
        if (ctx->pc != 0x343E9Cu) { return; }
    }
    ctx->pc = 0x343E9Cu;
label_343e9c:
    // 0x343e9c: 0x26310200  addiu       $s1, $s1, 0x200
    ctx->pc = 0x343e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_343ea0:
    // 0x343ea0: 0x2a212801  slti        $at, $s1, 0x2801
    ctx->pc = 0x343ea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10241) ? 1 : 0);
label_343ea4:
    // 0x343ea4: 0x1420ffba  bnez        $at, . + 4 + (-0x46 << 2)
label_343ea8:
    if (ctx->pc == 0x343EA8u) {
        ctx->pc = 0x343EA8u;
            // 0x343ea8: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->pc = 0x343EACu;
        goto label_343eac;
    }
    ctx->pc = 0x343EA4u;
    {
        const bool branch_taken_0x343ea4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x343EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343EA4u;
            // 0x343ea8: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ea4) {
            ctx->pc = 0x343D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343d90;
        }
    }
    ctx->pc = 0x343EACu;
label_343eac:
    // 0x343eac: 0xc057528  jal         func_15D4A0
label_343eb0:
    if (ctx->pc == 0x343EB0u) {
        ctx->pc = 0x343EB0u;
            // 0x343eb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343EB4u;
        goto label_343eb4;
    }
    ctx->pc = 0x343EACu;
    SET_GPR_U32(ctx, 31, 0x343EB4u);
    ctx->pc = 0x343EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EACu;
            // 0x343eb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EB4u; }
        if (ctx->pc != 0x343EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EB4u; }
        if (ctx->pc != 0x343EB4u) { return; }
    }
    ctx->pc = 0x343EB4u;
label_343eb4:
    // 0x343eb4: 0xc077318  jal         func_1DCC60
label_343eb8:
    if (ctx->pc == 0x343EB8u) {
        ctx->pc = 0x343EBCu;
        goto label_343ebc;
    }
    ctx->pc = 0x343EB4u;
    SET_GPR_U32(ctx, 31, 0x343EBCu);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EBCu; }
        if (ctx->pc != 0x343EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EBCu; }
        if (ctx->pc != 0x343EBCu) { return; }
    }
    ctx->pc = 0x343EBCu;
label_343ebc:
    // 0x343ebc: 0xc0c7538  jal         func_31D4E0
label_343ec0:
    if (ctx->pc == 0x343EC0u) {
        ctx->pc = 0x343EC0u;
            // 0x343ec0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343EC4u;
        goto label_343ec4;
    }
    ctx->pc = 0x343EBCu;
    SET_GPR_U32(ctx, 31, 0x343EC4u);
    ctx->pc = 0x343EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EBCu;
            // 0x343ec0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4E0u;
    if (runtime->hasFunction(0x31D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EC4u; }
        if (ctx->pc != 0x343EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4E0_0x31d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EC4u; }
        if (ctx->pc != 0x343EC4u) { return; }
    }
    ctx->pc = 0x343EC4u;
label_343ec4:
    // 0x343ec4: 0xc0b9c64  jal         func_2E7190
label_343ec8:
    if (ctx->pc == 0x343EC8u) {
        ctx->pc = 0x343EC8u;
            // 0x343ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343ECCu;
        goto label_343ecc;
    }
    ctx->pc = 0x343EC4u;
    SET_GPR_U32(ctx, 31, 0x343ECCu);
    ctx->pc = 0x343EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EC4u;
            // 0x343ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343ECCu; }
        if (ctx->pc != 0x343ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343ECCu; }
        if (ctx->pc != 0x343ECCu) { return; }
    }
    ctx->pc = 0x343ECCu;
label_343ecc:
    // 0x343ecc: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x343eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_343ed0:
    // 0x343ed0: 0xc0d1060  jal         func_344180
label_343ed4:
    if (ctx->pc == 0x343ED4u) {
        ctx->pc = 0x343ED4u;
            // 0x343ed4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343ED8u;
        goto label_343ed8;
    }
    ctx->pc = 0x343ED0u;
    SET_GPR_U32(ctx, 31, 0x343ED8u);
    ctx->pc = 0x343ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343ED0u;
            // 0x343ed4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x344180u;
    if (runtime->hasFunction(0x344180u)) {
        auto targetFn = runtime->lookupFunction(0x344180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343ED8u; }
        if (ctx->pc != 0x343ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344180_0x344180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343ED8u; }
        if (ctx->pc != 0x343ED8u) { return; }
    }
    ctx->pc = 0x343ED8u;
label_343ed8:
    // 0x343ed8: 0x8e120064  lw          $s2, 0x64($s0)
    ctx->pc = 0x343ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_343edc:
    // 0x343edc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x343edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343ee0:
    // 0x343ee0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x343ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_343ee4:
    // 0x343ee4: 0x24050fc0  addiu       $a1, $zero, 0xFC0
    ctx->pc = 0x343ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4032));
label_343ee8:
    // 0x343ee8: 0xc05750c  jal         func_15D430
label_343eec:
    if (ctx->pc == 0x343EECu) {
        ctx->pc = 0x343EECu;
            // 0x343eec: 0x240600fb  addiu       $a2, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->pc = 0x343EF0u;
        goto label_343ef0;
    }
    ctx->pc = 0x343EE8u;
    SET_GPR_U32(ctx, 31, 0x343EF0u);
    ctx->pc = 0x343EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EE8u;
            // 0x343eec: 0x240600fb  addiu       $a2, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EF0u; }
        if (ctx->pc != 0x343EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EF0u; }
        if (ctx->pc != 0x343EF0u) { return; }
    }
    ctx->pc = 0x343EF0u;
label_343ef0:
    // 0x343ef0: 0xc0d105c  jal         func_344170
label_343ef4:
    if (ctx->pc == 0x343EF4u) {
        ctx->pc = 0x343EF4u;
            // 0x343ef4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343EF8u;
        goto label_343ef8;
    }
    ctx->pc = 0x343EF0u;
    SET_GPR_U32(ctx, 31, 0x343EF8u);
    ctx->pc = 0x343EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EF0u;
            // 0x343ef4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x344170u;
    if (runtime->hasFunction(0x344170u)) {
        auto targetFn = runtime->lookupFunction(0x344170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EF8u; }
        if (ctx->pc != 0x343EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344170_0x344170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EF8u; }
        if (ctx->pc != 0x343EF8u) { return; }
    }
    ctx->pc = 0x343EF8u;
label_343ef8:
    // 0x343ef8: 0xc0d104c  jal         func_344130
label_343efc:
    if (ctx->pc == 0x343EFCu) {
        ctx->pc = 0x343EFCu;
            // 0x343efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343F00u;
        goto label_343f00;
    }
    ctx->pc = 0x343EF8u;
    SET_GPR_U32(ctx, 31, 0x343F00u);
    ctx->pc = 0x343EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EF8u;
            // 0x343efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x344130u;
    if (runtime->hasFunction(0x344130u)) {
        auto targetFn = runtime->lookupFunction(0x344130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F00u; }
        if (ctx->pc != 0x343F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344130_0x344130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F00u; }
        if (ctx->pc != 0x343F00u) { return; }
    }
    ctx->pc = 0x343F00u;
label_343f00:
    // 0x343f00: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x343f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_343f04:
    // 0x343f04: 0xde460000  ld          $a2, 0x0($s2)
    ctx->pc = 0x343f04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_343f08:
    // 0x343f08: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x343f08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
label_343f0c:
    // 0x343f0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_343f10:
    // 0x343f10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x343f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_343f14:
    // 0x343f14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_343f18:
    // 0x343f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343f1c:
    // 0x343f1c: 0xc057540  jal         func_15D500
label_343f20:
    if (ctx->pc == 0x343F20u) {
        ctx->pc = 0x343F20u;
            // 0x343f20: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x343F24u;
        goto label_343f24;
    }
    ctx->pc = 0x343F1Cu;
    SET_GPR_U32(ctx, 31, 0x343F24u);
    ctx->pc = 0x343F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343F1Cu;
            // 0x343f20: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F24u; }
        if (ctx->pc != 0x343F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F24u; }
        if (ctx->pc != 0x343F24u) { return; }
    }
    ctx->pc = 0x343F24u;
label_343f24:
    // 0x343f24: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x343f24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343f28:
    // 0x343f28: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x343f28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_343f2c:
    // 0x343f2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_343f30:
    // 0x343f30: 0xde460000  ld          $a2, 0x0($s2)
    ctx->pc = 0x343f30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_343f34:
    // 0x343f34: 0xde470008  ld          $a3, 0x8($s2)
    ctx->pc = 0x343f34u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 8)));
label_343f38:
    // 0x343f38: 0xc057540  jal         func_15D500
label_343f3c:
    if (ctx->pc == 0x343F3Cu) {
        ctx->pc = 0x343F3Cu;
            // 0x343f3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x343F40u;
        goto label_343f40;
    }
    ctx->pc = 0x343F38u;
    SET_GPR_U32(ctx, 31, 0x343F40u);
    ctx->pc = 0x343F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343F38u;
            // 0x343f3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F40u; }
        if (ctx->pc != 0x343F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F40u; }
        if (ctx->pc != 0x343F40u) { return; }
    }
    ctx->pc = 0x343F40u;
label_343f40:
    // 0x343f40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x343f40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_343f44:
    // 0x343f44: 0x2e82000b  sltiu       $v0, $s4, 0xB
    ctx->pc = 0x343f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_343f48:
    // 0x343f48: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_343f4c:
    if (ctx->pc == 0x343F4Cu) {
        ctx->pc = 0x343F4Cu;
            // 0x343f4c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x343F50u;
        goto label_343f50;
    }
    ctx->pc = 0x343F48u;
    {
        const bool branch_taken_0x343f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343f48) {
            ctx->pc = 0x343F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343F48u;
            // 0x343f4c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343F2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343f2c;
        }
    }
    ctx->pc = 0x343F50u;
label_343f50:
    // 0x343f50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x343f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_343f54:
    // 0x343f54: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x343f54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343f58:
    // 0x343f58: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x343f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_343f5c:
    // 0x343f5c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x343f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_343f60:
    // 0x343f60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x343f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_343f64:
    // 0x343f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_343f68:
    // 0x343f68: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x343f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_343f6c:
    // 0x343f6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x343f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_343f70:
    // 0x343f70: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x343f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_343f74:
    // 0x343f74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_343f78:
    // 0x343f78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x343f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_343f7c:
    // 0x343f7c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x343f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_343f80:
    // 0x343f80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x343f80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_343f84:
    // 0x343f84: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x343f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_343f88:
    // 0x343f88: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x343f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_343f8c:
    // 0x343f8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x343f8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_343f90:
    // 0x343f90: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x343f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_343f94:
    // 0x343f94: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x343f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_343f98:
    // 0x343f98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x343f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_343f9c:
    // 0x343f9c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x343f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_343fa0:
    // 0x343fa0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x343fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_343fa4:
    // 0x343fa4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x343fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343fa8:
    // 0x343fa8: 0x24120200  addiu       $s2, $zero, 0x200
    ctx->pc = 0x343fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_343fac:
    // 0x343fac: 0x28c38  dsll        $s1, $v0, 16
    ctx->pc = 0x343facu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 16);
label_343fb0:
    // 0x343fb0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x343fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_343fb4:
    // 0x343fb4: 0x28438  dsll        $s0, $v0, 16
    ctx->pc = 0x343fb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 16);
label_343fb8:
    // 0x343fb8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x343fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_343fbc:
    // 0x343fbc: 0x2b438  dsll        $s6, $v0, 16
    ctx->pc = 0x343fbcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << 16);
label_343fc0:
    // 0x343fc0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x343fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_343fc4:
    // 0x343fc4: 0x2bc38  dsll        $s7, $v0, 16
    ctx->pc = 0x343fc4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << 16);
label_343fc8:
    // 0x343fc8: 0x3402ff80  ori         $v0, $zero, 0xFF80
    ctx->pc = 0x343fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_343fcc:
    // 0x343fcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x343fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343fd0:
    // 0x343fd0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x343fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_343fd4:
    // 0x343fd4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x343fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_343fd8:
    // 0x343fd8: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x343fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_343fdc:
    // 0x343fdc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x343fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343fe0:
    // 0x343fe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_343fe4:
    // 0x343fe4: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x343fe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_343fe8:
    // 0x343fe8: 0xc057540  jal         func_15D500
label_343fec:
    if (ctx->pc == 0x343FECu) {
        ctx->pc = 0x343FECu;
            // 0x343fec: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x343FF0u;
        goto label_343ff0;
    }
    ctx->pc = 0x343FE8u;
    SET_GPR_U32(ctx, 31, 0x343FF0u);
    ctx->pc = 0x343FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343FE8u;
            // 0x343fec: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343FF0u; }
        if (ctx->pc != 0x343FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343FF0u; }
        if (ctx->pc != 0x343FF0u) { return; }
    }
    ctx->pc = 0x343FF0u;
label_343ff0:
    // 0x343ff0: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x343ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_343ff4:
    // 0x343ff4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x343ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343ff8:
    // 0x343ff8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x343ff8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_343ffc:
    // 0x343ffc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_344000:
    // 0x344000: 0x513825  or          $a3, $v0, $s1
    ctx->pc = 0x344000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_344004:
    // 0x344004: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x344004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344008:
    // 0x344008: 0xc057540  jal         func_15D500
label_34400c:
    if (ctx->pc == 0x34400Cu) {
        ctx->pc = 0x34400Cu;
            // 0x34400c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x344010u;
        goto label_344010;
    }
    ctx->pc = 0x344008u;
    SET_GPR_U32(ctx, 31, 0x344010u);
    ctx->pc = 0x34400Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344008u;
            // 0x34400c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344010u; }
        if (ctx->pc != 0x344010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344010u; }
        if (ctx->pc != 0x344010u) { return; }
    }
    ctx->pc = 0x344010u;
label_344010:
    // 0x344010: 0x26626c00  addiu       $v0, $s3, 0x6C00
    ctx->pc = 0x344010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27648));
label_344014:
    // 0x344014: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x344014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_344018:
    // 0x344018: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x344018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34401c:
    // 0x34401c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_344020:
    // 0x344020: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x344020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_344024:
    // 0x344024: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x344024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_344028:
    // 0x344028: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x344028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_34402c:
    // 0x34402c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34402cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_344030:
    // 0x344030: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x344030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_344034:
    // 0x344034: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x344034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_344038:
    // 0x344038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x344038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34403c:
    // 0x34403c: 0xc057540  jal         func_15D500
label_344040:
    if (ctx->pc == 0x344040u) {
        ctx->pc = 0x344040u;
            // 0x344040: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x344044u;
        goto label_344044;
    }
    ctx->pc = 0x34403Cu;
    SET_GPR_U32(ctx, 31, 0x344044u);
    ctx->pc = 0x344040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34403Cu;
            // 0x344040: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344044u; }
        if (ctx->pc != 0x344044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344044u; }
        if (ctx->pc != 0x344044u) { return; }
    }
    ctx->pc = 0x344044u;
label_344044:
    // 0x344044: 0x3402ff80  ori         $v0, $zero, 0xFF80
    ctx->pc = 0x344044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_344048:
    // 0x344048: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x344048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34404c:
    // 0x34404c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x34404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_344050:
    // 0x344050: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x344050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_344054:
    // 0x344054: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x344054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_344058:
    // 0x344058: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x344058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_34405c:
    // 0x34405c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_344060:
    // 0x344060: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x344060u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_344064:
    // 0x344064: 0xc057540  jal         func_15D500
label_344068:
    if (ctx->pc == 0x344068u) {
        ctx->pc = 0x344068u;
            // 0x344068: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x34406Cu;
        goto label_34406c;
    }
    ctx->pc = 0x344064u;
    SET_GPR_U32(ctx, 31, 0x34406Cu);
    ctx->pc = 0x344068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344064u;
            // 0x344068: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34406Cu; }
        if (ctx->pc != 0x34406Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34406Cu; }
        if (ctx->pc != 0x34406Cu) { return; }
    }
    ctx->pc = 0x34406Cu;
label_34406c:
    // 0x34406c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x34406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_344070:
    // 0x344070: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x344070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_344074:
    // 0x344074: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x344074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_344078:
    // 0x344078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x344078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34407c:
    // 0x34407c: 0x563825  or          $a3, $v0, $s6
    ctx->pc = 0x34407cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_344080:
    // 0x344080: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x344080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344084:
    // 0x344084: 0xc057540  jal         func_15D500
label_344088:
    if (ctx->pc == 0x344088u) {
        ctx->pc = 0x344088u;
            // 0x344088: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x34408Cu;
        goto label_34408c;
    }
    ctx->pc = 0x344084u;
    SET_GPR_U32(ctx, 31, 0x34408Cu);
    ctx->pc = 0x344088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344084u;
            // 0x344088: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34408Cu; }
        if (ctx->pc != 0x34408Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34408Cu; }
        if (ctx->pc != 0x34408Cu) { return; }
    }
    ctx->pc = 0x34408Cu;
label_34408c:
    // 0x34408c: 0x26426c00  addiu       $v0, $s2, 0x6C00
    ctx->pc = 0x34408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 27648));
label_344090:
    // 0x344090: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x344090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_344094:
    // 0x344094: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x344094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_344098:
    // 0x344098: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x344098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34409c:
    // 0x34409c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x34409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3440a0:
    // 0x3440a0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3440a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3440a4:
    // 0x3440a4: 0x2e21825  or          $v1, $s7, $v0
    ctx->pc = 0x3440a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_3440a8:
    // 0x3440a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3440a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3440ac:
    // 0x3440ac: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3440acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_3440b0:
    // 0x3440b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3440b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3440b4:
    // 0x3440b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3440b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3440b8:
    // 0x3440b8: 0xc057540  jal         func_15D500
label_3440bc:
    if (ctx->pc == 0x3440BCu) {
        ctx->pc = 0x3440BCu;
            // 0x3440bc: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x3440C0u;
        goto label_3440c0;
    }
    ctx->pc = 0x3440B8u;
    SET_GPR_U32(ctx, 31, 0x3440C0u);
    ctx->pc = 0x3440BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3440B8u;
            // 0x3440bc: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3440C0u; }
        if (ctx->pc != 0x3440C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3440C0u; }
        if (ctx->pc != 0x3440C0u) { return; }
    }
    ctx->pc = 0x3440C0u;
label_3440c0:
    // 0x3440c0: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x3440c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_3440c4:
    // 0x3440c4: 0x2a412801  slti        $at, $s2, 0x2801
    ctx->pc = 0x3440c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10241) ? 1 : 0);
label_3440c8:
    // 0x3440c8: 0x1420ffbf  bnez        $at, . + 4 + (-0x41 << 2)
label_3440cc:
    if (ctx->pc == 0x3440CCu) {
        ctx->pc = 0x3440CCu;
            // 0x3440cc: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->pc = 0x3440D0u;
        goto label_3440d0;
    }
    ctx->pc = 0x3440C8u;
    {
        const bool branch_taken_0x3440c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3440CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3440C8u;
            // 0x3440cc: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3440c8) {
            ctx->pc = 0x343FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343fc8;
        }
    }
    ctx->pc = 0x3440D0u;
label_3440d0:
    // 0x3440d0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3440d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3440d4:
    // 0x3440d4: 0x2fc20002  sltiu       $v0, $fp, 0x2
    ctx->pc = 0x3440d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3440d8:
    // 0x3440d8: 0x5440ffb2  bnel        $v0, $zero, . + 4 + (-0x4E << 2)
label_3440dc:
    if (ctx->pc == 0x3440DCu) {
        ctx->pc = 0x3440DCu;
            // 0x3440dc: 0x7ba200c0  lq          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3440E0u;
        goto label_3440e0;
    }
    ctx->pc = 0x3440D8u;
    {
        const bool branch_taken_0x3440d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3440d8) {
            ctx->pc = 0x3440DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3440D8u;
            // 0x3440dc: 0x7ba200c0  lq          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343FA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343fa4;
        }
    }
    ctx->pc = 0x3440E0u;
label_3440e0:
    // 0x3440e0: 0xc057528  jal         func_15D4A0
label_3440e4:
    if (ctx->pc == 0x3440E4u) {
        ctx->pc = 0x3440E4u;
            // 0x3440e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3440E8u;
        goto label_3440e8;
    }
    ctx->pc = 0x3440E0u;
    SET_GPR_U32(ctx, 31, 0x3440E8u);
    ctx->pc = 0x3440E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3440E0u;
            // 0x3440e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3440E8u; }
        if (ctx->pc != 0x3440E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3440E8u; }
        if (ctx->pc != 0x3440E8u) { return; }
    }
    ctx->pc = 0x3440E8u;
label_3440e8:
    // 0x3440e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3440e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3440ec:
    // 0x3440ec: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3440ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3440f0:
    // 0x3440f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3440f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3440f4:
    // 0x3440f4: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x3440f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_3440f8:
    // 0x3440f8: 0x320f809  jalr        $t9
label_3440fc:
    if (ctx->pc == 0x3440FCu) {
        ctx->pc = 0x344100u;
        goto label_344100;
    }
    ctx->pc = 0x3440F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x344100u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x344100u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x344100u; }
            if (ctx->pc != 0x344100u) { return; }
        }
        }
    }
    ctx->pc = 0x344100u;
label_344100:
    // 0x344100: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x344100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_344104:
    // 0x344104: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x344104u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_344108:
    // 0x344108: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x344108u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34410c:
    // 0x34410c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34410cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_344110:
    // 0x344110: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x344110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_344114:
    // 0x344114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x344114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_344118:
    // 0x344118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x344118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34411c:
    // 0x34411c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34411cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_344120:
    // 0x344120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x344120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_344124:
    // 0x344124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_344128:
    // 0x344128: 0x3e00008  jr          $ra
label_34412c:
    if (ctx->pc == 0x34412Cu) {
        ctx->pc = 0x34412Cu;
            // 0x34412c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x344130u;
        goto label_fallthrough_0x344128;
    }
    ctx->pc = 0x344128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344128u;
            // 0x34412c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x344128:
    ctx->pc = 0x344130u;
}
