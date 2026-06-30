#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00420A50
// Address: 0x420a50 - 0x4210d0
void sub_00420A50_0x420a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420A50_0x420a50");
#endif

    switch (ctx->pc) {
        case 0x420a50u: goto label_420a50;
        case 0x420a54u: goto label_420a54;
        case 0x420a58u: goto label_420a58;
        case 0x420a5cu: goto label_420a5c;
        case 0x420a60u: goto label_420a60;
        case 0x420a64u: goto label_420a64;
        case 0x420a68u: goto label_420a68;
        case 0x420a6cu: goto label_420a6c;
        case 0x420a70u: goto label_420a70;
        case 0x420a74u: goto label_420a74;
        case 0x420a78u: goto label_420a78;
        case 0x420a7cu: goto label_420a7c;
        case 0x420a80u: goto label_420a80;
        case 0x420a84u: goto label_420a84;
        case 0x420a88u: goto label_420a88;
        case 0x420a8cu: goto label_420a8c;
        case 0x420a90u: goto label_420a90;
        case 0x420a94u: goto label_420a94;
        case 0x420a98u: goto label_420a98;
        case 0x420a9cu: goto label_420a9c;
        case 0x420aa0u: goto label_420aa0;
        case 0x420aa4u: goto label_420aa4;
        case 0x420aa8u: goto label_420aa8;
        case 0x420aacu: goto label_420aac;
        case 0x420ab0u: goto label_420ab0;
        case 0x420ab4u: goto label_420ab4;
        case 0x420ab8u: goto label_420ab8;
        case 0x420abcu: goto label_420abc;
        case 0x420ac0u: goto label_420ac0;
        case 0x420ac4u: goto label_420ac4;
        case 0x420ac8u: goto label_420ac8;
        case 0x420accu: goto label_420acc;
        case 0x420ad0u: goto label_420ad0;
        case 0x420ad4u: goto label_420ad4;
        case 0x420ad8u: goto label_420ad8;
        case 0x420adcu: goto label_420adc;
        case 0x420ae0u: goto label_420ae0;
        case 0x420ae4u: goto label_420ae4;
        case 0x420ae8u: goto label_420ae8;
        case 0x420aecu: goto label_420aec;
        case 0x420af0u: goto label_420af0;
        case 0x420af4u: goto label_420af4;
        case 0x420af8u: goto label_420af8;
        case 0x420afcu: goto label_420afc;
        case 0x420b00u: goto label_420b00;
        case 0x420b04u: goto label_420b04;
        case 0x420b08u: goto label_420b08;
        case 0x420b0cu: goto label_420b0c;
        case 0x420b10u: goto label_420b10;
        case 0x420b14u: goto label_420b14;
        case 0x420b18u: goto label_420b18;
        case 0x420b1cu: goto label_420b1c;
        case 0x420b20u: goto label_420b20;
        case 0x420b24u: goto label_420b24;
        case 0x420b28u: goto label_420b28;
        case 0x420b2cu: goto label_420b2c;
        case 0x420b30u: goto label_420b30;
        case 0x420b34u: goto label_420b34;
        case 0x420b38u: goto label_420b38;
        case 0x420b3cu: goto label_420b3c;
        case 0x420b40u: goto label_420b40;
        case 0x420b44u: goto label_420b44;
        case 0x420b48u: goto label_420b48;
        case 0x420b4cu: goto label_420b4c;
        case 0x420b50u: goto label_420b50;
        case 0x420b54u: goto label_420b54;
        case 0x420b58u: goto label_420b58;
        case 0x420b5cu: goto label_420b5c;
        case 0x420b60u: goto label_420b60;
        case 0x420b64u: goto label_420b64;
        case 0x420b68u: goto label_420b68;
        case 0x420b6cu: goto label_420b6c;
        case 0x420b70u: goto label_420b70;
        case 0x420b74u: goto label_420b74;
        case 0x420b78u: goto label_420b78;
        case 0x420b7cu: goto label_420b7c;
        case 0x420b80u: goto label_420b80;
        case 0x420b84u: goto label_420b84;
        case 0x420b88u: goto label_420b88;
        case 0x420b8cu: goto label_420b8c;
        case 0x420b90u: goto label_420b90;
        case 0x420b94u: goto label_420b94;
        case 0x420b98u: goto label_420b98;
        case 0x420b9cu: goto label_420b9c;
        case 0x420ba0u: goto label_420ba0;
        case 0x420ba4u: goto label_420ba4;
        case 0x420ba8u: goto label_420ba8;
        case 0x420bacu: goto label_420bac;
        case 0x420bb0u: goto label_420bb0;
        case 0x420bb4u: goto label_420bb4;
        case 0x420bb8u: goto label_420bb8;
        case 0x420bbcu: goto label_420bbc;
        case 0x420bc0u: goto label_420bc0;
        case 0x420bc4u: goto label_420bc4;
        case 0x420bc8u: goto label_420bc8;
        case 0x420bccu: goto label_420bcc;
        case 0x420bd0u: goto label_420bd0;
        case 0x420bd4u: goto label_420bd4;
        case 0x420bd8u: goto label_420bd8;
        case 0x420bdcu: goto label_420bdc;
        case 0x420be0u: goto label_420be0;
        case 0x420be4u: goto label_420be4;
        case 0x420be8u: goto label_420be8;
        case 0x420becu: goto label_420bec;
        case 0x420bf0u: goto label_420bf0;
        case 0x420bf4u: goto label_420bf4;
        case 0x420bf8u: goto label_420bf8;
        case 0x420bfcu: goto label_420bfc;
        case 0x420c00u: goto label_420c00;
        case 0x420c04u: goto label_420c04;
        case 0x420c08u: goto label_420c08;
        case 0x420c0cu: goto label_420c0c;
        case 0x420c10u: goto label_420c10;
        case 0x420c14u: goto label_420c14;
        case 0x420c18u: goto label_420c18;
        case 0x420c1cu: goto label_420c1c;
        case 0x420c20u: goto label_420c20;
        case 0x420c24u: goto label_420c24;
        case 0x420c28u: goto label_420c28;
        case 0x420c2cu: goto label_420c2c;
        case 0x420c30u: goto label_420c30;
        case 0x420c34u: goto label_420c34;
        case 0x420c38u: goto label_420c38;
        case 0x420c3cu: goto label_420c3c;
        case 0x420c40u: goto label_420c40;
        case 0x420c44u: goto label_420c44;
        case 0x420c48u: goto label_420c48;
        case 0x420c4cu: goto label_420c4c;
        case 0x420c50u: goto label_420c50;
        case 0x420c54u: goto label_420c54;
        case 0x420c58u: goto label_420c58;
        case 0x420c5cu: goto label_420c5c;
        case 0x420c60u: goto label_420c60;
        case 0x420c64u: goto label_420c64;
        case 0x420c68u: goto label_420c68;
        case 0x420c6cu: goto label_420c6c;
        case 0x420c70u: goto label_420c70;
        case 0x420c74u: goto label_420c74;
        case 0x420c78u: goto label_420c78;
        case 0x420c7cu: goto label_420c7c;
        case 0x420c80u: goto label_420c80;
        case 0x420c84u: goto label_420c84;
        case 0x420c88u: goto label_420c88;
        case 0x420c8cu: goto label_420c8c;
        case 0x420c90u: goto label_420c90;
        case 0x420c94u: goto label_420c94;
        case 0x420c98u: goto label_420c98;
        case 0x420c9cu: goto label_420c9c;
        case 0x420ca0u: goto label_420ca0;
        case 0x420ca4u: goto label_420ca4;
        case 0x420ca8u: goto label_420ca8;
        case 0x420cacu: goto label_420cac;
        case 0x420cb0u: goto label_420cb0;
        case 0x420cb4u: goto label_420cb4;
        case 0x420cb8u: goto label_420cb8;
        case 0x420cbcu: goto label_420cbc;
        case 0x420cc0u: goto label_420cc0;
        case 0x420cc4u: goto label_420cc4;
        case 0x420cc8u: goto label_420cc8;
        case 0x420cccu: goto label_420ccc;
        case 0x420cd0u: goto label_420cd0;
        case 0x420cd4u: goto label_420cd4;
        case 0x420cd8u: goto label_420cd8;
        case 0x420cdcu: goto label_420cdc;
        case 0x420ce0u: goto label_420ce0;
        case 0x420ce4u: goto label_420ce4;
        case 0x420ce8u: goto label_420ce8;
        case 0x420cecu: goto label_420cec;
        case 0x420cf0u: goto label_420cf0;
        case 0x420cf4u: goto label_420cf4;
        case 0x420cf8u: goto label_420cf8;
        case 0x420cfcu: goto label_420cfc;
        case 0x420d00u: goto label_420d00;
        case 0x420d04u: goto label_420d04;
        case 0x420d08u: goto label_420d08;
        case 0x420d0cu: goto label_420d0c;
        case 0x420d10u: goto label_420d10;
        case 0x420d14u: goto label_420d14;
        case 0x420d18u: goto label_420d18;
        case 0x420d1cu: goto label_420d1c;
        case 0x420d20u: goto label_420d20;
        case 0x420d24u: goto label_420d24;
        case 0x420d28u: goto label_420d28;
        case 0x420d2cu: goto label_420d2c;
        case 0x420d30u: goto label_420d30;
        case 0x420d34u: goto label_420d34;
        case 0x420d38u: goto label_420d38;
        case 0x420d3cu: goto label_420d3c;
        case 0x420d40u: goto label_420d40;
        case 0x420d44u: goto label_420d44;
        case 0x420d48u: goto label_420d48;
        case 0x420d4cu: goto label_420d4c;
        case 0x420d50u: goto label_420d50;
        case 0x420d54u: goto label_420d54;
        case 0x420d58u: goto label_420d58;
        case 0x420d5cu: goto label_420d5c;
        case 0x420d60u: goto label_420d60;
        case 0x420d64u: goto label_420d64;
        case 0x420d68u: goto label_420d68;
        case 0x420d6cu: goto label_420d6c;
        case 0x420d70u: goto label_420d70;
        case 0x420d74u: goto label_420d74;
        case 0x420d78u: goto label_420d78;
        case 0x420d7cu: goto label_420d7c;
        case 0x420d80u: goto label_420d80;
        case 0x420d84u: goto label_420d84;
        case 0x420d88u: goto label_420d88;
        case 0x420d8cu: goto label_420d8c;
        case 0x420d90u: goto label_420d90;
        case 0x420d94u: goto label_420d94;
        case 0x420d98u: goto label_420d98;
        case 0x420d9cu: goto label_420d9c;
        case 0x420da0u: goto label_420da0;
        case 0x420da4u: goto label_420da4;
        case 0x420da8u: goto label_420da8;
        case 0x420dacu: goto label_420dac;
        case 0x420db0u: goto label_420db0;
        case 0x420db4u: goto label_420db4;
        case 0x420db8u: goto label_420db8;
        case 0x420dbcu: goto label_420dbc;
        case 0x420dc0u: goto label_420dc0;
        case 0x420dc4u: goto label_420dc4;
        case 0x420dc8u: goto label_420dc8;
        case 0x420dccu: goto label_420dcc;
        case 0x420dd0u: goto label_420dd0;
        case 0x420dd4u: goto label_420dd4;
        case 0x420dd8u: goto label_420dd8;
        case 0x420ddcu: goto label_420ddc;
        case 0x420de0u: goto label_420de0;
        case 0x420de4u: goto label_420de4;
        case 0x420de8u: goto label_420de8;
        case 0x420decu: goto label_420dec;
        case 0x420df0u: goto label_420df0;
        case 0x420df4u: goto label_420df4;
        case 0x420df8u: goto label_420df8;
        case 0x420dfcu: goto label_420dfc;
        case 0x420e00u: goto label_420e00;
        case 0x420e04u: goto label_420e04;
        case 0x420e08u: goto label_420e08;
        case 0x420e0cu: goto label_420e0c;
        case 0x420e10u: goto label_420e10;
        case 0x420e14u: goto label_420e14;
        case 0x420e18u: goto label_420e18;
        case 0x420e1cu: goto label_420e1c;
        case 0x420e20u: goto label_420e20;
        case 0x420e24u: goto label_420e24;
        case 0x420e28u: goto label_420e28;
        case 0x420e2cu: goto label_420e2c;
        case 0x420e30u: goto label_420e30;
        case 0x420e34u: goto label_420e34;
        case 0x420e38u: goto label_420e38;
        case 0x420e3cu: goto label_420e3c;
        case 0x420e40u: goto label_420e40;
        case 0x420e44u: goto label_420e44;
        case 0x420e48u: goto label_420e48;
        case 0x420e4cu: goto label_420e4c;
        case 0x420e50u: goto label_420e50;
        case 0x420e54u: goto label_420e54;
        case 0x420e58u: goto label_420e58;
        case 0x420e5cu: goto label_420e5c;
        case 0x420e60u: goto label_420e60;
        case 0x420e64u: goto label_420e64;
        case 0x420e68u: goto label_420e68;
        case 0x420e6cu: goto label_420e6c;
        case 0x420e70u: goto label_420e70;
        case 0x420e74u: goto label_420e74;
        case 0x420e78u: goto label_420e78;
        case 0x420e7cu: goto label_420e7c;
        case 0x420e80u: goto label_420e80;
        case 0x420e84u: goto label_420e84;
        case 0x420e88u: goto label_420e88;
        case 0x420e8cu: goto label_420e8c;
        case 0x420e90u: goto label_420e90;
        case 0x420e94u: goto label_420e94;
        case 0x420e98u: goto label_420e98;
        case 0x420e9cu: goto label_420e9c;
        case 0x420ea0u: goto label_420ea0;
        case 0x420ea4u: goto label_420ea4;
        case 0x420ea8u: goto label_420ea8;
        case 0x420eacu: goto label_420eac;
        case 0x420eb0u: goto label_420eb0;
        case 0x420eb4u: goto label_420eb4;
        case 0x420eb8u: goto label_420eb8;
        case 0x420ebcu: goto label_420ebc;
        case 0x420ec0u: goto label_420ec0;
        case 0x420ec4u: goto label_420ec4;
        case 0x420ec8u: goto label_420ec8;
        case 0x420eccu: goto label_420ecc;
        case 0x420ed0u: goto label_420ed0;
        case 0x420ed4u: goto label_420ed4;
        case 0x420ed8u: goto label_420ed8;
        case 0x420edcu: goto label_420edc;
        case 0x420ee0u: goto label_420ee0;
        case 0x420ee4u: goto label_420ee4;
        case 0x420ee8u: goto label_420ee8;
        case 0x420eecu: goto label_420eec;
        case 0x420ef0u: goto label_420ef0;
        case 0x420ef4u: goto label_420ef4;
        case 0x420ef8u: goto label_420ef8;
        case 0x420efcu: goto label_420efc;
        case 0x420f00u: goto label_420f00;
        case 0x420f04u: goto label_420f04;
        case 0x420f08u: goto label_420f08;
        case 0x420f0cu: goto label_420f0c;
        case 0x420f10u: goto label_420f10;
        case 0x420f14u: goto label_420f14;
        case 0x420f18u: goto label_420f18;
        case 0x420f1cu: goto label_420f1c;
        case 0x420f20u: goto label_420f20;
        case 0x420f24u: goto label_420f24;
        case 0x420f28u: goto label_420f28;
        case 0x420f2cu: goto label_420f2c;
        case 0x420f30u: goto label_420f30;
        case 0x420f34u: goto label_420f34;
        case 0x420f38u: goto label_420f38;
        case 0x420f3cu: goto label_420f3c;
        case 0x420f40u: goto label_420f40;
        case 0x420f44u: goto label_420f44;
        case 0x420f48u: goto label_420f48;
        case 0x420f4cu: goto label_420f4c;
        case 0x420f50u: goto label_420f50;
        case 0x420f54u: goto label_420f54;
        case 0x420f58u: goto label_420f58;
        case 0x420f5cu: goto label_420f5c;
        case 0x420f60u: goto label_420f60;
        case 0x420f64u: goto label_420f64;
        case 0x420f68u: goto label_420f68;
        case 0x420f6cu: goto label_420f6c;
        case 0x420f70u: goto label_420f70;
        case 0x420f74u: goto label_420f74;
        case 0x420f78u: goto label_420f78;
        case 0x420f7cu: goto label_420f7c;
        case 0x420f80u: goto label_420f80;
        case 0x420f84u: goto label_420f84;
        case 0x420f88u: goto label_420f88;
        case 0x420f8cu: goto label_420f8c;
        case 0x420f90u: goto label_420f90;
        case 0x420f94u: goto label_420f94;
        case 0x420f98u: goto label_420f98;
        case 0x420f9cu: goto label_420f9c;
        case 0x420fa0u: goto label_420fa0;
        case 0x420fa4u: goto label_420fa4;
        case 0x420fa8u: goto label_420fa8;
        case 0x420facu: goto label_420fac;
        case 0x420fb0u: goto label_420fb0;
        case 0x420fb4u: goto label_420fb4;
        case 0x420fb8u: goto label_420fb8;
        case 0x420fbcu: goto label_420fbc;
        case 0x420fc0u: goto label_420fc0;
        case 0x420fc4u: goto label_420fc4;
        case 0x420fc8u: goto label_420fc8;
        case 0x420fccu: goto label_420fcc;
        case 0x420fd0u: goto label_420fd0;
        case 0x420fd4u: goto label_420fd4;
        case 0x420fd8u: goto label_420fd8;
        case 0x420fdcu: goto label_420fdc;
        case 0x420fe0u: goto label_420fe0;
        case 0x420fe4u: goto label_420fe4;
        case 0x420fe8u: goto label_420fe8;
        case 0x420fecu: goto label_420fec;
        case 0x420ff0u: goto label_420ff0;
        case 0x420ff4u: goto label_420ff4;
        case 0x420ff8u: goto label_420ff8;
        case 0x420ffcu: goto label_420ffc;
        case 0x421000u: goto label_421000;
        case 0x421004u: goto label_421004;
        case 0x421008u: goto label_421008;
        case 0x42100cu: goto label_42100c;
        case 0x421010u: goto label_421010;
        case 0x421014u: goto label_421014;
        case 0x421018u: goto label_421018;
        case 0x42101cu: goto label_42101c;
        case 0x421020u: goto label_421020;
        case 0x421024u: goto label_421024;
        case 0x421028u: goto label_421028;
        case 0x42102cu: goto label_42102c;
        case 0x421030u: goto label_421030;
        case 0x421034u: goto label_421034;
        case 0x421038u: goto label_421038;
        case 0x42103cu: goto label_42103c;
        case 0x421040u: goto label_421040;
        case 0x421044u: goto label_421044;
        case 0x421048u: goto label_421048;
        case 0x42104cu: goto label_42104c;
        case 0x421050u: goto label_421050;
        case 0x421054u: goto label_421054;
        case 0x421058u: goto label_421058;
        case 0x42105cu: goto label_42105c;
        case 0x421060u: goto label_421060;
        case 0x421064u: goto label_421064;
        case 0x421068u: goto label_421068;
        case 0x42106cu: goto label_42106c;
        case 0x421070u: goto label_421070;
        case 0x421074u: goto label_421074;
        case 0x421078u: goto label_421078;
        case 0x42107cu: goto label_42107c;
        case 0x421080u: goto label_421080;
        case 0x421084u: goto label_421084;
        case 0x421088u: goto label_421088;
        case 0x42108cu: goto label_42108c;
        case 0x421090u: goto label_421090;
        case 0x421094u: goto label_421094;
        case 0x421098u: goto label_421098;
        case 0x42109cu: goto label_42109c;
        case 0x4210a0u: goto label_4210a0;
        case 0x4210a4u: goto label_4210a4;
        case 0x4210a8u: goto label_4210a8;
        case 0x4210acu: goto label_4210ac;
        case 0x4210b0u: goto label_4210b0;
        case 0x4210b4u: goto label_4210b4;
        case 0x4210b8u: goto label_4210b8;
        case 0x4210bcu: goto label_4210bc;
        case 0x4210c0u: goto label_4210c0;
        case 0x4210c4u: goto label_4210c4;
        case 0x4210c8u: goto label_4210c8;
        case 0x4210ccu: goto label_4210cc;
        default: break;
    }

    ctx->pc = 0x420a50u;

