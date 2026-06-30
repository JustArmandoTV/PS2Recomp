#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00330B20
// Address: 0x330b20 - 0x331180
void sub_00330B20_0x330b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330B20_0x330b20");
#endif

    switch (ctx->pc) {
        case 0x330b20u: goto label_330b20;
        case 0x330b24u: goto label_330b24;
        case 0x330b28u: goto label_330b28;
        case 0x330b2cu: goto label_330b2c;
        case 0x330b30u: goto label_330b30;
        case 0x330b34u: goto label_330b34;
        case 0x330b38u: goto label_330b38;
        case 0x330b3cu: goto label_330b3c;
        case 0x330b40u: goto label_330b40;
        case 0x330b44u: goto label_330b44;
        case 0x330b48u: goto label_330b48;
        case 0x330b4cu: goto label_330b4c;
        case 0x330b50u: goto label_330b50;
        case 0x330b54u: goto label_330b54;
        case 0x330b58u: goto label_330b58;
        case 0x330b5cu: goto label_330b5c;
        case 0x330b60u: goto label_330b60;
        case 0x330b64u: goto label_330b64;
        case 0x330b68u: goto label_330b68;
        case 0x330b6cu: goto label_330b6c;
        case 0x330b70u: goto label_330b70;
        case 0x330b74u: goto label_330b74;
        case 0x330b78u: goto label_330b78;
        case 0x330b7cu: goto label_330b7c;
        case 0x330b80u: goto label_330b80;
        case 0x330b84u: goto label_330b84;
        case 0x330b88u: goto label_330b88;
        case 0x330b8cu: goto label_330b8c;
        case 0x330b90u: goto label_330b90;
        case 0x330b94u: goto label_330b94;
        case 0x330b98u: goto label_330b98;
        case 0x330b9cu: goto label_330b9c;
        case 0x330ba0u: goto label_330ba0;
        case 0x330ba4u: goto label_330ba4;
        case 0x330ba8u: goto label_330ba8;
        case 0x330bacu: goto label_330bac;
        case 0x330bb0u: goto label_330bb0;
        case 0x330bb4u: goto label_330bb4;
        case 0x330bb8u: goto label_330bb8;
        case 0x330bbcu: goto label_330bbc;
        case 0x330bc0u: goto label_330bc0;
        case 0x330bc4u: goto label_330bc4;
        case 0x330bc8u: goto label_330bc8;
        case 0x330bccu: goto label_330bcc;
        case 0x330bd0u: goto label_330bd0;
        case 0x330bd4u: goto label_330bd4;
        case 0x330bd8u: goto label_330bd8;
        case 0x330bdcu: goto label_330bdc;
        case 0x330be0u: goto label_330be0;
        case 0x330be4u: goto label_330be4;
        case 0x330be8u: goto label_330be8;
        case 0x330becu: goto label_330bec;
        case 0x330bf0u: goto label_330bf0;
        case 0x330bf4u: goto label_330bf4;
        case 0x330bf8u: goto label_330bf8;
        case 0x330bfcu: goto label_330bfc;
        case 0x330c00u: goto label_330c00;
        case 0x330c04u: goto label_330c04;
        case 0x330c08u: goto label_330c08;
        case 0x330c0cu: goto label_330c0c;
        case 0x330c10u: goto label_330c10;
        case 0x330c14u: goto label_330c14;
        case 0x330c18u: goto label_330c18;
        case 0x330c1cu: goto label_330c1c;
        case 0x330c20u: goto label_330c20;
        case 0x330c24u: goto label_330c24;
        case 0x330c28u: goto label_330c28;
        case 0x330c2cu: goto label_330c2c;
        case 0x330c30u: goto label_330c30;
        case 0x330c34u: goto label_330c34;
        case 0x330c38u: goto label_330c38;
        case 0x330c3cu: goto label_330c3c;
        case 0x330c40u: goto label_330c40;
        case 0x330c44u: goto label_330c44;
        case 0x330c48u: goto label_330c48;
        case 0x330c4cu: goto label_330c4c;
        case 0x330c50u: goto label_330c50;
        case 0x330c54u: goto label_330c54;
        case 0x330c58u: goto label_330c58;
        case 0x330c5cu: goto label_330c5c;
        case 0x330c60u: goto label_330c60;
        case 0x330c64u: goto label_330c64;
        case 0x330c68u: goto label_330c68;
        case 0x330c6cu: goto label_330c6c;
        case 0x330c70u: goto label_330c70;
        case 0x330c74u: goto label_330c74;
        case 0x330c78u: goto label_330c78;
        case 0x330c7cu: goto label_330c7c;
        case 0x330c80u: goto label_330c80;
        case 0x330c84u: goto label_330c84;
        case 0x330c88u: goto label_330c88;
        case 0x330c8cu: goto label_330c8c;
        case 0x330c90u: goto label_330c90;
        case 0x330c94u: goto label_330c94;
        case 0x330c98u: goto label_330c98;
        case 0x330c9cu: goto label_330c9c;
        case 0x330ca0u: goto label_330ca0;
        case 0x330ca4u: goto label_330ca4;
        case 0x330ca8u: goto label_330ca8;
        case 0x330cacu: goto label_330cac;
        case 0x330cb0u: goto label_330cb0;
        case 0x330cb4u: goto label_330cb4;
        case 0x330cb8u: goto label_330cb8;
        case 0x330cbcu: goto label_330cbc;
        case 0x330cc0u: goto label_330cc0;
        case 0x330cc4u: goto label_330cc4;
        case 0x330cc8u: goto label_330cc8;
        case 0x330cccu: goto label_330ccc;
        case 0x330cd0u: goto label_330cd0;
        case 0x330cd4u: goto label_330cd4;
        case 0x330cd8u: goto label_330cd8;
        case 0x330cdcu: goto label_330cdc;
        case 0x330ce0u: goto label_330ce0;
        case 0x330ce4u: goto label_330ce4;
        case 0x330ce8u: goto label_330ce8;
        case 0x330cecu: goto label_330cec;
        case 0x330cf0u: goto label_330cf0;
        case 0x330cf4u: goto label_330cf4;
        case 0x330cf8u: goto label_330cf8;
        case 0x330cfcu: goto label_330cfc;
        case 0x330d00u: goto label_330d00;
        case 0x330d04u: goto label_330d04;
        case 0x330d08u: goto label_330d08;
        case 0x330d0cu: goto label_330d0c;
        case 0x330d10u: goto label_330d10;
        case 0x330d14u: goto label_330d14;
        case 0x330d18u: goto label_330d18;
        case 0x330d1cu: goto label_330d1c;
        case 0x330d20u: goto label_330d20;
        case 0x330d24u: goto label_330d24;
        case 0x330d28u: goto label_330d28;
        case 0x330d2cu: goto label_330d2c;
        case 0x330d30u: goto label_330d30;
        case 0x330d34u: goto label_330d34;
        case 0x330d38u: goto label_330d38;
        case 0x330d3cu: goto label_330d3c;
        case 0x330d40u: goto label_330d40;
        case 0x330d44u: goto label_330d44;
        case 0x330d48u: goto label_330d48;
        case 0x330d4cu: goto label_330d4c;
        case 0x330d50u: goto label_330d50;
        case 0x330d54u: goto label_330d54;
        case 0x330d58u: goto label_330d58;
        case 0x330d5cu: goto label_330d5c;
        case 0x330d60u: goto label_330d60;
        case 0x330d64u: goto label_330d64;
        case 0x330d68u: goto label_330d68;
        case 0x330d6cu: goto label_330d6c;
        case 0x330d70u: goto label_330d70;
        case 0x330d74u: goto label_330d74;
        case 0x330d78u: goto label_330d78;
        case 0x330d7cu: goto label_330d7c;
        case 0x330d80u: goto label_330d80;
        case 0x330d84u: goto label_330d84;
        case 0x330d88u: goto label_330d88;
        case 0x330d8cu: goto label_330d8c;
        case 0x330d90u: goto label_330d90;
        case 0x330d94u: goto label_330d94;
        case 0x330d98u: goto label_330d98;
        case 0x330d9cu: goto label_330d9c;
        case 0x330da0u: goto label_330da0;
        case 0x330da4u: goto label_330da4;
        case 0x330da8u: goto label_330da8;
        case 0x330dacu: goto label_330dac;
        case 0x330db0u: goto label_330db0;
        case 0x330db4u: goto label_330db4;
        case 0x330db8u: goto label_330db8;
        case 0x330dbcu: goto label_330dbc;
        case 0x330dc0u: goto label_330dc0;
        case 0x330dc4u: goto label_330dc4;
        case 0x330dc8u: goto label_330dc8;
        case 0x330dccu: goto label_330dcc;
        case 0x330dd0u: goto label_330dd0;
        case 0x330dd4u: goto label_330dd4;
        case 0x330dd8u: goto label_330dd8;
        case 0x330ddcu: goto label_330ddc;
        case 0x330de0u: goto label_330de0;
        case 0x330de4u: goto label_330de4;
        case 0x330de8u: goto label_330de8;
        case 0x330decu: goto label_330dec;
        case 0x330df0u: goto label_330df0;
        case 0x330df4u: goto label_330df4;
        case 0x330df8u: goto label_330df8;
        case 0x330dfcu: goto label_330dfc;
        case 0x330e00u: goto label_330e00;
        case 0x330e04u: goto label_330e04;
        case 0x330e08u: goto label_330e08;
        case 0x330e0cu: goto label_330e0c;
        case 0x330e10u: goto label_330e10;
        case 0x330e14u: goto label_330e14;
        case 0x330e18u: goto label_330e18;
        case 0x330e1cu: goto label_330e1c;
        case 0x330e20u: goto label_330e20;
        case 0x330e24u: goto label_330e24;
        case 0x330e28u: goto label_330e28;
        case 0x330e2cu: goto label_330e2c;
        case 0x330e30u: goto label_330e30;
        case 0x330e34u: goto label_330e34;
        case 0x330e38u: goto label_330e38;
        case 0x330e3cu: goto label_330e3c;
        case 0x330e40u: goto label_330e40;
        case 0x330e44u: goto label_330e44;
        case 0x330e48u: goto label_330e48;
        case 0x330e4cu: goto label_330e4c;
        case 0x330e50u: goto label_330e50;
        case 0x330e54u: goto label_330e54;
        case 0x330e58u: goto label_330e58;
        case 0x330e5cu: goto label_330e5c;
        case 0x330e60u: goto label_330e60;
        case 0x330e64u: goto label_330e64;
        case 0x330e68u: goto label_330e68;
        case 0x330e6cu: goto label_330e6c;
        case 0x330e70u: goto label_330e70;
        case 0x330e74u: goto label_330e74;
        case 0x330e78u: goto label_330e78;
        case 0x330e7cu: goto label_330e7c;
        case 0x330e80u: goto label_330e80;
        case 0x330e84u: goto label_330e84;
        case 0x330e88u: goto label_330e88;
        case 0x330e8cu: goto label_330e8c;
        case 0x330e90u: goto label_330e90;
        case 0x330e94u: goto label_330e94;
        case 0x330e98u: goto label_330e98;
        case 0x330e9cu: goto label_330e9c;
        case 0x330ea0u: goto label_330ea0;
        case 0x330ea4u: goto label_330ea4;
        case 0x330ea8u: goto label_330ea8;
        case 0x330eacu: goto label_330eac;
        case 0x330eb0u: goto label_330eb0;
        case 0x330eb4u: goto label_330eb4;
        case 0x330eb8u: goto label_330eb8;
        case 0x330ebcu: goto label_330ebc;
        case 0x330ec0u: goto label_330ec0;
        case 0x330ec4u: goto label_330ec4;
        case 0x330ec8u: goto label_330ec8;
        case 0x330eccu: goto label_330ecc;
        case 0x330ed0u: goto label_330ed0;
        case 0x330ed4u: goto label_330ed4;
        case 0x330ed8u: goto label_330ed8;
        case 0x330edcu: goto label_330edc;
        case 0x330ee0u: goto label_330ee0;
        case 0x330ee4u: goto label_330ee4;
        case 0x330ee8u: goto label_330ee8;
        case 0x330eecu: goto label_330eec;
        case 0x330ef0u: goto label_330ef0;
        case 0x330ef4u: goto label_330ef4;
        case 0x330ef8u: goto label_330ef8;
        case 0x330efcu: goto label_330efc;
        case 0x330f00u: goto label_330f00;
        case 0x330f04u: goto label_330f04;
        case 0x330f08u: goto label_330f08;
        case 0x330f0cu: goto label_330f0c;
        case 0x330f10u: goto label_330f10;
        case 0x330f14u: goto label_330f14;
        case 0x330f18u: goto label_330f18;
        case 0x330f1cu: goto label_330f1c;
        case 0x330f20u: goto label_330f20;
        case 0x330f24u: goto label_330f24;
        case 0x330f28u: goto label_330f28;
        case 0x330f2cu: goto label_330f2c;
        case 0x330f30u: goto label_330f30;
        case 0x330f34u: goto label_330f34;
        case 0x330f38u: goto label_330f38;
        case 0x330f3cu: goto label_330f3c;
        case 0x330f40u: goto label_330f40;
        case 0x330f44u: goto label_330f44;
        case 0x330f48u: goto label_330f48;
        case 0x330f4cu: goto label_330f4c;
        case 0x330f50u: goto label_330f50;
        case 0x330f54u: goto label_330f54;
        case 0x330f58u: goto label_330f58;
        case 0x330f5cu: goto label_330f5c;
        case 0x330f60u: goto label_330f60;
        case 0x330f64u: goto label_330f64;
        case 0x330f68u: goto label_330f68;
        case 0x330f6cu: goto label_330f6c;
        case 0x330f70u: goto label_330f70;
        case 0x330f74u: goto label_330f74;
        case 0x330f78u: goto label_330f78;
        case 0x330f7cu: goto label_330f7c;
        case 0x330f80u: goto label_330f80;
        case 0x330f84u: goto label_330f84;
        case 0x330f88u: goto label_330f88;
        case 0x330f8cu: goto label_330f8c;
        case 0x330f90u: goto label_330f90;
        case 0x330f94u: goto label_330f94;
        case 0x330f98u: goto label_330f98;
        case 0x330f9cu: goto label_330f9c;
        case 0x330fa0u: goto label_330fa0;
        case 0x330fa4u: goto label_330fa4;
        case 0x330fa8u: goto label_330fa8;
        case 0x330facu: goto label_330fac;
        case 0x330fb0u: goto label_330fb0;
        case 0x330fb4u: goto label_330fb4;
        case 0x330fb8u: goto label_330fb8;
        case 0x330fbcu: goto label_330fbc;
        case 0x330fc0u: goto label_330fc0;
        case 0x330fc4u: goto label_330fc4;
        case 0x330fc8u: goto label_330fc8;
        case 0x330fccu: goto label_330fcc;
        case 0x330fd0u: goto label_330fd0;
        case 0x330fd4u: goto label_330fd4;
        case 0x330fd8u: goto label_330fd8;
        case 0x330fdcu: goto label_330fdc;
        case 0x330fe0u: goto label_330fe0;
        case 0x330fe4u: goto label_330fe4;
        case 0x330fe8u: goto label_330fe8;
        case 0x330fecu: goto label_330fec;
        case 0x330ff0u: goto label_330ff0;
        case 0x330ff4u: goto label_330ff4;
        case 0x330ff8u: goto label_330ff8;
        case 0x330ffcu: goto label_330ffc;
        case 0x331000u: goto label_331000;
        case 0x331004u: goto label_331004;
        case 0x331008u: goto label_331008;
        case 0x33100cu: goto label_33100c;
        case 0x331010u: goto label_331010;
        case 0x331014u: goto label_331014;
        case 0x331018u: goto label_331018;
        case 0x33101cu: goto label_33101c;
        case 0x331020u: goto label_331020;
        case 0x331024u: goto label_331024;
        case 0x331028u: goto label_331028;
        case 0x33102cu: goto label_33102c;
        case 0x331030u: goto label_331030;
        case 0x331034u: goto label_331034;
        case 0x331038u: goto label_331038;
        case 0x33103cu: goto label_33103c;
        case 0x331040u: goto label_331040;
        case 0x331044u: goto label_331044;
        case 0x331048u: goto label_331048;
        case 0x33104cu: goto label_33104c;
        case 0x331050u: goto label_331050;
        case 0x331054u: goto label_331054;
        case 0x331058u: goto label_331058;
        case 0x33105cu: goto label_33105c;
        case 0x331060u: goto label_331060;
        case 0x331064u: goto label_331064;
        case 0x331068u: goto label_331068;
        case 0x33106cu: goto label_33106c;
        case 0x331070u: goto label_331070;
        case 0x331074u: goto label_331074;
        case 0x331078u: goto label_331078;
        case 0x33107cu: goto label_33107c;
        case 0x331080u: goto label_331080;
        case 0x331084u: goto label_331084;
        case 0x331088u: goto label_331088;
        case 0x33108cu: goto label_33108c;
        case 0x331090u: goto label_331090;
        case 0x331094u: goto label_331094;
        case 0x331098u: goto label_331098;
        case 0x33109cu: goto label_33109c;
        case 0x3310a0u: goto label_3310a0;
        case 0x3310a4u: goto label_3310a4;
        case 0x3310a8u: goto label_3310a8;
        case 0x3310acu: goto label_3310ac;
        case 0x3310b0u: goto label_3310b0;
        case 0x3310b4u: goto label_3310b4;
        case 0x3310b8u: goto label_3310b8;
        case 0x3310bcu: goto label_3310bc;
        case 0x3310c0u: goto label_3310c0;
        case 0x3310c4u: goto label_3310c4;
        case 0x3310c8u: goto label_3310c8;
        case 0x3310ccu: goto label_3310cc;
        case 0x3310d0u: goto label_3310d0;
        case 0x3310d4u: goto label_3310d4;
        case 0x3310d8u: goto label_3310d8;
        case 0x3310dcu: goto label_3310dc;
        case 0x3310e0u: goto label_3310e0;
        case 0x3310e4u: goto label_3310e4;
        case 0x3310e8u: goto label_3310e8;
        case 0x3310ecu: goto label_3310ec;
        case 0x3310f0u: goto label_3310f0;
        case 0x3310f4u: goto label_3310f4;
        case 0x3310f8u: goto label_3310f8;
        case 0x3310fcu: goto label_3310fc;
        case 0x331100u: goto label_331100;
        case 0x331104u: goto label_331104;
        case 0x331108u: goto label_331108;
        case 0x33110cu: goto label_33110c;
        case 0x331110u: goto label_331110;
        case 0x331114u: goto label_331114;
        case 0x331118u: goto label_331118;
        case 0x33111cu: goto label_33111c;
        case 0x331120u: goto label_331120;
        case 0x331124u: goto label_331124;
        case 0x331128u: goto label_331128;
        case 0x33112cu: goto label_33112c;
        case 0x331130u: goto label_331130;
        case 0x331134u: goto label_331134;
        case 0x331138u: goto label_331138;
        case 0x33113cu: goto label_33113c;
        case 0x331140u: goto label_331140;
        case 0x331144u: goto label_331144;
        case 0x331148u: goto label_331148;
        case 0x33114cu: goto label_33114c;
        case 0x331150u: goto label_331150;
        case 0x331154u: goto label_331154;
        case 0x331158u: goto label_331158;
        case 0x33115cu: goto label_33115c;
        case 0x331160u: goto label_331160;
        case 0x331164u: goto label_331164;
        case 0x331168u: goto label_331168;
        case 0x33116cu: goto label_33116c;
        case 0x331170u: goto label_331170;
        case 0x331174u: goto label_331174;
        case 0x331178u: goto label_331178;
        case 0x33117cu: goto label_33117c;
        default: break;
    }

    ctx->pc = 0x330b20u;

