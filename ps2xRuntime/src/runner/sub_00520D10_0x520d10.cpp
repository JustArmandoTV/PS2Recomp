#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00520D10
// Address: 0x520d10 - 0x521200
void sub_00520D10_0x520d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00520D10_0x520d10");
#endif

    switch (ctx->pc) {
        case 0x520d10u: goto label_520d10;
        case 0x520d14u: goto label_520d14;
        case 0x520d18u: goto label_520d18;
        case 0x520d1cu: goto label_520d1c;
        case 0x520d20u: goto label_520d20;
        case 0x520d24u: goto label_520d24;
        case 0x520d28u: goto label_520d28;
        case 0x520d2cu: goto label_520d2c;
        case 0x520d30u: goto label_520d30;
        case 0x520d34u: goto label_520d34;
        case 0x520d38u: goto label_520d38;
        case 0x520d3cu: goto label_520d3c;
        case 0x520d40u: goto label_520d40;
        case 0x520d44u: goto label_520d44;
        case 0x520d48u: goto label_520d48;
        case 0x520d4cu: goto label_520d4c;
        case 0x520d50u: goto label_520d50;
        case 0x520d54u: goto label_520d54;
        case 0x520d58u: goto label_520d58;
        case 0x520d5cu: goto label_520d5c;
        case 0x520d60u: goto label_520d60;
        case 0x520d64u: goto label_520d64;
        case 0x520d68u: goto label_520d68;
        case 0x520d6cu: goto label_520d6c;
        case 0x520d70u: goto label_520d70;
        case 0x520d74u: goto label_520d74;
        case 0x520d78u: goto label_520d78;
        case 0x520d7cu: goto label_520d7c;
        case 0x520d80u: goto label_520d80;
        case 0x520d84u: goto label_520d84;
        case 0x520d88u: goto label_520d88;
        case 0x520d8cu: goto label_520d8c;
        case 0x520d90u: goto label_520d90;
        case 0x520d94u: goto label_520d94;
        case 0x520d98u: goto label_520d98;
        case 0x520d9cu: goto label_520d9c;
        case 0x520da0u: goto label_520da0;
        case 0x520da4u: goto label_520da4;
        case 0x520da8u: goto label_520da8;
        case 0x520dacu: goto label_520dac;
        case 0x520db0u: goto label_520db0;
        case 0x520db4u: goto label_520db4;
        case 0x520db8u: goto label_520db8;
        case 0x520dbcu: goto label_520dbc;
        case 0x520dc0u: goto label_520dc0;
        case 0x520dc4u: goto label_520dc4;
        case 0x520dc8u: goto label_520dc8;
        case 0x520dccu: goto label_520dcc;
        case 0x520dd0u: goto label_520dd0;
        case 0x520dd4u: goto label_520dd4;
        case 0x520dd8u: goto label_520dd8;
        case 0x520ddcu: goto label_520ddc;
        case 0x520de0u: goto label_520de0;
        case 0x520de4u: goto label_520de4;
        case 0x520de8u: goto label_520de8;
        case 0x520decu: goto label_520dec;
        case 0x520df0u: goto label_520df0;
        case 0x520df4u: goto label_520df4;
        case 0x520df8u: goto label_520df8;
        case 0x520dfcu: goto label_520dfc;
        case 0x520e00u: goto label_520e00;
        case 0x520e04u: goto label_520e04;
        case 0x520e08u: goto label_520e08;
        case 0x520e0cu: goto label_520e0c;
        case 0x520e10u: goto label_520e10;
        case 0x520e14u: goto label_520e14;
        case 0x520e18u: goto label_520e18;
        case 0x520e1cu: goto label_520e1c;
        case 0x520e20u: goto label_520e20;
        case 0x520e24u: goto label_520e24;
        case 0x520e28u: goto label_520e28;
        case 0x520e2cu: goto label_520e2c;
        case 0x520e30u: goto label_520e30;
        case 0x520e34u: goto label_520e34;
        case 0x520e38u: goto label_520e38;
        case 0x520e3cu: goto label_520e3c;
        case 0x520e40u: goto label_520e40;
        case 0x520e44u: goto label_520e44;
        case 0x520e48u: goto label_520e48;
        case 0x520e4cu: goto label_520e4c;
        case 0x520e50u: goto label_520e50;
        case 0x520e54u: goto label_520e54;
        case 0x520e58u: goto label_520e58;
        case 0x520e5cu: goto label_520e5c;
        case 0x520e60u: goto label_520e60;
        case 0x520e64u: goto label_520e64;
        case 0x520e68u: goto label_520e68;
        case 0x520e6cu: goto label_520e6c;
        case 0x520e70u: goto label_520e70;
        case 0x520e74u: goto label_520e74;
        case 0x520e78u: goto label_520e78;
        case 0x520e7cu: goto label_520e7c;
        case 0x520e80u: goto label_520e80;
        case 0x520e84u: goto label_520e84;
        case 0x520e88u: goto label_520e88;
        case 0x520e8cu: goto label_520e8c;
        case 0x520e90u: goto label_520e90;
        case 0x520e94u: goto label_520e94;
        case 0x520e98u: goto label_520e98;
        case 0x520e9cu: goto label_520e9c;
        case 0x520ea0u: goto label_520ea0;
        case 0x520ea4u: goto label_520ea4;
        case 0x520ea8u: goto label_520ea8;
        case 0x520eacu: goto label_520eac;
        case 0x520eb0u: goto label_520eb0;
        case 0x520eb4u: goto label_520eb4;
        case 0x520eb8u: goto label_520eb8;
        case 0x520ebcu: goto label_520ebc;
        case 0x520ec0u: goto label_520ec0;
        case 0x520ec4u: goto label_520ec4;
        case 0x520ec8u: goto label_520ec8;
        case 0x520eccu: goto label_520ecc;
        case 0x520ed0u: goto label_520ed0;
        case 0x520ed4u: goto label_520ed4;
        case 0x520ed8u: goto label_520ed8;
        case 0x520edcu: goto label_520edc;
        case 0x520ee0u: goto label_520ee0;
        case 0x520ee4u: goto label_520ee4;
        case 0x520ee8u: goto label_520ee8;
        case 0x520eecu: goto label_520eec;
        case 0x520ef0u: goto label_520ef0;
        case 0x520ef4u: goto label_520ef4;
        case 0x520ef8u: goto label_520ef8;
        case 0x520efcu: goto label_520efc;
        case 0x520f00u: goto label_520f00;
        case 0x520f04u: goto label_520f04;
        case 0x520f08u: goto label_520f08;
        case 0x520f0cu: goto label_520f0c;
        case 0x520f10u: goto label_520f10;
        case 0x520f14u: goto label_520f14;
        case 0x520f18u: goto label_520f18;
        case 0x520f1cu: goto label_520f1c;
        case 0x520f20u: goto label_520f20;
        case 0x520f24u: goto label_520f24;
        case 0x520f28u: goto label_520f28;
        case 0x520f2cu: goto label_520f2c;
        case 0x520f30u: goto label_520f30;
        case 0x520f34u: goto label_520f34;
        case 0x520f38u: goto label_520f38;
        case 0x520f3cu: goto label_520f3c;
        case 0x520f40u: goto label_520f40;
        case 0x520f44u: goto label_520f44;
        case 0x520f48u: goto label_520f48;
        case 0x520f4cu: goto label_520f4c;
        case 0x520f50u: goto label_520f50;
        case 0x520f54u: goto label_520f54;
        case 0x520f58u: goto label_520f58;
        case 0x520f5cu: goto label_520f5c;
        case 0x520f60u: goto label_520f60;
        case 0x520f64u: goto label_520f64;
        case 0x520f68u: goto label_520f68;
        case 0x520f6cu: goto label_520f6c;
        case 0x520f70u: goto label_520f70;
        case 0x520f74u: goto label_520f74;
        case 0x520f78u: goto label_520f78;
        case 0x520f7cu: goto label_520f7c;
        case 0x520f80u: goto label_520f80;
        case 0x520f84u: goto label_520f84;
        case 0x520f88u: goto label_520f88;
        case 0x520f8cu: goto label_520f8c;
        case 0x520f90u: goto label_520f90;
        case 0x520f94u: goto label_520f94;
        case 0x520f98u: goto label_520f98;
        case 0x520f9cu: goto label_520f9c;
        case 0x520fa0u: goto label_520fa0;
        case 0x520fa4u: goto label_520fa4;
        case 0x520fa8u: goto label_520fa8;
        case 0x520facu: goto label_520fac;
        case 0x520fb0u: goto label_520fb0;
        case 0x520fb4u: goto label_520fb4;
        case 0x520fb8u: goto label_520fb8;
        case 0x520fbcu: goto label_520fbc;
        case 0x520fc0u: goto label_520fc0;
        case 0x520fc4u: goto label_520fc4;
        case 0x520fc8u: goto label_520fc8;
        case 0x520fccu: goto label_520fcc;
        case 0x520fd0u: goto label_520fd0;
        case 0x520fd4u: goto label_520fd4;
        case 0x520fd8u: goto label_520fd8;
        case 0x520fdcu: goto label_520fdc;
        case 0x520fe0u: goto label_520fe0;
        case 0x520fe4u: goto label_520fe4;
        case 0x520fe8u: goto label_520fe8;
        case 0x520fecu: goto label_520fec;
        case 0x520ff0u: goto label_520ff0;
        case 0x520ff4u: goto label_520ff4;
        case 0x520ff8u: goto label_520ff8;
        case 0x520ffcu: goto label_520ffc;
        case 0x521000u: goto label_521000;
        case 0x521004u: goto label_521004;
        case 0x521008u: goto label_521008;
        case 0x52100cu: goto label_52100c;
        case 0x521010u: goto label_521010;
        case 0x521014u: goto label_521014;
        case 0x521018u: goto label_521018;
        case 0x52101cu: goto label_52101c;
        case 0x521020u: goto label_521020;
        case 0x521024u: goto label_521024;
        case 0x521028u: goto label_521028;
        case 0x52102cu: goto label_52102c;
        case 0x521030u: goto label_521030;
        case 0x521034u: goto label_521034;
        case 0x521038u: goto label_521038;
        case 0x52103cu: goto label_52103c;
        case 0x521040u: goto label_521040;
        case 0x521044u: goto label_521044;
        case 0x521048u: goto label_521048;
        case 0x52104cu: goto label_52104c;
        case 0x521050u: goto label_521050;
        case 0x521054u: goto label_521054;
        case 0x521058u: goto label_521058;
        case 0x52105cu: goto label_52105c;
        case 0x521060u: goto label_521060;
        case 0x521064u: goto label_521064;
        case 0x521068u: goto label_521068;
        case 0x52106cu: goto label_52106c;
        case 0x521070u: goto label_521070;
        case 0x521074u: goto label_521074;
        case 0x521078u: goto label_521078;
        case 0x52107cu: goto label_52107c;
        case 0x521080u: goto label_521080;
        case 0x521084u: goto label_521084;
        case 0x521088u: goto label_521088;
        case 0x52108cu: goto label_52108c;
        case 0x521090u: goto label_521090;
        case 0x521094u: goto label_521094;
        case 0x521098u: goto label_521098;
        case 0x52109cu: goto label_52109c;
        case 0x5210a0u: goto label_5210a0;
        case 0x5210a4u: goto label_5210a4;
        case 0x5210a8u: goto label_5210a8;
        case 0x5210acu: goto label_5210ac;
        case 0x5210b0u: goto label_5210b0;
        case 0x5210b4u: goto label_5210b4;
        case 0x5210b8u: goto label_5210b8;
        case 0x5210bcu: goto label_5210bc;
        case 0x5210c0u: goto label_5210c0;
        case 0x5210c4u: goto label_5210c4;
        case 0x5210c8u: goto label_5210c8;
        case 0x5210ccu: goto label_5210cc;
        case 0x5210d0u: goto label_5210d0;
        case 0x5210d4u: goto label_5210d4;
        case 0x5210d8u: goto label_5210d8;
        case 0x5210dcu: goto label_5210dc;
        case 0x5210e0u: goto label_5210e0;
        case 0x5210e4u: goto label_5210e4;
        case 0x5210e8u: goto label_5210e8;
        case 0x5210ecu: goto label_5210ec;
        case 0x5210f0u: goto label_5210f0;
        case 0x5210f4u: goto label_5210f4;
        case 0x5210f8u: goto label_5210f8;
        case 0x5210fcu: goto label_5210fc;
        case 0x521100u: goto label_521100;
        case 0x521104u: goto label_521104;
        case 0x521108u: goto label_521108;
        case 0x52110cu: goto label_52110c;
        case 0x521110u: goto label_521110;
        case 0x521114u: goto label_521114;
        case 0x521118u: goto label_521118;
        case 0x52111cu: goto label_52111c;
        case 0x521120u: goto label_521120;
        case 0x521124u: goto label_521124;
        case 0x521128u: goto label_521128;
        case 0x52112cu: goto label_52112c;
        case 0x521130u: goto label_521130;
        case 0x521134u: goto label_521134;
        case 0x521138u: goto label_521138;
        case 0x52113cu: goto label_52113c;
        case 0x521140u: goto label_521140;
        case 0x521144u: goto label_521144;
        case 0x521148u: goto label_521148;
        case 0x52114cu: goto label_52114c;
        case 0x521150u: goto label_521150;
        case 0x521154u: goto label_521154;
        case 0x521158u: goto label_521158;
        case 0x52115cu: goto label_52115c;
        case 0x521160u: goto label_521160;
        case 0x521164u: goto label_521164;
        case 0x521168u: goto label_521168;
        case 0x52116cu: goto label_52116c;
        case 0x521170u: goto label_521170;
        case 0x521174u: goto label_521174;
        case 0x521178u: goto label_521178;
        case 0x52117cu: goto label_52117c;
        case 0x521180u: goto label_521180;
        case 0x521184u: goto label_521184;
        case 0x521188u: goto label_521188;
        case 0x52118cu: goto label_52118c;
        case 0x521190u: goto label_521190;
        case 0x521194u: goto label_521194;
        case 0x521198u: goto label_521198;
        case 0x52119cu: goto label_52119c;
        case 0x5211a0u: goto label_5211a0;
        case 0x5211a4u: goto label_5211a4;
        case 0x5211a8u: goto label_5211a8;
        case 0x5211acu: goto label_5211ac;
        case 0x5211b0u: goto label_5211b0;
        case 0x5211b4u: goto label_5211b4;
        case 0x5211b8u: goto label_5211b8;
        case 0x5211bcu: goto label_5211bc;
        case 0x5211c0u: goto label_5211c0;
        case 0x5211c4u: goto label_5211c4;
        case 0x5211c8u: goto label_5211c8;
        case 0x5211ccu: goto label_5211cc;
        case 0x5211d0u: goto label_5211d0;
        case 0x5211d4u: goto label_5211d4;
        case 0x5211d8u: goto label_5211d8;
        case 0x5211dcu: goto label_5211dc;
        case 0x5211e0u: goto label_5211e0;
        case 0x5211e4u: goto label_5211e4;
        case 0x5211e8u: goto label_5211e8;
        case 0x5211ecu: goto label_5211ec;
        case 0x5211f0u: goto label_5211f0;
        case 0x5211f4u: goto label_5211f4;
        case 0x5211f8u: goto label_5211f8;
        case 0x5211fcu: goto label_5211fc;
        default: break;
    }

    ctx->pc = 0x520d10u;

