#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00240D50
// Address: 0x240d50 - 0x241260
void sub_00240D50_0x240d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240D50_0x240d50");
#endif

    switch (ctx->pc) {
        case 0x240d50u: goto label_240d50;
        case 0x240d54u: goto label_240d54;
        case 0x240d58u: goto label_240d58;
        case 0x240d5cu: goto label_240d5c;
        case 0x240d60u: goto label_240d60;
        case 0x240d64u: goto label_240d64;
        case 0x240d68u: goto label_240d68;
        case 0x240d6cu: goto label_240d6c;
        case 0x240d70u: goto label_240d70;
        case 0x240d74u: goto label_240d74;
        case 0x240d78u: goto label_240d78;
        case 0x240d7cu: goto label_240d7c;
        case 0x240d80u: goto label_240d80;
        case 0x240d84u: goto label_240d84;
        case 0x240d88u: goto label_240d88;
        case 0x240d8cu: goto label_240d8c;
        case 0x240d90u: goto label_240d90;
        case 0x240d94u: goto label_240d94;
        case 0x240d98u: goto label_240d98;
        case 0x240d9cu: goto label_240d9c;
        case 0x240da0u: goto label_240da0;
        case 0x240da4u: goto label_240da4;
        case 0x240da8u: goto label_240da8;
        case 0x240dacu: goto label_240dac;
        case 0x240db0u: goto label_240db0;
        case 0x240db4u: goto label_240db4;
        case 0x240db8u: goto label_240db8;
        case 0x240dbcu: goto label_240dbc;
        case 0x240dc0u: goto label_240dc0;
        case 0x240dc4u: goto label_240dc4;
        case 0x240dc8u: goto label_240dc8;
        case 0x240dccu: goto label_240dcc;
        case 0x240dd0u: goto label_240dd0;
        case 0x240dd4u: goto label_240dd4;
        case 0x240dd8u: goto label_240dd8;
        case 0x240ddcu: goto label_240ddc;
        case 0x240de0u: goto label_240de0;
        case 0x240de4u: goto label_240de4;
        case 0x240de8u: goto label_240de8;
        case 0x240decu: goto label_240dec;
        case 0x240df0u: goto label_240df0;
        case 0x240df4u: goto label_240df4;
        case 0x240df8u: goto label_240df8;
        case 0x240dfcu: goto label_240dfc;
        case 0x240e00u: goto label_240e00;
        case 0x240e04u: goto label_240e04;
        case 0x240e08u: goto label_240e08;
        case 0x240e0cu: goto label_240e0c;
        case 0x240e10u: goto label_240e10;
        case 0x240e14u: goto label_240e14;
        case 0x240e18u: goto label_240e18;
        case 0x240e1cu: goto label_240e1c;
        case 0x240e20u: goto label_240e20;
        case 0x240e24u: goto label_240e24;
        case 0x240e28u: goto label_240e28;
        case 0x240e2cu: goto label_240e2c;
        case 0x240e30u: goto label_240e30;
        case 0x240e34u: goto label_240e34;
        case 0x240e38u: goto label_240e38;
        case 0x240e3cu: goto label_240e3c;
        case 0x240e40u: goto label_240e40;
        case 0x240e44u: goto label_240e44;
        case 0x240e48u: goto label_240e48;
        case 0x240e4cu: goto label_240e4c;
        case 0x240e50u: goto label_240e50;
        case 0x240e54u: goto label_240e54;
        case 0x240e58u: goto label_240e58;
        case 0x240e5cu: goto label_240e5c;
        case 0x240e60u: goto label_240e60;
        case 0x240e64u: goto label_240e64;
        case 0x240e68u: goto label_240e68;
        case 0x240e6cu: goto label_240e6c;
        case 0x240e70u: goto label_240e70;
        case 0x240e74u: goto label_240e74;
        case 0x240e78u: goto label_240e78;
        case 0x240e7cu: goto label_240e7c;
        case 0x240e80u: goto label_240e80;
        case 0x240e84u: goto label_240e84;
        case 0x240e88u: goto label_240e88;
        case 0x240e8cu: goto label_240e8c;
        case 0x240e90u: goto label_240e90;
        case 0x240e94u: goto label_240e94;
        case 0x240e98u: goto label_240e98;
        case 0x240e9cu: goto label_240e9c;
        case 0x240ea0u: goto label_240ea0;
        case 0x240ea4u: goto label_240ea4;
        case 0x240ea8u: goto label_240ea8;
        case 0x240eacu: goto label_240eac;
        case 0x240eb0u: goto label_240eb0;
        case 0x240eb4u: goto label_240eb4;
        case 0x240eb8u: goto label_240eb8;
        case 0x240ebcu: goto label_240ebc;
        case 0x240ec0u: goto label_240ec0;
        case 0x240ec4u: goto label_240ec4;
        case 0x240ec8u: goto label_240ec8;
        case 0x240eccu: goto label_240ecc;
        case 0x240ed0u: goto label_240ed0;
        case 0x240ed4u: goto label_240ed4;
        case 0x240ed8u: goto label_240ed8;
        case 0x240edcu: goto label_240edc;
        case 0x240ee0u: goto label_240ee0;
        case 0x240ee4u: goto label_240ee4;
        case 0x240ee8u: goto label_240ee8;
        case 0x240eecu: goto label_240eec;
        case 0x240ef0u: goto label_240ef0;
        case 0x240ef4u: goto label_240ef4;
        case 0x240ef8u: goto label_240ef8;
        case 0x240efcu: goto label_240efc;
        case 0x240f00u: goto label_240f00;
        case 0x240f04u: goto label_240f04;
        case 0x240f08u: goto label_240f08;
        case 0x240f0cu: goto label_240f0c;
        case 0x240f10u: goto label_240f10;
        case 0x240f14u: goto label_240f14;
        case 0x240f18u: goto label_240f18;
        case 0x240f1cu: goto label_240f1c;
        case 0x240f20u: goto label_240f20;
        case 0x240f24u: goto label_240f24;
        case 0x240f28u: goto label_240f28;
        case 0x240f2cu: goto label_240f2c;
        case 0x240f30u: goto label_240f30;
        case 0x240f34u: goto label_240f34;
        case 0x240f38u: goto label_240f38;
        case 0x240f3cu: goto label_240f3c;
        case 0x240f40u: goto label_240f40;
        case 0x240f44u: goto label_240f44;
        case 0x240f48u: goto label_240f48;
        case 0x240f4cu: goto label_240f4c;
        case 0x240f50u: goto label_240f50;
        case 0x240f54u: goto label_240f54;
        case 0x240f58u: goto label_240f58;
        case 0x240f5cu: goto label_240f5c;
        case 0x240f60u: goto label_240f60;
        case 0x240f64u: goto label_240f64;
        case 0x240f68u: goto label_240f68;
        case 0x240f6cu: goto label_240f6c;
        case 0x240f70u: goto label_240f70;
        case 0x240f74u: goto label_240f74;
        case 0x240f78u: goto label_240f78;
        case 0x240f7cu: goto label_240f7c;
        case 0x240f80u: goto label_240f80;
        case 0x240f84u: goto label_240f84;
        case 0x240f88u: goto label_240f88;
        case 0x240f8cu: goto label_240f8c;
        case 0x240f90u: goto label_240f90;
        case 0x240f94u: goto label_240f94;
        case 0x240f98u: goto label_240f98;
        case 0x240f9cu: goto label_240f9c;
        case 0x240fa0u: goto label_240fa0;
        case 0x240fa4u: goto label_240fa4;
        case 0x240fa8u: goto label_240fa8;
        case 0x240facu: goto label_240fac;
        case 0x240fb0u: goto label_240fb0;
        case 0x240fb4u: goto label_240fb4;
        case 0x240fb8u: goto label_240fb8;
        case 0x240fbcu: goto label_240fbc;
        case 0x240fc0u: goto label_240fc0;
        case 0x240fc4u: goto label_240fc4;
        case 0x240fc8u: goto label_240fc8;
        case 0x240fccu: goto label_240fcc;
        case 0x240fd0u: goto label_240fd0;
        case 0x240fd4u: goto label_240fd4;
        case 0x240fd8u: goto label_240fd8;
        case 0x240fdcu: goto label_240fdc;
        case 0x240fe0u: goto label_240fe0;
        case 0x240fe4u: goto label_240fe4;
        case 0x240fe8u: goto label_240fe8;
        case 0x240fecu: goto label_240fec;
        case 0x240ff0u: goto label_240ff0;
        case 0x240ff4u: goto label_240ff4;
        case 0x240ff8u: goto label_240ff8;
        case 0x240ffcu: goto label_240ffc;
        case 0x241000u: goto label_241000;
        case 0x241004u: goto label_241004;
        case 0x241008u: goto label_241008;
        case 0x24100cu: goto label_24100c;
        case 0x241010u: goto label_241010;
        case 0x241014u: goto label_241014;
        case 0x241018u: goto label_241018;
        case 0x24101cu: goto label_24101c;
        case 0x241020u: goto label_241020;
        case 0x241024u: goto label_241024;
        case 0x241028u: goto label_241028;
        case 0x24102cu: goto label_24102c;
        case 0x241030u: goto label_241030;
        case 0x241034u: goto label_241034;
        case 0x241038u: goto label_241038;
        case 0x24103cu: goto label_24103c;
        case 0x241040u: goto label_241040;
        case 0x241044u: goto label_241044;
        case 0x241048u: goto label_241048;
        case 0x24104cu: goto label_24104c;
        case 0x241050u: goto label_241050;
        case 0x241054u: goto label_241054;
        case 0x241058u: goto label_241058;
        case 0x24105cu: goto label_24105c;
        case 0x241060u: goto label_241060;
        case 0x241064u: goto label_241064;
        case 0x241068u: goto label_241068;
        case 0x24106cu: goto label_24106c;
        case 0x241070u: goto label_241070;
        case 0x241074u: goto label_241074;
        case 0x241078u: goto label_241078;
        case 0x24107cu: goto label_24107c;
        case 0x241080u: goto label_241080;
        case 0x241084u: goto label_241084;
        case 0x241088u: goto label_241088;
        case 0x24108cu: goto label_24108c;
        case 0x241090u: goto label_241090;
        case 0x241094u: goto label_241094;
        case 0x241098u: goto label_241098;
        case 0x24109cu: goto label_24109c;
        case 0x2410a0u: goto label_2410a0;
        case 0x2410a4u: goto label_2410a4;
        case 0x2410a8u: goto label_2410a8;
        case 0x2410acu: goto label_2410ac;
        case 0x2410b0u: goto label_2410b0;
        case 0x2410b4u: goto label_2410b4;
        case 0x2410b8u: goto label_2410b8;
        case 0x2410bcu: goto label_2410bc;
        case 0x2410c0u: goto label_2410c0;
        case 0x2410c4u: goto label_2410c4;
        case 0x2410c8u: goto label_2410c8;
        case 0x2410ccu: goto label_2410cc;
        case 0x2410d0u: goto label_2410d0;
        case 0x2410d4u: goto label_2410d4;
        case 0x2410d8u: goto label_2410d8;
        case 0x2410dcu: goto label_2410dc;
        case 0x2410e0u: goto label_2410e0;
        case 0x2410e4u: goto label_2410e4;
        case 0x2410e8u: goto label_2410e8;
        case 0x2410ecu: goto label_2410ec;
        case 0x2410f0u: goto label_2410f0;
        case 0x2410f4u: goto label_2410f4;
        case 0x2410f8u: goto label_2410f8;
        case 0x2410fcu: goto label_2410fc;
        case 0x241100u: goto label_241100;
        case 0x241104u: goto label_241104;
        case 0x241108u: goto label_241108;
        case 0x24110cu: goto label_24110c;
        case 0x241110u: goto label_241110;
        case 0x241114u: goto label_241114;
        case 0x241118u: goto label_241118;
        case 0x24111cu: goto label_24111c;
        case 0x241120u: goto label_241120;
        case 0x241124u: goto label_241124;
        case 0x241128u: goto label_241128;
        case 0x24112cu: goto label_24112c;
        case 0x241130u: goto label_241130;
        case 0x241134u: goto label_241134;
        case 0x241138u: goto label_241138;
        case 0x24113cu: goto label_24113c;
        case 0x241140u: goto label_241140;
        case 0x241144u: goto label_241144;
        case 0x241148u: goto label_241148;
        case 0x24114cu: goto label_24114c;
        case 0x241150u: goto label_241150;
        case 0x241154u: goto label_241154;
        case 0x241158u: goto label_241158;
        case 0x24115cu: goto label_24115c;
        case 0x241160u: goto label_241160;
        case 0x241164u: goto label_241164;
        case 0x241168u: goto label_241168;
        case 0x24116cu: goto label_24116c;
        case 0x241170u: goto label_241170;
        case 0x241174u: goto label_241174;
        case 0x241178u: goto label_241178;
        case 0x24117cu: goto label_24117c;
        case 0x241180u: goto label_241180;
        case 0x241184u: goto label_241184;
        case 0x241188u: goto label_241188;
        case 0x24118cu: goto label_24118c;
        case 0x241190u: goto label_241190;
        case 0x241194u: goto label_241194;
        case 0x241198u: goto label_241198;
        case 0x24119cu: goto label_24119c;
        case 0x2411a0u: goto label_2411a0;
        case 0x2411a4u: goto label_2411a4;
        case 0x2411a8u: goto label_2411a8;
        case 0x2411acu: goto label_2411ac;
        case 0x2411b0u: goto label_2411b0;
        case 0x2411b4u: goto label_2411b4;
        case 0x2411b8u: goto label_2411b8;
        case 0x2411bcu: goto label_2411bc;
        case 0x2411c0u: goto label_2411c0;
        case 0x2411c4u: goto label_2411c4;
        case 0x2411c8u: goto label_2411c8;
        case 0x2411ccu: goto label_2411cc;
        case 0x2411d0u: goto label_2411d0;
        case 0x2411d4u: goto label_2411d4;
        case 0x2411d8u: goto label_2411d8;
        case 0x2411dcu: goto label_2411dc;
        case 0x2411e0u: goto label_2411e0;
        case 0x2411e4u: goto label_2411e4;
        case 0x2411e8u: goto label_2411e8;
        case 0x2411ecu: goto label_2411ec;
        case 0x2411f0u: goto label_2411f0;
        case 0x2411f4u: goto label_2411f4;
        case 0x2411f8u: goto label_2411f8;
        case 0x2411fcu: goto label_2411fc;
        case 0x241200u: goto label_241200;
        case 0x241204u: goto label_241204;
        case 0x241208u: goto label_241208;
        case 0x24120cu: goto label_24120c;
        case 0x241210u: goto label_241210;
        case 0x241214u: goto label_241214;
        case 0x241218u: goto label_241218;
        case 0x24121cu: goto label_24121c;
        case 0x241220u: goto label_241220;
        case 0x241224u: goto label_241224;
        case 0x241228u: goto label_241228;
        case 0x24122cu: goto label_24122c;
        case 0x241230u: goto label_241230;
        case 0x241234u: goto label_241234;
        case 0x241238u: goto label_241238;
        case 0x24123cu: goto label_24123c;
        case 0x241240u: goto label_241240;
        case 0x241244u: goto label_241244;
        case 0x241248u: goto label_241248;
        case 0x24124cu: goto label_24124c;
        case 0x241250u: goto label_241250;
        case 0x241254u: goto label_241254;
        case 0x241258u: goto label_241258;
        case 0x24125cu: goto label_24125c;
        default: break;
    }

    ctx->pc = 0x240d50u;

