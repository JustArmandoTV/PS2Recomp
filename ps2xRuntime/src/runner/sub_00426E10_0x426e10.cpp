#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00426E10
// Address: 0x426e10 - 0x427340
void sub_00426E10_0x426e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426E10_0x426e10");
#endif

    switch (ctx->pc) {
        case 0x426e10u: goto label_426e10;
        case 0x426e14u: goto label_426e14;
        case 0x426e18u: goto label_426e18;
        case 0x426e1cu: goto label_426e1c;
        case 0x426e20u: goto label_426e20;
        case 0x426e24u: goto label_426e24;
        case 0x426e28u: goto label_426e28;
        case 0x426e2cu: goto label_426e2c;
        case 0x426e30u: goto label_426e30;
        case 0x426e34u: goto label_426e34;
        case 0x426e38u: goto label_426e38;
        case 0x426e3cu: goto label_426e3c;
        case 0x426e40u: goto label_426e40;
        case 0x426e44u: goto label_426e44;
        case 0x426e48u: goto label_426e48;
        case 0x426e4cu: goto label_426e4c;
        case 0x426e50u: goto label_426e50;
        case 0x426e54u: goto label_426e54;
        case 0x426e58u: goto label_426e58;
        case 0x426e5cu: goto label_426e5c;
        case 0x426e60u: goto label_426e60;
        case 0x426e64u: goto label_426e64;
        case 0x426e68u: goto label_426e68;
        case 0x426e6cu: goto label_426e6c;
        case 0x426e70u: goto label_426e70;
        case 0x426e74u: goto label_426e74;
        case 0x426e78u: goto label_426e78;
        case 0x426e7cu: goto label_426e7c;
        case 0x426e80u: goto label_426e80;
        case 0x426e84u: goto label_426e84;
        case 0x426e88u: goto label_426e88;
        case 0x426e8cu: goto label_426e8c;
        case 0x426e90u: goto label_426e90;
        case 0x426e94u: goto label_426e94;
        case 0x426e98u: goto label_426e98;
        case 0x426e9cu: goto label_426e9c;
        case 0x426ea0u: goto label_426ea0;
        case 0x426ea4u: goto label_426ea4;
        case 0x426ea8u: goto label_426ea8;
        case 0x426eacu: goto label_426eac;
        case 0x426eb0u: goto label_426eb0;
        case 0x426eb4u: goto label_426eb4;
        case 0x426eb8u: goto label_426eb8;
        case 0x426ebcu: goto label_426ebc;
        case 0x426ec0u: goto label_426ec0;
        case 0x426ec4u: goto label_426ec4;
        case 0x426ec8u: goto label_426ec8;
        case 0x426eccu: goto label_426ecc;
        case 0x426ed0u: goto label_426ed0;
        case 0x426ed4u: goto label_426ed4;
        case 0x426ed8u: goto label_426ed8;
        case 0x426edcu: goto label_426edc;
        case 0x426ee0u: goto label_426ee0;
        case 0x426ee4u: goto label_426ee4;
        case 0x426ee8u: goto label_426ee8;
        case 0x426eecu: goto label_426eec;
        case 0x426ef0u: goto label_426ef0;
        case 0x426ef4u: goto label_426ef4;
        case 0x426ef8u: goto label_426ef8;
        case 0x426efcu: goto label_426efc;
        case 0x426f00u: goto label_426f00;
        case 0x426f04u: goto label_426f04;
        case 0x426f08u: goto label_426f08;
        case 0x426f0cu: goto label_426f0c;
        case 0x426f10u: goto label_426f10;
        case 0x426f14u: goto label_426f14;
        case 0x426f18u: goto label_426f18;
        case 0x426f1cu: goto label_426f1c;
        case 0x426f20u: goto label_426f20;
        case 0x426f24u: goto label_426f24;
        case 0x426f28u: goto label_426f28;
        case 0x426f2cu: goto label_426f2c;
        case 0x426f30u: goto label_426f30;
        case 0x426f34u: goto label_426f34;
        case 0x426f38u: goto label_426f38;
        case 0x426f3cu: goto label_426f3c;
        case 0x426f40u: goto label_426f40;
        case 0x426f44u: goto label_426f44;
        case 0x426f48u: goto label_426f48;
        case 0x426f4cu: goto label_426f4c;
        case 0x426f50u: goto label_426f50;
        case 0x426f54u: goto label_426f54;
        case 0x426f58u: goto label_426f58;
        case 0x426f5cu: goto label_426f5c;
        case 0x426f60u: goto label_426f60;
        case 0x426f64u: goto label_426f64;
        case 0x426f68u: goto label_426f68;
        case 0x426f6cu: goto label_426f6c;
        case 0x426f70u: goto label_426f70;
        case 0x426f74u: goto label_426f74;
        case 0x426f78u: goto label_426f78;
        case 0x426f7cu: goto label_426f7c;
        case 0x426f80u: goto label_426f80;
        case 0x426f84u: goto label_426f84;
        case 0x426f88u: goto label_426f88;
        case 0x426f8cu: goto label_426f8c;
        case 0x426f90u: goto label_426f90;
        case 0x426f94u: goto label_426f94;
        case 0x426f98u: goto label_426f98;
        case 0x426f9cu: goto label_426f9c;
        case 0x426fa0u: goto label_426fa0;
        case 0x426fa4u: goto label_426fa4;
        case 0x426fa8u: goto label_426fa8;
        case 0x426facu: goto label_426fac;
        case 0x426fb0u: goto label_426fb0;
        case 0x426fb4u: goto label_426fb4;
        case 0x426fb8u: goto label_426fb8;
        case 0x426fbcu: goto label_426fbc;
        case 0x426fc0u: goto label_426fc0;
        case 0x426fc4u: goto label_426fc4;
        case 0x426fc8u: goto label_426fc8;
        case 0x426fccu: goto label_426fcc;
        case 0x426fd0u: goto label_426fd0;
        case 0x426fd4u: goto label_426fd4;
        case 0x426fd8u: goto label_426fd8;
        case 0x426fdcu: goto label_426fdc;
        case 0x426fe0u: goto label_426fe0;
        case 0x426fe4u: goto label_426fe4;
        case 0x426fe8u: goto label_426fe8;
        case 0x426fecu: goto label_426fec;
        case 0x426ff0u: goto label_426ff0;
        case 0x426ff4u: goto label_426ff4;
        case 0x426ff8u: goto label_426ff8;
        case 0x426ffcu: goto label_426ffc;
        case 0x427000u: goto label_427000;
        case 0x427004u: goto label_427004;
        case 0x427008u: goto label_427008;
        case 0x42700cu: goto label_42700c;
        case 0x427010u: goto label_427010;
        case 0x427014u: goto label_427014;
        case 0x427018u: goto label_427018;
        case 0x42701cu: goto label_42701c;
        case 0x427020u: goto label_427020;
        case 0x427024u: goto label_427024;
        case 0x427028u: goto label_427028;
        case 0x42702cu: goto label_42702c;
        case 0x427030u: goto label_427030;
        case 0x427034u: goto label_427034;
        case 0x427038u: goto label_427038;
        case 0x42703cu: goto label_42703c;
        case 0x427040u: goto label_427040;
        case 0x427044u: goto label_427044;
        case 0x427048u: goto label_427048;
        case 0x42704cu: goto label_42704c;
        case 0x427050u: goto label_427050;
        case 0x427054u: goto label_427054;
        case 0x427058u: goto label_427058;
        case 0x42705cu: goto label_42705c;
        case 0x427060u: goto label_427060;
        case 0x427064u: goto label_427064;
        case 0x427068u: goto label_427068;
        case 0x42706cu: goto label_42706c;
        case 0x427070u: goto label_427070;
        case 0x427074u: goto label_427074;
        case 0x427078u: goto label_427078;
        case 0x42707cu: goto label_42707c;
        case 0x427080u: goto label_427080;
        case 0x427084u: goto label_427084;
        case 0x427088u: goto label_427088;
        case 0x42708cu: goto label_42708c;
        case 0x427090u: goto label_427090;
        case 0x427094u: goto label_427094;
        case 0x427098u: goto label_427098;
        case 0x42709cu: goto label_42709c;
        case 0x4270a0u: goto label_4270a0;
        case 0x4270a4u: goto label_4270a4;
        case 0x4270a8u: goto label_4270a8;
        case 0x4270acu: goto label_4270ac;
        case 0x4270b0u: goto label_4270b0;
        case 0x4270b4u: goto label_4270b4;
        case 0x4270b8u: goto label_4270b8;
        case 0x4270bcu: goto label_4270bc;
        case 0x4270c0u: goto label_4270c0;
        case 0x4270c4u: goto label_4270c4;
        case 0x4270c8u: goto label_4270c8;
        case 0x4270ccu: goto label_4270cc;
        case 0x4270d0u: goto label_4270d0;
        case 0x4270d4u: goto label_4270d4;
        case 0x4270d8u: goto label_4270d8;
        case 0x4270dcu: goto label_4270dc;
        case 0x4270e0u: goto label_4270e0;
        case 0x4270e4u: goto label_4270e4;
        case 0x4270e8u: goto label_4270e8;
        case 0x4270ecu: goto label_4270ec;
        case 0x4270f0u: goto label_4270f0;
        case 0x4270f4u: goto label_4270f4;
        case 0x4270f8u: goto label_4270f8;
        case 0x4270fcu: goto label_4270fc;
        case 0x427100u: goto label_427100;
        case 0x427104u: goto label_427104;
        case 0x427108u: goto label_427108;
        case 0x42710cu: goto label_42710c;
        case 0x427110u: goto label_427110;
        case 0x427114u: goto label_427114;
        case 0x427118u: goto label_427118;
        case 0x42711cu: goto label_42711c;
        case 0x427120u: goto label_427120;
        case 0x427124u: goto label_427124;
        case 0x427128u: goto label_427128;
        case 0x42712cu: goto label_42712c;
        case 0x427130u: goto label_427130;
        case 0x427134u: goto label_427134;
        case 0x427138u: goto label_427138;
        case 0x42713cu: goto label_42713c;
        case 0x427140u: goto label_427140;
        case 0x427144u: goto label_427144;
        case 0x427148u: goto label_427148;
        case 0x42714cu: goto label_42714c;
        case 0x427150u: goto label_427150;
        case 0x427154u: goto label_427154;
        case 0x427158u: goto label_427158;
        case 0x42715cu: goto label_42715c;
        case 0x427160u: goto label_427160;
        case 0x427164u: goto label_427164;
        case 0x427168u: goto label_427168;
        case 0x42716cu: goto label_42716c;
        case 0x427170u: goto label_427170;
        case 0x427174u: goto label_427174;
        case 0x427178u: goto label_427178;
        case 0x42717cu: goto label_42717c;
        case 0x427180u: goto label_427180;
        case 0x427184u: goto label_427184;
        case 0x427188u: goto label_427188;
        case 0x42718cu: goto label_42718c;
        case 0x427190u: goto label_427190;
        case 0x427194u: goto label_427194;
        case 0x427198u: goto label_427198;
        case 0x42719cu: goto label_42719c;
        case 0x4271a0u: goto label_4271a0;
        case 0x4271a4u: goto label_4271a4;
        case 0x4271a8u: goto label_4271a8;
        case 0x4271acu: goto label_4271ac;
        case 0x4271b0u: goto label_4271b0;
        case 0x4271b4u: goto label_4271b4;
        case 0x4271b8u: goto label_4271b8;
        case 0x4271bcu: goto label_4271bc;
        case 0x4271c0u: goto label_4271c0;
        case 0x4271c4u: goto label_4271c4;
        case 0x4271c8u: goto label_4271c8;
        case 0x4271ccu: goto label_4271cc;
        case 0x4271d0u: goto label_4271d0;
        case 0x4271d4u: goto label_4271d4;
        case 0x4271d8u: goto label_4271d8;
        case 0x4271dcu: goto label_4271dc;
        case 0x4271e0u: goto label_4271e0;
        case 0x4271e4u: goto label_4271e4;
        case 0x4271e8u: goto label_4271e8;
        case 0x4271ecu: goto label_4271ec;
        case 0x4271f0u: goto label_4271f0;
        case 0x4271f4u: goto label_4271f4;
        case 0x4271f8u: goto label_4271f8;
        case 0x4271fcu: goto label_4271fc;
        case 0x427200u: goto label_427200;
        case 0x427204u: goto label_427204;
        case 0x427208u: goto label_427208;
        case 0x42720cu: goto label_42720c;
        case 0x427210u: goto label_427210;
        case 0x427214u: goto label_427214;
        case 0x427218u: goto label_427218;
        case 0x42721cu: goto label_42721c;
        case 0x427220u: goto label_427220;
        case 0x427224u: goto label_427224;
        case 0x427228u: goto label_427228;
        case 0x42722cu: goto label_42722c;
        case 0x427230u: goto label_427230;
        case 0x427234u: goto label_427234;
        case 0x427238u: goto label_427238;
        case 0x42723cu: goto label_42723c;
        case 0x427240u: goto label_427240;
        case 0x427244u: goto label_427244;
        case 0x427248u: goto label_427248;
        case 0x42724cu: goto label_42724c;
        case 0x427250u: goto label_427250;
        case 0x427254u: goto label_427254;
        case 0x427258u: goto label_427258;
        case 0x42725cu: goto label_42725c;
        case 0x427260u: goto label_427260;
        case 0x427264u: goto label_427264;
        case 0x427268u: goto label_427268;
        case 0x42726cu: goto label_42726c;
        case 0x427270u: goto label_427270;
        case 0x427274u: goto label_427274;
        case 0x427278u: goto label_427278;
        case 0x42727cu: goto label_42727c;
        case 0x427280u: goto label_427280;
        case 0x427284u: goto label_427284;
        case 0x427288u: goto label_427288;
        case 0x42728cu: goto label_42728c;
        case 0x427290u: goto label_427290;
        case 0x427294u: goto label_427294;
        case 0x427298u: goto label_427298;
        case 0x42729cu: goto label_42729c;
        case 0x4272a0u: goto label_4272a0;
        case 0x4272a4u: goto label_4272a4;
        case 0x4272a8u: goto label_4272a8;
        case 0x4272acu: goto label_4272ac;
        case 0x4272b0u: goto label_4272b0;
        case 0x4272b4u: goto label_4272b4;
        case 0x4272b8u: goto label_4272b8;
        case 0x4272bcu: goto label_4272bc;
        case 0x4272c0u: goto label_4272c0;
        case 0x4272c4u: goto label_4272c4;
        case 0x4272c8u: goto label_4272c8;
        case 0x4272ccu: goto label_4272cc;
        case 0x4272d0u: goto label_4272d0;
        case 0x4272d4u: goto label_4272d4;
        case 0x4272d8u: goto label_4272d8;
        case 0x4272dcu: goto label_4272dc;
        case 0x4272e0u: goto label_4272e0;
        case 0x4272e4u: goto label_4272e4;
        case 0x4272e8u: goto label_4272e8;
        case 0x4272ecu: goto label_4272ec;
        case 0x4272f0u: goto label_4272f0;
        case 0x4272f4u: goto label_4272f4;
        case 0x4272f8u: goto label_4272f8;
        case 0x4272fcu: goto label_4272fc;
        case 0x427300u: goto label_427300;
        case 0x427304u: goto label_427304;
        case 0x427308u: goto label_427308;
        case 0x42730cu: goto label_42730c;
        case 0x427310u: goto label_427310;
        case 0x427314u: goto label_427314;
        case 0x427318u: goto label_427318;
        case 0x42731cu: goto label_42731c;
        case 0x427320u: goto label_427320;
        case 0x427324u: goto label_427324;
        case 0x427328u: goto label_427328;
        case 0x42732cu: goto label_42732c;
        case 0x427330u: goto label_427330;
        case 0x427334u: goto label_427334;
        case 0x427338u: goto label_427338;
        case 0x42733cu: goto label_42733c;
        default: break;
    }

    ctx->pc = 0x426e10u;

