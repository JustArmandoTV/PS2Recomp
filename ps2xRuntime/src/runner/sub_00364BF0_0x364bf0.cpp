#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00364BF0
// Address: 0x364bf0 - 0x365180
void sub_00364BF0_0x364bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364BF0_0x364bf0");
#endif

    switch (ctx->pc) {
        case 0x364bf0u: goto label_364bf0;
        case 0x364bf4u: goto label_364bf4;
        case 0x364bf8u: goto label_364bf8;
        case 0x364bfcu: goto label_364bfc;
        case 0x364c00u: goto label_364c00;
        case 0x364c04u: goto label_364c04;
        case 0x364c08u: goto label_364c08;
        case 0x364c0cu: goto label_364c0c;
        case 0x364c10u: goto label_364c10;
        case 0x364c14u: goto label_364c14;
        case 0x364c18u: goto label_364c18;
        case 0x364c1cu: goto label_364c1c;
        case 0x364c20u: goto label_364c20;
        case 0x364c24u: goto label_364c24;
        case 0x364c28u: goto label_364c28;
        case 0x364c2cu: goto label_364c2c;
        case 0x364c30u: goto label_364c30;
        case 0x364c34u: goto label_364c34;
        case 0x364c38u: goto label_364c38;
        case 0x364c3cu: goto label_364c3c;
        case 0x364c40u: goto label_364c40;
        case 0x364c44u: goto label_364c44;
        case 0x364c48u: goto label_364c48;
        case 0x364c4cu: goto label_364c4c;
        case 0x364c50u: goto label_364c50;
        case 0x364c54u: goto label_364c54;
        case 0x364c58u: goto label_364c58;
        case 0x364c5cu: goto label_364c5c;
        case 0x364c60u: goto label_364c60;
        case 0x364c64u: goto label_364c64;
        case 0x364c68u: goto label_364c68;
        case 0x364c6cu: goto label_364c6c;
        case 0x364c70u: goto label_364c70;
        case 0x364c74u: goto label_364c74;
        case 0x364c78u: goto label_364c78;
        case 0x364c7cu: goto label_364c7c;
        case 0x364c80u: goto label_364c80;
        case 0x364c84u: goto label_364c84;
        case 0x364c88u: goto label_364c88;
        case 0x364c8cu: goto label_364c8c;
        case 0x364c90u: goto label_364c90;
        case 0x364c94u: goto label_364c94;
        case 0x364c98u: goto label_364c98;
        case 0x364c9cu: goto label_364c9c;
        case 0x364ca0u: goto label_364ca0;
        case 0x364ca4u: goto label_364ca4;
        case 0x364ca8u: goto label_364ca8;
        case 0x364cacu: goto label_364cac;
        case 0x364cb0u: goto label_364cb0;
        case 0x364cb4u: goto label_364cb4;
        case 0x364cb8u: goto label_364cb8;
        case 0x364cbcu: goto label_364cbc;
        case 0x364cc0u: goto label_364cc0;
        case 0x364cc4u: goto label_364cc4;
        case 0x364cc8u: goto label_364cc8;
        case 0x364cccu: goto label_364ccc;
        case 0x364cd0u: goto label_364cd0;
        case 0x364cd4u: goto label_364cd4;
        case 0x364cd8u: goto label_364cd8;
        case 0x364cdcu: goto label_364cdc;
        case 0x364ce0u: goto label_364ce0;
        case 0x364ce4u: goto label_364ce4;
        case 0x364ce8u: goto label_364ce8;
        case 0x364cecu: goto label_364cec;
        case 0x364cf0u: goto label_364cf0;
        case 0x364cf4u: goto label_364cf4;
        case 0x364cf8u: goto label_364cf8;
        case 0x364cfcu: goto label_364cfc;
        case 0x364d00u: goto label_364d00;
        case 0x364d04u: goto label_364d04;
        case 0x364d08u: goto label_364d08;
        case 0x364d0cu: goto label_364d0c;
        case 0x364d10u: goto label_364d10;
        case 0x364d14u: goto label_364d14;
        case 0x364d18u: goto label_364d18;
        case 0x364d1cu: goto label_364d1c;
        case 0x364d20u: goto label_364d20;
        case 0x364d24u: goto label_364d24;
        case 0x364d28u: goto label_364d28;
        case 0x364d2cu: goto label_364d2c;
        case 0x364d30u: goto label_364d30;
        case 0x364d34u: goto label_364d34;
        case 0x364d38u: goto label_364d38;
        case 0x364d3cu: goto label_364d3c;
        case 0x364d40u: goto label_364d40;
        case 0x364d44u: goto label_364d44;
        case 0x364d48u: goto label_364d48;
        case 0x364d4cu: goto label_364d4c;
        case 0x364d50u: goto label_364d50;
        case 0x364d54u: goto label_364d54;
        case 0x364d58u: goto label_364d58;
        case 0x364d5cu: goto label_364d5c;
        case 0x364d60u: goto label_364d60;
        case 0x364d64u: goto label_364d64;
        case 0x364d68u: goto label_364d68;
        case 0x364d6cu: goto label_364d6c;
        case 0x364d70u: goto label_364d70;
        case 0x364d74u: goto label_364d74;
        case 0x364d78u: goto label_364d78;
        case 0x364d7cu: goto label_364d7c;
        case 0x364d80u: goto label_364d80;
        case 0x364d84u: goto label_364d84;
        case 0x364d88u: goto label_364d88;
        case 0x364d8cu: goto label_364d8c;
        case 0x364d90u: goto label_364d90;
        case 0x364d94u: goto label_364d94;
        case 0x364d98u: goto label_364d98;
        case 0x364d9cu: goto label_364d9c;
        case 0x364da0u: goto label_364da0;
        case 0x364da4u: goto label_364da4;
        case 0x364da8u: goto label_364da8;
        case 0x364dacu: goto label_364dac;
        case 0x364db0u: goto label_364db0;
        case 0x364db4u: goto label_364db4;
        case 0x364db8u: goto label_364db8;
        case 0x364dbcu: goto label_364dbc;
        case 0x364dc0u: goto label_364dc0;
        case 0x364dc4u: goto label_364dc4;
        case 0x364dc8u: goto label_364dc8;
        case 0x364dccu: goto label_364dcc;
        case 0x364dd0u: goto label_364dd0;
        case 0x364dd4u: goto label_364dd4;
        case 0x364dd8u: goto label_364dd8;
        case 0x364ddcu: goto label_364ddc;
        case 0x364de0u: goto label_364de0;
        case 0x364de4u: goto label_364de4;
        case 0x364de8u: goto label_364de8;
        case 0x364decu: goto label_364dec;
        case 0x364df0u: goto label_364df0;
        case 0x364df4u: goto label_364df4;
        case 0x364df8u: goto label_364df8;
        case 0x364dfcu: goto label_364dfc;
        case 0x364e00u: goto label_364e00;
        case 0x364e04u: goto label_364e04;
        case 0x364e08u: goto label_364e08;
        case 0x364e0cu: goto label_364e0c;
        case 0x364e10u: goto label_364e10;
        case 0x364e14u: goto label_364e14;
        case 0x364e18u: goto label_364e18;
        case 0x364e1cu: goto label_364e1c;
        case 0x364e20u: goto label_364e20;
        case 0x364e24u: goto label_364e24;
        case 0x364e28u: goto label_364e28;
        case 0x364e2cu: goto label_364e2c;
        case 0x364e30u: goto label_364e30;
        case 0x364e34u: goto label_364e34;
        case 0x364e38u: goto label_364e38;
        case 0x364e3cu: goto label_364e3c;
        case 0x364e40u: goto label_364e40;
        case 0x364e44u: goto label_364e44;
        case 0x364e48u: goto label_364e48;
        case 0x364e4cu: goto label_364e4c;
        case 0x364e50u: goto label_364e50;
        case 0x364e54u: goto label_364e54;
        case 0x364e58u: goto label_364e58;
        case 0x364e5cu: goto label_364e5c;
        case 0x364e60u: goto label_364e60;
        case 0x364e64u: goto label_364e64;
        case 0x364e68u: goto label_364e68;
        case 0x364e6cu: goto label_364e6c;
        case 0x364e70u: goto label_364e70;
        case 0x364e74u: goto label_364e74;
        case 0x364e78u: goto label_364e78;
        case 0x364e7cu: goto label_364e7c;
        case 0x364e80u: goto label_364e80;
        case 0x364e84u: goto label_364e84;
        case 0x364e88u: goto label_364e88;
        case 0x364e8cu: goto label_364e8c;
        case 0x364e90u: goto label_364e90;
        case 0x364e94u: goto label_364e94;
        case 0x364e98u: goto label_364e98;
        case 0x364e9cu: goto label_364e9c;
        case 0x364ea0u: goto label_364ea0;
        case 0x364ea4u: goto label_364ea4;
        case 0x364ea8u: goto label_364ea8;
        case 0x364eacu: goto label_364eac;
        case 0x364eb0u: goto label_364eb0;
        case 0x364eb4u: goto label_364eb4;
        case 0x364eb8u: goto label_364eb8;
        case 0x364ebcu: goto label_364ebc;
        case 0x364ec0u: goto label_364ec0;
        case 0x364ec4u: goto label_364ec4;
        case 0x364ec8u: goto label_364ec8;
        case 0x364eccu: goto label_364ecc;
        case 0x364ed0u: goto label_364ed0;
        case 0x364ed4u: goto label_364ed4;
        case 0x364ed8u: goto label_364ed8;
        case 0x364edcu: goto label_364edc;
        case 0x364ee0u: goto label_364ee0;
        case 0x364ee4u: goto label_364ee4;
        case 0x364ee8u: goto label_364ee8;
        case 0x364eecu: goto label_364eec;
        case 0x364ef0u: goto label_364ef0;
        case 0x364ef4u: goto label_364ef4;
        case 0x364ef8u: goto label_364ef8;
        case 0x364efcu: goto label_364efc;
        case 0x364f00u: goto label_364f00;
        case 0x364f04u: goto label_364f04;
        case 0x364f08u: goto label_364f08;
        case 0x364f0cu: goto label_364f0c;
        case 0x364f10u: goto label_364f10;
        case 0x364f14u: goto label_364f14;
        case 0x364f18u: goto label_364f18;
        case 0x364f1cu: goto label_364f1c;
        case 0x364f20u: goto label_364f20;
        case 0x364f24u: goto label_364f24;
        case 0x364f28u: goto label_364f28;
        case 0x364f2cu: goto label_364f2c;
        case 0x364f30u: goto label_364f30;
        case 0x364f34u: goto label_364f34;
        case 0x364f38u: goto label_364f38;
        case 0x364f3cu: goto label_364f3c;
        case 0x364f40u: goto label_364f40;
        case 0x364f44u: goto label_364f44;
        case 0x364f48u: goto label_364f48;
        case 0x364f4cu: goto label_364f4c;
        case 0x364f50u: goto label_364f50;
        case 0x364f54u: goto label_364f54;
        case 0x364f58u: goto label_364f58;
        case 0x364f5cu: goto label_364f5c;
        case 0x364f60u: goto label_364f60;
        case 0x364f64u: goto label_364f64;
        case 0x364f68u: goto label_364f68;
        case 0x364f6cu: goto label_364f6c;
        case 0x364f70u: goto label_364f70;
        case 0x364f74u: goto label_364f74;
        case 0x364f78u: goto label_364f78;
        case 0x364f7cu: goto label_364f7c;
        case 0x364f80u: goto label_364f80;
        case 0x364f84u: goto label_364f84;
        case 0x364f88u: goto label_364f88;
        case 0x364f8cu: goto label_364f8c;
        case 0x364f90u: goto label_364f90;
        case 0x364f94u: goto label_364f94;
        case 0x364f98u: goto label_364f98;
        case 0x364f9cu: goto label_364f9c;
        case 0x364fa0u: goto label_364fa0;
        case 0x364fa4u: goto label_364fa4;
        case 0x364fa8u: goto label_364fa8;
        case 0x364facu: goto label_364fac;
        case 0x364fb0u: goto label_364fb0;
        case 0x364fb4u: goto label_364fb4;
        case 0x364fb8u: goto label_364fb8;
        case 0x364fbcu: goto label_364fbc;
        case 0x364fc0u: goto label_364fc0;
        case 0x364fc4u: goto label_364fc4;
        case 0x364fc8u: goto label_364fc8;
        case 0x364fccu: goto label_364fcc;
        case 0x364fd0u: goto label_364fd0;
        case 0x364fd4u: goto label_364fd4;
        case 0x364fd8u: goto label_364fd8;
        case 0x364fdcu: goto label_364fdc;
        case 0x364fe0u: goto label_364fe0;
        case 0x364fe4u: goto label_364fe4;
        case 0x364fe8u: goto label_364fe8;
        case 0x364fecu: goto label_364fec;
        case 0x364ff0u: goto label_364ff0;
        case 0x364ff4u: goto label_364ff4;
        case 0x364ff8u: goto label_364ff8;
        case 0x364ffcu: goto label_364ffc;
        case 0x365000u: goto label_365000;
        case 0x365004u: goto label_365004;
        case 0x365008u: goto label_365008;
        case 0x36500cu: goto label_36500c;
        case 0x365010u: goto label_365010;
        case 0x365014u: goto label_365014;
        case 0x365018u: goto label_365018;
        case 0x36501cu: goto label_36501c;
        case 0x365020u: goto label_365020;
        case 0x365024u: goto label_365024;
        case 0x365028u: goto label_365028;
        case 0x36502cu: goto label_36502c;
        case 0x365030u: goto label_365030;
        case 0x365034u: goto label_365034;
        case 0x365038u: goto label_365038;
        case 0x36503cu: goto label_36503c;
        case 0x365040u: goto label_365040;
        case 0x365044u: goto label_365044;
        case 0x365048u: goto label_365048;
        case 0x36504cu: goto label_36504c;
        case 0x365050u: goto label_365050;
        case 0x365054u: goto label_365054;
        case 0x365058u: goto label_365058;
        case 0x36505cu: goto label_36505c;
        case 0x365060u: goto label_365060;
        case 0x365064u: goto label_365064;
        case 0x365068u: goto label_365068;
        case 0x36506cu: goto label_36506c;
        case 0x365070u: goto label_365070;
        case 0x365074u: goto label_365074;
        case 0x365078u: goto label_365078;
        case 0x36507cu: goto label_36507c;
        case 0x365080u: goto label_365080;
        case 0x365084u: goto label_365084;
        case 0x365088u: goto label_365088;
        case 0x36508cu: goto label_36508c;
        case 0x365090u: goto label_365090;
        case 0x365094u: goto label_365094;
        case 0x365098u: goto label_365098;
        case 0x36509cu: goto label_36509c;
        case 0x3650a0u: goto label_3650a0;
        case 0x3650a4u: goto label_3650a4;
        case 0x3650a8u: goto label_3650a8;
        case 0x3650acu: goto label_3650ac;
        case 0x3650b0u: goto label_3650b0;
        case 0x3650b4u: goto label_3650b4;
        case 0x3650b8u: goto label_3650b8;
        case 0x3650bcu: goto label_3650bc;
        case 0x3650c0u: goto label_3650c0;
        case 0x3650c4u: goto label_3650c4;
        case 0x3650c8u: goto label_3650c8;
        case 0x3650ccu: goto label_3650cc;
        case 0x3650d0u: goto label_3650d0;
        case 0x3650d4u: goto label_3650d4;
        case 0x3650d8u: goto label_3650d8;
        case 0x3650dcu: goto label_3650dc;
        case 0x3650e0u: goto label_3650e0;
        case 0x3650e4u: goto label_3650e4;
        case 0x3650e8u: goto label_3650e8;
        case 0x3650ecu: goto label_3650ec;
        case 0x3650f0u: goto label_3650f0;
        case 0x3650f4u: goto label_3650f4;
        case 0x3650f8u: goto label_3650f8;
        case 0x3650fcu: goto label_3650fc;
        case 0x365100u: goto label_365100;
        case 0x365104u: goto label_365104;
        case 0x365108u: goto label_365108;
        case 0x36510cu: goto label_36510c;
        case 0x365110u: goto label_365110;
        case 0x365114u: goto label_365114;
        case 0x365118u: goto label_365118;
        case 0x36511cu: goto label_36511c;
        case 0x365120u: goto label_365120;
        case 0x365124u: goto label_365124;
        case 0x365128u: goto label_365128;
        case 0x36512cu: goto label_36512c;
        case 0x365130u: goto label_365130;
        case 0x365134u: goto label_365134;
        case 0x365138u: goto label_365138;
        case 0x36513cu: goto label_36513c;
        case 0x365140u: goto label_365140;
        case 0x365144u: goto label_365144;
        case 0x365148u: goto label_365148;
        case 0x36514cu: goto label_36514c;
        case 0x365150u: goto label_365150;
        case 0x365154u: goto label_365154;
        case 0x365158u: goto label_365158;
        case 0x36515cu: goto label_36515c;
        case 0x365160u: goto label_365160;
        case 0x365164u: goto label_365164;
        case 0x365168u: goto label_365168;
        case 0x36516cu: goto label_36516c;
        case 0x365170u: goto label_365170;
        case 0x365174u: goto label_365174;
        case 0x365178u: goto label_365178;
        case 0x36517cu: goto label_36517c;
        default: break;
    }

    ctx->pc = 0x364bf0u;

