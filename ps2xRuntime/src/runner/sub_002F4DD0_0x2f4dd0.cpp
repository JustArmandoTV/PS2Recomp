#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4DD0
// Address: 0x2f4dd0 - 0x2f5290
void sub_002F4DD0_0x2f4dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4DD0_0x2f4dd0");
#endif

    switch (ctx->pc) {
        case 0x2f4dd0u: goto label_2f4dd0;
        case 0x2f4dd4u: goto label_2f4dd4;
        case 0x2f4dd8u: goto label_2f4dd8;
        case 0x2f4ddcu: goto label_2f4ddc;
        case 0x2f4de0u: goto label_2f4de0;
        case 0x2f4de4u: goto label_2f4de4;
        case 0x2f4de8u: goto label_2f4de8;
        case 0x2f4decu: goto label_2f4dec;
        case 0x2f4df0u: goto label_2f4df0;
        case 0x2f4df4u: goto label_2f4df4;
        case 0x2f4df8u: goto label_2f4df8;
        case 0x2f4dfcu: goto label_2f4dfc;
        case 0x2f4e00u: goto label_2f4e00;
        case 0x2f4e04u: goto label_2f4e04;
        case 0x2f4e08u: goto label_2f4e08;
        case 0x2f4e0cu: goto label_2f4e0c;
        case 0x2f4e10u: goto label_2f4e10;
        case 0x2f4e14u: goto label_2f4e14;
        case 0x2f4e18u: goto label_2f4e18;
        case 0x2f4e1cu: goto label_2f4e1c;
        case 0x2f4e20u: goto label_2f4e20;
        case 0x2f4e24u: goto label_2f4e24;
        case 0x2f4e28u: goto label_2f4e28;
        case 0x2f4e2cu: goto label_2f4e2c;
        case 0x2f4e30u: goto label_2f4e30;
        case 0x2f4e34u: goto label_2f4e34;
        case 0x2f4e38u: goto label_2f4e38;
        case 0x2f4e3cu: goto label_2f4e3c;
        case 0x2f4e40u: goto label_2f4e40;
        case 0x2f4e44u: goto label_2f4e44;
        case 0x2f4e48u: goto label_2f4e48;
        case 0x2f4e4cu: goto label_2f4e4c;
        case 0x2f4e50u: goto label_2f4e50;
        case 0x2f4e54u: goto label_2f4e54;
        case 0x2f4e58u: goto label_2f4e58;
        case 0x2f4e5cu: goto label_2f4e5c;
        case 0x2f4e60u: goto label_2f4e60;
        case 0x2f4e64u: goto label_2f4e64;
        case 0x2f4e68u: goto label_2f4e68;
        case 0x2f4e6cu: goto label_2f4e6c;
        case 0x2f4e70u: goto label_2f4e70;
        case 0x2f4e74u: goto label_2f4e74;
        case 0x2f4e78u: goto label_2f4e78;
        case 0x2f4e7cu: goto label_2f4e7c;
        case 0x2f4e80u: goto label_2f4e80;
        case 0x2f4e84u: goto label_2f4e84;
        case 0x2f4e88u: goto label_2f4e88;
        case 0x2f4e8cu: goto label_2f4e8c;
        case 0x2f4e90u: goto label_2f4e90;
        case 0x2f4e94u: goto label_2f4e94;
        case 0x2f4e98u: goto label_2f4e98;
        case 0x2f4e9cu: goto label_2f4e9c;
        case 0x2f4ea0u: goto label_2f4ea0;
        case 0x2f4ea4u: goto label_2f4ea4;
        case 0x2f4ea8u: goto label_2f4ea8;
        case 0x2f4eacu: goto label_2f4eac;
        case 0x2f4eb0u: goto label_2f4eb0;
        case 0x2f4eb4u: goto label_2f4eb4;
        case 0x2f4eb8u: goto label_2f4eb8;
        case 0x2f4ebcu: goto label_2f4ebc;
        case 0x2f4ec0u: goto label_2f4ec0;
        case 0x2f4ec4u: goto label_2f4ec4;
        case 0x2f4ec8u: goto label_2f4ec8;
        case 0x2f4eccu: goto label_2f4ecc;
        case 0x2f4ed0u: goto label_2f4ed0;
        case 0x2f4ed4u: goto label_2f4ed4;
        case 0x2f4ed8u: goto label_2f4ed8;
        case 0x2f4edcu: goto label_2f4edc;
        case 0x2f4ee0u: goto label_2f4ee0;
        case 0x2f4ee4u: goto label_2f4ee4;
        case 0x2f4ee8u: goto label_2f4ee8;
        case 0x2f4eecu: goto label_2f4eec;
        case 0x2f4ef0u: goto label_2f4ef0;
        case 0x2f4ef4u: goto label_2f4ef4;
        case 0x2f4ef8u: goto label_2f4ef8;
        case 0x2f4efcu: goto label_2f4efc;
        case 0x2f4f00u: goto label_2f4f00;
        case 0x2f4f04u: goto label_2f4f04;
        case 0x2f4f08u: goto label_2f4f08;
        case 0x2f4f0cu: goto label_2f4f0c;
        case 0x2f4f10u: goto label_2f4f10;
        case 0x2f4f14u: goto label_2f4f14;
        case 0x2f4f18u: goto label_2f4f18;
        case 0x2f4f1cu: goto label_2f4f1c;
        case 0x2f4f20u: goto label_2f4f20;
        case 0x2f4f24u: goto label_2f4f24;
        case 0x2f4f28u: goto label_2f4f28;
        case 0x2f4f2cu: goto label_2f4f2c;
        case 0x2f4f30u: goto label_2f4f30;
        case 0x2f4f34u: goto label_2f4f34;
        case 0x2f4f38u: goto label_2f4f38;
        case 0x2f4f3cu: goto label_2f4f3c;
        case 0x2f4f40u: goto label_2f4f40;
        case 0x2f4f44u: goto label_2f4f44;
        case 0x2f4f48u: goto label_2f4f48;
        case 0x2f4f4cu: goto label_2f4f4c;
        case 0x2f4f50u: goto label_2f4f50;
        case 0x2f4f54u: goto label_2f4f54;
        case 0x2f4f58u: goto label_2f4f58;
        case 0x2f4f5cu: goto label_2f4f5c;
        case 0x2f4f60u: goto label_2f4f60;
        case 0x2f4f64u: goto label_2f4f64;
        case 0x2f4f68u: goto label_2f4f68;
        case 0x2f4f6cu: goto label_2f4f6c;
        case 0x2f4f70u: goto label_2f4f70;
        case 0x2f4f74u: goto label_2f4f74;
        case 0x2f4f78u: goto label_2f4f78;
        case 0x2f4f7cu: goto label_2f4f7c;
        case 0x2f4f80u: goto label_2f4f80;
        case 0x2f4f84u: goto label_2f4f84;
        case 0x2f4f88u: goto label_2f4f88;
        case 0x2f4f8cu: goto label_2f4f8c;
        case 0x2f4f90u: goto label_2f4f90;
        case 0x2f4f94u: goto label_2f4f94;
        case 0x2f4f98u: goto label_2f4f98;
        case 0x2f4f9cu: goto label_2f4f9c;
        case 0x2f4fa0u: goto label_2f4fa0;
        case 0x2f4fa4u: goto label_2f4fa4;
        case 0x2f4fa8u: goto label_2f4fa8;
        case 0x2f4facu: goto label_2f4fac;
        case 0x2f4fb0u: goto label_2f4fb0;
        case 0x2f4fb4u: goto label_2f4fb4;
        case 0x2f4fb8u: goto label_2f4fb8;
        case 0x2f4fbcu: goto label_2f4fbc;
        case 0x2f4fc0u: goto label_2f4fc0;
        case 0x2f4fc4u: goto label_2f4fc4;
        case 0x2f4fc8u: goto label_2f4fc8;
        case 0x2f4fccu: goto label_2f4fcc;
        case 0x2f4fd0u: goto label_2f4fd0;
        case 0x2f4fd4u: goto label_2f4fd4;
        case 0x2f4fd8u: goto label_2f4fd8;
        case 0x2f4fdcu: goto label_2f4fdc;
        case 0x2f4fe0u: goto label_2f4fe0;
        case 0x2f4fe4u: goto label_2f4fe4;
        case 0x2f4fe8u: goto label_2f4fe8;
        case 0x2f4fecu: goto label_2f4fec;
        case 0x2f4ff0u: goto label_2f4ff0;
        case 0x2f4ff4u: goto label_2f4ff4;
        case 0x2f4ff8u: goto label_2f4ff8;
        case 0x2f4ffcu: goto label_2f4ffc;
        case 0x2f5000u: goto label_2f5000;
        case 0x2f5004u: goto label_2f5004;
        case 0x2f5008u: goto label_2f5008;
        case 0x2f500cu: goto label_2f500c;
        case 0x2f5010u: goto label_2f5010;
        case 0x2f5014u: goto label_2f5014;
        case 0x2f5018u: goto label_2f5018;
        case 0x2f501cu: goto label_2f501c;
        case 0x2f5020u: goto label_2f5020;
        case 0x2f5024u: goto label_2f5024;
        case 0x2f5028u: goto label_2f5028;
        case 0x2f502cu: goto label_2f502c;
        case 0x2f5030u: goto label_2f5030;
        case 0x2f5034u: goto label_2f5034;
        case 0x2f5038u: goto label_2f5038;
        case 0x2f503cu: goto label_2f503c;
        case 0x2f5040u: goto label_2f5040;
        case 0x2f5044u: goto label_2f5044;
        case 0x2f5048u: goto label_2f5048;
        case 0x2f504cu: goto label_2f504c;
        case 0x2f5050u: goto label_2f5050;
        case 0x2f5054u: goto label_2f5054;
        case 0x2f5058u: goto label_2f5058;
        case 0x2f505cu: goto label_2f505c;
        case 0x2f5060u: goto label_2f5060;
        case 0x2f5064u: goto label_2f5064;
        case 0x2f5068u: goto label_2f5068;
        case 0x2f506cu: goto label_2f506c;
        case 0x2f5070u: goto label_2f5070;
        case 0x2f5074u: goto label_2f5074;
        case 0x2f5078u: goto label_2f5078;
        case 0x2f507cu: goto label_2f507c;
        case 0x2f5080u: goto label_2f5080;
        case 0x2f5084u: goto label_2f5084;
        case 0x2f5088u: goto label_2f5088;
        case 0x2f508cu: goto label_2f508c;
        case 0x2f5090u: goto label_2f5090;
        case 0x2f5094u: goto label_2f5094;
        case 0x2f5098u: goto label_2f5098;
        case 0x2f509cu: goto label_2f509c;
        case 0x2f50a0u: goto label_2f50a0;
        case 0x2f50a4u: goto label_2f50a4;
        case 0x2f50a8u: goto label_2f50a8;
        case 0x2f50acu: goto label_2f50ac;
        case 0x2f50b0u: goto label_2f50b0;
        case 0x2f50b4u: goto label_2f50b4;
        case 0x2f50b8u: goto label_2f50b8;
        case 0x2f50bcu: goto label_2f50bc;
        case 0x2f50c0u: goto label_2f50c0;
        case 0x2f50c4u: goto label_2f50c4;
        case 0x2f50c8u: goto label_2f50c8;
        case 0x2f50ccu: goto label_2f50cc;
        case 0x2f50d0u: goto label_2f50d0;
        case 0x2f50d4u: goto label_2f50d4;
        case 0x2f50d8u: goto label_2f50d8;
        case 0x2f50dcu: goto label_2f50dc;
        case 0x2f50e0u: goto label_2f50e0;
        case 0x2f50e4u: goto label_2f50e4;
        case 0x2f50e8u: goto label_2f50e8;
        case 0x2f50ecu: goto label_2f50ec;
        case 0x2f50f0u: goto label_2f50f0;
        case 0x2f50f4u: goto label_2f50f4;
        case 0x2f50f8u: goto label_2f50f8;
        case 0x2f50fcu: goto label_2f50fc;
        case 0x2f5100u: goto label_2f5100;
        case 0x2f5104u: goto label_2f5104;
        case 0x2f5108u: goto label_2f5108;
        case 0x2f510cu: goto label_2f510c;
        case 0x2f5110u: goto label_2f5110;
        case 0x2f5114u: goto label_2f5114;
        case 0x2f5118u: goto label_2f5118;
        case 0x2f511cu: goto label_2f511c;
        case 0x2f5120u: goto label_2f5120;
        case 0x2f5124u: goto label_2f5124;
        case 0x2f5128u: goto label_2f5128;
        case 0x2f512cu: goto label_2f512c;
        case 0x2f5130u: goto label_2f5130;
        case 0x2f5134u: goto label_2f5134;
        case 0x2f5138u: goto label_2f5138;
        case 0x2f513cu: goto label_2f513c;
        case 0x2f5140u: goto label_2f5140;
        case 0x2f5144u: goto label_2f5144;
        case 0x2f5148u: goto label_2f5148;
        case 0x2f514cu: goto label_2f514c;
        case 0x2f5150u: goto label_2f5150;
        case 0x2f5154u: goto label_2f5154;
        case 0x2f5158u: goto label_2f5158;
        case 0x2f515cu: goto label_2f515c;
        case 0x2f5160u: goto label_2f5160;
        case 0x2f5164u: goto label_2f5164;
        case 0x2f5168u: goto label_2f5168;
        case 0x2f516cu: goto label_2f516c;
        case 0x2f5170u: goto label_2f5170;
        case 0x2f5174u: goto label_2f5174;
        case 0x2f5178u: goto label_2f5178;
        case 0x2f517cu: goto label_2f517c;
        case 0x2f5180u: goto label_2f5180;
        case 0x2f5184u: goto label_2f5184;
        case 0x2f5188u: goto label_2f5188;
        case 0x2f518cu: goto label_2f518c;
        case 0x2f5190u: goto label_2f5190;
        case 0x2f5194u: goto label_2f5194;
        case 0x2f5198u: goto label_2f5198;
        case 0x2f519cu: goto label_2f519c;
        case 0x2f51a0u: goto label_2f51a0;
        case 0x2f51a4u: goto label_2f51a4;
        case 0x2f51a8u: goto label_2f51a8;
        case 0x2f51acu: goto label_2f51ac;
        case 0x2f51b0u: goto label_2f51b0;
        case 0x2f51b4u: goto label_2f51b4;
        case 0x2f51b8u: goto label_2f51b8;
        case 0x2f51bcu: goto label_2f51bc;
        case 0x2f51c0u: goto label_2f51c0;
        case 0x2f51c4u: goto label_2f51c4;
        case 0x2f51c8u: goto label_2f51c8;
        case 0x2f51ccu: goto label_2f51cc;
        case 0x2f51d0u: goto label_2f51d0;
        case 0x2f51d4u: goto label_2f51d4;
        case 0x2f51d8u: goto label_2f51d8;
        case 0x2f51dcu: goto label_2f51dc;
        case 0x2f51e0u: goto label_2f51e0;
        case 0x2f51e4u: goto label_2f51e4;
        case 0x2f51e8u: goto label_2f51e8;
        case 0x2f51ecu: goto label_2f51ec;
        case 0x2f51f0u: goto label_2f51f0;
        case 0x2f51f4u: goto label_2f51f4;
        case 0x2f51f8u: goto label_2f51f8;
        case 0x2f51fcu: goto label_2f51fc;
        case 0x2f5200u: goto label_2f5200;
        case 0x2f5204u: goto label_2f5204;
        case 0x2f5208u: goto label_2f5208;
        case 0x2f520cu: goto label_2f520c;
        case 0x2f5210u: goto label_2f5210;
        case 0x2f5214u: goto label_2f5214;
        case 0x2f5218u: goto label_2f5218;
        case 0x2f521cu: goto label_2f521c;
        case 0x2f5220u: goto label_2f5220;
        case 0x2f5224u: goto label_2f5224;
        case 0x2f5228u: goto label_2f5228;
        case 0x2f522cu: goto label_2f522c;
        case 0x2f5230u: goto label_2f5230;
        case 0x2f5234u: goto label_2f5234;
        case 0x2f5238u: goto label_2f5238;
        case 0x2f523cu: goto label_2f523c;
        case 0x2f5240u: goto label_2f5240;
        case 0x2f5244u: goto label_2f5244;
        case 0x2f5248u: goto label_2f5248;
        case 0x2f524cu: goto label_2f524c;
        case 0x2f5250u: goto label_2f5250;
        case 0x2f5254u: goto label_2f5254;
        case 0x2f5258u: goto label_2f5258;
        case 0x2f525cu: goto label_2f525c;
        case 0x2f5260u: goto label_2f5260;
        case 0x2f5264u: goto label_2f5264;
        case 0x2f5268u: goto label_2f5268;
        case 0x2f526cu: goto label_2f526c;
        case 0x2f5270u: goto label_2f5270;
        case 0x2f5274u: goto label_2f5274;
        case 0x2f5278u: goto label_2f5278;
        case 0x2f527cu: goto label_2f527c;
        case 0x2f5280u: goto label_2f5280;
        case 0x2f5284u: goto label_2f5284;
        case 0x2f5288u: goto label_2f5288;
        case 0x2f528cu: goto label_2f528c;
        default: break;
    }

    ctx->pc = 0x2f4dd0u;