label_426e10:
    // 0x426e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x426e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_426e14:
    // 0x426e14: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x426e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_426e18:
    // 0x426e18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x426e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_426e1c:
    // 0x426e1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x426e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_426e20:
    // 0x426e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x426e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_426e24:
    // 0x426e24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x426e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_426e28:
    // 0x426e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_426e2c:
    // 0x426e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x426e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_426e30:
    // 0x426e30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x426e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_426e34:
    // 0x426e34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x426e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_426e38:
    // 0x426e38: 0xc10ca68  jal         func_4329A0
label_426e3c:
    if (ctx->pc == 0x426E3Cu) {
        ctx->pc = 0x426E3Cu;
            // 0x426e3c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x426E40u;
        goto label_426e40;
    }
    ctx->pc = 0x426E38u;
    SET_GPR_U32(ctx, 31, 0x426E40u);
    ctx->pc = 0x426E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426E38u;
            // 0x426e3c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426E40u; }
        if (ctx->pc != 0x426E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426E40u; }
        if (ctx->pc != 0x426E40u) { return; }
    }
    ctx->pc = 0x426E40u;
label_426e40:
    // 0x426e40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x426e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_426e44:
    // 0x426e44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x426e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_426e48:
    // 0x426e48: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x426e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_426e4c:
    // 0x426e4c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x426e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_426e50:
    // 0x426e50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x426e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_426e54:
    // 0x426e54: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x426e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_426e58:
    // 0x426e58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x426e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_426e5c:
    // 0x426e5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x426e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_426e60:
    // 0x426e60: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x426e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_426e64:
    // 0x426e64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x426e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_426e68:
    // 0x426e68: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x426e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_426e6c:
    // 0x426e6c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x426e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_426e70:
    // 0x426e70: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x426e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_426e74:
    // 0x426e74: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x426e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_426e78:
    // 0x426e78: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x426e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_426e7c:
    // 0x426e7c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x426e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_426e80:
    // 0x426e80: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x426e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_426e84:
    // 0x426e84: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x426e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_426e88:
    // 0x426e88: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x426e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_426e8c:
    // 0x426e8c: 0xc0582cc  jal         func_160B30
