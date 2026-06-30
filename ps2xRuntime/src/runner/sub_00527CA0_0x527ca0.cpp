#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00527CA0
// Address: 0x527ca0 - 0x528160
void sub_00527CA0_0x527ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00527CA0_0x527ca0");
#endif

    switch (ctx->pc) {
        case 0x527ca0u: goto label_527ca0;
        case 0x527ca4u: goto label_527ca4;
        case 0x527ca8u: goto label_527ca8;
        case 0x527cacu: goto label_527cac;
        case 0x527cb0u: goto label_527cb0;
        case 0x527cb4u: goto label_527cb4;
        case 0x527cb8u: goto label_527cb8;
        case 0x527cbcu: goto label_527cbc;
        case 0x527cc0u: goto label_527cc0;
        case 0x527cc4u: goto label_527cc4;
        case 0x527cc8u: goto label_527cc8;
        case 0x527cccu: goto label_527ccc;
        case 0x527cd0u: goto label_527cd0;
        case 0x527cd4u: goto label_527cd4;
        case 0x527cd8u: goto label_527cd8;
        case 0x527cdcu: goto label_527cdc;
        case 0x527ce0u: goto label_527ce0;
        case 0x527ce4u: goto label_527ce4;
        case 0x527ce8u: goto label_527ce8;
        case 0x527cecu: goto label_527cec;
        case 0x527cf0u: goto label_527cf0;
        case 0x527cf4u: goto label_527cf4;
        case 0x527cf8u: goto label_527cf8;
        case 0x527cfcu: goto label_527cfc;
        case 0x527d00u: goto label_527d00;
        case 0x527d04u: goto label_527d04;
        case 0x527d08u: goto label_527d08;
        case 0x527d0cu: goto label_527d0c;
        case 0x527d10u: goto label_527d10;
        case 0x527d14u: goto label_527d14;
        case 0x527d18u: goto label_527d18;
        case 0x527d1cu: goto label_527d1c;
        case 0x527d20u: goto label_527d20;
        case 0x527d24u: goto label_527d24;
        case 0x527d28u: goto label_527d28;
        case 0x527d2cu: goto label_527d2c;
        case 0x527d30u: goto label_527d30;
        case 0x527d34u: goto label_527d34;
        case 0x527d38u: goto label_527d38;
        case 0x527d3cu: goto label_527d3c;
        case 0x527d40u: goto label_527d40;
        case 0x527d44u: goto label_527d44;
        case 0x527d48u: goto label_527d48;
        case 0x527d4cu: goto label_527d4c;
        case 0x527d50u: goto label_527d50;
        case 0x527d54u: goto label_527d54;
        case 0x527d58u: goto label_527d58;
        case 0x527d5cu: goto label_527d5c;
        case 0x527d60u: goto label_527d60;
        case 0x527d64u: goto label_527d64;
        case 0x527d68u: goto label_527d68;
        case 0x527d6cu: goto label_527d6c;
        case 0x527d70u: goto label_527d70;
        case 0x527d74u: goto label_527d74;
        case 0x527d78u: goto label_527d78;
        case 0x527d7cu: goto label_527d7c;
        case 0x527d80u: goto label_527d80;
        case 0x527d84u: goto label_527d84;
        case 0x527d88u: goto label_527d88;
        case 0x527d8cu: goto label_527d8c;
        case 0x527d90u: goto label_527d90;
        case 0x527d94u: goto label_527d94;
        case 0x527d98u: goto label_527d98;
        case 0x527d9cu: goto label_527d9c;
        case 0x527da0u: goto label_527da0;
        case 0x527da4u: goto label_527da4;
        case 0x527da8u: goto label_527da8;
        case 0x527dacu: goto label_527dac;
        case 0x527db0u: goto label_527db0;
        case 0x527db4u: goto label_527db4;
        case 0x527db8u: goto label_527db8;
        case 0x527dbcu: goto label_527dbc;
        case 0x527dc0u: goto label_527dc0;
        case 0x527dc4u: goto label_527dc4;
        case 0x527dc8u: goto label_527dc8;
        case 0x527dccu: goto label_527dcc;
        case 0x527dd0u: goto label_527dd0;
        case 0x527dd4u: goto label_527dd4;
        case 0x527dd8u: goto label_527dd8;
        case 0x527ddcu: goto label_527ddc;
        case 0x527de0u: goto label_527de0;
        case 0x527de4u: goto label_527de4;
        case 0x527de8u: goto label_527de8;
        case 0x527decu: goto label_527dec;
        case 0x527df0u: goto label_527df0;
        case 0x527df4u: goto label_527df4;
        case 0x527df8u: goto label_527df8;
        case 0x527dfcu: goto label_527dfc;
        case 0x527e00u: goto label_527e00;
        case 0x527e04u: goto label_527e04;
        case 0x527e08u: goto label_527e08;
        case 0x527e0cu: goto label_527e0c;
        case 0x527e10u: goto label_527e10;
        case 0x527e14u: goto label_527e14;
        case 0x527e18u: goto label_527e18;
        case 0x527e1cu: goto label_527e1c;
        case 0x527e20u: goto label_527e20;
        case 0x527e24u: goto label_527e24;
        case 0x527e28u: goto label_527e28;
        case 0x527e2cu: goto label_527e2c;
        case 0x527e30u: goto label_527e30;
        case 0x527e34u: goto label_527e34;
        case 0x527e38u: goto label_527e38;
        case 0x527e3cu: goto label_527e3c;
        case 0x527e40u: goto label_527e40;
        case 0x527e44u: goto label_527e44;
        case 0x527e48u: goto label_527e48;
        case 0x527e4cu: goto label_527e4c;
        case 0x527e50u: goto label_527e50;
        case 0x527e54u: goto label_527e54;
        case 0x527e58u: goto label_527e58;
        case 0x527e5cu: goto label_527e5c;
        case 0x527e60u: goto label_527e60;
        case 0x527e64u: goto label_527e64;
        case 0x527e68u: goto label_527e68;
        case 0x527e6cu: goto label_527e6c;
        case 0x527e70u: goto label_527e70;
        case 0x527e74u: goto label_527e74;
        case 0x527e78u: goto label_527e78;
        case 0x527e7cu: goto label_527e7c;
        case 0x527e80u: goto label_527e80;
        case 0x527e84u: goto label_527e84;
        case 0x527e88u: goto label_527e88;
        case 0x527e8cu: goto label_527e8c;
        case 0x527e90u: goto label_527e90;
        case 0x527e94u: goto label_527e94;
        case 0x527e98u: goto label_527e98;
        case 0x527e9cu: goto label_527e9c;
        case 0x527ea0u: goto label_527ea0;
        case 0x527ea4u: goto label_527ea4;
        case 0x527ea8u: goto label_527ea8;
        case 0x527eacu: goto label_527eac;
        case 0x527eb0u: goto label_527eb0;
        case 0x527eb4u: goto label_527eb4;
        case 0x527eb8u: goto label_527eb8;
        case 0x527ebcu: goto label_527ebc;
        case 0x527ec0u: goto label_527ec0;
        case 0x527ec4u: goto label_527ec4;
        case 0x527ec8u: goto label_527ec8;
        case 0x527eccu: goto label_527ecc;
        case 0x527ed0u: goto label_527ed0;
        case 0x527ed4u: goto label_527ed4;
        case 0x527ed8u: goto label_527ed8;
        case 0x527edcu: goto label_527edc;
        case 0x527ee0u: goto label_527ee0;
        case 0x527ee4u: goto label_527ee4;
        case 0x527ee8u: goto label_527ee8;
        case 0x527eecu: goto label_527eec;
        case 0x527ef0u: goto label_527ef0;
        case 0x527ef4u: goto label_527ef4;
        case 0x527ef8u: goto label_527ef8;
        case 0x527efcu: goto label_527efc;
        case 0x527f00u: goto label_527f00;
        case 0x527f04u: goto label_527f04;
        case 0x527f08u: goto label_527f08;
        case 0x527f0cu: goto label_527f0c;
        case 0x527f10u: goto label_527f10;
        case 0x527f14u: goto label_527f14;
        case 0x527f18u: goto label_527f18;
        case 0x527f1cu: goto label_527f1c;
        case 0x527f20u: goto label_527f20;
        case 0x527f24u: goto label_527f24;
        case 0x527f28u: goto label_527f28;
        case 0x527f2cu: goto label_527f2c;
        case 0x527f30u: goto label_527f30;
        case 0x527f34u: goto label_527f34;
        case 0x527f38u: goto label_527f38;
        case 0x527f3cu: goto label_527f3c;
        case 0x527f40u: goto label_527f40;
        case 0x527f44u: goto label_527f44;
        case 0x527f48u: goto label_527f48;
        case 0x527f4cu: goto label_527f4c;
        case 0x527f50u: goto label_527f50;
        case 0x527f54u: goto label_527f54;
        case 0x527f58u: goto label_527f58;
        case 0x527f5cu: goto label_527f5c;
        case 0x527f60u: goto label_527f60;
        case 0x527f64u: goto label_527f64;
        case 0x527f68u: goto label_527f68;
        case 0x527f6cu: goto label_527f6c;
        case 0x527f70u: goto label_527f70;
        case 0x527f74u: goto label_527f74;
        case 0x527f78u: goto label_527f78;
        case 0x527f7cu: goto label_527f7c;
        case 0x527f80u: goto label_527f80;
        case 0x527f84u: goto label_527f84;
        case 0x527f88u: goto label_527f88;
        case 0x527f8cu: goto label_527f8c;
        case 0x527f90u: goto label_527f90;
        case 0x527f94u: goto label_527f94;
        case 0x527f98u: goto label_527f98;
        case 0x527f9cu: goto label_527f9c;
        case 0x527fa0u: goto label_527fa0;
        case 0x527fa4u: goto label_527fa4;
        case 0x527fa8u: goto label_527fa8;
        case 0x527facu: goto label_527fac;
        case 0x527fb0u: goto label_527fb0;
        case 0x527fb4u: goto label_527fb4;
        case 0x527fb8u: goto label_527fb8;
        case 0x527fbcu: goto label_527fbc;
        case 0x527fc0u: goto label_527fc0;
        case 0x527fc4u: goto label_527fc4;
        case 0x527fc8u: goto label_527fc8;
        case 0x527fccu: goto label_527fcc;
        case 0x527fd0u: goto label_527fd0;
        case 0x527fd4u: goto label_527fd4;
        case 0x527fd8u: goto label_527fd8;
        case 0x527fdcu: goto label_527fdc;
        case 0x527fe0u: goto label_527fe0;
        case 0x527fe4u: goto label_527fe4;
        case 0x527fe8u: goto label_527fe8;
        case 0x527fecu: goto label_527fec;
        case 0x527ff0u: goto label_527ff0;
        case 0x527ff4u: goto label_527ff4;
        case 0x527ff8u: goto label_527ff8;
        case 0x527ffcu: goto label_527ffc;
        case 0x528000u: goto label_528000;
        case 0x528004u: goto label_528004;
        case 0x528008u: goto label_528008;
        case 0x52800cu: goto label_52800c;
        case 0x528010u: goto label_528010;
        case 0x528014u: goto label_528014;
        case 0x528018u: goto label_528018;
        case 0x52801cu: goto label_52801c;
        case 0x528020u: goto label_528020;
        case 0x528024u: goto label_528024;
        case 0x528028u: goto label_528028;
        case 0x52802cu: goto label_52802c;
        case 0x528030u: goto label_528030;
        case 0x528034u: goto label_528034;
        case 0x528038u: goto label_528038;
        case 0x52803cu: goto label_52803c;
        case 0x528040u: goto label_528040;
        case 0x528044u: goto label_528044;
        case 0x528048u: goto label_528048;
        case 0x52804cu: goto label_52804c;
        case 0x528050u: goto label_528050;
        case 0x528054u: goto label_528054;
        case 0x528058u: goto label_528058;
        case 0x52805cu: goto label_52805c;
        case 0x528060u: goto label_528060;
        case 0x528064u: goto label_528064;
        case 0x528068u: goto label_528068;
        case 0x52806cu: goto label_52806c;
        case 0x528070u: goto label_528070;
        case 0x528074u: goto label_528074;
        case 0x528078u: goto label_528078;
        case 0x52807cu: goto label_52807c;
        case 0x528080u: goto label_528080;
        case 0x528084u: goto label_528084;
        case 0x528088u: goto label_528088;
        case 0x52808cu: goto label_52808c;
        case 0x528090u: goto label_528090;
        case 0x528094u: goto label_528094;
        case 0x528098u: goto label_528098;
        case 0x52809cu: goto label_52809c;
        case 0x5280a0u: goto label_5280a0;
        case 0x5280a4u: goto label_5280a4;
        case 0x5280a8u: goto label_5280a8;
        case 0x5280acu: goto label_5280ac;
        case 0x5280b0u: goto label_5280b0;
        case 0x5280b4u: goto label_5280b4;
        case 0x5280b8u: goto label_5280b8;
        case 0x5280bcu: goto label_5280bc;
        case 0x5280c0u: goto label_5280c0;
        case 0x5280c4u: goto label_5280c4;
        case 0x5280c8u: goto label_5280c8;
        case 0x5280ccu: goto label_5280cc;
        case 0x5280d0u: goto label_5280d0;
        case 0x5280d4u: goto label_5280d4;
        case 0x5280d8u: goto label_5280d8;
        case 0x5280dcu: goto label_5280dc;
        case 0x5280e0u: goto label_5280e0;
        case 0x5280e4u: goto label_5280e4;
        case 0x5280e8u: goto label_5280e8;
        case 0x5280ecu: goto label_5280ec;
        case 0x5280f0u: goto label_5280f0;
        case 0x5280f4u: goto label_5280f4;
        case 0x5280f8u: goto label_5280f8;
        case 0x5280fcu: goto label_5280fc;
        case 0x528100u: goto label_528100;
        case 0x528104u: goto label_528104;
        case 0x528108u: goto label_528108;
        case 0x52810cu: goto label_52810c;
        case 0x528110u: goto label_528110;
        case 0x528114u: goto label_528114;
        case 0x528118u: goto label_528118;
        case 0x52811cu: goto label_52811c;
        case 0x528120u: goto label_528120;
        case 0x528124u: goto label_528124;
        case 0x528128u: goto label_528128;
        case 0x52812cu: goto label_52812c;
        case 0x528130u: goto label_528130;
        case 0x528134u: goto label_528134;
        case 0x528138u: goto label_528138;
        case 0x52813cu: goto label_52813c;
        case 0x528140u: goto label_528140;
        case 0x528144u: goto label_528144;
        case 0x528148u: goto label_528148;
        case 0x52814cu: goto label_52814c;
        case 0x528150u: goto label_528150;
        case 0x528154u: goto label_528154;
        case 0x528158u: goto label_528158;
        case 0x52815cu: goto label_52815c;
        default: break;
    }

    ctx->pc = 0x527ca0u;