label_520d10:
    // 0x520d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x520d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_520d14:
    // 0x520d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x520d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_520d18:
    // 0x520d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x520d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_520d1c:
    // 0x520d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x520d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_520d20:
    // 0x520d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x520d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_520d24:
    // 0x520d24: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_520d28:
    if (ctx->pc == 0x520D28u) {
        ctx->pc = 0x520D28u;
            // 0x520d28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520D2Cu;
        goto label_520d2c;
    }
    ctx->pc = 0x520D24u;
    {
        const bool branch_taken_0x520d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x520D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520D24u;
            // 0x520d28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520d24) {
            ctx->pc = 0x520E58u;
            goto label_520e58;
        }
    }
    ctx->pc = 0x520D2Cu;
label_520d2c:
    // 0x520d2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_520d30:
    // 0x520d30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_520d34:
    // 0x520d34: 0x24635ec0  addiu       $v1, $v1, 0x5EC0
    ctx->pc = 0x520d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
label_520d38:
    // 0x520d38: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x520d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_520d3c:
    // 0x520d3c: 0x24425ef8  addiu       $v0, $v0, 0x5EF8
    ctx->pc = 0x520d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24312));
label_520d40:
    // 0x520d40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x520d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_520d44:
    // 0x520d44: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x520d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_520d48:
    // 0x520d48: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x520d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_520d4c:
    // 0x520d4c: 0xc0407c0  jal         func_101F00