label_330b20:
    // 0x330b20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x330b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_330b24:
    // 0x330b24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x330b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_330b28:
    // 0x330b28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x330b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_330b2c:
    // 0x330b2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x330b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_330b30:
    // 0x330b30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x330b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_330b34:
    // 0x330b34: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x330b34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_330b38:
    // 0x330b38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x330b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_330b3c:
    // 0x330b3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x330b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_330b40:
    // 0x330b40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x330b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_330b44:
    // 0x330b44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x330b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_330b48:
    // 0x330b48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x330b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_330b4c:
    // 0x330b4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x330b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_330b50:
    // 0x330b50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x330b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_330b54:
    // 0x330b54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x330b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_330b58:
    // 0x330b58: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x330b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_330b5c:
    // 0x330b5c: 0x230f021  addu        $fp, $s1, $s0
    ctx->pc = 0x330b5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_330b60:
    // 0x330b60: 0x2fc10002  sltiu       $at, $fp, 0x2
    ctx->pc = 0x330b60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_330b64:
    // 0x330b64: 0x14200179  bnez        $at, . + 4 + (0x179 << 2)
label_330b68:
    if (ctx->pc == 0x330B68u) {
        ctx->pc = 0x330B68u;
            // 0x330b68: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->pc = 0x330B6Cu;
        goto label_330b6c;
    }
    ctx->pc = 0x330B64u;
    {
        const bool branch_taken_0x330b64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x330B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330B64u;
            // 0x330b68: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b64) {
            ctx->pc = 0x33114Cu;
            goto label_33114c;
        }
    }
    ctx->pc = 0x330B6Cu;
