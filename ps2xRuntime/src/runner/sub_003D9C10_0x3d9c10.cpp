#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D9C10
// Address: 0x3d9c10 - 0x3da090
void sub_003D9C10_0x3d9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9C10_0x3d9c10");
#endif

    switch (ctx->pc) {
        case 0x3d9c10u: goto label_3d9c10;
        case 0x3d9c14u: goto label_3d9c14;
        case 0x3d9c18u: goto label_3d9c18;
        case 0x3d9c1cu: goto label_3d9c1c;
        case 0x3d9c20u: goto label_3d9c20;
        case 0x3d9c24u: goto label_3d9c24;
        case 0x3d9c28u: goto label_3d9c28;
        case 0x3d9c2cu: goto label_3d9c2c;
        case 0x3d9c30u: goto label_3d9c30;
        case 0x3d9c34u: goto label_3d9c34;
        case 0x3d9c38u: goto label_3d9c38;
        case 0x3d9c3cu: goto label_3d9c3c;
        case 0x3d9c40u: goto label_3d9c40;
        case 0x3d9c44u: goto label_3d9c44;
        case 0x3d9c48u: goto label_3d9c48;
        case 0x3d9c4cu: goto label_3d9c4c;
        case 0x3d9c50u: goto label_3d9c50;
        case 0x3d9c54u: goto label_3d9c54;
        case 0x3d9c58u: goto label_3d9c58;
        case 0x3d9c5cu: goto label_3d9c5c;
        case 0x3d9c60u: goto label_3d9c60;
        case 0x3d9c64u: goto label_3d9c64;
        case 0x3d9c68u: goto label_3d9c68;
        case 0x3d9c6cu: goto label_3d9c6c;
        case 0x3d9c70u: goto label_3d9c70;
        case 0x3d9c74u: goto label_3d9c74;
        case 0x3d9c78u: goto label_3d9c78;
        case 0x3d9c7cu: goto label_3d9c7c;
        case 0x3d9c80u: goto label_3d9c80;
        case 0x3d9c84u: goto label_3d9c84;
        case 0x3d9c88u: goto label_3d9c88;
        case 0x3d9c8cu: goto label_3d9c8c;
        case 0x3d9c90u: goto label_3d9c90;
        case 0x3d9c94u: goto label_3d9c94;
        case 0x3d9c98u: goto label_3d9c98;
        case 0x3d9c9cu: goto label_3d9c9c;
        case 0x3d9ca0u: goto label_3d9ca0;
        case 0x3d9ca4u: goto label_3d9ca4;
        case 0x3d9ca8u: goto label_3d9ca8;
        case 0x3d9cacu: goto label_3d9cac;
        case 0x3d9cb0u: goto label_3d9cb0;
        case 0x3d9cb4u: goto label_3d9cb4;
        case 0x3d9cb8u: goto label_3d9cb8;
        case 0x3d9cbcu: goto label_3d9cbc;
        case 0x3d9cc0u: goto label_3d9cc0;
        case 0x3d9cc4u: goto label_3d9cc4;
        case 0x3d9cc8u: goto label_3d9cc8;
        case 0x3d9cccu: goto label_3d9ccc;
        case 0x3d9cd0u: goto label_3d9cd0;
        case 0x3d9cd4u: goto label_3d9cd4;
        case 0x3d9cd8u: goto label_3d9cd8;
        case 0x3d9cdcu: goto label_3d9cdc;
        case 0x3d9ce0u: goto label_3d9ce0;
        case 0x3d9ce4u: goto label_3d9ce4;
        case 0x3d9ce8u: goto label_3d9ce8;
        case 0x3d9cecu: goto label_3d9cec;
        case 0x3d9cf0u: goto label_3d9cf0;
        case 0x3d9cf4u: goto label_3d9cf4;
        case 0x3d9cf8u: goto label_3d9cf8;
        case 0x3d9cfcu: goto label_3d9cfc;
        case 0x3d9d00u: goto label_3d9d00;
        case 0x3d9d04u: goto label_3d9d04;
        case 0x3d9d08u: goto label_3d9d08;
        case 0x3d9d0cu: goto label_3d9d0c;
        case 0x3d9d10u: goto label_3d9d10;
        case 0x3d9d14u: goto label_3d9d14;
        case 0x3d9d18u: goto label_3d9d18;
        case 0x3d9d1cu: goto label_3d9d1c;
        case 0x3d9d20u: goto label_3d9d20;
        case 0x3d9d24u: goto label_3d9d24;
        case 0x3d9d28u: goto label_3d9d28;
        case 0x3d9d2cu: goto label_3d9d2c;
        case 0x3d9d30u: goto label_3d9d30;
        case 0x3d9d34u: goto label_3d9d34;
        case 0x3d9d38u: goto label_3d9d38;
        case 0x3d9d3cu: goto label_3d9d3c;
        case 0x3d9d40u: goto label_3d9d40;
        case 0x3d9d44u: goto label_3d9d44;
        case 0x3d9d48u: goto label_3d9d48;
        case 0x3d9d4cu: goto label_3d9d4c;
        case 0x3d9d50u: goto label_3d9d50;
        case 0x3d9d54u: goto label_3d9d54;
        case 0x3d9d58u: goto label_3d9d58;
        case 0x3d9d5cu: goto label_3d9d5c;
        case 0x3d9d60u: goto label_3d9d60;
        case 0x3d9d64u: goto label_3d9d64;
        case 0x3d9d68u: goto label_3d9d68;
        case 0x3d9d6cu: goto label_3d9d6c;
        case 0x3d9d70u: goto label_3d9d70;
        case 0x3d9d74u: goto label_3d9d74;
        case 0x3d9d78u: goto label_3d9d78;
        case 0x3d9d7cu: goto label_3d9d7c;
        case 0x3d9d80u: goto label_3d9d80;
        case 0x3d9d84u: goto label_3d9d84;
        case 0x3d9d88u: goto label_3d9d88;
        case 0x3d9d8cu: goto label_3d9d8c;
        case 0x3d9d90u: goto label_3d9d90;
        case 0x3d9d94u: goto label_3d9d94;
        case 0x3d9d98u: goto label_3d9d98;
        case 0x3d9d9cu: goto label_3d9d9c;
        case 0x3d9da0u: goto label_3d9da0;
        case 0x3d9da4u: goto label_3d9da4;
        case 0x3d9da8u: goto label_3d9da8;
        case 0x3d9dacu: goto label_3d9dac;
        case 0x3d9db0u: goto label_3d9db0;
        case 0x3d9db4u: goto label_3d9db4;
        case 0x3d9db8u: goto label_3d9db8;
        case 0x3d9dbcu: goto label_3d9dbc;
        case 0x3d9dc0u: goto label_3d9dc0;
        case 0x3d9dc4u: goto label_3d9dc4;
        case 0x3d9dc8u: goto label_3d9dc8;
        case 0x3d9dccu: goto label_3d9dcc;
        case 0x3d9dd0u: goto label_3d9dd0;
        case 0x3d9dd4u: goto label_3d9dd4;
        case 0x3d9dd8u: goto label_3d9dd8;
        case 0x3d9ddcu: goto label_3d9ddc;
        case 0x3d9de0u: goto label_3d9de0;
        case 0x3d9de4u: goto label_3d9de4;
        case 0x3d9de8u: goto label_3d9de8;
        case 0x3d9decu: goto label_3d9dec;
        case 0x3d9df0u: goto label_3d9df0;
        case 0x3d9df4u: goto label_3d9df4;
        case 0x3d9df8u: goto label_3d9df8;
        case 0x3d9dfcu: goto label_3d9dfc;
        case 0x3d9e00u: goto label_3d9e00;
        case 0x3d9e04u: goto label_3d9e04;
        case 0x3d9e08u: goto label_3d9e08;
        case 0x3d9e0cu: goto label_3d9e0c;
        case 0x3d9e10u: goto label_3d9e10;
        case 0x3d9e14u: goto label_3d9e14;
        case 0x3d9e18u: goto label_3d9e18;
        case 0x3d9e1cu: goto label_3d9e1c;
        case 0x3d9e20u: goto label_3d9e20;
        case 0x3d9e24u: goto label_3d9e24;
        case 0x3d9e28u: goto label_3d9e28;
        case 0x3d9e2cu: goto label_3d9e2c;
        case 0x3d9e30u: goto label_3d9e30;
        case 0x3d9e34u: goto label_3d9e34;
        case 0x3d9e38u: goto label_3d9e38;
        case 0x3d9e3cu: goto label_3d9e3c;
        case 0x3d9e40u: goto label_3d9e40;
        case 0x3d9e44u: goto label_3d9e44;
        case 0x3d9e48u: goto label_3d9e48;
        case 0x3d9e4cu: goto label_3d9e4c;
        case 0x3d9e50u: goto label_3d9e50;
        case 0x3d9e54u: goto label_3d9e54;
        case 0x3d9e58u: goto label_3d9e58;
        case 0x3d9e5cu: goto label_3d9e5c;
        case 0x3d9e60u: goto label_3d9e60;
        case 0x3d9e64u: goto label_3d9e64;
        case 0x3d9e68u: goto label_3d9e68;
        case 0x3d9e6cu: goto label_3d9e6c;
        case 0x3d9e70u: goto label_3d9e70;
        case 0x3d9e74u: goto label_3d9e74;
        case 0x3d9e78u: goto label_3d9e78;
        case 0x3d9e7cu: goto label_3d9e7c;
        case 0x3d9e80u: goto label_3d9e80;
        case 0x3d9e84u: goto label_3d9e84;
        case 0x3d9e88u: goto label_3d9e88;
        case 0x3d9e8cu: goto label_3d9e8c;
        case 0x3d9e90u: goto label_3d9e90;
        case 0x3d9e94u: goto label_3d9e94;
        case 0x3d9e98u: goto label_3d9e98;
        case 0x3d9e9cu: goto label_3d9e9c;
        case 0x3d9ea0u: goto label_3d9ea0;
        case 0x3d9ea4u: goto label_3d9ea4;
        case 0x3d9ea8u: goto label_3d9ea8;
        case 0x3d9eacu: goto label_3d9eac;
        case 0x3d9eb0u: goto label_3d9eb0;
        case 0x3d9eb4u: goto label_3d9eb4;
        case 0x3d9eb8u: goto label_3d9eb8;
        case 0x3d9ebcu: goto label_3d9ebc;
        case 0x3d9ec0u: goto label_3d9ec0;
        case 0x3d9ec4u: goto label_3d9ec4;
        case 0x3d9ec8u: goto label_3d9ec8;
        case 0x3d9eccu: goto label_3d9ecc;
        case 0x3d9ed0u: goto label_3d9ed0;
        case 0x3d9ed4u: goto label_3d9ed4;
        case 0x3d9ed8u: goto label_3d9ed8;
        case 0x3d9edcu: goto label_3d9edc;
        case 0x3d9ee0u: goto label_3d9ee0;
        case 0x3d9ee4u: goto label_3d9ee4;
        case 0x3d9ee8u: goto label_3d9ee8;
        case 0x3d9eecu: goto label_3d9eec;
        case 0x3d9ef0u: goto label_3d9ef0;
        case 0x3d9ef4u: goto label_3d9ef4;
        case 0x3d9ef8u: goto label_3d9ef8;
        case 0x3d9efcu: goto label_3d9efc;
        case 0x3d9f00u: goto label_3d9f00;
        case 0x3d9f04u: goto label_3d9f04;
        case 0x3d9f08u: goto label_3d9f08;
        case 0x3d9f0cu: goto label_3d9f0c;
        case 0x3d9f10u: goto label_3d9f10;
        case 0x3d9f14u: goto label_3d9f14;
        case 0x3d9f18u: goto label_3d9f18;
        case 0x3d9f1cu: goto label_3d9f1c;
        case 0x3d9f20u: goto label_3d9f20;
        case 0x3d9f24u: goto label_3d9f24;
        case 0x3d9f28u: goto label_3d9f28;
        case 0x3d9f2cu: goto label_3d9f2c;
        case 0x3d9f30u: goto label_3d9f30;
        case 0x3d9f34u: goto label_3d9f34;
        case 0x3d9f38u: goto label_3d9f38;
        case 0x3d9f3cu: goto label_3d9f3c;
        case 0x3d9f40u: goto label_3d9f40;
        case 0x3d9f44u: goto label_3d9f44;
        case 0x3d9f48u: goto label_3d9f48;
        case 0x3d9f4cu: goto label_3d9f4c;
        case 0x3d9f50u: goto label_3d9f50;
        case 0x3d9f54u: goto label_3d9f54;
        case 0x3d9f58u: goto label_3d9f58;
        case 0x3d9f5cu: goto label_3d9f5c;
        case 0x3d9f60u: goto label_3d9f60;
        case 0x3d9f64u: goto label_3d9f64;
        case 0x3d9f68u: goto label_3d9f68;
        case 0x3d9f6cu: goto label_3d9f6c;
        case 0x3d9f70u: goto label_3d9f70;
        case 0x3d9f74u: goto label_3d9f74;
        case 0x3d9f78u: goto label_3d9f78;
        case 0x3d9f7cu: goto label_3d9f7c;
        case 0x3d9f80u: goto label_3d9f80;
        case 0x3d9f84u: goto label_3d9f84;
        case 0x3d9f88u: goto label_3d9f88;
        case 0x3d9f8cu: goto label_3d9f8c;
        case 0x3d9f90u: goto label_3d9f90;
        case 0x3d9f94u: goto label_3d9f94;
        case 0x3d9f98u: goto label_3d9f98;
        case 0x3d9f9cu: goto label_3d9f9c;
        case 0x3d9fa0u: goto label_3d9fa0;
        case 0x3d9fa4u: goto label_3d9fa4;
        case 0x3d9fa8u: goto label_3d9fa8;
        case 0x3d9facu: goto label_3d9fac;
        case 0x3d9fb0u: goto label_3d9fb0;
        case 0x3d9fb4u: goto label_3d9fb4;
        case 0x3d9fb8u: goto label_3d9fb8;
        case 0x3d9fbcu: goto label_3d9fbc;
        case 0x3d9fc0u: goto label_3d9fc0;
        case 0x3d9fc4u: goto label_3d9fc4;
        case 0x3d9fc8u: goto label_3d9fc8;
        case 0x3d9fccu: goto label_3d9fcc;
        case 0x3d9fd0u: goto label_3d9fd0;
        case 0x3d9fd4u: goto label_3d9fd4;
        case 0x3d9fd8u: goto label_3d9fd8;
        case 0x3d9fdcu: goto label_3d9fdc;
        case 0x3d9fe0u: goto label_3d9fe0;
        case 0x3d9fe4u: goto label_3d9fe4;
        case 0x3d9fe8u: goto label_3d9fe8;
        case 0x3d9fecu: goto label_3d9fec;
        case 0x3d9ff0u: goto label_3d9ff0;
        case 0x3d9ff4u: goto label_3d9ff4;
        case 0x3d9ff8u: goto label_3d9ff8;
        case 0x3d9ffcu: goto label_3d9ffc;
        case 0x3da000u: goto label_3da000;
        case 0x3da004u: goto label_3da004;
        case 0x3da008u: goto label_3da008;
        case 0x3da00cu: goto label_3da00c;
        case 0x3da010u: goto label_3da010;
        case 0x3da014u: goto label_3da014;
        case 0x3da018u: goto label_3da018;
        case 0x3da01cu: goto label_3da01c;
        case 0x3da020u: goto label_3da020;
        case 0x3da024u: goto label_3da024;
        case 0x3da028u: goto label_3da028;
        case 0x3da02cu: goto label_3da02c;
        case 0x3da030u: goto label_3da030;
        case 0x3da034u: goto label_3da034;
        case 0x3da038u: goto label_3da038;
        case 0x3da03cu: goto label_3da03c;
        case 0x3da040u: goto label_3da040;
        case 0x3da044u: goto label_3da044;
        case 0x3da048u: goto label_3da048;
        case 0x3da04cu: goto label_3da04c;
        case 0x3da050u: goto label_3da050;
        case 0x3da054u: goto label_3da054;
        case 0x3da058u: goto label_3da058;
        case 0x3da05cu: goto label_3da05c;
        case 0x3da060u: goto label_3da060;
        case 0x3da064u: goto label_3da064;
        case 0x3da068u: goto label_3da068;
        case 0x3da06cu: goto label_3da06c;
        case 0x3da070u: goto label_3da070;
        case 0x3da074u: goto label_3da074;
        case 0x3da078u: goto label_3da078;
        case 0x3da07cu: goto label_3da07c;
        case 0x3da080u: goto label_3da080;
        case 0x3da084u: goto label_3da084;
        case 0x3da088u: goto label_3da088;
        case 0x3da08cu: goto label_3da08c;
        default: break;
    }

    ctx->pc = 0x3d9c10u;