label_2f4dd0:
    // 0x2f4dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f4dd4:
    // 0x2f4dd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f4dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f4dd8:
    // 0x2f4dd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f4ddc:
    // 0x2f4ddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f4de0:
    // 0x2f4de0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f4de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4de4:
    // 0x2f4de4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f4de8:
    // 0x2f4de8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f4de8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4dec:
    // 0x2f4dec: 0xc0b7310  jal         func_2DCC40
label_2f4df0:
    if (ctx->pc == 0x2F4DF0u) {
        ctx->pc = 0x2F4DF0u;
            // 0x2f4df0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2F4DF4u;
        goto label_2f4df4;
    }
    ctx->pc = 0x2F4DECu;
    SET_GPR_U32(ctx, 31, 0x2F4DF4u);
    ctx->pc = 0x2F4DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DECu;
            // 0x2f4df0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DCC40u;
    if (runtime->hasFunction(0x2DCC40u)) {
        auto targetFn = runtime->lookupFunction(0x2DCC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DF4u; }
        if (ctx->pc != 0x2F4DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DCC40_0x2dcc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DF4u; }
        if (ctx->pc != 0x2F4DF4u) { return; }
    }
    ctx->pc = 0x2F4DF4u;
label_2f4df4:
    // 0x2f4df4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f4df8:
    // 0x2f4df8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2f4df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2f4dfc:
    // 0x2f4dfc: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x2f4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_2f4e00:
    // 0x2f4e00: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2f4e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_2f4e04:
    // 0x2f4e04: 0x26640154  addiu       $a0, $s3, 0x154
    ctx->pc = 0x2f4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 340));