label_520d50:
    if (ctx->pc == 0x520D50u) {
        ctx->pc = 0x520D50u;
            // 0x520d50: 0x24a50e70  addiu       $a1, $a1, 0xE70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
        ctx->pc = 0x520D54u;
        goto label_520d54;
    }
    ctx->pc = 0x520D4Cu;
    SET_GPR_U32(ctx, 31, 0x520D54u);
    ctx->pc = 0x520D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520D4Cu;
            // 0x520d50: 0x24a50e70  addiu       $a1, $a1, 0xE70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520D54u; }
        if (ctx->pc != 0x520D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520D54u; }
        if (ctx->pc != 0x520D54u) { return; }
    }
    ctx->pc = 0x520D54u;
label_520d54:
    // 0x520d54: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x520d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_520d58:
    // 0x520d58: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_520d5c:
    if (ctx->pc == 0x520D5Cu) {
        ctx->pc = 0x520D5Cu;
            // 0x520d5c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x520D60u;
        goto label_520d60;
    }
    ctx->pc = 0x520D58u;
    {
        const bool branch_taken_0x520d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520d58) {
            ctx->pc = 0x520D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520D58u;
            // 0x520d5c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520D6Cu;
            goto label_520d6c;
        }
    }
    ctx->pc = 0x520D60u;
label_520d60:
    // 0x520d60: 0xc07507c  jal         func_1D41F0
label_520d64:
    if (ctx->pc == 0x520D64u) {
        ctx->pc = 0x520D64u;
            // 0x520d64: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x520D68u;
        goto label_520d68;
    }
    ctx->pc = 0x520D60u;
    SET_GPR_U32(ctx, 31, 0x520D68u);
    ctx->pc = 0x520D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520D60u;
            // 0x520d64: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520D68u; }
        if (ctx->pc != 0x520D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520D68u; }
        if (ctx->pc != 0x520D68u) { return; }
    }
    ctx->pc = 0x520D68u;
label_520d68:
    // 0x520d68: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x520d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_520d6c:
    // 0x520d6c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_520d70:
    if (ctx->pc == 0x520D70u) {
        ctx->pc = 0x520D70u;
            // 0x520d70: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x520D74u;
        goto label_520d74;
    }
    ctx->pc = 0x520D6Cu;
    {
        const bool branch_taken_0x520d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520d6c) {
            ctx->pc = 0x520D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520D6Cu;
            // 0x520d70: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520D9Cu;
            goto label_520d9c;
        }
    }
    ctx->pc = 0x520D74u;
label_520d74:
    // 0x520d74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_520d78:
    if (ctx->pc == 0x520D78u) {
        ctx->pc = 0x520D7Cu;
        goto label_520d7c;
    }
    ctx->pc = 0x520D74u;
    {
        const bool branch_taken_0x520d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520d74) {
            ctx->pc = 0x520D98u;
            goto label_520d98;
        }
    }
    ctx->pc = 0x520D7Cu;
label_520d7c:
    // 0x520d7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_520d80:
    if (ctx->pc == 0x520D80u) {
        ctx->pc = 0x520D84u;
        goto label_520d84;
    }
    ctx->pc = 0x520D7Cu;
    {
        const bool branch_taken_0x520d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520d7c) {
            ctx->pc = 0x520D98u;
            goto label_520d98;
        }
    }
    ctx->pc = 0x520D84u;
label_520d84:
    // 0x520d84: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x520d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_520d88:
    // 0x520d88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_520d8c:
    if (ctx->pc == 0x520D8Cu) {
        ctx->pc = 0x520D90u;
        goto label_520d90;
    }
    ctx->pc = 0x520D88u;
    {
        const bool branch_taken_0x520d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x520d88) {
            ctx->pc = 0x520D98u;
            goto label_520d98;
        }
    }
    ctx->pc = 0x520D90u;
label_520d90:
    // 0x520d90: 0xc0400a8  jal         func_1002A0
label_520d94:
    if (ctx->pc == 0x520D94u) {
        ctx->pc = 0x520D98u;
        goto label_520d98;
    }
    ctx->pc = 0x520D90u;
    SET_GPR_U32(ctx, 31, 0x520D98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520D98u; }
        if (ctx->pc != 0x520D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520D98u; }
        if (ctx->pc != 0x520D98u) { return; }
    }
    ctx->pc = 0x520D98u;
label_520d98:
    // 0x520d98: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x520d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_520d9c:
    // 0x520d9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_520da0:
    if (ctx->pc == 0x520DA0u) {
        ctx->pc = 0x520DA0u;
            // 0x520da0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x520DA4u;
        goto label_520da4;
    }
    ctx->pc = 0x520D9Cu;
    {
        const bool branch_taken_0x520d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520d9c) {
            ctx->pc = 0x520DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520D9Cu;
            // 0x520da0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520DCCu;
            goto label_520dcc;
        }
    }
    ctx->pc = 0x520DA4u;
label_520da4:
    // 0x520da4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_520da8:
    if (ctx->pc == 0x520DA8u) {
        ctx->pc = 0x520DACu;
        goto label_520dac;
    }
    ctx->pc = 0x520DA4u;
    {
        const bool branch_taken_0x520da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520da4) {
            ctx->pc = 0x520DC8u;
            goto label_520dc8;
        }
    }
    ctx->pc = 0x520DACu;
label_520dac:
    // 0x520dac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_520db0:
    if (ctx->pc == 0x520DB0u) {
        ctx->pc = 0x520DB4u;
        goto label_520db4;
    }
    ctx->pc = 0x520DACu;
    {
        const bool branch_taken_0x520dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520dac) {
            ctx->pc = 0x520DC8u;
            goto label_520dc8;
        }
    }
    ctx->pc = 0x520DB4u;
label_520db4:
    // 0x520db4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x520db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_520db8:
    // 0x520db8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_520dbc:
    if (ctx->pc == 0x520DBCu) {
        ctx->pc = 0x520DC0u;
        goto label_520dc0;
    }
    ctx->pc = 0x520DB8u;
    {
        const bool branch_taken_0x520db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x520db8) {
            ctx->pc = 0x520DC8u;
            goto label_520dc8;
        }
    }
    ctx->pc = 0x520DC0u;
label_520dc0:
    // 0x520dc0: 0xc0400a8  jal         func_1002A0
