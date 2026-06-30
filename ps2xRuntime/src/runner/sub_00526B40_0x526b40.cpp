#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00526B40
// Address: 0x526b40 - 0x5270e0
void sub_00526B40_0x526b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00526B40_0x526b40");
#endif

    switch (ctx->pc) {
        case 0x526b40u: goto label_526b40;
        case 0x526b44u: goto label_526b44;
        case 0x526b48u: goto label_526b48;
        case 0x526b4cu: goto label_526b4c;
        case 0x526b50u: goto label_526b50;
        case 0x526b54u: goto label_526b54;
        case 0x526b58u: goto label_526b58;
        case 0x526b5cu: goto label_526b5c;
        case 0x526b60u: goto label_526b60;
        case 0x526b64u: goto label_526b64;
        case 0x526b68u: goto label_526b68;
        case 0x526b6cu: goto label_526b6c;
        case 0x526b70u: goto label_526b70;
        case 0x526b74u: goto label_526b74;
        case 0x526b78u: goto label_526b78;
        case 0x526b7cu: goto label_526b7c;
        case 0x526b80u: goto label_526b80;
        case 0x526b84u: goto label_526b84;
        case 0x526b88u: goto label_526b88;
        case 0x526b8cu: goto label_526b8c;
        case 0x526b90u: goto label_526b90;
        case 0x526b94u: goto label_526b94;
        case 0x526b98u: goto label_526b98;
        case 0x526b9cu: goto label_526b9c;
        case 0x526ba0u: goto label_526ba0;
        case 0x526ba4u: goto label_526ba4;
        case 0x526ba8u: goto label_526ba8;
        case 0x526bacu: goto label_526bac;
        case 0x526bb0u: goto label_526bb0;
        case 0x526bb4u: goto label_526bb4;
        case 0x526bb8u: goto label_526bb8;
        case 0x526bbcu: goto label_526bbc;
        case 0x526bc0u: goto label_526bc0;
        case 0x526bc4u: goto label_526bc4;
        case 0x526bc8u: goto label_526bc8;
        case 0x526bccu: goto label_526bcc;
        case 0x526bd0u: goto label_526bd0;
        case 0x526bd4u: goto label_526bd4;
        case 0x526bd8u: goto label_526bd8;
        case 0x526bdcu: goto label_526bdc;
        case 0x526be0u: goto label_526be0;
        case 0x526be4u: goto label_526be4;
        case 0x526be8u: goto label_526be8;
        case 0x526becu: goto label_526bec;
        case 0x526bf0u: goto label_526bf0;
        case 0x526bf4u: goto label_526bf4;
        case 0x526bf8u: goto label_526bf8;
        case 0x526bfcu: goto label_526bfc;
        case 0x526c00u: goto label_526c00;
        case 0x526c04u: goto label_526c04;
        case 0x526c08u: goto label_526c08;
        case 0x526c0cu: goto label_526c0c;
        case 0x526c10u: goto label_526c10;
        case 0x526c14u: goto label_526c14;
        case 0x526c18u: goto label_526c18;
        case 0x526c1cu: goto label_526c1c;
        case 0x526c20u: goto label_526c20;
        case 0x526c24u: goto label_526c24;
        case 0x526c28u: goto label_526c28;
        case 0x526c2cu: goto label_526c2c;
        case 0x526c30u: goto label_526c30;
        case 0x526c34u: goto label_526c34;
        case 0x526c38u: goto label_526c38;
        case 0x526c3cu: goto label_526c3c;
        case 0x526c40u: goto label_526c40;
        case 0x526c44u: goto label_526c44;
        case 0x526c48u: goto label_526c48;
        case 0x526c4cu: goto label_526c4c;
        case 0x526c50u: goto label_526c50;
        case 0x526c54u: goto label_526c54;
        case 0x526c58u: goto label_526c58;
        case 0x526c5cu: goto label_526c5c;
        case 0x526c60u: goto label_526c60;
        case 0x526c64u: goto label_526c64;
        case 0x526c68u: goto label_526c68;
        case 0x526c6cu: goto label_526c6c;
        case 0x526c70u: goto label_526c70;
        case 0x526c74u: goto label_526c74;
        case 0x526c78u: goto label_526c78;
        case 0x526c7cu: goto label_526c7c;
        case 0x526c80u: goto label_526c80;
        case 0x526c84u: goto label_526c84;
        case 0x526c88u: goto label_526c88;
        case 0x526c8cu: goto label_526c8c;
        case 0x526c90u: goto label_526c90;
        case 0x526c94u: goto label_526c94;
        case 0x526c98u: goto label_526c98;
        case 0x526c9cu: goto label_526c9c;
        case 0x526ca0u: goto label_526ca0;
        case 0x526ca4u: goto label_526ca4;
        case 0x526ca8u: goto label_526ca8;
        case 0x526cacu: goto label_526cac;
        case 0x526cb0u: goto label_526cb0;
        case 0x526cb4u: goto label_526cb4;
        case 0x526cb8u: goto label_526cb8;
        case 0x526cbcu: goto label_526cbc;
        case 0x526cc0u: goto label_526cc0;
        case 0x526cc4u: goto label_526cc4;
        case 0x526cc8u: goto label_526cc8;
        case 0x526cccu: goto label_526ccc;
        case 0x526cd0u: goto label_526cd0;
        case 0x526cd4u: goto label_526cd4;
        case 0x526cd8u: goto label_526cd8;
        case 0x526cdcu: goto label_526cdc;
        case 0x526ce0u: goto label_526ce0;
        case 0x526ce4u: goto label_526ce4;
        case 0x526ce8u: goto label_526ce8;
        case 0x526cecu: goto label_526cec;
        case 0x526cf0u: goto label_526cf0;
        case 0x526cf4u: goto label_526cf4;
        case 0x526cf8u: goto label_526cf8;
        case 0x526cfcu: goto label_526cfc;
        case 0x526d00u: goto label_526d00;
        case 0x526d04u: goto label_526d04;
        case 0x526d08u: goto label_526d08;
        case 0x526d0cu: goto label_526d0c;
        case 0x526d10u: goto label_526d10;
        case 0x526d14u: goto label_526d14;
        case 0x526d18u: goto label_526d18;
        case 0x526d1cu: goto label_526d1c;
        case 0x526d20u: goto label_526d20;
        case 0x526d24u: goto label_526d24;
        case 0x526d28u: goto label_526d28;
        case 0x526d2cu: goto label_526d2c;
        case 0x526d30u: goto label_526d30;
        case 0x526d34u: goto label_526d34;
        case 0x526d38u: goto label_526d38;
        case 0x526d3cu: goto label_526d3c;
        case 0x526d40u: goto label_526d40;
        case 0x526d44u: goto label_526d44;
        case 0x526d48u: goto label_526d48;
        case 0x526d4cu: goto label_526d4c;
        case 0x526d50u: goto label_526d50;
        case 0x526d54u: goto label_526d54;
        case 0x526d58u: goto label_526d58;
        case 0x526d5cu: goto label_526d5c;
        case 0x526d60u: goto label_526d60;
        case 0x526d64u: goto label_526d64;
        case 0x526d68u: goto label_526d68;
        case 0x526d6cu: goto label_526d6c;
        case 0x526d70u: goto label_526d70;
        case 0x526d74u: goto label_526d74;
        case 0x526d78u: goto label_526d78;
        case 0x526d7cu: goto label_526d7c;
        case 0x526d80u: goto label_526d80;
        case 0x526d84u: goto label_526d84;
        case 0x526d88u: goto label_526d88;
        case 0x526d8cu: goto label_526d8c;
        case 0x526d90u: goto label_526d90;
        case 0x526d94u: goto label_526d94;
        case 0x526d98u: goto label_526d98;
        case 0x526d9cu: goto label_526d9c;
        case 0x526da0u: goto label_526da0;
        case 0x526da4u: goto label_526da4;
        case 0x526da8u: goto label_526da8;
        case 0x526dacu: goto label_526dac;
        case 0x526db0u: goto label_526db0;
        case 0x526db4u: goto label_526db4;
        case 0x526db8u: goto label_526db8;
        case 0x526dbcu: goto label_526dbc;
        case 0x526dc0u: goto label_526dc0;
        case 0x526dc4u: goto label_526dc4;
        case 0x526dc8u: goto label_526dc8;
        case 0x526dccu: goto label_526dcc;
        case 0x526dd0u: goto label_526dd0;
        case 0x526dd4u: goto label_526dd4;
        case 0x526dd8u: goto label_526dd8;
        case 0x526ddcu: goto label_526ddc;
        case 0x526de0u: goto label_526de0;
        case 0x526de4u: goto label_526de4;
        case 0x526de8u: goto label_526de8;
        case 0x526decu: goto label_526dec;
        case 0x526df0u: goto label_526df0;
        case 0x526df4u: goto label_526df4;
        case 0x526df8u: goto label_526df8;
        case 0x526dfcu: goto label_526dfc;
        case 0x526e00u: goto label_526e00;
        case 0x526e04u: goto label_526e04;
        case 0x526e08u: goto label_526e08;
        case 0x526e0cu: goto label_526e0c;
        case 0x526e10u: goto label_526e10;
        case 0x526e14u: goto label_526e14;
        case 0x526e18u: goto label_526e18;
        case 0x526e1cu: goto label_526e1c;
        case 0x526e20u: goto label_526e20;
        case 0x526e24u: goto label_526e24;
        case 0x526e28u: goto label_526e28;
        case 0x526e2cu: goto label_526e2c;
        case 0x526e30u: goto label_526e30;
        case 0x526e34u: goto label_526e34;
        case 0x526e38u: goto label_526e38;
        case 0x526e3cu: goto label_526e3c;
        case 0x526e40u: goto label_526e40;
        case 0x526e44u: goto label_526e44;
        case 0x526e48u: goto label_526e48;
        case 0x526e4cu: goto label_526e4c;
        case 0x526e50u: goto label_526e50;
        case 0x526e54u: goto label_526e54;
        case 0x526e58u: goto label_526e58;
        case 0x526e5cu: goto label_526e5c;
        case 0x526e60u: goto label_526e60;
        case 0x526e64u: goto label_526e64;
        case 0x526e68u: goto label_526e68;
        case 0x526e6cu: goto label_526e6c;
        case 0x526e70u: goto label_526e70;
        case 0x526e74u: goto label_526e74;
        case 0x526e78u: goto label_526e78;
        case 0x526e7cu: goto label_526e7c;
        case 0x526e80u: goto label_526e80;
        case 0x526e84u: goto label_526e84;
        case 0x526e88u: goto label_526e88;
        case 0x526e8cu: goto label_526e8c;
        case 0x526e90u: goto label_526e90;
        case 0x526e94u: goto label_526e94;
        case 0x526e98u: goto label_526e98;
        case 0x526e9cu: goto label_526e9c;
        case 0x526ea0u: goto label_526ea0;
        case 0x526ea4u: goto label_526ea4;
        case 0x526ea8u: goto label_526ea8;
        case 0x526eacu: goto label_526eac;
        case 0x526eb0u: goto label_526eb0;
        case 0x526eb4u: goto label_526eb4;
        case 0x526eb8u: goto label_526eb8;
        case 0x526ebcu: goto label_526ebc;
        case 0x526ec0u: goto label_526ec0;
        case 0x526ec4u: goto label_526ec4;
        case 0x526ec8u: goto label_526ec8;
        case 0x526eccu: goto label_526ecc;
        case 0x526ed0u: goto label_526ed0;
        case 0x526ed4u: goto label_526ed4;
        case 0x526ed8u: goto label_526ed8;
        case 0x526edcu: goto label_526edc;
        case 0x526ee0u: goto label_526ee0;
        case 0x526ee4u: goto label_526ee4;
        case 0x526ee8u: goto label_526ee8;
        case 0x526eecu: goto label_526eec;
        case 0x526ef0u: goto label_526ef0;
        case 0x526ef4u: goto label_526ef4;
        case 0x526ef8u: goto label_526ef8;
        case 0x526efcu: goto label_526efc;
        case 0x526f00u: goto label_526f00;
        case 0x526f04u: goto label_526f04;
        case 0x526f08u: goto label_526f08;
        case 0x526f0cu: goto label_526f0c;
        case 0x526f10u: goto label_526f10;
        case 0x526f14u: goto label_526f14;
        case 0x526f18u: goto label_526f18;
        case 0x526f1cu: goto label_526f1c;
        case 0x526f20u: goto label_526f20;
        case 0x526f24u: goto label_526f24;
        case 0x526f28u: goto label_526f28;
        case 0x526f2cu: goto label_526f2c;
        case 0x526f30u: goto label_526f30;
        case 0x526f34u: goto label_526f34;
        case 0x526f38u: goto label_526f38;
        case 0x526f3cu: goto label_526f3c;
        case 0x526f40u: goto label_526f40;
        case 0x526f44u: goto label_526f44;
        case 0x526f48u: goto label_526f48;
        case 0x526f4cu: goto label_526f4c;
        case 0x526f50u: goto label_526f50;
        case 0x526f54u: goto label_526f54;
        case 0x526f58u: goto label_526f58;
        case 0x526f5cu: goto label_526f5c;
        case 0x526f60u: goto label_526f60;
        case 0x526f64u: goto label_526f64;
        case 0x526f68u: goto label_526f68;
        case 0x526f6cu: goto label_526f6c;
        case 0x526f70u: goto label_526f70;
        case 0x526f74u: goto label_526f74;
        case 0x526f78u: goto label_526f78;
        case 0x526f7cu: goto label_526f7c;
        case 0x526f80u: goto label_526f80;
        case 0x526f84u: goto label_526f84;
        case 0x526f88u: goto label_526f88;
        case 0x526f8cu: goto label_526f8c;
        case 0x526f90u: goto label_526f90;
        case 0x526f94u: goto label_526f94;
        case 0x526f98u: goto label_526f98;
        case 0x526f9cu: goto label_526f9c;
        case 0x526fa0u: goto label_526fa0;
        case 0x526fa4u: goto label_526fa4;
        case 0x526fa8u: goto label_526fa8;
        case 0x526facu: goto label_526fac;
        case 0x526fb0u: goto label_526fb0;
        case 0x526fb4u: goto label_526fb4;
        case 0x526fb8u: goto label_526fb8;
        case 0x526fbcu: goto label_526fbc;
        case 0x526fc0u: goto label_526fc0;
        case 0x526fc4u: goto label_526fc4;
        case 0x526fc8u: goto label_526fc8;
        case 0x526fccu: goto label_526fcc;
        case 0x526fd0u: goto label_526fd0;
        case 0x526fd4u: goto label_526fd4;
        case 0x526fd8u: goto label_526fd8;
        case 0x526fdcu: goto label_526fdc;
        case 0x526fe0u: goto label_526fe0;
        case 0x526fe4u: goto label_526fe4;
        case 0x526fe8u: goto label_526fe8;
        case 0x526fecu: goto label_526fec;
        case 0x526ff0u: goto label_526ff0;
        case 0x526ff4u: goto label_526ff4;
        case 0x526ff8u: goto label_526ff8;
        case 0x526ffcu: goto label_526ffc;
        case 0x527000u: goto label_527000;
        case 0x527004u: goto label_527004;
        case 0x527008u: goto label_527008;
        case 0x52700cu: goto label_52700c;
        case 0x527010u: goto label_527010;
        case 0x527014u: goto label_527014;
        case 0x527018u: goto label_527018;
        case 0x52701cu: goto label_52701c;
        case 0x527020u: goto label_527020;
        case 0x527024u: goto label_527024;
        case 0x527028u: goto label_527028;
        case 0x52702cu: goto label_52702c;
        case 0x527030u: goto label_527030;
        case 0x527034u: goto label_527034;
        case 0x527038u: goto label_527038;
        case 0x52703cu: goto label_52703c;
        case 0x527040u: goto label_527040;
        case 0x527044u: goto label_527044;
        case 0x527048u: goto label_527048;
        case 0x52704cu: goto label_52704c;
        case 0x527050u: goto label_527050;
        case 0x527054u: goto label_527054;
        case 0x527058u: goto label_527058;
        case 0x52705cu: goto label_52705c;
        case 0x527060u: goto label_527060;
        case 0x527064u: goto label_527064;
        case 0x527068u: goto label_527068;
        case 0x52706cu: goto label_52706c;
        case 0x527070u: goto label_527070;
        case 0x527074u: goto label_527074;
        case 0x527078u: goto label_527078;
        case 0x52707cu: goto label_52707c;
        case 0x527080u: goto label_527080;
        case 0x527084u: goto label_527084;
        case 0x527088u: goto label_527088;
        case 0x52708cu: goto label_52708c;
        case 0x527090u: goto label_527090;
        case 0x527094u: goto label_527094;
        case 0x527098u: goto label_527098;
        case 0x52709cu: goto label_52709c;
        case 0x5270a0u: goto label_5270a0;
        case 0x5270a4u: goto label_5270a4;
        case 0x5270a8u: goto label_5270a8;
        case 0x5270acu: goto label_5270ac;
        case 0x5270b0u: goto label_5270b0;
        case 0x5270b4u: goto label_5270b4;
        case 0x5270b8u: goto label_5270b8;
        case 0x5270bcu: goto label_5270bc;
        case 0x5270c0u: goto label_5270c0;
        case 0x5270c4u: goto label_5270c4;
        case 0x5270c8u: goto label_5270c8;
        case 0x5270ccu: goto label_5270cc;
        case 0x5270d0u: goto label_5270d0;
        case 0x5270d4u: goto label_5270d4;
        case 0x5270d8u: goto label_5270d8;
        case 0x5270dcu: goto label_5270dc;
        default: break;
    }

    ctx->pc = 0x526b40u;