label_527ca0:
    // 0x527ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x527ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_527ca4:
    // 0x527ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x527ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_527ca8:
    // 0x527ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_527cac:
    // 0x527cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527cb0:
    // 0x527cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x527cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527cb4:
    // 0x527cb4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_527cb8:
    if (ctx->pc == 0x527CB8u) {
        ctx->pc = 0x527CB8u;
            // 0x527cb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527CBCu;
        goto label_527cbc;
    }
    ctx->pc = 0x527CB4u;
    {
        const bool branch_taken_0x527cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x527CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527CB4u;
            // 0x527cb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527cb4) {
            ctx->pc = 0x527DE8u;
            goto label_527de8;
        }
    }
    ctx->pc = 0x527CBCu;
label_527cbc:
    // 0x527cbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x527cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_527cc0:
    // 0x527cc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x527cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527cc4:
    // 0x527cc4: 0x24636630  addiu       $v1, $v1, 0x6630
    ctx->pc = 0x527cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26160));
label_527cc8:
    // 0x527cc8: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x527cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_527ccc:
    // 0x527ccc: 0x24426668  addiu       $v0, $v0, 0x6668
    ctx->pc = 0x527cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26216));
label_527cd0:
    // 0x527cd0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x527cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_527cd4:
    // 0x527cd4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x527cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_527cd8:
    // 0x527cd8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x527cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_527cdc:
    // 0x527cdc: 0xc0407c0  jal         func_101F00