label_3d9c10:
    // 0x3d9c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d9c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d9c14:
    // 0x3d9c14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d9c18:
    // 0x3d9c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d9c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d9c1c:
    // 0x3d9c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d9c20:
    // 0x3d9c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d9c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9c24:
    // 0x3d9c24: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3d9c28:
    if (ctx->pc == 0x3D9C28u) {
        ctx->pc = 0x3D9C28u;
            // 0x3d9c28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9C2Cu;
        goto label_3d9c2c;
    }
    ctx->pc = 0x3D9C24u;
    {
        const bool branch_taken_0x3d9c24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9C24u;
            // 0x3d9c28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9c24) {
            ctx->pc = 0x3D9D58u;
            goto label_3d9d58;
        }
    }
    ctx->pc = 0x3D9C2Cu;
label_3d9c2c:
    // 0x3d9c2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d9c30:
    // 0x3d9c30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d9c34:
    // 0x3d9c34: 0x24639840  addiu       $v1, $v1, -0x67C0
    ctx->pc = 0x3d9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940736));
label_3d9c38:
    // 0x3d9c38: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d9c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d9c3c:
    // 0x3d9c3c: 0x24429878  addiu       $v0, $v0, -0x6788
    ctx->pc = 0x3d9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940792));
label_3d9c40:
    // 0x3d9c40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d9c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d9c44:
    // 0x3d9c44: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3d9c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3d9c48:
    // 0x3d9c48: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3d9c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3d9c4c:
    // 0x3d9c4c: 0xc0407c0  jal         func_101F00