label_526b40:
    // 0x526b40: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x526b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_526b44:
    // 0x526b44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x526b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_526b48:
    // 0x526b48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x526b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_526b4c:
    // 0x526b4c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x526b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_526b50:
    // 0x526b50: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x526b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_526b54:
    // 0x526b54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x526b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_526b58:
    // 0x526b58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x526b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_526b5c:
    // 0x526b5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x526b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_526b60:
    // 0x526b60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x526b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_526b64:
    // 0x526b64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x526b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_526b68:
    // 0x526b68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x526b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_526b6c:
    // 0x526b6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x526b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_526b70:
    // 0x526b70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x526b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_526b74:
    // 0x526b74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x526b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_526b78:
    // 0x526b78: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x526b78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_526b7c:
    // 0x526b7c: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x526b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_526b80:
    // 0x526b80: 0x26312118  addiu       $s1, $s1, 0x2118
    ctx->pc = 0x526b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8472));
label_526b84:
    // 0x526b84: 0x8c750e80  lw          $s5, 0xE80($v1)
    ctx->pc = 0x526b84u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_526b88:
    // 0x526b88: 0x84900082  lh          $s0, 0x82($a0)
    ctx->pc = 0x526b88u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
label_526b8c:
    // 0x526b8c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x526b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_526b90:
    // 0x526b90: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x526b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_526b94:
    // 0x526b94: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x526b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