label_2f4e08:
    // 0x2f4e08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2f4e0c:
    // 0x2f4e0c: 0x24a51520  addiu       $a1, $a1, 0x1520
    ctx->pc = 0x2f4e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
label_2f4e10:
    // 0x2f4e10: 0x24c63260  addiu       $a2, $a2, 0x3260
    ctx->pc = 0x2f4e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12896));
label_2f4e14:
    // 0x2f4e14: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2f4e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2f4e18:
    // 0x2f4e18: 0xc040804  jal         func_102010
label_2f4e1c:
    if (ctx->pc == 0x2F4E1Cu) {
        ctx->pc = 0x2F4E1Cu;
            // 0x2f4e1c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2F4E20u;
        goto label_2f4e20;
    }
    ctx->pc = 0x2F4E18u;
    SET_GPR_U32(ctx, 31, 0x2F4E20u);
    ctx->pc = 0x2F4E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E18u;
            // 0x2f4e1c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E20u; }
        if (ctx->pc != 0x2F4E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E20u; }
        if (ctx->pc != 0x2F4E20u) { return; }
    }
    ctx->pc = 0x2F4E20u;
label_2f4e20:
    // 0x2f4e20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f4e24:
    // 0x2f4e24: 0xae600454  sw          $zero, 0x454($s3)
    ctx->pc = 0x2f4e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1108), GPR_U32(ctx, 0));
label_2f4e28:
    // 0x2f4e28: 0x24422a40  addiu       $v0, $v0, 0x2A40
    ctx->pc = 0x2f4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10816));
label_2f4e2c:
    // 0x2f4e2c: 0x26640458  addiu       $a0, $s3, 0x458
    ctx->pc = 0x2f4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1112));
label_2f4e30:
    // 0x2f4e30: 0xae620458  sw          $v0, 0x458($s3)
    ctx->pc = 0x2f4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1112), GPR_U32(ctx, 2));
label_2f4e34:
    // 0x2f4e34: 0xc0bd690  jal         func_2F5A40
label_2f4e38:
    if (ctx->pc == 0x2F4E38u) {
        ctx->pc = 0x2F4E38u;
            // 0x2f4e38: 0xae60045c  sw          $zero, 0x45C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1116), GPR_U32(ctx, 0));
        ctx->pc = 0x2F4E3Cu;
        goto label_2f4e3c;
    }
    ctx->pc = 0x2F4E34u;
    SET_GPR_U32(ctx, 31, 0x2F4E3Cu);
    ctx->pc = 0x2F4E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E34u;
            // 0x2f4e38: 0xae60045c  sw          $zero, 0x45C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5A40u;
    if (runtime->hasFunction(0x2F5A40u)) {
        auto targetFn = runtime->lookupFunction(0x2F5A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E3Cu; }
        if (ctx->pc != 0x2F4E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5A40_0x2f5a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E3Cu; }
        if (ctx->pc != 0x2F4E3Cu) { return; }
    }
    ctx->pc = 0x2F4E3Cu;