label_520dc4:
    if (ctx->pc == 0x520DC4u) {
        ctx->pc = 0x520DC8u;
        goto label_520dc8;
    }
    ctx->pc = 0x520DC0u;
    SET_GPR_U32(ctx, 31, 0x520DC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520DC8u; }
        if (ctx->pc != 0x520DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520DC8u; }
        if (ctx->pc != 0x520DC8u) { return; }
    }
    ctx->pc = 0x520DC8u;
label_520dc8:
    // 0x520dc8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x520dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_520dcc:
    // 0x520dcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_520dd0:
    if (ctx->pc == 0x520DD0u) {
        ctx->pc = 0x520DD4u;
        goto label_520dd4;
    }
    ctx->pc = 0x520DCCu;
    {
        const bool branch_taken_0x520dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520dcc) {
            ctx->pc = 0x520DE8u;
            goto label_520de8;
        }
    }
    ctx->pc = 0x520DD4u;
label_520dd4:
    // 0x520dd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_520dd8:
    // 0x520dd8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x520dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_520ddc:
    // 0x520ddc: 0x24635eb0  addiu       $v1, $v1, 0x5EB0
    ctx->pc = 0x520ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24240));
label_520de0:
    // 0x520de0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x520de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_520de4:
    // 0x520de4: 0xac40ab48  sw          $zero, -0x54B8($v0)
    ctx->pc = 0x520de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945608), GPR_U32(ctx, 0));
label_520de8:
    // 0x520de8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_520dec:
    if (ctx->pc == 0x520DECu) {
        ctx->pc = 0x520DECu;
            // 0x520dec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x520DF0u;
        goto label_520df0;
    }
    ctx->pc = 0x520DE8u;
    {
        const bool branch_taken_0x520de8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x520de8) {
            ctx->pc = 0x520DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520DE8u;
            // 0x520dec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520E44u;
            goto label_520e44;
        }
    }
    ctx->pc = 0x520DF0u;
label_520df0:
    // 0x520df0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x520df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_520df4:
    // 0x520df4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x520df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_520df8:
    // 0x520df8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x520df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_520dfc:
    // 0x520dfc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x520dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_520e00:
    // 0x520e00: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_520e04:
    if (ctx->pc == 0x520E04u) {
        ctx->pc = 0x520E04u;
            // 0x520e04: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x520E08u;
        goto label_520e08;
    }
    ctx->pc = 0x520E00u;
    {
        const bool branch_taken_0x520e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x520e00) {
            ctx->pc = 0x520E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520E00u;
            // 0x520e04: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520E1Cu;
            goto label_520e1c;
        }
    }
    ctx->pc = 0x520E08u;
label_520e08:
    // 0x520e08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x520e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_520e0c:
    // 0x520e0c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x520e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_520e10:
    // 0x520e10: 0x320f809  jalr        $t9
label_520e14:
    if (ctx->pc == 0x520E14u) {
        ctx->pc = 0x520E14u;
            // 0x520e14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x520E18u;
        goto label_520e18;
    }
    ctx->pc = 0x520E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520E18u);
        ctx->pc = 0x520E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520E10u;
            // 0x520e14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x520E18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520E18u; }
            if (ctx->pc != 0x520E18u) { return; }
        }
        }
    }
    ctx->pc = 0x520E18u;
label_520e18:
    // 0x520e18: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x520e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_520e1c:
    // 0x520e1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_520e20:
    if (ctx->pc == 0x520E20u) {
        ctx->pc = 0x520E20u;
            // 0x520e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520E24u;
        goto label_520e24;
    }
    ctx->pc = 0x520E1Cu;
    {
        const bool branch_taken_0x520e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x520e1c) {
            ctx->pc = 0x520E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520E1Cu;
            // 0x520e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520E38u;
            goto label_520e38;
        }
    }
    ctx->pc = 0x520E24u;
label_520e24:
    // 0x520e24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x520e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_520e28:
    // 0x520e28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x520e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_520e2c:
    // 0x520e2c: 0x320f809  jalr        $t9
label_520e30:
    if (ctx->pc == 0x520E30u) {
        ctx->pc = 0x520E30u;
            // 0x520e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x520E34u;
        goto label_520e34;
    }
    ctx->pc = 0x520E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520E34u);
        ctx->pc = 0x520E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520E2Cu;
            // 0x520e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x520E34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520E34u; }
            if (ctx->pc != 0x520E34u) { return; }
        }
        }
    }
    ctx->pc = 0x520E34u;
label_520e34:
    // 0x520e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x520e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_520e38:
    // 0x520e38: 0xc075bf8  jal         func_1D6FE0
label_520e3c:
    if (ctx->pc == 0x520E3Cu) {
        ctx->pc = 0x520E3Cu;
            // 0x520e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520E40u;
        goto label_520e40;
    }
    ctx->pc = 0x520E38u;
    SET_GPR_U32(ctx, 31, 0x520E40u);
    ctx->pc = 0x520E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520E38u;
            // 0x520e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520E40u; }
        if (ctx->pc != 0x520E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520E40u; }
        if (ctx->pc != 0x520E40u) { return; }
    }
    ctx->pc = 0x520E40u;
label_520e40:
    // 0x520e40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x520e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_520e44:
    // 0x520e44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x520e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_520e48:
    // 0x520e48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_520e4c:
    if (ctx->pc == 0x520E4Cu) {
        ctx->pc = 0x520E4Cu;
            // 0x520e4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520E50u;
        goto label_520e50;
    }
    ctx->pc = 0x520E48u;
    {
        const bool branch_taken_0x520e48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x520e48) {
            ctx->pc = 0x520E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520E48u;
            // 0x520e4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520E5Cu;
            goto label_520e5c;
        }
    }
    ctx->pc = 0x520E50u;
label_520e50:
    // 0x520e50: 0xc0400a8  jal         func_1002A0
label_520e54:
    if (ctx->pc == 0x520E54u) {
        ctx->pc = 0x520E54u;
            // 0x520e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520E58u;
        goto label_520e58;
    }
    ctx->pc = 0x520E50u;
    SET_GPR_U32(ctx, 31, 0x520E58u);
    ctx->pc = 0x520E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520E50u;
            // 0x520e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520E58u; }
        if (ctx->pc != 0x520E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520E58u; }
        if (ctx->pc != 0x520E58u) { return; }
    }
    ctx->pc = 0x520E58u;
label_520e58:
    // 0x520e58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x520e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_520e5c:
    // 0x520e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x520e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_520e60:
    // 0x520e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x520e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_520e64:
    // 0x520e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520e68:
    // 0x520e68: 0x3e00008  jr          $ra
label_520e6c:
    if (ctx->pc == 0x520E6Cu) {
        ctx->pc = 0x520E6Cu;
            // 0x520e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x520E70u;
        goto label_520e70;
    }
    ctx->pc = 0x520E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520E68u;
            // 0x520e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520E70u;
label_520e70:
    // 0x520e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x520e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_520e74:
    // 0x520e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x520e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_520e78:
    // 0x520e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x520e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_520e7c:
    // 0x520e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x520e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_520e80:
    // 0x520e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x520e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_520e84:
    // 0x520e84: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_520e88:
    if (ctx->pc == 0x520E88u) {
        ctx->pc = 0x520E88u;
            // 0x520e88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520E8Cu;
        goto label_520e8c;
    }
    ctx->pc = 0x520E84u;
    {
        const bool branch_taken_0x520e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x520E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520E84u;
            // 0x520e88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520e84) {
            ctx->pc = 0x520F4Cu;
            goto label_520f4c;
        }
    }
    ctx->pc = 0x520E8Cu;
label_520e8c:
    // 0x520e8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_520e90:
    // 0x520e90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_520e94:
    // 0x520e94: 0x24635e10  addiu       $v1, $v1, 0x5E10
    ctx->pc = 0x520e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24080));