label_420a50:
    // 0x420a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x420a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_420a54:
    // 0x420a54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x420a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_420a58:
    // 0x420a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x420a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_420a5c:
    // 0x420a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x420a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_420a60:
    // 0x420a60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x420a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420a64:
    // 0x420a64: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_420a68:
    if (ctx->pc == 0x420A68u) {
        ctx->pc = 0x420A68u;
            // 0x420a68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420A6Cu;
        goto label_420a6c;
    }
    ctx->pc = 0x420A64u;
    {
        const bool branch_taken_0x420a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x420A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420A64u;
            // 0x420a68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420a64) {
            ctx->pc = 0x420B20u;
            goto label_420b20;
        }
    }
    ctx->pc = 0x420A6Cu;
label_420a6c:
    // 0x420a6c: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x420a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_420a70:
    // 0x420a70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_420a74:
    if (ctx->pc == 0x420A74u) {
        ctx->pc = 0x420A74u;
            // 0x420a74: 0x262200b0  addiu       $v0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->pc = 0x420A78u;
        goto label_420a78;
    }
    ctx->pc = 0x420A70u;
    {
        const bool branch_taken_0x420a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420a70) {
            ctx->pc = 0x420A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420A70u;
            // 0x420a74: 0x262200b0  addiu       $v0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420A84u;
            goto label_420a84;
        }
    }
    ctx->pc = 0x420A78u;