label_527ce0:
    if (ctx->pc == 0x527CE0u) {
        ctx->pc = 0x527CE0u;
            // 0x527ce0: 0x24a57e00  addiu       $a1, $a1, 0x7E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32256));
        ctx->pc = 0x527CE4u;
        goto label_527ce4;
    }
    ctx->pc = 0x527CDCu;
    SET_GPR_U32(ctx, 31, 0x527CE4u);
    ctx->pc = 0x527CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527CDCu;
            // 0x527ce0: 0x24a57e00  addiu       $a1, $a1, 0x7E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527CE4u; }
        if (ctx->pc != 0x527CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527CE4u; }
        if (ctx->pc != 0x527CE4u) { return; }
    }
    ctx->pc = 0x527CE4u;
label_527ce4:
    // 0x527ce4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x527ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_527ce8:
    // 0x527ce8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_527cec:
    if (ctx->pc == 0x527CECu) {
        ctx->pc = 0x527CECu;
            // 0x527cec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x527CF0u;
        goto label_527cf0;
    }
    ctx->pc = 0x527CE8u;
    {
        const bool branch_taken_0x527ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527ce8) {
            ctx->pc = 0x527CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527CE8u;
            // 0x527cec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527CFCu;
            goto label_527cfc;
        }
    }
    ctx->pc = 0x527CF0u;
label_527cf0:
    // 0x527cf0: 0xc07507c  jal         func_1D41F0
label_527cf4:
    if (ctx->pc == 0x527CF4u) {
        ctx->pc = 0x527CF4u;
            // 0x527cf4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x527CF8u;
        goto label_527cf8;
    }
    ctx->pc = 0x527CF0u;
    SET_GPR_U32(ctx, 31, 0x527CF8u);
    ctx->pc = 0x527CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527CF0u;
            // 0x527cf4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527CF8u; }
        if (ctx->pc != 0x527CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527CF8u; }
        if (ctx->pc != 0x527CF8u) { return; }
    }
    ctx->pc = 0x527CF8u;
label_527cf8:
    // 0x527cf8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x527cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_527cfc:
    // 0x527cfc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_527d00:
    if (ctx->pc == 0x527D00u) {
        ctx->pc = 0x527D00u;
            // 0x527d00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x527D04u;
        goto label_527d04;
    }
    ctx->pc = 0x527CFCu;
    {
        const bool branch_taken_0x527cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527cfc) {
            ctx->pc = 0x527D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527CFCu;
            // 0x527d00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527D2Cu;
            goto label_527d2c;
        }
    }
    ctx->pc = 0x527D04u;
label_527d04:
    // 0x527d04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_527d08:
    if (ctx->pc == 0x527D08u) {
        ctx->pc = 0x527D0Cu;
        goto label_527d0c;
    }
    ctx->pc = 0x527D04u;
    {
        const bool branch_taken_0x527d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d04) {
            ctx->pc = 0x527D28u;
            goto label_527d28;
        }
    }
    ctx->pc = 0x527D0Cu;
label_527d0c:
    // 0x527d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_527d10:
    if (ctx->pc == 0x527D10u) {
        ctx->pc = 0x527D14u;
        goto label_527d14;
    }
    ctx->pc = 0x527D0Cu;
    {
        const bool branch_taken_0x527d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d0c) {
            ctx->pc = 0x527D28u;
            goto label_527d28;
        }
    }
    ctx->pc = 0x527D14u;
label_527d14:
    // 0x527d14: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x527d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_527d18:
    // 0x527d18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_527d1c:
    if (ctx->pc == 0x527D1Cu) {
        ctx->pc = 0x527D20u;
        goto label_527d20;
    }
    ctx->pc = 0x527D18u;
    {
        const bool branch_taken_0x527d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d18) {
            ctx->pc = 0x527D28u;
            goto label_527d28;
        }
    }
    ctx->pc = 0x527D20u;
label_527d20:
    // 0x527d20: 0xc0400a8  jal         func_1002A0
label_527d24:
    if (ctx->pc == 0x527D24u) {
        ctx->pc = 0x527D28u;
        goto label_527d28;
    }
    ctx->pc = 0x527D20u;
    SET_GPR_U32(ctx, 31, 0x527D28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527D28u; }
        if (ctx->pc != 0x527D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527D28u; }
        if (ctx->pc != 0x527D28u) { return; }
    }
    ctx->pc = 0x527D28u;
label_527d28:
    // 0x527d28: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x527d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_527d2c:
    // 0x527d2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_527d30:
    if (ctx->pc == 0x527D30u) {
        ctx->pc = 0x527D30u;
            // 0x527d30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x527D34u;
        goto label_527d34;
    }
    ctx->pc = 0x527D2Cu;
    {
        const bool branch_taken_0x527d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d2c) {
            ctx->pc = 0x527D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527D2Cu;
            // 0x527d30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527D5Cu;
            goto label_527d5c;
        }
    }
    ctx->pc = 0x527D34u;
label_527d34:
    // 0x527d34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_527d38:
    if (ctx->pc == 0x527D38u) {
        ctx->pc = 0x527D3Cu;
        goto label_527d3c;
    }
    ctx->pc = 0x527D34u;
    {
        const bool branch_taken_0x527d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d34) {
            ctx->pc = 0x527D58u;
            goto label_527d58;
        }
    }
    ctx->pc = 0x527D3Cu;
label_527d3c:
    // 0x527d3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_527d40:
    if (ctx->pc == 0x527D40u) {
        ctx->pc = 0x527D44u;
        goto label_527d44;
    }
    ctx->pc = 0x527D3Cu;
    {
        const bool branch_taken_0x527d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d3c) {
            ctx->pc = 0x527D58u;
            goto label_527d58;
        }
    }
    ctx->pc = 0x527D44u;
label_527d44:
    // 0x527d44: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x527d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_527d48:
    // 0x527d48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_527d4c:
    if (ctx->pc == 0x527D4Cu) {
        ctx->pc = 0x527D50u;
        goto label_527d50;
    }
    ctx->pc = 0x527D48u;
    {
        const bool branch_taken_0x527d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d48) {
            ctx->pc = 0x527D58u;
            goto label_527d58;
        }
    }
    ctx->pc = 0x527D50u;