label_520e98:
    // 0x520e98: 0x24425e50  addiu       $v0, $v0, 0x5E50
    ctx->pc = 0x520e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24144));
label_520e9c:
    // 0x520e9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x520e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_520ea0:
    // 0x520ea0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x520ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_520ea4:
    // 0x520ea4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x520ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_520ea8:
    // 0x520ea8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x520ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_520eac:
    // 0x520eac: 0x320f809  jalr        $t9
label_520eb0:
    if (ctx->pc == 0x520EB0u) {
        ctx->pc = 0x520EB4u;
        goto label_520eb4;
    }
    ctx->pc = 0x520EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520EB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x520EB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520EB4u; }
            if (ctx->pc != 0x520EB4u) { return; }
        }
        }
    }
    ctx->pc = 0x520EB4u;
label_520eb4:
    // 0x520eb4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_520eb8:
    if (ctx->pc == 0x520EB8u) {
        ctx->pc = 0x520EB8u;
            // 0x520eb8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x520EBCu;
        goto label_520ebc;
    }
    ctx->pc = 0x520EB4u;
    {
        const bool branch_taken_0x520eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x520eb4) {
            ctx->pc = 0x520EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520EB4u;
            // 0x520eb8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520F38u;
            goto label_520f38;
        }
    }
    ctx->pc = 0x520EBCu;
label_520ebc:
    // 0x520ebc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x520ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_520ec0:
    // 0x520ec0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x520ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_520ec4:
    // 0x520ec4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x520ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_520ec8:
    // 0x520ec8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x520ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_520ecc:
    // 0x520ecc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x520eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_520ed0:
    // 0x520ed0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x520ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_520ed4:
    // 0x520ed4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x520ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_520ed8:
    // 0x520ed8: 0xc0aecc4  jal         func_2BB310
label_520edc:
    if (ctx->pc == 0x520EDCu) {
        ctx->pc = 0x520EDCu;
            // 0x520edc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x520EE0u;
        goto label_520ee0;
    }
    ctx->pc = 0x520ED8u;
    SET_GPR_U32(ctx, 31, 0x520EE0u);
    ctx->pc = 0x520EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520ED8u;
            // 0x520edc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520EE0u; }
        if (ctx->pc != 0x520EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520EE0u; }
        if (ctx->pc != 0x520EE0u) { return; }
    }
    ctx->pc = 0x520EE0u;
label_520ee0:
    // 0x520ee0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x520ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_520ee4:
    // 0x520ee4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x520ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_520ee8:
    // 0x520ee8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_520eec:
    if (ctx->pc == 0x520EECu) {
        ctx->pc = 0x520EECu;
            // 0x520eec: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x520EF0u;
        goto label_520ef0;
    }
    ctx->pc = 0x520EE8u;
    {
        const bool branch_taken_0x520ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x520ee8) {
            ctx->pc = 0x520EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520EE8u;
            // 0x520eec: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520F04u;
            goto label_520f04;
        }
    }
    ctx->pc = 0x520EF0u;
label_520ef0:
    // 0x520ef0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x520ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_520ef4:
    // 0x520ef4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x520ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_520ef8:
    // 0x520ef8: 0x320f809  jalr        $t9
label_520efc:
    if (ctx->pc == 0x520EFCu) {
        ctx->pc = 0x520EFCu;
            // 0x520efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x520F00u;
        goto label_520f00;
    }
    ctx->pc = 0x520EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520F00u);
        ctx->pc = 0x520EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520EF8u;
            // 0x520efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x520F00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520F00u; }
            if (ctx->pc != 0x520F00u) { return; }
        }
        }
    }
    ctx->pc = 0x520F00u;
label_520f00:
    // 0x520f00: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x520f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_520f04:
    // 0x520f04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x520f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_520f08:
    // 0x520f08: 0xc0aec9c  jal         func_2BB270
label_520f0c:
    if (ctx->pc == 0x520F0Cu) {
        ctx->pc = 0x520F0Cu;
            // 0x520f0c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x520F10u;
        goto label_520f10;
    }
    ctx->pc = 0x520F08u;
    SET_GPR_U32(ctx, 31, 0x520F10u);
    ctx->pc = 0x520F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520F08u;
            // 0x520f0c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F10u; }
        if (ctx->pc != 0x520F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F10u; }
        if (ctx->pc != 0x520F10u) { return; }
    }
    ctx->pc = 0x520F10u;
label_520f10:
    // 0x520f10: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x520f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_520f14:
    // 0x520f14: 0xc0aec88  jal         func_2BB220
label_520f18:
    if (ctx->pc == 0x520F18u) {
        ctx->pc = 0x520F18u;
            // 0x520f18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x520F1Cu;
        goto label_520f1c;
    }
    ctx->pc = 0x520F14u;
    SET_GPR_U32(ctx, 31, 0x520F1Cu);
    ctx->pc = 0x520F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520F14u;
            // 0x520f18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F1Cu; }
        if (ctx->pc != 0x520F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F1Cu; }
        if (ctx->pc != 0x520F1Cu) { return; }
    }
    ctx->pc = 0x520F1Cu;
label_520f1c:
    // 0x520f1c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x520f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_520f20:
    // 0x520f20: 0xc0aec0c  jal         func_2BB030
label_520f24:
    if (ctx->pc == 0x520F24u) {
        ctx->pc = 0x520F24u;
            // 0x520f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520F28u;
        goto label_520f28;
    }
    ctx->pc = 0x520F20u;
    SET_GPR_U32(ctx, 31, 0x520F28u);
    ctx->pc = 0x520F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520F20u;
            // 0x520f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F28u; }
        if (ctx->pc != 0x520F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F28u; }
        if (ctx->pc != 0x520F28u) { return; }
    }
    ctx->pc = 0x520F28u;
label_520f28:
    // 0x520f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x520f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_520f2c:
    // 0x520f2c: 0xc0aeaa8  jal         func_2BAAA0
label_520f30:
    if (ctx->pc == 0x520F30u) {
        ctx->pc = 0x520F30u;
            // 0x520f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520F34u;
        goto label_520f34;
    }
    ctx->pc = 0x520F2Cu;
    SET_GPR_U32(ctx, 31, 0x520F34u);
    ctx->pc = 0x520F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520F2Cu;
            // 0x520f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F34u; }
        if (ctx->pc != 0x520F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F34u; }
        if (ctx->pc != 0x520F34u) { return; }
    }
    ctx->pc = 0x520F34u;
label_520f34:
    // 0x520f34: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x520f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_520f38:
    // 0x520f38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x520f38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_520f3c:
    // 0x520f3c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_520f40:
    if (ctx->pc == 0x520F40u) {
        ctx->pc = 0x520F40u;
            // 0x520f40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520F44u;
        goto label_520f44;
    }
    ctx->pc = 0x520F3Cu;
    {
        const bool branch_taken_0x520f3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x520f3c) {
            ctx->pc = 0x520F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520F3Cu;
            // 0x520f40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520F50u;
            goto label_520f50;
        }
    }
    ctx->pc = 0x520F44u;
label_520f44:
    // 0x520f44: 0xc0400a8  jal         func_1002A0
label_520f48:
    if (ctx->pc == 0x520F48u) {
        ctx->pc = 0x520F48u;
            // 0x520f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520F4Cu;
        goto label_520f4c;
    }
    ctx->pc = 0x520F44u;
    SET_GPR_U32(ctx, 31, 0x520F4Cu);
    ctx->pc = 0x520F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520F44u;
            // 0x520f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F4Cu; }
        if (ctx->pc != 0x520F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520F4Cu; }
        if (ctx->pc != 0x520F4Cu) { return; }
    }
    ctx->pc = 0x520F4Cu;
