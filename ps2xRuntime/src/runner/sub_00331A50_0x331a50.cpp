#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00331A50
// Address: 0x331a50 - 0x3320c0
void sub_00331A50_0x331a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331A50_0x331a50");
#endif

    switch (ctx->pc) {
        case 0x331a50u: goto label_331a50;
        case 0x331a54u: goto label_331a54;
        case 0x331a58u: goto label_331a58;
        case 0x331a5cu: goto label_331a5c;
        case 0x331a60u: goto label_331a60;
        case 0x331a64u: goto label_331a64;
        case 0x331a68u: goto label_331a68;
        case 0x331a6cu: goto label_331a6c;
        case 0x331a70u: goto label_331a70;
        case 0x331a74u: goto label_331a74;
        case 0x331a78u: goto label_331a78;
        case 0x331a7cu: goto label_331a7c;
        case 0x331a80u: goto label_331a80;
        case 0x331a84u: goto label_331a84;
        case 0x331a88u: goto label_331a88;
        case 0x331a8cu: goto label_331a8c;
        case 0x331a90u: goto label_331a90;
        case 0x331a94u: goto label_331a94;
        case 0x331a98u: goto label_331a98;
        case 0x331a9cu: goto label_331a9c;
        case 0x331aa0u: goto label_331aa0;
        case 0x331aa4u: goto label_331aa4;
        case 0x331aa8u: goto label_331aa8;
        case 0x331aacu: goto label_331aac;
        case 0x331ab0u: goto label_331ab0;
        case 0x331ab4u: goto label_331ab4;
        case 0x331ab8u: goto label_331ab8;
        case 0x331abcu: goto label_331abc;
        case 0x331ac0u: goto label_331ac0;
        case 0x331ac4u: goto label_331ac4;
        case 0x331ac8u: goto label_331ac8;
        case 0x331accu: goto label_331acc;
        case 0x331ad0u: goto label_331ad0;
        case 0x331ad4u: goto label_331ad4;
        case 0x331ad8u: goto label_331ad8;
        case 0x331adcu: goto label_331adc;
        case 0x331ae0u: goto label_331ae0;
        case 0x331ae4u: goto label_331ae4;
        case 0x331ae8u: goto label_331ae8;
        case 0x331aecu: goto label_331aec;
        case 0x331af0u: goto label_331af0;
        case 0x331af4u: goto label_331af4;
        case 0x331af8u: goto label_331af8;
        case 0x331afcu: goto label_331afc;
        case 0x331b00u: goto label_331b00;
        case 0x331b04u: goto label_331b04;
        case 0x331b08u: goto label_331b08;
        case 0x331b0cu: goto label_331b0c;
        case 0x331b10u: goto label_331b10;
        case 0x331b14u: goto label_331b14;
        case 0x331b18u: goto label_331b18;
        case 0x331b1cu: goto label_331b1c;
        case 0x331b20u: goto label_331b20;
        case 0x331b24u: goto label_331b24;
        case 0x331b28u: goto label_331b28;
        case 0x331b2cu: goto label_331b2c;
        case 0x331b30u: goto label_331b30;
        case 0x331b34u: goto label_331b34;
        case 0x331b38u: goto label_331b38;
        case 0x331b3cu: goto label_331b3c;
        case 0x331b40u: goto label_331b40;
        case 0x331b44u: goto label_331b44;
        case 0x331b48u: goto label_331b48;
        case 0x331b4cu: goto label_331b4c;
        case 0x331b50u: goto label_331b50;
        case 0x331b54u: goto label_331b54;
        case 0x331b58u: goto label_331b58;
        case 0x331b5cu: goto label_331b5c;
        case 0x331b60u: goto label_331b60;
        case 0x331b64u: goto label_331b64;
        case 0x331b68u: goto label_331b68;
        case 0x331b6cu: goto label_331b6c;
        case 0x331b70u: goto label_331b70;
        case 0x331b74u: goto label_331b74;
        case 0x331b78u: goto label_331b78;
        case 0x331b7cu: goto label_331b7c;
        case 0x331b80u: goto label_331b80;
        case 0x331b84u: goto label_331b84;
        case 0x331b88u: goto label_331b88;
        case 0x331b8cu: goto label_331b8c;
        case 0x331b90u: goto label_331b90;
        case 0x331b94u: goto label_331b94;
        case 0x331b98u: goto label_331b98;
        case 0x331b9cu: goto label_331b9c;
        case 0x331ba0u: goto label_331ba0;
        case 0x331ba4u: goto label_331ba4;
        case 0x331ba8u: goto label_331ba8;
        case 0x331bacu: goto label_331bac;
        case 0x331bb0u: goto label_331bb0;
        case 0x331bb4u: goto label_331bb4;
        case 0x331bb8u: goto label_331bb8;
        case 0x331bbcu: goto label_331bbc;
        case 0x331bc0u: goto label_331bc0;
        case 0x331bc4u: goto label_331bc4;
        case 0x331bc8u: goto label_331bc8;
        case 0x331bccu: goto label_331bcc;
        case 0x331bd0u: goto label_331bd0;
        case 0x331bd4u: goto label_331bd4;
        case 0x331bd8u: goto label_331bd8;
        case 0x331bdcu: goto label_331bdc;
        case 0x331be0u: goto label_331be0;
        case 0x331be4u: goto label_331be4;
        case 0x331be8u: goto label_331be8;
        case 0x331becu: goto label_331bec;
        case 0x331bf0u: goto label_331bf0;
        case 0x331bf4u: goto label_331bf4;
        case 0x331bf8u: goto label_331bf8;
        case 0x331bfcu: goto label_331bfc;
        case 0x331c00u: goto label_331c00;
        case 0x331c04u: goto label_331c04;
        case 0x331c08u: goto label_331c08;
        case 0x331c0cu: goto label_331c0c;
        case 0x331c10u: goto label_331c10;
        case 0x331c14u: goto label_331c14;
        case 0x331c18u: goto label_331c18;
        case 0x331c1cu: goto label_331c1c;
        case 0x331c20u: goto label_331c20;
        case 0x331c24u: goto label_331c24;
        case 0x331c28u: goto label_331c28;
        case 0x331c2cu: goto label_331c2c;
        case 0x331c30u: goto label_331c30;
        case 0x331c34u: goto label_331c34;
        case 0x331c38u: goto label_331c38;
        case 0x331c3cu: goto label_331c3c;
        case 0x331c40u: goto label_331c40;
        case 0x331c44u: goto label_331c44;
        case 0x331c48u: goto label_331c48;
        case 0x331c4cu: goto label_331c4c;
        case 0x331c50u: goto label_331c50;
        case 0x331c54u: goto label_331c54;
        case 0x331c58u: goto label_331c58;
        case 0x331c5cu: goto label_331c5c;
        case 0x331c60u: goto label_331c60;
        case 0x331c64u: goto label_331c64;
        case 0x331c68u: goto label_331c68;
        case 0x331c6cu: goto label_331c6c;
        case 0x331c70u: goto label_331c70;
        case 0x331c74u: goto label_331c74;
        case 0x331c78u: goto label_331c78;
        case 0x331c7cu: goto label_331c7c;
        case 0x331c80u: goto label_331c80;
        case 0x331c84u: goto label_331c84;
        case 0x331c88u: goto label_331c88;
        case 0x331c8cu: goto label_331c8c;
        case 0x331c90u: goto label_331c90;
        case 0x331c94u: goto label_331c94;
        case 0x331c98u: goto label_331c98;
        case 0x331c9cu: goto label_331c9c;
        case 0x331ca0u: goto label_331ca0;
        case 0x331ca4u: goto label_331ca4;
        case 0x331ca8u: goto label_331ca8;
        case 0x331cacu: goto label_331cac;
        case 0x331cb0u: goto label_331cb0;
        case 0x331cb4u: goto label_331cb4;
        case 0x331cb8u: goto label_331cb8;
        case 0x331cbcu: goto label_331cbc;
        case 0x331cc0u: goto label_331cc0;
        case 0x331cc4u: goto label_331cc4;
        case 0x331cc8u: goto label_331cc8;
        case 0x331cccu: goto label_331ccc;
        case 0x331cd0u: goto label_331cd0;
        case 0x331cd4u: goto label_331cd4;
        case 0x331cd8u: goto label_331cd8;
        case 0x331cdcu: goto label_331cdc;
        case 0x331ce0u: goto label_331ce0;
        case 0x331ce4u: goto label_331ce4;
        case 0x331ce8u: goto label_331ce8;
        case 0x331cecu: goto label_331cec;
        case 0x331cf0u: goto label_331cf0;
        case 0x331cf4u: goto label_331cf4;
        case 0x331cf8u: goto label_331cf8;
        case 0x331cfcu: goto label_331cfc;
        case 0x331d00u: goto label_331d00;
        case 0x331d04u: goto label_331d04;
        case 0x331d08u: goto label_331d08;
        case 0x331d0cu: goto label_331d0c;
        case 0x331d10u: goto label_331d10;
        case 0x331d14u: goto label_331d14;
        case 0x331d18u: goto label_331d18;
        case 0x331d1cu: goto label_331d1c;
        case 0x331d20u: goto label_331d20;
        case 0x331d24u: goto label_331d24;
        case 0x331d28u: goto label_331d28;
        case 0x331d2cu: goto label_331d2c;
        case 0x331d30u: goto label_331d30;
        case 0x331d34u: goto label_331d34;
        case 0x331d38u: goto label_331d38;
        case 0x331d3cu: goto label_331d3c;
        case 0x331d40u: goto label_331d40;
        case 0x331d44u: goto label_331d44;
        case 0x331d48u: goto label_331d48;
        case 0x331d4cu: goto label_331d4c;
        case 0x331d50u: goto label_331d50;
        case 0x331d54u: goto label_331d54;
        case 0x331d58u: goto label_331d58;
        case 0x331d5cu: goto label_331d5c;
        case 0x331d60u: goto label_331d60;
        case 0x331d64u: goto label_331d64;
        case 0x331d68u: goto label_331d68;
        case 0x331d6cu: goto label_331d6c;
        case 0x331d70u: goto label_331d70;
        case 0x331d74u: goto label_331d74;
        case 0x331d78u: goto label_331d78;
        case 0x331d7cu: goto label_331d7c;
        case 0x331d80u: goto label_331d80;
        case 0x331d84u: goto label_331d84;
        case 0x331d88u: goto label_331d88;
        case 0x331d8cu: goto label_331d8c;
        case 0x331d90u: goto label_331d90;
        case 0x331d94u: goto label_331d94;
        case 0x331d98u: goto label_331d98;
        case 0x331d9cu: goto label_331d9c;
        case 0x331da0u: goto label_331da0;
        case 0x331da4u: goto label_331da4;
        case 0x331da8u: goto label_331da8;
        case 0x331dacu: goto label_331dac;
        case 0x331db0u: goto label_331db0;
        case 0x331db4u: goto label_331db4;
        case 0x331db8u: goto label_331db8;
        case 0x331dbcu: goto label_331dbc;
        case 0x331dc0u: goto label_331dc0;
        case 0x331dc4u: goto label_331dc4;
        case 0x331dc8u: goto label_331dc8;
        case 0x331dccu: goto label_331dcc;
        case 0x331dd0u: goto label_331dd0;
        case 0x331dd4u: goto label_331dd4;
        case 0x331dd8u: goto label_331dd8;
        case 0x331ddcu: goto label_331ddc;
        case 0x331de0u: goto label_331de0;
        case 0x331de4u: goto label_331de4;
        case 0x331de8u: goto label_331de8;
        case 0x331decu: goto label_331dec;
        case 0x331df0u: goto label_331df0;
        case 0x331df4u: goto label_331df4;
        case 0x331df8u: goto label_331df8;
        case 0x331dfcu: goto label_331dfc;
        case 0x331e00u: goto label_331e00;
        case 0x331e04u: goto label_331e04;
        case 0x331e08u: goto label_331e08;
        case 0x331e0cu: goto label_331e0c;
        case 0x331e10u: goto label_331e10;
        case 0x331e14u: goto label_331e14;
        case 0x331e18u: goto label_331e18;
        case 0x331e1cu: goto label_331e1c;
        case 0x331e20u: goto label_331e20;
        case 0x331e24u: goto label_331e24;
        case 0x331e28u: goto label_331e28;
        case 0x331e2cu: goto label_331e2c;
        case 0x331e30u: goto label_331e30;
        case 0x331e34u: goto label_331e34;
        case 0x331e38u: goto label_331e38;
        case 0x331e3cu: goto label_331e3c;
        case 0x331e40u: goto label_331e40;
        case 0x331e44u: goto label_331e44;
        case 0x331e48u: goto label_331e48;
        case 0x331e4cu: goto label_331e4c;
        case 0x331e50u: goto label_331e50;
        case 0x331e54u: goto label_331e54;
        case 0x331e58u: goto label_331e58;
        case 0x331e5cu: goto label_331e5c;
        case 0x331e60u: goto label_331e60;
        case 0x331e64u: goto label_331e64;
        case 0x331e68u: goto label_331e68;
        case 0x331e6cu: goto label_331e6c;
        case 0x331e70u: goto label_331e70;
        case 0x331e74u: goto label_331e74;
        case 0x331e78u: goto label_331e78;
        case 0x331e7cu: goto label_331e7c;
        case 0x331e80u: goto label_331e80;
        case 0x331e84u: goto label_331e84;
        case 0x331e88u: goto label_331e88;
        case 0x331e8cu: goto label_331e8c;
        case 0x331e90u: goto label_331e90;
        case 0x331e94u: goto label_331e94;
        case 0x331e98u: goto label_331e98;
        case 0x331e9cu: goto label_331e9c;
        case 0x331ea0u: goto label_331ea0;
        case 0x331ea4u: goto label_331ea4;
        case 0x331ea8u: goto label_331ea8;
        case 0x331eacu: goto label_331eac;
        case 0x331eb0u: goto label_331eb0;
        case 0x331eb4u: goto label_331eb4;
        case 0x331eb8u: goto label_331eb8;
        case 0x331ebcu: goto label_331ebc;
        case 0x331ec0u: goto label_331ec0;
        case 0x331ec4u: goto label_331ec4;
        case 0x331ec8u: goto label_331ec8;
        case 0x331eccu: goto label_331ecc;
        case 0x331ed0u: goto label_331ed0;
        case 0x331ed4u: goto label_331ed4;
        case 0x331ed8u: goto label_331ed8;
        case 0x331edcu: goto label_331edc;
        case 0x331ee0u: goto label_331ee0;
        case 0x331ee4u: goto label_331ee4;
        case 0x331ee8u: goto label_331ee8;
        case 0x331eecu: goto label_331eec;
        case 0x331ef0u: goto label_331ef0;
        case 0x331ef4u: goto label_331ef4;
        case 0x331ef8u: goto label_331ef8;
        case 0x331efcu: goto label_331efc;
        case 0x331f00u: goto label_331f00;
        case 0x331f04u: goto label_331f04;
        case 0x331f08u: goto label_331f08;
        case 0x331f0cu: goto label_331f0c;
        case 0x331f10u: goto label_331f10;
        case 0x331f14u: goto label_331f14;
        case 0x331f18u: goto label_331f18;
        case 0x331f1cu: goto label_331f1c;
        case 0x331f20u: goto label_331f20;
        case 0x331f24u: goto label_331f24;
        case 0x331f28u: goto label_331f28;
        case 0x331f2cu: goto label_331f2c;
        case 0x331f30u: goto label_331f30;
        case 0x331f34u: goto label_331f34;
        case 0x331f38u: goto label_331f38;
        case 0x331f3cu: goto label_331f3c;
        case 0x331f40u: goto label_331f40;
        case 0x331f44u: goto label_331f44;
        case 0x331f48u: goto label_331f48;
        case 0x331f4cu: goto label_331f4c;
        case 0x331f50u: goto label_331f50;
        case 0x331f54u: goto label_331f54;
        case 0x331f58u: goto label_331f58;
        case 0x331f5cu: goto label_331f5c;
        case 0x331f60u: goto label_331f60;
        case 0x331f64u: goto label_331f64;
        case 0x331f68u: goto label_331f68;
        case 0x331f6cu: goto label_331f6c;
        case 0x331f70u: goto label_331f70;
        case 0x331f74u: goto label_331f74;
        case 0x331f78u: goto label_331f78;
        case 0x331f7cu: goto label_331f7c;
        case 0x331f80u: goto label_331f80;
        case 0x331f84u: goto label_331f84;
        case 0x331f88u: goto label_331f88;
        case 0x331f8cu: goto label_331f8c;
        case 0x331f90u: goto label_331f90;
        case 0x331f94u: goto label_331f94;
        case 0x331f98u: goto label_331f98;
        case 0x331f9cu: goto label_331f9c;
        case 0x331fa0u: goto label_331fa0;
        case 0x331fa4u: goto label_331fa4;
        case 0x331fa8u: goto label_331fa8;
        case 0x331facu: goto label_331fac;
        case 0x331fb0u: goto label_331fb0;
        case 0x331fb4u: goto label_331fb4;
        case 0x331fb8u: goto label_331fb8;
        case 0x331fbcu: goto label_331fbc;
        case 0x331fc0u: goto label_331fc0;
        case 0x331fc4u: goto label_331fc4;
        case 0x331fc8u: goto label_331fc8;
        case 0x331fccu: goto label_331fcc;
        case 0x331fd0u: goto label_331fd0;
        case 0x331fd4u: goto label_331fd4;
        case 0x331fd8u: goto label_331fd8;
        case 0x331fdcu: goto label_331fdc;
        case 0x331fe0u: goto label_331fe0;
        case 0x331fe4u: goto label_331fe4;
        case 0x331fe8u: goto label_331fe8;
        case 0x331fecu: goto label_331fec;
        case 0x331ff0u: goto label_331ff0;
        case 0x331ff4u: goto label_331ff4;
        case 0x331ff8u: goto label_331ff8;
        case 0x331ffcu: goto label_331ffc;
        case 0x332000u: goto label_332000;
        case 0x332004u: goto label_332004;
        case 0x332008u: goto label_332008;
        case 0x33200cu: goto label_33200c;
        case 0x332010u: goto label_332010;
        case 0x332014u: goto label_332014;
        case 0x332018u: goto label_332018;
        case 0x33201cu: goto label_33201c;
        case 0x332020u: goto label_332020;
        case 0x332024u: goto label_332024;
        case 0x332028u: goto label_332028;
        case 0x33202cu: goto label_33202c;
        case 0x332030u: goto label_332030;
        case 0x332034u: goto label_332034;
        case 0x332038u: goto label_332038;
        case 0x33203cu: goto label_33203c;
        case 0x332040u: goto label_332040;
        case 0x332044u: goto label_332044;
        case 0x332048u: goto label_332048;
        case 0x33204cu: goto label_33204c;
        case 0x332050u: goto label_332050;
        case 0x332054u: goto label_332054;
        case 0x332058u: goto label_332058;
        case 0x33205cu: goto label_33205c;
        case 0x332060u: goto label_332060;
        case 0x332064u: goto label_332064;
        case 0x332068u: goto label_332068;
        case 0x33206cu: goto label_33206c;
        case 0x332070u: goto label_332070;
        case 0x332074u: goto label_332074;
        case 0x332078u: goto label_332078;
        case 0x33207cu: goto label_33207c;
        case 0x332080u: goto label_332080;
        case 0x332084u: goto label_332084;
        case 0x332088u: goto label_332088;
        case 0x33208cu: goto label_33208c;
        case 0x332090u: goto label_332090;
        case 0x332094u: goto label_332094;
        case 0x332098u: goto label_332098;
        case 0x33209cu: goto label_33209c;
        case 0x3320a0u: goto label_3320a0;
        case 0x3320a4u: goto label_3320a4;
        case 0x3320a8u: goto label_3320a8;
        case 0x3320acu: goto label_3320ac;
        case 0x3320b0u: goto label_3320b0;
        case 0x3320b4u: goto label_3320b4;
        case 0x3320b8u: goto label_3320b8;
        case 0x3320bcu: goto label_3320bc;
        default: break;
    }

    ctx->pc = 0x331a50u;