label_2f4e3c:
    // 0x2f4e3c: 0x8e500020  lw          $s0, 0x20($s2)
    ctx->pc = 0x2f4e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2f4e40:
    // 0x2f4e40: 0x26640458  addiu       $a0, $s3, 0x458
    ctx->pc = 0x2f4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1112));
label_2f4e44:
    // 0x2f4e44: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2f4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2f4e48:
    // 0x2f4e48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e4c:
    // 0x2f4e4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f4e50:
    // 0x2f4e50: 0xc0bd5f8  jal         func_2F57E0
label_2f4e54:
    if (ctx->pc == 0x2F4E54u) {
        ctx->pc = 0x2F4E54u;
            // 0x2f4e54: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2F4E58u;
        goto label_2f4e58;
    }
    ctx->pc = 0x2F4E50u;
    SET_GPR_U32(ctx, 31, 0x2F4E58u);
    ctx->pc = 0x2F4E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E50u;
            // 0x2f4e54: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F57E0u;
    if (runtime->hasFunction(0x2F57E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F57E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E58u; }
        if (ctx->pc != 0x2F4E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F57E0_0x2f57e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E58u; }
        if (ctx->pc != 0x2F4E58u) { return; }
    }
    ctx->pc = 0x2F4E58u;
label_2f4e58:
    // 0x2f4e58: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2f4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2f4e5c:
    // 0x2f4e5c: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x2f4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_2f4e60:
    // 0x2f4e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e64:
    // 0x2f4e64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f4e68:
    // 0x2f4e68: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2f4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_2f4e6c:
    // 0x2f4e6c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2f4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2f4e70:
    // 0x2f4e70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f4e74:
    // 0x2f4e74: 0xc0751b8  jal         func_1D46E0
label_2f4e78:
    if (ctx->pc == 0x2F4E78u) {
        ctx->pc = 0x2F4E78u;
            // 0x2f4e78: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2F4E7Cu;
        goto label_2f4e7c;
    }
    ctx->pc = 0x2F4E74u;
    SET_GPR_U32(ctx, 31, 0x2F4E7Cu);
    ctx->pc = 0x2F4E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E74u;
            // 0x2f4e78: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E7Cu; }
        if (ctx->pc != 0x2F4E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E7Cu; }
        if (ctx->pc != 0x2F4E7Cu) { return; }
    }
    ctx->pc = 0x2F4E7Cu;
label_2f4e7c:
    // 0x2f4e7c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2f4e80:
    // 0x2f4e80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e84:
    // 0x2f4e84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2f4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2f4e88:
    // 0x2f4e88: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2f4e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f4e8c:
    // 0x2f4e8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f4e90:
    // 0x2f4e90: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x2f4e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_2f4e94:
    // 0x2f4e94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f4e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2f4e98:
    // 0x2f4e98: 0x8c64e3a8  lw          $a0, -0x1C58($v1)
    ctx->pc = 0x2f4e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960040)));
label_2f4e9c:
    // 0x2f4e9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f4e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2f4ea0:
    // 0x2f4ea0: 0xac44e3a8  sw          $a0, -0x1C58($v0)
    ctx->pc = 0x2f4ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960040), GPR_U32(ctx, 4));
label_2f4ea4:
    // 0x2f4ea4: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x2f4ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2f4ea8:
    // 0x2f4ea8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f4ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f4eac:
    // 0x2f4eac: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x2f4eacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2f4eb0:
    // 0x2f4eb0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_2f4eb4:
    if (ctx->pc == 0x2F4EB4u) {
        ctx->pc = 0x2F4EB4u;
            // 0x2f4eb4: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->pc = 0x2F4EB8u;
        goto label_2f4eb8;
    }
    ctx->pc = 0x2F4EB0u;
    {
        const bool branch_taken_0x2f4eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EB0u;
            // 0x2f4eb4: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4eb0) {
            ctx->pc = 0x2F4E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4e90;
        }
    }
    ctx->pc = 0x2F4EB8u;
label_2f4eb8:
    // 0x2f4eb8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2f4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2f4ebc:
    // 0x2f4ebc: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x2f4ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2f4ec0:
    // 0x2f4ec0: 0x26700154  addiu       $s0, $s3, 0x154
    ctx->pc = 0x2f4ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 340));
label_2f4ec4:
    // 0x2f4ec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f4ec8:
    // 0x2f4ec8: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2f4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_2f4ecc:
    // 0x2f4ecc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f4ed0:
    // 0x2f4ed0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2f4ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2f4ed4:
    // 0x2f4ed4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2f4ed8:
    if (ctx->pc == 0x2F4ED8u) {
        ctx->pc = 0x2F4ED8u;
            // 0x2f4ed8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F4EDCu;
        goto label_2f4edc;
    }
    ctx->pc = 0x2F4ED4u;
    {
        const bool branch_taken_0x2f4ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4ED4u;
            // 0x2f4ed8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ed4) {
            ctx->pc = 0x2F4EF0u;
            goto label_2f4ef0;
        }
    }
    ctx->pc = 0x2F4EDCu;
label_2f4edc:
    // 0x2f4edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ee0:
    // 0x2f4ee0: 0xc074f30  jal         func_1D3CC0
label_2f4ee4:
    if (ctx->pc == 0x2F4EE4u) {
        ctx->pc = 0x2F4EE4u;
            // 0x2f4ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EE8u;
        goto label_2f4ee8;
    }
    ctx->pc = 0x2F4EE0u;
    SET_GPR_U32(ctx, 31, 0x2F4EE8u);
    ctx->pc = 0x2F4EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EE0u;
            // 0x2f4ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EE8u; }
        if (ctx->pc != 0x2F4EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EE8u; }
        if (ctx->pc != 0x2F4EE8u) { return; }
    }
    ctx->pc = 0x2F4EE8u;
label_2f4ee8:
    // 0x2f4ee8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f4eec:
    if (ctx->pc == 0x2F4EECu) {
        ctx->pc = 0x2F4EF0u;
        goto label_2f4ef0;
    }
    ctx->pc = 0x2F4EE8u;
    {
        const bool branch_taken_0x2f4ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ee8) {
            ctx->pc = 0x2F4F08u;
            goto label_2f4f08;
        }
    }
    ctx->pc = 0x2F4EF0u;
label_2f4ef0:
    // 0x2f4ef0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2f4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2f4ef4:
    // 0x2f4ef4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x2f4ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2f4ef8:
    // 0x2f4ef8: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x2f4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_2f4efc:
    // 0x2f4efc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2f4f00:
    if (ctx->pc == 0x2F4F00u) {
        ctx->pc = 0x2F4F00u;
            // 0x2f4f00: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x2F4F04u;
        goto label_2f4f04;
    }
    ctx->pc = 0x2F4EFCu;
    {
        const bool branch_taken_0x2f4efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EFCu;
            // 0x2f4f00: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4efc) {
            ctx->pc = 0x2F4FE8u;
            goto label_2f4fe8;
        }
    }
    ctx->pc = 0x2F4F04u;