label_426e90:
    if (ctx->pc == 0x426E90u) {
        ctx->pc = 0x426E90u;
            // 0x426e90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x426E94u;
        goto label_426e94;
    }
    ctx->pc = 0x426E8Cu;
    SET_GPR_U32(ctx, 31, 0x426E94u);
    ctx->pc = 0x426E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426E8Cu;
            // 0x426e90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426E94u; }
        if (ctx->pc != 0x426E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426E94u; }
        if (ctx->pc != 0x426E94u) { return; }
    }
    ctx->pc = 0x426E94u;
label_426e94:
    // 0x426e94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x426e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_426e98:
    // 0x426e98: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x426e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_426e9c:
    // 0x426e9c: 0x2463bea8  addiu       $v1, $v1, -0x4158
    ctx->pc = 0x426e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950568));
label_426ea0:
    // 0x426ea0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x426ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_426ea4:
    // 0x426ea4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x426ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_426ea8:
    // 0x426ea8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x426ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_426eac:
    // 0x426eac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x426eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_426eb0:
    // 0x426eb0: 0xac447380  sw          $a0, 0x7380($v0)
    ctx->pc = 0x426eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29568), GPR_U32(ctx, 4));
label_426eb4:
    // 0x426eb4: 0x2463bec0  addiu       $v1, $v1, -0x4140
    ctx->pc = 0x426eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950592));