label_420a78:
    // 0x420a78: 0xc07507c  jal         func_1D41F0
label_420a7c:
    if (ctx->pc == 0x420A7Cu) {
        ctx->pc = 0x420A7Cu;
            // 0x420a7c: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->pc = 0x420A80u;
        goto label_420a80;
    }
    ctx->pc = 0x420A78u;
    SET_GPR_U32(ctx, 31, 0x420A80u);
    ctx->pc = 0x420A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420A78u;
            // 0x420a7c: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420A80u; }
        if (ctx->pc != 0x420A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420A80u; }
        if (ctx->pc != 0x420A80u) { return; }
    }
    ctx->pc = 0x420A80u;
label_420a80:
    // 0x420a80: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x420a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_420a84:
    // 0x420a84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_420a88:
    if (ctx->pc == 0x420A88u) {
        ctx->pc = 0x420A88u;
            // 0x420a88: 0x26220090  addiu       $v0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->pc = 0x420A8Cu;
        goto label_420a8c;
    }
    ctx->pc = 0x420A84u;
    {
        const bool branch_taken_0x420a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420a84) {
            ctx->pc = 0x420A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420A84u;
            // 0x420a88: 0x26220090  addiu       $v0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420A98u;
            goto label_420a98;
        }
    }
    ctx->pc = 0x420A8Cu;
label_420a8c:
    // 0x420a8c: 0xc07507c  jal         func_1D41F0
label_420a90:
    if (ctx->pc == 0x420A90u) {
        ctx->pc = 0x420A90u;
            // 0x420a90: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->pc = 0x420A94u;
        goto label_420a94;
    }
    ctx->pc = 0x420A8Cu;
    SET_GPR_U32(ctx, 31, 0x420A94u);
    ctx->pc = 0x420A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420A8Cu;
            // 0x420a90: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420A94u; }
        if (ctx->pc != 0x420A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420A94u; }
        if (ctx->pc != 0x420A94u) { return; }
    }
    ctx->pc = 0x420A94u;
label_420a94:
    // 0x420a94: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x420a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_420a98:
    // 0x420a98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_420a9c:
    if (ctx->pc == 0x420A9Cu) {
        ctx->pc = 0x420A9Cu;
            // 0x420a9c: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x420AA0u;
        goto label_420aa0;
    }
    ctx->pc = 0x420A98u;
    {
        const bool branch_taken_0x420a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420a98) {
            ctx->pc = 0x420A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420A98u;
            // 0x420a9c: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420AACu;
            goto label_420aac;
        }
    }
    ctx->pc = 0x420AA0u;
label_420aa0:
    // 0x420aa0: 0xc07507c  jal         func_1D41F0
label_420aa4:
    if (ctx->pc == 0x420AA4u) {
        ctx->pc = 0x420AA4u;
            // 0x420aa4: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x420AA8u;
        goto label_420aa8;
    }
    ctx->pc = 0x420AA0u;
    SET_GPR_U32(ctx, 31, 0x420AA8u);
    ctx->pc = 0x420AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420AA0u;
            // 0x420aa4: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420AA8u; }
        if (ctx->pc != 0x420AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420AA8u; }
        if (ctx->pc != 0x420AA8u) { return; }
    }
    ctx->pc = 0x420AA8u;
label_420aa8:
    // 0x420aa8: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x420aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_420aac:
    // 0x420aac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_420ab0:
    if (ctx->pc == 0x420AB0u) {
        ctx->pc = 0x420AB0u;
            // 0x420ab0: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x420AB4u;
        goto label_420ab4;
    }
    ctx->pc = 0x420AACu;
    {
        const bool branch_taken_0x420aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420aac) {
            ctx->pc = 0x420AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420AACu;
            // 0x420ab0: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420AC0u;
            goto label_420ac0;
        }
    }
    ctx->pc = 0x420AB4u;
label_420ab4:
    // 0x420ab4: 0xc07507c  jal         func_1D41F0
label_420ab8:
    if (ctx->pc == 0x420AB8u) {
        ctx->pc = 0x420AB8u;
            // 0x420ab8: 0x8e240074  lw          $a0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->pc = 0x420ABCu;
        goto label_420abc;
    }
    ctx->pc = 0x420AB4u;
    SET_GPR_U32(ctx, 31, 0x420ABCu);
    ctx->pc = 0x420AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420AB4u;
            // 0x420ab8: 0x8e240074  lw          $a0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420ABCu; }
        if (ctx->pc != 0x420ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420ABCu; }
        if (ctx->pc != 0x420ABCu) { return; }
    }
    ctx->pc = 0x420ABCu;
label_420abc:
    // 0x420abc: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x420abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_420ac0:
    // 0x420ac0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_420ac4:
    if (ctx->pc == 0x420AC4u) {
        ctx->pc = 0x420AC4u;
            // 0x420ac4: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x420AC8u;
        goto label_420ac8;
    }
    ctx->pc = 0x420AC0u;
    {
        const bool branch_taken_0x420ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420ac0) {
            ctx->pc = 0x420AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420AC0u;
            // 0x420ac4: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420AD4u;
            goto label_420ad4;
        }
    }
    ctx->pc = 0x420AC8u;
label_420ac8:
    // 0x420ac8: 0xc07507c  jal         func_1D41F0
label_420acc:
    if (ctx->pc == 0x420ACCu) {
        ctx->pc = 0x420ACCu;
            // 0x420acc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x420AD0u;
        goto label_420ad0;
    }
    ctx->pc = 0x420AC8u;
    SET_GPR_U32(ctx, 31, 0x420AD0u);
    ctx->pc = 0x420ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420AC8u;
            // 0x420acc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420AD0u; }
        if (ctx->pc != 0x420AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420AD0u; }
        if (ctx->pc != 0x420AD0u) { return; }
    }
    ctx->pc = 0x420AD0u;
label_420ad0:
    // 0x420ad0: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x420ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_420ad4:
    // 0x420ad4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_420ad8:
    if (ctx->pc == 0x420AD8u) {
        ctx->pc = 0x420AD8u;
            // 0x420ad8: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x420ADCu;
        goto label_420adc;
    }
    ctx->pc = 0x420AD4u;
    {
        const bool branch_taken_0x420ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420ad4) {
            ctx->pc = 0x420AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420AD4u;
            // 0x420ad8: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420AE8u;
            goto label_420ae8;
        }
    }
    ctx->pc = 0x420ADCu;
label_420adc:
    // 0x420adc: 0xc07507c  jal         func_1D41F0
label_420ae0:
    if (ctx->pc == 0x420AE0u) {
        ctx->pc = 0x420AE0u;
            // 0x420ae0: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->pc = 0x420AE4u;
        goto label_420ae4;
    }
    ctx->pc = 0x420ADCu;
    SET_GPR_U32(ctx, 31, 0x420AE4u);
    ctx->pc = 0x420AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420ADCu;
            // 0x420ae0: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420AE4u; }
        if (ctx->pc != 0x420AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420AE4u; }
        if (ctx->pc != 0x420AE4u) { return; }
    }
    ctx->pc = 0x420AE4u;