label_520f4c:
    // 0x520f4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x520f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_520f50:
    // 0x520f50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x520f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_520f54:
    // 0x520f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x520f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_520f58:
    // 0x520f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520f5c:
    // 0x520f5c: 0x3e00008  jr          $ra
label_520f60:
    if (ctx->pc == 0x520F60u) {
        ctx->pc = 0x520F60u;
            // 0x520f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x520F64u;
        goto label_520f64;
    }
    ctx->pc = 0x520F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520F5Cu;
            // 0x520f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520F64u;
label_520f64:
    // 0x520f64: 0x0  nop
    ctx->pc = 0x520f64u;
    // NOP
label_520f68:
    // 0x520f68: 0x0  nop
    ctx->pc = 0x520f68u;
    // NOP
label_520f6c:
    // 0x520f6c: 0x0  nop
    ctx->pc = 0x520f6cu;
    // NOP
label_520f70:
    // 0x520f70: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x520f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_520f74:
    // 0x520f74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x520f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_520f78:
    // 0x520f78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x520f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_520f7c:
    // 0x520f7c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x520f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_520f80:
    // 0x520f80: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x520f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_520f84:
    // 0x520f84: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x520f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_520f88:
    // 0x520f88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x520f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_520f8c:
    // 0x520f8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x520f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_520f90:
    // 0x520f90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x520f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_520f94:
    // 0x520f94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x520f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_520f98:
    // 0x520f98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x520f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_520f9c:
    // 0x520f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x520f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_520fa0:
    // 0x520fa0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x520fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_520fa4:
    // 0x520fa4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x520fa4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_520fa8:
    // 0x520fa8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_520fac:
    if (ctx->pc == 0x520FACu) {
        ctx->pc = 0x520FACu;
            // 0x520fac: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520FB0u;
        goto label_520fb0;
    }
    ctx->pc = 0x520FA8u;
    {
        const bool branch_taken_0x520fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x520FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520FA8u;
            // 0x520fac: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520fa8) {
            ctx->pc = 0x520FF8u;
            goto label_520ff8;
        }
    }
    ctx->pc = 0x520FB0u;
label_520fb0:
    // 0x520fb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x520fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_520fb4:
    // 0x520fb4: 0x50a30086  beql        $a1, $v1, . + 4 + (0x86 << 2)
label_520fb8:
    if (ctx->pc == 0x520FB8u) {
        ctx->pc = 0x520FB8u;
            // 0x520fb8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x520FBCu;
        goto label_520fbc;
    }
    ctx->pc = 0x520FB4u;
    {
        const bool branch_taken_0x520fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x520fb4) {
            ctx->pc = 0x520FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520FB4u;
            // 0x520fb8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5211D0u;
            goto label_5211d0;
        }
    }
    ctx->pc = 0x520FBCu;
label_520fbc:
    // 0x520fbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x520fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_520fc0:
    // 0x520fc0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_520fc4:
    if (ctx->pc == 0x520FC4u) {
        ctx->pc = 0x520FC8u;
        goto label_520fc8;
    }
    ctx->pc = 0x520FC0u;
    {
        const bool branch_taken_0x520fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x520fc0) {
            ctx->pc = 0x520FD0u;
            goto label_520fd0;
        }
    }
    ctx->pc = 0x520FC8u;
label_520fc8:
    // 0x520fc8: 0x10000080  b           . + 4 + (0x80 << 2)
label_520fcc:
    if (ctx->pc == 0x520FCCu) {
        ctx->pc = 0x520FD0u;
        goto label_520fd0;
    }
    ctx->pc = 0x520FC8u;
    {
        const bool branch_taken_0x520fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x520fc8) {
            ctx->pc = 0x5211CCu;
            goto label_5211cc;
        }
    }
    ctx->pc = 0x520FD0u;
label_520fd0:
    // 0x520fd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x520fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_520fd4:
    // 0x520fd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x520fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_520fd8:
    // 0x520fd8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x520fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_520fdc:
    // 0x520fdc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x520fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_520fe0:
    // 0x520fe0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x520fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_520fe4:
    // 0x520fe4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x520fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_520fe8:
    // 0x520fe8: 0x320f809  jalr        $t9
label_520fec:
    if (ctx->pc == 0x520FECu) {
        ctx->pc = 0x520FECu;
            // 0x520fec: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x520FF0u;
        goto label_520ff0;
    }
    ctx->pc = 0x520FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520FF0u);
        ctx->pc = 0x520FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520FE8u;
            // 0x520fec: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x520FF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520FF0u; }
            if (ctx->pc != 0x520FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x520FF0u;
label_520ff0:
    // 0x520ff0: 0x10000076  b           . + 4 + (0x76 << 2)
label_520ff4:
    if (ctx->pc == 0x520FF4u) {
        ctx->pc = 0x520FF8u;
        goto label_520ff8;
    }
    ctx->pc = 0x520FF0u;
    {
        const bool branch_taken_0x520ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x520ff0) {
            ctx->pc = 0x5211CCu;
            goto label_5211cc;
        }
    }
    ctx->pc = 0x520FF8u;
label_520ff8:
    // 0x520ff8: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x520ff8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_520ffc:
    // 0x520ffc: 0x12e00073  beqz        $s7, . + 4 + (0x73 << 2)
label_521000:
    if (ctx->pc == 0x521000u) {
        ctx->pc = 0x521004u;
        goto label_521004;
    }
    ctx->pc = 0x520FFCu;
    {
        const bool branch_taken_0x520ffc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x520ffc) {
            ctx->pc = 0x5211CCu;
            goto label_5211cc;
        }
    }
    ctx->pc = 0x521004u;
label_521004:
    // 0x521004: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_521008:
    // 0x521008: 0x26de0084  addiu       $fp, $s6, 0x84
    ctx->pc = 0x521008u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_52100c:
    // 0x52100c: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x52100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_521010:
    // 0x521010: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x521010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_521014:
    // 0x521014: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x521014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_521018:
    // 0x521018: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x521018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_52101c:
    // 0x52101c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x52101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_521020:
    // 0x521020: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x521020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_521024:
    // 0x521024: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x521024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_521028:
    // 0x521028: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x521028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_52102c:
    // 0x52102c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52102cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_521030:
    // 0x521030: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x521030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_521034:
    // 0x521034: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_521038:
    // 0x521038: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x521038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_52103c:
    // 0x52103c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x52103cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_521040:
    // 0x521040: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x521040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_521044:
    // 0x521044: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x521044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_521048:
    // 0x521048: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52104c:
    // 0x52104c: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x52104cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_521050:
    // 0x521050: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x521050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_521054:
    // 0x521054: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x521054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_521058:
    // 0x521058: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x521058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_52105c:
    // 0x52105c: 0xc04e738  jal         func_139CE0
label_521060:
    if (ctx->pc == 0x521060u) {
        ctx->pc = 0x521060u;
            // 0x521060: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x521064u;
        goto label_521064;
    }
    ctx->pc = 0x52105Cu;
    SET_GPR_U32(ctx, 31, 0x521064u);
    ctx->pc = 0x521060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52105Cu;
            // 0x521060: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521064u; }
        if (ctx->pc != 0x521064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521064u; }
        if (ctx->pc != 0x521064u) { return; }
    }
    ctx->pc = 0x521064u;
label_521064:
    // 0x521064: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x521064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_521068:
    // 0x521068: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x521068u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52106c:
    // 0x52106c: 0xc454c6f8  lwc1        $f20, -0x3908($v0)
    ctx->pc = 0x52106cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_521070:
    // 0x521070: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x521070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521074:
    // 0x521074: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x521074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_521078:
    // 0x521078: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x521078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_52107c:
    // 0x52107c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x52107cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_521080:
    // 0x521080: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x521080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_521084:
    // 0x521084: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x521084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_521088:
    // 0x521088: 0x8fd40000  lw          $s4, 0x0($fp)
    ctx->pc = 0x521088u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_52108c:
    // 0x52108c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x52108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_521090:
    // 0x521090: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x521090u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_521094:
    // 0x521094: 0xc0d639c  jal         func_358E70