label_527d50:
    // 0x527d50: 0xc0400a8  jal         func_1002A0
label_527d54:
    if (ctx->pc == 0x527D54u) {
        ctx->pc = 0x527D58u;
        goto label_527d58;
    }
    ctx->pc = 0x527D50u;
    SET_GPR_U32(ctx, 31, 0x527D58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527D58u; }
        if (ctx->pc != 0x527D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527D58u; }
        if (ctx->pc != 0x527D58u) { return; }
    }
    ctx->pc = 0x527D58u;
label_527d58:
    // 0x527d58: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x527d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_527d5c:
    // 0x527d5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_527d60:
    if (ctx->pc == 0x527D60u) {
        ctx->pc = 0x527D64u;
        goto label_527d64;
    }
    ctx->pc = 0x527D5Cu;
    {
        const bool branch_taken_0x527d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d5c) {
            ctx->pc = 0x527D78u;
            goto label_527d78;
        }
    }
    ctx->pc = 0x527D64u;
label_527d64:
    // 0x527d64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x527d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_527d68:
    // 0x527d68: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x527d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_527d6c:
    // 0x527d6c: 0x24636620  addiu       $v1, $v1, 0x6620
    ctx->pc = 0x527d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26144));
label_527d70:
    // 0x527d70: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x527d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_527d74:
    // 0x527d74: 0xac40b5f8  sw          $zero, -0x4A08($v0)
    ctx->pc = 0x527d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948344), GPR_U32(ctx, 0));
label_527d78:
    // 0x527d78: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_527d7c:
    if (ctx->pc == 0x527D7Cu) {
        ctx->pc = 0x527D7Cu;
            // 0x527d7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x527D80u;
        goto label_527d80;
    }
    ctx->pc = 0x527D78u;
    {
        const bool branch_taken_0x527d78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d78) {
            ctx->pc = 0x527D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527D78u;
            // 0x527d7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527DD4u;
            goto label_527dd4;
        }
    }
    ctx->pc = 0x527D80u;
label_527d80:
    // 0x527d80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_527d84:
    // 0x527d84: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x527d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_527d88:
    // 0x527d88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x527d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_527d8c:
    // 0x527d8c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x527d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_527d90:
    // 0x527d90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_527d94:
    if (ctx->pc == 0x527D94u) {
        ctx->pc = 0x527D94u;
            // 0x527d94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x527D98u;
        goto label_527d98;
    }
    ctx->pc = 0x527D90u;
    {
        const bool branch_taken_0x527d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x527d90) {
            ctx->pc = 0x527D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527D90u;
            // 0x527d94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527DACu;
            goto label_527dac;
        }
    }
    ctx->pc = 0x527D98u;
label_527d98:
    // 0x527d98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527d9c:
    // 0x527d9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x527d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_527da0:
    // 0x527da0: 0x320f809  jalr        $t9
label_527da4:
    if (ctx->pc == 0x527DA4u) {
        ctx->pc = 0x527DA4u;
            // 0x527da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x527DA8u;
        goto label_527da8;
    }
    ctx->pc = 0x527DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527DA8u);
        ctx->pc = 0x527DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527DA0u;
            // 0x527da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527DA8u; }
            if (ctx->pc != 0x527DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x527DA8u;
label_527da8:
    // 0x527da8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x527da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_527dac:
    // 0x527dac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_527db0:
    if (ctx->pc == 0x527DB0u) {
        ctx->pc = 0x527DB0u;
            // 0x527db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527DB4u;
        goto label_527db4;
    }
    ctx->pc = 0x527DACu;
    {
        const bool branch_taken_0x527dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x527dac) {
            ctx->pc = 0x527DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527DACu;
            // 0x527db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527DC8u;
            goto label_527dc8;
        }
    }
    ctx->pc = 0x527DB4u;
label_527db4:
    // 0x527db4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527db8:
    // 0x527db8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x527db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_527dbc:
    // 0x527dbc: 0x320f809  jalr        $t9
label_527dc0:
    if (ctx->pc == 0x527DC0u) {
        ctx->pc = 0x527DC0u;
            // 0x527dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x527DC4u;
        goto label_527dc4;
    }
    ctx->pc = 0x527DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527DC4u);
        ctx->pc = 0x527DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527DBCu;
            // 0x527dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527DC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527DC4u; }
            if (ctx->pc != 0x527DC4u) { return; }
        }
        }
    }
    ctx->pc = 0x527DC4u;
label_527dc4:
    // 0x527dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x527dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_527dc8:
    // 0x527dc8: 0xc075bf8  jal         func_1D6FE0
label_527dcc:
    if (ctx->pc == 0x527DCCu) {
        ctx->pc = 0x527DCCu;
            // 0x527dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527DD0u;
        goto label_527dd0;
    }
    ctx->pc = 0x527DC8u;
    SET_GPR_U32(ctx, 31, 0x527DD0u);
    ctx->pc = 0x527DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527DC8u;
            // 0x527dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527DD0u; }
        if (ctx->pc != 0x527DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527DD0u; }
        if (ctx->pc != 0x527DD0u) { return; }
    }
    ctx->pc = 0x527DD0u;
label_527dd0:
    // 0x527dd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x527dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_527dd4:
    // 0x527dd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x527dd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_527dd8:
    // 0x527dd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_527ddc:
    if (ctx->pc == 0x527DDCu) {
        ctx->pc = 0x527DDCu;
            // 0x527ddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527DE0u;
        goto label_527de0;
    }
    ctx->pc = 0x527DD8u;
    {
        const bool branch_taken_0x527dd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x527dd8) {
            ctx->pc = 0x527DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527DD8u;
            // 0x527ddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527DECu;
            goto label_527dec;
        }
    }
    ctx->pc = 0x527DE0u;
label_527de0:
    // 0x527de0: 0xc0400a8  jal         func_1002A0
label_527de4:
    if (ctx->pc == 0x527DE4u) {
        ctx->pc = 0x527DE4u;
            // 0x527de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527DE8u;
        goto label_527de8;
    }
    ctx->pc = 0x527DE0u;
    SET_GPR_U32(ctx, 31, 0x527DE8u);
    ctx->pc = 0x527DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527DE0u;
            // 0x527de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527DE8u; }
        if (ctx->pc != 0x527DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527DE8u; }
        if (ctx->pc != 0x527DE8u) { return; }
    }
    ctx->pc = 0x527DE8u;
label_527de8:
    // 0x527de8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x527de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_527dec:
    // 0x527dec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x527decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_527df0:
    // 0x527df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527df4:
    // 0x527df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527df8:
    // 0x527df8: 0x3e00008  jr          $ra
label_527dfc:
    if (ctx->pc == 0x527DFCu) {
        ctx->pc = 0x527DFCu;
            // 0x527dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x527E00u;
        goto label_527e00;
    }
    ctx->pc = 0x527DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527DF8u;
            // 0x527dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527E00u;
label_527e00:
    // 0x527e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x527e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_527e04:
    // 0x527e04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x527e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_527e08:
    // 0x527e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_527e0c:
    // 0x527e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527e10:
    // 0x527e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x527e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527e14:
    // 0x527e14: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_527e18:
    if (ctx->pc == 0x527E18u) {
        ctx->pc = 0x527E18u;
            // 0x527e18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527E1Cu;
        goto label_527e1c;
    }
    ctx->pc = 0x527E14u;
    {
        const bool branch_taken_0x527e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x527E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527E14u;
            // 0x527e18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527e14) {
            ctx->pc = 0x527EDCu;
            goto label_527edc;
        }
    }
    ctx->pc = 0x527E1Cu;