label_526b98:
    // 0x526b98: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x526b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
label_526b9c:
    // 0x526b9c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x526b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_526ba0:
    // 0x526ba0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x526ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_526ba4:
    // 0x526ba4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x526ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_526ba8:
    // 0x526ba8: 0x24422104  addiu       $v0, $v0, 0x2104
    ctx->pc = 0x526ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8452));
label_526bac:
    // 0x526bac: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x526bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_526bb0:
    // 0x526bb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x526bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_526bb4:
    // 0x526bb4: 0x8c460eac  lw          $a2, 0xEAC($v0)
    ctx->pc = 0x526bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_526bb8:
    // 0x526bb8: 0x84820080  lh          $v0, 0x80($a0)
    ctx->pc = 0x526bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
label_526bbc:
    // 0x526bbc: 0x90de0116  lbu         $fp, 0x116($a2)
    ctx->pc = 0x526bbcu;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 278)));
label_526bc0:
    // 0x526bc0: 0x8c641d08  lw          $a0, 0x1D08($v1)
    ctx->pc = 0x526bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7432)));
label_526bc4:
    // 0x526bc4: 0xc0506ac  jal         func_141AB0
label_526bc8:
    if (ctx->pc == 0x526BC8u) {
        ctx->pc = 0x526BC8u;
            // 0x526bc8: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x526BCCu;
        goto label_526bcc;
    }
    ctx->pc = 0x526BC4u;
    SET_GPR_U32(ctx, 31, 0x526BCCu);
    ctx->pc = 0x526BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526BC4u;
            // 0x526bc8: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526BCCu; }
        if (ctx->pc != 0x526BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526BCCu; }
        if (ctx->pc != 0x526BCCu) { return; }
    }
    ctx->pc = 0x526BCCu;
label_526bcc:
    // 0x526bcc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x526bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_526bd0:
    // 0x526bd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x526bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526bd4:
    // 0x526bd4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x526bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_526bd8:
    // 0x526bd8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x526bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_526bdc:
    // 0x526bdc: 0x320f809  jalr        $t9
label_526be0:
    if (ctx->pc == 0x526BE0u) {
        ctx->pc = 0x526BE0u;
            // 0x526be0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x526BE4u;
        goto label_526be4;
    }
    ctx->pc = 0x526BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526BE4u);
        ctx->pc = 0x526BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526BDCu;
            // 0x526be0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x526BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526BE4u; }
            if (ctx->pc != 0x526BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x526BE4u;
label_526be4:
    // 0x526be4: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x526be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_526be8:
    // 0x526be8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x526be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_526bec:
    // 0x526bec: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x526becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_526bf0:
    // 0x526bf0: 0x24a59b80  addiu       $a1, $a1, -0x6480
    ctx->pc = 0x526bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941568));