label_240d50:
    // 0x240d50: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x240d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_240d54:
    // 0x240d54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x240d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_240d58:
    // 0x240d58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x240d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_240d5c:
    // 0x240d5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x240d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_240d60:
    // 0x240d60: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x240d60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_240d64:
    // 0x240d64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x240d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_240d68:
    // 0x240d68: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x240d68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_240d6c:
    // 0x240d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x240d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_240d70:
    // 0x240d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_240d74:
    // 0x240d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_240d78:
    // 0x240d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240d7c:
    // 0x240d7c: 0xafa4008c  sw          $a0, 0x8C($sp)
    ctx->pc = 0x240d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 4));
label_240d80:
    // 0x240d80: 0x909000a8  lbu         $s0, 0xA8($a0)
    ctx->pc = 0x240d80u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_240d84:
    // 0x240d84: 0x12150129  beq         $s0, $s5, . + 4 + (0x129 << 2)
label_240d88:
    if (ctx->pc == 0x240D88u) {
        ctx->pc = 0x240D88u;
            // 0x240d88: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240D8Cu;
        goto label_240d8c;
    }
    ctx->pc = 0x240D84u;
    {
        const bool branch_taken_0x240d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x240D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D84u;
            // 0x240d88: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d84) {
            ctx->pc = 0x24122Cu;
            goto label_24122c;
        }
    }
    ctx->pc = 0x240D8Cu;