label_330b6c:
    // 0x330b6c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x330b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_330b70:
    // 0x330b70: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
label_330b74:
    if (ctx->pc == 0x330B74u) {
        ctx->pc = 0x330B74u;
            // 0x330b74: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x330B78u;
        goto label_330b78;
    }
    ctx->pc = 0x330B70u;
    {
        const bool branch_taken_0x330b70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x330B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330B70u;
            // 0x330b74: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b70) {
            ctx->pc = 0x330C08u;
            goto label_330c08;
        }
    }
    ctx->pc = 0x330B78u;
label_330b78:
    // 0x330b78: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x330b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_330b7c:
    // 0x330b7c: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x330b7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_330b80:
    // 0x330b80: 0x291082a  slt         $at, $s4, $s1
    ctx->pc = 0x330b80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_330b84:
    // 0x330b84: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_330b88:
    if (ctx->pc == 0x330B88u) {
        ctx->pc = 0x330B8Cu;
        goto label_330b8c;
    }
    ctx->pc = 0x330B84u;
    {
        const bool branch_taken_0x330b84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330b84) {
            ctx->pc = 0x330BF0u;
            goto label_330bf0;
        }
    }
    ctx->pc = 0x330B8Cu;
label_330b8c:
    // 0x330b8c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x330b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_330b90:
    // 0x330b90: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x330b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_330b94:
    // 0x330b94: 0x0  nop
    ctx->pc = 0x330b94u;
    // NOP
label_330b98:
    // 0x330b98: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x330b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_330b9c:
    // 0x330b9c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x330b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_330ba0:
    // 0x330ba0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x330ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_330ba4:
    // 0x330ba4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_330ba8:
    if (ctx->pc == 0x330BA8u) {
        ctx->pc = 0x330BACu;
        goto label_330bac;
    }
    ctx->pc = 0x330BA4u;
    {
        const bool branch_taken_0x330ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330ba4) {
            ctx->pc = 0x330BE0u;
            goto label_330be0;
        }
    }
    ctx->pc = 0x330BACu;
label_330bac:
    // 0x330bac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x330bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_330bb0:
    // 0x330bb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x330bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_330bb4:
    // 0x330bb4: 0xc04a508  jal         func_129420
label_330bb8:
    if (ctx->pc == 0x330BB8u) {
        ctx->pc = 0x330BB8u;
            // 0x330bb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330BBCu;
        goto label_330bbc;
    }
    ctx->pc = 0x330BB4u;
    SET_GPR_U32(ctx, 31, 0x330BBCu);
    ctx->pc = 0x330BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330BB4u;
            // 0x330bb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330BBCu; }
        if (ctx->pc != 0x330BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330BBCu; }
        if (ctx->pc != 0x330BBCu) { return; }
    }
    ctx->pc = 0x330BBCu;
label_330bbc:
    // 0x330bbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_330bc0:
    // 0x330bc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x330bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_330bc4:
    // 0x330bc4: 0xc04a508  jal         func_129420
label_330bc8:
    if (ctx->pc == 0x330BC8u) {
        ctx->pc = 0x330BC8u;
            // 0x330bc8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330BCCu;
        goto label_330bcc;
    }
    ctx->pc = 0x330BC4u;
    SET_GPR_U32(ctx, 31, 0x330BCCu);
    ctx->pc = 0x330BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330BC4u;
            // 0x330bc8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330BCCu; }
        if (ctx->pc != 0x330BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330BCCu; }
        if (ctx->pc != 0x330BCCu) { return; }
    }
    ctx->pc = 0x330BCCu;
label_330bcc:
    // 0x330bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x330bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_330bd0:
    // 0x330bd0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x330bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_330bd4:
    // 0x330bd4: 0xc04a508  jal         func_129420
label_330bd8:
    if (ctx->pc == 0x330BD8u) {
        ctx->pc = 0x330BD8u;
            // 0x330bd8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330BDCu;
        goto label_330bdc;
    }
    ctx->pc = 0x330BD4u;
    SET_GPR_U32(ctx, 31, 0x330BDCu);
    ctx->pc = 0x330BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330BD4u;
            // 0x330bd8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330BDCu; }
        if (ctx->pc != 0x330BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330BDCu; }
        if (ctx->pc != 0x330BDCu) { return; }
    }
    ctx->pc = 0x330BDCu;
label_330bdc:
    // 0x330bdc: 0x0  nop
    ctx->pc = 0x330bdcu;
    // NOP
label_330be0:
    // 0x330be0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x330be0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_330be4:
    // 0x330be4: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x330be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_330be8:
    // 0x330be8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_330bec:
    if (ctx->pc == 0x330BECu) {
        ctx->pc = 0x330BECu;
            // 0x330bec: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x330BF0u;
        goto label_330bf0;
    }
    ctx->pc = 0x330BE8u;
    {
        const bool branch_taken_0x330be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330BE8u;
            // 0x330bec: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330be8) {
            ctx->pc = 0x330B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330b98;
        }
    }
    ctx->pc = 0x330BF0u;
label_330bf0:
    // 0x330bf0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x330bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_330bf4:
    // 0x330bf4: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x330bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_330bf8:
    // 0x330bf8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x330bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_330bfc:
    // 0x330bfc: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_330c00:
    if (ctx->pc == 0x330C00u) {
        ctx->pc = 0x330C00u;
            // 0x330c00: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x330C04u;
        goto label_330c04;
    }
    ctx->pc = 0x330BFCu;
    {
        const bool branch_taken_0x330bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330BFCu;
            // 0x330c00: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330bfc) {
            ctx->pc = 0x330B7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330b7c;
        }
    }
    ctx->pc = 0x330C04u;