label_526bf4:
    // 0x526bf4: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x526bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_526bf8:
    // 0x526bf8: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x526bf8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_526bfc:
    // 0x526bfc: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x526bfcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_526c00:
    // 0x526c00: 0x84440084  lh          $a0, 0x84($v0)
    ctx->pc = 0x526c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 132)));
label_526c04:
    // 0x526c04: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x526c04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_526c08:
    // 0x526c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x526c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526c0c:
    // 0x526c0c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x526c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_526c10:
    // 0x526c10: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x526c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_526c14:
    // 0x526c14: 0x84430088  lh          $v1, 0x88($v0)
    ctx->pc = 0x526c14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_526c18:
    // 0x526c18: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x526c18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_526c1c:
    // 0x526c1c: 0x2035021  addu        $t2, $s0, $v1
    ctx->pc = 0x526c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_526c20:
    // 0x526c20: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x526c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_526c24:
    // 0x526c24: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x526c24u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526c28:
    // 0x526c28: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x526c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_526c2c:
    // 0x526c2c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x526c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_526c30:
    // 0x526c30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x526c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_526c34:
    // 0x526c34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x526c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526c38:
    // 0x526c38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x526c38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_526c3c:
    // 0x526c3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x526c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_526c40:
    // 0x526c40: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x526c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_526c44:
    // 0x526c44: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x526c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_526c48:
    // 0x526c48: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x526c48u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526c4c:
    // 0x526c4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x526c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_526c50:
    // 0x526c50: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x526c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_526c54:
    // 0x526c54: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x526c54u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526c58:
    // 0x526c58: 0x0  nop
    ctx->pc = 0x526c58u;
    // NOP
label_526c5c:
    // 0x526c5c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x526c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_526c60:
    // 0x526c60: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x526c60u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526c64:
    // 0x526c64: 0x0  nop
    ctx->pc = 0x526c64u;
    // NOP
label_526c68:
    // 0x526c68: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x526c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_526c6c:
    // 0x526c6c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x526c6cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526c70:
    // 0x526c70: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x526c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_526c74:
    // 0x526c74: 0xc0bc284  jal         func_2F0A10
label_526c78:
    if (ctx->pc == 0x526C78u) {
        ctx->pc = 0x526C78u;
            // 0x526c78: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x526C7Cu;
        goto label_526c7c;
    }
    ctx->pc = 0x526C74u;
    SET_GPR_U32(ctx, 31, 0x526C7Cu);
    ctx->pc = 0x526C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526C74u;
            // 0x526c78: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526C7Cu; }
        if (ctx->pc != 0x526C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526C7Cu; }
        if (ctx->pc != 0x526C7Cu) { return; }
    }
    ctx->pc = 0x526C7Cu;
label_526c7c:
    // 0x526c7c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x526c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_526c80:
    // 0x526c80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x526c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526c84:
    // 0x526c84: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x526c84u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_526c88:
    // 0x526c88: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x526c88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_526c8c:
    // 0x526c8c: 0x84460088  lh          $a2, 0x88($v0)
    ctx->pc = 0x526c8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_526c90:
    // 0x526c90: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x526c90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_526c94:
    // 0x526c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x526c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526c98:
    // 0x526c98: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x526c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_526c9c:
    // 0x526c9c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x526c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_526ca0:
    // 0x526ca0: 0x84450084  lh          $a1, 0x84($v0)
    ctx->pc = 0x526ca0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 132)));
label_526ca4:
    // 0x526ca4: 0x84440086  lh          $a0, 0x86($v0)
    ctx->pc = 0x526ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 134)));
label_526ca8:
    // 0x526ca8: 0x93a200e0  lbu         $v0, 0xE0($sp)
    ctx->pc = 0x526ca8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_526cac:
    // 0x526cac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x526cacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_526cb0:
    // 0x526cb0: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x526cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_526cb4:
    // 0x526cb4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x526cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_526cb8:
    // 0x526cb8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x526cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_526cbc:
    // 0x526cbc: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x526cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_526cc0:
    // 0x526cc0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x526cc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526cc4:
    // 0x526cc4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x526cc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_526cc8:
    // 0x526cc8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x526cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_526ccc:
    // 0x526ccc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x526cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_526cd0:
    // 0x526cd0: 0x24a59b90  addiu       $a1, $a1, -0x6470
    ctx->pc = 0x526cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941584));
label_526cd4:
    // 0x526cd4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x526cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_526cd8:
    // 0x526cd8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x526cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_526cdc:
    // 0x526cdc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x526cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_526ce0:
    // 0x526ce0: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x526ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_526ce4:
    // 0x526ce4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x526ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_526ce8:
    // 0x526ce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x526ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526cec:
    // 0x526cec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x526cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_526cf0:
    // 0x526cf0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x526cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_526cf4:
    // 0x526cf4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x526cf4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526cf8:
    // 0x526cf8: 0x0  nop
    ctx->pc = 0x526cf8u;
    // NOP
label_526cfc:
    // 0x526cfc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x526cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_526d00:
    // 0x526d00: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x526d00u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526d04:
    // 0x526d04: 0x0  nop
    ctx->pc = 0x526d04u;
    // NOP
label_526d08:
    // 0x526d08: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x526d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_526d0c:
    // 0x526d0c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x526d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_526d10:
    // 0x526d10: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x526d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_526d14:
    // 0x526d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x526d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526d18:
    // 0x526d18: 0xc0bc284  jal         func_2F0A10
label_526d1c:
    if (ctx->pc == 0x526D1Cu) {
        ctx->pc = 0x526D1Cu;
            // 0x526d1c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x526D20u;
        goto label_526d20;
    }
    ctx->pc = 0x526D18u;
    SET_GPR_U32(ctx, 31, 0x526D20u);
    ctx->pc = 0x526D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526D18u;
            // 0x526d1c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526D20u; }
        if (ctx->pc != 0x526D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526D20u; }
        if (ctx->pc != 0x526D20u) { return; }
    }
    ctx->pc = 0x526D20u;
label_526d20:
    // 0x526d20: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x526d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_526d24:
    // 0x526d24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x526d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526d28:
    // 0x526d28: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x526d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_526d2c:
    // 0x526d2c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x526d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_526d30:
    // 0x526d30: 0x320f809  jalr        $t9
label_526d34:
    if (ctx->pc == 0x526D34u) {
        ctx->pc = 0x526D38u;
        goto label_526d38;
    }
    ctx->pc = 0x526D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526D38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x526D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526D38u; }
            if (ctx->pc != 0x526D38u) { return; }
        }
        }
    }
    ctx->pc = 0x526D38u;
label_526d38:
    // 0x526d38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x526d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_526d3c:
    // 0x526d3c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x526d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_526d40:
    // 0x526d40: 0xc0506ac  jal         func_141AB0
label_526d44:
    if (ctx->pc == 0x526D44u) {
        ctx->pc = 0x526D44u;
            // 0x526d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x526D48u;
        goto label_526d48;
    }
    ctx->pc = 0x526D40u;
    SET_GPR_U32(ctx, 31, 0x526D48u);
    ctx->pc = 0x526D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526D40u;
            // 0x526d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526D48u; }
        if (ctx->pc != 0x526D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526D48u; }
        if (ctx->pc != 0x526D48u) { return; }
    }
    ctx->pc = 0x526D48u;