label_3d9c50:
    if (ctx->pc == 0x3D9C50u) {
        ctx->pc = 0x3D9C50u;
            // 0x3d9c50: 0x24a59d70  addiu       $a1, $a1, -0x6290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
        ctx->pc = 0x3D9C54u;
        goto label_3d9c54;
    }
    ctx->pc = 0x3D9C4Cu;
    SET_GPR_U32(ctx, 31, 0x3D9C54u);
    ctx->pc = 0x3D9C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9C4Cu;
            // 0x3d9c50: 0x24a59d70  addiu       $a1, $a1, -0x6290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9C54u; }
        if (ctx->pc != 0x3D9C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9C54u; }
        if (ctx->pc != 0x3D9C54u) { return; }
    }
    ctx->pc = 0x3D9C54u;
label_3d9c54:
    // 0x3d9c54: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3d9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3d9c58:
    // 0x3d9c58: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3d9c5c:
    if (ctx->pc == 0x3D9C5Cu) {
        ctx->pc = 0x3D9C5Cu;
            // 0x3d9c5c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3D9C60u;
        goto label_3d9c60;
    }
    ctx->pc = 0x3D9C58u;
    {
        const bool branch_taken_0x3d9c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c58) {
            ctx->pc = 0x3D9C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9C58u;
            // 0x3d9c5c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9C6Cu;
            goto label_3d9c6c;
        }
    }
    ctx->pc = 0x3D9C60u;
label_3d9c60:
    // 0x3d9c60: 0xc07507c  jal         func_1D41F0
label_3d9c64:
    if (ctx->pc == 0x3D9C64u) {
        ctx->pc = 0x3D9C64u;
            // 0x3d9c64: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3D9C68u;
        goto label_3d9c68;
    }
    ctx->pc = 0x3D9C60u;
    SET_GPR_U32(ctx, 31, 0x3D9C68u);
    ctx->pc = 0x3D9C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9C60u;
            // 0x3d9c64: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9C68u; }
        if (ctx->pc != 0x3D9C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9C68u; }
        if (ctx->pc != 0x3D9C68u) { return; }
    }
    ctx->pc = 0x3D9C68u;
label_3d9c68:
    // 0x3d9c68: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3d9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3d9c6c:
    // 0x3d9c6c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3d9c70:
    if (ctx->pc == 0x3D9C70u) {
        ctx->pc = 0x3D9C70u;
            // 0x3d9c70: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3D9C74u;
        goto label_3d9c74;
    }
    ctx->pc = 0x3D9C6Cu;
    {
        const bool branch_taken_0x3d9c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c6c) {
            ctx->pc = 0x3D9C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9C6Cu;
            // 0x3d9c70: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9C9Cu;
            goto label_3d9c9c;
        }
    }
    ctx->pc = 0x3D9C74u;