label_240d8c:
    // 0x240d8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x240d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240d90:
    // 0x240d90: 0x12a30005  beq         $s5, $v1, . + 4 + (0x5 << 2)
label_240d94:
    if (ctx->pc == 0x240D94u) {
        ctx->pc = 0x240D94u;
            // 0x240d94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240D98u;
        goto label_240d98;
    }
    ctx->pc = 0x240D90u;
    {
        const bool branch_taken_0x240d90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x240D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D90u;
            // 0x240d94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d90) {
            ctx->pc = 0x240DA8u;
            goto label_240da8;
        }
    }
    ctx->pc = 0x240D98u;
label_240d98:
    // 0x240d98: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x240d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_240d9c:
    // 0x240d9c: 0x52a30003  beql        $s5, $v1, . + 4 + (0x3 << 2)
label_240da0:
    if (ctx->pc == 0x240DA0u) {
        ctx->pc = 0x240DA0u;
            // 0x240da0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x240DA4u;
        goto label_240da4;
    }
    ctx->pc = 0x240D9Cu;
    {
        const bool branch_taken_0x240d9c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x240d9c) {
            ctx->pc = 0x240DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240D9Cu;
            // 0x240da0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240DACu;
            goto label_240dac;
        }
    }
    ctx->pc = 0x240DA4u;
label_240da4:
    // 0x240da4: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x240da4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_240da8:
    // 0x240da8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x240da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240dac:
    // 0x240dac: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
label_240db0:
    if (ctx->pc == 0x240DB0u) {
        ctx->pc = 0x240DB0u;
            // 0x240db0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240DB4u;
        goto label_240db4;
    }
    ctx->pc = 0x240DACu;
    {
        const bool branch_taken_0x240dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x240DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240DACu;
            // 0x240db0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dac) {
            ctx->pc = 0x240DC4u;
            goto label_240dc4;
        }
    }
    ctx->pc = 0x240DB4u;
label_240db4:
    // 0x240db4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x240db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_240db8:
    // 0x240db8: 0x12030002  beq         $s0, $v1, . + 4 + (0x2 << 2)
label_240dbc:
    if (ctx->pc == 0x240DBCu) {
        ctx->pc = 0x240DC0u;
        goto label_240dc0;
    }
    ctx->pc = 0x240DB8u;
    {
        const bool branch_taken_0x240db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x240db8) {
            ctx->pc = 0x240DC4u;
            goto label_240dc4;
        }
    }
    ctx->pc = 0x240DC0u;
label_240dc0:
    // 0x240dc0: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x240dc0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_240dc4:
    // 0x240dc4: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
label_240dc8:
    if (ctx->pc == 0x240DC8u) {
        ctx->pc = 0x240DC8u;
            // 0x240dc8: 0x4203c  dsll32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
        ctx->pc = 0x240DCCu;
        goto label_240dcc;
    }
    ctx->pc = 0x240DC4u;
    {
        const bool branch_taken_0x240dc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x240dc4) {
            ctx->pc = 0x240DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240DC4u;
            // 0x240dc8: 0x4203c  dsll32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240DECu;
            goto label_240dec;
        }
    }
    ctx->pc = 0x240DCCu;
label_240dcc:
    // 0x240dcc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_240dd0:
    if (ctx->pc == 0x240DD0u) {
        ctx->pc = 0x240DD4u;
        goto label_240dd4;
    }
    ctx->pc = 0x240DCCu;
    {
        const bool branch_taken_0x240dcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x240dcc) {
            ctx->pc = 0x240DE8u;
            goto label_240de8;
        }
    }
    ctx->pc = 0x240DD4u;
label_240dd4:
    // 0x240dd4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x240dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_240dd8:
    // 0x240dd8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x240dd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_240ddc:
    // 0x240ddc: 0x8c6301c0  lw          $v1, 0x1C0($v1)
    ctx->pc = 0x240ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_240de0:
    // 0x240de0: 0x50600113  beql        $v1, $zero, . + 4 + (0x113 << 2)
label_240de4:
    if (ctx->pc == 0x240DE4u) {
        ctx->pc = 0x240DE4u;
            // 0x240de4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x240DE8u;
        goto label_240de8;
    }
    ctx->pc = 0x240DE0u;
    {
        const bool branch_taken_0x240de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240de0) {
            ctx->pc = 0x240DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240DE0u;
            // 0x240de4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241230u;
            goto label_241230;
        }
    }
    ctx->pc = 0x240DE8u;
label_240de8:
    // 0x240de8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x240de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_240dec:
    // 0x240dec: 0xc08d40c  jal         func_235030
label_240df0:
    if (ctx->pc == 0x240DF0u) {
        ctx->pc = 0x240DF0u;
            // 0x240df0: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->pc = 0x240DF4u;
        goto label_240df4;
    }
    ctx->pc = 0x240DECu;
    SET_GPR_U32(ctx, 31, 0x240DF4u);
    ctx->pc = 0x240DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240DECu;
            // 0x240df0: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240DF4u; }
        if (ctx->pc != 0x240DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240DF4u; }
        if (ctx->pc != 0x240DF4u) { return; }
    }
    ctx->pc = 0x240DF4u;
label_240df4:
    // 0x240df4: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x240df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240df8:
    // 0x240df8: 0x3a020007  xori        $v0, $s0, 0x7
    ctx->pc = 0x240df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)7);
label_240dfc:
    // 0x240dfc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x240dfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_240e00:
    // 0x240e00: 0x3aa20007  xori        $v0, $s5, 0x7
    ctx->pc = 0x240e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)7);
label_240e04:
    // 0x240e04: 0x8c930008  lw          $s3, 0x8($a0)
    ctx->pc = 0x240e04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_240e08:
    // 0x240e08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x240e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_240e0c:
    // 0x240e0c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x240e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_240e10:
    // 0x240e10: 0x126000f6  beqz        $s3, . + 4 + (0xF6 << 2)
label_240e14:
    if (ctx->pc == 0x240E14u) {
        ctx->pc = 0x240E14u;
            // 0x240e14: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x240E18u;
        goto label_240e18;
    }
    ctx->pc = 0x240E10u;
    {
        const bool branch_taken_0x240e10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E10u;
            // 0x240e14: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e10) {
            ctx->pc = 0x2411ECu;
            goto label_2411ec;
        }
    }
    ctx->pc = 0x240E18u;
label_240e18:
    // 0x240e18: 0x504000f5  beql        $v0, $zero, . + 4 + (0xF5 << 2)