label_330c04:
    // 0x330c04: 0x0  nop
    ctx->pc = 0x330c04u;
    // NOP
label_330c08:
    // 0x330c08: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x330c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_330c0c:
    // 0x330c0c: 0x1840003a  blez        $v0, . + 4 + (0x3A << 2)
label_330c10:
    if (ctx->pc == 0x330C10u) {
        ctx->pc = 0x330C10u;
            // 0x330c10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x330C14u;
        goto label_330c14;
    }
    ctx->pc = 0x330C0Cu;
    {
        const bool branch_taken_0x330c0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x330C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330C0Cu;
            // 0x330c10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c0c) {
            ctx->pc = 0x330CF8u;
            goto label_330cf8;
        }
    }
    ctx->pc = 0x330C14u;
label_330c14:
    // 0x330c14: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x330c14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_330c18:
    // 0x330c18: 0x26720001  addiu       $s2, $s3, 0x1
    ctx->pc = 0x330c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_330c1c:
    // 0x330c1c: 0x250082a  slt         $at, $s2, $s0
    ctx->pc = 0x330c1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_330c20:
    // 0x330c20: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_330c24:
    if (ctx->pc == 0x330C24u) {
        ctx->pc = 0x330C28u;
        goto label_330c28;
    }
    ctx->pc = 0x330C20u;
    {
        const bool branch_taken_0x330c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c20) {
            ctx->pc = 0x330CE0u;
            goto label_330ce0;
        }
    }
    ctx->pc = 0x330C28u;
label_330c28:
    // 0x330c28: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x330c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_330c2c:
    // 0x330c2c: 0x2e2a021  addu        $s4, $s7, $v0
    ctx->pc = 0x330c2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_330c30:
    // 0x330c30: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x330c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_330c34:
    // 0x330c34: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x330c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_330c38:
    // 0x330c38: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x330c38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_330c3c:
    // 0x330c3c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_330c40:
    if (ctx->pc == 0x330C40u) {
        ctx->pc = 0x330C44u;
        goto label_330c44;
    }
    ctx->pc = 0x330C3Cu;
    {
        const bool branch_taken_0x330c3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c3c) {
            ctx->pc = 0x330C80u;
            goto label_330c80;
        }
    }
    ctx->pc = 0x330C44u;
label_330c44:
    // 0x330c44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x330c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_330c48:
    // 0x330c48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x330c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_330c4c:
    // 0x330c4c: 0xc04a508  jal         func_129420
label_330c50:
    if (ctx->pc == 0x330C50u) {
        ctx->pc = 0x330C50u;
            // 0x330c50: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330C54u;
        goto label_330c54;
    }
    ctx->pc = 0x330C4Cu;
    SET_GPR_U32(ctx, 31, 0x330C54u);
    ctx->pc = 0x330C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330C4Cu;
            // 0x330c50: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330C54u; }
        if (ctx->pc != 0x330C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330C54u; }
        if (ctx->pc != 0x330C54u) { return; }
    }
    ctx->pc = 0x330C54u;
label_330c54:
    // 0x330c54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x330c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_330c58:
    // 0x330c58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x330c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_330c5c:
    // 0x330c5c: 0xc04a508  jal         func_129420
label_330c60:
    if (ctx->pc == 0x330C60u) {
        ctx->pc = 0x330C60u;
            // 0x330c60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330C64u;
        goto label_330c64;
    }
    ctx->pc = 0x330C5Cu;
    SET_GPR_U32(ctx, 31, 0x330C64u);
    ctx->pc = 0x330C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330C5Cu;
            // 0x330c60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330C64u; }
        if (ctx->pc != 0x330C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330C64u; }
        if (ctx->pc != 0x330C64u) { return; }
    }
    ctx->pc = 0x330C64u;
label_330c64:
    // 0x330c64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_330c68:
    // 0x330c68: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x330c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_330c6c:
    // 0x330c6c: 0xc04a508  jal         func_129420
label_330c70:
    if (ctx->pc == 0x330C70u) {
        ctx->pc = 0x330C70u;
            // 0x330c70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330C74u;
        goto label_330c74;
    }
    ctx->pc = 0x330C6Cu;
    SET_GPR_U32(ctx, 31, 0x330C74u);
    ctx->pc = 0x330C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330C6Cu;
            // 0x330c70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330C74u; }
        if (ctx->pc != 0x330C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330C74u; }
        if (ctx->pc != 0x330C74u) { return; }
    }
    ctx->pc = 0x330C74u;
label_330c74:
    // 0x330c74: 0x10000016  b           . + 4 + (0x16 << 2)
label_330c78:
    if (ctx->pc == 0x330C78u) {
        ctx->pc = 0x330C7Cu;
        goto label_330c7c;
    }
    ctx->pc = 0x330C74u;
    {
        const bool branch_taken_0x330c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c74) {
            ctx->pc = 0x330CD0u;
            goto label_330cd0;
        }
    }
    ctx->pc = 0x330C7Cu;
label_330c7c:
    // 0x330c7c: 0x0  nop
    ctx->pc = 0x330c7cu;
    // NOP
label_330c80:
    // 0x330c80: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_330c84:
    if (ctx->pc == 0x330C84u) {
        ctx->pc = 0x330C88u;
        goto label_330c88;
    }
    ctx->pc = 0x330C80u;
    {
        const bool branch_taken_0x330c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x330c80) {
            ctx->pc = 0x330CD0u;
            goto label_330cd0;
        }
    }
    ctx->pc = 0x330C88u;
label_330c88:
    // 0x330c88: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x330c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330c8c:
    // 0x330c8c: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x330c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c90:
    // 0x330c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x330c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_330c94:
    // 0x330c94: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_330c98:
    if (ctx->pc == 0x330C98u) {
        ctx->pc = 0x330C9Cu;
        goto label_330c9c;
    }
    ctx->pc = 0x330C94u;
    {
        const bool branch_taken_0x330c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x330c94) {
            ctx->pc = 0x330CD0u;
            goto label_330cd0;
        }
    }
    ctx->pc = 0x330C9Cu;
label_330c9c:
    // 0x330c9c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x330c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_330ca0:
    // 0x330ca0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x330ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_330ca4:
    // 0x330ca4: 0xc04a508  jal         func_129420
label_330ca8:
    if (ctx->pc == 0x330CA8u) {
        ctx->pc = 0x330CA8u;
            // 0x330ca8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330CACu;
        goto label_330cac;
    }
    ctx->pc = 0x330CA4u;
    SET_GPR_U32(ctx, 31, 0x330CACu);
    ctx->pc = 0x330CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330CA4u;
            // 0x330ca8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330CACu; }
        if (ctx->pc != 0x330CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330CACu; }
        if (ctx->pc != 0x330CACu) { return; }
    }
    ctx->pc = 0x330CACu;
label_330cac:
    // 0x330cac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x330cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_330cb0:
    // 0x330cb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x330cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_330cb4:
    // 0x330cb4: 0xc04a508  jal         func_129420
label_330cb8:
    if (ctx->pc == 0x330CB8u) {
        ctx->pc = 0x330CB8u;
            // 0x330cb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330CBCu;
        goto label_330cbc;
    }
    ctx->pc = 0x330CB4u;
    SET_GPR_U32(ctx, 31, 0x330CBCu);
    ctx->pc = 0x330CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330CB4u;
            // 0x330cb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330CBCu; }
        if (ctx->pc != 0x330CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330CBCu; }
        if (ctx->pc != 0x330CBCu) { return; }
    }
    ctx->pc = 0x330CBCu;
label_330cbc:
    // 0x330cbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_330cc0:
    // 0x330cc0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x330cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_330cc4:
    // 0x330cc4: 0xc04a508  jal         func_129420
label_330cc8:
    if (ctx->pc == 0x330CC8u) {
        ctx->pc = 0x330CC8u;
            // 0x330cc8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330CCCu;
        goto label_330ccc;
    }
    ctx->pc = 0x330CC4u;
    SET_GPR_U32(ctx, 31, 0x330CCCu);
    ctx->pc = 0x330CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330CC4u;
            // 0x330cc8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330CCCu; }
        if (ctx->pc != 0x330CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330CCCu; }
        if (ctx->pc != 0x330CCCu) { return; }
    }
    ctx->pc = 0x330CCCu;
label_330ccc:
    // 0x330ccc: 0x0  nop
    ctx->pc = 0x330cccu;
    // NOP
label_330cd0:
    // 0x330cd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x330cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_330cd4:
    // 0x330cd4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x330cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_330cd8:
    // 0x330cd8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_330cdc:
    if (ctx->pc == 0x330CDCu) {
        ctx->pc = 0x330CDCu;
            // 0x330cdc: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x330CE0u;
        goto label_330ce0;
    }
    ctx->pc = 0x330CD8u;
    {
        const bool branch_taken_0x330cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330CD8u;
            // 0x330cdc: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cd8) {
            ctx->pc = 0x330C30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330c30;
        }
    }
    ctx->pc = 0x330CE0u;