label_3d9c74:
    // 0x3d9c74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d9c78:
    if (ctx->pc == 0x3D9C78u) {
        ctx->pc = 0x3D9C7Cu;
        goto label_3d9c7c;
    }
    ctx->pc = 0x3D9C74u;
    {
        const bool branch_taken_0x3d9c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c74) {
            ctx->pc = 0x3D9C98u;
            goto label_3d9c98;
        }
    }
    ctx->pc = 0x3D9C7Cu;
label_3d9c7c:
    // 0x3d9c7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d9c80:
    if (ctx->pc == 0x3D9C80u) {
        ctx->pc = 0x3D9C84u;
        goto label_3d9c84;
    }
    ctx->pc = 0x3D9C7Cu;
    {
        const bool branch_taken_0x3d9c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c7c) {
            ctx->pc = 0x3D9C98u;
            goto label_3d9c98;
        }
    }
    ctx->pc = 0x3D9C84u;
label_3d9c84:
    // 0x3d9c84: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3d9c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3d9c88:
    // 0x3d9c88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3d9c8c:
    if (ctx->pc == 0x3D9C8Cu) {
        ctx->pc = 0x3D9C90u;
        goto label_3d9c90;
    }
    ctx->pc = 0x3D9C88u;
    {
        const bool branch_taken_0x3d9c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c88) {
            ctx->pc = 0x3D9C98u;
            goto label_3d9c98;
        }
    }
    ctx->pc = 0x3D9C90u;
label_3d9c90:
    // 0x3d9c90: 0xc0400a8  jal         func_1002A0
label_3d9c94:
    if (ctx->pc == 0x3D9C94u) {
        ctx->pc = 0x3D9C98u;
        goto label_3d9c98;
    }
    ctx->pc = 0x3D9C90u;
    SET_GPR_U32(ctx, 31, 0x3D9C98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9C98u; }
        if (ctx->pc != 0x3D9C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9C98u; }
        if (ctx->pc != 0x3D9C98u) { return; }
    }
    ctx->pc = 0x3D9C98u;
label_3d9c98:
    // 0x3d9c98: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3d9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3d9c9c:
    // 0x3d9c9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3d9ca0:
    if (ctx->pc == 0x3D9CA0u) {
        ctx->pc = 0x3D9CA0u;
            // 0x3d9ca0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3D9CA4u;
        goto label_3d9ca4;
    }
    ctx->pc = 0x3D9C9Cu;
    {
        const bool branch_taken_0x3d9c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c9c) {
            ctx->pc = 0x3D9CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9C9Cu;
            // 0x3d9ca0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9CCCu;
            goto label_3d9ccc;
        }
    }
    ctx->pc = 0x3D9CA4u;
label_3d9ca4:
    // 0x3d9ca4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d9ca8:
    if (ctx->pc == 0x3D9CA8u) {
        ctx->pc = 0x3D9CACu;
        goto label_3d9cac;
    }
    ctx->pc = 0x3D9CA4u;
    {
        const bool branch_taken_0x3d9ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9ca4) {
            ctx->pc = 0x3D9CC8u;
            goto label_3d9cc8;
        }
    }
    ctx->pc = 0x3D9CACu;
label_3d9cac:
    // 0x3d9cac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d9cb0:
    if (ctx->pc == 0x3D9CB0u) {
        ctx->pc = 0x3D9CB4u;
        goto label_3d9cb4;
    }
    ctx->pc = 0x3D9CACu;
    {
        const bool branch_taken_0x3d9cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9cac) {
            ctx->pc = 0x3D9CC8u;
            goto label_3d9cc8;
        }
    }
    ctx->pc = 0x3D9CB4u;
label_3d9cb4:
    // 0x3d9cb4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3d9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3d9cb8:
    // 0x3d9cb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3d9cbc:
    if (ctx->pc == 0x3D9CBCu) {
        ctx->pc = 0x3D9CC0u;
        goto label_3d9cc0;
    }
    ctx->pc = 0x3D9CB8u;
    {
        const bool branch_taken_0x3d9cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9cb8) {
            ctx->pc = 0x3D9CC8u;
            goto label_3d9cc8;
        }
    }
    ctx->pc = 0x3D9CC0u;
label_3d9cc0:
    // 0x3d9cc0: 0xc0400a8  jal         func_1002A0
label_3d9cc4:
    if (ctx->pc == 0x3D9CC4u) {
        ctx->pc = 0x3D9CC8u;
        goto label_3d9cc8;
    }
    ctx->pc = 0x3D9CC0u;
    SET_GPR_U32(ctx, 31, 0x3D9CC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9CC8u; }
        if (ctx->pc != 0x3D9CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9CC8u; }
        if (ctx->pc != 0x3D9CC8u) { return; }
    }
    ctx->pc = 0x3D9CC8u;
label_3d9cc8:
    // 0x3d9cc8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3d9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3d9ccc:
    // 0x3d9ccc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d9cd0:
    if (ctx->pc == 0x3D9CD0u) {
        ctx->pc = 0x3D9CD4u;
        goto label_3d9cd4;
    }
    ctx->pc = 0x3D9CCCu;
    {
        const bool branch_taken_0x3d9ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9ccc) {
            ctx->pc = 0x3D9CE8u;
            goto label_3d9ce8;
        }
    }
    ctx->pc = 0x3D9CD4u;
label_3d9cd4:
    // 0x3d9cd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d9cd8:
    // 0x3d9cd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d9cdc:
    // 0x3d9cdc: 0x24639830  addiu       $v1, $v1, -0x67D0
    ctx->pc = 0x3d9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940720));
label_3d9ce0:
    // 0x3d9ce0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3d9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3d9ce4:
    // 0x3d9ce4: 0xac4065a0  sw          $zero, 0x65A0($v0)
    ctx->pc = 0x3d9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26016), GPR_U32(ctx, 0));
label_3d9ce8:
    // 0x3d9ce8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3d9cec:
    if (ctx->pc == 0x3D9CECu) {
        ctx->pc = 0x3D9CECu;
            // 0x3d9cec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3D9CF0u;
        goto label_3d9cf0;
    }
    ctx->pc = 0x3D9CE8u;
    {
        const bool branch_taken_0x3d9ce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9ce8) {
            ctx->pc = 0x3D9CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9CE8u;
            // 0x3d9cec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9D44u;
            goto label_3d9d44;
        }
    }
    ctx->pc = 0x3D9CF0u;
label_3d9cf0:
    // 0x3d9cf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9cf4:
    // 0x3d9cf4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3d9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3d9cf8:
    // 0x3d9cf8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d9cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d9cfc:
    // 0x3d9cfc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3d9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3d9d00:
    // 0x3d9d00: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d9d04:
    if (ctx->pc == 0x3D9D04u) {
        ctx->pc = 0x3D9D04u;
            // 0x3d9d04: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3D9D08u;
        goto label_3d9d08;
    }
    ctx->pc = 0x3D9D00u;
    {
        const bool branch_taken_0x3d9d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d00) {
            ctx->pc = 0x3D9D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D00u;
            // 0x3d9d04: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9D1Cu;
            goto label_3d9d1c;
        }
    }
    ctx->pc = 0x3D9D08u;
label_3d9d08:
    // 0x3d9d08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d9d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9d0c:
    // 0x3d9d0c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d9d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d9d10:
    // 0x3d9d10: 0x320f809  jalr        $t9