label_364bf0:
    // 0x364bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_364bf4:
    // 0x364bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_364bf8:
    // 0x364bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_364bfc:
    // 0x364bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_364c00:
    // 0x364c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x364c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_364c04:
    // 0x364c04: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_364c08:
    if (ctx->pc == 0x364C08u) {
        ctx->pc = 0x364C08u;
            // 0x364c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364C0Cu;
        goto label_364c0c;
    }
    ctx->pc = 0x364C04u;
    {
        const bool branch_taken_0x364c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x364C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364C04u;
            // 0x364c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364c04) {
            ctx->pc = 0x364D38u;
            goto label_364d38;
        }
    }
    ctx->pc = 0x364C0Cu;
label_364c0c:
    // 0x364c0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x364c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_364c10:
    // 0x364c10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x364c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_364c14:
    // 0x364c14: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x364c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
label_364c18:
    // 0x364c18: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x364c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_364c1c:
    // 0x364c1c: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x364c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
label_364c20:
    // 0x364c20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x364c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_364c24:
    // 0x364c24: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x364c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_364c28:
    // 0x364c28: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x364c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_364c2c:
    // 0x364c2c: 0xc0407c0  jal         func_101F00
label_364c30:
    if (ctx->pc == 0x364C30u) {
        ctx->pc = 0x364C30u;
            // 0x364c30: 0x24a54d50  addiu       $a1, $a1, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
        ctx->pc = 0x364C34u;
        goto label_364c34;
    }
    ctx->pc = 0x364C2Cu;
    SET_GPR_U32(ctx, 31, 0x364C34u);
    ctx->pc = 0x364C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364C2Cu;
            // 0x364c30: 0x24a54d50  addiu       $a1, $a1, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364C34u; }
        if (ctx->pc != 0x364C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364C34u; }
        if (ctx->pc != 0x364C34u) { return; }
    }
    ctx->pc = 0x364C34u;