label_526d48:
    // 0x526d48: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x526d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_526d4c:
    // 0x526d4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x526d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526d50:
    // 0x526d50: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x526d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_526d54:
    // 0x526d54: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x526d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_526d58:
    // 0x526d58: 0x320f809  jalr        $t9
label_526d5c:
    if (ctx->pc == 0x526D5Cu) {
        ctx->pc = 0x526D5Cu;
            // 0x526d5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x526D60u;
        goto label_526d60;
    }
    ctx->pc = 0x526D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526D60u);
        ctx->pc = 0x526D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526D58u;
            // 0x526d5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x526D60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526D60u; }
            if (ctx->pc != 0x526D60u) { return; }
        }
        }
    }
    ctx->pc = 0x526D60u;
label_526d60:
    // 0x526d60: 0x8ea3077c  lw          $v1, 0x77C($s5)
    ctx->pc = 0x526d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_526d64:
    // 0x526d64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x526d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_526d68:
    // 0x526d68: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x526d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_526d6c:
    // 0x526d6c: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x526d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_526d70:
    // 0x526d70: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x526d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_526d74:
    // 0x526d74: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x526d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_526d78:
    // 0x526d78: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x526d78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_526d7c:
    // 0x526d7c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x526d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_526d80:
    // 0x526d80: 0x8e630d6c  lw          $v1, 0xD6C($s3)
    ctx->pc = 0x526d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_526d84:
    // 0x526d84: 0x90720010  lbu         $s2, 0x10($v1)
    ctx->pc = 0x526d84u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_526d88:
    // 0x526d88: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_526d8c:
    if (ctx->pc == 0x526D8Cu) {
        ctx->pc = 0x526D90u;
        goto label_526d90;
    }
    ctx->pc = 0x526D88u;
    {
        const bool branch_taken_0x526d88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x526d88) {
            ctx->pc = 0x526D98u;
            goto label_526d98;
        }
    }
    ctx->pc = 0x526D90u;
label_526d90:
    // 0x526d90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x526d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526d94:
    // 0x526d94: 0x0  nop
    ctx->pc = 0x526d94u;
    // NOP
label_526d98:
    // 0x526d98: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x526d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_526d9c:
    // 0x526d9c: 0x8e760e38  lw          $s6, 0xE38($s3)
    ctx->pc = 0x526d9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_526da0:
    // 0x526da0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x526da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_526da4:
    // 0x526da4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x526da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_526da8:
    // 0x526da8: 0x320f809  jalr        $t9
label_526dac:
    if (ctx->pc == 0x526DACu) {
        ctx->pc = 0x526DACu;
            // 0x526dac: 0x33d700ff  andi        $s7, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x526DB0u;
        goto label_526db0;
    }
    ctx->pc = 0x526DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526DB0u);
        ctx->pc = 0x526DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526DA8u;
            // 0x526dac: 0x33d700ff  andi        $s7, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x526DB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526DB0u; }
            if (ctx->pc != 0x526DB0u) { return; }
        }
        }
    }
    ctx->pc = 0x526DB0u;
label_526db0:
    // 0x526db0: 0x2c2001b  divu        $zero, $s6, $v0
    ctx->pc = 0x526db0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,22); } }
label_526db4:
    // 0x526db4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x526db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_526db8:
    // 0x526db8: 0x0  nop
    ctx->pc = 0x526db8u;
    // NOP
label_526dbc:
    // 0x526dbc: 0x8812  mflo        $s1
    ctx->pc = 0x526dbcu;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_526dc0:
    // 0x526dc0: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
label_526dc4:
    if (ctx->pc == 0x526DC4u) {
        ctx->pc = 0x526DC8u;
        goto label_526dc8;
    }
    ctx->pc = 0x526DC0u;
    {
        const bool branch_taken_0x526dc0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x526dc0) {
            ctx->pc = 0x526DD0u;
            goto label_526dd0;
        }
    }
    ctx->pc = 0x526DC8u;
label_526dc8:
    // 0x526dc8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x526dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_526dcc:
    // 0x526dcc: 0x0  nop
    ctx->pc = 0x526dccu;
    // NOP
label_526dd0:
    // 0x526dd0: 0x926211a1  lbu         $v0, 0x11A1($s3)
    ctx->pc = 0x526dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4513)));
label_526dd4:
    // 0x526dd4: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_526dd8:
    if (ctx->pc == 0x526DD8u) {
        ctx->pc = 0x526DDCu;
        goto label_526ddc;
    }
    ctx->pc = 0x526DD4u;
    {
        const bool branch_taken_0x526dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x526dd4) {
            ctx->pc = 0x526FD8u;
            goto label_526fd8;
        }
    }
    ctx->pc = 0x526DDCu;
label_526ddc:
    // 0x526ddc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x526ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_526de0:
    // 0x526de0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x526de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_526de4:
    // 0x526de4: 0x8c420cec  lw          $v0, 0xCEC($v0)
    ctx->pc = 0x526de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3308)));
label_526de8:
    // 0x526de8: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_526dec:
    if (ctx->pc == 0x526DECu) {
        ctx->pc = 0x526DF0u;
        goto label_526df0;
    }
    ctx->pc = 0x526DE8u;
    {
        const bool branch_taken_0x526de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x526de8) {
            ctx->pc = 0x526FD8u;
            goto label_526fd8;
        }
    }
    ctx->pc = 0x526DF0u;
label_526df0:
    // 0x526df0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x526df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_526df4:
    // 0x526df4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x526df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_526df8:
    // 0x526df8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x526df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_526dfc:
    // 0x526dfc: 0xc04cc04  jal         func_133010
label_526e00:
    if (ctx->pc == 0x526E00u) {
        ctx->pc = 0x526E00u;
            // 0x526e00: 0x24450d00  addiu       $a1, $v0, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
        ctx->pc = 0x526E04u;
        goto label_526e04;
    }
    ctx->pc = 0x526DFCu;
    SET_GPR_U32(ctx, 31, 0x526E04u);
    ctx->pc = 0x526E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526DFCu;
            // 0x526e00: 0x24450d00  addiu       $a1, $v0, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E04u; }
        if (ctx->pc != 0x526E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E04u; }
        if (ctx->pc != 0x526E04u) { return; }
    }
    ctx->pc = 0x526E04u;
label_526e04:
    // 0x526e04: 0xc66002c4  lwc1        $f0, 0x2C4($s3)
    ctx->pc = 0x526e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_526e08:
    // 0x526e08: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x526e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_526e0c:
    // 0x526e0c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x526e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_526e10:
    // 0x526e10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x526e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_526e14:
    // 0x526e14: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x526e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_526e18:
    // 0x526e18: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x526e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_526e1c:
    // 0x526e1c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x526e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_526e20:
    // 0x526e20: 0xc4620d20  lwc1        $f2, 0xD20($v1)
    ctx->pc = 0x526e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_526e24:
    // 0x526e24: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x526e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_526e28:
    // 0x526e28: 0xc4610d24  lwc1        $f1, 0xD24($v1)
    ctx->pc = 0x526e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_526e2c:
    // 0x526e2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x526e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_526e30:
    // 0x526e30: 0xc4600d28  lwc1        $f0, 0xD28($v1)
    ctx->pc = 0x526e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_526e34:
    // 0x526e34: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x526e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_526e38:
    // 0x526e38: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x526e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_526e3c:
    // 0x526e3c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x526e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_526e40:
    // 0x526e40: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x526e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_526e44:
    // 0x526e44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x526e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_526e48:
    // 0x526e48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x526e48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_526e4c:
    // 0x526e4c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x526e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_526e50:
    // 0x526e50: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x526e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_526e54:
    // 0x526e54: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x526e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_526e58:
    // 0x526e58: 0xc04f308  jal         func_13CC20