label_240e1c:
    if (ctx->pc == 0x240E1Cu) {
        ctx->pc = 0x240E1Cu;
            // 0x240e1c: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->pc = 0x240E20u;
        goto label_240e20;
    }
    ctx->pc = 0x240E18u;
    {
        const bool branch_taken_0x240e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e18) {
            ctx->pc = 0x240E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240E18u;
            // 0x240e1c: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2411F0u;
            goto label_2411f0;
        }
    }
    ctx->pc = 0x240E20u;
label_240e20:
    // 0x240e20: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x240e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_240e24:
    // 0x240e24: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x240e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_240e28:
    // 0x240e28: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x240e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_240e2c:
    // 0x240e2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x240e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_240e30:
    // 0x240e30: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x240e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_240e34:
    // 0x240e34: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x240e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_240e38:
    // 0x240e38: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x240e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_240e3c:
    // 0x240e3c: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x240e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_240e40:
    // 0x240e40: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x240e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_240e44:
    // 0x240e44: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x240e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_240e48:
    // 0x240e48: 0x27a20094  addiu       $v0, $sp, 0x94
    ctx->pc = 0x240e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_240e4c:
    // 0x240e4c: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x240e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_240e50:
    // 0x240e50: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_240e54:
    // 0x240e54: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x240e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_240e58:
    // 0x240e58: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x240e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_240e5c:
    // 0x240e5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x240e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240e60:
    // 0x240e60: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x240e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_240e64:
    // 0x240e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240e68:
    // 0x240e68: 0xafa5009c  sw          $a1, 0x9C($sp)
    ctx->pc = 0x240e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
label_240e6c:
    // 0x240e6c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x240e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_240e70:
    // 0x240e70: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x240e70u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
label_240e74:
    // 0x240e74: 0xa263008d  sb          $v1, 0x8D($s3)
    ctx->pc = 0x240e74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 141), (uint8_t)GPR_U32(ctx, 3));
label_240e78:
    // 0x240e78: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x240e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240e7c:
    // 0x240e7c: 0xc090498  jal         func_241260
label_240e80:
    if (ctx->pc == 0x240E80u) {
        ctx->pc = 0x240E80u;
            // 0x240e80: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x240E84u;
        goto label_240e84;
    }
    ctx->pc = 0x240E7Cu;
    SET_GPR_U32(ctx, 31, 0x240E84u);
    ctx->pc = 0x240E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240E7Cu;
            // 0x240e80: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241260u;
    if (runtime->hasFunction(0x241260u)) {
        auto targetFn = runtime->lookupFunction(0x241260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E84u; }
        if (ctx->pc != 0x240E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241260_0x241260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E84u; }
        if (ctx->pc != 0x240E84u) { return; }
    }
    ctx->pc = 0x240E84u;
label_240e84:
    // 0x240e84: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x240e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240e88:
    // 0x240e88: 0x52a20007  beql        $s5, $v0, . + 4 + (0x7 << 2)
label_240e8c:
    if (ctx->pc == 0x240E8Cu) {
        ctx->pc = 0x240E8Cu;
            // 0x240e8c: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->pc = 0x240E90u;
        goto label_240e90;
    }
    ctx->pc = 0x240E88u;
    {
        const bool branch_taken_0x240e88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x240e88) {
            ctx->pc = 0x240E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240E88u;
            // 0x240e8c: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240EA8u;
            goto label_240ea8;
        }
    }
    ctx->pc = 0x240E90u;
label_240e90:
    // 0x240e90: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x240e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240e94:
    // 0x240e94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240e98:
    // 0x240e98: 0xc08f940  jal         func_23E500
label_240e9c:
    if (ctx->pc == 0x240E9Cu) {
        ctx->pc = 0x240E9Cu;
            // 0x240e9c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x240EA0u;
        goto label_240ea0;
    }
    ctx->pc = 0x240E98u;
    SET_GPR_U32(ctx, 31, 0x240EA0u);
    ctx->pc = 0x240E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240E98u;
            // 0x240e9c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E500u;
    if (runtime->hasFunction(0x23E500u)) {
        auto targetFn = runtime->lookupFunction(0x23E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240EA0u; }
        if (ctx->pc != 0x240EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E500_0x23e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240EA0u; }
        if (ctx->pc != 0x240EA0u) { return; }
    }
    ctx->pc = 0x240EA0u;
label_240ea0:
    // 0x240ea0: 0x10000005  b           . + 4 + (0x5 << 2)
label_240ea4:
    if (ctx->pc == 0x240EA4u) {
        ctx->pc = 0x240EA4u;
            // 0x240ea4: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->pc = 0x240EA8u;
        goto label_240ea8;
    }
    ctx->pc = 0x240EA0u;
    {
        const bool branch_taken_0x240ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EA0u;
            // 0x240ea4: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ea0) {
            ctx->pc = 0x240EB8u;
            goto label_240eb8;
        }
    }
    ctx->pc = 0x240EA8u;
label_240ea8:
    // 0x240ea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240eac:
    // 0x240eac: 0xc08f9a0  jal         func_23E680
label_240eb0:
    if (ctx->pc == 0x240EB0u) {
        ctx->pc = 0x240EB0u;
            // 0x240eb0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x240EB4u;
        goto label_240eb4;
    }
    ctx->pc = 0x240EACu;
    SET_GPR_U32(ctx, 31, 0x240EB4u);
    ctx->pc = 0x240EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240EACu;
            // 0x240eb0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E680u;
    if (runtime->hasFunction(0x23E680u)) {
        auto targetFn = runtime->lookupFunction(0x23E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240EB4u; }
        if (ctx->pc != 0x240EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E680_0x23e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240EB4u; }
        if (ctx->pc != 0x240EB4u) { return; }
    }
    ctx->pc = 0x240EB4u;
label_240eb4:
    // 0x240eb4: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x240eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240eb8:
    // 0x240eb8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x240eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_240ebc:
    // 0x240ebc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x240ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_240ec0:
    // 0x240ec0: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x240ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_240ec4:
    // 0x240ec4: 0xc090500  jal         func_241400
label_240ec8:
    if (ctx->pc == 0x240EC8u) {
        ctx->pc = 0x240EC8u;
            // 0x240ec8: 0x2444005c  addiu       $a0, $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
        ctx->pc = 0x240ECCu;
        goto label_240ecc;
    }
    ctx->pc = 0x240EC4u;
    SET_GPR_U32(ctx, 31, 0x240ECCu);
    ctx->pc = 0x240EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240EC4u;
            // 0x240ec8: 0x2444005c  addiu       $a0, $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241400u;
    if (runtime->hasFunction(0x241400u)) {
        auto targetFn = runtime->lookupFunction(0x241400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240ECCu; }
        if (ctx->pc != 0x240ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241400_0x241400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240ECCu; }
        if (ctx->pc != 0x240ECCu) { return; }
    }
    ctx->pc = 0x240ECCu;
label_240ecc:
    // 0x240ecc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x240eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240ed0:
    // 0x240ed0: 0x5202000e  beql        $s0, $v0, . + 4 + (0xE << 2)
label_240ed4:
    if (ctx->pc == 0x240ED4u) {
        ctx->pc = 0x240ED4u;
            // 0x240ed4: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->pc = 0x240ED8u;
        goto label_240ed8;
    }
    ctx->pc = 0x240ED0u;
    {
        const bool branch_taken_0x240ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x240ed0) {
            ctx->pc = 0x240ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240ED0u;
            // 0x240ed4: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240F0Cu;
            goto label_240f0c;
        }
    }
    ctx->pc = 0x240ED8u;
label_240ed8:
    // 0x240ed8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x240ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240edc:
    // 0x240edc: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x240edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_240ee0:
    // 0x240ee0: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x240ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_240ee4:
    // 0x240ee4: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x240ee4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_240ee8:
    // 0x240ee8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_240eec:
    if (ctx->pc == 0x240EECu) {
        ctx->pc = 0x240EF0u;
        goto label_240ef0;
    }
    ctx->pc = 0x240EE8u;
    {
        const bool branch_taken_0x240ee8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x240ee8) {
            ctx->pc = 0x240F08u;
            goto label_240f08;
        }
    }
    ctx->pc = 0x240EF0u;