label_426eb8:
    // 0x426eb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x426eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_426ebc:
    // 0x426ebc: 0x2442bef8  addiu       $v0, $v0, -0x4108
    ctx->pc = 0x426ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950648));
label_426ec0:
    // 0x426ec0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x426ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_426ec4:
    // 0x426ec4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x426ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_426ec8:
    // 0x426ec8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x426ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_426ecc:
    // 0x426ecc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x426eccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_426ed0:
    // 0x426ed0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x426ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_426ed4:
    // 0x426ed4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x426ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_426ed8:
    // 0x426ed8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x426ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_426edc:
    // 0x426edc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x426edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_426ee0:
    // 0x426ee0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x426ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_426ee4:
    // 0x426ee4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x426ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_426ee8:
    // 0x426ee8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x426ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_426eec:
    // 0x426eec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x426eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_426ef0:
    // 0x426ef0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x426ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_426ef4:
    // 0x426ef4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_426ef8:
    if (ctx->pc == 0x426EF8u) {
        ctx->pc = 0x426EFCu;
        goto label_426efc;
    }
    ctx->pc = 0x426EF4u;
    {
        const bool branch_taken_0x426ef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x426ef4) {
            ctx->pc = 0x426F88u;
            goto label_426f88;
        }
    }
    ctx->pc = 0x426EFCu;
label_426efc:
    // 0x426efc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x426efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_426f00:
    // 0x426f00: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x426f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_426f04:
    // 0x426f04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x426f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_426f08:
    // 0x426f08: 0xc040138  jal         func_1004E0
label_426f0c:
    if (ctx->pc == 0x426F0Cu) {
        ctx->pc = 0x426F0Cu;
            // 0x426f0c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x426F10u;
        goto label_426f10;
    }
    ctx->pc = 0x426F08u;
    SET_GPR_U32(ctx, 31, 0x426F10u);
    ctx->pc = 0x426F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426F08u;
            // 0x426f0c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F10u; }
        if (ctx->pc != 0x426F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F10u; }
        if (ctx->pc != 0x426F10u) { return; }
    }
    ctx->pc = 0x426F10u;
label_426f10:
    // 0x426f10: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x426f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_426f14:
    // 0x426f14: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x426f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_426f18:
    // 0x426f18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x426f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_426f1c:
    // 0x426f1c: 0x24a55490  addiu       $a1, $a1, 0x5490
    ctx->pc = 0x426f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21648));
label_426f20:
    // 0x426f20: 0x24c65400  addiu       $a2, $a2, 0x5400
    ctx->pc = 0x426f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21504));
label_426f24:
    // 0x426f24: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x426f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_426f28:
    // 0x426f28: 0xc040840  jal         func_102100
label_426f2c:
    if (ctx->pc == 0x426F2Cu) {
        ctx->pc = 0x426F2Cu;
            // 0x426f2c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426F30u;
        goto label_426f30;
    }
    ctx->pc = 0x426F28u;
    SET_GPR_U32(ctx, 31, 0x426F30u);
    ctx->pc = 0x426F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426F28u;
            // 0x426f2c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F30u; }
        if (ctx->pc != 0x426F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F30u; }
        if (ctx->pc != 0x426F30u) { return; }
    }
    ctx->pc = 0x426F30u;
label_426f30:
    // 0x426f30: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x426f30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_426f34:
    // 0x426f34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x426f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_426f38:
    // 0x426f38: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x426f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_426f3c:
    // 0x426f3c: 0xc0788fc  jal         func_1E23F0
label_426f40:
    if (ctx->pc == 0x426F40u) {
        ctx->pc = 0x426F40u;
            // 0x426f40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426F44u;
        goto label_426f44;
    }
    ctx->pc = 0x426F3Cu;
    SET_GPR_U32(ctx, 31, 0x426F44u);
    ctx->pc = 0x426F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426F3Cu;
            // 0x426f40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F44u; }
        if (ctx->pc != 0x426F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F44u; }
        if (ctx->pc != 0x426F44u) { return; }
    }
    ctx->pc = 0x426F44u;
label_426f44:
    // 0x426f44: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x426f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_426f48:
    // 0x426f48: 0xc0788fc  jal         func_1E23F0
label_426f4c:
    if (ctx->pc == 0x426F4Cu) {
        ctx->pc = 0x426F4Cu;
            // 0x426f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426F50u;
        goto label_426f50;
    }
    ctx->pc = 0x426F48u;
    SET_GPR_U32(ctx, 31, 0x426F50u);
    ctx->pc = 0x426F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426F48u;
            // 0x426f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F50u; }
        if (ctx->pc != 0x426F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F50u; }
        if (ctx->pc != 0x426F50u) { return; }
    }
    ctx->pc = 0x426F50u;
label_426f50:
    // 0x426f50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x426f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426f54:
    // 0x426f54: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x426f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_426f58:
    // 0x426f58: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x426f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_426f5c:
    // 0x426f5c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x426f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_426f60:
    // 0x426f60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x426f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_426f64:
    // 0x426f64: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x426f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_426f68:
    // 0x426f68: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x426f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_426f6c:
    // 0x426f6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x426f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_426f70:
    // 0x426f70: 0xc0a997c  jal         func_2A65F0
label_426f74:
    if (ctx->pc == 0x426F74u) {
        ctx->pc = 0x426F74u;
            // 0x426f74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x426F78u;
        goto label_426f78;
    }
    ctx->pc = 0x426F70u;
    SET_GPR_U32(ctx, 31, 0x426F78u);
    ctx->pc = 0x426F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426F70u;
            // 0x426f74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F78u; }
        if (ctx->pc != 0x426F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426F78u; }
        if (ctx->pc != 0x426F78u) { return; }
    }
    ctx->pc = 0x426F78u;