label_420ae4:
    // 0x420ae4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x420ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_420ae8:
    // 0x420ae8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_420aec:
    if (ctx->pc == 0x420AECu) {
        ctx->pc = 0x420AF0u;
        goto label_420af0;
    }
    ctx->pc = 0x420AE8u;
    {
        const bool branch_taken_0x420ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420ae8) {
            ctx->pc = 0x420AF8u;
            goto label_420af8;
        }
    }
    ctx->pc = 0x420AF0u;
label_420af0:
    // 0x420af0: 0xc07507c  jal         func_1D41F0
label_420af4:
    if (ctx->pc == 0x420AF4u) {
        ctx->pc = 0x420AF4u;
            // 0x420af4: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x420AF8u;
        goto label_420af8;
    }
    ctx->pc = 0x420AF0u;
    SET_GPR_U32(ctx, 31, 0x420AF8u);
    ctx->pc = 0x420AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420AF0u;
            // 0x420af4: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420AF8u; }
        if (ctx->pc != 0x420AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420AF8u; }
        if (ctx->pc != 0x420AF8u) { return; }
    }
    ctx->pc = 0x420AF8u;
label_420af8:
    // 0x420af8: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_420afc:
    if (ctx->pc == 0x420AFCu) {
        ctx->pc = 0x420AFCu;
            // 0x420afc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x420B00u;
        goto label_420b00;
    }
    ctx->pc = 0x420AF8u;
    {
        const bool branch_taken_0x420af8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x420af8) {
            ctx->pc = 0x420AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420AF8u;
            // 0x420afc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420B0Cu;
            goto label_420b0c;
        }
    }
    ctx->pc = 0x420B00u;
label_420b00:
    // 0x420b00: 0xc07507c  jal         func_1D41F0
label_420b04:
    if (ctx->pc == 0x420B04u) {
        ctx->pc = 0x420B04u;
            // 0x420b04: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x420B08u;
        goto label_420b08;
    }
    ctx->pc = 0x420B00u;
    SET_GPR_U32(ctx, 31, 0x420B08u);
    ctx->pc = 0x420B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420B00u;
            // 0x420b04: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420B08u; }
        if (ctx->pc != 0x420B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420B08u; }
        if (ctx->pc != 0x420B08u) { return; }
    }
    ctx->pc = 0x420B08u;
label_420b08:
    // 0x420b08: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x420b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_420b0c:
    // 0x420b0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x420b0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_420b10:
    // 0x420b10: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_420b14:
    if (ctx->pc == 0x420B14u) {
        ctx->pc = 0x420B14u;
            // 0x420b14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420B18u;
        goto label_420b18;
    }
    ctx->pc = 0x420B10u;
    {
        const bool branch_taken_0x420b10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x420b10) {
            ctx->pc = 0x420B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420B10u;
            // 0x420b14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420B24u;
            goto label_420b24;
        }
    }
    ctx->pc = 0x420B18u;
label_420b18:
    // 0x420b18: 0xc0400a8  jal         func_1002A0
label_420b1c:
    if (ctx->pc == 0x420B1Cu) {
        ctx->pc = 0x420B1Cu;
            // 0x420b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420B20u;
        goto label_420b20;
    }
    ctx->pc = 0x420B18u;
    SET_GPR_U32(ctx, 31, 0x420B20u);
    ctx->pc = 0x420B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420B18u;
            // 0x420b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420B20u; }
        if (ctx->pc != 0x420B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420B20u; }
        if (ctx->pc != 0x420B20u) { return; }
    }
    ctx->pc = 0x420B20u;
label_420b20:
    // 0x420b20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x420b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_420b24:
    // 0x420b24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x420b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_420b28:
    // 0x420b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x420b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420b2c:
    // 0x420b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x420b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_420b30:
    // 0x420b30: 0x3e00008  jr          $ra
label_420b34:
    if (ctx->pc == 0x420B34u) {
        ctx->pc = 0x420B34u;
            // 0x420b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x420B38u;
        goto label_420b38;
    }
    ctx->pc = 0x420B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420B30u;
            // 0x420b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420B38u;
label_420b38:
    // 0x420b38: 0x0  nop
    ctx->pc = 0x420b38u;
    // NOP
label_420b3c:
    // 0x420b3c: 0x0  nop
    ctx->pc = 0x420b3cu;
    // NOP
label_420b40:
    // 0x420b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x420b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_420b44:
    // 0x420b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x420b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_420b48:
    // 0x420b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x420b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_420b4c:
    // 0x420b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x420b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_420b50:
    // 0x420b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x420b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420b54:
    // 0x420b54: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_420b58:
    if (ctx->pc == 0x420B58u) {
        ctx->pc = 0x420B58u;
            // 0x420b58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420B5Cu;
        goto label_420b5c;
    }
    ctx->pc = 0x420B54u;
    {
        const bool branch_taken_0x420b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x420B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420B54u;
            // 0x420b58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420b54) {
            ctx->pc = 0x420C70u;
            goto label_420c70;
        }
    }
    ctx->pc = 0x420B5Cu;
label_420b5c:
    // 0x420b5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x420b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_420b60:
    // 0x420b60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x420b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_420b64:
    // 0x420b64: 0x2463bcd0  addiu       $v1, $v1, -0x4330
    ctx->pc = 0x420b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950096));
label_420b68:
    // 0x420b68: 0x2442bd10  addiu       $v0, $v0, -0x42F0
    ctx->pc = 0x420b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950160));
label_420b6c:
    // 0x420b6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x420b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_420b70:
    // 0x420b70: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x420b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_420b74:
    // 0x420b74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x420b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_420b78:
    // 0x420b78: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x420b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_420b7c:
    // 0x420b7c: 0x320f809  jalr        $t9
label_420b80:
    if (ctx->pc == 0x420B80u) {
        ctx->pc = 0x420B84u;
        goto label_420b84;
    }
    ctx->pc = 0x420B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x420B84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x420B84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x420B84u; }
            if (ctx->pc != 0x420B84u) { return; }
        }
        }
    }
    ctx->pc = 0x420B84u;
label_420b84:
    // 0x420b84: 0x26240148  addiu       $a0, $s1, 0x148
    ctx->pc = 0x420b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
label_420b88:
    // 0x420b88: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_420b8c:
    if (ctx->pc == 0x420B8Cu) {
        ctx->pc = 0x420B90u;
        goto label_420b90;
    }
    ctx->pc = 0x420B88u;
    {
        const bool branch_taken_0x420b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x420b88) {
            ctx->pc = 0x420BD8u;
            goto label_420bd8;
        }
    }
    ctx->pc = 0x420B90u;
label_420b90:
    // 0x420b90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x420b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_420b94:
    // 0x420b94: 0x2442bc30  addiu       $v0, $v0, -0x43D0
    ctx->pc = 0x420b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949936));
label_420b98:
    // 0x420b98: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_420b9c:
    if (ctx->pc == 0x420B9Cu) {
        ctx->pc = 0x420B9Cu;
            // 0x420b9c: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->pc = 0x420BA0u;
        goto label_420ba0;
    }
    ctx->pc = 0x420B98u;
    {
        const bool branch_taken_0x420b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x420B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420B98u;
            // 0x420b9c: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420b98) {
            ctx->pc = 0x420BD8u;
            goto label_420bd8;
        }
    }
    ctx->pc = 0x420BA0u;
label_420ba0:
    // 0x420ba0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x420ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_420ba4:
    // 0x420ba4: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x420ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_420ba8:
    // 0x420ba8: 0xc0d37dc  jal         func_34DF70
label_420bac:
    if (ctx->pc == 0x420BACu) {
        ctx->pc = 0x420BACu;
            // 0x420bac: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->pc = 0x420BB0u;
        goto label_420bb0;
    }
    ctx->pc = 0x420BA8u;
    SET_GPR_U32(ctx, 31, 0x420BB0u);
    ctx->pc = 0x420BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420BA8u;
            // 0x420bac: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420BB0u; }
        if (ctx->pc != 0x420BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420BB0u; }
        if (ctx->pc != 0x420BB0u) { return; }
    }
    ctx->pc = 0x420BB0u;
label_420bb0:
    // 0x420bb0: 0x26230148  addiu       $v1, $s1, 0x148
    ctx->pc = 0x420bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
label_420bb4:
    // 0x420bb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_420bb8:
    if (ctx->pc == 0x420BB8u) {
        ctx->pc = 0x420BBCu;
        goto label_420bbc;
    }
    ctx->pc = 0x420BB4u;
    {
        const bool branch_taken_0x420bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x420bb4) {
            ctx->pc = 0x420BD8u;
            goto label_420bd8;
        }
    }
    ctx->pc = 0x420BBCu;
label_420bbc:
    // 0x420bbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x420bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_420bc0:
    // 0x420bc0: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x420bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_420bc4:
    // 0x420bc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_420bc8:
    if (ctx->pc == 0x420BC8u) {
        ctx->pc = 0x420BC8u;
            // 0x420bc8: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->pc = 0x420BCCu;
        goto label_420bcc;
    }
    ctx->pc = 0x420BC4u;
    {
        const bool branch_taken_0x420bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x420BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420BC4u;
            // 0x420bc8: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420bc4) {
            ctx->pc = 0x420BD8u;
            goto label_420bd8;
        }
    }
    ctx->pc = 0x420BCCu;