label_240ef0:
    // 0x240ef0: 0x90a40027  lbu         $a0, 0x27($a1)
    ctx->pc = 0x240ef0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
label_240ef4:
    // 0x240ef4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x240ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_240ef8:
    // 0x240ef8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x240ef8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_240efc:
    // 0x240efc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x240efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_240f00:
    // 0x240f00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_240f04:
    // 0x240f04: 0xa0a20027  sb          $v0, 0x27($a1)
    ctx->pc = 0x240f04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 2));
label_240f08:
    // 0x240f08: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x240f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240f0c:
    // 0x240f0c: 0xc08f91c  jal         func_23E470
label_240f10:
    if (ctx->pc == 0x240F10u) {
        ctx->pc = 0x240F10u;
            // 0x240f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F14u;
        goto label_240f14;
    }
    ctx->pc = 0x240F0Cu;
    SET_GPR_U32(ctx, 31, 0x240F14u);
    ctx->pc = 0x240F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F0Cu;
            // 0x240f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E470u;
    if (runtime->hasFunction(0x23E470u)) {
        auto targetFn = runtime->lookupFunction(0x23E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F14u; }
        if (ctx->pc != 0x240F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E470_0x23e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F14u; }
        if (ctx->pc != 0x240F14u) { return; }
    }
    ctx->pc = 0x240F14u;
label_240f14:
    // 0x240f14: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x240f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240f18:
    // 0x240f18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x240f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240f1c:
    // 0x240f1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x240f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240f20:
    // 0x240f20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x240f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_240f24:
    // 0x240f24: 0xc090734  jal         func_241CD0
label_240f28:
    if (ctx->pc == 0x240F28u) {
        ctx->pc = 0x240F28u;
            // 0x240f28: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F2Cu;
        goto label_240f2c;
    }
    ctx->pc = 0x240F24u;
    SET_GPR_U32(ctx, 31, 0x240F2Cu);
    ctx->pc = 0x240F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F24u;
            // 0x240f28: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241CD0u;
    if (runtime->hasFunction(0x241CD0u)) {
        auto targetFn = runtime->lookupFunction(0x241CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F2Cu; }
        if (ctx->pc != 0x240F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241CD0_0x241cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F2Cu; }
        if (ctx->pc != 0x240F2Cu) { return; }
    }
    ctx->pc = 0x240F2Cu;
label_240f2c:
    // 0x240f2c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x240f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240f30:
    // 0x240f30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x240f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_240f34:
    // 0x240f34: 0xc08f7e4  jal         func_23DF90
label_240f38:
    if (ctx->pc == 0x240F38u) {
        ctx->pc = 0x240F38u;
            // 0x240f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F3Cu;
        goto label_240f3c;
    }
    ctx->pc = 0x240F34u;
    SET_GPR_U32(ctx, 31, 0x240F3Cu);
    ctx->pc = 0x240F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F34u;
            // 0x240f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DF90u;
    if (runtime->hasFunction(0x23DF90u)) {
        auto targetFn = runtime->lookupFunction(0x23DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F3Cu; }
        if (ctx->pc != 0x240F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DF90_0x23df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F3Cu; }
        if (ctx->pc != 0x240F3Cu) { return; }
    }
    ctx->pc = 0x240F3Cu;
label_240f3c:
    // 0x240f3c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x240f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240f40:
    // 0x240f40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240f44:
    // 0x240f44: 0xc08fa2c  jal         func_23E8B0
label_240f48:
    if (ctx->pc == 0x240F48u) {
        ctx->pc = 0x240F48u;
            // 0x240f48: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x240F4Cu;
        goto label_240f4c;
    }
    ctx->pc = 0x240F44u;
    SET_GPR_U32(ctx, 31, 0x240F4Cu);
    ctx->pc = 0x240F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F44u;
            // 0x240f48: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E8B0u;
    if (runtime->hasFunction(0x23E8B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F4Cu; }
        if (ctx->pc != 0x240F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E8B0_0x23e8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F4Cu; }
        if (ctx->pc != 0x240F4Cu) { return; }
    }
    ctx->pc = 0x240F4Cu;
label_240f4c:
    // 0x240f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240f50:
    // 0x240f50: 0xa262008d  sb          $v0, 0x8D($s3)
    ctx->pc = 0x240f50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 141), (uint8_t)GPR_U32(ctx, 2));
label_240f54:
    // 0x240f54: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x240f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_240f58:
    // 0x240f58: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
label_240f5c:
    if (ctx->pc == 0x240F5Cu) {
        ctx->pc = 0x240F5Cu;
            // 0x240f5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F60u;
        goto label_240f60;
    }
    ctx->pc = 0x240F58u;
    {
        const bool branch_taken_0x240f58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x240F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240F58u;
            // 0x240f5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f58) {
            ctx->pc = 0x240FE0u;
            goto label_240fe0;
        }
    }
    ctx->pc = 0x240F60u;
label_240f60:
    // 0x240f60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240f64:
    // 0x240f64: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x240f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_240f68:
    // 0x240f68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240f6c:
    // 0x240f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240f70:
    // 0x240f70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_240f74:
    // 0x240f74: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x240f74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240f78:
    // 0x240f78: 0xc08fb10  jal         func_23EC40
label_240f7c:
    if (ctx->pc == 0x240F7Cu) {
        ctx->pc = 0x240F7Cu;
            // 0x240f7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F80u;
        goto label_240f80;
    }
    ctx->pc = 0x240F78u;
    SET_GPR_U32(ctx, 31, 0x240F80u);
    ctx->pc = 0x240F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F78u;
            // 0x240f7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EC40u;
    if (runtime->hasFunction(0x23EC40u)) {
        auto targetFn = runtime->lookupFunction(0x23EC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F80u; }
        if (ctx->pc != 0x240F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EC40_0x23ec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F80u; }
        if (ctx->pc != 0x240F80u) { return; }
    }
    ctx->pc = 0x240F80u;
label_240f80:
    // 0x240f80: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x240f80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_240f84:
    // 0x240f84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_240f88:
    if (ctx->pc == 0x240F88u) {
        ctx->pc = 0x240F8Cu;
        goto label_240f8c;
    }
    ctx->pc = 0x240F84u;
    {
        const bool branch_taken_0x240f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f84) {
            ctx->pc = 0x240FC8u;
            goto label_240fc8;
        }
    }
    ctx->pc = 0x240F8Cu;
label_240f8c:
    // 0x240f8c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x240f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_240f90:
    // 0x240f90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_240f94:
    // 0x240f94: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x240f94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_240f98:
    // 0x240f98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x240f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_240f9c:
    // 0x240f9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x240f9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_240fa0:
    // 0x240fa0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_240fa4:
    if (ctx->pc == 0x240FA4u) {
        ctx->pc = 0x240FA8u;
        goto label_240fa8;
    }
    ctx->pc = 0x240FA0u;
    {
        const bool branch_taken_0x240fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240fa0) {
            ctx->pc = 0x240FC8u;
            goto label_240fc8;
        }
    }
    ctx->pc = 0x240FA8u;
label_240fa8:
    // 0x240fa8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_240fac:
    if (ctx->pc == 0x240FACu) {
        ctx->pc = 0x240FB0u;
        goto label_240fb0;
    }
    ctx->pc = 0x240FA8u;
    {
        const bool branch_taken_0x240fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x240fa8) {
            ctx->pc = 0x240FC8u;
            goto label_240fc8;
        }
    }
    ctx->pc = 0x240FB0u;
label_240fb0:
    // 0x240fb0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x240fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240fb4:
    // 0x240fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240fb8:
    // 0x240fb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240fbc:
    // 0x240fbc: 0x320f809  jalr        $t9