label_364c34:
    // 0x364c34: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x364c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_364c38:
    // 0x364c38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_364c3c:
    if (ctx->pc == 0x364C3Cu) {
        ctx->pc = 0x364C3Cu;
            // 0x364c3c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x364C40u;
        goto label_364c40;
    }
    ctx->pc = 0x364C38u;
    {
        const bool branch_taken_0x364c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c38) {
            ctx->pc = 0x364C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364C38u;
            // 0x364c3c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364C4Cu;
            goto label_364c4c;
        }
    }
    ctx->pc = 0x364C40u;
label_364c40:
    // 0x364c40: 0xc07507c  jal         func_1D41F0
label_364c44:
    if (ctx->pc == 0x364C44u) {
        ctx->pc = 0x364C44u;
            // 0x364c44: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x364C48u;
        goto label_364c48;
    }
    ctx->pc = 0x364C40u;
    SET_GPR_U32(ctx, 31, 0x364C48u);
    ctx->pc = 0x364C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364C40u;
            // 0x364c44: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364C48u; }
        if (ctx->pc != 0x364C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364C48u; }
        if (ctx->pc != 0x364C48u) { return; }
    }
    ctx->pc = 0x364C48u;
label_364c48:
    // 0x364c48: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x364c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_364c4c:
    // 0x364c4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_364c50:
    if (ctx->pc == 0x364C50u) {
        ctx->pc = 0x364C50u;
            // 0x364c50: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x364C54u;
        goto label_364c54;
    }
    ctx->pc = 0x364C4Cu;
    {
        const bool branch_taken_0x364c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c4c) {
            ctx->pc = 0x364C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364C4Cu;
            // 0x364c50: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364C7Cu;
            goto label_364c7c;
        }
    }
    ctx->pc = 0x364C54u;
label_364c54:
    // 0x364c54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_364c58:
    if (ctx->pc == 0x364C58u) {
        ctx->pc = 0x364C5Cu;
        goto label_364c5c;
    }
    ctx->pc = 0x364C54u;
    {
        const bool branch_taken_0x364c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c54) {
            ctx->pc = 0x364C78u;
            goto label_364c78;
        }
    }
    ctx->pc = 0x364C5Cu;
label_364c5c:
    // 0x364c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_364c60:
    if (ctx->pc == 0x364C60u) {
        ctx->pc = 0x364C64u;
        goto label_364c64;
    }
    ctx->pc = 0x364C5Cu;
    {
        const bool branch_taken_0x364c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c5c) {
            ctx->pc = 0x364C78u;
            goto label_364c78;
        }
    }
    ctx->pc = 0x364C64u;
label_364c64:
    // 0x364c64: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x364c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_364c68:
    // 0x364c68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_364c6c:
    if (ctx->pc == 0x364C6Cu) {
        ctx->pc = 0x364C70u;
        goto label_364c70;
    }
    ctx->pc = 0x364C68u;
    {
        const bool branch_taken_0x364c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c68) {
            ctx->pc = 0x364C78u;
            goto label_364c78;
        }
    }
    ctx->pc = 0x364C70u;
label_364c70:
    // 0x364c70: 0xc0400a8  jal         func_1002A0
label_364c74:
    if (ctx->pc == 0x364C74u) {
        ctx->pc = 0x364C78u;
        goto label_364c78;
    }
    ctx->pc = 0x364C70u;
    SET_GPR_U32(ctx, 31, 0x364C78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364C78u; }
        if (ctx->pc != 0x364C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364C78u; }
        if (ctx->pc != 0x364C78u) { return; }
    }
    ctx->pc = 0x364C78u;
label_364c78:
    // 0x364c78: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x364c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_364c7c:
    // 0x364c7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_364c80:
    if (ctx->pc == 0x364C80u) {
        ctx->pc = 0x364C80u;
            // 0x364c80: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x364C84u;
        goto label_364c84;
    }
    ctx->pc = 0x364C7Cu;
    {
        const bool branch_taken_0x364c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c7c) {
            ctx->pc = 0x364C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364C7Cu;
            // 0x364c80: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364CACu;
            goto label_364cac;
        }
    }
    ctx->pc = 0x364C84u;
label_364c84:
    // 0x364c84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_364c88:
    if (ctx->pc == 0x364C88u) {
        ctx->pc = 0x364C8Cu;
        goto label_364c8c;
    }
    ctx->pc = 0x364C84u;
    {
        const bool branch_taken_0x364c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c84) {
            ctx->pc = 0x364CA8u;
            goto label_364ca8;
        }
    }
    ctx->pc = 0x364C8Cu;
label_364c8c:
    // 0x364c8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_364c90:
    if (ctx->pc == 0x364C90u) {
        ctx->pc = 0x364C94u;
        goto label_364c94;
    }
    ctx->pc = 0x364C8Cu;
    {
        const bool branch_taken_0x364c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c8c) {
            ctx->pc = 0x364CA8u;
            goto label_364ca8;
        }
    }
    ctx->pc = 0x364C94u;
label_364c94:
    // 0x364c94: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x364c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364c98:
    // 0x364c98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_364c9c:
    if (ctx->pc == 0x364C9Cu) {
        ctx->pc = 0x364CA0u;
        goto label_364ca0;
    }
    ctx->pc = 0x364C98u;
    {
        const bool branch_taken_0x364c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c98) {
            ctx->pc = 0x364CA8u;
            goto label_364ca8;
        }
    }
    ctx->pc = 0x364CA0u;
label_364ca0:
    // 0x364ca0: 0xc0400a8  jal         func_1002A0
label_364ca4:
    if (ctx->pc == 0x364CA4u) {
        ctx->pc = 0x364CA8u;
        goto label_364ca8;
    }
    ctx->pc = 0x364CA0u;
    SET_GPR_U32(ctx, 31, 0x364CA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364CA8u; }
        if (ctx->pc != 0x364CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364CA8u; }
        if (ctx->pc != 0x364CA8u) { return; }
    }
    ctx->pc = 0x364CA8u;
label_364ca8:
    // 0x364ca8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x364ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_364cac:
    // 0x364cac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_364cb0:
    if (ctx->pc == 0x364CB0u) {
        ctx->pc = 0x364CB4u;
        goto label_364cb4;
    }
    ctx->pc = 0x364CACu;
    {
        const bool branch_taken_0x364cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364cac) {
            ctx->pc = 0x364CC8u;
            goto label_364cc8;
        }
    }
    ctx->pc = 0x364CB4u;