label_331a50:
    // 0x331a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_331a54:
    // 0x331a54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x331a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_331a58:
    // 0x331a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x331a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_331a5c:
    // 0x331a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_331a60:
    // 0x331a60: 0xac820cb4  sw          $v0, 0xCB4($a0)
    ctx->pc = 0x331a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3252), GPR_U32(ctx, 2));
label_331a64:
    // 0x331a64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x331a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_331a68:
    // 0x331a68: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x331a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_331a6c:
    // 0x331a6c: 0x320f809  jalr        $t9
label_331a70:
    if (ctx->pc == 0x331A70u) {
        ctx->pc = 0x331A70u;
            // 0x331a70: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x331A74u;
        goto label_331a74;
    }
    ctx->pc = 0x331A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331A74u);
        ctx->pc = 0x331A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331A6Cu;
            // 0x331a70: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x331A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331A74u; }
            if (ctx->pc != 0x331A74u) { return; }
        }
        }
    }
    ctx->pc = 0x331A74u;
label_331a74:
    // 0x331a74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x331a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_331a78:
    // 0x331a78: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x331a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_331a7c:
    // 0x331a7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x331a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_331a80:
    // 0x331a80: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x331a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_331a84:
    // 0x331a84: 0x320f809  jalr        $t9
label_331a88:
    if (ctx->pc == 0x331A88u) {
        ctx->pc = 0x331A8Cu;
        goto label_331a8c;
    }
    ctx->pc = 0x331A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331A8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x331A8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331A8Cu; }
            if (ctx->pc != 0x331A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x331A8Cu;
label_331a8c:
    // 0x331a8c: 0xc040180  jal         func_100600
label_331a90:
    if (ctx->pc == 0x331A90u) {
        ctx->pc = 0x331A90u;
            // 0x331a90: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x331A94u;
        goto label_331a94;
    }
    ctx->pc = 0x331A8Cu;
    SET_GPR_U32(ctx, 31, 0x331A94u);
    ctx->pc = 0x331A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331A8Cu;
            // 0x331a90: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331A94u; }
        if (ctx->pc != 0x331A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331A94u; }
        if (ctx->pc != 0x331A94u) { return; }
    }
    ctx->pc = 0x331A94u;