label_330ce0:
    // 0x330ce0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x330ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_330ce4:
    // 0x330ce4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x330ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_330ce8:
    // 0x330ce8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x330ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_330cec:
    // 0x330cec: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_330cf0:
    if (ctx->pc == 0x330CF0u) {
        ctx->pc = 0x330CF0u;
            // 0x330cf0: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x330CF4u;
        goto label_330cf4;
    }
    ctx->pc = 0x330CECu;
    {
        const bool branch_taken_0x330cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330CECu;
            // 0x330cf0: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cec) {
            ctx->pc = 0x330C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330c18;
        }
    }
    ctx->pc = 0x330CF4u;
label_330cf4:
    // 0x330cf4: 0x0  nop
    ctx->pc = 0x330cf4u;
    // NOP
label_330cf8:
    // 0x330cf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x330cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330cfc:
    // 0x330cfc: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x330cfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_330d00:
    // 0x330d00: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_330d04:
    if (ctx->pc == 0x330D04u) {
        ctx->pc = 0x330D08u;
        goto label_330d08;
    }
    ctx->pc = 0x330D00u;
    {
        const bool branch_taken_0x330d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d00) {
            ctx->pc = 0x330D20u;
            goto label_330d20;
        }
    }
    ctx->pc = 0x330D08u;
label_330d08:
    // 0x330d08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x330d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_330d0c:
    // 0x330d0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x330d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_330d10:
    // 0x330d10: 0xc04a508  jal         func_129420
label_330d14:
    if (ctx->pc == 0x330D14u) {
        ctx->pc = 0x330D14u;
            // 0x330d14: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330D18u;
        goto label_330d18;
    }
    ctx->pc = 0x330D10u;
    SET_GPR_U32(ctx, 31, 0x330D18u);
    ctx->pc = 0x330D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330D10u;
            // 0x330d14: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330D18u; }
        if (ctx->pc != 0x330D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330D18u; }
        if (ctx->pc != 0x330D18u) { return; }
    }
    ctx->pc = 0x330D18u;
label_330d18:
    // 0x330d18: 0x10000007  b           . + 4 + (0x7 << 2)
label_330d1c:
    if (ctx->pc == 0x330D1Cu) {
        ctx->pc = 0x330D20u;
        goto label_330d20;
    }
    ctx->pc = 0x330D18u;
    {
        const bool branch_taken_0x330d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d18) {
            ctx->pc = 0x330D38u;
            goto label_330d38;
        }
    }
    ctx->pc = 0x330D20u;
label_330d20:
    // 0x330d20: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x330d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_330d24:
    // 0x330d24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x330d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_330d28:
    // 0x330d28: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x330d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_330d2c:
    // 0x330d2c: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x330d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_330d30:
    // 0x330d30: 0xc04a508  jal         func_129420
label_330d34:
    if (ctx->pc == 0x330D34u) {
        ctx->pc = 0x330D34u;
            // 0x330d34: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330D38u;
        goto label_330d38;
    }
    ctx->pc = 0x330D30u;
    SET_GPR_U32(ctx, 31, 0x330D38u);
    ctx->pc = 0x330D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330D30u;
            // 0x330d34: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330D38u; }
        if (ctx->pc != 0x330D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330D38u; }
        if (ctx->pc != 0x330D38u) { return; }
    }
    ctx->pc = 0x330D38u;
label_330d38:
    // 0x330d38: 0x87a500b0  lh          $a1, 0xB0($sp)
    ctx->pc = 0x330d38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_330d3c:
    // 0x330d3c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x330d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_330d40:
    // 0x330d40: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x330d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_330d44:
    // 0x330d44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x330d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_330d48:
    // 0x330d48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x330d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_330d4c:
    // 0x330d4c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x330d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_330d50:
    // 0x330d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x330d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330d54:
    // 0x330d54: 0xc6031180  lwc1        $f3, 0x1180($s0)
    ctx->pc = 0x330d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_330d58:
    // 0x330d58: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x330d58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_330d5c:
    // 0x330d5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_330d60:
    if (ctx->pc == 0x330D60u) {
        ctx->pc = 0x330D60u;
            // 0x330d60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x330D64u;
        goto label_330d64;
    }
    ctx->pc = 0x330D5Cu;
    {
        const bool branch_taken_0x330d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x330D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330D5Cu;
            // 0x330d60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d5c) {
            ctx->pc = 0x330D68u;
            goto label_330d68;
        }
    }
    ctx->pc = 0x330D64u;
label_330d64:
    // 0x330d64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x330d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330d68:
    // 0x330d68: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_330d6c:
    if (ctx->pc == 0x330D6Cu) {
        ctx->pc = 0x330D6Cu;
            // 0x330d6c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x330D70u;
        goto label_330d70;
    }
    ctx->pc = 0x330D68u;
    {
        const bool branch_taken_0x330d68 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x330d68) {
            ctx->pc = 0x330D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330D68u;
            // 0x330d6c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x330D7Cu;
            goto label_330d7c;
        }
    }
    ctx->pc = 0x330D70u;
label_330d70:
    // 0x330d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330d74:
    // 0x330d74: 0x10000007  b           . + 4 + (0x7 << 2)
label_330d78:
    if (ctx->pc == 0x330D78u) {
        ctx->pc = 0x330D78u;
            // 0x330d78: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x330D7Cu;
        goto label_330d7c;
    }
    ctx->pc = 0x330D74u;
    {
        const bool branch_taken_0x330d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330D74u;
            // 0x330d78: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d74) {
            ctx->pc = 0x330D94u;
            goto label_330d94;
        }
    }
    ctx->pc = 0x330D7Cu;
label_330d7c:
    // 0x330d7c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x330d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_330d80:
    // 0x330d80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x330d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_330d84:
    // 0x330d84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x330d84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330d88:
    // 0x330d88: 0x0  nop
    ctx->pc = 0x330d88u;
    // NOP
label_330d8c:
    // 0x330d8c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x330d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_330d90:
    // 0x330d90: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x330d90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_330d94:
    // 0x330d94: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x330d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_330d98:
    // 0x330d98: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x330d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_330d9c:
    // 0x330d9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x330d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330da0:
    // 0x330da0: 0x0  nop
    ctx->pc = 0x330da0u;
    // NOP
label_330da4:
    // 0x330da4: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x330da4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_330da8:
    // 0x330da8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x330da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330dac:
    // 0x330dac: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x330dacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_330db0:
    // 0x330db0: 0xe6001180  swc1        $f0, 0x1180($s0)
    ctx->pc = 0x330db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4480), bits); }
label_330db4:
    // 0x330db4: 0x87a300b4  lh          $v1, 0xB4($sp)
    ctx->pc = 0x330db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 180)));
label_330db8:
    // 0x330db8: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x330db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_330dbc:
    // 0x330dbc: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_330dc0:
    if (ctx->pc == 0x330DC0u) {
        ctx->pc = 0x330DC4u;
        goto label_330dc4;
    }
    ctx->pc = 0x330DBCu;
    {
        const bool branch_taken_0x330dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330dbc) {
            ctx->pc = 0x330F98u;
            goto label_330f98;
        }
    }
    ctx->pc = 0x330DC4u;
label_330dc4:
    // 0x330dc4: 0x8e060d60  lw          $a2, 0xD60($s0)
    ctx->pc = 0x330dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_330dc8:
    // 0x330dc8: 0xc6001180  lwc1        $f0, 0x1180($s0)
    ctx->pc = 0x330dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330dcc:
    // 0x330dcc: 0x8e050d70  lw          $a1, 0xD70($s0)
    ctx->pc = 0x330dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_330dd0:
    // 0x330dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330dd4:
    // 0x330dd4: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x330dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_330dd8:
    // 0x330dd8: 0x80c70004  lb          $a3, 0x4($a2)
    ctx->pc = 0x330dd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_330ddc:
    // 0x330ddc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x330ddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_330de0:
    // 0x330de0: 0x8ca600cc  lw          $a2, 0xCC($a1)
    ctx->pc = 0x330de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_330de4:
    // 0x330de4: 0x3885000b  xori        $a1, $a0, 0xB
    ctx->pc = 0x330de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)11);
label_330de8:
    // 0x330de8: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x330de8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_330dec:
    // 0x330dec: 0xe72018  mult        $a0, $a3, $a3
    ctx->pc = 0x330decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_330df0:
    // 0x330df0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x330df0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_330df4:
    // 0x330df4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x330df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_330df8:
    // 0x330df8: 0x288400e1  slti        $a0, $a0, 0xE1
    ctx->pc = 0x330df8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)225) ? 1 : 0);