label_3d9d14:
    if (ctx->pc == 0x3D9D14u) {
        ctx->pc = 0x3D9D14u;
            // 0x3d9d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D9D18u;
        goto label_3d9d18;
    }
    ctx->pc = 0x3D9D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9D18u);
        ctx->pc = 0x3D9D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D10u;
            // 0x3d9d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9D18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9D18u; }
            if (ctx->pc != 0x3D9D18u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9D18u;
label_3d9d18:
    // 0x3d9d18: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3d9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3d9d1c:
    // 0x3d9d1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d9d20:
    if (ctx->pc == 0x3D9D20u) {
        ctx->pc = 0x3D9D20u;
            // 0x3d9d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D24u;
        goto label_3d9d24;
    }
    ctx->pc = 0x3D9D1Cu;
    {
        const bool branch_taken_0x3d9d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d1c) {
            ctx->pc = 0x3D9D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D1Cu;
            // 0x3d9d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9D38u;
            goto label_3d9d38;
        }
    }
    ctx->pc = 0x3D9D24u;
label_3d9d24:
    // 0x3d9d24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d9d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9d28:
    // 0x3d9d28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d9d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d9d2c:
    // 0x3d9d2c: 0x320f809  jalr        $t9
label_3d9d30:
    if (ctx->pc == 0x3D9D30u) {
        ctx->pc = 0x3D9D30u;
            // 0x3d9d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D9D34u;
        goto label_3d9d34;
    }
    ctx->pc = 0x3D9D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9D34u);
        ctx->pc = 0x3D9D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D2Cu;
            // 0x3d9d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9D34u; }
            if (ctx->pc != 0x3D9D34u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9D34u;
label_3d9d34:
    // 0x3d9d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9d38:
    // 0x3d9d38: 0xc075bf8  jal         func_1D6FE0
label_3d9d3c:
    if (ctx->pc == 0x3D9D3Cu) {
        ctx->pc = 0x3D9D3Cu;
            // 0x3d9d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D40u;
        goto label_3d9d40;
    }
    ctx->pc = 0x3D9D38u;
    SET_GPR_U32(ctx, 31, 0x3D9D40u);
    ctx->pc = 0x3D9D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D38u;
            // 0x3d9d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9D40u; }
        if (ctx->pc != 0x3D9D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9D40u; }
        if (ctx->pc != 0x3D9D40u) { return; }
    }
    ctx->pc = 0x3D9D40u;
label_3d9d40:
    // 0x3d9d40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d9d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d9d44:
    // 0x3d9d44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d9d44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d9d48:
    // 0x3d9d48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d9d4c:
    if (ctx->pc == 0x3D9D4Cu) {
        ctx->pc = 0x3D9D4Cu;
            // 0x3d9d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D50u;
        goto label_3d9d50;
    }
    ctx->pc = 0x3D9D48u;
    {
        const bool branch_taken_0x3d9d48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d9d48) {
            ctx->pc = 0x3D9D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D48u;
            // 0x3d9d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9D5Cu;
            goto label_3d9d5c;
        }
    }
    ctx->pc = 0x3D9D50u;
label_3d9d50:
    // 0x3d9d50: 0xc0400a8  jal         func_1002A0
label_3d9d54:
    if (ctx->pc == 0x3D9D54u) {
        ctx->pc = 0x3D9D54u;
            // 0x3d9d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D58u;
        goto label_3d9d58;
    }
    ctx->pc = 0x3D9D50u;
    SET_GPR_U32(ctx, 31, 0x3D9D58u);
    ctx->pc = 0x3D9D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D50u;
            // 0x3d9d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9D58u; }
        if (ctx->pc != 0x3D9D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9D58u; }
        if (ctx->pc != 0x3D9D58u) { return; }
    }
    ctx->pc = 0x3D9D58u;
label_3d9d58:
    // 0x3d9d58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d9d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9d5c:
    // 0x3d9d5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d9d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9d60:
    // 0x3d9d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d9d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9d64:
    // 0x3d9d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9d68:
    // 0x3d9d68: 0x3e00008  jr          $ra
label_3d9d6c:
    if (ctx->pc == 0x3D9D6Cu) {
        ctx->pc = 0x3D9D6Cu;
            // 0x3d9d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D9D70u;
        goto label_3d9d70;
    }
    ctx->pc = 0x3D9D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D68u;
            // 0x3d9d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D9D70u;
label_3d9d70:
    // 0x3d9d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d9d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d9d74:
    // 0x3d9d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d9d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d9d78:
    // 0x3d9d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d9d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d9d7c:
    // 0x3d9d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d9d80:
    // 0x3d9d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d9d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9d84:
    // 0x3d9d84: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_3d9d88:
    if (ctx->pc == 0x3D9D88u) {
        ctx->pc = 0x3D9D88u;
            // 0x3d9d88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D8Cu;
        goto label_3d9d8c;
    }
    ctx->pc = 0x3D9D84u;
    {
        const bool branch_taken_0x3d9d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9D84u;
            // 0x3d9d88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d84) {
            ctx->pc = 0x3D9EA0u;
            goto label_3d9ea0;
        }
    }
    ctx->pc = 0x3D9D8Cu;
label_3d9d8c:
    // 0x3d9d8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d9d90:
    // 0x3d9d90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d9d94:
    // 0x3d9d94: 0x246397e0  addiu       $v1, $v1, -0x6820
    ctx->pc = 0x3d9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940640));
label_3d9d98:
    // 0x3d9d98: 0x24429820  addiu       $v0, $v0, -0x67E0
    ctx->pc = 0x3d9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940704));
label_3d9d9c:
    // 0x3d9d9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d9d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d9da0:
    // 0x3d9da0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d9da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d9da4:
    // 0x3d9da4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d9da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9da8:
    // 0x3d9da8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3d9da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3d9dac:
    // 0x3d9dac: 0x320f809  jalr        $t9
label_3d9db0:
    if (ctx->pc == 0x3D9DB0u) {
        ctx->pc = 0x3D9DB4u;
        goto label_3d9db4;
    }
    ctx->pc = 0x3D9DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9DB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9DB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9DB4u; }
            if (ctx->pc != 0x3D9DB4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9DB4u;
label_3d9db4:
    // 0x3d9db4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x3d9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_3d9db8:
    // 0x3d9db8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_3d9dbc:
    if (ctx->pc == 0x3D9DBCu) {
        ctx->pc = 0x3D9DC0u;
        goto label_3d9dc0;
    }
    ctx->pc = 0x3D9DB8u;
    {
        const bool branch_taken_0x3d9db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9db8) {
            ctx->pc = 0x3D9E08u;
            goto label_3d9e08;
        }
    }
    ctx->pc = 0x3D9DC0u;
label_3d9dc0:
    // 0x3d9dc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d9dc4:
    // 0x3d9dc4: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x3d9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
label_3d9dc8:
    // 0x3d9dc8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_3d9dcc:
    if (ctx->pc == 0x3D9DCCu) {
        ctx->pc = 0x3D9DCCu;
            // 0x3d9dcc: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x3D9DD0u;
        goto label_3d9dd0;
    }
    ctx->pc = 0x3D9DC8u;
    {
        const bool branch_taken_0x3d9dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9DC8u;
            // 0x3d9dcc: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9dc8) {
            ctx->pc = 0x3D9E08u;
            goto label_3d9e08;
        }
    }
    ctx->pc = 0x3D9DD0u;