label_331a94:
    // 0x331a94: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_331a98:
    if (ctx->pc == 0x331A98u) {
        ctx->pc = 0x331A98u;
            // 0x331a98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331A9Cu;
        goto label_331a9c;
    }
    ctx->pc = 0x331A94u;
    {
        const bool branch_taken_0x331a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331A94u;
            // 0x331a98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a94) {
            ctx->pc = 0x331B04u;
            goto label_331b04;
        }
    }
    ctx->pc = 0x331A9Cu;
label_331a9c:
    // 0x331a9c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x331a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_331aa0:
    // 0x331aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_331aa4:
    // 0x331aa4: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x331aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_331aa8:
    // 0x331aa8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x331aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_331aac:
    // 0x331aac: 0xc10ca68  jal         func_4329A0
label_331ab0:
    if (ctx->pc == 0x331AB0u) {
        ctx->pc = 0x331AB0u;
            // 0x331ab0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x331AB4u;
        goto label_331ab4;
    }
    ctx->pc = 0x331AACu;
    SET_GPR_U32(ctx, 31, 0x331AB4u);
    ctx->pc = 0x331AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331AACu;
            // 0x331ab0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331AB4u; }
        if (ctx->pc != 0x331AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331AB4u; }
        if (ctx->pc != 0x331AB4u) { return; }
    }
    ctx->pc = 0x331AB4u;
label_331ab4:
    // 0x331ab4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x331ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_331ab8:
    // 0x331ab8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x331ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_331abc:
    // 0x331abc: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x331abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_331ac0:
    // 0x331ac0: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x331ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_331ac4:
    // 0x331ac4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x331ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_331ac8:
    // 0x331ac8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x331ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_331acc:
    // 0x331acc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x331accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_331ad0:
    // 0x331ad0: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x331ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_331ad4:
    // 0x331ad4: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x331ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_331ad8:
    // 0x331ad8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x331ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_331adc:
    // 0x331adc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x331adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_331ae0:
    // 0x331ae0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x331ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331ae4:
    // 0x331ae4: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x331ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_331ae8:
    // 0x331ae8: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x331ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_331aec:
    // 0x331aec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x331aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_331af0:
    // 0x331af0: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x331af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_331af4:
    // 0x331af4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x331af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_331af8:
    // 0x331af8: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x331af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_331afc:
    // 0x331afc: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x331afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_331b00:
    // 0x331b00: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x331b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_331b04:
    // 0x331b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x331b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_331b08:
    // 0x331b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_331b0c:
    // 0x331b0c: 0x3e00008  jr          $ra
label_331b10:
    if (ctx->pc == 0x331B10u) {
        ctx->pc = 0x331B10u;
            // 0x331b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x331B14u;
        goto label_331b14;
    }
    ctx->pc = 0x331B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331B0Cu;
            // 0x331b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x331B14u;
label_331b14:
    // 0x331b14: 0x0  nop
    ctx->pc = 0x331b14u;
    // NOP
label_331b18:
    // 0x331b18: 0x0  nop
    ctx->pc = 0x331b18u;
    // NOP
label_331b1c:
    // 0x331b1c: 0x0  nop
    ctx->pc = 0x331b1cu;
    // NOP
label_331b20:
    // 0x331b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x331b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_331b24:
    // 0x331b24: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x331b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_331b28:
    // 0x331b28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x331b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_331b2c:
    // 0x331b2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x331b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_331b30:
    // 0x331b30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x331b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_331b34:
    // 0x331b34: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x331b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_331b38:
    // 0x331b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x331b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_331b3c:
    // 0x331b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_331b40:
    // 0x331b40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x331b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331b44:
    // 0x331b44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_331b48:
    // 0x331b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_331b4c:
    // 0x331b4c: 0x8c660ec8  lw          $a2, 0xEC8($v1)
    ctx->pc = 0x331b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_331b50:
    // 0x331b50: 0x8c850968  lw          $a1, 0x968($a0)
    ctx->pc = 0x331b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_331b54:
    // 0x331b54: 0x8c830780  lw          $v1, 0x780($a0)
    ctx->pc = 0x331b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_331b58:
    // 0x331b58: 0x8cd40008  lw          $s4, 0x8($a2)
    ctx->pc = 0x331b58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_331b5c:
    // 0x331b5c: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_331b60:
    if (ctx->pc == 0x331B60u) {
        ctx->pc = 0x331B60u;
            // 0x331b60: 0x24b1ffff  addiu       $s1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x331B64u;
        goto label_331b64;
    }
    ctx->pc = 0x331B5Cu;
    {
        const bool branch_taken_0x331b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331B5Cu;
            // 0x331b60: 0x24b1ffff  addiu       $s1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b5c) {
            ctx->pc = 0x331CE8u;
            goto label_331ce8;
        }
    }
    ctx->pc = 0x331B64u;
label_331b64:
    // 0x331b64: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x331b64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_331b68:
    // 0x331b68: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x331b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_331b6c:
    // 0x331b6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x331b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_331b70:
    // 0x331b70: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x331b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_331b74:
    // 0x331b74: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x331b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_331b78:
    // 0x331b78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x331b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_331b7c:
    // 0x331b7c: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
label_331b80:
    if (ctx->pc == 0x331B80u) {
        ctx->pc = 0x331B80u;
            // 0x331b80: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x331B84u;
        goto label_331b84;
    }
    ctx->pc = 0x331B7Cu;
    {
        const bool branch_taken_0x331b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x331B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331B7Cu;
            // 0x331b80: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b7c) {
            ctx->pc = 0x331C78u;
            goto label_331c78;
        }
    }
    ctx->pc = 0x331B84u;
label_331b84:
    // 0x331b84: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x331b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_331b88:
    // 0x331b88: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_331b8c:
    if (ctx->pc == 0x331B8Cu) {
        ctx->pc = 0x331B90u;
        goto label_331b90;
    }
    ctx->pc = 0x331B88u;
    {
        const bool branch_taken_0x331b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331b88) {
            ctx->pc = 0x331C18u;
            goto label_331c18;
        }
    }
    ctx->pc = 0x331B90u;