label_521098:
    if (ctx->pc == 0x521098u) {
        ctx->pc = 0x521098u;
            // 0x521098: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x52109Cu;
        goto label_52109c;
    }
    ctx->pc = 0x521094u;
    SET_GPR_U32(ctx, 31, 0x52109Cu);
    ctx->pc = 0x521098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521094u;
            // 0x521098: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52109Cu; }
        if (ctx->pc != 0x52109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52109Cu; }
        if (ctx->pc != 0x52109Cu) { return; }
    }
    ctx->pc = 0x52109Cu;
label_52109c:
    // 0x52109c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_5210a0:
    if (ctx->pc == 0x5210A0u) {
        ctx->pc = 0x5210A4u;
        goto label_5210a4;
    }
    ctx->pc = 0x52109Cu;
    {
        const bool branch_taken_0x52109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52109c) {
            ctx->pc = 0x521170u;
            goto label_521170;
        }
    }
    ctx->pc = 0x5210A4u;
label_5210a4:
    // 0x5210a4: 0xc0d1c14  jal         func_347050
label_5210a8:
    if (ctx->pc == 0x5210A8u) {
        ctx->pc = 0x5210A8u;
            // 0x5210a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5210ACu;
        goto label_5210ac;
    }
    ctx->pc = 0x5210A4u;
    SET_GPR_U32(ctx, 31, 0x5210ACu);
    ctx->pc = 0x5210A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5210A4u;
            // 0x5210a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210ACu; }
        if (ctx->pc != 0x5210ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210ACu; }
        if (ctx->pc != 0x5210ACu) { return; }
    }
    ctx->pc = 0x5210ACu;
label_5210ac:
    // 0x5210ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5210acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5210b0:
    // 0x5210b0: 0xc04f278  jal         func_13C9E0
label_5210b4:
    if (ctx->pc == 0x5210B4u) {
        ctx->pc = 0x5210B4u;
            // 0x5210b4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5210B8u;
        goto label_5210b8;
    }
    ctx->pc = 0x5210B0u;
    SET_GPR_U32(ctx, 31, 0x5210B8u);
    ctx->pc = 0x5210B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5210B0u;
            // 0x5210b4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210B8u; }
        if (ctx->pc != 0x5210B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210B8u; }
        if (ctx->pc != 0x5210B8u) { return; }
    }
    ctx->pc = 0x5210B8u;
label_5210b8:
    // 0x5210b8: 0xc0d1c10  jal         func_347040
label_5210bc:
    if (ctx->pc == 0x5210BCu) {
        ctx->pc = 0x5210BCu;
            // 0x5210bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5210C0u;
        goto label_5210c0;
    }
    ctx->pc = 0x5210B8u;
    SET_GPR_U32(ctx, 31, 0x5210C0u);
    ctx->pc = 0x5210BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5210B8u;
            // 0x5210bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210C0u; }
        if (ctx->pc != 0x5210C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210C0u; }
        if (ctx->pc != 0x5210C0u) { return; }
    }
    ctx->pc = 0x5210C0u;
label_5210c0:
    // 0x5210c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5210c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5210c4:
    // 0x5210c4: 0xc04ce80  jal         func_133A00
label_5210c8:
    if (ctx->pc == 0x5210C8u) {
        ctx->pc = 0x5210C8u;
            // 0x5210c8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5210CCu;
        goto label_5210cc;
    }
    ctx->pc = 0x5210C4u;
    SET_GPR_U32(ctx, 31, 0x5210CCu);
    ctx->pc = 0x5210C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5210C4u;
            // 0x5210c8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210CCu; }
        if (ctx->pc != 0x5210CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210CCu; }
        if (ctx->pc != 0x5210CCu) { return; }
    }
    ctx->pc = 0x5210CCu;
label_5210cc:
    // 0x5210cc: 0xc0d4108  jal         func_350420
label_5210d0:
    if (ctx->pc == 0x5210D0u) {
        ctx->pc = 0x5210D4u;
        goto label_5210d4;
    }
    ctx->pc = 0x5210CCu;
    SET_GPR_U32(ctx, 31, 0x5210D4u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210D4u; }
        if (ctx->pc != 0x5210D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210D4u; }
        if (ctx->pc != 0x5210D4u) { return; }
    }
    ctx->pc = 0x5210D4u;
label_5210d4:
    // 0x5210d4: 0xc0b36b4  jal         func_2CDAD0
label_5210d8:
    if (ctx->pc == 0x5210D8u) {
        ctx->pc = 0x5210D8u;
            // 0x5210d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5210DCu;
        goto label_5210dc;
    }
    ctx->pc = 0x5210D4u;
    SET_GPR_U32(ctx, 31, 0x5210DCu);
    ctx->pc = 0x5210D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5210D4u;
            // 0x5210d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210DCu; }
        if (ctx->pc != 0x5210DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210DCu; }
        if (ctx->pc != 0x5210DCu) { return; }
    }
    ctx->pc = 0x5210DCu;
label_5210dc:
    // 0x5210dc: 0xc0b9c64  jal         func_2E7190
label_5210e0:
    if (ctx->pc == 0x5210E0u) {
        ctx->pc = 0x5210E0u;
            // 0x5210e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5210E4u;
        goto label_5210e4;
    }
    ctx->pc = 0x5210DCu;
    SET_GPR_U32(ctx, 31, 0x5210E4u);
    ctx->pc = 0x5210E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5210DCu;
            // 0x5210e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210E4u; }
        if (ctx->pc != 0x5210E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210E4u; }
        if (ctx->pc != 0x5210E4u) { return; }
    }
    ctx->pc = 0x5210E4u;
label_5210e4:
    // 0x5210e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5210e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5210e8:
    // 0x5210e8: 0xc0d4104  jal         func_350410
label_5210ec:
    if (ctx->pc == 0x5210ECu) {
        ctx->pc = 0x5210ECu;
            // 0x5210ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5210F0u;
        goto label_5210f0;
    }
    ctx->pc = 0x5210E8u;
    SET_GPR_U32(ctx, 31, 0x5210F0u);
    ctx->pc = 0x5210ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5210E8u;
            // 0x5210ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210F0u; }
        if (ctx->pc != 0x5210F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5210F0u; }
        if (ctx->pc != 0x5210F0u) { return; }
    }
    ctx->pc = 0x5210F0u;
label_5210f0:
    // 0x5210f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5210f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5210f4:
    // 0x5210f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5210f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5210f8:
    // 0x5210f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x5210f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5210fc:
    // 0x5210fc: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x5210fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_521100:
    // 0x521100: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x521100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521104:
    // 0x521104: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x521104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521108:
    // 0x521108: 0xc0d40ac  jal         func_3502B0
label_52110c:
    if (ctx->pc == 0x52110Cu) {
        ctx->pc = 0x52110Cu;
            // 0x52110c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x521110u;
        goto label_521110;
    }
    ctx->pc = 0x521108u;
    SET_GPR_U32(ctx, 31, 0x521110u);
    ctx->pc = 0x52110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521108u;
            // 0x52110c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521110u; }
        if (ctx->pc != 0x521110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521110u; }
        if (ctx->pc != 0x521110u) { return; }
    }
    ctx->pc = 0x521110u;
label_521110:
    // 0x521110: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x521110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_521114:
    // 0x521114: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_521118:
    if (ctx->pc == 0x521118u) {
        ctx->pc = 0x521118u;
            // 0x521118: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x52111Cu;
        goto label_52111c;
    }
    ctx->pc = 0x521114u;
    {
        const bool branch_taken_0x521114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x521118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521114u;
            // 0x521118: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521114) {
            ctx->pc = 0x521188u;
            goto label_521188;
        }
    }
    ctx->pc = 0x52111Cu;