label_526e5c:
    if (ctx->pc == 0x526E5Cu) {
        ctx->pc = 0x526E5Cu;
            // 0x526e5c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x526E60u;
        goto label_526e60;
    }
    ctx->pc = 0x526E58u;
    SET_GPR_U32(ctx, 31, 0x526E60u);
    ctx->pc = 0x526E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526E58u;
            // 0x526e5c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E60u; }
        if (ctx->pc != 0x526E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E60u; }
        if (ctx->pc != 0x526E60u) { return; }
    }
    ctx->pc = 0x526E60u;
label_526e60:
    // 0x526e60: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x526e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_526e64:
    // 0x526e64: 0xc04ce80  jal         func_133A00
label_526e68:
    if (ctx->pc == 0x526E68u) {
        ctx->pc = 0x526E68u;
            // 0x526e68: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x526E6Cu;
        goto label_526e6c;
    }
    ctx->pc = 0x526E64u;
    SET_GPR_U32(ctx, 31, 0x526E6Cu);
    ctx->pc = 0x526E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526E64u;
            // 0x526e68: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E6Cu; }
        if (ctx->pc != 0x526E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E6Cu; }
        if (ctx->pc != 0x526E6Cu) { return; }
    }
    ctx->pc = 0x526E6Cu;
label_526e6c:
    // 0x526e6c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x526e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_526e70:
    // 0x526e70: 0xc04ccf4  jal         func_1333D0
label_526e74:
    if (ctx->pc == 0x526E74u) {
        ctx->pc = 0x526E74u;
            // 0x526e74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526E78u;
        goto label_526e78;
    }
    ctx->pc = 0x526E70u;
    SET_GPR_U32(ctx, 31, 0x526E78u);
    ctx->pc = 0x526E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526E70u;
            // 0x526e74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E78u; }
        if (ctx->pc != 0x526E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E78u; }
        if (ctx->pc != 0x526E78u) { return; }
    }
    ctx->pc = 0x526E78u;
label_526e78:
    // 0x526e78: 0xc66c02c0  lwc1        $f12, 0x2C0($s3)
    ctx->pc = 0x526e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_526e7c:
    // 0x526e7c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x526e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_526e80:
    // 0x526e80: 0xc66d02c4  lwc1        $f13, 0x2C4($s3)
    ctx->pc = 0x526e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_526e84:
    // 0x526e84: 0xc66e02c8  lwc1        $f14, 0x2C8($s3)
    ctx->pc = 0x526e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_526e88:
    // 0x526e88: 0xc04ce64  jal         func_133990
label_526e8c:
    if (ctx->pc == 0x526E8Cu) {
        ctx->pc = 0x526E8Cu;
            // 0x526e8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526E90u;
        goto label_526e90;
    }
    ctx->pc = 0x526E88u;
    SET_GPR_U32(ctx, 31, 0x526E90u);
    ctx->pc = 0x526E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526E88u;
            // 0x526e8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E90u; }
        if (ctx->pc != 0x526E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E90u; }
        if (ctx->pc != 0x526E90u) { return; }
    }
    ctx->pc = 0x526E90u;
label_526e90:
    // 0x526e90: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x526e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_526e94:
    // 0x526e94: 0xc04cce4  jal         func_133390
label_526e98:
    if (ctx->pc == 0x526E98u) {
        ctx->pc = 0x526E98u;
            // 0x526e98: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x526E9Cu;
        goto label_526e9c;
    }
    ctx->pc = 0x526E94u;
    SET_GPR_U32(ctx, 31, 0x526E9Cu);
    ctx->pc = 0x526E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526E94u;
            // 0x526e98: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E9Cu; }
        if (ctx->pc != 0x526E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526E9Cu; }
        if (ctx->pc != 0x526E9Cu) { return; }
    }
    ctx->pc = 0x526E9Cu;
label_526e9c:
    // 0x526e9c: 0x8e620e38  lw          $v0, 0xE38($s3)
    ctx->pc = 0x526e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_526ea0:
    // 0x526ea0: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x526ea0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_526ea4:
    // 0x526ea4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_526ea8:
    if (ctx->pc == 0x526EA8u) {
        ctx->pc = 0x526EA8u;
            // 0x526ea8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526EACu;
        goto label_526eac;
    }
    ctx->pc = 0x526EA4u;
    {
        const bool branch_taken_0x526ea4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x526EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526EA4u;
            // 0x526ea8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x526ea4) {
            ctx->pc = 0x526EC0u;
            goto label_526ec0;
        }
    }
    ctx->pc = 0x526EACu;
label_526eac:
    // 0x526eac: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x526eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_526eb0:
    // 0x526eb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_526eb4:
    if (ctx->pc == 0x526EB4u) {
        ctx->pc = 0x526EB8u;
        goto label_526eb8;
    }
    ctx->pc = 0x526EB0u;
    {
        const bool branch_taken_0x526eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x526eb0) {
            ctx->pc = 0x526EC0u;
            goto label_526ec0;
        }
    }
    ctx->pc = 0x526EB8u;
label_526eb8:
    // 0x526eb8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x526eb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_526ebc:
    // 0x526ebc: 0x0  nop
    ctx->pc = 0x526ebcu;
    // NOP
label_526ec0:
    // 0x526ec0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_526ec4:
    if (ctx->pc == 0x526EC4u) {
        ctx->pc = 0x526EC8u;
        goto label_526ec8;
    }
    ctx->pc = 0x526EC0u;
    {
        const bool branch_taken_0x526ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x526ec0) {
            ctx->pc = 0x526EE0u;
            goto label_526ee0;
        }
    }
    ctx->pc = 0x526EC8u;
label_526ec8:
    // 0x526ec8: 0xc075eb4  jal         func_1D7AD0
label_526ecc:
    if (ctx->pc == 0x526ECCu) {
        ctx->pc = 0x526ECCu;
            // 0x526ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526ED0u;
        goto label_526ed0;
    }
    ctx->pc = 0x526EC8u;
    SET_GPR_U32(ctx, 31, 0x526ED0u);
    ctx->pc = 0x526ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526EC8u;
            // 0x526ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526ED0u; }
        if (ctx->pc != 0x526ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526ED0u; }
        if (ctx->pc != 0x526ED0u) { return; }
    }
    ctx->pc = 0x526ED0u;
label_526ed0:
    // 0x526ed0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_526ed4:
    if (ctx->pc == 0x526ED4u) {
        ctx->pc = 0x526ED8u;
        goto label_526ed8;
    }
    ctx->pc = 0x526ED0u;
    {
        const bool branch_taken_0x526ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x526ed0) {
            ctx->pc = 0x526EE0u;
            goto label_526ee0;
        }
    }
    ctx->pc = 0x526ED8u;
label_526ed8:
    // 0x526ed8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x526ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526edc:
    // 0x526edc: 0x0  nop
    ctx->pc = 0x526edcu;
    // NOP