label_420bcc:
    // 0x420bcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x420bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_420bd0:
    // 0x420bd0: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x420bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_420bd4:
    // 0x420bd4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x420bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_420bd8:
    // 0x420bd8: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_420bdc:
    if (ctx->pc == 0x420BDCu) {
        ctx->pc = 0x420BDCu;
            // 0x420bdc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x420BE0u;
        goto label_420be0;
    }
    ctx->pc = 0x420BD8u;
    {
        const bool branch_taken_0x420bd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x420bd8) {
            ctx->pc = 0x420BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420BD8u;
            // 0x420bdc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420C5Cu;
            goto label_420c5c;
        }
    }
    ctx->pc = 0x420BE0u;
label_420be0:
    // 0x420be0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x420be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_420be4:
    // 0x420be4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x420be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_420be8:
    // 0x420be8: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x420be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_420bec:
    // 0x420bec: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x420becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_420bf0:
    // 0x420bf0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x420bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_420bf4:
    // 0x420bf4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x420bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_420bf8:
    // 0x420bf8: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x420bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_420bfc:
    // 0x420bfc: 0xc0aecc4  jal         func_2BB310
label_420c00:
    if (ctx->pc == 0x420C00u) {
        ctx->pc = 0x420C00u;
            // 0x420c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x420C04u;
        goto label_420c04;
    }
    ctx->pc = 0x420BFCu;
    SET_GPR_U32(ctx, 31, 0x420C04u);
    ctx->pc = 0x420C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420BFCu;
            // 0x420c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C04u; }
        if (ctx->pc != 0x420C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C04u; }
        if (ctx->pc != 0x420C04u) { return; }
    }
    ctx->pc = 0x420C04u;
label_420c04:
    // 0x420c04: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x420c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_420c08:
    // 0x420c08: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x420c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_420c0c:
    // 0x420c0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_420c10:
    if (ctx->pc == 0x420C10u) {
        ctx->pc = 0x420C10u;
            // 0x420c10: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x420C14u;
        goto label_420c14;
    }
    ctx->pc = 0x420C0Cu;
    {
        const bool branch_taken_0x420c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x420c0c) {
            ctx->pc = 0x420C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420C0Cu;
            // 0x420c10: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420C28u;
            goto label_420c28;
        }
    }
    ctx->pc = 0x420C14u;
label_420c14:
    // 0x420c14: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x420c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_420c18:
    // 0x420c18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x420c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_420c1c:
    // 0x420c1c: 0x320f809  jalr        $t9
label_420c20:
    if (ctx->pc == 0x420C20u) {
        ctx->pc = 0x420C20u;
            // 0x420c20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x420C24u;
        goto label_420c24;
    }
    ctx->pc = 0x420C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x420C24u);
        ctx->pc = 0x420C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420C1Cu;
            // 0x420c20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x420C24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x420C24u; }
            if (ctx->pc != 0x420C24u) { return; }
        }
        }
    }
    ctx->pc = 0x420C24u;
label_420c24:
    // 0x420c24: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x420c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_420c28:
    // 0x420c28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x420c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_420c2c:
    // 0x420c2c: 0xc0aec9c  jal         func_2BB270
label_420c30:
    if (ctx->pc == 0x420C30u) {
        ctx->pc = 0x420C30u;
            // 0x420c30: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x420C34u;
        goto label_420c34;
    }
    ctx->pc = 0x420C2Cu;
    SET_GPR_U32(ctx, 31, 0x420C34u);
    ctx->pc = 0x420C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420C2Cu;
            // 0x420c30: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C34u; }
        if (ctx->pc != 0x420C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C34u; }
        if (ctx->pc != 0x420C34u) { return; }
    }
    ctx->pc = 0x420C34u;
label_420c34:
    // 0x420c34: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x420c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_420c38:
    // 0x420c38: 0xc0aec88  jal         func_2BB220
label_420c3c:
    if (ctx->pc == 0x420C3Cu) {
        ctx->pc = 0x420C3Cu;
            // 0x420c3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x420C40u;
        goto label_420c40;
    }
    ctx->pc = 0x420C38u;
    SET_GPR_U32(ctx, 31, 0x420C40u);
    ctx->pc = 0x420C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420C38u;
            // 0x420c3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C40u; }
        if (ctx->pc != 0x420C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C40u; }
        if (ctx->pc != 0x420C40u) { return; }
    }
    ctx->pc = 0x420C40u;
label_420c40:
    // 0x420c40: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x420c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_420c44:
    // 0x420c44: 0xc0aec0c  jal         func_2BB030
label_420c48:
    if (ctx->pc == 0x420C48u) {
        ctx->pc = 0x420C48u;
            // 0x420c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420C4Cu;
        goto label_420c4c;
    }
    ctx->pc = 0x420C44u;
    SET_GPR_U32(ctx, 31, 0x420C4Cu);
    ctx->pc = 0x420C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420C44u;
            // 0x420c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C4Cu; }
        if (ctx->pc != 0x420C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C4Cu; }
        if (ctx->pc != 0x420C4Cu) { return; }
    }
    ctx->pc = 0x420C4Cu;
label_420c4c:
    // 0x420c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x420c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_420c50:
    // 0x420c50: 0xc0aeaa8  jal         func_2BAAA0
label_420c54:
    if (ctx->pc == 0x420C54u) {
        ctx->pc = 0x420C54u;
            // 0x420c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420C58u;
        goto label_420c58;
    }
    ctx->pc = 0x420C50u;
    SET_GPR_U32(ctx, 31, 0x420C58u);
    ctx->pc = 0x420C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420C50u;
            // 0x420c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C58u; }
        if (ctx->pc != 0x420C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C58u; }
        if (ctx->pc != 0x420C58u) { return; }
    }
    ctx->pc = 0x420C58u;
label_420c58:
    // 0x420c58: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x420c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_420c5c:
    // 0x420c5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x420c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_420c60:
    // 0x420c60: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_420c64:
    if (ctx->pc == 0x420C64u) {
        ctx->pc = 0x420C64u;
            // 0x420c64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420C68u;
        goto label_420c68;
    }
    ctx->pc = 0x420C60u;
    {
        const bool branch_taken_0x420c60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x420c60) {
            ctx->pc = 0x420C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420C60u;
            // 0x420c64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420C74u;
            goto label_420c74;
        }
    }
    ctx->pc = 0x420C68u;
label_420c68:
    // 0x420c68: 0xc0400a8  jal         func_1002A0
label_420c6c:
    if (ctx->pc == 0x420C6Cu) {
        ctx->pc = 0x420C6Cu;
            // 0x420c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420C70u;
        goto label_420c70;
    }
    ctx->pc = 0x420C68u;
    SET_GPR_U32(ctx, 31, 0x420C70u);
    ctx->pc = 0x420C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420C68u;
            // 0x420c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C70u; }
        if (ctx->pc != 0x420C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420C70u; }
        if (ctx->pc != 0x420C70u) { return; }
    }
    ctx->pc = 0x420C70u;
label_420c70:
    // 0x420c70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x420c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_420c74:
    // 0x420c74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x420c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_420c78:
    // 0x420c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x420c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420c7c:
    // 0x420c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x420c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_420c80:
    // 0x420c80: 0x3e00008  jr          $ra
label_420c84:
    if (ctx->pc == 0x420C84u) {
        ctx->pc = 0x420C84u;
            // 0x420c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x420C88u;
        goto label_420c88;
    }
    ctx->pc = 0x420C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420C80u;
            // 0x420c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420C88u;
label_420c88:
    // 0x420c88: 0x0  nop
    ctx->pc = 0x420c88u;
    // NOP
label_420c8c:
    // 0x420c8c: 0x0  nop
    ctx->pc = 0x420c8cu;
    // NOP
label_420c90:
    // 0x420c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_420c94:
    // 0x420c94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x420c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_420c98:
    // 0x420c98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x420c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_420c9c:
    // 0x420c9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x420c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_420ca0:
    // 0x420ca0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_420ca4:
    // 0x420ca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x420ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_420ca8:
    // 0x420ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x420ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_420cac:
    // 0x420cac: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x420cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_420cb0:
    // 0x420cb0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x420cb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_420cb4:
    // 0x420cb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x420cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_420cb8:
    // 0x420cb8: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_420cbc:
    if (ctx->pc == 0x420CBCu) {
        ctx->pc = 0x420CBCu;
            // 0x420cbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420CC0u;
        goto label_420cc0;
    }
    ctx->pc = 0x420CB8u;
    {
        const bool branch_taken_0x420cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x420CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420CB8u;
            // 0x420cbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420cb8) {
            ctx->pc = 0x420CFCu;
            goto label_420cfc;
        }
    }
    ctx->pc = 0x420CC0u;
label_420cc0:
    // 0x420cc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x420cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_420cc4:
    // 0x420cc4: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
label_420cc8:
    if (ctx->pc == 0x420CC8u) {
        ctx->pc = 0x420CCCu;
        goto label_420ccc;
    }
    ctx->pc = 0x420CC4u;
    {
        const bool branch_taken_0x420cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x420cc4) {
            ctx->pc = 0x420D38u;
            goto label_420d38;
        }
    }
    ctx->pc = 0x420CCCu;
label_420ccc:
    // 0x420ccc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x420cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_420cd0:
    // 0x420cd0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_420cd4:
    if (ctx->pc == 0x420CD4u) {
        ctx->pc = 0x420CD4u;
            // 0x420cd4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x420CD8u;
        goto label_420cd8;
    }
    ctx->pc = 0x420CD0u;
    {
        const bool branch_taken_0x420cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x420cd0) {
            ctx->pc = 0x420CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420CD0u;
            // 0x420cd4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420CE0u;
            goto label_420ce0;
        }
    }
    ctx->pc = 0x420CD8u;
label_420cd8:
    // 0x420cd8: 0x10000017  b           . + 4 + (0x17 << 2)