label_240fc0:
    if (ctx->pc == 0x240FC0u) {
        ctx->pc = 0x240FC0u;
            // 0x240fc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x240FC4u;
        goto label_240fc4;
    }
    ctx->pc = 0x240FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240FC4u);
        ctx->pc = 0x240FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240FBCu;
            // 0x240fc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x240FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x240FC4u; }
            if (ctx->pc != 0x240FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x240FC4u;
label_240fc4:
    // 0x240fc4: 0x0  nop
    ctx->pc = 0x240fc4u;
    // NOP
label_240fc8:
    // 0x240fc8: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x240fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_240fcc:
    // 0x240fcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x240fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_240fd0:
    // 0x240fd0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x240fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_240fd4:
    // 0x240fd4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_240fd8:
    if (ctx->pc == 0x240FD8u) {
        ctx->pc = 0x240FD8u;
            // 0x240fd8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x240FDCu;
        goto label_240fdc;
    }
    ctx->pc = 0x240FD4u;
    {
        const bool branch_taken_0x240fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240FD4u;
            // 0x240fd8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fd4) {
            ctx->pc = 0x240F64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240f64;
        }
    }
    ctx->pc = 0x240FDCu;
label_240fdc:
    // 0x240fdc: 0x0  nop
    ctx->pc = 0x240fdcu;
    // NOP
label_240fe0:
    // 0x240fe0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x240fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240fe4:
    // 0x240fe4: 0x12a20022  beq         $s5, $v0, . + 4 + (0x22 << 2)
label_240fe8:
    if (ctx->pc == 0x240FE8u) {
        ctx->pc = 0x240FECu;
        goto label_240fec;
    }
    ctx->pc = 0x240FE4u;
    {
        const bool branch_taken_0x240fe4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x240fe4) {
            ctx->pc = 0x241070u;
            goto label_241070;
        }
    }
    ctx->pc = 0x240FECu;
label_240fec:
    // 0x240fec: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x240fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_240ff0:
    // 0x240ff0: 0x24500034  addiu       $s0, $v0, 0x34
    ctx->pc = 0x240ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_240ff4:
    // 0x240ff4: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x240ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_240ff8:
    // 0x240ff8: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
label_240ffc:
    if (ctx->pc == 0x240FFCu) {
        ctx->pc = 0x240FFCu;
            // 0x240ffc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241000u;
        goto label_241000;
    }
    ctx->pc = 0x240FF8u;
    {
        const bool branch_taken_0x240ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x240FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240FF8u;
            // 0x240ffc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ff8) {
            ctx->pc = 0x241070u;
            goto label_241070;
        }
    }
    ctx->pc = 0x241000u;
label_241000:
    // 0x241000: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x241000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241004:
    // 0x241004: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x241004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_241008:
    // 0x241008: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x241008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_24100c:
    // 0x24100c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_241010:
    // 0x241010: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x241010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_241014:
    // 0x241014: 0x90a200a8  lbu         $v0, 0xA8($a1)
    ctx->pc = 0x241014u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
label_241018:
    // 0x241018: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x241018u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_24101c:
    // 0x24101c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x24101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_241020:
    // 0x241020: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x241020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_241024:
    // 0x241024: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_241028:
    if (ctx->pc == 0x241028u) {
        ctx->pc = 0x241028u;
            // 0x241028: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x24102Cu;
        goto label_24102c;
    }
    ctx->pc = 0x241024u;
    {
        const bool branch_taken_0x241024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241024u;
            // 0x241028: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241024) {
            ctx->pc = 0x241058u;
            goto label_241058;
        }
    }
    ctx->pc = 0x24102Cu;
label_24102c:
    // 0x24102c: 0x90c200a8  lbu         $v0, 0xA8($a2)
    ctx->pc = 0x24102cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 168)));
label_241030:
    // 0x241030: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x241030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_241034:
    // 0x241034: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x241034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_241038:
    // 0x241038: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_24103c:
    if (ctx->pc == 0x24103Cu) {
        ctx->pc = 0x241040u;
        goto label_241040;
    }
    ctx->pc = 0x241038u;
    {
        const bool branch_taken_0x241038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241038) {
            ctx->pc = 0x241058u;
            goto label_241058;
        }
    }
    ctx->pc = 0x241040u;
label_241040:
    // 0x241040: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x241040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_241044:
    // 0x241044: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x241044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_241048:
    // 0x241048: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_24104c:
    if (ctx->pc == 0x24104Cu) {
        ctx->pc = 0x241050u;
        goto label_241050;
    }
    ctx->pc = 0x241048u;
    {
        const bool branch_taken_0x241048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x241048) {
            ctx->pc = 0x241058u;
            goto label_241058;
        }
    }
    ctx->pc = 0x241050u;
label_241050:
    // 0x241050: 0xc090168  jal         func_2405A0
label_241054:
    if (ctx->pc == 0x241054u) {
        ctx->pc = 0x241054u;
            // 0x241054: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->pc = 0x241058u;
        goto label_241058;
    }
    ctx->pc = 0x241050u;
    SET_GPR_U32(ctx, 31, 0x241058u);
    ctx->pc = 0x241054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241050u;
            // 0x241054: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2405A0u;
    if (runtime->hasFunction(0x2405A0u)) {
        auto targetFn = runtime->lookupFunction(0x2405A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241058u; }
        if (ctx->pc != 0x241058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002405A0_0x2405a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241058u; }
        if (ctx->pc != 0x241058u) { return; }
    }
    ctx->pc = 0x241058u;
label_241058:
    // 0x241058: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x241058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24105c:
    // 0x24105c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24105cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_241060:
    // 0x241060: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x241060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_241064:
    // 0x241064: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_241068:
    if (ctx->pc == 0x241068u) {
        ctx->pc = 0x241068u;
            // 0x241068: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x24106Cu;
        goto label_24106c;
    }
    ctx->pc = 0x241064u;
    {
        const bool branch_taken_0x241064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241064u;
            // 0x241068: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241064) {
            ctx->pc = 0x241004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241004;
        }
    }
    ctx->pc = 0x24106Cu;
label_24106c:
    // 0x24106c: 0x0  nop
    ctx->pc = 0x24106cu;
    // NOP
label_241070:
    // 0x241070: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x241070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_241074:
    // 0x241074: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x241074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_241078:
    // 0x241078: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_24107c:
    // 0x24107c: 0xc092490  jal         func_249240
label_241080:
    if (ctx->pc == 0x241080u) {
        ctx->pc = 0x241080u;
            // 0x241080: 0x2444005c  addiu       $a0, $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
        ctx->pc = 0x241084u;
        goto label_241084;
    }
    ctx->pc = 0x24107Cu;
    SET_GPR_U32(ctx, 31, 0x241084u);
    ctx->pc = 0x241080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24107Cu;
            // 0x241080: 0x2444005c  addiu       $a0, $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (runtime->hasFunction(0x249240u)) {
        auto targetFn = runtime->lookupFunction(0x249240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241084u; }
        if (ctx->pc != 0x241084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249240_0x249240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241084u; }
        if (ctx->pc != 0x241084u) { return; }
    }
    ctx->pc = 0x241084u;
label_241084:
    // 0x241084: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x241084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_241088:
    // 0x241088: 0x56a2001b  bnel        $s5, $v0, . + 4 + (0x1B << 2)
label_24108c:
    if (ctx->pc == 0x24108Cu) {
        ctx->pc = 0x24108Cu;
            // 0x24108c: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->pc = 0x241090u;
        goto label_241090;
    }
    ctx->pc = 0x241088u;
    {
        const bool branch_taken_0x241088 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x241088) {
            ctx->pc = 0x24108Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241088u;
            // 0x24108c: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2410F8u;
            goto label_2410f8;
        }
    }
    ctx->pc = 0x241090u;
label_241090:
    // 0x241090: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x241090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_241094:
    // 0x241094: 0xc66c01a0  lwc1        $f12, 0x1A0($s3)
    ctx->pc = 0x241094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_241098:
    // 0x241098: 0xc0a4170  jal         func_2905C0