label_331b90:
    // 0x331b90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x331b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_331b94:
    // 0x331b94: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_331b98:
    if (ctx->pc == 0x331B98u) {
        ctx->pc = 0x331B9Cu;
        goto label_331b9c;
    }
    ctx->pc = 0x331B94u;
    {
        const bool branch_taken_0x331b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331b94) {
            ctx->pc = 0x331BA8u;
            goto label_331ba8;
        }
    }
    ctx->pc = 0x331B9Cu;
label_331b9c:
    // 0x331b9c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_331ba0:
    if (ctx->pc == 0x331BA0u) {
        ctx->pc = 0x331BA4u;
        goto label_331ba4;
    }
    ctx->pc = 0x331B9Cu;
    {
        const bool branch_taken_0x331b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331b9c) {
            ctx->pc = 0x331CD0u;
            goto label_331cd0;
        }
    }
    ctx->pc = 0x331BA4u;
label_331ba4:
    // 0x331ba4: 0x0  nop
    ctx->pc = 0x331ba4u;
    // NOP
label_331ba8:
    // 0x331ba8: 0x8ea2078c  lw          $v0, 0x78C($s5)
    ctx->pc = 0x331ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1932)));
label_331bac:
    // 0x331bac: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_331bb0:
    if (ctx->pc == 0x331BB0u) {
        ctx->pc = 0x331BB4u;
        goto label_331bb4;
    }
    ctx->pc = 0x331BACu;
    {
        const bool branch_taken_0x331bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331bac) {
            ctx->pc = 0x331BD0u;
            goto label_331bd0;
        }
    }
    ctx->pc = 0x331BB4u;
label_331bb4:
    // 0x331bb4: 0xc0ca6b4  jal         func_329AD0
label_331bb8:
    if (ctx->pc == 0x331BB8u) {
        ctx->pc = 0x331BB8u;
            // 0x331bb8: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->pc = 0x331BBCu;
        goto label_331bbc;
    }
    ctx->pc = 0x331BB4u;
    SET_GPR_U32(ctx, 31, 0x331BBCu);
    ctx->pc = 0x331BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331BB4u;
            // 0x331bb8: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331BBCu; }
        if (ctx->pc != 0x331BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331BBCu; }
        if (ctx->pc != 0x331BBCu) { return; }
    }
    ctx->pc = 0x331BBCu;
label_331bbc:
    // 0x331bbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x331bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_331bc0:
    // 0x331bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x331bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_331bc4:
    // 0x331bc4: 0xc120610  jal         func_481840
label_331bc8:
    if (ctx->pc == 0x331BC8u) {
        ctx->pc = 0x331BC8u;
            // 0x331bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331BCCu;
        goto label_331bcc;
    }
    ctx->pc = 0x331BC4u;
    SET_GPR_U32(ctx, 31, 0x331BCCu);
    ctx->pc = 0x331BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331BC4u;
            // 0x331bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481840u;
    if (runtime->hasFunction(0x481840u)) {
        auto targetFn = runtime->lookupFunction(0x481840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331BCCu; }
        if (ctx->pc != 0x331BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481840_0x481840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331BCCu; }
        if (ctx->pc != 0x331BCCu) { return; }
    }
    ctx->pc = 0x331BCCu;
label_331bcc:
    // 0x331bcc: 0x0  nop
    ctx->pc = 0x331bccu;
    // NOP
label_331bd0:
    // 0x331bd0: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x331bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_331bd4:
    // 0x331bd4: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x331bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_331bd8:
    // 0x331bd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x331bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_331bdc:
    // 0x331bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x331bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_331be0:
    // 0x331be0: 0x90670011  lbu         $a3, 0x11($v1)
    ctx->pc = 0x331be0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
label_331be4:
    // 0x331be4: 0x94680012  lhu         $t0, 0x12($v1)
    ctx->pc = 0x331be4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_331be8:
    // 0x331be8: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x331be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_331bec:
    // 0x331bec: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x331becu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_331bf0:
    // 0x331bf0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x331bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_331bf4:
    // 0x331bf4: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x331bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_331bf8:
    // 0x331bf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_331bfc:
    // 0x331bfc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x331bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_331c00:
    // 0x331c00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x331c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_331c04:
    // 0x331c04: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x331c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_331c08:
    // 0x331c08: 0xc120598  jal         func_481660
label_331c0c:
    if (ctx->pc == 0x331C0Cu) {
        ctx->pc = 0x331C0Cu;
            // 0x331c0c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x331C10u;
        goto label_331c10;
    }
    ctx->pc = 0x331C08u;
    SET_GPR_U32(ctx, 31, 0x331C10u);
    ctx->pc = 0x331C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331C08u;
            // 0x331c0c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481660u;
    if (runtime->hasFunction(0x481660u)) {
        auto targetFn = runtime->lookupFunction(0x481660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C10u; }
        if (ctx->pc != 0x331C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481660_0x481660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C10u; }
        if (ctx->pc != 0x331C10u) { return; }
    }
    ctx->pc = 0x331C10u;
label_331c10:
    // 0x331c10: 0x1000002f  b           . + 4 + (0x2F << 2)
label_331c14:
    if (ctx->pc == 0x331C14u) {
        ctx->pc = 0x331C18u;
        goto label_331c18;
    }
    ctx->pc = 0x331C10u;
    {
        const bool branch_taken_0x331c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331c10) {
            ctx->pc = 0x331CD0u;
            goto label_331cd0;
        }
    }
    ctx->pc = 0x331C18u;
label_331c18:
    // 0x331c18: 0xc0ca6b4  jal         func_329AD0
label_331c1c:
    if (ctx->pc == 0x331C1Cu) {
        ctx->pc = 0x331C1Cu;
            // 0x331c1c: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->pc = 0x331C20u;
        goto label_331c20;
    }
    ctx->pc = 0x331C18u;
    SET_GPR_U32(ctx, 31, 0x331C20u);
    ctx->pc = 0x331C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331C18u;
            // 0x331c1c: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C20u; }
        if (ctx->pc != 0x331C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C20u; }
        if (ctx->pc != 0x331C20u) { return; }
    }
    ctx->pc = 0x331C20u;
label_331c20:
    // 0x331c20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x331c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_331c24:
    // 0x331c24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x331c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_331c28:
    // 0x331c28: 0xc120628  jal         func_4818A0
label_331c2c:
    if (ctx->pc == 0x331C2Cu) {
        ctx->pc = 0x331C2Cu;
            // 0x331c2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331C30u;
        goto label_331c30;
    }
    ctx->pc = 0x331C28u;
    SET_GPR_U32(ctx, 31, 0x331C30u);
    ctx->pc = 0x331C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331C28u;
            // 0x331c2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4818A0u;
    if (runtime->hasFunction(0x4818A0u)) {
        auto targetFn = runtime->lookupFunction(0x4818A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C30u; }
        if (ctx->pc != 0x331C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004818A0_0x4818a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C30u; }
        if (ctx->pc != 0x331C30u) { return; }
    }
    ctx->pc = 0x331C30u;
label_331c30:
    // 0x331c30: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x331c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_331c34:
    // 0x331c34: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x331c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_331c38:
    // 0x331c38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x331c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_331c3c:
    // 0x331c3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x331c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_331c40:
    // 0x331c40: 0x90670011  lbu         $a3, 0x11($v1)
    ctx->pc = 0x331c40u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
label_331c44:
    // 0x331c44: 0x94680012  lhu         $t0, 0x12($v1)
    ctx->pc = 0x331c44u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_331c48:
    // 0x331c48: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x331c48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_331c4c:
    // 0x331c4c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x331c4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_331c50:
    // 0x331c50: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x331c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_331c54:
    // 0x331c54: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x331c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_331c58:
    // 0x331c58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_331c5c:
    // 0x331c5c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x331c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_331c60:
    // 0x331c60: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x331c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_331c64:
    // 0x331c64: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x331c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_331c68:
    // 0x331c68: 0xc1205b0  jal         func_4816C0
label_331c6c:
    if (ctx->pc == 0x331C6Cu) {
        ctx->pc = 0x331C6Cu;
            // 0x331c6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x331C70u;
        goto label_331c70;
    }
    ctx->pc = 0x331C68u;
    SET_GPR_U32(ctx, 31, 0x331C70u);
    ctx->pc = 0x331C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331C68u;
            // 0x331c6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4816C0u;
    if (runtime->hasFunction(0x4816C0u)) {
        auto targetFn = runtime->lookupFunction(0x4816C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C70u; }
        if (ctx->pc != 0x331C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004816C0_0x4816c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C70u; }
        if (ctx->pc != 0x331C70u) { return; }
    }
    ctx->pc = 0x331C70u;
label_331c70:
    // 0x331c70: 0x10000017  b           . + 4 + (0x17 << 2)
label_331c74:
    if (ctx->pc == 0x331C74u) {
        ctx->pc = 0x331C78u;
        goto label_331c78;
    }
    ctx->pc = 0x331C70u;
    {
        const bool branch_taken_0x331c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331c70) {
            ctx->pc = 0x331CD0u;
            goto label_331cd0;
        }
    }
    ctx->pc = 0x331C78u;
label_331c78:
    // 0x331c78: 0xc0ca6b4  jal         func_329AD0
label_331c7c:
    if (ctx->pc == 0x331C7Cu) {
        ctx->pc = 0x331C7Cu;
            // 0x331c7c: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->pc = 0x331C80u;
        goto label_331c80;
    }
    ctx->pc = 0x331C78u;
    SET_GPR_U32(ctx, 31, 0x331C80u);
    ctx->pc = 0x331C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331C78u;
            // 0x331c7c: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C80u; }
        if (ctx->pc != 0x331C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C80u; }
        if (ctx->pc != 0x331C80u) { return; }
    }
    ctx->pc = 0x331C80u;