label_364cb4:
    // 0x364cb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x364cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_364cb8:
    // 0x364cb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x364cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_364cbc:
    // 0x364cbc: 0x24636900  addiu       $v1, $v1, 0x6900
    ctx->pc = 0x364cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26880));
label_364cc0:
    // 0x364cc0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x364cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_364cc4:
    // 0x364cc4: 0xac404020  sw          $zero, 0x4020($v0)
    ctx->pc = 0x364cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16416), GPR_U32(ctx, 0));
label_364cc8:
    // 0x364cc8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_364ccc:
    if (ctx->pc == 0x364CCCu) {
        ctx->pc = 0x364CCCu;
            // 0x364ccc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x364CD0u;
        goto label_364cd0;
    }
    ctx->pc = 0x364CC8u;
    {
        const bool branch_taken_0x364cc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x364cc8) {
            ctx->pc = 0x364CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364CC8u;
            // 0x364ccc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364D24u;
            goto label_364d24;
        }
    }
    ctx->pc = 0x364CD0u;
label_364cd0:
    // 0x364cd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x364cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_364cd4:
    // 0x364cd4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x364cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_364cd8:
    // 0x364cd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x364cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_364cdc:
    // 0x364cdc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x364cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_364ce0:
    // 0x364ce0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_364ce4:
    if (ctx->pc == 0x364CE4u) {
        ctx->pc = 0x364CE4u;
            // 0x364ce4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x364CE8u;
        goto label_364ce8;
    }
    ctx->pc = 0x364CE0u;
    {
        const bool branch_taken_0x364ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364ce0) {
            ctx->pc = 0x364CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364CE0u;
            // 0x364ce4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364CFCu;
            goto label_364cfc;
        }
    }
    ctx->pc = 0x364CE8u;
label_364ce8:
    // 0x364ce8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x364ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_364cec:
    // 0x364cec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x364cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_364cf0:
    // 0x364cf0: 0x320f809  jalr        $t9
label_364cf4:
    if (ctx->pc == 0x364CF4u) {
        ctx->pc = 0x364CF4u;
            // 0x364cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x364CF8u;
        goto label_364cf8;
    }
    ctx->pc = 0x364CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364CF8u);
        ctx->pc = 0x364CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364CF0u;
            // 0x364cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364CF8u; }
            if (ctx->pc != 0x364CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x364CF8u;
label_364cf8:
    // 0x364cf8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x364cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_364cfc:
    // 0x364cfc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_364d00:
    if (ctx->pc == 0x364D00u) {
        ctx->pc = 0x364D00u;
            // 0x364d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364D04u;
        goto label_364d04;
    }
    ctx->pc = 0x364CFCu;
    {
        const bool branch_taken_0x364cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364cfc) {
            ctx->pc = 0x364D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364CFCu;
            // 0x364d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364D18u;
            goto label_364d18;
        }
    }
    ctx->pc = 0x364D04u;
label_364d04:
    // 0x364d04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x364d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_364d08:
    // 0x364d08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x364d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_364d0c:
    // 0x364d0c: 0x320f809  jalr        $t9
label_364d10:
    if (ctx->pc == 0x364D10u) {
        ctx->pc = 0x364D10u;
            // 0x364d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x364D14u;
        goto label_364d14;
    }
    ctx->pc = 0x364D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364D14u);
        ctx->pc = 0x364D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364D0Cu;
            // 0x364d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364D14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364D14u; }
            if (ctx->pc != 0x364D14u) { return; }
        }
        }
    }
    ctx->pc = 0x364D14u;
label_364d14:
    // 0x364d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x364d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_364d18:
    // 0x364d18: 0xc075bf8  jal         func_1D6FE0
label_364d1c:
    if (ctx->pc == 0x364D1Cu) {
        ctx->pc = 0x364D1Cu;
            // 0x364d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364D20u;
        goto label_364d20;
    }
    ctx->pc = 0x364D18u;
    SET_GPR_U32(ctx, 31, 0x364D20u);
    ctx->pc = 0x364D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364D18u;
            // 0x364d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364D20u; }
        if (ctx->pc != 0x364D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364D20u; }
        if (ctx->pc != 0x364D20u) { return; }
    }
    ctx->pc = 0x364D20u;
label_364d20:
    // 0x364d20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x364d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_364d24:
    // 0x364d24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x364d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_364d28:
    // 0x364d28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_364d2c:
    if (ctx->pc == 0x364D2Cu) {
        ctx->pc = 0x364D2Cu;
            // 0x364d2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364D30u;
        goto label_364d30;
    }
    ctx->pc = 0x364D28u;
    {
        const bool branch_taken_0x364d28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x364d28) {
            ctx->pc = 0x364D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364D28u;
            // 0x364d2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364D3Cu;
            goto label_364d3c;
        }
    }
    ctx->pc = 0x364D30u;
label_364d30:
    // 0x364d30: 0xc0400a8  jal         func_1002A0
label_364d34:
    if (ctx->pc == 0x364D34u) {
        ctx->pc = 0x364D34u;
            // 0x364d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364D38u;
        goto label_364d38;
    }
    ctx->pc = 0x364D30u;
    SET_GPR_U32(ctx, 31, 0x364D38u);
    ctx->pc = 0x364D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364D30u;
            // 0x364d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364D38u; }
        if (ctx->pc != 0x364D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364D38u; }
        if (ctx->pc != 0x364D38u) { return; }
    }
    ctx->pc = 0x364D38u;
label_364d38:
    // 0x364d38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x364d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_364d3c:
    // 0x364d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x364d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_364d40:
    // 0x364d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_364d44:
    // 0x364d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_364d48:
    // 0x364d48: 0x3e00008  jr          $ra
label_364d4c:
    if (ctx->pc == 0x364D4Cu) {
        ctx->pc = 0x364D4Cu;
            // 0x364d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x364D50u;
        goto label_364d50;
    }
    ctx->pc = 0x364D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364D48u;
            // 0x364d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x364D50u;
label_364d50:
    // 0x364d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_364d54:
    // 0x364d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_364d58:
    // 0x364d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_364d5c:
    // 0x364d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_364d60:
    // 0x364d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_364d64:
    // 0x364d64: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_364d68:
    if (ctx->pc == 0x364D68u) {
        ctx->pc = 0x364D68u;
            // 0x364d68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364D6Cu;
        goto label_364d6c;
    }
    ctx->pc = 0x364D64u;
    {
        const bool branch_taken_0x364d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x364D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364D64u;
            // 0x364d68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364d64) {
            ctx->pc = 0x364E2Cu;
            goto label_364e2c;
        }
    }
    ctx->pc = 0x364D6Cu;
label_364d6c:
    // 0x364d6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x364d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_364d70:
    // 0x364d70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x364d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_364d74:
    // 0x364d74: 0x24636860  addiu       $v1, $v1, 0x6860
    ctx->pc = 0x364d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26720));
label_364d78:
    // 0x364d78: 0x244268a0  addiu       $v0, $v0, 0x68A0
    ctx->pc = 0x364d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26784));
label_364d7c:
    // 0x364d7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x364d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_364d80:
    // 0x364d80: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x364d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_364d84:
    // 0x364d84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x364d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_364d88:
    // 0x364d88: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x364d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_364d8c:
    // 0x364d8c: 0x320f809  jalr        $t9
label_364d90:
    if (ctx->pc == 0x364D90u) {
        ctx->pc = 0x364D94u;
        goto label_364d94;
    }
    ctx->pc = 0x364D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364D94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x364D94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364D94u; }
            if (ctx->pc != 0x364D94u) { return; }
        }
        }
    }
    ctx->pc = 0x364D94u;
label_364d94:
    // 0x364d94: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_364d98:
    if (ctx->pc == 0x364D98u) {
        ctx->pc = 0x364D98u;
            // 0x364d98: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x364D9Cu;
        goto label_364d9c;
    }
    ctx->pc = 0x364D94u;
    {
        const bool branch_taken_0x364d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x364d94) {
            ctx->pc = 0x364D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364D94u;
            // 0x364d98: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364E18u;
            goto label_364e18;
        }
    }
    ctx->pc = 0x364D9Cu;
label_364d9c:
    // 0x364d9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x364d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_364da0:
    // 0x364da0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x364da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_364da4:
    // 0x364da4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x364da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_364da8:
    // 0x364da8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x364da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_364dac:
    // 0x364dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x364dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_364db0:
    // 0x364db0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x364db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_364db4:
    // 0x364db4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x364db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_364db8:
    // 0x364db8: 0xc0aecc4  jal         func_2BB310