label_420cdc:
    if (ctx->pc == 0x420CDCu) {
        ctx->pc = 0x420CE0u;
        goto label_420ce0;
    }
    ctx->pc = 0x420CD8u;
    {
        const bool branch_taken_0x420cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x420cd8) {
            ctx->pc = 0x420D38u;
            goto label_420d38;
        }
    }
    ctx->pc = 0x420CE0u;
label_420ce0:
    // 0x420ce0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x420ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_420ce4:
    // 0x420ce4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x420ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_420ce8:
    // 0x420ce8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x420ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_420cec:
    // 0x420cec: 0x320f809  jalr        $t9
label_420cf0:
    if (ctx->pc == 0x420CF0u) {
        ctx->pc = 0x420CF0u;
            // 0x420cf0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x420CF4u;
        goto label_420cf4;
    }
    ctx->pc = 0x420CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x420CF4u);
        ctx->pc = 0x420CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420CECu;
            // 0x420cf0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x420CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x420CF4u; }
            if (ctx->pc != 0x420CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x420CF4u;
label_420cf4:
    // 0x420cf4: 0x10000010  b           . + 4 + (0x10 << 2)
label_420cf8:
    if (ctx->pc == 0x420CF8u) {
        ctx->pc = 0x420CFCu;
        goto label_420cfc;
    }
    ctx->pc = 0x420CF4u;
    {
        const bool branch_taken_0x420cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x420cf4) {
            ctx->pc = 0x420D38u;
            goto label_420d38;
        }
    }
    ctx->pc = 0x420CFCu;
label_420cfc:
    // 0x420cfc: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x420cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_420d00:
    // 0x420d00: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_420d04:
    if (ctx->pc == 0x420D04u) {
        ctx->pc = 0x420D08u;
        goto label_420d08;
    }
    ctx->pc = 0x420D00u;
    {
        const bool branch_taken_0x420d00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x420d00) {
            ctx->pc = 0x420D38u;
            goto label_420d38;
        }
    }
    ctx->pc = 0x420D08u;
label_420d08:
    // 0x420d08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x420d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420d0c:
    // 0x420d0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x420d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420d10:
    // 0x420d10: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x420d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_420d14:
    // 0x420d14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x420d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_420d18:
    // 0x420d18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x420d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_420d1c:
    // 0x420d1c: 0xc108b18  jal         func_422C60
label_420d20:
    if (ctx->pc == 0x420D20u) {
        ctx->pc = 0x420D20u;
            // 0x420d20: 0x26050084  addiu       $a1, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x420D24u;
        goto label_420d24;
    }
    ctx->pc = 0x420D1Cu;
    SET_GPR_U32(ctx, 31, 0x420D24u);
    ctx->pc = 0x420D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420D1Cu;
            // 0x420d20: 0x26050084  addiu       $a1, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422C60u;
    if (runtime->hasFunction(0x422C60u)) {
        auto targetFn = runtime->lookupFunction(0x422C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420D24u; }
        if (ctx->pc != 0x420D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00422C60_0x422c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420D24u; }
        if (ctx->pc != 0x420D24u) { return; }
    }
    ctx->pc = 0x420D24u;
label_420d24:
    // 0x420d24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x420d24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_420d28:
    // 0x420d28: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x420d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_420d2c:
    // 0x420d2c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_420d30:
    if (ctx->pc == 0x420D30u) {
        ctx->pc = 0x420D30u;
            // 0x420d30: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x420D34u;
        goto label_420d34;
    }
    ctx->pc = 0x420D2Cu;
    {
        const bool branch_taken_0x420d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x420D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420D2Cu;
            // 0x420d30: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420d2c) {
            ctx->pc = 0x420D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_420d10;
        }
    }
    ctx->pc = 0x420D34u;
label_420d34:
    // 0x420d34: 0x0  nop
    ctx->pc = 0x420d34u;
    // NOP
label_420d38:
    // 0x420d38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x420d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_420d3c:
    // 0x420d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x420d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420d40:
    // 0x420d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420d44:
    // 0x420d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x420d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420d48:
    // 0x420d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x420d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_420d4c:
    // 0x420d4c: 0x3e00008  jr          $ra
label_420d50:
    if (ctx->pc == 0x420D50u) {
        ctx->pc = 0x420D50u;
            // 0x420d50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x420D54u;
        goto label_420d54;
    }
    ctx->pc = 0x420D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420D4Cu;
            // 0x420d50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420D54u;
label_420d54:
    // 0x420d54: 0x0  nop
    ctx->pc = 0x420d54u;
    // NOP
label_420d58:
    // 0x420d58: 0x0  nop
    ctx->pc = 0x420d58u;
    // NOP
label_420d5c:
    // 0x420d5c: 0x0  nop
    ctx->pc = 0x420d5cu;
    // NOP
label_420d60:
    // 0x420d60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_420d64:
    // 0x420d64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x420d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_420d68:
    // 0x420d68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x420d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_420d6c:
    // 0x420d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x420d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_420d70:
    // 0x420d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_420d74:
    // 0x420d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x420d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_420d78:
    // 0x420d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x420d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_420d7c:
    // 0x420d7c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x420d7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_420d80:
    // 0x420d80: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_420d84:
    if (ctx->pc == 0x420D84u) {
        ctx->pc = 0x420D84u;
            // 0x420d84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420D88u;
        goto label_420d88;
    }
    ctx->pc = 0x420D80u;
    {
        const bool branch_taken_0x420d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x420D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420D80u;
            // 0x420d84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420d80) {
            ctx->pc = 0x420DB4u;
            goto label_420db4;
        }
    }
    ctx->pc = 0x420D88u;
label_420d88:
    // 0x420d88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x420d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_420d8c:
    // 0x420d8c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_420d90:
    if (ctx->pc == 0x420D90u) {
        ctx->pc = 0x420D90u;
            // 0x420d90: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x420D94u;
        goto label_420d94;
    }
    ctx->pc = 0x420D8Cu;
    {
        const bool branch_taken_0x420d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x420d8c) {
            ctx->pc = 0x420D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420D8Cu;
            // 0x420d90: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420DA8u;
            goto label_420da8;
        }
    }
    ctx->pc = 0x420D94u;
label_420d94:
    // 0x420d94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x420d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_420d98:
    // 0x420d98: 0x10a300c3  beq         $a1, $v1, . + 4 + (0xC3 << 2)
label_420d9c:
    if (ctx->pc == 0x420D9Cu) {
        ctx->pc = 0x420DA0u;
        goto label_420da0;
    }
    ctx->pc = 0x420D98u;
    {
        const bool branch_taken_0x420d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x420d98) {
            ctx->pc = 0x4210A8u;
            goto label_4210a8;
        }
    }
    ctx->pc = 0x420DA0u;
label_420da0:
    // 0x420da0: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_420da4:
    if (ctx->pc == 0x420DA4u) {
        ctx->pc = 0x420DA8u;
        goto label_420da8;
    }
    ctx->pc = 0x420DA0u;
    {
        const bool branch_taken_0x420da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x420da0) {
            ctx->pc = 0x4210A8u;
            goto label_4210a8;
        }
    }
    ctx->pc = 0x420DA8u;
label_420da8:
    // 0x420da8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x420da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_420dac:
    // 0x420dac: 0x320f809  jalr        $t9
label_420db0:
    if (ctx->pc == 0x420DB0u) {
        ctx->pc = 0x420DB4u;
        goto label_420db4;
    }
    ctx->pc = 0x420DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x420DB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x420DB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x420DB4u; }
            if (ctx->pc != 0x420DB4u) { return; }
        }
        }
    }
    ctx->pc = 0x420DB4u;
label_420db4:
    // 0x420db4: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x420db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_420db8:
    // 0x420db8: 0x26230084  addiu       $v1, $s1, 0x84
    ctx->pc = 0x420db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_420dbc:
    // 0x420dbc: 0x8cc68a08  lw          $a2, -0x75F8($a2)
    ctx->pc = 0x420dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937096)));
label_420dc0:
    // 0x420dc0: 0x246b0020  addiu       $t3, $v1, 0x20
    ctx->pc = 0x420dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_420dc4:
    // 0x420dc4: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x420dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420dc8:
    // 0x420dc8: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x420dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_420dcc:
    // 0x420dcc: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x420dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_420dd0:
    // 0x420dd0: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x420dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_420dd4:
    // 0x420dd4: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x420dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420dd8:
    // 0x420dd8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x420dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_420ddc:
    // 0x420ddc: 0x2569000c  addiu       $t1, $t3, 0xC
    ctx->pc = 0x420ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
label_420de0:
    // 0x420de0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x420de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_420de4:
    // 0x420de4: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x420de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
label_420de8:
    // 0x420de8: 0x8e2600ac  lw          $a2, 0xAC($s1)
    ctx->pc = 0x420de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_420dec:
    // 0x420dec: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x420decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420df0:
    // 0x420df0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x420df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420df4:
    // 0x420df4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x420df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420df8:
    // 0x420df8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_420dfc:
    if (ctx->pc == 0x420DFCu) {
        ctx->pc = 0x420DFCu;
            // 0x420dfc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x420E00u;
        goto label_420e00;
    }
    ctx->pc = 0x420DF8u;
    {
        const bool branch_taken_0x420df8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x420DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420DF8u;
            // 0x420dfc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420df8) {
            ctx->pc = 0x420E04u;
            goto label_420e04;
        }
    }
    ctx->pc = 0x420E00u;
label_420e00:
    // 0x420e00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x420e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420e04:
    // 0x420e04: 0x5020004  bltzl       $t0, . + 4 + (0x4 << 2)