label_526ee0:
    // 0x526ee0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_526ee4:
    if (ctx->pc == 0x526EE4u) {
        ctx->pc = 0x526EE8u;
        goto label_526ee8;
    }
    ctx->pc = 0x526EE0u;
    {
        const bool branch_taken_0x526ee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x526ee0) {
            ctx->pc = 0x526F00u;
            goto label_526f00;
        }
    }
    ctx->pc = 0x526EE8u;
label_526ee8:
    // 0x526ee8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x526ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_526eec:
    // 0x526eec: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x526eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_526ef0:
    // 0x526ef0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_526ef4:
    if (ctx->pc == 0x526EF4u) {
        ctx->pc = 0x526EF4u;
            // 0x526ef4: 0x64170080  daddiu      $s7, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->pc = 0x526EF8u;
        goto label_526ef8;
    }
    ctx->pc = 0x526EF0u;
    {
        const bool branch_taken_0x526ef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x526EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526EF0u;
            // 0x526ef4: 0x64170080  daddiu      $s7, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x526ef0) {
            ctx->pc = 0x526F00u;
            goto label_526f00;
        }
    }
    ctx->pc = 0x526EF8u;
label_526ef8:
    // 0x526ef8: 0x33d700ff  andi        $s7, $fp, 0xFF
    ctx->pc = 0x526ef8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_526efc:
    // 0x526efc: 0x0  nop
    ctx->pc = 0x526efcu;
    // NOP
label_526f00:
    // 0x526f00: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x526f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_526f04:
    // 0x526f04: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x526f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_526f08:
    // 0x526f08: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x526f08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
label_526f0c:
    // 0x526f0c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x526f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_526f10:
    // 0x526f10: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x526f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_526f14:
    // 0x526f14: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x526f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_526f18:
    // 0x526f18: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x526f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_526f1c:
    // 0x526f1c: 0x448a2000  mtc1        $t2, $f4
    ctx->pc = 0x526f1cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_526f20:
    // 0x526f20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x526f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526f24:
    // 0x526f24: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x526f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_526f28:
    // 0x526f28: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x526f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_526f2c:
    // 0x526f2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x526f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_526f30:
    // 0x526f30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x526f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_526f34:
    // 0x526f34: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x526f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_526f38:
    // 0x526f38: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x526f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_526f3c:
    // 0x526f3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x526f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_526f40:
    // 0x526f40: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x526f40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_526f44:
    // 0x526f44: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x526f44u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_526f48:
    // 0x526f48: 0x84480002  lh          $t0, 0x2($v0)
    ctx->pc = 0x526f48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_526f4c:
    // 0x526f4c: 0x46120142  mul.s       $f5, $f0, $f18
    ctx->pc = 0x526f4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
label_526f50:
    // 0x526f50: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x526f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_526f54:
    // 0x526f54: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x526f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_526f58:
    // 0x526f58: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x526f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_526f5c:
    // 0x526f5c: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x526f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_526f60:
    // 0x526f60: 0x46120842  mul.s       $f1, $f1, $f18
    ctx->pc = 0x526f60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
label_526f64:
    // 0x526f64: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x526f64u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526f68:
    // 0x526f68: 0xe7a50158  swc1        $f5, 0x158($sp)
    ctx->pc = 0x526f68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_526f6c:
    // 0x526f6c: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x526f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_526f70:
    // 0x526f70: 0x84420084  lh          $v0, 0x84($v0)
    ctx->pc = 0x526f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 132)));
label_526f74:
    // 0x526f74: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x526f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_526f78:
    // 0x526f78: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x526f78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_526f7c:
    // 0x526f7c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x526f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_526f80:
    // 0x526f80: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x526f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_526f84:
    // 0x526f84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x526f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_526f88:
    // 0x526f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x526f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526f8c:
    // 0x526f8c: 0x0  nop
    ctx->pc = 0x526f8cu;
    // NOP
label_526f90:
    // 0x526f90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x526f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_526f94:
    // 0x526f94: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x526f94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_526f98:
    // 0x526f98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x526f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_526f9c:
    // 0x526f9c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x526f9cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526fa0:
    // 0x526fa0: 0x0  nop
    ctx->pc = 0x526fa0u;
    // NOP
label_526fa4:
    // 0x526fa4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x526fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_526fa8:
    // 0x526fa8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x526fa8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_526fac:
    // 0x526fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x526facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526fb0:
    // 0x526fb0: 0x0  nop
    ctx->pc = 0x526fb0u;
    // NOP
label_526fb4:
    // 0x526fb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x526fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_526fb8:
    // 0x526fb8: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x526fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_526fbc:
    // 0x526fbc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x526fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_526fc0:
    // 0x526fc0: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x526fc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_526fc4:
    // 0x526fc4: 0x46030b01  sub.s       $f12, $f1, $f3
    ctx->pc = 0x526fc4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_526fc8:
    // 0x526fc8: 0x46011b80  add.s       $f14, $f3, $f1
    ctx->pc = 0x526fc8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_526fcc:
    // 0x526fcc: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x526fccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_526fd0:
    // 0x526fd0: 0xc0bc284  jal         func_2F0A10
label_526fd4:
    if (ctx->pc == 0x526FD4u) {
        ctx->pc = 0x526FD4u;
            // 0x526fd4: 0x460013c0  add.s       $f15, $f2, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x526FD8u;
        goto label_526fd8;
    }
    ctx->pc = 0x526FD0u;
    SET_GPR_U32(ctx, 31, 0x526FD8u);
    ctx->pc = 0x526FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526FD0u;
            // 0x526fd4: 0x460013c0  add.s       $f15, $f2, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526FD8u; }
        if (ctx->pc != 0x526FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526FD8u; }
        if (ctx->pc != 0x526FD8u) { return; }
    }
    ctx->pc = 0x526FD8u;
label_526fd8:
    // 0x526fd8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x526fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_526fdc:
    // 0x526fdc: 0x681ff66  bgez        $s4, . + 4 + (-0x9A << 2)
label_526fe0:
    if (ctx->pc == 0x526FE0u) {
        ctx->pc = 0x526FE0u;
            // 0x526fe0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x526FE4u;
        goto label_526fe4;
    }
    ctx->pc = 0x526FDCu;
    {
        const bool branch_taken_0x526fdc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x526FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526FDCu;
            // 0x526fe0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x526fdc) {
            ctx->pc = 0x526D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_526d78;
        }
    }
    ctx->pc = 0x526FE4u;
label_526fe4:
    // 0x526fe4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x526fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_526fe8:
    // 0x526fe8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x526fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526fec:
    // 0x526fec: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x526fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_526ff0:
    // 0x526ff0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x526ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_526ff4:
    // 0x526ff4: 0x320f809  jalr        $t9
label_526ff8:
    if (ctx->pc == 0x526FF8u) {
        ctx->pc = 0x526FFCu;
        goto label_526ffc;
    }
    ctx->pc = 0x526FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526FFCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x526FFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526FFCu; }
            if (ctx->pc != 0x526FFCu) { return; }
        }
        }
    }
    ctx->pc = 0x526FFCu;
label_526ffc:
    // 0x526ffc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x526ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_527000:
    // 0x527000: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x527000u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_527004:
    // 0x527004: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x527004u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_527008:
    // 0x527008: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x527008u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_52700c:
    // 0x52700c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x52700cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_527010:
    // 0x527010: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x527010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_527014:
    // 0x527014: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x527014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_527018:
    // 0x527018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x527018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52701c:
    // 0x52701c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52701cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527020:
    // 0x527020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527024:
    // 0x527024: 0x3e00008  jr          $ra