label_364dbc:
    if (ctx->pc == 0x364DBCu) {
        ctx->pc = 0x364DBCu;
            // 0x364dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x364DC0u;
        goto label_364dc0;
    }
    ctx->pc = 0x364DB8u;
    SET_GPR_U32(ctx, 31, 0x364DC0u);
    ctx->pc = 0x364DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364DB8u;
            // 0x364dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364DC0u; }
        if (ctx->pc != 0x364DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364DC0u; }
        if (ctx->pc != 0x364DC0u) { return; }
    }
    ctx->pc = 0x364DC0u;
label_364dc0:
    // 0x364dc0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x364dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_364dc4:
    // 0x364dc4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x364dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_364dc8:
    // 0x364dc8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_364dcc:
    if (ctx->pc == 0x364DCCu) {
        ctx->pc = 0x364DCCu;
            // 0x364dcc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x364DD0u;
        goto label_364dd0;
    }
    ctx->pc = 0x364DC8u;
    {
        const bool branch_taken_0x364dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364dc8) {
            ctx->pc = 0x364DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364DC8u;
            // 0x364dcc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364DE4u;
            goto label_364de4;
        }
    }
    ctx->pc = 0x364DD0u;
label_364dd0:
    // 0x364dd0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x364dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_364dd4:
    // 0x364dd4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x364dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_364dd8:
    // 0x364dd8: 0x320f809  jalr        $t9
label_364ddc:
    if (ctx->pc == 0x364DDCu) {
        ctx->pc = 0x364DDCu;
            // 0x364ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x364DE0u;
        goto label_364de0;
    }
    ctx->pc = 0x364DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364DE0u);
        ctx->pc = 0x364DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364DD8u;
            // 0x364ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364DE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364DE0u; }
            if (ctx->pc != 0x364DE0u) { return; }
        }
        }
    }
    ctx->pc = 0x364DE0u;
label_364de0:
    // 0x364de0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x364de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_364de4:
    // 0x364de4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x364de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_364de8:
    // 0x364de8: 0xc0aec9c  jal         func_2BB270
label_364dec:
    if (ctx->pc == 0x364DECu) {
        ctx->pc = 0x364DECu;
            // 0x364dec: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x364DF0u;
        goto label_364df0;
    }
    ctx->pc = 0x364DE8u;
    SET_GPR_U32(ctx, 31, 0x364DF0u);
    ctx->pc = 0x364DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364DE8u;
            // 0x364dec: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364DF0u; }
        if (ctx->pc != 0x364DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364DF0u; }
        if (ctx->pc != 0x364DF0u) { return; }
    }
    ctx->pc = 0x364DF0u;
label_364df0:
    // 0x364df0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x364df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_364df4:
    // 0x364df4: 0xc0aec88  jal         func_2BB220
label_364df8:
    if (ctx->pc == 0x364DF8u) {
        ctx->pc = 0x364DF8u;
            // 0x364df8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x364DFCu;
        goto label_364dfc;
    }
    ctx->pc = 0x364DF4u;
    SET_GPR_U32(ctx, 31, 0x364DFCu);
    ctx->pc = 0x364DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364DF4u;
            // 0x364df8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364DFCu; }
        if (ctx->pc != 0x364DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364DFCu; }
        if (ctx->pc != 0x364DFCu) { return; }
    }
    ctx->pc = 0x364DFCu;
label_364dfc:
    // 0x364dfc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x364dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_364e00:
    // 0x364e00: 0xc0aec0c  jal         func_2BB030
label_364e04:
    if (ctx->pc == 0x364E04u) {
        ctx->pc = 0x364E04u;
            // 0x364e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364E08u;
        goto label_364e08;
    }
    ctx->pc = 0x364E00u;
    SET_GPR_U32(ctx, 31, 0x364E08u);
    ctx->pc = 0x364E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364E00u;
            // 0x364e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364E08u; }
        if (ctx->pc != 0x364E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364E08u; }
        if (ctx->pc != 0x364E08u) { return; }
    }
    ctx->pc = 0x364E08u;
label_364e08:
    // 0x364e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364e0c:
    // 0x364e0c: 0xc0aeaa8  jal         func_2BAAA0
label_364e10:
    if (ctx->pc == 0x364E10u) {
        ctx->pc = 0x364E10u;
            // 0x364e10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364E14u;
        goto label_364e14;
    }
    ctx->pc = 0x364E0Cu;
    SET_GPR_U32(ctx, 31, 0x364E14u);
    ctx->pc = 0x364E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364E0Cu;
            // 0x364e10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364E14u; }
        if (ctx->pc != 0x364E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364E14u; }
        if (ctx->pc != 0x364E14u) { return; }
    }
    ctx->pc = 0x364E14u;
label_364e14:
    // 0x364e14: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x364e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_364e18:
    // 0x364e18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x364e18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_364e1c:
    // 0x364e1c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_364e20:
    if (ctx->pc == 0x364E20u) {
        ctx->pc = 0x364E20u;
            // 0x364e20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364E24u;
        goto label_364e24;
    }
    ctx->pc = 0x364E1Cu;
    {
        const bool branch_taken_0x364e1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x364e1c) {
            ctx->pc = 0x364E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364E1Cu;
            // 0x364e20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364E30u;
            goto label_364e30;
        }
    }
    ctx->pc = 0x364E24u;
label_364e24:
    // 0x364e24: 0xc0400a8  jal         func_1002A0
label_364e28:
    if (ctx->pc == 0x364E28u) {
        ctx->pc = 0x364E28u;
            // 0x364e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364E2Cu;
        goto label_364e2c;
    }
    ctx->pc = 0x364E24u;
    SET_GPR_U32(ctx, 31, 0x364E2Cu);
    ctx->pc = 0x364E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364E24u;
            // 0x364e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364E2Cu; }
        if (ctx->pc != 0x364E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364E2Cu; }
        if (ctx->pc != 0x364E2Cu) { return; }
    }
    ctx->pc = 0x364E2Cu;
label_364e2c:
    // 0x364e2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x364e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364e30:
    // 0x364e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x364e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_364e34:
    // 0x364e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_364e38:
    // 0x364e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_364e3c:
    // 0x364e3c: 0x3e00008  jr          $ra
label_364e40:
    if (ctx->pc == 0x364E40u) {
        ctx->pc = 0x364E40u;
            // 0x364e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x364E44u;
        goto label_364e44;
    }
    ctx->pc = 0x364E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364E3Cu;
            // 0x364e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x364E44u;
label_364e44:
    // 0x364e44: 0x0  nop
    ctx->pc = 0x364e44u;
    // NOP
label_364e48:
    // 0x364e48: 0x0  nop
    ctx->pc = 0x364e48u;
    // NOP
label_364e4c:
    // 0x364e4c: 0x0  nop
    ctx->pc = 0x364e4cu;
    // NOP
label_364e50:
    // 0x364e50: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x364e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_364e54:
    // 0x364e54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x364e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_364e58:
    // 0x364e58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x364e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_364e5c:
    // 0x364e5c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x364e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_364e60:
    // 0x364e60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x364e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_364e64:
    // 0x364e64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x364e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_364e68:
    // 0x364e68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x364e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_364e6c:
    // 0x364e6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x364e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_364e70:
    // 0x364e70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x364e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_364e74:
    // 0x364e74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x364e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_364e78:
    // 0x364e78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x364e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_364e7c:
    // 0x364e7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x364e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_364e80:
    // 0x364e80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x364e80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_364e84:
    // 0x364e84: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x364e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_364e88:
    // 0x364e88: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x364e88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_364e8c:
    // 0x364e8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x364e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_364e90:
    // 0x364e90: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_364e94:
    if (ctx->pc == 0x364E94u) {
        ctx->pc = 0x364E94u;
            // 0x364e94: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364E98u;
        goto label_364e98;
    }
    ctx->pc = 0x364E90u;
    {
        const bool branch_taken_0x364e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x364E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364E90u;
            // 0x364e94: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e90) {
            ctx->pc = 0x364ED4u;
            goto label_364ed4;
        }
    }
    ctx->pc = 0x364E98u;
label_364e98:
    // 0x364e98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x364e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_364e9c:
    // 0x364e9c: 0x50a300ab  beql        $a1, $v1, . + 4 + (0xAB << 2)