label_331c80:
    // 0x331c80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x331c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_331c84:
    // 0x331c84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x331c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_331c88:
    // 0x331c88: 0xc1205e0  jal         func_481780
label_331c8c:
    if (ctx->pc == 0x331C8Cu) {
        ctx->pc = 0x331C8Cu;
            // 0x331c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331C90u;
        goto label_331c90;
    }
    ctx->pc = 0x331C88u;
    SET_GPR_U32(ctx, 31, 0x331C90u);
    ctx->pc = 0x331C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331C88u;
            // 0x331c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481780u;
    if (runtime->hasFunction(0x481780u)) {
        auto targetFn = runtime->lookupFunction(0x481780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C90u; }
        if (ctx->pc != 0x331C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481780_0x481780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331C90u; }
        if (ctx->pc != 0x331C90u) { return; }
    }
    ctx->pc = 0x331C90u;
label_331c90:
    // 0x331c90: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x331c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_331c94:
    // 0x331c94: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x331c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_331c98:
    // 0x331c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x331c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_331c9c:
    // 0x331c9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x331c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_331ca0:
    // 0x331ca0: 0x90670011  lbu         $a3, 0x11($v1)
    ctx->pc = 0x331ca0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
label_331ca4:
    // 0x331ca4: 0x94680012  lhu         $t0, 0x12($v1)
    ctx->pc = 0x331ca4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_331ca8:
    // 0x331ca8: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x331ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_331cac:
    // 0x331cac: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x331cacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_331cb0:
    // 0x331cb0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x331cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_331cb4:
    // 0x331cb4: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x331cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_331cb8:
    // 0x331cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_331cbc:
    // 0x331cbc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x331cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_331cc0:
    // 0x331cc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x331cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_331cc4:
    // 0x331cc4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x331cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_331cc8:
    // 0x331cc8: 0xc120568  jal         func_4815A0
label_331ccc:
    if (ctx->pc == 0x331CCCu) {
        ctx->pc = 0x331CCCu;
            // 0x331ccc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x331CD0u;
        goto label_331cd0;
    }
    ctx->pc = 0x331CC8u;
    SET_GPR_U32(ctx, 31, 0x331CD0u);
    ctx->pc = 0x331CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331CC8u;
            // 0x331ccc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4815A0u;
    if (runtime->hasFunction(0x4815A0u)) {
        auto targetFn = runtime->lookupFunction(0x4815A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331CD0u; }
        if (ctx->pc != 0x331CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004815A0_0x4815a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331CD0u; }
        if (ctx->pc != 0x331CD0u) { return; }
    }
    ctx->pc = 0x331CD0u;
label_331cd0:
    // 0x331cd0: 0x8ea30780  lw          $v1, 0x780($s5)
    ctx->pc = 0x331cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_331cd4:
    // 0x331cd4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x331cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_331cd8:
    // 0x331cd8: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x331cd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_331cdc:
    // 0x331cdc: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
label_331ce0:
    if (ctx->pc == 0x331CE0u) {
        ctx->pc = 0x331CE0u;
            // 0x331ce0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x331CE4u;
        goto label_331ce4;
    }
    ctx->pc = 0x331CDCu;
    {
        const bool branch_taken_0x331cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331CDCu;
            // 0x331ce0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331cdc) {
            ctx->pc = 0x331B6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_331b6c;
        }
    }
    ctx->pc = 0x331CE4u;
label_331ce4:
    // 0x331ce4: 0x0  nop
    ctx->pc = 0x331ce4u;
    // NOP
label_331ce8:
    // 0x331ce8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x331ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_331cec:
    // 0x331cec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x331cecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_331cf0:
    // 0x331cf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x331cf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_331cf4:
    // 0x331cf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x331cf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_331cf8:
    // 0x331cf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_331cfc:
    // 0x331cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_331d00:
    // 0x331d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_331d04:
    // 0x331d04: 0x3e00008  jr          $ra
label_331d08:
    if (ctx->pc == 0x331D08u) {
        ctx->pc = 0x331D08u;
            // 0x331d08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x331D0Cu;
        goto label_331d0c;
    }
    ctx->pc = 0x331D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331D04u;
            // 0x331d08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x331D0Cu;
label_331d0c:
    // 0x331d0c: 0x0  nop
    ctx->pc = 0x331d0cu;
    // NOP
label_331d10:
    // 0x331d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_331d14:
    // 0x331d14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x331d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_331d18:
    // 0x331d18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x331d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_331d1c:
    // 0x331d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_331d20:
    // 0x331d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_331d24:
    // 0x331d24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x331d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_331d28:
    // 0x331d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_331d2c:
    // 0x331d2c: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x331d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_331d30:
    // 0x331d30: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x331d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_331d34:
    // 0x331d34: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x331d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_331d38:
    // 0x331d38: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_331d3c:
    if (ctx->pc == 0x331D3Cu) {
        ctx->pc = 0x331D3Cu;
            // 0x331d3c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331D40u;
        goto label_331d40;
    }
    ctx->pc = 0x331D38u;
    {
        const bool branch_taken_0x331d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x331D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331D38u;
            // 0x331d3c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d38) {
            ctx->pc = 0x331D60u;
            goto label_331d60;
        }
    }
    ctx->pc = 0x331D40u;
label_331d40:
    // 0x331d40: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x331d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_331d44:
    // 0x331d44: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_331d48:
    if (ctx->pc == 0x331D48u) {
        ctx->pc = 0x331D48u;
            // 0x331d48: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x331D4Cu;
        goto label_331d4c;
    }
    ctx->pc = 0x331D44u;
    {
        const bool branch_taken_0x331d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x331d44) {
            ctx->pc = 0x331D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331D44u;
            // 0x331d48: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331D64u;
            goto label_331d64;
        }
    }
    ctx->pc = 0x331D4Cu;
label_331d4c:
    // 0x331d4c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x331d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_331d50:
    // 0x331d50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_331d54:
    if (ctx->pc == 0x331D54u) {
        ctx->pc = 0x331D58u;
        goto label_331d58;
    }
    ctx->pc = 0x331D50u;
    {
        const bool branch_taken_0x331d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x331d50) {
            ctx->pc = 0x331D60u;
            goto label_331d60;
        }
    }
    ctx->pc = 0x331D58u;
label_331d58:
    // 0x331d58: 0x10000020  b           . + 4 + (0x20 << 2)
label_331d5c:
    if (ctx->pc == 0x331D5Cu) {
        ctx->pc = 0x331D5Cu;
            // 0x331d5c: 0x92420010  lbu         $v0, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x331D60u;
        goto label_331d60;
    }
    ctx->pc = 0x331D58u;
    {
        const bool branch_taken_0x331d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331D58u;
            // 0x331d5c: 0x92420010  lbu         $v0, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d58) {
            ctx->pc = 0x331DDCu;
            goto label_331ddc;
        }
    }
    ctx->pc = 0x331D60u;
label_331d60:
    // 0x331d60: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x331d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_331d64:
    // 0x331d64: 0xc040180  jal         func_100600
label_331d68:
    if (ctx->pc == 0x331D68u) {
        ctx->pc = 0x331D6Cu;
        goto label_331d6c;
    }
    ctx->pc = 0x331D64u;
    SET_GPR_U32(ctx, 31, 0x331D6Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331D6Cu; }
        if (ctx->pc != 0x331D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331D6Cu; }
        if (ctx->pc != 0x331D6Cu) { return; }
    }
    ctx->pc = 0x331D6Cu;
label_331d6c:
    // 0x331d6c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_331d70:
    if (ctx->pc == 0x331D70u) {
        ctx->pc = 0x331D70u;
            // 0x331d70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331D74u;
        goto label_331d74;
    }
    ctx->pc = 0x331D6Cu;
    {
        const bool branch_taken_0x331d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331D6Cu;
            // 0x331d70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d6c) {
            ctx->pc = 0x331F78u;
            goto label_331f78;
        }
    }
    ctx->pc = 0x331D74u;
label_331d74:
    // 0x331d74: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x331d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_331d78:
    // 0x331d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_331d7c:
    // 0x331d7c: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x331d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_331d80:
    // 0x331d80: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x331d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_331d84:
    // 0x331d84: 0xc10ca68  jal         func_4329A0
label_331d88:
    if (ctx->pc == 0x331D88u) {
        ctx->pc = 0x331D88u;
            // 0x331d88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331D8Cu;
        goto label_331d8c;
    }
    ctx->pc = 0x331D84u;
    SET_GPR_U32(ctx, 31, 0x331D8Cu);
    ctx->pc = 0x331D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331D84u;
            // 0x331d88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331D8Cu; }
        if (ctx->pc != 0x331D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331D8Cu; }
        if (ctx->pc != 0x331D8Cu) { return; }
    }
    ctx->pc = 0x331D8Cu;
label_331d8c:
    // 0x331d8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x331d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_331d90:
    // 0x331d90: 0x26420ca8  addiu       $v0, $s2, 0xCA8
    ctx->pc = 0x331d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3240));
label_331d94:
    // 0x331d94: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x331d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_331d98:
    // 0x331d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x331d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331d9c:
    // 0x331d9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x331d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_331da0:
    // 0x331da0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x331da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_331da4:
    // 0x331da4: 0x24638350  addiu       $v1, $v1, -0x7CB0
    ctx->pc = 0x331da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
label_331da8:
    // 0x331da8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x331da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_331dac:
    // 0x331dac: 0xa2110054  sb          $s1, 0x54($s0)
    ctx->pc = 0x331dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 17));