label_527e1c:
    // 0x527e1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x527e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_527e20:
    // 0x527e20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x527e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527e24:
    // 0x527e24: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x527e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
label_527e28:
    // 0x527e28: 0x244265c0  addiu       $v0, $v0, 0x65C0
    ctx->pc = 0x527e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26048));
label_527e2c:
    // 0x527e2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x527e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_527e30:
    // 0x527e30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x527e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_527e34:
    // 0x527e34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527e38:
    // 0x527e38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x527e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_527e3c:
    // 0x527e3c: 0x320f809  jalr        $t9
label_527e40:
    if (ctx->pc == 0x527E40u) {
        ctx->pc = 0x527E44u;
        goto label_527e44;
    }
    ctx->pc = 0x527E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527E44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x527E44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527E44u; }
            if (ctx->pc != 0x527E44u) { return; }
        }
        }
    }
    ctx->pc = 0x527E44u;
label_527e44:
    // 0x527e44: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_527e48:
    if (ctx->pc == 0x527E48u) {
        ctx->pc = 0x527E48u;
            // 0x527e48: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x527E4Cu;
        goto label_527e4c;
    }
    ctx->pc = 0x527E44u;
    {
        const bool branch_taken_0x527e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x527e44) {
            ctx->pc = 0x527E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527E44u;
            // 0x527e48: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527EC8u;
            goto label_527ec8;
        }
    }
    ctx->pc = 0x527E4Cu;
label_527e4c:
    // 0x527e4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x527e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_527e50:
    // 0x527e50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_527e54:
    // 0x527e54: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x527e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_527e58:
    // 0x527e58: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x527e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_527e5c:
    // 0x527e5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x527e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_527e60:
    // 0x527e60: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x527e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_527e64:
    // 0x527e64: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x527e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_527e68:
    // 0x527e68: 0xc0aecc4  jal         func_2BB310
label_527e6c:
    if (ctx->pc == 0x527E6Cu) {
        ctx->pc = 0x527E6Cu;
            // 0x527e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x527E70u;
        goto label_527e70;
    }
    ctx->pc = 0x527E68u;
    SET_GPR_U32(ctx, 31, 0x527E70u);
    ctx->pc = 0x527E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527E68u;
            // 0x527e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527E70u; }
        if (ctx->pc != 0x527E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527E70u; }
        if (ctx->pc != 0x527E70u) { return; }
    }
    ctx->pc = 0x527E70u;
label_527e70:
    // 0x527e70: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x527e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_527e74:
    // 0x527e74: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x527e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_527e78:
    // 0x527e78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_527e7c:
    if (ctx->pc == 0x527E7Cu) {
        ctx->pc = 0x527E7Cu;
            // 0x527e7c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x527E80u;
        goto label_527e80;
    }
    ctx->pc = 0x527E78u;
    {
        const bool branch_taken_0x527e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x527e78) {
            ctx->pc = 0x527E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527E78u;
            // 0x527e7c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527E94u;
            goto label_527e94;
        }
    }
    ctx->pc = 0x527E80u;
label_527e80:
    // 0x527e80: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x527e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_527e84:
    // 0x527e84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x527e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_527e88:
    // 0x527e88: 0x320f809  jalr        $t9
label_527e8c:
    if (ctx->pc == 0x527E8Cu) {
        ctx->pc = 0x527E8Cu;
            // 0x527e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x527E90u;
        goto label_527e90;
    }
    ctx->pc = 0x527E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527E90u);
        ctx->pc = 0x527E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527E88u;
            // 0x527e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527E90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527E90u; }
            if (ctx->pc != 0x527E90u) { return; }
        }
        }
    }
    ctx->pc = 0x527E90u;
label_527e90:
    // 0x527e90: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x527e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_527e94:
    // 0x527e94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x527e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_527e98:
    // 0x527e98: 0xc0aec9c  jal         func_2BB270
label_527e9c:
    if (ctx->pc == 0x527E9Cu) {
        ctx->pc = 0x527E9Cu;
            // 0x527e9c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x527EA0u;
        goto label_527ea0;
    }
    ctx->pc = 0x527E98u;
    SET_GPR_U32(ctx, 31, 0x527EA0u);
    ctx->pc = 0x527E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527E98u;
            // 0x527e9c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EA0u; }
        if (ctx->pc != 0x527EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EA0u; }
        if (ctx->pc != 0x527EA0u) { return; }
    }
    ctx->pc = 0x527EA0u;
label_527ea0:
    // 0x527ea0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x527ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_527ea4:
    // 0x527ea4: 0xc0aec88  jal         func_2BB220
label_527ea8:
    if (ctx->pc == 0x527EA8u) {
        ctx->pc = 0x527EA8u;
            // 0x527ea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x527EACu;
        goto label_527eac;
    }
    ctx->pc = 0x527EA4u;
    SET_GPR_U32(ctx, 31, 0x527EACu);
    ctx->pc = 0x527EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527EA4u;
            // 0x527ea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EACu; }
        if (ctx->pc != 0x527EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EACu; }
        if (ctx->pc != 0x527EACu) { return; }
    }
    ctx->pc = 0x527EACu;
label_527eac:
    // 0x527eac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x527eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_527eb0:
    // 0x527eb0: 0xc0aec0c  jal         func_2BB030
label_527eb4:
    if (ctx->pc == 0x527EB4u) {
        ctx->pc = 0x527EB4u;
            // 0x527eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527EB8u;
        goto label_527eb8;
    }
    ctx->pc = 0x527EB0u;
    SET_GPR_U32(ctx, 31, 0x527EB8u);
    ctx->pc = 0x527EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527EB0u;
            // 0x527eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EB8u; }
        if (ctx->pc != 0x527EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EB8u; }
        if (ctx->pc != 0x527EB8u) { return; }
    }
    ctx->pc = 0x527EB8u;
label_527eb8:
    // 0x527eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x527eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_527ebc:
    // 0x527ebc: 0xc0aeaa8  jal         func_2BAAA0
label_527ec0:
    if (ctx->pc == 0x527EC0u) {
        ctx->pc = 0x527EC0u;
            // 0x527ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527EC4u;
        goto label_527ec4;
    }
    ctx->pc = 0x527EBCu;
    SET_GPR_U32(ctx, 31, 0x527EC4u);
    ctx->pc = 0x527EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527EBCu;
            // 0x527ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EC4u; }
        if (ctx->pc != 0x527EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EC4u; }
        if (ctx->pc != 0x527EC4u) { return; }
    }
    ctx->pc = 0x527EC4u;
label_527ec4:
    // 0x527ec4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x527ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_527ec8:
    // 0x527ec8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x527ec8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_527ecc:
    // 0x527ecc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_527ed0:
    if (ctx->pc == 0x527ED0u) {
        ctx->pc = 0x527ED0u;
            // 0x527ed0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527ED4u;
        goto label_527ed4;
    }
    ctx->pc = 0x527ECCu;
    {
        const bool branch_taken_0x527ecc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x527ecc) {
            ctx->pc = 0x527ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527ECCu;
            // 0x527ed0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527EE0u;
            goto label_527ee0;
        }
    }
    ctx->pc = 0x527ED4u;
label_527ed4:
    // 0x527ed4: 0xc0400a8  jal         func_1002A0