label_426f78:
    // 0x426f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x426f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_426f7c:
    // 0x426f7c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x426f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_426f80:
    // 0x426f80: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_426f84:
    if (ctx->pc == 0x426F84u) {
        ctx->pc = 0x426F84u;
            // 0x426f84: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x426F88u;
        goto label_426f88;
    }
    ctx->pc = 0x426F80u;
    {
        const bool branch_taken_0x426f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x426F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426F80u;
            // 0x426f84: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426f80) {
            ctx->pc = 0x426F54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_426f54;
        }
    }
    ctx->pc = 0x426F88u;
label_426f88:
    // 0x426f88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x426f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_426f8c:
    // 0x426f8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x426f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_426f90:
    // 0x426f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x426f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_426f94:
    // 0x426f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x426f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_426f98:
    // 0x426f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x426f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426f9c:
    // 0x426f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x426f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_426fa0:
    // 0x426fa0: 0x3e00008  jr          $ra
label_426fa4:
    if (ctx->pc == 0x426FA4u) {
        ctx->pc = 0x426FA4u;
            // 0x426fa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x426FA8u;
        goto label_426fa8;
    }
    ctx->pc = 0x426FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426FA0u;
            // 0x426fa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426FA8u;
label_426fa8:
    // 0x426fa8: 0x0  nop
    ctx->pc = 0x426fa8u;
    // NOP
label_426fac:
    // 0x426fac: 0x0  nop
    ctx->pc = 0x426facu;
    // NOP
label_426fb0:
    // 0x426fb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x426fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_426fb4:
    // 0x426fb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x426fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_426fb8:
    // 0x426fb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x426fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_426fbc:
    // 0x426fbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x426fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_426fc0:
    // 0x426fc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x426fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_426fc4:
    // 0x426fc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x426fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_426fc8:
    // 0x426fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_426fcc:
    // 0x426fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x426fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_426fd0:
    // 0x426fd0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x426fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_426fd4:
    // 0x426fd4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_426fd8:
    if (ctx->pc == 0x426FD8u) {
        ctx->pc = 0x426FD8u;
            // 0x426fd8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426FDCu;
        goto label_426fdc;
    }
    ctx->pc = 0x426FD4u;
    {
        const bool branch_taken_0x426fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x426FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426FD4u;
            // 0x426fd8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426fd4) {
            ctx->pc = 0x427018u;
            goto label_427018;
        }
    }
    ctx->pc = 0x426FDCu;
label_426fdc:
    // 0x426fdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x426fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426fe0:
    // 0x426fe0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x426fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426fe4:
    // 0x426fe4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x426fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426fe8:
    // 0x426fe8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x426fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_426fec:
    // 0x426fec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x426fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_426ff0:
    // 0x426ff0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x426ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_426ff4:
    // 0x426ff4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x426ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_426ff8:
    // 0x426ff8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x426ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_426ffc:
    // 0x426ffc: 0x320f809  jalr        $t9
label_427000:
    if (ctx->pc == 0x427000u) {
        ctx->pc = 0x427004u;
        goto label_427004;
    }
    ctx->pc = 0x426FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427004u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x427004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427004u; }
            if (ctx->pc != 0x427004u) { return; }
        }
        }
    }
    ctx->pc = 0x427004u;
label_427004:
    // 0x427004: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x427004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_427008:
    // 0x427008: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x427008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42700c:
    // 0x42700c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x42700cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_427010:
    // 0x427010: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_427014:
    if (ctx->pc == 0x427014u) {
        ctx->pc = 0x427014u;
            // 0x427014: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x427018u;
        goto label_427018;
    }
    ctx->pc = 0x427010u;
    {
        const bool branch_taken_0x427010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427010u;
            // 0x427014: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427010) {
            ctx->pc = 0x426FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_426fe8;
        }
    }
    ctx->pc = 0x427018u;
label_427018:
    // 0x427018: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x427018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42701c:
    // 0x42701c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x42701cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_427020:
    // 0x427020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x427020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_427024:
    // 0x427024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x427024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_427028:
    // 0x427028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x427028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42702c:
    // 0x42702c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42702cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_427030:
    // 0x427030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x427030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_427034:
    // 0x427034: 0x3e00008  jr          $ra
label_427038:
    if (ctx->pc == 0x427038u) {
        ctx->pc = 0x427038u;
            // 0x427038: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42703Cu;
        goto label_42703c;
    }
    ctx->pc = 0x427034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427034u;
            // 0x427038: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42703Cu;
label_42703c:
    // 0x42703c: 0x0  nop
    ctx->pc = 0x42703cu;
    // NOP
label_427040:
    // 0x427040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x427040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_427044:
    // 0x427044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x427044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_427048:
    // 0x427048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x427048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42704c:
    // 0x42704c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x42704cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_427050:
    // 0x427050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x427050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_427054:
    // 0x427054: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x427054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_427058:
    // 0x427058: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x427058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42705c:
    // 0x42705c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x42705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_427060:
    // 0x427060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x427060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_427064:
    // 0x427064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x427064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_427068:
    // 0x427068: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x427068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_42706c:
    // 0x42706c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x42706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_427070:
    // 0x427070: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x427070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_427074:
    // 0x427074: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x427074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_427078:
    // 0x427078: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x427078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_42707c:
    // 0x42707c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x42707cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_427080:
    // 0x427080: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x427080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_427084:
    // 0x427084: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x427084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_427088:
    // 0x427088: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x427088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_42708c:
    // 0x42708c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x42708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_427090:
    // 0x427090: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x427090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_427094:
    // 0x427094: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x427094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_427098:
    // 0x427098: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x427098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42709c:
    // 0x42709c: 0xc0a997c  jal         func_2A65F0
label_4270a0:
    if (ctx->pc == 0x4270A0u) {
        ctx->pc = 0x4270A0u;
            // 0x4270a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4270A4u;
        goto label_4270a4;
    }
    ctx->pc = 0x42709Cu;
    SET_GPR_U32(ctx, 31, 0x4270A4u);
    ctx->pc = 0x4270A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42709Cu;
            // 0x4270a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4270A4u; }
        if (ctx->pc != 0x4270A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4270A4u; }
        if (ctx->pc != 0x4270A4u) { return; }
    }
    ctx->pc = 0x4270A4u;