label_330dfc:
    // 0x330dfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_330e00:
    if (ctx->pc == 0x330E00u) {
        ctx->pc = 0x330E00u;
            // 0x330e00: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->pc = 0x330E04u;
        goto label_330e04;
    }
    ctx->pc = 0x330DFCu;
    {
        const bool branch_taken_0x330dfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x330E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330DFCu;
            // 0x330e00: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330dfc) {
            ctx->pc = 0x330E08u;
            goto label_330e08;
        }
    }
    ctx->pc = 0x330E04u;
label_330e04:
    // 0x330e04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x330e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330e08:
    // 0x330e08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x330e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_330e0c:
    // 0x330e0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x330e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_330e10:
    // 0x330e10: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
label_330e14:
    if (ctx->pc == 0x330E14u) {
        ctx->pc = 0x330E18u;
        goto label_330e18;
    }
    ctx->pc = 0x330E10u;
    {
        const bool branch_taken_0x330e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e10) {
            ctx->pc = 0x331138u;
            goto label_331138;
        }
    }
    ctx->pc = 0x330E18u;
label_330e18:
    // 0x330e18: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x330e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
label_330e1c:
    // 0x330e1c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x330e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_330e20:
    // 0x330e20: 0xae041180  sw          $a0, 0x1180($s0)
    ctx->pc = 0x330e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4480), GPR_U32(ctx, 4));
label_330e24:
    // 0x330e24: 0x8e130550  lw          $s3, 0x550($s0)
    ctx->pc = 0x330e24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_330e28:
    // 0x330e28: 0x8264010f  lb          $a0, 0x10F($s3)
    ctx->pc = 0x330e28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 271)));
label_330e2c:
    // 0x330e2c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_330e30:
    if (ctx->pc == 0x330E30u) {
        ctx->pc = 0x330E34u;
        goto label_330e34;
    }
    ctx->pc = 0x330E2Cu;
    {
        const bool branch_taken_0x330e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330e2c) {
            ctx->pc = 0x330E80u;
            goto label_330e80;
        }
    }
    ctx->pc = 0x330E34u;
label_330e34:
    // 0x330e34: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x330e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_330e38:
    // 0x330e38: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_330e3c:
    if (ctx->pc == 0x330E3Cu) {
        ctx->pc = 0x330E40u;
        goto label_330e40;
    }
    ctx->pc = 0x330E38u;
    {
        const bool branch_taken_0x330e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330e38) {
            ctx->pc = 0x330E80u;
            goto label_330e80;
        }
    }
    ctx->pc = 0x330E40u;
label_330e40:
    // 0x330e40: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x330e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_330e44:
    // 0x330e44: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_330e48:
    if (ctx->pc == 0x330E48u) {
        ctx->pc = 0x330E4Cu;
        goto label_330e4c;
    }
    ctx->pc = 0x330E44u;
    {
        const bool branch_taken_0x330e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330e44) {
            ctx->pc = 0x330E80u;
            goto label_330e80;
        }
    }
    ctx->pc = 0x330E4Cu;
label_330e4c:
    // 0x330e4c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x330e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_330e50:
    // 0x330e50: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_330e54:
    if (ctx->pc == 0x330E54u) {
        ctx->pc = 0x330E58u;
        goto label_330e58;
    }
    ctx->pc = 0x330E50u;
    {
        const bool branch_taken_0x330e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330e50) {
            ctx->pc = 0x330E80u;
            goto label_330e80;
        }
    }
    ctx->pc = 0x330E58u;
label_330e58:
    // 0x330e58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x330e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_330e5c:
    // 0x330e5c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_330e60:
    if (ctx->pc == 0x330E60u) {
        ctx->pc = 0x330E64u;
        goto label_330e64;
    }
    ctx->pc = 0x330E5Cu;
    {
        const bool branch_taken_0x330e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330e5c) {
            ctx->pc = 0x330E80u;
            goto label_330e80;
        }
    }
    ctx->pc = 0x330E64u;
label_330e64:
    // 0x330e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330e68:
    // 0x330e68: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_330e6c:
    if (ctx->pc == 0x330E6Cu) {
        ctx->pc = 0x330E70u;
        goto label_330e70;
    }
    ctx->pc = 0x330E68u;
    {
        const bool branch_taken_0x330e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330e68) {
            ctx->pc = 0x330E80u;
            goto label_330e80;
        }
    }
    ctx->pc = 0x330E70u;
label_330e70:
    // 0x330e70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_330e74:
    if (ctx->pc == 0x330E74u) {
        ctx->pc = 0x330E78u;
        goto label_330e78;
    }
    ctx->pc = 0x330E70u;
    {
        const bool branch_taken_0x330e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e70) {
            ctx->pc = 0x330E80u;
            goto label_330e80;
        }
    }
    ctx->pc = 0x330E78u;
label_330e78:
    // 0x330e78: 0x100000af  b           . + 4 + (0xAF << 2)
label_330e7c:
    if (ctx->pc == 0x330E7Cu) {
        ctx->pc = 0x330E80u;
        goto label_330e80;
    }
    ctx->pc = 0x330E78u;
    {
        const bool branch_taken_0x330e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e78) {
            ctx->pc = 0x331138u;
            goto label_331138;
        }
    }
    ctx->pc = 0x330E80u;
label_330e80:
    // 0x330e80: 0x8263010c  lb          $v1, 0x10C($s3)
    ctx->pc = 0x330e80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_330e84:
    // 0x330e84: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x330e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
label_330e88:
    // 0x330e88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x330e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330e8c:
    // 0x330e8c: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x330e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_330e90:
    // 0x330e90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x330e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_330e94:
    // 0x330e94: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x330e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_330e98:
    // 0x330e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330e9c:
    // 0x330e9c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x330e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_330ea0:
    // 0x330ea0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_330ea4:
    // 0x330ea4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x330ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_330ea8:
    // 0x330ea8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x330ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_330eac:
    // 0x330eac: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x330eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_330eb0:
    // 0x330eb0: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x330eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330eb4:
    // 0x330eb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x330eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_330eb8:
    // 0x330eb8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_330ebc:
    if (ctx->pc == 0x330EBCu) {
        ctx->pc = 0x330EC0u;
        goto label_330ec0;
    }
    ctx->pc = 0x330EB8u;
    {
        const bool branch_taken_0x330eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x330eb8) {
            ctx->pc = 0x330EF0u;
            goto label_330ef0;
        }
    }
    ctx->pc = 0x330EC0u;
label_330ec0:
    // 0x330ec0: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x330ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_330ec4:
    // 0x330ec4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x330ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_330ec8:
    // 0x330ec8: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x330ec8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_330ecc:
    // 0x330ecc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x330eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_330ed0:
    // 0x330ed0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x330ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_330ed4:
    // 0x330ed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_330ed8:
    // 0x330ed8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x330ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_330edc:
    // 0x330edc: 0x320f809  jalr        $t9
label_330ee0:
    if (ctx->pc == 0x330EE0u) {
        ctx->pc = 0x330EE0u;
            // 0x330ee0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330EE4u;
        goto label_330ee4;
    }
    ctx->pc = 0x330EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x330EE4u);
        ctx->pc = 0x330EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330EDCu;
            // 0x330ee0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x330EE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x330EE4u; }
            if (ctx->pc != 0x330EE4u) { return; }
        }
        }
    }
    ctx->pc = 0x330EE4u;
label_330ee4:
    // 0x330ee4: 0x10000010  b           . + 4 + (0x10 << 2)
label_330ee8:
    if (ctx->pc == 0x330EE8u) {
        ctx->pc = 0x330EECu;
        goto label_330eec;
    }
    ctx->pc = 0x330EE4u;
    {
        const bool branch_taken_0x330ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330ee4) {
            ctx->pc = 0x330F28u;
            goto label_330f28;
        }
    }
    ctx->pc = 0x330EECu;
label_330eec:
    // 0x330eec: 0x0  nop
    ctx->pc = 0x330eecu;
    // NOP
label_330ef0:
    // 0x330ef0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x330ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_330ef4:
    // 0x330ef4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_330ef8:
    if (ctx->pc == 0x330EF8u) {
        ctx->pc = 0x330EFCu;
        goto label_330efc;
    }
    ctx->pc = 0x330EF4u;
    {
        const bool branch_taken_0x330ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x330ef4) {
            ctx->pc = 0x330F28u;
            goto label_330f28;
        }
    }
    ctx->pc = 0x330EFCu;
label_330efc:
    // 0x330efc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x330efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_330f00:
    // 0x330f00: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x330f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_330f04:
    // 0x330f04: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x330f04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_330f08:
    // 0x330f08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x330f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_330f0c:
    // 0x330f0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x330f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_330f10:
    // 0x330f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_330f14:
    // 0x330f14: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x330f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_330f18:
    // 0x330f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330f1c:
    // 0x330f1c: 0x320f809  jalr        $t9
label_330f20:
    if (ctx->pc == 0x330F20u) {
        ctx->pc = 0x330F20u;
            // 0x330f20: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330F24u;
        goto label_330f24;
    }
    ctx->pc = 0x330F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x330F24u);
        ctx->pc = 0x330F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330F1Cu;
            // 0x330f20: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x330F24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x330F24u; }
            if (ctx->pc != 0x330F24u) { return; }
        }
        }
    }
    ctx->pc = 0x330F24u;