label_2f4f04:
    // 0x2f4f04: 0x0  nop
    ctx->pc = 0x2f4f04u;
    // NOP
label_2f4f08:
    // 0x2f4f08: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2f4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2f4f0c:
    // 0x2f4f0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f4f10:
    // 0x2f4f10: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2f4f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_2f4f14:
    // 0x2f4f14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2f4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f4f18:
    // 0x2f4f18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2f4f1c:
    if (ctx->pc == 0x2F4F1Cu) {
        ctx->pc = 0x2F4F20u;
        goto label_2f4f20;
    }
    ctx->pc = 0x2F4F18u;
    {
        const bool branch_taken_0x2f4f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f18) {
            ctx->pc = 0x2F4F30u;
            goto label_2f4f30;
        }
    }
    ctx->pc = 0x2F4F20u;
label_2f4f20:
    // 0x2f4f20: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2f4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2f4f24:
    // 0x2f4f24: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2f4f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2f4f28:
    // 0x2f4f28: 0xc074ea0  jal         func_1D3A80
label_2f4f2c:
    if (ctx->pc == 0x2F4F2Cu) {
        ctx->pc = 0x2F4F2Cu;
            // 0x2f4f2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F4F30u;
        goto label_2f4f30;
    }
    ctx->pc = 0x2F4F28u;
    SET_GPR_U32(ctx, 31, 0x2F4F30u);
    ctx->pc = 0x2F4F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F28u;
            // 0x2f4f2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F30u; }
        if (ctx->pc != 0x2F4F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F30u; }
        if (ctx->pc != 0x2F4F30u) { return; }
    }
    ctx->pc = 0x2F4F30u;
label_2f4f30:
    // 0x2f4f30: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2f4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2f4f34:
    // 0x2f4f34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f4f38:
    // 0x2f4f38: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2f4f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_2f4f3c:
    // 0x2f4f3c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2f4f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2f4f40:
    // 0x2f4f40: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2f4f44:
    if (ctx->pc == 0x2F4F44u) {
        ctx->pc = 0x2F4F48u;
        goto label_2f4f48;
    }
    ctx->pc = 0x2F4F40u;
    {
        const bool branch_taken_0x2f4f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f40) {
            ctx->pc = 0x2F4F68u;
            goto label_2f4f68;
        }
    }
    ctx->pc = 0x2F4F48u;
label_2f4f48:
    // 0x2f4f48: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2f4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2f4f4c:
    // 0x2f4f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f50:
    // 0x2f4f50: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2f4f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2f4f54:
    // 0x2f4f54: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x2f4f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2f4f58:
    // 0x2f4f58: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x2f4f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2f4f5c:
    // 0x2f4f5c: 0xc075188  jal         func_1D4620
label_2f4f60:
    if (ctx->pc == 0x2F4F60u) {
        ctx->pc = 0x2F4F60u;
            // 0x2f4f60: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F4F64u;
        goto label_2f4f64;
    }
    ctx->pc = 0x2F4F5Cu;
    SET_GPR_U32(ctx, 31, 0x2F4F64u);
    ctx->pc = 0x2F4F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F5Cu;
            // 0x2f4f60: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F64u; }
        if (ctx->pc != 0x2F4F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F64u; }
        if (ctx->pc != 0x2F4F64u) { return; }
    }
    ctx->pc = 0x2F4F64u;
label_2f4f64:
    // 0x2f4f64: 0x0  nop
    ctx->pc = 0x2f4f64u;
    // NOP
label_2f4f68:
    // 0x2f4f68: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2f4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2f4f6c:
    // 0x2f4f6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f4f70:
    // 0x2f4f70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2f4f74:
    // 0x2f4f74: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x2f4f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_2f4f78:
    // 0x2f4f78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f4f7c:
    // 0x2f4f7c: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x2f4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_2f4f80:
    // 0x2f4f80: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2f4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f4f84:
    // 0x2f4f84: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2f4f84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f4f88:
    // 0x2f4f88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2f4f8c:
    if (ctx->pc == 0x2F4F8Cu) {
        ctx->pc = 0x2F4F8Cu;
            // 0x2f4f8c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x2F4F90u;
        goto label_2f4f90;
    }
    ctx->pc = 0x2F4F88u;
    {
        const bool branch_taken_0x2f4f88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F88u;
            // 0x2f4f8c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f88) {
            ctx->pc = 0x2F4F98u;
            goto label_2f4f98;
        }
    }
    ctx->pc = 0x2F4F90u;
label_2f4f90:
    // 0x2f4f90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f4f94:
    // 0x2f4f94: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x2f4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_2f4f98:
    // 0x2f4f98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f4f9c:
    // 0x2f4f9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f4fa0:
    // 0x2f4fa0: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x2f4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_2f4fa4:
    // 0x2f4fa4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2f4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2f4fa8:
    // 0x2f4fa8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2f4fa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f4fac:
    // 0x2f4fac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2f4fb0:
    if (ctx->pc == 0x2F4FB0u) {
        ctx->pc = 0x2F4FB4u;
        goto label_2f4fb4;
    }
    ctx->pc = 0x2F4FACu;
    {
        const bool branch_taken_0x2f4fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4fac) {
            ctx->pc = 0x2F4FC0u;
            goto label_2f4fc0;
        }
    }
    ctx->pc = 0x2F4FB4u;
label_2f4fb4:
    // 0x2f4fb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f4fb8:
    // 0x2f4fb8: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x2f4fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_2f4fbc:
    // 0x2f4fbc: 0x0  nop
    ctx->pc = 0x2f4fbcu;
    // NOP
label_2f4fc0:
    // 0x2f4fc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f4fc4:
    // 0x2f4fc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f4fc8:
    // 0x2f4fc8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x2f4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_2f4fcc:
    // 0x2f4fcc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2f4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2f4fd0:
    // 0x2f4fd0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2f4fd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f4fd4:
    // 0x2f4fd4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2f4fd8:
    if (ctx->pc == 0x2F4FD8u) {
        ctx->pc = 0x2F4FDCu;
        goto label_2f4fdc;
    }
    ctx->pc = 0x2F4FD4u;
    {
        const bool branch_taken_0x2f4fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4fd4) {
            ctx->pc = 0x2F4FE8u;
            goto label_2f4fe8;
        }
    }
    ctx->pc = 0x2F4FDCu;
label_2f4fdc:
    // 0x2f4fdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f4fe0:
    // 0x2f4fe0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x2f4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_2f4fe4:
    // 0x2f4fe4: 0x0  nop
    ctx->pc = 0x2f4fe4u;
    // NOP
label_2f4fe8:
    // 0x2f4fe8: 0x8e620454  lw          $v0, 0x454($s3)
    ctx->pc = 0x2f4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1108)));
label_2f4fec:
    // 0x2f4fec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f4ff0:
    // 0x2f4ff0: 0xae620454  sw          $v0, 0x454($s3)
    ctx->pc = 0x2f4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1108), GPR_U32(ctx, 2));