label_4270a4:
    // 0x4270a4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4270a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4270a8:
    // 0x4270a8: 0xc0d879c  jal         func_361E70
label_4270ac:
    if (ctx->pc == 0x4270ACu) {
        ctx->pc = 0x4270ACu;
            // 0x4270ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4270B0u;
        goto label_4270b0;
    }
    ctx->pc = 0x4270A8u;
    SET_GPR_U32(ctx, 31, 0x4270B0u);
    ctx->pc = 0x4270ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4270A8u;
            // 0x4270ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4270B0u; }
        if (ctx->pc != 0x4270B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4270B0u; }
        if (ctx->pc != 0x4270B0u) { return; }
    }
    ctx->pc = 0x4270B0u;
label_4270b0:
    // 0x4270b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4270b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4270b4:
    // 0x4270b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4270b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4270b8:
    // 0x4270b8: 0x3e00008  jr          $ra
label_4270bc:
    if (ctx->pc == 0x4270BCu) {
        ctx->pc = 0x4270BCu;
            // 0x4270bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4270C0u;
        goto label_4270c0;
    }
    ctx->pc = 0x4270B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4270BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4270B8u;
            // 0x4270bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4270C0u;
label_4270c0:
    // 0x4270c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4270c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4270c4:
    // 0x4270c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4270c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4270c8:
    // 0x4270c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4270c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4270cc:
    // 0x4270cc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4270ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4270d0:
    // 0x4270d0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4270d4:
    if (ctx->pc == 0x4270D4u) {
        ctx->pc = 0x4270D4u;
            // 0x4270d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4270D8u;
        goto label_4270d8;
    }
    ctx->pc = 0x4270D0u;
    {
        const bool branch_taken_0x4270d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4270D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4270D0u;
            // 0x4270d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4270d0) {
            ctx->pc = 0x4271F0u;
            goto label_4271f0;
        }
    }
    ctx->pc = 0x4270D8u;
label_4270d8:
    // 0x4270d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4270d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4270dc:
    // 0x4270dc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4270dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4270e0:
    // 0x4270e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4270e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4270e4:
    // 0x4270e4: 0xc075128  jal         func_1D44A0
label_4270e8:
    if (ctx->pc == 0x4270E8u) {
        ctx->pc = 0x4270E8u;
            // 0x4270e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4270ECu;
        goto label_4270ec;
    }
    ctx->pc = 0x4270E4u;
    SET_GPR_U32(ctx, 31, 0x4270ECu);
    ctx->pc = 0x4270E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4270E4u;
            // 0x4270e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4270ECu; }
        if (ctx->pc != 0x4270ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4270ECu; }
        if (ctx->pc != 0x4270ECu) { return; }
    }
    ctx->pc = 0x4270ECu;
label_4270ec:
    // 0x4270ec: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4270ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4270f0:
    // 0x4270f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4270f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4270f4:
    // 0x4270f4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4270f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4270f8:
    // 0x4270f8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4270f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4270fc:
    // 0x4270fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4270fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_427100:
    // 0x427100: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_427104:
    if (ctx->pc == 0x427104u) {
        ctx->pc = 0x427104u;
            // 0x427104: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x427108u;
        goto label_427108;
    }
    ctx->pc = 0x427100u;
    {
        const bool branch_taken_0x427100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x427104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427100u;
            // 0x427104: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427100) {
            ctx->pc = 0x427110u;
            goto label_427110;
        }
    }
    ctx->pc = 0x427108u;
label_427108:
    // 0x427108: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x427108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42710c:
    // 0x42710c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x42710cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_427110:
    // 0x427110: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x427110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_427114:
    // 0x427114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x427114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_427118:
    // 0x427118: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x427118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_42711c:
    // 0x42711c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x42711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_427120:
    // 0x427120: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x427120u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_427124:
    // 0x427124: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_427128:
    if (ctx->pc == 0x427128u) {
        ctx->pc = 0x427128u;
            // 0x427128: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42712Cu;
        goto label_42712c;
    }
    ctx->pc = 0x427124u;
    {
        const bool branch_taken_0x427124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x427124) {
            ctx->pc = 0x427128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427124u;
            // 0x427128: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427138u;
            goto label_427138;
        }
    }
    ctx->pc = 0x42712Cu;
label_42712c:
    // 0x42712c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_427130:
    // 0x427130: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x427130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_427134:
    // 0x427134: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x427134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_427138:
    // 0x427138: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x427138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42713c:
    // 0x42713c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x42713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_427140:
    // 0x427140: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x427140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_427144:
    // 0x427144: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x427144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_427148:
    // 0x427148: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42714c:
    if (ctx->pc == 0x42714Cu) {
        ctx->pc = 0x42714Cu;
            // 0x42714c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x427150u;
        goto label_427150;
    }
    ctx->pc = 0x427148u;
    {
        const bool branch_taken_0x427148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x427148) {
            ctx->pc = 0x42714Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427148u;
            // 0x42714c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42715Cu;
            goto label_42715c;
        }
    }
    ctx->pc = 0x427150u;
label_427150:
    // 0x427150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x427150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_427154:
    // 0x427154: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x427154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_427158:
    // 0x427158: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x427158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42715c:
    // 0x42715c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x42715cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_427160:
    // 0x427160: 0x320f809  jalr        $t9
label_427164:
    if (ctx->pc == 0x427164u) {
        ctx->pc = 0x427164u;
            // 0x427164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427168u;
        goto label_427168;
    }
    ctx->pc = 0x427160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427168u);
        ctx->pc = 0x427164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427160u;
            // 0x427164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x427168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427168u; }
            if (ctx->pc != 0x427168u) { return; }
        }
        }
    }
    ctx->pc = 0x427168u;
label_427168:
    // 0x427168: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x427168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_42716c:
    // 0x42716c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42716cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_427170:
    // 0x427170: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x427170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_427174:
    // 0x427174: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x427174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_427178:
    // 0x427178: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x427178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42717c:
    // 0x42717c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x42717cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_427180:
    // 0x427180: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_427184:
    if (ctx->pc == 0x427184u) {
        ctx->pc = 0x427184u;
            // 0x427184: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x427188u;
        goto label_427188;
    }
    ctx->pc = 0x427180u;
    {
        const bool branch_taken_0x427180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x427180) {
            ctx->pc = 0x427184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427180u;
            // 0x427184: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427194u;
            goto label_427194;
        }
    }
    ctx->pc = 0x427188u;