label_527028:
    if (ctx->pc == 0x527028u) {
        ctx->pc = 0x527028u;
            // 0x527028: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x52702Cu;
        goto label_52702c;
    }
    ctx->pc = 0x527024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527024u;
            // 0x527028: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52702Cu;
label_52702c:
    // 0x52702c: 0x0  nop
    ctx->pc = 0x52702cu;
    // NOP
label_527030:
    // 0x527030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x527030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_527034:
    // 0x527034: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x527034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_527038:
    // 0x527038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x527038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_52703c:
    // 0x52703c: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x52703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_527040:
    // 0x527040: 0x8c620cec  lw          $v0, 0xCEC($v1)
    ctx->pc = 0x527040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3308)));
label_527044:
    // 0x527044: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_527048:
    if (ctx->pc == 0x527048u) {
        ctx->pc = 0x52704Cu;
        goto label_52704c;
    }
    ctx->pc = 0x527044u;
    {
        const bool branch_taken_0x527044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x527044) {
            ctx->pc = 0x527058u;
            goto label_527058;
        }
    }
    ctx->pc = 0x52704Cu;
label_52704c:
    // 0x52704c: 0x8c620cf0  lw          $v0, 0xCF0($v1)
    ctx->pc = 0x52704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3312)));
label_527050:
    // 0x527050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_527054:
    if (ctx->pc == 0x527054u) {
        ctx->pc = 0x527058u;
        goto label_527058;
    }
    ctx->pc = 0x527050u;
    {
        const bool branch_taken_0x527050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527050) {
            ctx->pc = 0x527068u;
            goto label_527068;
        }
    }
    ctx->pc = 0x527058u;
label_527058:
    // 0x527058: 0xc149ad0  jal         func_526B40
label_52705c:
    if (ctx->pc == 0x52705Cu) {
        ctx->pc = 0x527060u;
        goto label_527060;
    }
    ctx->pc = 0x527058u;
    SET_GPR_U32(ctx, 31, 0x527060u);
    ctx->pc = 0x526B40u;
    goto label_526b40;
    ctx->pc = 0x527060u;
label_527060:
    // 0x527060: 0x10000004  b           . + 4 + (0x4 << 2)
label_527064:
    if (ctx->pc == 0x527064u) {
        ctx->pc = 0x527064u;
            // 0x527064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x527068u;
        goto label_527068;
    }
    ctx->pc = 0x527060u;
    {
        const bool branch_taken_0x527060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x527064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527060u;
            // 0x527064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527060) {
            ctx->pc = 0x527074u;
            goto label_527074;
        }
    }
    ctx->pc = 0x527068u;
label_527068:
    // 0x527068: 0xc0e9cd8  jal         func_3A7360
label_52706c:
    if (ctx->pc == 0x52706Cu) {
        ctx->pc = 0x527070u;
        goto label_527070;
    }
    ctx->pc = 0x527068u;
    SET_GPR_U32(ctx, 31, 0x527070u);
    ctx->pc = 0x3A7360u;
    if (runtime->hasFunction(0x3A7360u)) {
        auto targetFn = runtime->lookupFunction(0x3A7360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527070u; }
        if (ctx->pc != 0x527070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7360_0x3a7360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527070u; }
        if (ctx->pc != 0x527070u) { return; }
    }
    ctx->pc = 0x527070u;
label_527070:
    // 0x527070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x527070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_527074:
    // 0x527074: 0x3e00008  jr          $ra
label_527078:
    if (ctx->pc == 0x527078u) {
        ctx->pc = 0x527078u;
            // 0x527078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x52707Cu;
        goto label_52707c;
    }
    ctx->pc = 0x527074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527074u;
            // 0x527078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52707Cu;
label_52707c:
    // 0x52707c: 0x0  nop
    ctx->pc = 0x52707cu;
    // NOP
label_527080:
    // 0x527080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x527080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_527084:
    // 0x527084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x527084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_527088:
    // 0x527088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52708c:
    // 0x52708c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527090:
    // 0x527090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x527090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527094:
    // 0x527094: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_527098:
    if (ctx->pc == 0x527098u) {
        ctx->pc = 0x527098u;
            // 0x527098: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52709Cu;
        goto label_52709c;
    }
    ctx->pc = 0x527094u;
    {
        const bool branch_taken_0x527094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x527098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527094u;
            // 0x527098: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527094) {
            ctx->pc = 0x5270C8u;
            goto label_5270c8;
        }
    }
    ctx->pc = 0x52709Cu;
label_52709c:
    // 0x52709c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5270a0:
    // 0x5270a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5270a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5270a4:
    // 0x5270a4: 0x24426430  addiu       $v0, $v0, 0x6430
    ctx->pc = 0x5270a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25648));
label_5270a8:
    // 0x5270a8: 0xc0e9fc8  jal         func_3A7F20
label_5270ac:
    if (ctx->pc == 0x5270ACu) {
        ctx->pc = 0x5270ACu;
            // 0x5270ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5270B0u;
        goto label_5270b0;
    }
    ctx->pc = 0x5270A8u;
    SET_GPR_U32(ctx, 31, 0x5270B0u);
    ctx->pc = 0x5270ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5270A8u;
            // 0x5270ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F20u;
    if (runtime->hasFunction(0x3A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5270B0u; }
        if (ctx->pc != 0x5270B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F20_0x3a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5270B0u; }
        if (ctx->pc != 0x5270B0u) { return; }
    }
    ctx->pc = 0x5270B0u;
label_5270b0:
    // 0x5270b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5270b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5270b4:
    // 0x5270b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5270b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5270b8:
    // 0x5270b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5270bc:
    if (ctx->pc == 0x5270BCu) {
        ctx->pc = 0x5270BCu;
            // 0x5270bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5270C0u;
        goto label_5270c0;
    }
    ctx->pc = 0x5270B8u;
    {
        const bool branch_taken_0x5270b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5270b8) {
            ctx->pc = 0x5270BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5270B8u;
            // 0x5270bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5270CCu;
            goto label_5270cc;
        }
    }
    ctx->pc = 0x5270C0u;
label_5270c0:
    // 0x5270c0: 0xc0400a8  jal         func_1002A0
label_5270c4:
    if (ctx->pc == 0x5270C4u) {
        ctx->pc = 0x5270C4u;
            // 0x5270c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5270C8u;
        goto label_5270c8;
    }
    ctx->pc = 0x5270C0u;
    SET_GPR_U32(ctx, 31, 0x5270C8u);
    ctx->pc = 0x5270C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5270C0u;
            // 0x5270c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5270C8u; }
        if (ctx->pc != 0x5270C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5270C8u; }
        if (ctx->pc != 0x5270C8u) { return; }
    }
    ctx->pc = 0x5270C8u;
label_5270c8:
    // 0x5270c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5270c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5270cc:
    // 0x5270cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5270ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5270d0:
    // 0x5270d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5270d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5270d4:
    // 0x5270d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5270d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5270d8:
    // 0x5270d8: 0x3e00008  jr          $ra
label_5270dc:
    if (ctx->pc == 0x5270DCu) {
        ctx->pc = 0x5270DCu;
            // 0x5270dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5270E0u;
        goto label_fallthrough_0x5270d8;
    }
    ctx->pc = 0x5270D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5270DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5270D8u;
            // 0x5270dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5270d8:
    ctx->pc = 0x5270E0u;
}