label_331db0:
    // 0x331db0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x331db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_331db4:
    // 0x331db4: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x331db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_331db8:
    // 0x331db8: 0xa204005c  sb          $a0, 0x5C($s0)
    ctx->pc = 0x331db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 4));
label_331dbc:
    // 0x331dbc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x331dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_331dc0:
    // 0x331dc0: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x331dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_331dc4:
    // 0x331dc4: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x331dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
label_331dc8:
    // 0x331dc8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x331dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_331dcc:
    // 0x331dcc: 0xc073234  jal         func_1CC8D0
label_331dd0:
    if (ctx->pc == 0x331DD0u) {
        ctx->pc = 0x331DD0u;
            // 0x331dd0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x331DD4u;
        goto label_331dd4;
    }
    ctx->pc = 0x331DCCu;
    SET_GPR_U32(ctx, 31, 0x331DD4u);
    ctx->pc = 0x331DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331DCCu;
            // 0x331dd0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331DD4u; }
        if (ctx->pc != 0x331DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331DD4u; }
        if (ctx->pc != 0x331DD4u) { return; }
    }
    ctx->pc = 0x331DD4u;
label_331dd4:
    // 0x331dd4: 0x10000069  b           . + 4 + (0x69 << 2)
label_331dd8:
    if (ctx->pc == 0x331DD8u) {
        ctx->pc = 0x331DD8u;
            // 0x331dd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x331DDCu;
        goto label_331ddc;
    }
    ctx->pc = 0x331DD4u;
    {
        const bool branch_taken_0x331dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331DD4u;
            // 0x331dd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331dd4) {
            ctx->pc = 0x331F7Cu;
            goto label_331f7c;
        }
    }
    ctx->pc = 0x331DDCu;
label_331ddc:
    // 0x331ddc: 0x2c420019  sltiu       $v0, $v0, 0x19
    ctx->pc = 0x331ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_331de0:
    // 0x331de0: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_331de4:
    if (ctx->pc == 0x331DE4u) {
        ctx->pc = 0x331DE4u;
            // 0x331de4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x331DE8u;
        goto label_331de8;
    }
    ctx->pc = 0x331DE0u;
    {
        const bool branch_taken_0x331de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331de0) {
            ctx->pc = 0x331DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331DE0u;
            // 0x331de4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331EC0u;
            goto label_331ec0;
        }
    }
    ctx->pc = 0x331DE8u;
label_331de8:
    // 0x331de8: 0x8e43095c  lw          $v1, 0x95C($s2)
    ctx->pc = 0x331de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2396)));
label_331dec:
    // 0x331dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331df0:
    // 0x331df0: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_331df4:
    if (ctx->pc == 0x331DF4u) {
        ctx->pc = 0x331DF8u;
        goto label_331df8;
    }
    ctx->pc = 0x331DF0u;
    {
        const bool branch_taken_0x331df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x331df0) {
            ctx->pc = 0x331EBCu;
            goto label_331ebc;
        }
    }
    ctx->pc = 0x331DF8u;
label_331df8:
    // 0x331df8: 0xc040180  jal         func_100600
label_331dfc:
    if (ctx->pc == 0x331DFCu) {
        ctx->pc = 0x331DFCu;
            // 0x331dfc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x331E00u;
        goto label_331e00;
    }
    ctx->pc = 0x331DF8u;
    SET_GPR_U32(ctx, 31, 0x331E00u);
    ctx->pc = 0x331DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331DF8u;
            // 0x331dfc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331E00u; }
        if (ctx->pc != 0x331E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331E00u; }
        if (ctx->pc != 0x331E00u) { return; }
    }
    ctx->pc = 0x331E00u;
label_331e00:
    // 0x331e00: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_331e04:
    if (ctx->pc == 0x331E04u) {
        ctx->pc = 0x331E04u;
            // 0x331e04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331E08u;
        goto label_331e08;
    }
    ctx->pc = 0x331E00u;
    {
        const bool branch_taken_0x331e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331E00u;
            // 0x331e04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e00) {
            ctx->pc = 0x331F78u;
            goto label_331f78;
        }
    }
    ctx->pc = 0x331E08u;
label_331e08:
    // 0x331e08: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x331e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_331e0c:
    // 0x331e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_331e10:
    // 0x331e10: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x331e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_331e14:
    // 0x331e14: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x331e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_331e18:
    // 0x331e18: 0xc10ca68  jal         func_4329A0
label_331e1c:
    if (ctx->pc == 0x331E1Cu) {
        ctx->pc = 0x331E1Cu;
            // 0x331e1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331E20u;
        goto label_331e20;
    }
    ctx->pc = 0x331E18u;
    SET_GPR_U32(ctx, 31, 0x331E20u);
    ctx->pc = 0x331E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331E18u;
            // 0x331e1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331E20u; }
        if (ctx->pc != 0x331E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331E20u; }
        if (ctx->pc != 0x331E20u) { return; }
    }
    ctx->pc = 0x331E20u;
label_331e20:
    // 0x331e20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x331e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_331e24:
    // 0x331e24: 0x26440ca8  addiu       $a0, $s2, 0xCA8
    ctx->pc = 0x331e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3240));
label_331e28:
    // 0x331e28: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x331e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_331e2c:
    // 0x331e2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x331e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_331e30:
    // 0x331e30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x331e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_331e34:
    // 0x331e34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x331e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_331e38:
    // 0x331e38: 0x244246e0  addiu       $v0, $v0, 0x46E0
    ctx->pc = 0x331e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18144));
label_331e3c:
    // 0x331e3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x331e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_331e40:
    // 0x331e40: 0xa2110054  sb          $s1, 0x54($s0)
    ctx->pc = 0x331e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 17));
label_331e44:
    // 0x331e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331e48:
    // 0x331e48: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x331e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_331e4c:
    // 0x331e4c: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x331e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
label_331e50:
    // 0x331e50: 0xa202005d  sb          $v0, 0x5D($s0)
    ctx->pc = 0x331e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 2));
label_331e54:
    // 0x331e54: 0xa200005e  sb          $zero, 0x5E($s0)
    ctx->pc = 0x331e54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 94), (uint8_t)GPR_U32(ctx, 0));
label_331e58:
    // 0x331e58: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x331e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_331e5c:
    // 0x331e5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x331e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_331e60:
    // 0x331e60: 0x9202005d  lbu         $v0, 0x5D($s0)
    ctx->pc = 0x331e60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
label_331e64:
    // 0x331e64: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_331e68:
    if (ctx->pc == 0x331E68u) {
        ctx->pc = 0x331E68u;
            // 0x331e68: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->pc = 0x331E6Cu;
        goto label_331e6c;
    }
    ctx->pc = 0x331E64u;
    {
        const bool branch_taken_0x331e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331e64) {
            ctx->pc = 0x331E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331E64u;
            // 0x331e68: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331EACu;
            goto label_331eac;
        }
    }
    ctx->pc = 0x331E6Cu;
label_331e6c:
    // 0x331e6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x331e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_331e70:
    // 0x331e70: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x331e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_331e74:
    // 0x331e74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x331e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_331e78:
    // 0x331e78: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x331e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_331e7c:
    // 0x331e7c: 0x320f809  jalr        $t9
label_331e80:
    if (ctx->pc == 0x331E80u) {
        ctx->pc = 0x331E80u;
            // 0x331e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331E84u;
        goto label_331e84;
    }
    ctx->pc = 0x331E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331E84u);
        ctx->pc = 0x331E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331E7Cu;
            // 0x331e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x331E84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331E84u; }
            if (ctx->pc != 0x331E84u) { return; }
        }
        }
    }
    ctx->pc = 0x331E84u;
label_331e84:
    // 0x331e84: 0xc0746e4  jal         func_1D1B90
label_331e88:
    if (ctx->pc == 0x331E88u) {
        ctx->pc = 0x331E88u;
            // 0x331e88: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x331E8Cu;
        goto label_331e8c;
    }
    ctx->pc = 0x331E84u;
    SET_GPR_U32(ctx, 31, 0x331E8Cu);
    ctx->pc = 0x331E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331E84u;
            // 0x331e88: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1B90u;
    if (runtime->hasFunction(0x1D1B90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331E8Cu; }
        if (ctx->pc != 0x331E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B90_0x1d1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331E8Cu; }
        if (ctx->pc != 0x331E8Cu) { return; }
    }
    ctx->pc = 0x331E8Cu;
label_331e8c:
    // 0x331e8c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x331e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_331e90:
    // 0x331e90: 0xc073234  jal         func_1CC8D0
label_331e94:
    if (ctx->pc == 0x331E94u) {
        ctx->pc = 0x331E94u;
            // 0x331e94: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x331E98u;
        goto label_331e98;
    }
    ctx->pc = 0x331E90u;
    SET_GPR_U32(ctx, 31, 0x331E98u);
    ctx->pc = 0x331E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331E90u;
            // 0x331e94: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331E98u; }
        if (ctx->pc != 0x331E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331E98u; }
        if (ctx->pc != 0x331E98u) { return; }
    }
    ctx->pc = 0x331E98u;
label_331e98:
    // 0x331e98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x331e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_331e9c:
    // 0x331e9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331ea0:
    // 0x331ea0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x331ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_331ea4:
    // 0x331ea4: 0xa0430082  sb          $v1, 0x82($v0)
    ctx->pc = 0x331ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 3));
label_331ea8:
    // 0x331ea8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x331ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_331eac:
    // 0x331eac: 0xc073234  jal         func_1CC8D0