label_427188:
    // 0x427188: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x427188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42718c:
    // 0x42718c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x42718cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_427190:
    // 0x427190: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x427190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_427194:
    // 0x427194: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x427194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_427198:
    // 0x427198: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x427198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_42719c:
    // 0x42719c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x42719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4271a0:
    // 0x4271a0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4271a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4271a4:
    // 0x4271a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4271a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4271a8:
    // 0x4271a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4271ac:
    if (ctx->pc == 0x4271ACu) {
        ctx->pc = 0x4271B0u;
        goto label_4271b0;
    }
    ctx->pc = 0x4271A8u;
    {
        const bool branch_taken_0x4271a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4271a8) {
            ctx->pc = 0x4271B8u;
            goto label_4271b8;
        }
    }
    ctx->pc = 0x4271B0u;
label_4271b0:
    // 0x4271b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4271b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4271b4:
    // 0x4271b4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4271b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4271b8:
    // 0x4271b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4271b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4271bc:
    // 0x4271bc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4271bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4271c0:
    // 0x4271c0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4271c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4271c4:
    // 0x4271c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4271c8:
    if (ctx->pc == 0x4271C8u) {
        ctx->pc = 0x4271CCu;
        goto label_4271cc;
    }
    ctx->pc = 0x4271C4u;
    {
        const bool branch_taken_0x4271c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4271c4) {
            ctx->pc = 0x4271D4u;
            goto label_4271d4;
        }
    }
    ctx->pc = 0x4271CCu;
label_4271cc:
    // 0x4271cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4271ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4271d0:
    // 0x4271d0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4271d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4271d4:
    // 0x4271d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4271d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4271d8:
    // 0x4271d8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4271d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4271dc:
    // 0x4271dc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4271dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4271e0:
    // 0x4271e0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4271e4:
    if (ctx->pc == 0x4271E4u) {
        ctx->pc = 0x4271E4u;
            // 0x4271e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4271E8u;
        goto label_4271e8;
    }
    ctx->pc = 0x4271E0u;
    {
        const bool branch_taken_0x4271e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4271e0) {
            ctx->pc = 0x4271E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4271E0u;
            // 0x4271e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4271F4u;
            goto label_4271f4;
        }
    }
    ctx->pc = 0x4271E8u;
label_4271e8:
    // 0x4271e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4271e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4271ec:
    // 0x4271ec: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4271ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4271f0:
    // 0x4271f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4271f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4271f4:
    // 0x4271f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4271f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4271f8:
    // 0x4271f8: 0x3e00008  jr          $ra
label_4271fc:
    if (ctx->pc == 0x4271FCu) {
        ctx->pc = 0x4271FCu;
            // 0x4271fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x427200u;
        goto label_427200;
    }
    ctx->pc = 0x4271F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4271FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4271F8u;
            // 0x4271fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x427200u;
label_427200:
    // 0x427200: 0x8109b18  j           func_426C60
label_427204:
    if (ctx->pc == 0x427204u) {
        ctx->pc = 0x427204u;
            // 0x427204: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x427208u;
        goto label_427208;
    }
    ctx->pc = 0x427200u;
    ctx->pc = 0x427204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427200u;
            // 0x427204: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x426C60u;
    {
        auto targetFn = runtime->lookupFunction(0x426C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x427208u;
label_427208:
    // 0x427208: 0x0  nop
    ctx->pc = 0x427208u;
    // NOP
label_42720c:
    // 0x42720c: 0x0  nop
    ctx->pc = 0x42720cu;
    // NOP
label_427210:
    // 0x427210: 0x8109a28  j           func_4268A0
label_427214:
    if (ctx->pc == 0x427214u) {
        ctx->pc = 0x427214u;
            // 0x427214: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x427218u;
        goto label_427218;
    }
    ctx->pc = 0x427210u;
    ctx->pc = 0x427214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427210u;
            // 0x427214: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4268A0u;
    if (runtime->hasFunction(0x4268A0u)) {
        auto targetFn = runtime->lookupFunction(0x4268A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004268A0_0x4268a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x427218u;
label_427218:
    // 0x427218: 0x0  nop
    ctx->pc = 0x427218u;
    // NOP
label_42721c:
    // 0x42721c: 0x0  nop
    ctx->pc = 0x42721cu;
    // NOP
label_427220:
    // 0x427220: 0x8109a04  j           func_426810
label_427224:
    if (ctx->pc == 0x427224u) {
        ctx->pc = 0x427224u;
            // 0x427224: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x427228u;
        goto label_427228;
    }
    ctx->pc = 0x427220u;
    ctx->pc = 0x427224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427220u;
            // 0x427224: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x426810u;
    {
        auto targetFn = runtime->lookupFunction(0x426810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x427228u;
label_427228:
    // 0x427228: 0x0  nop
    ctx->pc = 0x427228u;
    // NOP
label_42722c:
    // 0x42722c: 0x0  nop
    ctx->pc = 0x42722cu;
    // NOP
label_427230:
    // 0x427230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x427230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_427234:
    // 0x427234: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x427234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_427238:
    // 0x427238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x427238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42723c:
    // 0x42723c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x42723cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_427240:
    // 0x427240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x427240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_427244:
    // 0x427244: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x427244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_427248:
    // 0x427248: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x427248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42724c:
    // 0x42724c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x42724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_427250:
    // 0x427250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x427250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_427254:
    // 0x427254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x427254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_427258:
    // 0x427258: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x427258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_42725c:
    // 0x42725c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x42725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_427260:
    // 0x427260: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x427260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_427264:
    // 0x427264: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x427264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_427268:
    // 0x427268: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x427268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_42726c:
    // 0x42726c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x42726cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_427270:
    // 0x427270: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x427270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_427274:
    // 0x427274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x427274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_427278:
    // 0x427278: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x427278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_42727c:
    // 0x42727c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x42727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_427280:
    // 0x427280: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x427280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_427284:
    // 0x427284: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x427284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_427288:
    // 0x427288: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x427288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42728c:
    // 0x42728c: 0xc0a997c  jal         func_2A65F0
label_427290:
    if (ctx->pc == 0x427290u) {
        ctx->pc = 0x427290u;
            // 0x427290: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x427294u;
        goto label_427294;
    }
    ctx->pc = 0x42728Cu;
    SET_GPR_U32(ctx, 31, 0x427294u);
    ctx->pc = 0x427290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42728Cu;
            // 0x427290: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427294u; }
        if (ctx->pc != 0x427294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427294u; }
        if (ctx->pc != 0x427294u) { return; }
    }
    ctx->pc = 0x427294u;
label_427294:
    // 0x427294: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x427294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_427298:
    // 0x427298: 0xc0d879c  jal         func_361E70
label_42729c:
    if (ctx->pc == 0x42729Cu) {
        ctx->pc = 0x42729Cu;
            // 0x42729c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4272A0u;
        goto label_4272a0;
    }
    ctx->pc = 0x427298u;
    SET_GPR_U32(ctx, 31, 0x4272A0u);
    ctx->pc = 0x42729Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427298u;
            // 0x42729c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4272A0u; }
        if (ctx->pc != 0x4272A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4272A0u; }
        if (ctx->pc != 0x4272A0u) { return; }
    }
    ctx->pc = 0x4272A0u;
label_4272a0:
    // 0x4272a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4272a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4272a4:
    // 0x4272a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4272a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4272a8:
    // 0x4272a8: 0x3e00008  jr          $ra
label_4272ac:
    if (ctx->pc == 0x4272ACu) {
        ctx->pc = 0x4272ACu;
            // 0x4272ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4272B0u;
        goto label_4272b0;
    }
    ctx->pc = 0x4272A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4272ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4272A8u;
            // 0x4272ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4272B0u;
label_4272b0:
    // 0x4272b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4272b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4272b4:
    // 0x4272b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4272b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4272b8:
    // 0x4272b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4272b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4272bc:
    // 0x4272bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4272bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4272c0:
    // 0x4272c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4272c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4272c4:
    // 0x4272c4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4272c8:
    if (ctx->pc == 0x4272C8u) {
        ctx->pc = 0x4272C8u;
            // 0x4272c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4272CCu;
        goto label_4272cc;
    }
    ctx->pc = 0x4272C4u;
    {
        const bool branch_taken_0x4272c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4272C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4272C4u;
            // 0x4272c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4272c4) {
            ctx->pc = 0x427320u;
            goto label_427320;
        }
    }
    ctx->pc = 0x4272CCu;
label_4272cc:
    // 0x4272cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4272ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4272d0:
    // 0x4272d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4272d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4272d4:
    // 0x4272d4: 0x2463bf60  addiu       $v1, $v1, -0x40A0
    ctx->pc = 0x4272d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950752));
label_4272d8:
    // 0x4272d8: 0x2442bf98  addiu       $v0, $v0, -0x4068
    ctx->pc = 0x4272d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950808));