label_3d9dd0:
    // 0x3d9dd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9dd4:
    // 0x3d9dd4: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3d9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_3d9dd8:
    // 0x3d9dd8: 0xc0d37dc  jal         func_34DF70
label_3d9ddc:
    if (ctx->pc == 0x3D9DDCu) {
        ctx->pc = 0x3D9DDCu;
            // 0x3d9ddc: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x3D9DE0u;
        goto label_3d9de0;
    }
    ctx->pc = 0x3D9DD8u;
    SET_GPR_U32(ctx, 31, 0x3D9DE0u);
    ctx->pc = 0x3D9DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9DD8u;
            // 0x3d9ddc: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9DE0u; }
        if (ctx->pc != 0x3D9DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9DE0u; }
        if (ctx->pc != 0x3D9DE0u) { return; }
    }
    ctx->pc = 0x3D9DE0u;
label_3d9de0:
    // 0x3d9de0: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x3d9de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_3d9de4:
    // 0x3d9de4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3d9de8:
    if (ctx->pc == 0x3D9DE8u) {
        ctx->pc = 0x3D9DECu;
        goto label_3d9dec;
    }
    ctx->pc = 0x3D9DE4u;
    {
        const bool branch_taken_0x3d9de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9de4) {
            ctx->pc = 0x3D9E08u;
            goto label_3d9e08;
        }
    }
    ctx->pc = 0x3D9DECu;
label_3d9dec:
    // 0x3d9dec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9df0:
    // 0x3d9df0: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3d9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_3d9df4:
    // 0x3d9df4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d9df8:
    if (ctx->pc == 0x3D9DF8u) {
        ctx->pc = 0x3D9DF8u;
            // 0x3d9df8: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x3D9DFCu;
        goto label_3d9dfc;
    }
    ctx->pc = 0x3D9DF4u;
    {
        const bool branch_taken_0x3d9df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9DF4u;
            // 0x3d9df8: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9df4) {
            ctx->pc = 0x3D9E08u;
            goto label_3d9e08;
        }
    }
    ctx->pc = 0x3D9DFCu;
label_3d9dfc:
    // 0x3d9dfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9e00:
    // 0x3d9e00: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3d9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3d9e04:
    // 0x3d9e04: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x3d9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_3d9e08:
    // 0x3d9e08: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_3d9e0c:
    if (ctx->pc == 0x3D9E0Cu) {
        ctx->pc = 0x3D9E0Cu;
            // 0x3d9e0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3D9E10u;
        goto label_3d9e10;
    }
    ctx->pc = 0x3D9E08u;
    {
        const bool branch_taken_0x3d9e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9e08) {
            ctx->pc = 0x3D9E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9E08u;
            // 0x3d9e0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9E8Cu;
            goto label_3d9e8c;
        }
    }
    ctx->pc = 0x3D9E10u;
label_3d9e10:
    // 0x3d9e10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9e14:
    // 0x3d9e14: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d9e18:
    // 0x3d9e18: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x3d9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_3d9e1c:
    // 0x3d9e1c: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x3d9e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_3d9e20:
    // 0x3d9e20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d9e24:
    // 0x3d9e24: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x3d9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3d9e28:
    // 0x3d9e28: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3d9e2c:
    if (ctx->pc == 0x3D9E2Cu) {
        ctx->pc = 0x3D9E2Cu;
            // 0x3d9e2c: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x3D9E30u;
        goto label_3d9e30;
    }
    ctx->pc = 0x3D9E28u;
    {
        const bool branch_taken_0x3d9e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9E28u;
            // 0x3d9e2c: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e28) {
            ctx->pc = 0x3D9E64u;
            goto label_3d9e64;
        }
    }
    ctx->pc = 0x3D9E30u;
label_3d9e30:
    // 0x3d9e30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9e34:
    // 0x3d9e34: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x3d9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_3d9e38:
    // 0x3d9e38: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d9e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d9e3c:
    // 0x3d9e3c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3d9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3d9e40:
    // 0x3d9e40: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3d9e44:
    if (ctx->pc == 0x3D9E44u) {
        ctx->pc = 0x3D9E48u;
        goto label_3d9e48;
    }
    ctx->pc = 0x3D9E40u;
    {
        const bool branch_taken_0x3d9e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9e40) {
            ctx->pc = 0x3D9E64u;
            goto label_3d9e64;
        }
    }
    ctx->pc = 0x3D9E48u;
label_3d9e48:
    // 0x3d9e48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d9e4c:
    if (ctx->pc == 0x3D9E4Cu) {
        ctx->pc = 0x3D9E4Cu;
            // 0x3d9e4c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3D9E50u;
        goto label_3d9e50;
    }
    ctx->pc = 0x3D9E48u;
    {
        const bool branch_taken_0x3d9e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9e48) {
            ctx->pc = 0x3D9E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9E48u;
            // 0x3d9e4c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9E64u;
            goto label_3d9e64;
        }
    }
    ctx->pc = 0x3D9E50u;
label_3d9e50:
    // 0x3d9e50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d9e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9e54:
    // 0x3d9e54: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d9e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d9e58:
    // 0x3d9e58: 0x320f809  jalr        $t9
label_3d9e5c:
    if (ctx->pc == 0x3D9E5Cu) {
        ctx->pc = 0x3D9E5Cu;
            // 0x3d9e5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D9E60u;
        goto label_3d9e60;
    }
    ctx->pc = 0x3D9E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9E60u);
        ctx->pc = 0x3D9E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9E58u;
            // 0x3d9e5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9E60u; }
            if (ctx->pc != 0x3D9E60u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9E60u;
label_3d9e60:
    // 0x3d9e60: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3d9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_3d9e64:
    // 0x3d9e64: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3d9e68:
    if (ctx->pc == 0x3D9E68u) {
        ctx->pc = 0x3D9E6Cu;
        goto label_3d9e6c;
    }
    ctx->pc = 0x3D9E64u;
    {
        const bool branch_taken_0x3d9e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9e64) {
            ctx->pc = 0x3D9E88u;
            goto label_3d9e88;
        }
    }
    ctx->pc = 0x3D9E6Cu;
label_3d9e6c:
    // 0x3d9e6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9e70:
    // 0x3d9e70: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3d9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3d9e74:
    // 0x3d9e74: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3d9e78:
    if (ctx->pc == 0x3D9E78u) {
        ctx->pc = 0x3D9E78u;
            // 0x3d9e78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3D9E7Cu;
        goto label_3d9e7c;
    }
    ctx->pc = 0x3D9E74u;
    {
        const bool branch_taken_0x3d9e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9E74u;
            // 0x3d9e78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e74) {
            ctx->pc = 0x3D9E88u;
            goto label_3d9e88;
        }
    }
    ctx->pc = 0x3D9E7Cu;