label_331eb0:
    if (ctx->pc == 0x331EB0u) {
        ctx->pc = 0x331EB0u;
            // 0x331eb0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x331EB4u;
        goto label_331eb4;
    }
    ctx->pc = 0x331EACu;
    SET_GPR_U32(ctx, 31, 0x331EB4u);
    ctx->pc = 0x331EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331EACu;
            // 0x331eb0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331EB4u; }
        if (ctx->pc != 0x331EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331EB4u; }
        if (ctx->pc != 0x331EB4u) { return; }
    }
    ctx->pc = 0x331EB4u;
label_331eb4:
    // 0x331eb4: 0x10000030  b           . + 4 + (0x30 << 2)
label_331eb8:
    if (ctx->pc == 0x331EB8u) {
        ctx->pc = 0x331EBCu;
        goto label_331ebc;
    }
    ctx->pc = 0x331EB4u;
    {
        const bool branch_taken_0x331eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331eb4) {
            ctx->pc = 0x331F78u;
            goto label_331f78;
        }
    }
    ctx->pc = 0x331EBCu;
label_331ebc:
    // 0x331ebc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x331ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_331ec0:
    // 0x331ec0: 0xc040180  jal         func_100600
label_331ec4:
    if (ctx->pc == 0x331EC4u) {
        ctx->pc = 0x331EC8u;
        goto label_331ec8;
    }
    ctx->pc = 0x331EC0u;
    SET_GPR_U32(ctx, 31, 0x331EC8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331EC8u; }
        if (ctx->pc != 0x331EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331EC8u; }
        if (ctx->pc != 0x331EC8u) { return; }
    }
    ctx->pc = 0x331EC8u;
label_331ec8:
    // 0x331ec8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_331ecc:
    if (ctx->pc == 0x331ECCu) {
        ctx->pc = 0x331ECCu;
            // 0x331ecc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331ED0u;
        goto label_331ed0;
    }
    ctx->pc = 0x331EC8u;
    {
        const bool branch_taken_0x331ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331EC8u;
            // 0x331ecc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ec8) {
            ctx->pc = 0x331F78u;
            goto label_331f78;
        }
    }
    ctx->pc = 0x331ED0u;
label_331ed0:
    // 0x331ed0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x331ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_331ed4:
    // 0x331ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_331ed8:
    // 0x331ed8: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x331ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_331edc:
    // 0x331edc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x331edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_331ee0:
    // 0x331ee0: 0xc10ca68  jal         func_4329A0
label_331ee4:
    if (ctx->pc == 0x331EE4u) {
        ctx->pc = 0x331EE4u;
            // 0x331ee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331EE8u;
        goto label_331ee8;
    }
    ctx->pc = 0x331EE0u;
    SET_GPR_U32(ctx, 31, 0x331EE8u);
    ctx->pc = 0x331EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331EE0u;
            // 0x331ee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331EE8u; }
        if (ctx->pc != 0x331EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331EE8u; }
        if (ctx->pc != 0x331EE8u) { return; }
    }
    ctx->pc = 0x331EE8u;
label_331ee8:
    // 0x331ee8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x331ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_331eec:
    // 0x331eec: 0x26420ca8  addiu       $v0, $s2, 0xCA8
    ctx->pc = 0x331eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3240));
label_331ef0:
    // 0x331ef0: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x331ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_331ef4:
    // 0x331ef4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x331ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_331ef8:
    // 0x331ef8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x331ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_331efc:
    // 0x331efc: 0x246346e0  addiu       $v1, $v1, 0x46E0
    ctx->pc = 0x331efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18144));
label_331f00:
    // 0x331f00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x331f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_331f04:
    // 0x331f04: 0xa2110054  sb          $s1, 0x54($s0)
    ctx->pc = 0x331f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 17));
label_331f08:
    // 0x331f08: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x331f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_331f0c:
    // 0x331f0c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x331f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_331f10:
    // 0x331f10: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x331f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
label_331f14:
    // 0x331f14: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x331f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
label_331f18:
    // 0x331f18: 0xa200005e  sb          $zero, 0x5E($s0)
    ctx->pc = 0x331f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 94), (uint8_t)GPR_U32(ctx, 0));
label_331f1c:
    // 0x331f1c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x331f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_331f20:
    // 0x331f20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x331f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_331f24:
    // 0x331f24: 0x9202005d  lbu         $v0, 0x5D($s0)
    ctx->pc = 0x331f24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
label_331f28:
    // 0x331f28: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_331f2c:
    if (ctx->pc == 0x331F2Cu) {
        ctx->pc = 0x331F2Cu;
            // 0x331f2c: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->pc = 0x331F30u;
        goto label_331f30;
    }
    ctx->pc = 0x331F28u;
    {
        const bool branch_taken_0x331f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331f28) {
            ctx->pc = 0x331F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331F28u;
            // 0x331f2c: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331F70u;
            goto label_331f70;
        }
    }
    ctx->pc = 0x331F30u;
label_331f30:
    // 0x331f30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x331f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_331f34:
    // 0x331f34: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x331f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_331f38:
    // 0x331f38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x331f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_331f3c:
    // 0x331f3c: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x331f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_331f40:
    // 0x331f40: 0x320f809  jalr        $t9
label_331f44:
    if (ctx->pc == 0x331F44u) {
        ctx->pc = 0x331F44u;
            // 0x331f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331F48u;
        goto label_331f48;
    }
    ctx->pc = 0x331F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331F48u);
        ctx->pc = 0x331F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331F40u;
            // 0x331f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x331F48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331F48u; }
            if (ctx->pc != 0x331F48u) { return; }
        }
        }
    }
    ctx->pc = 0x331F48u;
label_331f48:
    // 0x331f48: 0xc0746e4  jal         func_1D1B90
label_331f4c:
    if (ctx->pc == 0x331F4Cu) {
        ctx->pc = 0x331F4Cu;
            // 0x331f4c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x331F50u;
        goto label_331f50;
    }
    ctx->pc = 0x331F48u;
    SET_GPR_U32(ctx, 31, 0x331F50u);
    ctx->pc = 0x331F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331F48u;
            // 0x331f4c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1B90u;
    if (runtime->hasFunction(0x1D1B90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331F50u; }
        if (ctx->pc != 0x331F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B90_0x1d1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331F50u; }
        if (ctx->pc != 0x331F50u) { return; }
    }
    ctx->pc = 0x331F50u;
label_331f50:
    // 0x331f50: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x331f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_331f54:
    // 0x331f54: 0xc073234  jal         func_1CC8D0
label_331f58:
    if (ctx->pc == 0x331F58u) {
        ctx->pc = 0x331F58u;
            // 0x331f58: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x331F5Cu;
        goto label_331f5c;
    }
    ctx->pc = 0x331F54u;
    SET_GPR_U32(ctx, 31, 0x331F5Cu);
    ctx->pc = 0x331F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331F54u;
            // 0x331f58: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331F5Cu; }
        if (ctx->pc != 0x331F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331F5Cu; }
        if (ctx->pc != 0x331F5Cu) { return; }
    }
    ctx->pc = 0x331F5Cu;
label_331f5c:
    // 0x331f5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x331f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_331f60:
    // 0x331f60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331f64:
    // 0x331f64: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x331f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_331f68:
    // 0x331f68: 0xa0430082  sb          $v1, 0x82($v0)
    ctx->pc = 0x331f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 3));
label_331f6c:
    // 0x331f6c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x331f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_331f70:
    // 0x331f70: 0xc073234  jal         func_1CC8D0
label_331f74:
    if (ctx->pc == 0x331F74u) {
        ctx->pc = 0x331F74u;
            // 0x331f74: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x331F78u;
        goto label_331f78;
    }
    ctx->pc = 0x331F70u;
    SET_GPR_U32(ctx, 31, 0x331F78u);
    ctx->pc = 0x331F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331F70u;
            // 0x331f74: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331F78u; }
        if (ctx->pc != 0x331F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331F78u; }
        if (ctx->pc != 0x331F78u) { return; }
    }
    ctx->pc = 0x331F78u;
label_331f78:
    // 0x331f78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x331f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_331f7c:
    // 0x331f7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_331f80:
    // 0x331f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_331f84:
    // 0x331f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_331f88:
    // 0x331f88: 0x3e00008  jr          $ra
label_331f8c:
    if (ctx->pc == 0x331F8Cu) {
        ctx->pc = 0x331F8Cu;
            // 0x331f8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x331F90u;
        goto label_331f90;
    }
    ctx->pc = 0x331F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331F88u;
            // 0x331f8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x331F90u;
label_331f90:
    // 0x331f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x331f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_331f94:
    // 0x331f94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x331f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_331f98:
    // 0x331f98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x331f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_331f9c:
    // 0x331f9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x331f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_331fa0:
    // 0x331fa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x331fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_331fa4:
    // 0x331fa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_331fa8:
    // 0x331fa8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x331fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_331fac:
    // 0x331fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_331fb0:
    // 0x331fb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x331fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_331fb4:
    // 0x331fb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_331fb8:
    // 0x331fb8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x331fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_331fbc:
    // 0x331fbc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x331fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_331fc0:
    // 0x331fc0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_331fc4:
    if (ctx->pc == 0x331FC4u) {
        ctx->pc = 0x331FC4u;
            // 0x331fc4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331FC8u;
        goto label_331fc8;
    }
    ctx->pc = 0x331FC0u;
    {
        const bool branch_taken_0x331fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x331FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331FC0u;
            // 0x331fc4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fc0) {
            ctx->pc = 0x331FD0u;
            goto label_331fd0;
        }
    }
    ctx->pc = 0x331FC8u;