label_4272dc:
    // 0x4272dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4272dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4272e0:
    // 0x4272e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4272e4:
    if (ctx->pc == 0x4272E4u) {
        ctx->pc = 0x4272E4u;
            // 0x4272e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4272E8u;
        goto label_4272e8;
    }
    ctx->pc = 0x4272E0u;
    {
        const bool branch_taken_0x4272e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4272E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4272E0u;
            // 0x4272e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4272e0) {
            ctx->pc = 0x427308u;
            goto label_427308;
        }
    }
    ctx->pc = 0x4272E8u;
label_4272e8:
    // 0x4272e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4272e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4272ec:
    // 0x4272ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4272ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4272f0:
    // 0x4272f0: 0x2463c050  addiu       $v1, $v1, -0x3FB0
    ctx->pc = 0x4272f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950992));
label_4272f4:
    // 0x4272f4: 0x2442c088  addiu       $v0, $v0, -0x3F78
    ctx->pc = 0x4272f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951048));
label_4272f8:
    // 0x4272f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4272f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4272fc:
    // 0x4272fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4272fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427300:
    // 0x427300: 0xc109cd0  jal         func_427340
label_427304:
    if (ctx->pc == 0x427304u) {
        ctx->pc = 0x427304u;
            // 0x427304: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x427308u;
        goto label_427308;
    }
    ctx->pc = 0x427300u;
    SET_GPR_U32(ctx, 31, 0x427308u);
    ctx->pc = 0x427304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427300u;
            // 0x427304: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x427340u;
    if (runtime->hasFunction(0x427340u)) {
        auto targetFn = runtime->lookupFunction(0x427340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427308u; }
        if (ctx->pc != 0x427308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00427340_0x427340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427308u; }
        if (ctx->pc != 0x427308u) { return; }
    }
    ctx->pc = 0x427308u;
label_427308:
    // 0x427308: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x427308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_42730c:
    // 0x42730c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42730cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_427310:
    // 0x427310: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_427314:
    if (ctx->pc == 0x427314u) {
        ctx->pc = 0x427314u;
            // 0x427314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427318u;
        goto label_427318;
    }
    ctx->pc = 0x427310u;
    {
        const bool branch_taken_0x427310 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x427310) {
            ctx->pc = 0x427314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427310u;
            // 0x427314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427324u;
            goto label_427324;
        }
    }
    ctx->pc = 0x427318u;
label_427318:
    // 0x427318: 0xc0400a8  jal         func_1002A0
label_42731c:
    if (ctx->pc == 0x42731Cu) {
        ctx->pc = 0x42731Cu;
            // 0x42731c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427320u;
        goto label_427320;
    }
    ctx->pc = 0x427318u;
    SET_GPR_U32(ctx, 31, 0x427320u);
    ctx->pc = 0x42731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427318u;
            // 0x42731c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427320u; }
        if (ctx->pc != 0x427320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427320u; }
        if (ctx->pc != 0x427320u) { return; }
    }
    ctx->pc = 0x427320u;
label_427320:
    // 0x427320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x427320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_427324:
    // 0x427324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x427324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_427328:
    // 0x427328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x427328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42732c:
    // 0x42732c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42732cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_427330:
    // 0x427330: 0x3e00008  jr          $ra
label_427334:
    if (ctx->pc == 0x427334u) {
        ctx->pc = 0x427334u;
            // 0x427334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x427338u;
        goto label_427338;
    }
    ctx->pc = 0x427330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427330u;
            // 0x427334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x427338u;
label_427338:
    // 0x427338: 0x0  nop
    ctx->pc = 0x427338u;
    // NOP
label_42733c:
    // 0x42733c: 0x0  nop
    ctx->pc = 0x42733cu;
    // NOP
}