label_2f4ff4:
    // 0x2f4ff4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2f4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2f4ff8:
    // 0x2f4ff8: 0x1c40ffb4  bgtz        $v0, . + 4 + (-0x4C << 2)
label_2f4ffc:
    if (ctx->pc == 0x2F4FFCu) {
        ctx->pc = 0x2F4FFCu;
            // 0x2f4ffc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2F5000u;
        goto label_2f5000;
    }
    ctx->pc = 0x2F4FF8u;
    {
        const bool branch_taken_0x2f4ff8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F4FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FF8u;
            // 0x2f4ffc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ff8) {
            ctx->pc = 0x2F4ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4ecc;
        }
    }
    ctx->pc = 0x2F5000u;
label_2f5000:
    // 0x2f5000: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f5000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f5004:
    // 0x2f5004: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f5004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f5008:
    // 0x2f5008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f5008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f500c:
    // 0x2f500c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f500cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f5010:
    // 0x2f5010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5014:
    // 0x2f5014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5018:
    // 0x2f5018: 0x3e00008  jr          $ra
label_2f501c:
    if (ctx->pc == 0x2F501Cu) {
        ctx->pc = 0x2F501Cu;
            // 0x2f501c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2F5020u;
        goto label_2f5020;
    }
    ctx->pc = 0x2F5018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5018u;
            // 0x2f501c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5020u;
label_2f5020:
    // 0x2f5020: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f5020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2f5024:
    // 0x2f5024: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f5024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f5028:
    // 0x2f5028: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f5028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f502c:
    // 0x2f502c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f5030:
    // 0x2f5030: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f5030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f5034:
    // 0x2f5034: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f5034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5038:
    // 0x2f5038: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f503c:
    // 0x2f503c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f503cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f5040:
    // 0x2f5040: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f5040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f5044:
    // 0x2f5044: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f5044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f5048:
    // 0x2f5048: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f5048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f504c:
    // 0x2f504c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f504cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5050:
    // 0x2f5050: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2f5050u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2f5054:
    // 0x2f5054: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x2f5054u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2f5058:
    // 0x2f5058: 0x8c51e378  lw          $s1, -0x1C88($v0)
    ctx->pc = 0x2f5058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_2f505c:
    // 0x2f505c: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x2f505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f5060:
    // 0x2f5060: 0xc68d0024  lwc1        $f13, 0x24($s4)
    ctx->pc = 0x2f5060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f5064:
    // 0x2f5064: 0xc68e0028  lwc1        $f14, 0x28($s4)
    ctx->pc = 0x2f5064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f5068:
    // 0x2f5068: 0xc04ce64  jal         func_133990
label_2f506c:
    if (ctx->pc == 0x2F506Cu) {
        ctx->pc = 0x2F506Cu;
            // 0x2f506c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F5070u;
        goto label_2f5070;
    }
    ctx->pc = 0x2F5068u;
    SET_GPR_U32(ctx, 31, 0x2F5070u);
    ctx->pc = 0x2F506Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5068u;
            // 0x2f506c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5070u; }
        if (ctx->pc != 0x2F5070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5070u; }
        if (ctx->pc != 0x2F5070u) { return; }
    }
    ctx->pc = 0x2F5070u;
label_2f5070:
    // 0x2f5070: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2f5070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2f5074:
    // 0x2f5074: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f5074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f5078:
    // 0x2f5078: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2f5078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2f507c:
    // 0x2f507c: 0xc6820030  lwc1        $f2, 0x30($s4)
    ctx->pc = 0x2f507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5080:
    // 0x2f5080: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f5080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f5084:
    // 0x2f5084: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x2f5084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5088:
    // 0x2f5088: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x2f5088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f508c:
    // 0x2f508c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f508cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2f5090:
    // 0x2f5090: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2f5090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2f5094:
    // 0x2f5094: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2f5094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2f5098:
    // 0x2f5098: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2f509c:
    // 0x2f509c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f509cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f50a0:
    // 0x2f50a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f50a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f50a4:
    // 0x2f50a4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x2f50a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_2f50a8:
    // 0x2f50a8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2f50a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2f50ac:
    // 0x2f50ac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f50acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2f50b0:
    // 0x2f50b0: 0xc04ce30  jal         func_1338C0
label_2f50b4:
    if (ctx->pc == 0x2F50B4u) {
        ctx->pc = 0x2F50B4u;
            // 0x2f50b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F50B8u;
        goto label_2f50b8;
    }
    ctx->pc = 0x2F50B0u;
    SET_GPR_U32(ctx, 31, 0x2F50B8u);
    ctx->pc = 0x2F50B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50B0u;
            // 0x2f50b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50B8u; }
        if (ctx->pc != 0x2F50B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50B8u; }
        if (ctx->pc != 0x2F50B8u) { return; }
    }
    ctx->pc = 0x2F50B8u;
label_2f50b8:
    // 0x2f50b8: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2f50b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f50bc:
    // 0x2f50bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f50c0:
    // 0x2f50c0: 0xc68d0040  lwc1        $f13, 0x40($s4)
    ctx->pc = 0x2f50c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f50c4:
    // 0x2f50c4: 0xc68e0044  lwc1        $f14, 0x44($s4)
    ctx->pc = 0x2f50c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f50c8:
    // 0x2f50c8: 0xc04ce50  jal         func_133940
label_2f50cc:
    if (ctx->pc == 0x2F50CCu) {
        ctx->pc = 0x2F50CCu;
            // 0x2f50cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F50D0u;
        goto label_2f50d0;
    }
    ctx->pc = 0x2F50C8u;
    SET_GPR_U32(ctx, 31, 0x2F50D0u);
    ctx->pc = 0x2F50CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50C8u;
            // 0x2f50cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50D0u; }
        if (ctx->pc != 0x2F50D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50D0u; }
        if (ctx->pc != 0x2F50D0u) { return; }
    }
    ctx->pc = 0x2F50D0u;
label_2f50d0:
    // 0x2f50d0: 0xc04e738  jal         func_139CE0
label_2f50d4:
    if (ctx->pc == 0x2F50D4u) {
        ctx->pc = 0x2F50D4u;
            // 0x2f50d4: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x2F50D8u;
        goto label_2f50d8;
    }
    ctx->pc = 0x2F50D0u;
    SET_GPR_U32(ctx, 31, 0x2F50D8u);
    ctx->pc = 0x2F50D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50D0u;
            // 0x2f50d4: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50D8u; }
        if (ctx->pc != 0x2F50D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50D8u; }
        if (ctx->pc != 0x2F50D8u) { return; }
    }
    ctx->pc = 0x2F50D8u;
label_2f50d8:
    // 0x2f50d8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x2f50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2f50dc:
    // 0x2f50dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f50dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f50e0:
    // 0x2f50e0: 0xc04e4a4  jal         func_139290
label_2f50e4:
    if (ctx->pc == 0x2F50E4u) {
        ctx->pc = 0x2F50E4u;
            // 0x2f50e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F50E8u;
        goto label_2f50e8;
    }
    ctx->pc = 0x2F50E0u;
    SET_GPR_U32(ctx, 31, 0x2F50E8u);
    ctx->pc = 0x2F50E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50E0u;
            // 0x2f50e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50E8u; }
        if (ctx->pc != 0x2F50E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50E8u; }
        if (ctx->pc != 0x2F50E8u) { return; }
    }
    ctx->pc = 0x2F50E8u;