label_330f24:
    // 0x330f24: 0x0  nop
    ctx->pc = 0x330f24u;
    // NOP
label_330f28:
    // 0x330f28: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x330f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_330f2c:
    // 0x330f2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x330f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_330f30:
    // 0x330f30: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x330f30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_330f34:
    // 0x330f34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x330f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_330f38:
    // 0x330f38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_330f3c:
    // 0x330f3c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x330f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_330f40:
    // 0x330f40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x330f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_330f44:
    // 0x330f44: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x330f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_330f48:
    // 0x330f48: 0x320f809  jalr        $t9
label_330f4c:
    if (ctx->pc == 0x330F4Cu) {
        ctx->pc = 0x330F4Cu;
            // 0x330f4c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x330F50u;
        goto label_330f50;
    }
    ctx->pc = 0x330F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x330F50u);
        ctx->pc = 0x330F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330F48u;
            // 0x330f4c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x330F50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x330F50u; }
            if (ctx->pc != 0x330F50u) { return; }
        }
        }
    }
    ctx->pc = 0x330F50u;
label_330f50:
    // 0x330f50: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x330f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_330f54:
    // 0x330f54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x330f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_330f58:
    // 0x330f58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x330f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_330f5c:
    // 0x330f5c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x330f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_330f60:
    // 0x330f60: 0x320f809  jalr        $t9
label_330f64:
    if (ctx->pc == 0x330F64u) {
        ctx->pc = 0x330F64u;
            // 0x330f64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x330F68u;
        goto label_330f68;
    }
    ctx->pc = 0x330F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x330F68u);
        ctx->pc = 0x330F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330F60u;
            // 0x330f64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x330F68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x330F68u; }
            if (ctx->pc != 0x330F68u) { return; }
        }
        }
    }
    ctx->pc = 0x330F68u;
label_330f68:
    // 0x330f68: 0x8e040d78  lw          $a0, 0xD78($s0)
    ctx->pc = 0x330f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_330f6c:
    // 0x330f6c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x330f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_330f70:
    // 0x330f70: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x330f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_330f74:
    // 0x330f74: 0x8c63078c  lw          $v1, 0x78C($v1)
    ctx->pc = 0x330f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1932)));
label_330f78:
    // 0x330f78: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x330f78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_330f7c:
    // 0x330f7c: 0x1020006e  beqz        $at, . + 4 + (0x6E << 2)
label_330f80:
    if (ctx->pc == 0x330F80u) {
        ctx->pc = 0x330F84u;
        goto label_330f84;
    }
    ctx->pc = 0x330F7Cu;
    {
        const bool branch_taken_0x330f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330f7c) {
            ctx->pc = 0x331138u;
            goto label_331138;
        }
    }
    ctx->pc = 0x330F84u;
label_330f84:
    // 0x330f84: 0x26041150  addiu       $a0, $s0, 0x1150
    ctx->pc = 0x330f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_330f88:
    // 0x330f88: 0xc12ca3c  jal         func_4B28F0
label_330f8c:
    if (ctx->pc == 0x330F8Cu) {
        ctx->pc = 0x330F8Cu;
            // 0x330f8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x330F90u;
        goto label_330f90;
    }
    ctx->pc = 0x330F88u;
    SET_GPR_U32(ctx, 31, 0x330F90u);
    ctx->pc = 0x330F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330F88u;
            // 0x330f8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330F90u; }
        if (ctx->pc != 0x330F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330F90u; }
        if (ctx->pc != 0x330F90u) { return; }
    }
    ctx->pc = 0x330F90u;
label_330f90:
    // 0x330f90: 0x10000069  b           . + 4 + (0x69 << 2)
label_330f94:
    if (ctx->pc == 0x330F94u) {
        ctx->pc = 0x330F98u;
        goto label_330f98;
    }
    ctx->pc = 0x330F90u;
    {
        const bool branch_taken_0x330f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330f90) {
            ctx->pc = 0x331138u;
            goto label_331138;
        }
    }
    ctx->pc = 0x330F98u;
label_330f98:
    // 0x330f98: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x330f98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_330f9c:
    // 0x330f9c: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_330fa0:
    if (ctx->pc == 0x330FA0u) {
        ctx->pc = 0x330FA4u;
        goto label_330fa4;
    }
    ctx->pc = 0x330F9Cu;
    {
        const bool branch_taken_0x330f9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330f9c) {
            ctx->pc = 0x331138u;
            goto label_331138;
        }
    }
    ctx->pc = 0x330FA4u;
label_330fa4:
    // 0x330fa4: 0x8e050d70  lw          $a1, 0xD70($s0)
    ctx->pc = 0x330fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_330fa8:
    // 0x330fa8: 0xc6001180  lwc1        $f0, 0x1180($s0)
    ctx->pc = 0x330fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330fac:
    // 0x330fac: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x330facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_330fb0:
    // 0x330fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330fb4:
    // 0x330fb4: 0x8ca500cc  lw          $a1, 0xCC($a1)
    ctx->pc = 0x330fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_330fb8:
    // 0x330fb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x330fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_330fbc:
    // 0x330fbc: 0x3884000b  xori        $a0, $a0, 0xB
    ctx->pc = 0x330fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)11);
label_330fc0:
    // 0x330fc0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x330fc0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_330fc4:
    // 0x330fc4: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x330fc4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_330fc8:
    // 0x330fc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_330fcc:
    if (ctx->pc == 0x330FCCu) {
        ctx->pc = 0x330FCCu;
            // 0x330fcc: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->pc = 0x330FD0u;
        goto label_330fd0;
    }
    ctx->pc = 0x330FC8u;
    {
        const bool branch_taken_0x330fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x330FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330FC8u;
            // 0x330fcc: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330fc8) {
            ctx->pc = 0x330FD4u;
            goto label_330fd4;
        }
    }
    ctx->pc = 0x330FD0u;
label_330fd0:
    // 0x330fd0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x330fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330fd4:
    // 0x330fd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x330fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_330fd8:
    // 0x330fd8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x330fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_330fdc:
    // 0x330fdc: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
label_330fe0:
    if (ctx->pc == 0x330FE0u) {
        ctx->pc = 0x330FE4u;
        goto label_330fe4;
    }
    ctx->pc = 0x330FDCu;
    {
        const bool branch_taken_0x330fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330fdc) {
            ctx->pc = 0x331138u;
            goto label_331138;
        }
    }
    ctx->pc = 0x330FE4u;
label_330fe4:
    // 0x330fe4: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x330fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
label_330fe8:
    // 0x330fe8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x330fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_330fec:
    // 0x330fec: 0xae041180  sw          $a0, 0x1180($s0)
    ctx->pc = 0x330fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4480), GPR_U32(ctx, 4));
label_330ff0:
    // 0x330ff0: 0x8e130550  lw          $s3, 0x550($s0)
    ctx->pc = 0x330ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_330ff4:
    // 0x330ff4: 0x8264010f  lb          $a0, 0x10F($s3)
    ctx->pc = 0x330ff4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 271)));
label_330ff8:
    // 0x330ff8: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_330ffc:
    if (ctx->pc == 0x330FFCu) {
        ctx->pc = 0x331000u;
        goto label_331000;
    }
    ctx->pc = 0x330FF8u;
    {
        const bool branch_taken_0x330ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x330ff8) {
            ctx->pc = 0x331050u;
            goto label_331050;
        }
    }
    ctx->pc = 0x331000u;
label_331000:
    // 0x331000: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x331000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_331004:
    // 0x331004: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_331008:
    if (ctx->pc == 0x331008u) {
        ctx->pc = 0x33100Cu;
        goto label_33100c;
    }
    ctx->pc = 0x331004u;
    {
        const bool branch_taken_0x331004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331004) {
            ctx->pc = 0x331050u;
            goto label_331050;
        }
    }
    ctx->pc = 0x33100Cu;
label_33100c:
    // 0x33100c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x33100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_331010:
    // 0x331010: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_331014:
    if (ctx->pc == 0x331014u) {
        ctx->pc = 0x331018u;
        goto label_331018;
    }
    ctx->pc = 0x331010u;
    {
        const bool branch_taken_0x331010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331010) {
            ctx->pc = 0x331050u;
            goto label_331050;
        }
    }
    ctx->pc = 0x331018u;
label_331018:
    // 0x331018: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x331018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_33101c:
    // 0x33101c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_331020:
    if (ctx->pc == 0x331020u) {
        ctx->pc = 0x331024u;
        goto label_331024;
    }
    ctx->pc = 0x33101Cu;
    {
        const bool branch_taken_0x33101c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33101c) {
            ctx->pc = 0x331050u;
            goto label_331050;
        }
    }
    ctx->pc = 0x331024u;