label_52111c:
    // 0x52111c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x52111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_521120:
    // 0x521120: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x521120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_521124:
    // 0x521124: 0xc148480  jal         func_521200
label_521128:
    if (ctx->pc == 0x521128u) {
        ctx->pc = 0x521128u;
            // 0x521128: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->pc = 0x52112Cu;
        goto label_52112c;
    }
    ctx->pc = 0x521124u;
    SET_GPR_U32(ctx, 31, 0x52112Cu);
    ctx->pc = 0x521128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521124u;
            // 0x521128: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x521200u;
    if (runtime->hasFunction(0x521200u)) {
        auto targetFn = runtime->lookupFunction(0x521200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52112Cu; }
        if (ctx->pc != 0x52112Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00521200_0x521200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52112Cu; }
        if (ctx->pc != 0x52112Cu) { return; }
    }
    ctx->pc = 0x52112Cu;
label_52112c:
    // 0x52112c: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x52112cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_521130:
    // 0x521130: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x521130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_521134:
    // 0x521134: 0xc04e4a4  jal         func_139290
label_521138:
    if (ctx->pc == 0x521138u) {
        ctx->pc = 0x521138u;
            // 0x521138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52113Cu;
        goto label_52113c;
    }
    ctx->pc = 0x521134u;
    SET_GPR_U32(ctx, 31, 0x52113Cu);
    ctx->pc = 0x521138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521134u;
            // 0x521138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52113Cu; }
        if (ctx->pc != 0x52113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52113Cu; }
        if (ctx->pc != 0x52113Cu) { return; }
    }
    ctx->pc = 0x52113Cu;
label_52113c:
    // 0x52113c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x52113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_521140:
    // 0x521140: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x521140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_521144:
    // 0x521144: 0xc04cd60  jal         func_133580
label_521148:
    if (ctx->pc == 0x521148u) {
        ctx->pc = 0x521148u;
            // 0x521148: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x52114Cu;
        goto label_52114c;
    }
    ctx->pc = 0x521144u;
    SET_GPR_U32(ctx, 31, 0x52114Cu);
    ctx->pc = 0x521148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521144u;
            // 0x521148: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52114Cu; }
        if (ctx->pc != 0x52114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52114Cu; }
        if (ctx->pc != 0x52114Cu) { return; }
    }
    ctx->pc = 0x52114Cu;
label_52114c:
    // 0x52114c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x52114cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_521150:
    // 0x521150: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x521150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_521154:
    // 0x521154: 0x320f809  jalr        $t9
label_521158:
    if (ctx->pc == 0x521158u) {
        ctx->pc = 0x521158u;
            // 0x521158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52115Cu;
        goto label_52115c;
    }
    ctx->pc = 0x521154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52115Cu);
        ctx->pc = 0x521158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521154u;
            // 0x521158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52115Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52115Cu; }
            if (ctx->pc != 0x52115Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52115Cu;
label_52115c:
    // 0x52115c: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x52115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_521160:
    // 0x521160: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x521160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521164:
    // 0x521164: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x521164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_521168:
    // 0x521168: 0xc054fd4  jal         func_153F50
label_52116c:
    if (ctx->pc == 0x52116Cu) {
        ctx->pc = 0x52116Cu;
            // 0x52116c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521170u;
        goto label_521170;
    }
    ctx->pc = 0x521168u;
    SET_GPR_U32(ctx, 31, 0x521170u);
    ctx->pc = 0x52116Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521168u;
            // 0x52116c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521170u; }
        if (ctx->pc != 0x521170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521170u; }
        if (ctx->pc != 0x521170u) { return; }
    }
    ctx->pc = 0x521170u;
label_521170:
    // 0x521170: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x521170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_521174:
    // 0x521174: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x521174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_521178:
    // 0x521178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x521178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52117c:
    // 0x52117c: 0xc0e31f8  jal         func_38C7E0
label_521180:
    if (ctx->pc == 0x521180u) {
        ctx->pc = 0x521180u;
            // 0x521180: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x521184u;
        goto label_521184;
    }
    ctx->pc = 0x52117Cu;
    SET_GPR_U32(ctx, 31, 0x521184u);
    ctx->pc = 0x521180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52117Cu;
            // 0x521180: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521184u; }
        if (ctx->pc != 0x521184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521184u; }
        if (ctx->pc != 0x521184u) { return; }
    }
    ctx->pc = 0x521184u;
label_521184:
    // 0x521184: 0x0  nop
    ctx->pc = 0x521184u;
    // NOP
label_521188:
    // 0x521188: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x521188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_52118c:
    // 0x52118c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x52118cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_521190:
    // 0x521190: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_521194:
    if (ctx->pc == 0x521194u) {
        ctx->pc = 0x521194u;
            // 0x521194: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x521198u;
        goto label_521198;
    }
    ctx->pc = 0x521190u;
    {
        const bool branch_taken_0x521190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x521194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521190u;
            // 0x521194: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521190) {
            ctx->pc = 0x521074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_521074;
        }
    }
    ctx->pc = 0x521198u;
label_521198:
    // 0x521198: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x521198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52119c:
    // 0x52119c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x52119cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5211a0:
    // 0x5211a0: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_5211a4:
    if (ctx->pc == 0x5211A4u) {
        ctx->pc = 0x5211A4u;
            // 0x5211a4: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x5211A8u;
        goto label_5211a8;
    }
    ctx->pc = 0x5211A0u;
    {
        const bool branch_taken_0x5211a0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x5211A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5211A0u;
            // 0x5211a4: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5211a0) {
            ctx->pc = 0x5211CCu;
            goto label_5211cc;
        }
    }
    ctx->pc = 0x5211A8u;
label_5211a8:
    // 0x5211a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5211a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5211ac:
    // 0x5211ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5211acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5211b0:
    // 0x5211b0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x5211b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_5211b4:
    // 0x5211b4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x5211b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_5211b8:
    // 0x5211b8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x5211b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_5211bc:
    // 0x5211bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x5211bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5211c0:
    // 0x5211c0: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x5211c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
label_5211c4:
    // 0x5211c4: 0xc055ea8  jal         func_157AA0
label_5211c8:
    if (ctx->pc == 0x5211C8u) {
        ctx->pc = 0x5211C8u;
            // 0x5211c8: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x5211CCu;
        goto label_5211cc;
    }
    ctx->pc = 0x5211C4u;
    SET_GPR_U32(ctx, 31, 0x5211CCu);
    ctx->pc = 0x5211C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5211C4u;
            // 0x5211c8: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5211CCu; }
        if (ctx->pc != 0x5211CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5211CCu; }
        if (ctx->pc != 0x5211CCu) { return; }
    }
    ctx->pc = 0x5211CCu;
label_5211cc:
    // 0x5211cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x5211ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_5211d0:
    // 0x5211d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5211d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5211d4:
    // 0x5211d4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x5211d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_5211d8:
    // 0x5211d8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x5211d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5211dc:
    // 0x5211dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x5211dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5211e0:
    // 0x5211e0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x5211e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5211e4:
    // 0x5211e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5211e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5211e8:
    // 0x5211e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5211e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5211ec:
    // 0x5211ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5211ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5211f0:
    // 0x5211f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5211f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5211f4:
    // 0x5211f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5211f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5211f8:
    // 0x5211f8: 0x3e00008  jr          $ra
label_5211fc:
    if (ctx->pc == 0x5211FCu) {
        ctx->pc = 0x5211FCu;
            // 0x5211fc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x521200u;
        goto label_fallthrough_0x5211f8;
    }
    ctx->pc = 0x5211F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5211FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5211F8u;
            // 0x5211fc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5211f8:
    ctx->pc = 0x521200u;
}