label_3d9e7c:
    // 0x3d9e7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9e80:
    // 0x3d9e80: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3d9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3d9e84:
    // 0x3d9e84: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d9e88:
    // 0x3d9e88: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d9e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d9e8c:
    // 0x3d9e8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d9e8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d9e90:
    // 0x3d9e90: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d9e94:
    if (ctx->pc == 0x3D9E94u) {
        ctx->pc = 0x3D9E94u;
            // 0x3d9e94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E98u;
        goto label_3d9e98;
    }
    ctx->pc = 0x3D9E90u;
    {
        const bool branch_taken_0x3d9e90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d9e90) {
            ctx->pc = 0x3D9E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9E90u;
            // 0x3d9e94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9EA4u;
            goto label_3d9ea4;
        }
    }
    ctx->pc = 0x3D9E98u;
label_3d9e98:
    // 0x3d9e98: 0xc0400a8  jal         func_1002A0
label_3d9e9c:
    if (ctx->pc == 0x3D9E9Cu) {
        ctx->pc = 0x3D9E9Cu;
            // 0x3d9e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9EA0u;
        goto label_3d9ea0;
    }
    ctx->pc = 0x3D9E98u;
    SET_GPR_U32(ctx, 31, 0x3D9EA0u);
    ctx->pc = 0x3D9E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9E98u;
            // 0x3d9e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9EA0u; }
        if (ctx->pc != 0x3D9EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9EA0u; }
        if (ctx->pc != 0x3D9EA0u) { return; }
    }
    ctx->pc = 0x3D9EA0u;
label_3d9ea0:
    // 0x3d9ea0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d9ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9ea4:
    // 0x3d9ea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d9ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9ea8:
    // 0x3d9ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d9ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9eac:
    // 0x3d9eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9eb0:
    // 0x3d9eb0: 0x3e00008  jr          $ra
label_3d9eb4:
    if (ctx->pc == 0x3D9EB4u) {
        ctx->pc = 0x3D9EB4u;
            // 0x3d9eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D9EB8u;
        goto label_3d9eb8;
    }
    ctx->pc = 0x3D9EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9EB0u;
            // 0x3d9eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D9EB8u;
label_3d9eb8:
    // 0x3d9eb8: 0x0  nop
    ctx->pc = 0x3d9eb8u;
    // NOP
label_3d9ebc:
    // 0x3d9ebc: 0x0  nop
    ctx->pc = 0x3d9ebcu;
    // NOP
label_3d9ec0:
    // 0x3d9ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d9ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d9ec4:
    // 0x3d9ec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d9ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d9ec8:
    // 0x3d9ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d9ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d9ecc:
    // 0x3d9ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d9ed0:
    // 0x3d9ed0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d9ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9ed4:
    // 0x3d9ed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d9ed8:
    // 0x3d9ed8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d9ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9edc:
    // 0x3d9edc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3d9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3d9ee0:
    // 0x3d9ee0: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_3d9ee4:
    if (ctx->pc == 0x3D9EE4u) {
        ctx->pc = 0x3D9EE4u;
            // 0x3d9ee4: 0x26500084  addiu       $s0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x3D9EE8u;
        goto label_3d9ee8;
    }
    ctx->pc = 0x3D9EE0u;
    {
        const bool branch_taken_0x3d9ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9EE0u;
            // 0x3d9ee4: 0x26500084  addiu       $s0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ee0) {
            ctx->pc = 0x3DA06Cu;
            goto label_3da06c;
        }
    }
    ctx->pc = 0x3D9EE8u;
label_3d9ee8:
    // 0x3d9ee8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d9eec:
    // 0x3d9eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9ef0:
    // 0x3d9ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d9ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9ef4:
    // 0x3d9ef4: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3d9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3d9ef8:
    // 0x3d9ef8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3d9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3d9efc:
    // 0x3d9efc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3d9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3d9f00:
    // 0x3d9f00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d9f04:
    // 0x3d9f04: 0xc074f30  jal         func_1D3CC0
label_3d9f08:
    if (ctx->pc == 0x3D9F08u) {
        ctx->pc = 0x3D9F08u;
            // 0x3d9f08: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3D9F0Cu;
        goto label_3d9f0c;
    }
    ctx->pc = 0x3D9F04u;
    SET_GPR_U32(ctx, 31, 0x3D9F0Cu);
    ctx->pc = 0x3D9F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9F04u;
            // 0x3d9f08: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9F0Cu; }
        if (ctx->pc != 0x3D9F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9F0Cu; }
        if (ctx->pc != 0x3D9F0Cu) { return; }
    }
    ctx->pc = 0x3D9F0Cu;
label_3d9f0c:
    // 0x3d9f0c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3d9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3d9f10:
    // 0x3d9f10: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3d9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3d9f14:
    // 0x3d9f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d9f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f18:
    // 0x3d9f18: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x3d9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3d9f1c:
    // 0x3d9f1c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3d9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3d9f20:
    // 0x3d9f20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d9f24:
    // 0x3d9f24: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3d9f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3d9f28:
    // 0x3d9f28: 0xc0751b8  jal         func_1D46E0
label_3d9f2c:
    if (ctx->pc == 0x3D9F2Cu) {
        ctx->pc = 0x3D9F2Cu;
            // 0x3d9f2c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3D9F30u;
        goto label_3d9f30;
    }
    ctx->pc = 0x3D9F28u;
    SET_GPR_U32(ctx, 31, 0x3D9F30u);
    ctx->pc = 0x3D9F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9F28u;
            // 0x3d9f2c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9F30u; }
        if (ctx->pc != 0x3D9F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9F30u; }
        if (ctx->pc != 0x3D9F30u) { return; }
    }
    ctx->pc = 0x3D9F30u;
label_3d9f30:
    // 0x3d9f30: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3d9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3d9f34:
    // 0x3d9f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f38:
    // 0x3d9f38: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3d9f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d9f3c:
    // 0x3d9f3c: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x3d9f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3d9f40:
    // 0x3d9f40: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x3d9f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3d9f44:
    // 0x3d9f44: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x3d9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3d9f48:
    // 0x3d9f48: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3d9f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3d9f4c:
    // 0x3d9f4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d9f50:
    // 0x3d9f50: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3d9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3d9f54:
    // 0x3d9f54: 0xc075188  jal         func_1D4620
label_3d9f58:
    if (ctx->pc == 0x3D9F58u) {
        ctx->pc = 0x3D9F58u;
            // 0x3d9f58: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3D9F5Cu;
        goto label_3d9f5c;
    }
    ctx->pc = 0x3D9F54u;
    SET_GPR_U32(ctx, 31, 0x3D9F5Cu);
    ctx->pc = 0x3D9F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9F54u;
            // 0x3d9f58: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9F5Cu; }
        if (ctx->pc != 0x3D9F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9F5Cu; }
        if (ctx->pc != 0x3D9F5Cu) { return; }
    }
    ctx->pc = 0x3D9F5Cu;
label_3d9f5c:
    // 0x3d9f5c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3d9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3d9f60:
    // 0x3d9f60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9f64:
    // 0x3d9f64: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3d9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3d9f68:
    // 0x3d9f68: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x3d9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_3d9f6c:
    // 0x3d9f6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d9f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9f70:
    // 0x3d9f70: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3d9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3d9f74:
    // 0x3d9f74: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3d9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3d9f78:
    // 0x3d9f78: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d9f78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d9f7c:
    // 0x3d9f7c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d9f80:
    if (ctx->pc == 0x3D9F80u) {
        ctx->pc = 0x3D9F80u;
            // 0x3d9f80: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3D9F84u;
        goto label_3d9f84;
    }
    ctx->pc = 0x3D9F7Cu;
    {
        const bool branch_taken_0x3d9f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9f7c) {
            ctx->pc = 0x3D9F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9F7Cu;
            // 0x3d9f80: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9F90u;
            goto label_3d9f90;
        }
    }
    ctx->pc = 0x3D9F84u;