label_331fc8:
    // 0x331fc8: 0x10000013  b           . + 4 + (0x13 << 2)
label_331fcc:
    if (ctx->pc == 0x331FCCu) {
        ctx->pc = 0x331FCCu;
            // 0x331fcc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x331FD0u;
        goto label_331fd0;
    }
    ctx->pc = 0x331FC8u;
    {
        const bool branch_taken_0x331fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331FC8u;
            // 0x331fcc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fc8) {
            ctx->pc = 0x332018u;
            goto label_332018;
        }
    }
    ctx->pc = 0x331FD0u;
label_331fd0:
    // 0x331fd0: 0xc040180  jal         func_100600
label_331fd4:
    if (ctx->pc == 0x331FD4u) {
        ctx->pc = 0x331FD4u;
            // 0x331fd4: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x331FD8u;
        goto label_331fd8;
    }
    ctx->pc = 0x331FD0u;
    SET_GPR_U32(ctx, 31, 0x331FD8u);
    ctx->pc = 0x331FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331FD0u;
            // 0x331fd4: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331FD8u; }
        if (ctx->pc != 0x331FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331FD8u; }
        if (ctx->pc != 0x331FD8u) { return; }
    }
    ctx->pc = 0x331FD8u;
label_331fd8:
    // 0x331fd8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_331fdc:
    if (ctx->pc == 0x331FDCu) {
        ctx->pc = 0x331FDCu;
            // 0x331fdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331FE0u;
        goto label_331fe0;
    }
    ctx->pc = 0x331FD8u;
    {
        const bool branch_taken_0x331fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331fd8) {
            ctx->pc = 0x331FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331FD8u;
            // 0x331fdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331FF4u;
            goto label_331ff4;
        }
    }
    ctx->pc = 0x331FE0u;
label_331fe0:
    // 0x331fe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x331fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_331fe4:
    // 0x331fe4: 0x26660ca8  addiu       $a2, $s3, 0xCA8
    ctx->pc = 0x331fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 3240));
label_331fe8:
    // 0x331fe8: 0xc0c5a64  jal         func_316990
label_331fec:
    if (ctx->pc == 0x331FECu) {
        ctx->pc = 0x331FECu;
            // 0x331fec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331FF0u;
        goto label_331ff0;
    }
    ctx->pc = 0x331FE8u;
    SET_GPR_U32(ctx, 31, 0x331FF0u);
    ctx->pc = 0x331FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331FE8u;
            // 0x331fec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316990u;
    if (runtime->hasFunction(0x316990u)) {
        auto targetFn = runtime->lookupFunction(0x316990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331FF0u; }
        if (ctx->pc != 0x331FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316990_0x316990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331FF0u; }
        if (ctx->pc != 0x331FF0u) { return; }
    }
    ctx->pc = 0x331FF0u;
label_331ff0:
    // 0x331ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_331ff4:
    // 0x331ff4: 0xc040180  jal         func_100600
label_331ff8:
    if (ctx->pc == 0x331FF8u) {
        ctx->pc = 0x331FF8u;
            // 0x331ff8: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->pc = 0x331FFCu;
        goto label_331ffc;
    }
    ctx->pc = 0x331FF4u;
    SET_GPR_U32(ctx, 31, 0x331FFCu);
    ctx->pc = 0x331FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331FF4u;
            // 0x331ff8: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331FFCu; }
        if (ctx->pc != 0x331FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331FFCu; }
        if (ctx->pc != 0x331FFCu) { return; }
    }
    ctx->pc = 0x331FFCu;
label_331ffc:
    // 0x331ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x331ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_332000:
    // 0x332000: 0x50800025  beql        $a0, $zero, . + 4 + (0x25 << 2)
label_332004:
    if (ctx->pc == 0x332004u) {
        ctx->pc = 0x332004u;
            // 0x332004: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
        ctx->pc = 0x332008u;
        goto label_332008;
    }
    ctx->pc = 0x332000u;
    {
        const bool branch_taken_0x332000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x332000) {
            ctx->pc = 0x332004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332000u;
            // 0x332004: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332098u;
            goto label_332098;
        }
    }
    ctx->pc = 0x332008u;
label_332008:
    // 0x332008: 0xc13ff28  jal         func_4FFCA0
label_33200c:
    if (ctx->pc == 0x33200Cu) {
        ctx->pc = 0x33200Cu;
            // 0x33200c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332010u;
        goto label_332010;
    }
    ctx->pc = 0x332008u;
    SET_GPR_U32(ctx, 31, 0x332010u);
    ctx->pc = 0x33200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332008u;
            // 0x33200c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FFCA0u;
    if (runtime->hasFunction(0x4FFCA0u)) {
        auto targetFn = runtime->lookupFunction(0x4FFCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332010u; }
        if (ctx->pc != 0x332010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FFCA0_0x4ffca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332010u; }
        if (ctx->pc != 0x332010u) { return; }
    }
    ctx->pc = 0x332010u;
label_332010:
    // 0x332010: 0x10000020  b           . + 4 + (0x20 << 2)
label_332014:
    if (ctx->pc == 0x332014u) {
        ctx->pc = 0x332018u;
        goto label_332018;
    }
    ctx->pc = 0x332010u;
    {
        const bool branch_taken_0x332010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332010) {
            ctx->pc = 0x332094u;
            goto label_332094;
        }
    }
    ctx->pc = 0x332018u;
label_332018:
    // 0x332018: 0xc040180  jal         func_100600
label_33201c:
    if (ctx->pc == 0x33201Cu) {
        ctx->pc = 0x332020u;
        goto label_332020;
    }
    ctx->pc = 0x332018u;
    SET_GPR_U32(ctx, 31, 0x332020u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332020u; }
        if (ctx->pc != 0x332020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332020u; }
        if (ctx->pc != 0x332020u) { return; }
    }
    ctx->pc = 0x332020u;
label_332020:
    // 0x332020: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_332024:
    if (ctx->pc == 0x332024u) {
        ctx->pc = 0x332024u;
            // 0x332024: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332028u;
        goto label_332028;
    }
    ctx->pc = 0x332020u;
    {
        const bool branch_taken_0x332020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332020u;
            // 0x332024: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332020) {
            ctx->pc = 0x332094u;
            goto label_332094;
        }
    }
    ctx->pc = 0x332028u;
label_332028:
    // 0x332028: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x332028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33202c:
    // 0x33202c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_332030:
    // 0x332030: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x332030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_332034:
    // 0x332034: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x332034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_332038:
    // 0x332038: 0xc10ca68  jal         func_4329A0
label_33203c:
    if (ctx->pc == 0x33203Cu) {
        ctx->pc = 0x33203Cu;
            // 0x33203c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332040u;
        goto label_332040;
    }
    ctx->pc = 0x332038u;
    SET_GPR_U32(ctx, 31, 0x332040u);
    ctx->pc = 0x33203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332038u;
            // 0x33203c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332040u; }
        if (ctx->pc != 0x332040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332040u; }
        if (ctx->pc != 0x332040u) { return; }
    }
    ctx->pc = 0x332040u;
label_332040:
    // 0x332040: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x332040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_332044:
    // 0x332044: 0x26630ca8  addiu       $v1, $s3, 0xCA8
    ctx->pc = 0x332044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3240));
label_332048:
    // 0x332048: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x332048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_33204c:
    // 0x33204c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_332050:
    // 0x332050: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x332050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_332054:
    // 0x332054: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x332054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_332058:
    // 0x332058: 0x24844be0  addiu       $a0, $a0, 0x4BE0
    ctx->pc = 0x332058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19424));
label_33205c:
    // 0x33205c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x33205cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_332060:
    // 0x332060: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x332060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_332064:
    // 0x332064: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x332064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_332068:
    // 0x332068: 0xa2120058  sb          $s2, 0x58($s0)
    ctx->pc = 0x332068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 18));
label_33206c:
    // 0x33206c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33206cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_332070:
    // 0x332070: 0xa2050059  sb          $a1, 0x59($s0)
    ctx->pc = 0x332070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 5));
label_332074:
    // 0x332074: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x332074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_332078:
    // 0x332078: 0x90630081  lbu         $v1, 0x81($v1)
    ctx->pc = 0x332078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
label_33207c:
    // 0x33207c: 0xa203005a  sb          $v1, 0x5A($s0)
    ctx->pc = 0x33207cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
label_332080:
    // 0x332080: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x332080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
label_332084:
    // 0x332084: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x332084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_332088:
    // 0x332088: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x332088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_33208c:
    // 0x33208c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x33208cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_332090:
    // 0x332090: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x332090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_332094:
    // 0x332094: 0xae11005c  sw          $s1, 0x5C($s0)
    ctx->pc = 0x332094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
label_332098:
    // 0x332098: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x332098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
label_33209c:
    // 0x33209c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3320a0:
    // 0x3320a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3320a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3320a4:
    // 0x3320a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3320a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3320a8:
    // 0x3320a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3320a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3320ac:
    // 0x3320ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3320acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3320b0:
    // 0x3320b0: 0x3e00008  jr          $ra
label_3320b4:
    if (ctx->pc == 0x3320B4u) {
        ctx->pc = 0x3320B4u;
            // 0x3320b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3320B8u;
        goto label_3320b8;
    }
    ctx->pc = 0x3320B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3320B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3320B0u;
            // 0x3320b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3320B8u;
label_3320b8:
    // 0x3320b8: 0x0  nop
    ctx->pc = 0x3320b8u;
    // NOP
label_3320bc:
    // 0x3320bc: 0x0  nop
    ctx->pc = 0x3320bcu;
    // NOP
}