label_331024:
    // 0x331024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_331028:
    // 0x331028: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_33102c:
    if (ctx->pc == 0x33102Cu) {
        ctx->pc = 0x331030u;
        goto label_331030;
    }
    ctx->pc = 0x331028u;
    {
        const bool branch_taken_0x331028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331028) {
            ctx->pc = 0x331050u;
            goto label_331050;
        }
    }
    ctx->pc = 0x331030u;
label_331030:
    // 0x331030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331034:
    // 0x331034: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_331038:
    if (ctx->pc == 0x331038u) {
        ctx->pc = 0x33103Cu;
        goto label_33103c;
    }
    ctx->pc = 0x331034u;
    {
        const bool branch_taken_0x331034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331034) {
            ctx->pc = 0x331050u;
            goto label_331050;
        }
    }
    ctx->pc = 0x33103Cu;
label_33103c:
    // 0x33103c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_331040:
    if (ctx->pc == 0x331040u) {
        ctx->pc = 0x331044u;
        goto label_331044;
    }
    ctx->pc = 0x33103Cu;
    {
        const bool branch_taken_0x33103c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33103c) {
            ctx->pc = 0x331050u;
            goto label_331050;
        }
    }
    ctx->pc = 0x331044u;
label_331044:
    // 0x331044: 0x1000003c  b           . + 4 + (0x3C << 2)
label_331048:
    if (ctx->pc == 0x331048u) {
        ctx->pc = 0x33104Cu;
        goto label_33104c;
    }
    ctx->pc = 0x331044u;
    {
        const bool branch_taken_0x331044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331044) {
            ctx->pc = 0x331138u;
            goto label_331138;
        }
    }
    ctx->pc = 0x33104Cu;
label_33104c:
    // 0x33104c: 0x0  nop
    ctx->pc = 0x33104cu;
    // NOP
label_331050:
    // 0x331050: 0x8263010c  lb          $v1, 0x10C($s3)
    ctx->pc = 0x331050u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_331054:
    // 0x331054: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x331054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
label_331058:
    // 0x331058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x331058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33105c:
    // 0x33105c: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x33105cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_331060:
    // 0x331060: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x331060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_331064:
    // 0x331064: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x331064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_331068:
    // 0x331068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33106c:
    // 0x33106c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33106cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_331070:
    // 0x331070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x331070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_331074:
    // 0x331074: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x331074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_331078:
    // 0x331078: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x331078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_33107c:
    // 0x33107c: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x33107cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_331080:
    // 0x331080: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x331080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_331084:
    // 0x331084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x331084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_331088:
    // 0x331088: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_33108c:
    if (ctx->pc == 0x33108Cu) {
        ctx->pc = 0x331090u;
        goto label_331090;
    }
    ctx->pc = 0x331088u;
    {
        const bool branch_taken_0x331088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x331088) {
            ctx->pc = 0x3310C0u;
            goto label_3310c0;
        }
    }
    ctx->pc = 0x331090u;
label_331090:
    // 0x331090: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x331090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_331094:
    // 0x331094: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x331094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_331098:
    // 0x331098: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x331098u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_33109c:
    // 0x33109c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33109cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3310a0:
    // 0x3310a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3310a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3310a4:
    // 0x3310a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3310a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3310a8:
    // 0x3310a8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3310a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3310ac:
    // 0x3310ac: 0x320f809  jalr        $t9
label_3310b0:
    if (ctx->pc == 0x3310B0u) {
        ctx->pc = 0x3310B0u;
            // 0x3310b0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3310B4u;
        goto label_3310b4;
    }
    ctx->pc = 0x3310ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3310B4u);
        ctx->pc = 0x3310B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3310ACu;
            // 0x3310b0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3310B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3310B4u; }
            if (ctx->pc != 0x3310B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3310B4u;
label_3310b4:
    // 0x3310b4: 0x10000010  b           . + 4 + (0x10 << 2)
label_3310b8:
    if (ctx->pc == 0x3310B8u) {
        ctx->pc = 0x3310BCu;
        goto label_3310bc;
    }
    ctx->pc = 0x3310B4u;
    {
        const bool branch_taken_0x3310b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3310b4) {
            ctx->pc = 0x3310F8u;
            goto label_3310f8;
        }
    }
    ctx->pc = 0x3310BCu;
label_3310bc:
    // 0x3310bc: 0x0  nop
    ctx->pc = 0x3310bcu;
    // NOP
label_3310c0:
    // 0x3310c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3310c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3310c4:
    // 0x3310c4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3310c8:
    if (ctx->pc == 0x3310C8u) {
        ctx->pc = 0x3310CCu;
        goto label_3310cc;
    }
    ctx->pc = 0x3310C4u;
    {
        const bool branch_taken_0x3310c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3310c4) {
            ctx->pc = 0x3310F8u;
            goto label_3310f8;
        }
    }
    ctx->pc = 0x3310CCu;
label_3310cc:
    // 0x3310cc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x3310ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3310d0:
    // 0x3310d0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3310d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3310d4:
    // 0x3310d4: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x3310d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_3310d8:
    // 0x3310d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3310d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3310dc:
    // 0x3310dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3310dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3310e0:
    // 0x3310e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3310e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3310e4:
    // 0x3310e4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3310e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3310e8:
    // 0x3310e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3310e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3310ec:
    // 0x3310ec: 0x320f809  jalr        $t9
label_3310f0:
    if (ctx->pc == 0x3310F0u) {
        ctx->pc = 0x3310F0u;
            // 0x3310f0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3310F4u;
        goto label_3310f4;
    }
    ctx->pc = 0x3310ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3310F4u);
        ctx->pc = 0x3310F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3310ECu;
            // 0x3310f0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3310F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3310F4u; }
            if (ctx->pc != 0x3310F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3310F4u;
label_3310f4:
    // 0x3310f4: 0x0  nop
    ctx->pc = 0x3310f4u;
    // NOP
label_3310f8:
    // 0x3310f8: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x3310f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3310fc:
    // 0x3310fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3310fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_331100:
    // 0x331100: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x331100u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_331104:
    // 0x331104: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x331104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_331108:
    // 0x331108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33110c:
    // 0x33110c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33110cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_331110:
    // 0x331110: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x331110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_331114:
    // 0x331114: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x331114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_331118:
    // 0x331118: 0x320f809  jalr        $t9
label_33111c:
    if (ctx->pc == 0x33111Cu) {
        ctx->pc = 0x33111Cu;
            // 0x33111c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x331120u;
        goto label_331120;
    }
    ctx->pc = 0x331118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331120u);
        ctx->pc = 0x33111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331118u;
            // 0x33111c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x331120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331120u; }
            if (ctx->pc != 0x331120u) { return; }
        }
        }
    }
    ctx->pc = 0x331120u;
label_331120:
    // 0x331120: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x331120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_331124:
    // 0x331124: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x331124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_331128:
    // 0x331128: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33112c:
    // 0x33112c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x33112cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_331130:
    // 0x331130: 0x320f809  jalr        $t9
label_331134:
    if (ctx->pc == 0x331134u) {
        ctx->pc = 0x331134u;
            // 0x331134: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331138u;
        goto label_331138;
    }
    ctx->pc = 0x331130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331138u);
        ctx->pc = 0x331134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331130u;
            // 0x331134: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x331138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331138u; }
            if (ctx->pc != 0x331138u) { return; }
        }
        }
    }
    ctx->pc = 0x331138u;
label_331138:
    // 0x331138: 0xa2120e3f  sb          $s2, 0xE3F($s0)
    ctx->pc = 0x331138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3647), (uint8_t)GPR_U32(ctx, 18));
label_33113c:
    // 0x33113c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33113cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_331140:
    // 0x331140: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x331140u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_331144:
    // 0x331144: 0x1460feed  bnez        $v1, . + 4 + (-0x113 << 2)
label_331148:
    if (ctx->pc == 0x331148u) {
        ctx->pc = 0x331148u;
            // 0x331148: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->pc = 0x33114Cu;
        goto label_33114c;
    }
    ctx->pc = 0x331144u;
    {
        const bool branch_taken_0x331144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331144u;
            // 0x331148: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331144) {
            ctx->pc = 0x330CFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330cfc;
        }
    }
    ctx->pc = 0x33114Cu;
label_33114c:
    // 0x33114c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x33114cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_331150:
    // 0x331150: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x331150u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_331154:
    // 0x331154: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x331154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_331158:
    // 0x331158: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x331158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33115c:
    // 0x33115c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33115cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_331160:
    // 0x331160: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x331160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_331164:
    // 0x331164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x331164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_331168:
    // 0x331168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33116c:
    // 0x33116c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33116cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_331170:
    // 0x331170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_331174:
    // 0x331174: 0x3e00008  jr          $ra
label_331178:
    if (ctx->pc == 0x331178u) {
        ctx->pc = 0x331178u;
            // 0x331178: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x33117Cu;
        goto label_33117c;
    }
    ctx->pc = 0x331174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331174u;
            // 0x331178: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33117Cu;
label_33117c:
    // 0x33117c: 0x0  nop
    ctx->pc = 0x33117cu;
    // NOP
}