label_3d9f84:
    // 0x3d9f84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9f88:
    // 0x3d9f88: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3d9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3d9f8c:
    // 0x3d9f8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9f90:
    // 0x3d9f90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9f94:
    // 0x3d9f94: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3d9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3d9f98:
    // 0x3d9f98: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3d9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3d9f9c:
    // 0x3d9f9c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d9f9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d9fa0:
    // 0x3d9fa0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d9fa4:
    if (ctx->pc == 0x3D9FA4u) {
        ctx->pc = 0x3D9FA4u;
            // 0x3d9fa4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3D9FA8u;
        goto label_3d9fa8;
    }
    ctx->pc = 0x3D9FA0u;
    {
        const bool branch_taken_0x3d9fa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9fa0) {
            ctx->pc = 0x3D9FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9FA0u;
            // 0x3d9fa4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9FB4u;
            goto label_3d9fb4;
        }
    }
    ctx->pc = 0x3D9FA8u;
label_3d9fa8:
    // 0x3d9fa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9fac:
    // 0x3d9fac: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3d9facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3d9fb0:
    // 0x3d9fb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d9fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9fb4:
    // 0x3d9fb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9fb8:
    // 0x3d9fb8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3d9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3d9fbc:
    // 0x3d9fbc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3d9fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3d9fc0:
    // 0x3d9fc0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d9fc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d9fc4:
    // 0x3d9fc4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d9fc8:
    if (ctx->pc == 0x3D9FC8u) {
        ctx->pc = 0x3D9FC8u;
            // 0x3d9fc8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3D9FCCu;
        goto label_3d9fcc;
    }
    ctx->pc = 0x3D9FC4u;
    {
        const bool branch_taken_0x3d9fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9fc4) {
            ctx->pc = 0x3D9FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9FC4u;
            // 0x3d9fc8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9FD8u;
            goto label_3d9fd8;
        }
    }
    ctx->pc = 0x3D9FCCu;
label_3d9fcc:
    // 0x3d9fcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9fd0:
    // 0x3d9fd0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3d9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3d9fd4:
    // 0x3d9fd4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3d9fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9fd8:
    // 0x3d9fd8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d9fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d9fdc:
    // 0x3d9fdc: 0x320f809  jalr        $t9
label_3d9fe0:
    if (ctx->pc == 0x3D9FE0u) {
        ctx->pc = 0x3D9FE0u;
            // 0x3d9fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9FE4u;
        goto label_3d9fe4;
    }
    ctx->pc = 0x3D9FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9FE4u);
        ctx->pc = 0x3D9FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9FDCu;
            // 0x3d9fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9FE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9FE4u; }
            if (ctx->pc != 0x3D9FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9FE4u;
label_3d9fe4:
    // 0x3d9fe4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d9fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9fe8:
    // 0x3d9fe8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d9fec:
    // 0x3d9fec: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3d9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3d9ff0:
    // 0x3d9ff0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3d9ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3d9ff4:
    // 0x3d9ff4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3d9ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d9ff8:
    // 0x3d9ff8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3d9ff8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3d9ffc:
    // 0x3d9ffc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3da000:
    if (ctx->pc == 0x3DA000u) {
        ctx->pc = 0x3DA000u;
            // 0x3da000: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3DA004u;
        goto label_3da004;
    }
    ctx->pc = 0x3D9FFCu;
    {
        const bool branch_taken_0x3d9ffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9ffc) {
            ctx->pc = 0x3DA000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9FFCu;
            // 0x3da000: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA010u;
            goto label_3da010;
        }
    }
    ctx->pc = 0x3DA004u;
label_3da004:
    // 0x3da004: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3da004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3da008:
    // 0x3da008: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3da008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3da00c:
    // 0x3da00c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3da00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3da010:
    // 0x3da010: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3da010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3da014:
    // 0x3da014: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3da014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3da018:
    // 0x3da018: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3da018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3da01c:
    // 0x3da01c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3da01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3da020:
    // 0x3da020: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3da020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3da024:
    // 0x3da024: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3da028:
    if (ctx->pc == 0x3DA028u) {
        ctx->pc = 0x3DA02Cu;
        goto label_3da02c;
    }
    ctx->pc = 0x3DA024u;
    {
        const bool branch_taken_0x3da024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da024) {
            ctx->pc = 0x3DA034u;
            goto label_3da034;
        }
    }
    ctx->pc = 0x3DA02Cu;
label_3da02c:
    // 0x3da02c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3da02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3da030:
    // 0x3da030: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3da030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3da034:
    // 0x3da034: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3da034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3da038:
    // 0x3da038: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3da038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3da03c:
    // 0x3da03c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3da03cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3da040:
    // 0x3da040: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3da044:
    if (ctx->pc == 0x3DA044u) {
        ctx->pc = 0x3DA048u;
        goto label_3da048;
    }
    ctx->pc = 0x3DA040u;
    {
        const bool branch_taken_0x3da040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da040) {
            ctx->pc = 0x3DA050u;
            goto label_3da050;
        }
    }
    ctx->pc = 0x3DA048u;
label_3da048:
    // 0x3da048: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3da048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3da04c:
    // 0x3da04c: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3da04cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3da050:
    // 0x3da050: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3da050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3da054:
    // 0x3da054: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3da054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3da058:
    // 0x3da058: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3da058u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3da05c:
    // 0x3da05c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3da060:
    if (ctx->pc == 0x3DA060u) {
        ctx->pc = 0x3DA060u;
            // 0x3da060: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3DA064u;
        goto label_3da064;
    }
    ctx->pc = 0x3DA05Cu;
    {
        const bool branch_taken_0x3da05c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da05c) {
            ctx->pc = 0x3DA060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA05Cu;
            // 0x3da060: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA070u;
            goto label_3da070;
        }
    }
    ctx->pc = 0x3DA064u;
label_3da064:
    // 0x3da064: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3da064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3da068:
    // 0x3da068: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3da068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3da06c:
    // 0x3da06c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3da06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3da070:
    // 0x3da070: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3da070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da074:
    // 0x3da074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3da078:
    // 0x3da078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3da07c:
    // 0x3da07c: 0x3e00008  jr          $ra
label_3da080:
    if (ctx->pc == 0x3DA080u) {
        ctx->pc = 0x3DA080u;
            // 0x3da080: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3DA084u;
        goto label_3da084;
    }
    ctx->pc = 0x3DA07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA07Cu;
            // 0x3da080: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA084u;
label_3da084:
    // 0x3da084: 0x0  nop
    ctx->pc = 0x3da084u;
    // NOP
label_3da088:
    // 0x3da088: 0x0  nop
    ctx->pc = 0x3da088u;
    // NOP
label_3da08c:
    // 0x3da08c: 0x0  nop
    ctx->pc = 0x3da08cu;
    // NOP
}