label_2f50e8:
    // 0x2f50e8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f50e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f50ec:
    // 0x2f50ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f50ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f50f0:
    // 0x2f50f0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2f50f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2f50f4:
    // 0x2f50f4: 0x320f809  jalr        $t9
label_2f50f8:
    if (ctx->pc == 0x2F50F8u) {
        ctx->pc = 0x2F50F8u;
            // 0x2f50f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F50FCu;
        goto label_2f50fc;
    }
    ctx->pc = 0x2F50F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F50FCu);
        ctx->pc = 0x2F50F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50F4u;
            // 0x2f50f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F50FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F50FCu; }
            if (ctx->pc != 0x2F50FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F50FCu;
label_2f50fc:
    // 0x2f50fc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f5100:
    // 0x2f5100: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f5100u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f5104:
    // 0x2f5104: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2f5104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2f5108:
    // 0x2f5108: 0x320f809  jalr        $t9
label_2f510c:
    if (ctx->pc == 0x2F510Cu) {
        ctx->pc = 0x2F510Cu;
            // 0x2f510c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5110u;
        goto label_2f5110;
    }
    ctx->pc = 0x2F5108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F5110u);
        ctx->pc = 0x2F510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5108u;
            // 0x2f510c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F5110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F5110u; }
            if (ctx->pc != 0x2F5110u) { return; }
        }
        }
    }
    ctx->pc = 0x2F5110u;
label_2f5110:
    // 0x2f5110: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f5114:
    // 0x2f5114: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f5118:
    // 0x2f5118: 0x0  nop
    ctx->pc = 0x2f5118u;
    // NOP
label_2f511c:
    // 0x2f511c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f511cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5120:
    // 0x2f5120: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2f5124:
    if (ctx->pc == 0x2F5124u) {
        ctx->pc = 0x2F5124u;
            // 0x2f5124: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2F5128u;
        goto label_2f5128;
    }
    ctx->pc = 0x2F5120u;
    {
        const bool branch_taken_0x2f5120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5120u;
            // 0x2f5124: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5120) {
            ctx->pc = 0x2F5134u;
            goto label_2f5134;
        }
    }
    ctx->pc = 0x2F5128u;
label_2f5128:
    // 0x2f5128: 0xc0747dc  jal         func_1D1F70
label_2f512c:
    if (ctx->pc == 0x2F512Cu) {
        ctx->pc = 0x2F512Cu;
            // 0x2f512c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2F5130u;
        goto label_2f5130;
    }
    ctx->pc = 0x2F5128u;
    SET_GPR_U32(ctx, 31, 0x2F5130u);
    ctx->pc = 0x2F512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5128u;
            // 0x2f512c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (runtime->hasFunction(0x1D1F70u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5130u; }
        if (ctx->pc != 0x2F5130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F70_0x1d1f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5130u; }
        if (ctx->pc != 0x2F5130u) { return; }
    }
    ctx->pc = 0x2F5130u;
label_2f5130:
    // 0x2f5130: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2f5130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2f5134:
    // 0x2f5134: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2f5134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2f5138:
    // 0x2f5138: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2f5138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_2f513c:
    // 0x2f513c: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x2f513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_2f5140:
    // 0x2f5140: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2f5140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f5144:
    // 0x2f5144: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x2f5144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_2f5148:
    // 0x2f5148: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f5148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f514c:
    // 0x2f514c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f514cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f5150:
    // 0x2f5150: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2f5154:
    if (ctx->pc == 0x2F5154u) {
        ctx->pc = 0x2F5154u;
            // 0x2f5154: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2F5158u;
        goto label_2f5158;
    }
    ctx->pc = 0x2F5150u;
    {
        const bool branch_taken_0x2f5150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5150) {
            ctx->pc = 0x2F5154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5150u;
            // 0x2f5154: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F516Cu;
            goto label_2f516c;
        }
    }
    ctx->pc = 0x2F5158u;
label_2f5158:
    // 0x2f5158: 0xc0bd780  jal         func_2F5E00
label_2f515c:
    if (ctx->pc == 0x2F515Cu) {
        ctx->pc = 0x2F5160u;
        goto label_2f5160;
    }
    ctx->pc = 0x2F5158u;
    SET_GPR_U32(ctx, 31, 0x2F5160u);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5160u; }
        if (ctx->pc != 0x2F5160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5160u; }
        if (ctx->pc != 0x2F5160u) { return; }
    }
    ctx->pc = 0x2F5160u;
label_2f5160:
    // 0x2f5160: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2f5160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2f5164:
    // 0x2f5164: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f5168:
    // 0x2f5168: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f5168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f516c:
    // 0x2f516c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2f516cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2f5170:
    // 0x2f5170: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2f5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2f5174:
    // 0x2f5174: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x2f5174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_2f5178:
    // 0x2f5178: 0x2634025  or          $t0, $s3, $v1
    ctx->pc = 0x2f5178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_2f517c:
    // 0x2f517c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2f517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_2f5180:
    // 0x2f5180: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2f5184:
    if (ctx->pc == 0x2F5184u) {
        ctx->pc = 0x2F5184u;
            // 0x2f5184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5188u;
        goto label_2f5188;
    }
    ctx->pc = 0x2F5180u;
    {
        const bool branch_taken_0x2f5180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5180) {
            ctx->pc = 0x2F5184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5180u;
            // 0x2f5184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F51A4u;
            goto label_2f51a4;
        }
    }
    ctx->pc = 0x2F5188u;
label_2f5188:
    // 0x2f5188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f518c:
    // 0x2f518c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f518cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5190:
    // 0x2f5190: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f5190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f5194:
    // 0x2f5194: 0xc055234  jal         func_1548D0
label_2f5198:
    if (ctx->pc == 0x2F5198u) {
        ctx->pc = 0x2F5198u;
            // 0x2f5198: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x2F519Cu;
        goto label_2f519c;
    }
    ctx->pc = 0x2F5194u;
    SET_GPR_U32(ctx, 31, 0x2F519Cu);
    ctx->pc = 0x2F5198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5194u;
            // 0x2f5198: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F519Cu; }
        if (ctx->pc != 0x2F519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F519Cu; }
        if (ctx->pc != 0x2F519Cu) { return; }
    }
    ctx->pc = 0x2F519Cu;
label_2f519c:
    // 0x2f519c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f51a0:
    if (ctx->pc == 0x2F51A0u) {
        ctx->pc = 0x2F51A0u;
            // 0x2f51a0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2F51A4u;
        goto label_2f51a4;
    }
    ctx->pc = 0x2F519Cu;
    {
        const bool branch_taken_0x2f519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F519Cu;
            // 0x2f51a0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f519c) {
            ctx->pc = 0x2F51B8u;
            goto label_2f51b8;
        }
    }
    ctx->pc = 0x2F51A4u;
label_2f51a4:
    // 0x2f51a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f51a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f51a8:
    // 0x2f51a8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f51a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f51ac:
    // 0x2f51ac: 0xc0550f8  jal         func_1543E0