label_24109c:
    if (ctx->pc == 0x24109Cu) {
        ctx->pc = 0x24109Cu;
            // 0x24109c: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->pc = 0x2410A0u;
        goto label_2410a0;
    }
    ctx->pc = 0x241098u;
    SET_GPR_U32(ctx, 31, 0x2410A0u);
    ctx->pc = 0x24109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241098u;
            // 0x24109c: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2905C0u;
    if (runtime->hasFunction(0x2905C0u)) {
        auto targetFn = runtime->lookupFunction(0x2905C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410A0u; }
        if (ctx->pc != 0x2410A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002905C0_0x2905c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410A0u; }
        if (ctx->pc != 0x2410A0u) { return; }
    }
    ctx->pc = 0x2410A0u;
label_2410a0:
    // 0x2410a0: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x2410a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_2410a4:
    // 0x2410a4: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x2410a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2410a8:
    // 0x2410a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2410a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2410ac:
    // 0x2410ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2410acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2410b0:
    // 0x2410b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2410b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2410b4:
    // 0x2410b4: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x2410b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
label_2410b8:
    // 0x2410b8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2410b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2410bc:
    // 0x2410bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2410bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2410c0:
    // 0x2410c0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2410c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2410c4:
    // 0x2410c4: 0x320f809  jalr        $t9
label_2410c8:
    if (ctx->pc == 0x2410C8u) {
        ctx->pc = 0x2410C8u;
            // 0x2410c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2410CCu;
        goto label_2410cc;
    }
    ctx->pc = 0x2410C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2410CCu);
        ctx->pc = 0x2410C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2410C4u;
            // 0x2410c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2410CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2410CCu; }
            if (ctx->pc != 0x2410CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2410CCu;
label_2410cc:
    // 0x2410cc: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x2410ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2410d0:
    // 0x2410d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2410d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2410d4:
    // 0x2410d4: 0xc08d8d4  jal         func_236350
label_2410d8:
    if (ctx->pc == 0x2410D8u) {
        ctx->pc = 0x2410D8u;
            // 0x2410d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2410DCu;
        goto label_2410dc;
    }
    ctx->pc = 0x2410D4u;
    SET_GPR_U32(ctx, 31, 0x2410DCu);
    ctx->pc = 0x2410D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2410D4u;
            // 0x2410d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236350u;
    if (runtime->hasFunction(0x236350u)) {
        auto targetFn = runtime->lookupFunction(0x236350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410DCu; }
        if (ctx->pc != 0x2410DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00236350_0x236350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410DCu; }
        if (ctx->pc != 0x2410DCu) { return; }
    }
    ctx->pc = 0x2410DCu;
label_2410dc:
    // 0x2410dc: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x2410dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2410e0:
    // 0x2410e0: 0xc08ea58  jal         func_23A960
label_2410e4:
    if (ctx->pc == 0x2410E4u) {
        ctx->pc = 0x2410E4u;
            // 0x2410e4: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->pc = 0x2410E8u;
        goto label_2410e8;
    }
    ctx->pc = 0x2410E0u;
    SET_GPR_U32(ctx, 31, 0x2410E8u);
    ctx->pc = 0x2410E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2410E0u;
            // 0x2410e4: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A960u;
    if (runtime->hasFunction(0x23A960u)) {
        auto targetFn = runtime->lookupFunction(0x23A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410E8u; }
        if (ctx->pc != 0x2410E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A960_0x23a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410E8u; }
        if (ctx->pc != 0x2410E8u) { return; }
    }
    ctx->pc = 0x2410E8u;
label_2410e8:
    // 0x2410e8: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_2410ec:
    // 0x2410ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2410ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2410f0:
    // 0x2410f0: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x2410f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
label_2410f4:
    // 0x2410f4: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x2410f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2410f8:
    // 0x2410f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2410f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2410fc:
    // 0x2410fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2410fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_241100:
    // 0x241100: 0xc08bff0  jal         func_22FFC0
label_241104:
    if (ctx->pc == 0x241104u) {
        ctx->pc = 0x241104u;
            // 0x241104: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241108u;
        goto label_241108;
    }
    ctx->pc = 0x241100u;
    SET_GPR_U32(ctx, 31, 0x241108u);
    ctx->pc = 0x241104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241100u;
            // 0x241104: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241108u; }
        if (ctx->pc != 0x241108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241108u; }
        if (ctx->pc != 0x241108u) { return; }
    }
    ctx->pc = 0x241108u;
label_241108:
    // 0x241108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x241108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24110c:
    // 0x24110c: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x24110cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
label_241110:
    // 0x241110: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x241110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_241114:
    // 0x241114: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_241118:
    if (ctx->pc == 0x241118u) {
        ctx->pc = 0x241118u;
            // 0x241118: 0x8fa3009c  lw          $v1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x24111Cu;
        goto label_24111c;
    }
    ctx->pc = 0x241114u;
    {
        const bool branch_taken_0x241114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241114) {
            ctx->pc = 0x241118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241114u;
            // 0x241118: 0x8fa3009c  lw          $v1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241140u;
            goto label_241140;
        }
    }
    ctx->pc = 0x24111Cu;
label_24111c:
    // 0x24111c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x24111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_241120:
    // 0x241120: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_241124:
    if (ctx->pc == 0x241124u) {
        ctx->pc = 0x241128u;
        goto label_241128;
    }
    ctx->pc = 0x241120u;
    {
        const bool branch_taken_0x241120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241120) {
            ctx->pc = 0x24113Cu;
            goto label_24113c;
        }
    }
    ctx->pc = 0x241128u;
label_241128:
    // 0x241128: 0x8262008c  lb          $v0, 0x8C($s3)
    ctx->pc = 0x241128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
label_24112c:
    // 0x24112c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_241130:
    if (ctx->pc == 0x241130u) {
        ctx->pc = 0x241134u;
        goto label_241134;
    }
    ctx->pc = 0x24112Cu;
    {
        const bool branch_taken_0x24112c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24112c) {
            ctx->pc = 0x24113Cu;
            goto label_24113c;
        }
    }
    ctx->pc = 0x241134u;
label_241134:
    // 0x241134: 0xc08d1c4  jal         func_234710
label_241138:
    if (ctx->pc == 0x241138u) {
        ctx->pc = 0x241138u;
            // 0x241138: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24113Cu;
        goto label_24113c;
    }
    ctx->pc = 0x241134u;
    SET_GPR_U32(ctx, 31, 0x24113Cu);
    ctx->pc = 0x241138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241134u;
            // 0x241138: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24113Cu; }
        if (ctx->pc != 0x24113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24113Cu; }
        if (ctx->pc != 0x24113Cu) { return; }
    }
    ctx->pc = 0x24113Cu;
label_24113c:
    // 0x24113c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x24113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_241140:
    // 0x241140: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_241144:
    // 0x241144: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x241144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_241148:
    // 0x241148: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_24114c:
    if (ctx->pc == 0x24114Cu) {
        ctx->pc = 0x24114Cu;
            // 0x24114c: 0x8fa300b8  lw          $v1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->pc = 0x241150u;
        goto label_241150;
    }
    ctx->pc = 0x241148u;
    {
        const bool branch_taken_0x241148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241148) {
            ctx->pc = 0x24114Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241148u;
            // 0x24114c: 0x8fa300b8  lw          $v1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241178u;
            goto label_241178;
        }
    }
    ctx->pc = 0x241150u;
label_241150:
    // 0x241150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x241150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_241154:
    // 0x241154: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x241154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_241158:
    // 0x241158: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x241158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_24115c:
    // 0x24115c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x24115cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_241160:
    // 0x241160: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_241164:
    // 0x241164: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x241164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_241168:
    // 0x241168: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x241168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_24116c:
    // 0x24116c: 0xc0a7ab4  jal         func_29EAD0