label_364ea0:
    if (ctx->pc == 0x364EA0u) {
        ctx->pc = 0x364EA0u;
            // 0x364ea0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x364EA4u;
        goto label_364ea4;
    }
    ctx->pc = 0x364E9Cu;
    {
        const bool branch_taken_0x364e9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x364e9c) {
            ctx->pc = 0x364EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364E9Cu;
            // 0x364ea0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36514Cu;
            goto label_36514c;
        }
    }
    ctx->pc = 0x364EA4u;
label_364ea4:
    // 0x364ea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x364ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_364ea8:
    // 0x364ea8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_364eac:
    if (ctx->pc == 0x364EACu) {
        ctx->pc = 0x364EACu;
            // 0x364eac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x364EB0u;
        goto label_364eb0;
    }
    ctx->pc = 0x364EA8u;
    {
        const bool branch_taken_0x364ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x364ea8) {
            ctx->pc = 0x364EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364EA8u;
            // 0x364eac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364EB8u;
            goto label_364eb8;
        }
    }
    ctx->pc = 0x364EB0u;
label_364eb0:
    // 0x364eb0: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_364eb4:
    if (ctx->pc == 0x364EB4u) {
        ctx->pc = 0x364EB8u;
        goto label_364eb8;
    }
    ctx->pc = 0x364EB0u;
    {
        const bool branch_taken_0x364eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364eb0) {
            ctx->pc = 0x365148u;
            goto label_365148;
        }
    }
    ctx->pc = 0x364EB8u;
label_364eb8:
    // 0x364eb8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x364eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_364ebc:
    // 0x364ebc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x364ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_364ec0:
    // 0x364ec0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x364ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_364ec4:
    // 0x364ec4: 0x320f809  jalr        $t9
label_364ec8:
    if (ctx->pc == 0x364EC8u) {
        ctx->pc = 0x364EC8u;
            // 0x364ec8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x364ECCu;
        goto label_364ecc;
    }
    ctx->pc = 0x364EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364ECCu);
        ctx->pc = 0x364EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364EC4u;
            // 0x364ec8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364ECCu; }
            if (ctx->pc != 0x364ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x364ECCu;
label_364ecc:
    // 0x364ecc: 0x1000009e  b           . + 4 + (0x9E << 2)
label_364ed0:
    if (ctx->pc == 0x364ED0u) {
        ctx->pc = 0x364ED4u;
        goto label_364ed4;
    }
    ctx->pc = 0x364ECCu;
    {
        const bool branch_taken_0x364ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364ecc) {
            ctx->pc = 0x365148u;
            goto label_365148;
        }
    }
    ctx->pc = 0x364ED4u;
label_364ed4:
    // 0x364ed4: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x364ed4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_364ed8:
    // 0x364ed8: 0x12e0009b  beqz        $s7, . + 4 + (0x9B << 2)
label_364edc:
    if (ctx->pc == 0x364EDCu) {
        ctx->pc = 0x364EE0u;
        goto label_364ee0;
    }
    ctx->pc = 0x364ED8u;
    {
        const bool branch_taken_0x364ed8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x364ed8) {
            ctx->pc = 0x365148u;
            goto label_365148;
        }
    }
    ctx->pc = 0x364EE0u;
label_364ee0:
    // 0x364ee0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364ee4:
    // 0x364ee4: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x364ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_364ee8:
    // 0x364ee8: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x364ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_364eec:
    // 0x364eec: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x364eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_364ef0:
    // 0x364ef0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x364ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_364ef4:
    // 0x364ef4: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x364ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_364ef8:
    // 0x364ef8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x364ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_364efc:
    // 0x364efc: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x364efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_364f00:
    // 0x364f00: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x364f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_364f04:
    // 0x364f04: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x364f04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_364f08:
    // 0x364f08: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x364f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_364f0c:
    // 0x364f0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364f10:
    // 0x364f10: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x364f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_364f14:
    // 0x364f14: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x364f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_364f18:
    // 0x364f18: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x364f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_364f1c:
    // 0x364f1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364f20:
    // 0x364f20: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x364f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_364f24:
    // 0x364f24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x364f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_364f28:
    // 0x364f28: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x364f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_364f2c:
    // 0x364f2c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x364f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_364f30:
    // 0x364f30: 0x24be0010  addiu       $fp, $a1, 0x10
    ctx->pc = 0x364f30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_364f34:
    // 0x364f34: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x364f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_364f38:
    // 0x364f38: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x364f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_364f3c:
    // 0x364f3c: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x364f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_364f40:
    // 0x364f40: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x364f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_364f44:
    // 0x364f44: 0xc04e738  jal         func_139CE0
label_364f48:
    if (ctx->pc == 0x364F48u) {
        ctx->pc = 0x364F48u;
            // 0x364f48: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x364F4Cu;
        goto label_364f4c;
    }
    ctx->pc = 0x364F44u;
    SET_GPR_U32(ctx, 31, 0x364F4Cu);
    ctx->pc = 0x364F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364F44u;
            // 0x364f48: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364F4Cu; }
        if (ctx->pc != 0x364F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364F4Cu; }
        if (ctx->pc != 0x364F4Cu) { return; }
    }
    ctx->pc = 0x364F4Cu;
label_364f4c:
    // 0x364f4c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x364f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_364f50:
    // 0x364f50: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x364f50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364f54:
    // 0x364f54: 0xc4544b68  lwc1        $f20, 0x4B68($v0)
    ctx->pc = 0x364f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_364f58:
    // 0x364f58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x364f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364f5c:
    // 0x364f5c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x364f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_364f60:
    // 0x364f60: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x364f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_364f64:
    // 0x364f64: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x364f64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_364f68:
    // 0x364f68: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x364f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_364f6c:
    // 0x364f6c: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x364f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_364f70:
    // 0x364f70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x364f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_364f74:
    // 0x364f74: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x364f74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_364f78:
    // 0x364f78: 0xc0d639c  jal         func_358E70
label_364f7c:
    if (ctx->pc == 0x364F7Cu) {
        ctx->pc = 0x364F7Cu;
            // 0x364f7c: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x364F80u;
        goto label_364f80;
    }
    ctx->pc = 0x364F78u;
    SET_GPR_U32(ctx, 31, 0x364F80u);
    ctx->pc = 0x364F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364F78u;
            // 0x364f7c: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364F80u; }
        if (ctx->pc != 0x364F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364F80u; }
        if (ctx->pc != 0x364F80u) { return; }
    }
    ctx->pc = 0x364F80u;
label_364f80:
    // 0x364f80: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_364f84:
    if (ctx->pc == 0x364F84u) {
        ctx->pc = 0x364F88u;
        goto label_364f88;
    }
    ctx->pc = 0x364F80u;
    {
        const bool branch_taken_0x364f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364f80) {
            ctx->pc = 0x3650F0u;
            goto label_3650f0;
        }
    }
    ctx->pc = 0x364F88u;
label_364f88:
    // 0x364f88: 0xc0d1c14  jal         func_347050
label_364f8c:
    if (ctx->pc == 0x364F8Cu) {
        ctx->pc = 0x364F8Cu;
            // 0x364f8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364F90u;
        goto label_364f90;
    }
    ctx->pc = 0x364F88u;
    SET_GPR_U32(ctx, 31, 0x364F90u);
    ctx->pc = 0x364F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364F88u;
            // 0x364f8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364F90u; }
        if (ctx->pc != 0x364F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364F90u; }
        if (ctx->pc != 0x364F90u) { return; }
    }
    ctx->pc = 0x364F90u;
label_364f90:
    // 0x364f90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x364f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_364f94:
    // 0x364f94: 0xc04f278  jal         func_13C9E0
label_364f98:
    if (ctx->pc == 0x364F98u) {
        ctx->pc = 0x364F98u;
            // 0x364f98: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x364F9Cu;
        goto label_364f9c;
    }
    ctx->pc = 0x364F94u;
    SET_GPR_U32(ctx, 31, 0x364F9Cu);
    ctx->pc = 0x364F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364F94u;
            // 0x364f98: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364F9Cu; }
        if (ctx->pc != 0x364F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364F9Cu; }
        if (ctx->pc != 0x364F9Cu) { return; }
    }
    ctx->pc = 0x364F9Cu;
label_364f9c:
    // 0x364f9c: 0xc0d1c10  jal         func_347040
label_364fa0:
    if (ctx->pc == 0x364FA0u) {
        ctx->pc = 0x364FA0u;
            // 0x364fa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364FA4u;
        goto label_364fa4;
    }
    ctx->pc = 0x364F9Cu;
    SET_GPR_U32(ctx, 31, 0x364FA4u);
    ctx->pc = 0x364FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364F9Cu;
            // 0x364fa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FA4u; }
        if (ctx->pc != 0x364FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FA4u; }
        if (ctx->pc != 0x364FA4u) { return; }
    }
    ctx->pc = 0x364FA4u;