label_420e08:
    if (ctx->pc == 0x420E08u) {
        ctx->pc = 0x420E08u;
            // 0x420e08: 0x83842  srl         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x420E0Cu;
        goto label_420e0c;
    }
    ctx->pc = 0x420E04u;
    {
        const bool branch_taken_0x420e04 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x420e04) {
            ctx->pc = 0x420E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420E04u;
            // 0x420e08: 0x83842  srl         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420E18u;
            goto label_420e18;
        }
    }
    ctx->pc = 0x420E0Cu;
label_420e0c:
    // 0x420e0c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x420e0cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420e10:
    // 0x420e10: 0x10000007  b           . + 4 + (0x7 << 2)
label_420e14:
    if (ctx->pc == 0x420E14u) {
        ctx->pc = 0x420E14u;
            // 0x420e14: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x420E18u;
        goto label_420e18;
    }
    ctx->pc = 0x420E10u;
    {
        const bool branch_taken_0x420e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420E10u;
            // 0x420e14: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e10) {
            ctx->pc = 0x420E30u;
            goto label_420e30;
        }
    }
    ctx->pc = 0x420E18u;
label_420e18:
    // 0x420e18: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x420e18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_420e1c:
    // 0x420e1c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x420e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_420e20:
    // 0x420e20: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x420e20u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420e24:
    // 0x420e24: 0x0  nop
    ctx->pc = 0x420e24u;
    // NOP
label_420e28:
    // 0x420e28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x420e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_420e2c:
    // 0x420e2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x420e2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_420e30:
    // 0x420e30: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x420e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420e34:
    // 0x420e34: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x420e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_420e38:
    // 0x420e38: 0x256a001c  addiu       $t2, $t3, 0x1C
    ctx->pc = 0x420e38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 28));
label_420e3c:
    // 0x420e3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x420e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_420e40:
    // 0x420e40: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x420e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_420e44:
    // 0x420e44: 0x8cc68a08  lw          $a2, -0x75F8($a2)
    ctx->pc = 0x420e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937096)));
label_420e48:
    // 0x420e48: 0xc560001c  lwc1        $f0, 0x1C($t3)
    ctx->pc = 0x420e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420e4c:
    // 0x420e4c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x420e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420e50:
    // 0x420e50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x420e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_420e54:
    // 0x420e54: 0xe560001c  swc1        $f0, 0x1C($t3)
    ctx->pc = 0x420e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 28), bits); }
label_420e58:
    // 0x420e58: 0x8d660014  lw          $a2, 0x14($t3)
    ctx->pc = 0x420e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_420e5c:
    // 0x420e5c: 0xc560001c  lwc1        $f0, 0x1C($t3)
    ctx->pc = 0x420e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420e60:
    // 0x420e60: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x420e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420e64:
    // 0x420e64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x420e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420e68:
    // 0x420e68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_420e6c:
    if (ctx->pc == 0x420E6Cu) {
        ctx->pc = 0x420E6Cu;
            // 0x420e6c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x420E70u;
        goto label_420e70;
    }
    ctx->pc = 0x420E68u;
    {
        const bool branch_taken_0x420e68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x420E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420E68u;
            // 0x420e6c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e68) {
            ctx->pc = 0x420E74u;
            goto label_420e74;
        }
    }
    ctx->pc = 0x420E70u;
label_420e70:
    // 0x420e70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x420e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420e74:
    // 0x420e74: 0x5020004  bltzl       $t0, . + 4 + (0x4 << 2)
label_420e78:
    if (ctx->pc == 0x420E78u) {
        ctx->pc = 0x420E78u;
            // 0x420e78: 0x83842  srl         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x420E7Cu;
        goto label_420e7c;
    }
    ctx->pc = 0x420E74u;
    {
        const bool branch_taken_0x420e74 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x420e74) {
            ctx->pc = 0x420E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420E74u;
            // 0x420e78: 0x83842  srl         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420E88u;
            goto label_420e88;
        }
    }
    ctx->pc = 0x420E7Cu;
label_420e7c:
    // 0x420e7c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x420e7cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420e80:
    // 0x420e80: 0x10000007  b           . + 4 + (0x7 << 2)
label_420e84:
    if (ctx->pc == 0x420E84u) {
        ctx->pc = 0x420E84u;
            // 0x420e84: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x420E88u;
        goto label_420e88;
    }
    ctx->pc = 0x420E80u;
    {
        const bool branch_taken_0x420e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420E80u;
            // 0x420e84: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e80) {
            ctx->pc = 0x420EA0u;
            goto label_420ea0;
        }
    }
    ctx->pc = 0x420E88u;
label_420e88:
    // 0x420e88: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x420e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_420e8c:
    // 0x420e8c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x420e8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_420e90:
    // 0x420e90: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x420e90u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420e94:
    // 0x420e94: 0x0  nop
    ctx->pc = 0x420e94u;
    // NOP
label_420e98:
    // 0x420e98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x420e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_420e9c:
    // 0x420e9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x420e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_420ea0:
    // 0x420ea0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x420ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420ea4:
    // 0x420ea4: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x420ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_420ea8:
    // 0x420ea8: 0x24a9000c  addiu       $t1, $a1, 0xC
    ctx->pc = 0x420ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_420eac:
    // 0x420eac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x420eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_420eb0:
    // 0x420eb0: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x420eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_420eb4:
    // 0x420eb4: 0x8cc68a08  lw          $a2, -0x75F8($a2)
    ctx->pc = 0x420eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937096)));
label_420eb8:
    // 0x420eb8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x420eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420ebc:
    // 0x420ebc: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x420ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420ec0:
    // 0x420ec0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x420ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_420ec4:
    // 0x420ec4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x420ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_420ec8:
    // 0x420ec8: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x420ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_420ecc:
    // 0x420ecc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x420eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420ed0:
    // 0x420ed0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x420ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420ed4:
    // 0x420ed4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x420ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420ed8:
    // 0x420ed8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_420edc:
    if (ctx->pc == 0x420EDCu) {
        ctx->pc = 0x420EDCu;
            // 0x420edc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x420EE0u;
        goto label_420ee0;
    }
    ctx->pc = 0x420ED8u;
    {
        const bool branch_taken_0x420ed8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x420EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420ED8u;
            // 0x420edc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420ed8) {
            ctx->pc = 0x420EE4u;
            goto label_420ee4;
        }
    }
    ctx->pc = 0x420EE0u;
label_420ee0:
    // 0x420ee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x420ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420ee4:
    // 0x420ee4: 0x4e20004  bltzl       $a3, . + 4 + (0x4 << 2)
label_420ee8:
    if (ctx->pc == 0x420EE8u) {
        ctx->pc = 0x420EE8u;
            // 0x420ee8: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x420EECu;
        goto label_420eec;
    }
    ctx->pc = 0x420EE4u;
    {
        const bool branch_taken_0x420ee4 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x420ee4) {
            ctx->pc = 0x420EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420EE4u;
            // 0x420ee8: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420EF8u;
            goto label_420ef8;
        }
    }
    ctx->pc = 0x420EECu;
label_420eec:
    // 0x420eec: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x420eecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420ef0:
    // 0x420ef0: 0x10000007  b           . + 4 + (0x7 << 2)
label_420ef4:
    if (ctx->pc == 0x420EF4u) {
        ctx->pc = 0x420EF4u;
            // 0x420ef4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x420EF8u;
        goto label_420ef8;
    }
    ctx->pc = 0x420EF0u;
    {
        const bool branch_taken_0x420ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420EF0u;
            // 0x420ef4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x420ef0) {
            ctx->pc = 0x420F10u;
            goto label_420f10;
        }
    }
    ctx->pc = 0x420EF8u;
label_420ef8:
    // 0x420ef8: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x420ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_420efc:
    // 0x420efc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x420efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_420f00:
    // 0x420f00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x420f00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420f04:
    // 0x420f04: 0x0  nop
    ctx->pc = 0x420f04u;
    // NOP
label_420f08:
    // 0x420f08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x420f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_420f0c:
    // 0x420f0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x420f0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_420f10:
    // 0x420f10: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x420f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420f14:
    // 0x420f14: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x420f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_420f18:
    // 0x420f18: 0x2488000c  addiu       $t0, $a0, 0xC
    ctx->pc = 0x420f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_420f1c:
    // 0x420f1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x420f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_420f20:
    // 0x420f20: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x420f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_420f24:
    // 0x420f24: 0x8ca58a08  lw          $a1, -0x75F8($a1)
    ctx->pc = 0x420f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_420f28:
    // 0x420f28: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x420f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420f2c:
    // 0x420f2c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x420f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420f30:
    // 0x420f30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x420f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_420f34:
    // 0x420f34: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x420f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_420f38:
    // 0x420f38: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x420f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_420f3c:
    // 0x420f3c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x420f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420f40:
    // 0x420f40: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x420f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420f44:
    // 0x420f44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x420f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420f48:
    // 0x420f48: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_420f4c:
    if (ctx->pc == 0x420F4Cu) {
        ctx->pc = 0x420F4Cu;
            // 0x420f4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x420F50u;
        goto label_420f50;
    }
    ctx->pc = 0x420F48u;
    {
        const bool branch_taken_0x420f48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x420F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420F48u;
            // 0x420f4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f48) {
            ctx->pc = 0x420F54u;
            goto label_420f54;
        }
    }
    ctx->pc = 0x420F50u;
label_420f50:
    // 0x420f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x420f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420f54:
    // 0x420f54: 0x4e20004  bltzl       $a3, . + 4 + (0x4 << 2)