label_527ed8:
    if (ctx->pc == 0x527ED8u) {
        ctx->pc = 0x527ED8u;
            // 0x527ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527EDCu;
        goto label_527edc;
    }
    ctx->pc = 0x527ED4u;
    SET_GPR_U32(ctx, 31, 0x527EDCu);
    ctx->pc = 0x527ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527ED4u;
            // 0x527ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EDCu; }
        if (ctx->pc != 0x527EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527EDCu; }
        if (ctx->pc != 0x527EDCu) { return; }
    }
    ctx->pc = 0x527EDCu;
label_527edc:
    // 0x527edc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x527edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_527ee0:
    // 0x527ee0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x527ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_527ee4:
    // 0x527ee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527ee8:
    // 0x527ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527eec:
    // 0x527eec: 0x3e00008  jr          $ra
label_527ef0:
    if (ctx->pc == 0x527EF0u) {
        ctx->pc = 0x527EF0u;
            // 0x527ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x527EF4u;
        goto label_527ef4;
    }
    ctx->pc = 0x527EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527EECu;
            // 0x527ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527EF4u;
label_527ef4:
    // 0x527ef4: 0x0  nop
    ctx->pc = 0x527ef4u;
    // NOP
label_527ef8:
    // 0x527ef8: 0x0  nop
    ctx->pc = 0x527ef8u;
    // NOP
label_527efc:
    // 0x527efc: 0x0  nop
    ctx->pc = 0x527efcu;
    // NOP
label_527f00:
    // 0x527f00: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x527f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_527f04:
    // 0x527f04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x527f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_527f08:
    // 0x527f08: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x527f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_527f0c:
    // 0x527f0c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x527f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_527f10:
    // 0x527f10: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x527f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_527f14:
    // 0x527f14: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x527f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_527f18:
    // 0x527f18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x527f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_527f1c:
    // 0x527f1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x527f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_527f20:
    // 0x527f20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x527f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_527f24:
    // 0x527f24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x527f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_527f28:
    // 0x527f28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x527f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_527f2c:
    // 0x527f2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x527f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_527f30:
    // 0x527f30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x527f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_527f34:
    // 0x527f34: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x527f34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_527f38:
    // 0x527f38: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_527f3c:
    if (ctx->pc == 0x527F3Cu) {
        ctx->pc = 0x527F3Cu;
            // 0x527f3c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527F40u;
        goto label_527f40;
    }
    ctx->pc = 0x527F38u;
    {
        const bool branch_taken_0x527f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x527F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527F38u;
            // 0x527f3c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527f38) {
            ctx->pc = 0x527F88u;
            goto label_527f88;
        }
    }
    ctx->pc = 0x527F40u;
label_527f40:
    // 0x527f40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x527f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_527f44:
    // 0x527f44: 0x10a30076  beq         $a1, $v1, . + 4 + (0x76 << 2)
label_527f48:
    if (ctx->pc == 0x527F48u) {
        ctx->pc = 0x527F4Cu;
        goto label_527f4c;
    }
    ctx->pc = 0x527F44u;
    {
        const bool branch_taken_0x527f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x527f44) {
            ctx->pc = 0x528120u;
            goto label_528120;
        }
    }
    ctx->pc = 0x527F4Cu;
label_527f4c:
    // 0x527f4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x527f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_527f50:
    // 0x527f50: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_527f54:
    if (ctx->pc == 0x527F54u) {
        ctx->pc = 0x527F58u;
        goto label_527f58;
    }
    ctx->pc = 0x527F50u;
    {
        const bool branch_taken_0x527f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x527f50) {
            ctx->pc = 0x527F60u;
            goto label_527f60;
        }
    }
    ctx->pc = 0x527F58u;
label_527f58:
    // 0x527f58: 0x10000071  b           . + 4 + (0x71 << 2)
label_527f5c:
    if (ctx->pc == 0x527F5Cu) {
        ctx->pc = 0x527F60u;
        goto label_527f60;
    }
    ctx->pc = 0x527F58u;
    {
        const bool branch_taken_0x527f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x527f58) {
            ctx->pc = 0x528120u;
            goto label_528120;
        }
    }
    ctx->pc = 0x527F60u;
label_527f60:
    // 0x527f60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x527f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_527f64:
    // 0x527f64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527f68:
    // 0x527f68: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x527f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_527f6c:
    // 0x527f6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x527f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_527f70:
    // 0x527f70: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x527f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_527f74:
    // 0x527f74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x527f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_527f78:
    // 0x527f78: 0x320f809  jalr        $t9
label_527f7c:
    if (ctx->pc == 0x527F7Cu) {
        ctx->pc = 0x527F7Cu;
            // 0x527f7c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x527F80u;
        goto label_527f80;
    }
    ctx->pc = 0x527F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527F80u);
        ctx->pc = 0x527F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527F78u;
            // 0x527f7c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527F80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527F80u; }
            if (ctx->pc != 0x527F80u) { return; }
        }
        }
    }
    ctx->pc = 0x527F80u;
label_527f80:
    // 0x527f80: 0x10000067  b           . + 4 + (0x67 << 2)
label_527f84:
    if (ctx->pc == 0x527F84u) {
        ctx->pc = 0x527F88u;
        goto label_527f88;
    }
    ctx->pc = 0x527F80u;
    {
        const bool branch_taken_0x527f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x527f80) {
            ctx->pc = 0x528120u;
            goto label_528120;
        }
    }
    ctx->pc = 0x527F88u;
label_527f88:
    // 0x527f88: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x527f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_527f8c:
    // 0x527f8c: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_527f90:
    if (ctx->pc == 0x527F90u) {
        ctx->pc = 0x527F90u;
            // 0x527f90: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x527F94u;
        goto label_527f94;
    }
    ctx->pc = 0x527F8Cu;
    {
        const bool branch_taken_0x527f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x527F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527F8Cu;
            // 0x527f90: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527f8c) {
            ctx->pc = 0x528120u;
            goto label_528120;
        }
    }
    ctx->pc = 0x527F94u;
label_527f94:
    // 0x527f94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x527f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_527f98:
    // 0x527f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x527f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527f9c:
    // 0x527f9c: 0x8c55e378  lw          $s5, -0x1C88($v0)
    ctx->pc = 0x527f9cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_527fa0:
    // 0x527fa0: 0x27d00084  addiu       $s0, $fp, 0x84
    ctx->pc = 0x527fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_527fa4:
    // 0x527fa4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x527fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_527fa8:
    // 0x527fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x527fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_527fac:
    // 0x527fac: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x527facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_527fb0:
    // 0x527fb0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x527fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_527fb4:
    // 0x527fb4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x527fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_527fb8:
    // 0x527fb8: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x527fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_527fbc:
    // 0x527fbc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x527fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_527fc0:
    // 0x527fc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x527fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_527fc4:
    // 0x527fc4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x527fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_527fc8:
    // 0x527fc8: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x527fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_527fcc:
    // 0x527fcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x527fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_527fd0:
    // 0x527fd0: 0x8fc20084  lw          $v0, 0x84($fp)
    ctx->pc = 0x527fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 132)));
label_527fd4:
    // 0x527fd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x527fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_527fd8:
    // 0x527fd8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x527fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_527fdc:
    // 0x527fdc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x527fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_527fe0:
    // 0x527fe0: 0xc04e4a4  jal         func_139290