label_364fa4:
    // 0x364fa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x364fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_364fa8:
    // 0x364fa8: 0xc04ce80  jal         func_133A00
label_364fac:
    if (ctx->pc == 0x364FACu) {
        ctx->pc = 0x364FACu;
            // 0x364fac: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x364FB0u;
        goto label_364fb0;
    }
    ctx->pc = 0x364FA8u;
    SET_GPR_U32(ctx, 31, 0x364FB0u);
    ctx->pc = 0x364FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364FA8u;
            // 0x364fac: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FB0u; }
        if (ctx->pc != 0x364FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FB0u; }
        if (ctx->pc != 0x364FB0u) { return; }
    }
    ctx->pc = 0x364FB0u;
label_364fb0:
    // 0x364fb0: 0xc0d4108  jal         func_350420
label_364fb4:
    if (ctx->pc == 0x364FB4u) {
        ctx->pc = 0x364FB8u;
        goto label_364fb8;
    }
    ctx->pc = 0x364FB0u;
    SET_GPR_U32(ctx, 31, 0x364FB8u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FB8u; }
        if (ctx->pc != 0x364FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FB8u; }
        if (ctx->pc != 0x364FB8u) { return; }
    }
    ctx->pc = 0x364FB8u;
label_364fb8:
    // 0x364fb8: 0xc0b36b4  jal         func_2CDAD0
label_364fbc:
    if (ctx->pc == 0x364FBCu) {
        ctx->pc = 0x364FBCu;
            // 0x364fbc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364FC0u;
        goto label_364fc0;
    }
    ctx->pc = 0x364FB8u;
    SET_GPR_U32(ctx, 31, 0x364FC0u);
    ctx->pc = 0x364FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364FB8u;
            // 0x364fbc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FC0u; }
        if (ctx->pc != 0x364FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FC0u; }
        if (ctx->pc != 0x364FC0u) { return; }
    }
    ctx->pc = 0x364FC0u;
label_364fc0:
    // 0x364fc0: 0xc0b9c64  jal         func_2E7190
label_364fc4:
    if (ctx->pc == 0x364FC4u) {
        ctx->pc = 0x364FC4u;
            // 0x364fc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364FC8u;
        goto label_364fc8;
    }
    ctx->pc = 0x364FC0u;
    SET_GPR_U32(ctx, 31, 0x364FC8u);
    ctx->pc = 0x364FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364FC0u;
            // 0x364fc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FC8u; }
        if (ctx->pc != 0x364FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FC8u; }
        if (ctx->pc != 0x364FC8u) { return; }
    }
    ctx->pc = 0x364FC8u;
label_364fc8:
    // 0x364fc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x364fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_364fcc:
    // 0x364fcc: 0xc0d4104  jal         func_350410
label_364fd0:
    if (ctx->pc == 0x364FD0u) {
        ctx->pc = 0x364FD0u;
            // 0x364fd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364FD4u;
        goto label_364fd4;
    }
    ctx->pc = 0x364FCCu;
    SET_GPR_U32(ctx, 31, 0x364FD4u);
    ctx->pc = 0x364FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364FCCu;
            // 0x364fd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FD4u; }
        if (ctx->pc != 0x364FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FD4u; }
        if (ctx->pc != 0x364FD4u) { return; }
    }
    ctx->pc = 0x364FD4u;
label_364fd4:
    // 0x364fd4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x364fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_364fd8:
    // 0x364fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x364fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_364fdc:
    // 0x364fdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x364fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364fe0:
    // 0x364fe0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x364fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_364fe4:
    // 0x364fe4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x364fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_364fe8:
    // 0x364fe8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x364fe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364fec:
    // 0x364fec: 0xc0d40ac  jal         func_3502B0
label_364ff0:
    if (ctx->pc == 0x364FF0u) {
        ctx->pc = 0x364FF0u;
            // 0x364ff0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x364FF4u;
        goto label_364ff4;
    }
    ctx->pc = 0x364FECu;
    SET_GPR_U32(ctx, 31, 0x364FF4u);
    ctx->pc = 0x364FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364FECu;
            // 0x364ff0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FF4u; }
        if (ctx->pc != 0x364FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364FF4u; }
        if (ctx->pc != 0x364FF4u) { return; }
    }
    ctx->pc = 0x364FF4u;
label_364ff4:
    // 0x364ff4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x364ff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_364ff8:
    // 0x364ff8: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_364ffc:
    if (ctx->pc == 0x364FFCu) {
        ctx->pc = 0x364FFCu;
            // 0x364ffc: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x365000u;
        goto label_365000;
    }
    ctx->pc = 0x364FF8u;
    {
        const bool branch_taken_0x364ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x364FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364FF8u;
            // 0x364ffc: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ff8) {
            ctx->pc = 0x365108u;
            goto label_365108;
        }
    }
    ctx->pc = 0x365000u;
label_365000:
    // 0x365000: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x365000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_365004:
    // 0x365004: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x365004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_365008:
    // 0x365008: 0xc0d9460  jal         func_365180
label_36500c:
    if (ctx->pc == 0x36500Cu) {
        ctx->pc = 0x36500Cu;
            // 0x36500c: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x365010u;
        goto label_365010;
    }
    ctx->pc = 0x365008u;
    SET_GPR_U32(ctx, 31, 0x365010u);
    ctx->pc = 0x36500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365008u;
            // 0x36500c: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x365180u;
    if (runtime->hasFunction(0x365180u)) {
        auto targetFn = runtime->lookupFunction(0x365180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365010u; }
        if (ctx->pc != 0x365010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00365180_0x365180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365010u; }
        if (ctx->pc != 0x365010u) { return; }
    }
    ctx->pc = 0x365010u;
label_365010:
    // 0x365010: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x365010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_365014:
    // 0x365014: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x365014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_365018:
    // 0x365018: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x365018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_36501c:
    // 0x36501c: 0xc04e4a4  jal         func_139290
label_365020:
    if (ctx->pc == 0x365020u) {
        ctx->pc = 0x365020u;
            // 0x365020: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x365024u;
        goto label_365024;
    }
    ctx->pc = 0x36501Cu;
    SET_GPR_U32(ctx, 31, 0x365024u);
    ctx->pc = 0x365020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36501Cu;
            // 0x365020: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365024u; }
        if (ctx->pc != 0x365024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365024u; }
        if (ctx->pc != 0x365024u) { return; }
    }
    ctx->pc = 0x365024u;
label_365024:
    // 0x365024: 0xc0d5d80  jal         func_357600
label_365028:
    if (ctx->pc == 0x365028u) {
        ctx->pc = 0x365028u;
            // 0x365028: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->pc = 0x36502Cu;
        goto label_36502c;
    }
    ctx->pc = 0x365024u;
    SET_GPR_U32(ctx, 31, 0x36502Cu);
    ctx->pc = 0x365028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365024u;
            // 0x365028: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36502Cu; }
        if (ctx->pc != 0x36502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36502Cu; }
        if (ctx->pc != 0x36502Cu) { return; }
    }
    ctx->pc = 0x36502Cu;
label_36502c:
    // 0x36502c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_365030:
    if (ctx->pc == 0x365030u) {
        ctx->pc = 0x365034u;
        goto label_365034;
    }
    ctx->pc = 0x36502Cu;
    {
        const bool branch_taken_0x36502c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36502c) {
            ctx->pc = 0x3650B0u;
            goto label_3650b0;
        }
    }
    ctx->pc = 0x365034u;
label_365034:
    // 0x365034: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x365034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_365038:
    // 0x365038: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x365038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_36503c:
    // 0x36503c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x36503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_365040:
    // 0x365040: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x365040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_365044:
    // 0x365044: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_365048:
    if (ctx->pc == 0x365048u) {
        ctx->pc = 0x365048u;
            // 0x365048: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x36504Cu;
        goto label_36504c;
    }
    ctx->pc = 0x365044u;
    {
        const bool branch_taken_0x365044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x365048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365044u;
            // 0x365048: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365044) {
            ctx->pc = 0x365058u;
            goto label_365058;
        }
    }
    ctx->pc = 0x36504Cu;
label_36504c:
    // 0x36504c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36504cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_365050:
    // 0x365050: 0x10000008  b           . + 4 + (0x8 << 2)