label_420f58:
    if (ctx->pc == 0x420F58u) {
        ctx->pc = 0x420F58u;
            // 0x420f58: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x420F5Cu;
        goto label_420f5c;
    }
    ctx->pc = 0x420F54u;
    {
        const bool branch_taken_0x420f54 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x420f54) {
            ctx->pc = 0x420F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420F54u;
            // 0x420f58: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420F68u;
            goto label_420f68;
        }
    }
    ctx->pc = 0x420F5Cu;
label_420f5c:
    // 0x420f5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x420f5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420f60:
    // 0x420f60: 0x10000007  b           . + 4 + (0x7 << 2)
label_420f64:
    if (ctx->pc == 0x420F64u) {
        ctx->pc = 0x420F64u;
            // 0x420f64: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x420F68u;
        goto label_420f68;
    }
    ctx->pc = 0x420F60u;
    {
        const bool branch_taken_0x420f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420F60u;
            // 0x420f64: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f60) {
            ctx->pc = 0x420F80u;
            goto label_420f80;
        }
    }
    ctx->pc = 0x420F68u;
label_420f68:
    // 0x420f68: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x420f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_420f6c:
    // 0x420f6c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x420f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_420f70:
    // 0x420f70: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x420f70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420f74:
    // 0x420f74: 0x0  nop
    ctx->pc = 0x420f74u;
    // NOP
label_420f78:
    // 0x420f78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x420f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_420f7c:
    // 0x420f7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x420f7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_420f80:
    // 0x420f80: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x420f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420f84:
    // 0x420f84: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x420f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_420f88:
    // 0x420f88: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x420f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_420f8c:
    // 0x420f8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x420f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_420f90:
    // 0x420f90: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x420f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_420f94:
    // 0x420f94: 0x8ca58a08  lw          $a1, -0x75F8($a1)
    ctx->pc = 0x420f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_420f98:
    // 0x420f98: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x420f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420f9c:
    // 0x420f9c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x420f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420fa0:
    // 0x420fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x420fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_420fa4:
    // 0x420fa4: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x420fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_420fa8:
    // 0x420fa8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x420fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_420fac:
    // 0x420fac: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x420facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420fb0:
    // 0x420fb0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x420fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420fb4:
    // 0x420fb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x420fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420fb8:
    // 0x420fb8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_420fbc:
    if (ctx->pc == 0x420FBCu) {
        ctx->pc = 0x420FBCu;
            // 0x420fbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x420FC0u;
        goto label_420fc0;
    }
    ctx->pc = 0x420FB8u;
    {
        const bool branch_taken_0x420fb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x420FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420FB8u;
            // 0x420fbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420fb8) {
            ctx->pc = 0x420FC4u;
            goto label_420fc4;
        }
    }
    ctx->pc = 0x420FC0u;
label_420fc0:
    // 0x420fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x420fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420fc4:
    // 0x420fc4: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_420fc8:
    if (ctx->pc == 0x420FC8u) {
        ctx->pc = 0x420FC8u;
            // 0x420fc8: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x420FCCu;
        goto label_420fcc;
    }
    ctx->pc = 0x420FC4u;
    {
        const bool branch_taken_0x420fc4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x420fc4) {
            ctx->pc = 0x420FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420FC4u;
            // 0x420fc8: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420FD8u;
            goto label_420fd8;
        }
    }
    ctx->pc = 0x420FCCu;
label_420fcc:
    // 0x420fcc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x420fccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420fd0:
    // 0x420fd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_420fd4:
    if (ctx->pc == 0x420FD4u) {
        ctx->pc = 0x420FD4u;
            // 0x420fd4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x420FD8u;
        goto label_420fd8;
    }
    ctx->pc = 0x420FD0u;
    {
        const bool branch_taken_0x420fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420FD0u;
            // 0x420fd4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x420fd0) {
            ctx->pc = 0x420FF0u;
            goto label_420ff0;
        }
    }
    ctx->pc = 0x420FD8u;
label_420fd8:
    // 0x420fd8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x420fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_420fdc:
    // 0x420fdc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x420fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_420fe0:
    // 0x420fe0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x420fe0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420fe4:
    // 0x420fe4: 0x0  nop
    ctx->pc = 0x420fe4u;
    // NOP
label_420fe8:
    // 0x420fe8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x420fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_420fec:
    // 0x420fec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x420fecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_420ff0:
    // 0x420ff0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x420ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_420ff4:
    // 0x420ff4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x420ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_420ff8:
    // 0x420ff8: 0x2466001c  addiu       $a2, $v1, 0x1C
    ctx->pc = 0x420ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_420ffc:
    // 0x420ffc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x420ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_421000:
    // 0x421000: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x421000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_421004:
    // 0x421004: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x421004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_421008:
    // 0x421008: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x421008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42100c:
    // 0x42100c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x42100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_421010:
    // 0x421010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x421010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_421014:
    // 0x421014: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x421014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_421018:
    // 0x421018: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x421018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_42101c:
    // 0x42101c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x42101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421020:
    // 0x421020: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x421020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_421024:
    // 0x421024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x421024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_421028:
    // 0x421028: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_42102c:
    if (ctx->pc == 0x42102Cu) {
        ctx->pc = 0x42102Cu;
            // 0x42102c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x421030u;
        goto label_421030;
    }
    ctx->pc = 0x421028u;
    {
        const bool branch_taken_0x421028 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x42102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421028u;
            // 0x42102c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421028) {
            ctx->pc = 0x421034u;
            goto label_421034;
        }
    }
    ctx->pc = 0x421030u;
label_421030:
    // 0x421030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421034:
    // 0x421034: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_421038:
    if (ctx->pc == 0x421038u) {
        ctx->pc = 0x421038u;
            // 0x421038: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x42103Cu;
        goto label_42103c;
    }
    ctx->pc = 0x421034u;
    {
        const bool branch_taken_0x421034 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x421034) {
            ctx->pc = 0x421038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421034u;
            // 0x421038: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421048u;
            goto label_421048;
        }
    }
    ctx->pc = 0x42103Cu;
label_42103c:
    // 0x42103c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x42103cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_421040:
    // 0x421040: 0x10000007  b           . + 4 + (0x7 << 2)
label_421044:
    if (ctx->pc == 0x421044u) {
        ctx->pc = 0x421044u;
            // 0x421044: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x421048u;
        goto label_421048;
    }
    ctx->pc = 0x421040u;
    {
        const bool branch_taken_0x421040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421040u;
            // 0x421044: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x421040) {
            ctx->pc = 0x421060u;
            goto label_421060;
        }
    }
    ctx->pc = 0x421048u;
label_421048:
    // 0x421048: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x421048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_42104c:
    // 0x42104c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x42104cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421050:
    // 0x421050: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x421050u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_421054:
    // 0x421054: 0x0  nop
    ctx->pc = 0x421054u;
    // NOP
label_421058:
    // 0x421058: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x421058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_42105c:
    // 0x42105c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x42105cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_421060:
    // 0x421060: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x421060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421064:
    // 0x421064: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x421064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_421068:
    // 0x421068: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_42106c:
    if (ctx->pc == 0x42106Cu) {
        ctx->pc = 0x42106Cu;
            // 0x42106c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->pc = 0x421070u;
        goto label_421070;
    }
    ctx->pc = 0x421068u;
    {
        const bool branch_taken_0x421068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421068u;
            // 0x42106c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x421068) {
            ctx->pc = 0x4210A8u;
            goto label_4210a8;
        }
    }
    ctx->pc = 0x421070u;
label_421070:
    // 0x421070: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x421070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421074:
    // 0x421074: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x421074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421078:
    // 0x421078: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x421078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_42107c:
    // 0x42107c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_421080:
    // 0x421080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x421080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421084:
    // 0x421084: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x421084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_421088:
    // 0x421088: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x421088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_42108c:
    // 0x42108c: 0x320f809  jalr        $t9
label_421090:
    if (ctx->pc == 0x421090u) {
        ctx->pc = 0x421094u;
        goto label_421094;
    }
    ctx->pc = 0x42108Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x421094u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x421094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x421094u; }
            if (ctx->pc != 0x421094u) { return; }
        }
        }
    }
    ctx->pc = 0x421094u;
label_421094:
    // 0x421094: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x421094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_421098:
    // 0x421098: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x421098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_42109c:
    // 0x42109c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4210a0:
    if (ctx->pc == 0x4210A0u) {
        ctx->pc = 0x4210A0u;
            // 0x4210a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4210A4u;
        goto label_4210a4;
    }
    ctx->pc = 0x42109Cu;
    {
        const bool branch_taken_0x42109c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4210A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42109Cu;
            // 0x4210a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42109c) {
            ctx->pc = 0x421078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_421078;
        }
    }
    ctx->pc = 0x4210A4u;
label_4210a4:
    // 0x4210a4: 0x0  nop
    ctx->pc = 0x4210a4u;
    // NOP
label_4210a8:
    // 0x4210a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4210a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4210ac:
    // 0x4210ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4210acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4210b0:
    // 0x4210b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4210b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4210b4:
    // 0x4210b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4210b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4210b8:
    // 0x4210b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4210b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4210bc:
    // 0x4210bc: 0x3e00008  jr          $ra
label_4210c0:
    if (ctx->pc == 0x4210C0u) {
        ctx->pc = 0x4210C0u;
            // 0x4210c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4210C4u;
        goto label_4210c4;
    }
    ctx->pc = 0x4210BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4210C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4210BCu;
            // 0x4210c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4210C4u;
label_4210c4:
    // 0x4210c4: 0x0  nop
    ctx->pc = 0x4210c4u;
    // NOP
label_4210c8:
    // 0x4210c8: 0x0  nop
    ctx->pc = 0x4210c8u;
    // NOP
label_4210cc:
    // 0x4210cc: 0x0  nop
    ctx->pc = 0x4210ccu;
    // NOP
}