label_527fe4:
    if (ctx->pc == 0x527FE4u) {
        ctx->pc = 0x527FE4u;
            // 0x527fe4: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x527FE8u;
        goto label_527fe8;
    }
    ctx->pc = 0x527FE0u;
    SET_GPR_U32(ctx, 31, 0x527FE8u);
    ctx->pc = 0x527FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527FE0u;
            // 0x527fe4: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527FE8u; }
        if (ctx->pc != 0x527FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527FE8u; }
        if (ctx->pc != 0x527FE8u) { return; }
    }
    ctx->pc = 0x527FE8u;
label_527fe8:
    // 0x527fe8: 0xc04e738  jal         func_139CE0
label_527fec:
    if (ctx->pc == 0x527FECu) {
        ctx->pc = 0x527FECu;
            // 0x527fec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x527FF0u;
        goto label_527ff0;
    }
    ctx->pc = 0x527FE8u;
    SET_GPR_U32(ctx, 31, 0x527FF0u);
    ctx->pc = 0x527FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527FE8u;
            // 0x527fec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527FF0u; }
        if (ctx->pc != 0x527FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527FF0u; }
        if (ctx->pc != 0x527FF0u) { return; }
    }
    ctx->pc = 0x527FF0u;
label_527ff0:
    // 0x527ff0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x527ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_527ff4:
    // 0x527ff4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x527ff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527ff8:
    // 0x527ff8: 0xc454cc48  lwc1        $f20, -0x33B8($v0)
    ctx->pc = 0x527ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_527ffc:
    // 0x527ffc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x527ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528000:
    // 0x528000: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x528000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_528004:
    // 0x528004: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x528004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_528008:
    // 0x528008: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x528008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52800c:
    // 0x52800c: 0xc14a058  jal         func_528160
label_528010:
    if (ctx->pc == 0x528010u) {
        ctx->pc = 0x528010u;
            // 0x528010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528014u;
        goto label_528014;
    }
    ctx->pc = 0x52800Cu;
    SET_GPR_U32(ctx, 31, 0x528014u);
    ctx->pc = 0x528010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52800Cu;
            // 0x528010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x528160u;
    if (runtime->hasFunction(0x528160u)) {
        auto targetFn = runtime->lookupFunction(0x528160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528014u; }
        if (ctx->pc != 0x528014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00528160_0x528160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528014u; }
        if (ctx->pc != 0x528014u) { return; }
    }
    ctx->pc = 0x528014u;
label_528014:
    // 0x528014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x528014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_528018:
    // 0x528018: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
label_52801c:
    if (ctx->pc == 0x52801Cu) {
        ctx->pc = 0x528020u;
        goto label_528020;
    }
    ctx->pc = 0x528018u;
    {
        const bool branch_taken_0x528018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x528018) {
            ctx->pc = 0x528108u;
            goto label_528108;
        }
    }
    ctx->pc = 0x528020u;
label_528020:
    // 0x528020: 0xc0d1c14  jal         func_347050
label_528024:
    if (ctx->pc == 0x528024u) {
        ctx->pc = 0x528024u;
            // 0x528024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528028u;
        goto label_528028;
    }
    ctx->pc = 0x528020u;
    SET_GPR_U32(ctx, 31, 0x528028u);
    ctx->pc = 0x528024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528020u;
            // 0x528024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528028u; }
        if (ctx->pc != 0x528028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528028u; }
        if (ctx->pc != 0x528028u) { return; }
    }
    ctx->pc = 0x528028u;
label_528028:
    // 0x528028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x528028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52802c:
    // 0x52802c: 0xc04f278  jal         func_13C9E0
label_528030:
    if (ctx->pc == 0x528030u) {
        ctx->pc = 0x528030u;
            // 0x528030: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x528034u;
        goto label_528034;
    }
    ctx->pc = 0x52802Cu;
    SET_GPR_U32(ctx, 31, 0x528034u);
    ctx->pc = 0x528030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52802Cu;
            // 0x528030: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528034u; }
        if (ctx->pc != 0x528034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528034u; }
        if (ctx->pc != 0x528034u) { return; }
    }
    ctx->pc = 0x528034u;
label_528034:
    // 0x528034: 0xc0d1c10  jal         func_347040
label_528038:
    if (ctx->pc == 0x528038u) {
        ctx->pc = 0x528038u;
            // 0x528038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52803Cu;
        goto label_52803c;
    }
    ctx->pc = 0x528034u;
    SET_GPR_U32(ctx, 31, 0x52803Cu);
    ctx->pc = 0x528038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528034u;
            // 0x528038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52803Cu; }
        if (ctx->pc != 0x52803Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52803Cu; }
        if (ctx->pc != 0x52803Cu) { return; }
    }
    ctx->pc = 0x52803Cu;
label_52803c:
    // 0x52803c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_528040:
    // 0x528040: 0xc04ce80  jal         func_133A00
label_528044:
    if (ctx->pc == 0x528044u) {
        ctx->pc = 0x528044u;
            // 0x528044: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x528048u;
        goto label_528048;
    }
    ctx->pc = 0x528040u;
    SET_GPR_U32(ctx, 31, 0x528048u);
    ctx->pc = 0x528044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528040u;
            // 0x528044: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528048u; }
        if (ctx->pc != 0x528048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528048u; }
        if (ctx->pc != 0x528048u) { return; }
    }
    ctx->pc = 0x528048u;
label_528048:
    // 0x528048: 0xc0d4108  jal         func_350420
label_52804c:
    if (ctx->pc == 0x52804Cu) {
        ctx->pc = 0x528050u;
        goto label_528050;
    }
    ctx->pc = 0x528048u;
    SET_GPR_U32(ctx, 31, 0x528050u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528050u; }
        if (ctx->pc != 0x528050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528050u; }
        if (ctx->pc != 0x528050u) { return; }
    }
    ctx->pc = 0x528050u;
label_528050:
    // 0x528050: 0xc0b36b4  jal         func_2CDAD0
label_528054:
    if (ctx->pc == 0x528054u) {
        ctx->pc = 0x528054u;
            // 0x528054: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528058u;
        goto label_528058;
    }
    ctx->pc = 0x528050u;
    SET_GPR_U32(ctx, 31, 0x528058u);
    ctx->pc = 0x528054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528050u;
            // 0x528054: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528058u; }
        if (ctx->pc != 0x528058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528058u; }
        if (ctx->pc != 0x528058u) { return; }
    }
    ctx->pc = 0x528058u;
label_528058:
    // 0x528058: 0xc0b9c64  jal         func_2E7190
label_52805c:
    if (ctx->pc == 0x52805Cu) {
        ctx->pc = 0x52805Cu;
            // 0x52805c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x528060u;
        goto label_528060;
    }
    ctx->pc = 0x528058u;
    SET_GPR_U32(ctx, 31, 0x528060u);
    ctx->pc = 0x52805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528058u;
            // 0x52805c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528060u; }
        if (ctx->pc != 0x528060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528060u; }
        if (ctx->pc != 0x528060u) { return; }
    }
    ctx->pc = 0x528060u;
label_528060:
    // 0x528060: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x528060u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_528064:
    // 0x528064: 0xc0d4104  jal         func_350410
label_528068:
    if (ctx->pc == 0x528068u) {
        ctx->pc = 0x528068u;
            // 0x528068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52806Cu;
        goto label_52806c;
    }
    ctx->pc = 0x528064u;
    SET_GPR_U32(ctx, 31, 0x52806Cu);
    ctx->pc = 0x528068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528064u;
            // 0x528068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52806Cu; }
        if (ctx->pc != 0x52806Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52806Cu; }
        if (ctx->pc != 0x52806Cu) { return; }
    }
    ctx->pc = 0x52806Cu;