label_241170:
    if (ctx->pc == 0x241170u) {
        ctx->pc = 0x241170u;
            // 0x241170: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x241174u;
        goto label_241174;
    }
    ctx->pc = 0x24116Cu;
    SET_GPR_U32(ctx, 31, 0x241174u);
    ctx->pc = 0x241170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24116Cu;
            // 0x241170: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241174u; }
        if (ctx->pc != 0x241174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241174u; }
        if (ctx->pc != 0x241174u) { return; }
    }
    ctx->pc = 0x241174u;
label_241174:
    // 0x241174: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x241174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_241178:
    // 0x241178: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x241178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_24117c:
    // 0x24117c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_241180:
    // 0x241180: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_241184:
    if (ctx->pc == 0x241184u) {
        ctx->pc = 0x241184u;
            // 0x241184: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x241188u;
        goto label_241188;
    }
    ctx->pc = 0x241180u;
    {
        const bool branch_taken_0x241180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241180) {
            ctx->pc = 0x241184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241180u;
            // 0x241184: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2411B0u;
            goto label_2411b0;
        }
    }
    ctx->pc = 0x241188u;
label_241188:
    // 0x241188: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x241188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_24118c:
    // 0x24118c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x24118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_241190:
    // 0x241190: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x241190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_241194:
    // 0x241194: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x241194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_241198:
    // 0x241198: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x241198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24119c:
    // 0x24119c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x24119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2411a0:
    // 0x2411a0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2411a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2411a4:
    // 0x2411a4: 0xc0a7ab4  jal         func_29EAD0
label_2411a8:
    if (ctx->pc == 0x2411A8u) {
        ctx->pc = 0x2411A8u;
            // 0x2411a8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2411ACu;
        goto label_2411ac;
    }
    ctx->pc = 0x2411A4u;
    SET_GPR_U32(ctx, 31, 0x2411ACu);
    ctx->pc = 0x2411A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2411A4u;
            // 0x2411a8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411ACu; }
        if (ctx->pc != 0x2411ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411ACu; }
        if (ctx->pc != 0x2411ACu) { return; }
    }
    ctx->pc = 0x2411ACu;
label_2411ac:
    // 0x2411ac: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2411acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2411b0:
    // 0x2411b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2411b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2411b4:
    // 0x2411b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2411b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2411b8:
    // 0x2411b8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_2411bc:
    if (ctx->pc == 0x2411BCu) {
        ctx->pc = 0x2411BCu;
            // 0x2411bc: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->pc = 0x2411C0u;
        goto label_2411c0;
    }
    ctx->pc = 0x2411B8u;
    {
        const bool branch_taken_0x2411b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2411b8) {
            ctx->pc = 0x2411BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2411B8u;
            // 0x2411bc: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241224u;
            goto label_241224;
        }
    }
    ctx->pc = 0x2411C0u;
label_2411c0:
    // 0x2411c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2411c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2411c4:
    // 0x2411c4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2411c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2411c8:
    // 0x2411c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2411c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2411cc:
    // 0x2411cc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2411ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2411d0:
    // 0x2411d0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2411d4:
    // 0x2411d4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2411d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2411d8:
    // 0x2411d8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2411d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2411dc:
    // 0x2411dc: 0xc0a7ab4  jal         func_29EAD0
label_2411e0:
    if (ctx->pc == 0x2411E0u) {
        ctx->pc = 0x2411E0u;
            // 0x2411e0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2411E4u;
        goto label_2411e4;
    }
    ctx->pc = 0x2411DCu;
    SET_GPR_U32(ctx, 31, 0x2411E4u);
    ctx->pc = 0x2411E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2411DCu;
            // 0x2411e0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411E4u; }
        if (ctx->pc != 0x2411E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411E4u; }
        if (ctx->pc != 0x2411E4u) { return; }
    }
    ctx->pc = 0x2411E4u;
label_2411e4:
    // 0x2411e4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2411e8:
    if (ctx->pc == 0x2411E8u) {
        ctx->pc = 0x2411ECu;
        goto label_2411ec;
    }
    ctx->pc = 0x2411E4u;
    {
        const bool branch_taken_0x2411e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411e4) {
            ctx->pc = 0x241220u;
            goto label_241220;
        }
    }
    ctx->pc = 0x2411ECu;
label_2411ec:
    // 0x2411ec: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2411ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2411f0:
    // 0x2411f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2411f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2411f4:
    // 0x2411f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2411f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2411f8:
    // 0x2411f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2411f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2411fc:
    // 0x2411fc: 0xc090734  jal         func_241CD0
label_241200:
    if (ctx->pc == 0x241200u) {
        ctx->pc = 0x241200u;
            // 0x241200: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241204u;
        goto label_241204;
    }
    ctx->pc = 0x2411FCu;
    SET_GPR_U32(ctx, 31, 0x241204u);
    ctx->pc = 0x241200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2411FCu;
            // 0x241200: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241CD0u;
    if (runtime->hasFunction(0x241CD0u)) {
        auto targetFn = runtime->lookupFunction(0x241CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241204u; }
        if (ctx->pc != 0x241204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241CD0_0x241cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241204u; }
        if (ctx->pc != 0x241204u) { return; }
    }
    ctx->pc = 0x241204u;
label_241204:
    // 0x241204: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_241208:
    if (ctx->pc == 0x241208u) {
        ctx->pc = 0x24120Cu;
        goto label_24120c;
    }
    ctx->pc = 0x241204u;
    {
        const bool branch_taken_0x241204 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x241204) {
            ctx->pc = 0x241220u;
            goto label_241220;
        }
    }
    ctx->pc = 0x24120Cu;
label_24120c:
    // 0x24120c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x24120cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_241210:
    // 0x241210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_241214:
    // 0x241214: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x241214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_241218:
    // 0x241218: 0xc08bff0  jal         func_22FFC0
label_24121c:
    if (ctx->pc == 0x24121Cu) {
        ctx->pc = 0x24121Cu;
            // 0x24121c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241220u;
        goto label_241220;
    }
    ctx->pc = 0x241218u;
    SET_GPR_U32(ctx, 31, 0x241220u);
    ctx->pc = 0x24121Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241218u;
            // 0x24121c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241220u; }
        if (ctx->pc != 0x241220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241220u; }
        if (ctx->pc != 0x241220u) { return; }
    }
    ctx->pc = 0x241220u;
label_241220:
    // 0x241220: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x241220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_241224:
    // 0x241224: 0xc08d414  jal         func_235050
label_241228:
    if (ctx->pc == 0x241228u) {
        ctx->pc = 0x24122Cu;
        goto label_24122c;
    }
    ctx->pc = 0x241224u;
    SET_GPR_U32(ctx, 31, 0x24122Cu);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24122Cu; }
        if (ctx->pc != 0x24122Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24122Cu; }
        if (ctx->pc != 0x24122Cu) { return; }
    }
    ctx->pc = 0x24122Cu;
label_24122c:
    // 0x24122c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24122cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_241230:
    // 0x241230: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x241230u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_241234:
    // 0x241234: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x241234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_241238:
    // 0x241238: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x241238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24123c:
    // 0x24123c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24123cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_241240:
    // 0x241240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_241244:
    // 0x241244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241248:
    // 0x241248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24124c:
    // 0x24124c: 0x3e00008  jr          $ra
label_241250:
    if (ctx->pc == 0x241250u) {
        ctx->pc = 0x241250u;
            // 0x241250: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x241254u;
        goto label_241254;
    }
    ctx->pc = 0x24124Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24124Cu;
            // 0x241250: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241254u;
label_241254:
    // 0x241254: 0x0  nop
    ctx->pc = 0x241254u;
    // NOP
label_241258:
    // 0x241258: 0x0  nop
    ctx->pc = 0x241258u;
    // NOP
label_24125c:
    // 0x24125c: 0x0  nop
    ctx->pc = 0x24125cu;
    // NOP
}