label_2f51b0:
    if (ctx->pc == 0x2F51B0u) {
        ctx->pc = 0x2F51B0u;
            // 0x2f51b0: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x2F51B4u;
        goto label_2f51b4;
    }
    ctx->pc = 0x2F51ACu;
    SET_GPR_U32(ctx, 31, 0x2F51B4u);
    ctx->pc = 0x2F51B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F51ACu;
            // 0x2f51b0: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51B4u; }
        if (ctx->pc != 0x2F51B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51B4u; }
        if (ctx->pc != 0x2F51B4u) { return; }
    }
    ctx->pc = 0x2F51B4u;
label_2f51b4:
    // 0x2f51b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f51b8:
    // 0x2f51b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f51b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f51bc:
    // 0x2f51bc: 0x0  nop
    ctx->pc = 0x2f51bcu;
    // NOP
label_2f51c0:
    // 0x2f51c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f51c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f51c4:
    // 0x2f51c4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2f51c8:
    if (ctx->pc == 0x2F51C8u) {
        ctx->pc = 0x2F51C8u;
            // 0x2f51c8: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x2F51CCu;
        goto label_2f51cc;
    }
    ctx->pc = 0x2F51C4u;
    {
        const bool branch_taken_0x2f51c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f51c4) {
            ctx->pc = 0x2F51C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F51C4u;
            // 0x2f51c8: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F51D8u;
            goto label_2f51d8;
        }
    }
    ctx->pc = 0x2F51CCu;
label_2f51cc:
    // 0x2f51cc: 0xc0747d0  jal         func_1D1F40
label_2f51d0:
    if (ctx->pc == 0x2F51D0u) {
        ctx->pc = 0x2F51D4u;
        goto label_2f51d4;
    }
    ctx->pc = 0x2F51CCu;
    SET_GPR_U32(ctx, 31, 0x2F51D4u);
    ctx->pc = 0x1D1F40u;
    if (runtime->hasFunction(0x1D1F40u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51D4u; }
        if (ctx->pc != 0x2F51D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F40_0x1d1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51D4u; }
        if (ctx->pc != 0x2F51D4u) { return; }
    }
    ctx->pc = 0x2F51D4u;
label_2f51d4:
    // 0x2f51d4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f51d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f51d8:
    // 0x2f51d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f51d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f51dc:
    // 0x2f51dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f51dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f51e0:
    // 0x2f51e0: 0x320f809  jalr        $t9
label_2f51e4:
    if (ctx->pc == 0x2F51E4u) {
        ctx->pc = 0x2F51E4u;
            // 0x2f51e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F51E8u;
        goto label_2f51e8;
    }
    ctx->pc = 0x2F51E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F51E8u);
        ctx->pc = 0x2F51E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F51E0u;
            // 0x2f51e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F51E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F51E8u; }
            if (ctx->pc != 0x2F51E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F51E8u;
label_2f51e8:
    // 0x2f51e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f51e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f51ec:
    // 0x2f51ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f51ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f51f0:
    // 0x2f51f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f51f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f51f4:
    // 0x2f51f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f51f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f51f8:
    // 0x2f51f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f51f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f51fc:
    // 0x2f51fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f51fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f5200:
    // 0x2f5200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f5200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5204:
    // 0x2f5204: 0x3e00008  jr          $ra
label_2f5208:
    if (ctx->pc == 0x2F5208u) {
        ctx->pc = 0x2F5208u;
            // 0x2f5208: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2F520Cu;
        goto label_2f520c;
    }
    ctx->pc = 0x2F5204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5204u;
            // 0x2f5208: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F520Cu;
label_2f520c:
    // 0x2f520c: 0x0  nop
    ctx->pc = 0x2f520cu;
    // NOP
label_2f5210:
    // 0x2f5210: 0x3e00008  jr          $ra
label_2f5214:
    if (ctx->pc == 0x2F5214u) {
        ctx->pc = 0x2F5218u;
        goto label_2f5218;
    }
    ctx->pc = 0x2F5210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5218u;
label_2f5218:
    // 0x2f5218: 0x0  nop
    ctx->pc = 0x2f5218u;
    // NOP
label_2f521c:
    // 0x2f521c: 0x0  nop
    ctx->pc = 0x2f521cu;
    // NOP
label_2f5220:
    // 0x2f5220: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2f5224:
    // 0x2f5224: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x2f5224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_2f5228:
    // 0x2f5228: 0x8c420518  lw          $v0, 0x518($v0)
    ctx->pc = 0x2f5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
label_2f522c:
    // 0x2f522c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2f522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2f5230:
    // 0x2f5230: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f5230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f5234:
    // 0x2f5234: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2f5238:
    if (ctx->pc == 0x2F5238u) {
        ctx->pc = 0x2F5238u;
            // 0x2f5238: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2F523Cu;
        goto label_2f523c;
    }
    ctx->pc = 0x2F5234u;
    {
        const bool branch_taken_0x2f5234 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f5234) {
            ctx->pc = 0x2F5238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5234u;
            // 0x2f5238: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5248u;
            goto label_2f5248;
        }
    }
    ctx->pc = 0x2F523Cu;
label_2f523c:
    // 0x2f523c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f523cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5240:
    // 0x2f5240: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f5244:
    if (ctx->pc == 0x2F5244u) {
        ctx->pc = 0x2F5244u;
            // 0x2f5244: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F5248u;
        goto label_2f5248;
    }
    ctx->pc = 0x2F5240u;
    {
        const bool branch_taken_0x2f5240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5240u;
            // 0x2f5244: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5240) {
            ctx->pc = 0x2F5260u;
            goto label_2f5260;
        }
    }
    ctx->pc = 0x2F5248u;
label_2f5248:
    // 0x2f5248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f524c:
    // 0x2f524c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f524cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f5250:
    // 0x2f5250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5254:
    // 0x2f5254: 0x0  nop
    ctx->pc = 0x2f5254u;
    // NOP
label_2f5258:
    // 0x2f5258: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2f5258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2f525c:
    // 0x2f525c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2f525cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2f5260:
    // 0x2f5260: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f5264:
    // 0x2f5264: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2f5264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2f5268:
    // 0x2f5268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f526c:
    // 0x2f526c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f526cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5270:
    // 0x2f5270: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f5270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f5274:
    // 0x2f5274: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2f5274u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f5278:
    // 0x2f5278: 0x3e00008  jr          $ra
label_2f527c:
    if (ctx->pc == 0x2F527Cu) {
        ctx->pc = 0x2F527Cu;
            // 0x2f527c: 0x4603101d  msub.s      $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x2F5280u;
        goto label_2f5280;
    }
    ctx->pc = 0x2F5278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F527Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5278u;
            // 0x2f527c: 0x4603101d  msub.s      $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5280u;
label_2f5280:
    // 0x2f5280: 0x3e00008  jr          $ra
label_2f5284:
    if (ctx->pc == 0x2F5284u) {
        ctx->pc = 0x2F5288u;
        goto label_2f5288;
    }
    ctx->pc = 0x2F5280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5288u;
label_2f5288:
    // 0x2f5288: 0x0  nop
    ctx->pc = 0x2f5288u;
    // NOP
label_2f528c:
    // 0x2f528c: 0x0  nop
    ctx->pc = 0x2f528cu;
    // NOP
}