label_365054:
    if (ctx->pc == 0x365054u) {
        ctx->pc = 0x365054u;
            // 0x365054: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x365058u;
        goto label_365058;
    }
    ctx->pc = 0x365050u;
    {
        const bool branch_taken_0x365050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365050u;
            // 0x365054: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x365050) {
            ctx->pc = 0x365074u;
            goto label_365074;
        }
    }
    ctx->pc = 0x365058u;
label_365058:
    // 0x365058: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x365058u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_36505c:
    // 0x36505c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_365060:
    // 0x365060: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x365060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_365064:
    // 0x365064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x365064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_365068:
    // 0x365068: 0x0  nop
    ctx->pc = 0x365068u;
    // NOP
label_36506c:
    // 0x36506c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x36506cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_365070:
    // 0x365070: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x365070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_365074:
    // 0x365074: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x365074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
label_365078:
    // 0x365078: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x365078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_36507c:
    // 0x36507c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_365080:
    // 0x365080: 0xc0477a8  jal         func_11DEA0
label_365084:
    if (ctx->pc == 0x365084u) {
        ctx->pc = 0x365084u;
            // 0x365084: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x365088u;
        goto label_365088;
    }
    ctx->pc = 0x365080u;
    SET_GPR_U32(ctx, 31, 0x365088u);
    ctx->pc = 0x365084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365080u;
            // 0x365084: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365088u; }
        if (ctx->pc != 0x365088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365088u; }
        if (ctx->pc != 0x365088u) { return; }
    }
    ctx->pc = 0x365088u;
label_365088:
    // 0x365088: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x365088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_36508c:
    // 0x36508c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x36508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_365090:
    // 0x365090: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x365090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_365094:
    // 0x365094: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x365094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_365098:
    // 0x365098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x365098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36509c:
    // 0x36509c: 0x0  nop
    ctx->pc = 0x36509cu;
    // NOP
label_3650a0:
    // 0x3650a0: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x3650a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3650a4:
    // 0x3650a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3650a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3650a8:
    // 0x3650a8: 0xc04ce64  jal         func_133990
label_3650ac:
    if (ctx->pc == 0x3650ACu) {
        ctx->pc = 0x3650ACu;
            // 0x3650ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3650B0u;
        goto label_3650b0;
    }
    ctx->pc = 0x3650A8u;
    SET_GPR_U32(ctx, 31, 0x3650B0u);
    ctx->pc = 0x3650ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3650A8u;
            // 0x3650ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3650B0u; }
        if (ctx->pc != 0x3650B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3650B0u; }
        if (ctx->pc != 0x3650B0u) { return; }
    }
    ctx->pc = 0x3650B0u;
label_3650b0:
    // 0x3650b0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3650b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3650b4:
    // 0x3650b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3650b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3650b8:
    // 0x3650b8: 0xc04cd60  jal         func_133580
label_3650bc:
    if (ctx->pc == 0x3650BCu) {
        ctx->pc = 0x3650BCu;
            // 0x3650bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3650C0u;
        goto label_3650c0;
    }
    ctx->pc = 0x3650B8u;
    SET_GPR_U32(ctx, 31, 0x3650C0u);
    ctx->pc = 0x3650BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3650B8u;
            // 0x3650bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3650C0u; }
        if (ctx->pc != 0x3650C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3650C0u; }
        if (ctx->pc != 0x3650C0u) { return; }
    }
    ctx->pc = 0x3650C0u;
label_3650c0:
    // 0x3650c0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3650c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3650c4:
    // 0x3650c4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3650c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3650c8:
    // 0x3650c8: 0x320f809  jalr        $t9
label_3650cc:
    if (ctx->pc == 0x3650CCu) {
        ctx->pc = 0x3650CCu;
            // 0x3650cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3650D0u;
        goto label_3650d0;
    }
    ctx->pc = 0x3650C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3650D0u);
        ctx->pc = 0x3650CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3650C8u;
            // 0x3650cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3650D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3650D0u; }
            if (ctx->pc != 0x3650D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3650D0u;
label_3650d0:
    // 0x3650d0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x3650d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_3650d4:
    // 0x3650d4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3650d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3650d8:
    // 0x3650d8: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x3650d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_3650dc:
    // 0x3650dc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3650dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3650e0:
    // 0x3650e0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3650e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3650e4:
    // 0x3650e4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x3650e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3650e8:
    // 0x3650e8: 0xc04cfcc  jal         func_133F30
label_3650ec:
    if (ctx->pc == 0x3650ECu) {
        ctx->pc = 0x3650ECu;
            // 0x3650ec: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x3650F0u;
        goto label_3650f0;
    }
    ctx->pc = 0x3650E8u;
    SET_GPR_U32(ctx, 31, 0x3650F0u);
    ctx->pc = 0x3650ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3650E8u;
            // 0x3650ec: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3650F0u; }
        if (ctx->pc != 0x3650F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3650F0u; }
        if (ctx->pc != 0x3650F0u) { return; }
    }
    ctx->pc = 0x3650F0u;
label_3650f0:
    // 0x3650f0: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x3650f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_3650f4:
    // 0x3650f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3650f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3650f8:
    // 0x3650f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3650f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3650fc:
    // 0x3650fc: 0xc0e31f8  jal         func_38C7E0
label_365100:
    if (ctx->pc == 0x365100u) {
        ctx->pc = 0x365100u;
            // 0x365100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365104u;
        goto label_365104;
    }
    ctx->pc = 0x3650FCu;
    SET_GPR_U32(ctx, 31, 0x365104u);
    ctx->pc = 0x365100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3650FCu;
            // 0x365100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365104u; }
        if (ctx->pc != 0x365104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365104u; }
        if (ctx->pc != 0x365104u) { return; }
    }
    ctx->pc = 0x365104u;
label_365104:
    // 0x365104: 0x0  nop
    ctx->pc = 0x365104u;
    // NOP
label_365108:
    // 0x365108: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x365108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_36510c:
    // 0x36510c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x36510cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_365110:
    // 0x365110: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
label_365114:
    if (ctx->pc == 0x365114u) {
        ctx->pc = 0x365114u;
            // 0x365114: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x365118u;
        goto label_365118;
    }
    ctx->pc = 0x365110u;
    {
        const bool branch_taken_0x365110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x365114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365110u;
            // 0x365114: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365110) {
            ctx->pc = 0x364F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_364f5c;
        }
    }
    ctx->pc = 0x365118u;
label_365118:
    // 0x365118: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x365118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36511c:
    // 0x36511c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x36511cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_365120:
    // 0x365120: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_365124:
    if (ctx->pc == 0x365124u) {
        ctx->pc = 0x365124u;
            // 0x365124: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x365128u;
        goto label_365128;
    }
    ctx->pc = 0x365120u;
    {
        const bool branch_taken_0x365120 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x365124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365120u;
            // 0x365124: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365120) {
            ctx->pc = 0x365148u;
            goto label_365148;
        }
    }
    ctx->pc = 0x365128u;
label_365128:
    // 0x365128: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x365128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36512c:
    // 0x36512c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_365130:
    // 0x365130: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x365130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_365134:
    // 0x365134: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x365134u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_365138:
    // 0x365138: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x365138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_36513c:
    // 0x36513c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36513cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365140:
    // 0x365140: 0xc055d28  jal         func_1574A0
label_365144:
    if (ctx->pc == 0x365144u) {
        ctx->pc = 0x365144u;
            // 0x365144: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365148u;
        goto label_365148;
    }
    ctx->pc = 0x365140u;
    SET_GPR_U32(ctx, 31, 0x365148u);
    ctx->pc = 0x365144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365140u;
            // 0x365144: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365148u; }
        if (ctx->pc != 0x365148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365148u; }
        if (ctx->pc != 0x365148u) { return; }
    }
    ctx->pc = 0x365148u;
label_365148:
    // 0x365148: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x365148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_36514c:
    // 0x36514c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x36514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_365150:
    // 0x365150: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x365150u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_365154:
    // 0x365154: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x365154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_365158:
    // 0x365158: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x365158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36515c:
    // 0x36515c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x36515cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_365160:
    // 0x365160: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x365160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_365164:
    // 0x365164: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x365164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_365168:
    // 0x365168: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x365168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36516c:
    // 0x36516c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36516cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_365170:
    // 0x365170: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x365170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_365174:
    // 0x365174: 0x3e00008  jr          $ra
label_365178:
    if (ctx->pc == 0x365178u) {
        ctx->pc = 0x365178u;
            // 0x365178: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x36517Cu;
        goto label_36517c;
    }
    ctx->pc = 0x365174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365174u;
            // 0x365178: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36517Cu;
label_36517c:
    // 0x36517c: 0x0  nop
    ctx->pc = 0x36517cu;
    // NOP
}