label_52806c:
    // 0x52806c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x52806cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_528070:
    // 0x528070: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x528070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_528074:
    // 0x528074: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x528074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_528078:
    // 0x528078: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x528078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52807c:
    // 0x52807c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x52807cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_528080:
    // 0x528080: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x528080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_528084:
    // 0x528084: 0xc0d40ac  jal         func_3502B0
label_528088:
    if (ctx->pc == 0x528088u) {
        ctx->pc = 0x528088u;
            // 0x528088: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x52808Cu;
        goto label_52808c;
    }
    ctx->pc = 0x528084u;
    SET_GPR_U32(ctx, 31, 0x52808Cu);
    ctx->pc = 0x528088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528084u;
            // 0x528088: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52808Cu; }
        if (ctx->pc != 0x52808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52808Cu; }
        if (ctx->pc != 0x52808Cu) { return; }
    }
    ctx->pc = 0x52808Cu;
label_52808c:
    // 0x52808c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x52808cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_528090:
    // 0x528090: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_528094:
    if (ctx->pc == 0x528094u) {
        ctx->pc = 0x528094u;
            // 0x528094: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x528098u;
        goto label_528098;
    }
    ctx->pc = 0x528090u;
    {
        const bool branch_taken_0x528090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x528094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528090u;
            // 0x528094: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528090) {
            ctx->pc = 0x528108u;
            goto label_528108;
        }
    }
    ctx->pc = 0x528098u;
label_528098:
    // 0x528098: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x528098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_52809c:
    // 0x52809c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x52809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5280a0:
    // 0x5280a0: 0xc04cd60  jal         func_133580
label_5280a4:
    if (ctx->pc == 0x5280A4u) {
        ctx->pc = 0x5280A4u;
            // 0x5280a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5280A8u;
        goto label_5280a8;
    }
    ctx->pc = 0x5280A0u;
    SET_GPR_U32(ctx, 31, 0x5280A8u);
    ctx->pc = 0x5280A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5280A0u;
            // 0x5280a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5280A8u; }
        if (ctx->pc != 0x5280A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5280A8u; }
        if (ctx->pc != 0x5280A8u) { return; }
    }
    ctx->pc = 0x5280A8u;
label_5280a8:
    // 0x5280a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5280a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5280ac:
    // 0x5280ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x5280acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_5280b0:
    // 0x5280b0: 0x320f809  jalr        $t9
label_5280b4:
    if (ctx->pc == 0x5280B4u) {
        ctx->pc = 0x5280B4u;
            // 0x5280b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5280B8u;
        goto label_5280b8;
    }
    ctx->pc = 0x5280B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5280B8u);
        ctx->pc = 0x5280B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5280B0u;
            // 0x5280b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5280B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5280B8u; }
            if (ctx->pc != 0x5280B8u) { return; }
        }
        }
    }
    ctx->pc = 0x5280B8u;
label_5280b8:
    // 0x5280b8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x5280b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5280bc:
    // 0x5280bc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x5280bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_5280c0:
    // 0x5280c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x5280c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5280c4:
    // 0x5280c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5280c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5280c8:
    // 0x5280c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x5280c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5280cc:
    // 0x5280cc: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x5280ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5280d0:
    // 0x5280d0: 0xc04cfcc  jal         func_133F30
label_5280d4:
    if (ctx->pc == 0x5280D4u) {
        ctx->pc = 0x5280D4u;
            // 0x5280d4: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x5280D8u;
        goto label_5280d8;
    }
    ctx->pc = 0x5280D0u;
    SET_GPR_U32(ctx, 31, 0x5280D8u);
    ctx->pc = 0x5280D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5280D0u;
            // 0x5280d4: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5280D8u; }
        if (ctx->pc != 0x5280D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5280D8u; }
        if (ctx->pc != 0x5280D8u) { return; }
    }
    ctx->pc = 0x5280D8u;
label_5280d8:
    // 0x5280d8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x5280d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_5280dc:
    // 0x5280dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x5280dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5280e0:
    // 0x5280e0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x5280e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_5280e4:
    // 0x5280e4: 0xc054bbc  jal         func_152EF0
label_5280e8:
    if (ctx->pc == 0x5280E8u) {
        ctx->pc = 0x5280E8u;
            // 0x5280e8: 0xc64c00d8  lwc1        $f12, 0xD8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x5280ECu;
        goto label_5280ec;
    }
    ctx->pc = 0x5280E4u;
    SET_GPR_U32(ctx, 31, 0x5280ECu);
    ctx->pc = 0x5280E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5280E4u;
            // 0x5280e8: 0xc64c00d8  lwc1        $f12, 0xD8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5280ECu; }
        if (ctx->pc != 0x5280ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5280ECu; }
        if (ctx->pc != 0x5280ECu) { return; }
    }
    ctx->pc = 0x5280ECu;
label_5280ec:
    // 0x5280ec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x5280ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_5280f0:
    // 0x5280f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x5280f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5280f4:
    // 0x5280f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x5280f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5280f8:
    // 0x5280f8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x5280f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_5280fc:
    // 0x5280fc: 0xc054c2c  jal         func_1530B0
label_528100:
    if (ctx->pc == 0x528100u) {
        ctx->pc = 0x528100u;
            // 0x528100: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x528104u;
        goto label_528104;
    }
    ctx->pc = 0x5280FCu;
    SET_GPR_U32(ctx, 31, 0x528104u);
    ctx->pc = 0x528100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5280FCu;
            // 0x528100: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528104u; }
        if (ctx->pc != 0x528104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528104u; }
        if (ctx->pc != 0x528104u) { return; }
    }
    ctx->pc = 0x528104u;
label_528104:
    // 0x528104: 0x0  nop
    ctx->pc = 0x528104u;
    // NOP
label_528108:
    // 0x528108: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x528108u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_52810c:
    // 0x52810c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x52810cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_528110:
    // 0x528110: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x528110u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_528114:
    // 0x528114: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_528118:
    if (ctx->pc == 0x528118u) {
        ctx->pc = 0x528118u;
            // 0x528118: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x52811Cu;
        goto label_52811c;
    }
    ctx->pc = 0x528114u;
    {
        const bool branch_taken_0x528114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x528118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528114u;
            // 0x528118: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528114) {
            ctx->pc = 0x528000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_528000;
        }
    }
    ctx->pc = 0x52811Cu;
label_52811c:
    // 0x52811c: 0x0  nop
    ctx->pc = 0x52811cu;
    // NOP
label_528120:
    // 0x528120: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x528120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_528124:
    // 0x528124: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x528124u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_528128:
    // 0x528128: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x528128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52812c:
    // 0x52812c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x52812cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_528130:
    // 0x528130: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x528130u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_528134:
    // 0x528134: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x528134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_528138:
    // 0x528138: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x528138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52813c:
    // 0x52813c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x52813cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_528140:
    // 0x528140: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x528140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_528144:
    // 0x528144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x528144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_528148:
    // 0x528148: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x528148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52814c:
    // 0x52814c: 0x3e00008  jr          $ra
label_528150:
    if (ctx->pc == 0x528150u) {
        ctx->pc = 0x528150u;
            // 0x528150: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x528154u;
        goto label_528154;
    }
    ctx->pc = 0x52814Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52814Cu;
            // 0x528150: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528154u;
label_528154:
    // 0x528154: 0x0  nop
    ctx->pc = 0x528154u;
    // NOP
label_528158:
    // 0x528158: 0x0  nop
    ctx->pc = 0x528158u;
    // NOP
label_52815c:
    // 0x52815c: 0x0  nop
    ctx->pc = 0x52815cu;
    // NOP
}
