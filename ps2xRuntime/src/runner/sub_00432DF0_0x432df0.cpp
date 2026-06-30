#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00432DF0
// Address: 0x432df0 - 0x4332c0
void sub_00432DF0_0x432df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432DF0_0x432df0");
#endif

    switch (ctx->pc) {
        case 0x432df0u: goto label_432df0;
        case 0x432df4u: goto label_432df4;
        case 0x432df8u: goto label_432df8;
        case 0x432dfcu: goto label_432dfc;
        case 0x432e00u: goto label_432e00;
        case 0x432e04u: goto label_432e04;
        case 0x432e08u: goto label_432e08;
        case 0x432e0cu: goto label_432e0c;
        case 0x432e10u: goto label_432e10;
        case 0x432e14u: goto label_432e14;
        case 0x432e18u: goto label_432e18;
        case 0x432e1cu: goto label_432e1c;
        case 0x432e20u: goto label_432e20;
        case 0x432e24u: goto label_432e24;
        case 0x432e28u: goto label_432e28;
        case 0x432e2cu: goto label_432e2c;
        case 0x432e30u: goto label_432e30;
        case 0x432e34u: goto label_432e34;
        case 0x432e38u: goto label_432e38;
        case 0x432e3cu: goto label_432e3c;
        case 0x432e40u: goto label_432e40;
        case 0x432e44u: goto label_432e44;
        case 0x432e48u: goto label_432e48;
        case 0x432e4cu: goto label_432e4c;
        case 0x432e50u: goto label_432e50;
        case 0x432e54u: goto label_432e54;
        case 0x432e58u: goto label_432e58;
        case 0x432e5cu: goto label_432e5c;
        case 0x432e60u: goto label_432e60;
        case 0x432e64u: goto label_432e64;
        case 0x432e68u: goto label_432e68;
        case 0x432e6cu: goto label_432e6c;
        case 0x432e70u: goto label_432e70;
        case 0x432e74u: goto label_432e74;
        case 0x432e78u: goto label_432e78;
        case 0x432e7cu: goto label_432e7c;
        case 0x432e80u: goto label_432e80;
        case 0x432e84u: goto label_432e84;
        case 0x432e88u: goto label_432e88;
        case 0x432e8cu: goto label_432e8c;
        case 0x432e90u: goto label_432e90;
        case 0x432e94u: goto label_432e94;
        case 0x432e98u: goto label_432e98;
        case 0x432e9cu: goto label_432e9c;
        case 0x432ea0u: goto label_432ea0;
        case 0x432ea4u: goto label_432ea4;
        case 0x432ea8u: goto label_432ea8;
        case 0x432eacu: goto label_432eac;
        case 0x432eb0u: goto label_432eb0;
        case 0x432eb4u: goto label_432eb4;
        case 0x432eb8u: goto label_432eb8;
        case 0x432ebcu: goto label_432ebc;
        case 0x432ec0u: goto label_432ec0;
        case 0x432ec4u: goto label_432ec4;
        case 0x432ec8u: goto label_432ec8;
        case 0x432eccu: goto label_432ecc;
        case 0x432ed0u: goto label_432ed0;
        case 0x432ed4u: goto label_432ed4;
        case 0x432ed8u: goto label_432ed8;
        case 0x432edcu: goto label_432edc;
        case 0x432ee0u: goto label_432ee0;
        case 0x432ee4u: goto label_432ee4;
        case 0x432ee8u: goto label_432ee8;
        case 0x432eecu: goto label_432eec;
        case 0x432ef0u: goto label_432ef0;
        case 0x432ef4u: goto label_432ef4;
        case 0x432ef8u: goto label_432ef8;
        case 0x432efcu: goto label_432efc;
        case 0x432f00u: goto label_432f00;
        case 0x432f04u: goto label_432f04;
        case 0x432f08u: goto label_432f08;
        case 0x432f0cu: goto label_432f0c;
        case 0x432f10u: goto label_432f10;
        case 0x432f14u: goto label_432f14;
        case 0x432f18u: goto label_432f18;
        case 0x432f1cu: goto label_432f1c;
        case 0x432f20u: goto label_432f20;
        case 0x432f24u: goto label_432f24;
        case 0x432f28u: goto label_432f28;
        case 0x432f2cu: goto label_432f2c;
        case 0x432f30u: goto label_432f30;
        case 0x432f34u: goto label_432f34;
        case 0x432f38u: goto label_432f38;
        case 0x432f3cu: goto label_432f3c;
        case 0x432f40u: goto label_432f40;
        case 0x432f44u: goto label_432f44;
        case 0x432f48u: goto label_432f48;
        case 0x432f4cu: goto label_432f4c;
        case 0x432f50u: goto label_432f50;
        case 0x432f54u: goto label_432f54;
        case 0x432f58u: goto label_432f58;
        case 0x432f5cu: goto label_432f5c;
        case 0x432f60u: goto label_432f60;
        case 0x432f64u: goto label_432f64;
        case 0x432f68u: goto label_432f68;
        case 0x432f6cu: goto label_432f6c;
        case 0x432f70u: goto label_432f70;
        case 0x432f74u: goto label_432f74;
        case 0x432f78u: goto label_432f78;
        case 0x432f7cu: goto label_432f7c;
        case 0x432f80u: goto label_432f80;
        case 0x432f84u: goto label_432f84;
        case 0x432f88u: goto label_432f88;
        case 0x432f8cu: goto label_432f8c;
        case 0x432f90u: goto label_432f90;
        case 0x432f94u: goto label_432f94;
        case 0x432f98u: goto label_432f98;
        case 0x432f9cu: goto label_432f9c;
        case 0x432fa0u: goto label_432fa0;
        case 0x432fa4u: goto label_432fa4;
        case 0x432fa8u: goto label_432fa8;
        case 0x432facu: goto label_432fac;
        case 0x432fb0u: goto label_432fb0;
        case 0x432fb4u: goto label_432fb4;
        case 0x432fb8u: goto label_432fb8;
        case 0x432fbcu: goto label_432fbc;
        case 0x432fc0u: goto label_432fc0;
        case 0x432fc4u: goto label_432fc4;
        case 0x432fc8u: goto label_432fc8;
        case 0x432fccu: goto label_432fcc;
        case 0x432fd0u: goto label_432fd0;
        case 0x432fd4u: goto label_432fd4;
        case 0x432fd8u: goto label_432fd8;
        case 0x432fdcu: goto label_432fdc;
        case 0x432fe0u: goto label_432fe0;
        case 0x432fe4u: goto label_432fe4;
        case 0x432fe8u: goto label_432fe8;
        case 0x432fecu: goto label_432fec;
        case 0x432ff0u: goto label_432ff0;
        case 0x432ff4u: goto label_432ff4;
        case 0x432ff8u: goto label_432ff8;
        case 0x432ffcu: goto label_432ffc;
        case 0x433000u: goto label_433000;
        case 0x433004u: goto label_433004;
        case 0x433008u: goto label_433008;
        case 0x43300cu: goto label_43300c;
        case 0x433010u: goto label_433010;
        case 0x433014u: goto label_433014;
        case 0x433018u: goto label_433018;
        case 0x43301cu: goto label_43301c;
        case 0x433020u: goto label_433020;
        case 0x433024u: goto label_433024;
        case 0x433028u: goto label_433028;
        case 0x43302cu: goto label_43302c;
        case 0x433030u: goto label_433030;
        case 0x433034u: goto label_433034;
        case 0x433038u: goto label_433038;
        case 0x43303cu: goto label_43303c;
        case 0x433040u: goto label_433040;
        case 0x433044u: goto label_433044;
        case 0x433048u: goto label_433048;
        case 0x43304cu: goto label_43304c;
        case 0x433050u: goto label_433050;
        case 0x433054u: goto label_433054;
        case 0x433058u: goto label_433058;
        case 0x43305cu: goto label_43305c;
        case 0x433060u: goto label_433060;
        case 0x433064u: goto label_433064;
        case 0x433068u: goto label_433068;
        case 0x43306cu: goto label_43306c;
        case 0x433070u: goto label_433070;
        case 0x433074u: goto label_433074;
        case 0x433078u: goto label_433078;
        case 0x43307cu: goto label_43307c;
        case 0x433080u: goto label_433080;
        case 0x433084u: goto label_433084;
        case 0x433088u: goto label_433088;
        case 0x43308cu: goto label_43308c;
        case 0x433090u: goto label_433090;
        case 0x433094u: goto label_433094;
        case 0x433098u: goto label_433098;
        case 0x43309cu: goto label_43309c;
        case 0x4330a0u: goto label_4330a0;
        case 0x4330a4u: goto label_4330a4;
        case 0x4330a8u: goto label_4330a8;
        case 0x4330acu: goto label_4330ac;
        case 0x4330b0u: goto label_4330b0;
        case 0x4330b4u: goto label_4330b4;
        case 0x4330b8u: goto label_4330b8;
        case 0x4330bcu: goto label_4330bc;
        case 0x4330c0u: goto label_4330c0;
        case 0x4330c4u: goto label_4330c4;
        case 0x4330c8u: goto label_4330c8;
        case 0x4330ccu: goto label_4330cc;
        case 0x4330d0u: goto label_4330d0;
        case 0x4330d4u: goto label_4330d4;
        case 0x4330d8u: goto label_4330d8;
        case 0x4330dcu: goto label_4330dc;
        case 0x4330e0u: goto label_4330e0;
        case 0x4330e4u: goto label_4330e4;
        case 0x4330e8u: goto label_4330e8;
        case 0x4330ecu: goto label_4330ec;
        case 0x4330f0u: goto label_4330f0;
        case 0x4330f4u: goto label_4330f4;
        case 0x4330f8u: goto label_4330f8;
        case 0x4330fcu: goto label_4330fc;
        case 0x433100u: goto label_433100;
        case 0x433104u: goto label_433104;
        case 0x433108u: goto label_433108;
        case 0x43310cu: goto label_43310c;
        case 0x433110u: goto label_433110;
        case 0x433114u: goto label_433114;
        case 0x433118u: goto label_433118;
        case 0x43311cu: goto label_43311c;
        case 0x433120u: goto label_433120;
        case 0x433124u: goto label_433124;
        case 0x433128u: goto label_433128;
        case 0x43312cu: goto label_43312c;
        case 0x433130u: goto label_433130;
        case 0x433134u: goto label_433134;
        case 0x433138u: goto label_433138;
        case 0x43313cu: goto label_43313c;
        case 0x433140u: goto label_433140;
        case 0x433144u: goto label_433144;
        case 0x433148u: goto label_433148;
        case 0x43314cu: goto label_43314c;
        case 0x433150u: goto label_433150;
        case 0x433154u: goto label_433154;
        case 0x433158u: goto label_433158;
        case 0x43315cu: goto label_43315c;
        case 0x433160u: goto label_433160;
        case 0x433164u: goto label_433164;
        case 0x433168u: goto label_433168;
        case 0x43316cu: goto label_43316c;
        case 0x433170u: goto label_433170;
        case 0x433174u: goto label_433174;
        case 0x433178u: goto label_433178;
        case 0x43317cu: goto label_43317c;
        case 0x433180u: goto label_433180;
        case 0x433184u: goto label_433184;
        case 0x433188u: goto label_433188;
        case 0x43318cu: goto label_43318c;
        case 0x433190u: goto label_433190;
        case 0x433194u: goto label_433194;
        case 0x433198u: goto label_433198;
        case 0x43319cu: goto label_43319c;
        case 0x4331a0u: goto label_4331a0;
        case 0x4331a4u: goto label_4331a4;
        case 0x4331a8u: goto label_4331a8;
        case 0x4331acu: goto label_4331ac;
        case 0x4331b0u: goto label_4331b0;
        case 0x4331b4u: goto label_4331b4;
        case 0x4331b8u: goto label_4331b8;
        case 0x4331bcu: goto label_4331bc;
        case 0x4331c0u: goto label_4331c0;
        case 0x4331c4u: goto label_4331c4;
        case 0x4331c8u: goto label_4331c8;
        case 0x4331ccu: goto label_4331cc;
        case 0x4331d0u: goto label_4331d0;
        case 0x4331d4u: goto label_4331d4;
        case 0x4331d8u: goto label_4331d8;
        case 0x4331dcu: goto label_4331dc;
        case 0x4331e0u: goto label_4331e0;
        case 0x4331e4u: goto label_4331e4;
        case 0x4331e8u: goto label_4331e8;
        case 0x4331ecu: goto label_4331ec;
        case 0x4331f0u: goto label_4331f0;
        case 0x4331f4u: goto label_4331f4;
        case 0x4331f8u: goto label_4331f8;
        case 0x4331fcu: goto label_4331fc;
        case 0x433200u: goto label_433200;
        case 0x433204u: goto label_433204;
        case 0x433208u: goto label_433208;
        case 0x43320cu: goto label_43320c;
        case 0x433210u: goto label_433210;
        case 0x433214u: goto label_433214;
        case 0x433218u: goto label_433218;
        case 0x43321cu: goto label_43321c;
        case 0x433220u: goto label_433220;
        case 0x433224u: goto label_433224;
        case 0x433228u: goto label_433228;
        case 0x43322cu: goto label_43322c;
        case 0x433230u: goto label_433230;
        case 0x433234u: goto label_433234;
        case 0x433238u: goto label_433238;
        case 0x43323cu: goto label_43323c;
        case 0x433240u: goto label_433240;
        case 0x433244u: goto label_433244;
        case 0x433248u: goto label_433248;
        case 0x43324cu: goto label_43324c;
        case 0x433250u: goto label_433250;
        case 0x433254u: goto label_433254;
        case 0x433258u: goto label_433258;
        case 0x43325cu: goto label_43325c;
        case 0x433260u: goto label_433260;
        case 0x433264u: goto label_433264;
        case 0x433268u: goto label_433268;
        case 0x43326cu: goto label_43326c;
        case 0x433270u: goto label_433270;
        case 0x433274u: goto label_433274;
        case 0x433278u: goto label_433278;
        case 0x43327cu: goto label_43327c;
        case 0x433280u: goto label_433280;
        case 0x433284u: goto label_433284;
        case 0x433288u: goto label_433288;
        case 0x43328cu: goto label_43328c;
        case 0x433290u: goto label_433290;
        case 0x433294u: goto label_433294;
        case 0x433298u: goto label_433298;
        case 0x43329cu: goto label_43329c;
        case 0x4332a0u: goto label_4332a0;
        case 0x4332a4u: goto label_4332a4;
        case 0x4332a8u: goto label_4332a8;
        case 0x4332acu: goto label_4332ac;
        case 0x4332b0u: goto label_4332b0;
        case 0x4332b4u: goto label_4332b4;
        case 0x4332b8u: goto label_4332b8;
        case 0x4332bcu: goto label_4332bc;
        default: break;
    }

    ctx->pc = 0x432df0u;

label_432df0:
    // 0x432df0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x432df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_432df4:
    // 0x432df4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x432df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_432df8:
    // 0x432df8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x432df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_432dfc:
    // 0x432dfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x432dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_432e00:
    // 0x432e00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x432e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_432e04:
    // 0x432e04: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x432e04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_432e08:
    // 0x432e08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x432e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_432e0c:
    // 0x432e0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x432e0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_432e10:
    // 0x432e10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x432e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_432e14:
    // 0x432e14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x432e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_432e18:
    // 0x432e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x432e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_432e1c:
    // 0x432e1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x432e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432e20:
    // 0x432e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x432e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_432e24:
    // 0x432e24: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x432e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_432e28:
    // 0x432e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_432e2c:
    // 0x432e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x432e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_432e30:
    // 0x432e30: 0x8c9e0070  lw          $fp, 0x70($a0)
    ctx->pc = 0x432e30u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_432e34:
    // 0x432e34: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_432e38:
    if (ctx->pc == 0x432E38u) {
        ctx->pc = 0x432E38u;
            // 0x432e38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x432E3Cu;
        goto label_432e3c;
    }
    ctx->pc = 0x432E34u;
    {
        const bool branch_taken_0x432e34 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x432E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432E34u;
            // 0x432e38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e34) {
            ctx->pc = 0x432E40u;
            goto label_432e40;
        }
    }
    ctx->pc = 0x432E3Cu;
label_432e3c:
    // 0x432e3c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x432e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_432e40:
    // 0x432e40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x432e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432e44:
    // 0x432e44: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x432e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_432e48:
    // 0x432e48: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x432e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_432e4c:
    // 0x432e4c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x432e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_432e50:
    // 0x432e50: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x432e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_432e54:
    // 0x432e54: 0x1643002c  bne         $s2, $v1, . + 4 + (0x2C << 2)
label_432e58:
    if (ctx->pc == 0x432E58u) {
        ctx->pc = 0x432E5Cu;
        goto label_432e5c;
    }
    ctx->pc = 0x432E54u;
    {
        const bool branch_taken_0x432e54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x432e54) {
            ctx->pc = 0x432F08u;
            goto label_432f08;
        }
    }
    ctx->pc = 0x432E5Cu;
label_432e5c:
    // 0x432e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x432e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_432e60:
    // 0x432e60: 0x12a30023  beq         $s5, $v1, . + 4 + (0x23 << 2)
label_432e64:
    if (ctx->pc == 0x432E64u) {
        ctx->pc = 0x432E68u;
        goto label_432e68;
    }
    ctx->pc = 0x432E60u;
    {
        const bool branch_taken_0x432e60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x432e60) {
            ctx->pc = 0x432EF0u;
            goto label_432ef0;
        }
    }
    ctx->pc = 0x432E68u;
label_432e68:
    // 0x432e68: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_432e6c:
    if (ctx->pc == 0x432E6Cu) {
        ctx->pc = 0x432E70u;
        goto label_432e70;
    }
    ctx->pc = 0x432E68u;
    {
        const bool branch_taken_0x432e68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x432e68) {
            ctx->pc = 0x432E78u;
            goto label_432e78;
        }
    }
    ctx->pc = 0x432E70u;
label_432e70:
    // 0x432e70: 0x10000021  b           . + 4 + (0x21 << 2)
label_432e74:
    if (ctx->pc == 0x432E74u) {
        ctx->pc = 0x432E78u;
        goto label_432e78;
    }
    ctx->pc = 0x432E70u;
    {
        const bool branch_taken_0x432e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x432e70) {
            ctx->pc = 0x432EF8u;
            goto label_432ef8;
        }
    }
    ctx->pc = 0x432E78u;
label_432e78:
    // 0x432e78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x432e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_432e7c:
    // 0x432e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x432e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_432e80:
    // 0x432e80: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x432e80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_432e84:
    // 0x432e84: 0xc10d00c  jal         func_434030
label_432e88:
    if (ctx->pc == 0x432E88u) {
        ctx->pc = 0x432E88u;
            // 0x432e88: 0xae170114  sw          $s7, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 23));
        ctx->pc = 0x432E8Cu;
        goto label_432e8c;
    }
    ctx->pc = 0x432E84u;
    SET_GPR_U32(ctx, 31, 0x432E8Cu);
    ctx->pc = 0x432E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432E84u;
            // 0x432e88: 0xae170114  sw          $s7, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x434030u;
    if (runtime->hasFunction(0x434030u)) {
        auto targetFn = runtime->lookupFunction(0x434030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432E8Cu; }
        if (ctx->pc != 0x432E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434030_0x434030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432E8Cu; }
        if (ctx->pc != 0x432E8Cu) { return; }
    }
    ctx->pc = 0x432E8Cu;
label_432e8c:
    // 0x432e8c: 0x2e830003  sltiu       $v1, $s4, 0x3
    ctx->pc = 0x432e8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_432e90:
    // 0x432e90: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_432e94:
    if (ctx->pc == 0x432E94u) {
        ctx->pc = 0x432E94u;
            // 0x432e94: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x432E98u;
        goto label_432e98;
    }
    ctx->pc = 0x432E90u;
    {
        const bool branch_taken_0x432e90 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x432e90) {
            ctx->pc = 0x432E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432E90u;
            // 0x432e94: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432EA4u;
            goto label_432ea4;
        }
    }
    ctx->pc = 0x432E98u;
label_432e98:
    // 0x432e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x432e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_432e9c:
    // 0x432e9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_432ea0:
    if (ctx->pc == 0x432EA0u) {
        ctx->pc = 0x432EA0u;
            // 0x432ea0: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x432EA4u;
        goto label_432ea4;
    }
    ctx->pc = 0x432E9Cu;
    {
        const bool branch_taken_0x432e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432E9Cu;
            // 0x432ea0: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e9c) {
            ctx->pc = 0x432EBCu;
            goto label_432ebc;
        }
    }
    ctx->pc = 0x432EA4u;
label_432ea4:
    // 0x432ea4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x432ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_432ea8:
    // 0x432ea8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x432ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_432eac:
    // 0x432eac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x432eacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_432eb0:
    // 0x432eb0: 0x0  nop
    ctx->pc = 0x432eb0u;
    // NOP
label_432eb4:
    // 0x432eb4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x432eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_432eb8:
    // 0x432eb8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x432eb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_432ebc:
    // 0x432ebc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x432ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_432ec0:
    // 0x432ec0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x432ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_432ec4:
    // 0x432ec4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x432ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_432ec8:
    // 0x432ec8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x432ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_432ecc:
    // 0x432ecc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x432eccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_432ed0:
    // 0x432ed0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x432ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_432ed4:
    // 0x432ed4: 0x0  nop
    ctx->pc = 0x432ed4u;
    // NOP
label_432ed8:
    // 0x432ed8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x432ed8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_432edc:
    // 0x432edc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x432edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_432ee0:
    // 0x432ee0: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x432ee0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_432ee4:
    // 0x432ee4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x432ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_432ee8:
    // 0x432ee8: 0x10000003  b           . + 4 + (0x3 << 2)
label_432eec:
    if (ctx->pc == 0x432EECu) {
        ctx->pc = 0x432EECu;
            // 0x432eec: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->pc = 0x432EF0u;
        goto label_432ef0;
    }
    ctx->pc = 0x432EE8u;
    {
        const bool branch_taken_0x432ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432EE8u;
            // 0x432eec: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ee8) {
            ctx->pc = 0x432EF8u;
            goto label_432ef8;
        }
    }
    ctx->pc = 0x432EF0u;
label_432ef0:
    // 0x432ef0: 0xc10d104  jal         func_434410
label_432ef4:
    if (ctx->pc == 0x432EF4u) {
        ctx->pc = 0x432EF4u;
            // 0x432ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432EF8u;
        goto label_432ef8;
    }
    ctx->pc = 0x432EF0u;
    SET_GPR_U32(ctx, 31, 0x432EF8u);
    ctx->pc = 0x432EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432EF0u;
            // 0x432ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x434410u;
    if (runtime->hasFunction(0x434410u)) {
        auto targetFn = runtime->lookupFunction(0x434410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432EF8u; }
        if (ctx->pc != 0x432EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434410_0x434410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432EF8u; }
        if (ctx->pc != 0x432EF8u) { return; }
    }
    ctx->pc = 0x432EF8u;
label_432ef8:
    // 0x432ef8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x432ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_432efc:
    // 0x432efc: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_432f00:
    if (ctx->pc == 0x432F00u) {
        ctx->pc = 0x432F04u;
        goto label_432f04;
    }
    ctx->pc = 0x432EFCu;
    {
        const bool branch_taken_0x432efc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x432efc) {
            ctx->pc = 0x432F18u;
            goto label_432f18;
        }
    }
    ctx->pc = 0x432F04u;
label_432f04:
    // 0x432f04: 0x0  nop
    ctx->pc = 0x432f04u;
    // NOP
label_432f08:
    // 0x432f08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x432f08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_432f0c:
    // 0x432f0c: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x432f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_432f10:
    // 0x432f10: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_432f14:
    if (ctx->pc == 0x432F14u) {
        ctx->pc = 0x432F14u;
            // 0x432f14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x432F18u;
        goto label_432f18;
    }
    ctx->pc = 0x432F10u;
    {
        const bool branch_taken_0x432f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x432F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432F10u;
            // 0x432f14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f10) {
            ctx->pc = 0x432E44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_432e44;
        }
    }
    ctx->pc = 0x432F18u;
label_432f18:
    // 0x432f18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x432f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_432f1c:
    // 0x432f1c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x432f1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_432f20:
    // 0x432f20: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x432f20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_432f24:
    // 0x432f24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x432f24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_432f28:
    // 0x432f28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x432f28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_432f2c:
    // 0x432f2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x432f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_432f30:
    // 0x432f30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x432f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_432f34:
    // 0x432f34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x432f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_432f38:
    // 0x432f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x432f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_432f3c:
    // 0x432f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_432f40:
    // 0x432f40: 0x3e00008  jr          $ra
label_432f44:
    if (ctx->pc == 0x432F44u) {
        ctx->pc = 0x432F44u;
            // 0x432f44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x432F48u;
        goto label_432f48;
    }
    ctx->pc = 0x432F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432F40u;
            // 0x432f44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432F48u;
label_432f48:
    // 0x432f48: 0x0  nop
    ctx->pc = 0x432f48u;
    // NOP
label_432f4c:
    // 0x432f4c: 0x0  nop
    ctx->pc = 0x432f4cu;
    // NOP
label_432f50:
    // 0x432f50: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x432f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_432f54:
    // 0x432f54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x432f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_432f58:
    // 0x432f58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x432f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_432f5c:
    // 0x432f5c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x432f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_432f60:
    // 0x432f60: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x432f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_432f64:
    // 0x432f64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x432f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_432f68:
    // 0x432f68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x432f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_432f6c:
    // 0x432f6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x432f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_432f70:
    // 0x432f70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x432f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_432f74:
    // 0x432f74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x432f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_432f78:
    // 0x432f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_432f7c:
    // 0x432f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x432f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_432f80:
    // 0x432f80: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x432f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_432f84:
    // 0x432f84: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x432f84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_432f88:
    // 0x432f88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x432f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_432f8c:
    // 0x432f8c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_432f90:
    if (ctx->pc == 0x432F90u) {
        ctx->pc = 0x432F90u;
            // 0x432f90: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432F94u;
        goto label_432f94;
    }
    ctx->pc = 0x432F8Cu;
    {
        const bool branch_taken_0x432f8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x432F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432F8Cu;
            // 0x432f90: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f8c) {
            ctx->pc = 0x432FD0u;
            goto label_432fd0;
        }
    }
    ctx->pc = 0x432F94u;
label_432f94:
    // 0x432f94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x432f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_432f98:
    // 0x432f98: 0x50a300bb  beql        $a1, $v1, . + 4 + (0xBB << 2)
label_432f9c:
    if (ctx->pc == 0x432F9Cu) {
        ctx->pc = 0x432F9Cu;
            // 0x432f9c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x432FA0u;
        goto label_432fa0;
    }
    ctx->pc = 0x432F98u;
    {
        const bool branch_taken_0x432f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x432f98) {
            ctx->pc = 0x432F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432F98u;
            // 0x432f9c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x433288u;
            goto label_433288;
        }
    }
    ctx->pc = 0x432FA0u;
label_432fa0:
    // 0x432fa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x432fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_432fa4:
    // 0x432fa4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_432fa8:
    if (ctx->pc == 0x432FA8u) {
        ctx->pc = 0x432FA8u;
            // 0x432fa8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x432FACu;
        goto label_432fac;
    }
    ctx->pc = 0x432FA4u;
    {
        const bool branch_taken_0x432fa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x432fa4) {
            ctx->pc = 0x432FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432FA4u;
            // 0x432fa8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432FB4u;
            goto label_432fb4;
        }
    }
    ctx->pc = 0x432FACu;
label_432fac:
    // 0x432fac: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_432fb0:
    if (ctx->pc == 0x432FB0u) {
        ctx->pc = 0x432FB4u;
        goto label_432fb4;
    }
    ctx->pc = 0x432FACu;
    {
        const bool branch_taken_0x432fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x432fac) {
            ctx->pc = 0x433284u;
            goto label_433284;
        }
    }
    ctx->pc = 0x432FB4u;
label_432fb4:
    // 0x432fb4: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x432fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_432fb8:
    // 0x432fb8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x432fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_432fbc:
    // 0x432fbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x432fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_432fc0:
    // 0x432fc0: 0x320f809  jalr        $t9
label_432fc4:
    if (ctx->pc == 0x432FC4u) {
        ctx->pc = 0x432FC4u;
            // 0x432fc4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x432FC8u;
        goto label_432fc8;
    }
    ctx->pc = 0x432FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432FC8u);
        ctx->pc = 0x432FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432FC0u;
            // 0x432fc4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x432FC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432FC8u; }
            if (ctx->pc != 0x432FC8u) { return; }
        }
        }
    }
    ctx->pc = 0x432FC8u;
label_432fc8:
    // 0x432fc8: 0x100000ae  b           . + 4 + (0xAE << 2)
label_432fcc:
    if (ctx->pc == 0x432FCCu) {
        ctx->pc = 0x432FD0u;
        goto label_432fd0;
    }
    ctx->pc = 0x432FC8u;
    {
        const bool branch_taken_0x432fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x432fc8) {
            ctx->pc = 0x433284u;
            goto label_433284;
        }
    }
    ctx->pc = 0x432FD0u;
label_432fd0:
    // 0x432fd0: 0x8ebe0070  lw          $fp, 0x70($s5)
    ctx->pc = 0x432fd0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_432fd4:
    // 0x432fd4: 0x13c000ab  beqz        $fp, . + 4 + (0xAB << 2)
label_432fd8:
    if (ctx->pc == 0x432FD8u) {
        ctx->pc = 0x432FDCu;
        goto label_432fdc;
    }
    ctx->pc = 0x432FD4u;
    {
        const bool branch_taken_0x432fd4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x432fd4) {
            ctx->pc = 0x433284u;
            goto label_433284;
        }
    }
    ctx->pc = 0x432FDCu;
label_432fdc:
    // 0x432fdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x432fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_432fe0:
    // 0x432fe0: 0x26b10084  addiu       $s1, $s5, 0x84
    ctx->pc = 0x432fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_432fe4:
    // 0x432fe4: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x432fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_432fe8:
    // 0x432fe8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x432fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_432fec:
    // 0x432fec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x432fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_432ff0:
    // 0x432ff0: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x432ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_432ff4:
    // 0x432ff4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x432ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_432ff8:
    // 0x432ff8: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x432ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_432ffc:
    // 0x432ffc: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x432ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_433000:
    // 0x433000: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x433000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_433004:
    // 0x433004: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433008:
    // 0x433008: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x433008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_43300c:
    // 0x43300c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x43300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_433010:
    // 0x433010: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x433010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_433014:
    // 0x433014: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x433014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_433018:
    // 0x433018: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x433018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_43301c:
    // 0x43301c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x43301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_433020:
    // 0x433020: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x433020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_433024:
    // 0x433024: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_433028:
    if (ctx->pc == 0x433028u) {
        ctx->pc = 0x433028u;
            // 0x433028: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x43302Cu;
        goto label_43302c;
    }
    ctx->pc = 0x433024u;
    {
        const bool branch_taken_0x433024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x433028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433024u;
            // 0x433028: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433024) {
            ctx->pc = 0x433044u;
            goto label_433044;
        }
    }
    ctx->pc = 0x43302Cu;
label_43302c:
    // 0x43302c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433030:
    // 0x433030: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x433030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_433034:
    // 0x433034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x433034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_433038:
    // 0x433038: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x433038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_43303c:
    // 0x43303c: 0x320f809  jalr        $t9
label_433040:
    if (ctx->pc == 0x433040u) {
        ctx->pc = 0x433044u;
        goto label_433044;
    }
    ctx->pc = 0x43303Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x433044u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x433044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x433044u; }
            if (ctx->pc != 0x433044u) { return; }
        }
        }
    }
    ctx->pc = 0x433044u;
label_433044:
    // 0x433044: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x433044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_433048:
    // 0x433048: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43304c:
    // 0x43304c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x43304cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_433050:
    // 0x433050: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x433050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_433054:
    // 0x433054: 0xc04e738  jal         func_139CE0
label_433058:
    if (ctx->pc == 0x433058u) {
        ctx->pc = 0x433058u;
            // 0x433058: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x43305Cu;
        goto label_43305c;
    }
    ctx->pc = 0x433054u;
    SET_GPR_U32(ctx, 31, 0x43305Cu);
    ctx->pc = 0x433058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433054u;
            // 0x433058: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43305Cu; }
        if (ctx->pc != 0x43305Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43305Cu; }
        if (ctx->pc != 0x43305Cu) { return; }
    }
    ctx->pc = 0x43305Cu;
label_43305c:
    // 0x43305c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x43305cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433060:
    // 0x433060: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x433060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433064:
    // 0x433064: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x433064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_433068:
    // 0x433068: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x433068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_43306c:
    // 0x43306c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x43306cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_433070:
    // 0x433070: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x433070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_433074:
    // 0x433074: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x433074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_433078:
    // 0x433078: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x433078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_43307c:
    // 0x43307c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x43307cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_433080:
    // 0x433080: 0xc10ccdc  jal         func_433370
label_433084:
    if (ctx->pc == 0x433084u) {
        ctx->pc = 0x433084u;
            // 0x433084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433088u;
        goto label_433088;
    }
    ctx->pc = 0x433080u;
    SET_GPR_U32(ctx, 31, 0x433088u);
    ctx->pc = 0x433084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433080u;
            // 0x433084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x433370u;
    if (runtime->hasFunction(0x433370u)) {
        auto targetFn = runtime->lookupFunction(0x433370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433088u; }
        if (ctx->pc != 0x433088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00433370_0x433370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433088u; }
        if (ctx->pc != 0x433088u) { return; }
    }
    ctx->pc = 0x433088u;
label_433088:
    // 0x433088: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x433088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_43308c:
    // 0x43308c: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
label_433090:
    if (ctx->pc == 0x433090u) {
        ctx->pc = 0x433094u;
        goto label_433094;
    }
    ctx->pc = 0x43308Cu;
    {
        const bool branch_taken_0x43308c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x43308c) {
            ctx->pc = 0x433220u;
            goto label_433220;
        }
    }
    ctx->pc = 0x433094u;
label_433094:
    // 0x433094: 0xc0d639c  jal         func_358E70
label_433098:
    if (ctx->pc == 0x433098u) {
        ctx->pc = 0x433098u;
            // 0x433098: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x43309Cu;
        goto label_43309c;
    }
    ctx->pc = 0x433094u;
    SET_GPR_U32(ctx, 31, 0x43309Cu);
    ctx->pc = 0x433098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433094u;
            // 0x433098: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43309Cu; }
        if (ctx->pc != 0x43309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43309Cu; }
        if (ctx->pc != 0x43309Cu) { return; }
    }
    ctx->pc = 0x43309Cu;
label_43309c:
    // 0x43309c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_4330a0:
    if (ctx->pc == 0x4330A0u) {
        ctx->pc = 0x4330A4u;
        goto label_4330a4;
    }
    ctx->pc = 0x43309Cu;
    {
        const bool branch_taken_0x43309c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43309c) {
            ctx->pc = 0x433220u;
            goto label_433220;
        }
    }
    ctx->pc = 0x4330A4u;
label_4330a4:
    // 0x4330a4: 0xc0d1c14  jal         func_347050
label_4330a8:
    if (ctx->pc == 0x4330A8u) {
        ctx->pc = 0x4330A8u;
            // 0x4330a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4330ACu;
        goto label_4330ac;
    }
    ctx->pc = 0x4330A4u;
    SET_GPR_U32(ctx, 31, 0x4330ACu);
    ctx->pc = 0x4330A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4330A4u;
            // 0x4330a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330ACu; }
        if (ctx->pc != 0x4330ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330ACu; }
        if (ctx->pc != 0x4330ACu) { return; }
    }
    ctx->pc = 0x4330ACu;
label_4330ac:
    // 0x4330ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4330acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4330b0:
    // 0x4330b0: 0xc04f278  jal         func_13C9E0
label_4330b4:
    if (ctx->pc == 0x4330B4u) {
        ctx->pc = 0x4330B4u;
            // 0x4330b4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4330B8u;
        goto label_4330b8;
    }
    ctx->pc = 0x4330B0u;
    SET_GPR_U32(ctx, 31, 0x4330B8u);
    ctx->pc = 0x4330B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4330B0u;
            // 0x4330b4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330B8u; }
        if (ctx->pc != 0x4330B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330B8u; }
        if (ctx->pc != 0x4330B8u) { return; }
    }
    ctx->pc = 0x4330B8u;
label_4330b8:
    // 0x4330b8: 0xc0d1c10  jal         func_347040
label_4330bc:
    if (ctx->pc == 0x4330BCu) {
        ctx->pc = 0x4330BCu;
            // 0x4330bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4330C0u;
        goto label_4330c0;
    }
    ctx->pc = 0x4330B8u;
    SET_GPR_U32(ctx, 31, 0x4330C0u);
    ctx->pc = 0x4330BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4330B8u;
            // 0x4330bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330C0u; }
        if (ctx->pc != 0x4330C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330C0u; }
        if (ctx->pc != 0x4330C0u) { return; }
    }
    ctx->pc = 0x4330C0u;
label_4330c0:
    // 0x4330c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4330c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4330c4:
    // 0x4330c4: 0xc04ce80  jal         func_133A00
label_4330c8:
    if (ctx->pc == 0x4330C8u) {
        ctx->pc = 0x4330C8u;
            // 0x4330c8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4330CCu;
        goto label_4330cc;
    }
    ctx->pc = 0x4330C4u;
    SET_GPR_U32(ctx, 31, 0x4330CCu);
    ctx->pc = 0x4330C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4330C4u;
            // 0x4330c8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330CCu; }
        if (ctx->pc != 0x4330CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330CCu; }
        if (ctx->pc != 0x4330CCu) { return; }
    }
    ctx->pc = 0x4330CCu;
label_4330cc:
    // 0x4330cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4330ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_4330d0:
    // 0x4330d0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4330d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4330d4:
    // 0x4330d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4330d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4330d8:
    // 0x4330d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4330d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4330dc:
    // 0x4330dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4330dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4330e0:
    // 0x4330e0: 0xc04ce50  jal         func_133940
label_4330e4:
    if (ctx->pc == 0x4330E4u) {
        ctx->pc = 0x4330E4u;
            // 0x4330e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4330E8u;
        goto label_4330e8;
    }
    ctx->pc = 0x4330E0u;
    SET_GPR_U32(ctx, 31, 0x4330E8u);
    ctx->pc = 0x4330E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4330E0u;
            // 0x4330e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330E8u; }
        if (ctx->pc != 0x4330E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330E8u; }
        if (ctx->pc != 0x4330E8u) { return; }
    }
    ctx->pc = 0x4330E8u;
label_4330e8:
    // 0x4330e8: 0x8e6401a0  lw          $a0, 0x1A0($s3)
    ctx->pc = 0x4330e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
label_4330ec:
    // 0x4330ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4330f0:
    if (ctx->pc == 0x4330F0u) {
        ctx->pc = 0x4330F4u;
        goto label_4330f4;
    }
    ctx->pc = 0x4330ECu;
    {
        const bool branch_taken_0x4330ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4330ec) {
            ctx->pc = 0x433100u;
            goto label_433100;
        }
    }
    ctx->pc = 0x4330F4u;
label_4330f4:
    // 0x4330f4: 0xc10bb24  jal         func_42EC90
label_4330f8:
    if (ctx->pc == 0x4330F8u) {
        ctx->pc = 0x4330F8u;
            // 0x4330f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4330FCu;
        goto label_4330fc;
    }
    ctx->pc = 0x4330F4u;
    SET_GPR_U32(ctx, 31, 0x4330FCu);
    ctx->pc = 0x4330F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4330F4u;
            // 0x4330f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EC90u;
    if (runtime->hasFunction(0x42EC90u)) {
        auto targetFn = runtime->lookupFunction(0x42EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330FCu; }
        if (ctx->pc != 0x4330FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EC90_0x42ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4330FCu; }
        if (ctx->pc != 0x4330FCu) { return; }
    }
    ctx->pc = 0x4330FCu;
label_4330fc:
    // 0x4330fc: 0x0  nop
    ctx->pc = 0x4330fcu;
    // NOP
label_433100:
    // 0x433100: 0xc0d4108  jal         func_350420
label_433104:
    if (ctx->pc == 0x433104u) {
        ctx->pc = 0x433108u;
        goto label_433108;
    }
    ctx->pc = 0x433100u;
    SET_GPR_U32(ctx, 31, 0x433108u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433108u; }
        if (ctx->pc != 0x433108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433108u; }
        if (ctx->pc != 0x433108u) { return; }
    }
    ctx->pc = 0x433108u;
label_433108:
    // 0x433108: 0xc0b36b4  jal         func_2CDAD0
label_43310c:
    if (ctx->pc == 0x43310Cu) {
        ctx->pc = 0x43310Cu;
            // 0x43310c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433110u;
        goto label_433110;
    }
    ctx->pc = 0x433108u;
    SET_GPR_U32(ctx, 31, 0x433110u);
    ctx->pc = 0x43310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433108u;
            // 0x43310c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433110u; }
        if (ctx->pc != 0x433110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433110u; }
        if (ctx->pc != 0x433110u) { return; }
    }
    ctx->pc = 0x433110u;
label_433110:
    // 0x433110: 0xc0b9c64  jal         func_2E7190
label_433114:
    if (ctx->pc == 0x433114u) {
        ctx->pc = 0x433114u;
            // 0x433114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433118u;
        goto label_433118;
    }
    ctx->pc = 0x433110u;
    SET_GPR_U32(ctx, 31, 0x433118u);
    ctx->pc = 0x433114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433110u;
            // 0x433114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433118u; }
        if (ctx->pc != 0x433118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433118u; }
        if (ctx->pc != 0x433118u) { return; }
    }
    ctx->pc = 0x433118u;
label_433118:
    // 0x433118: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x433118u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43311c:
    // 0x43311c: 0xc0d4104  jal         func_350410
label_433120:
    if (ctx->pc == 0x433120u) {
        ctx->pc = 0x433120u;
            // 0x433120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433124u;
        goto label_433124;
    }
    ctx->pc = 0x43311Cu;
    SET_GPR_U32(ctx, 31, 0x433124u);
    ctx->pc = 0x433120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43311Cu;
            // 0x433120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433124u; }
        if (ctx->pc != 0x433124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433124u; }
        if (ctx->pc != 0x433124u) { return; }
    }
    ctx->pc = 0x433124u;
label_433124:
    // 0x433124: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x433124u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_433128:
    // 0x433128: 0xc10ccd8  jal         func_433360
label_43312c:
    if (ctx->pc == 0x43312Cu) {
        ctx->pc = 0x43312Cu;
            // 0x43312c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433130u;
        goto label_433130;
    }
    ctx->pc = 0x433128u;
    SET_GPR_U32(ctx, 31, 0x433130u);
    ctx->pc = 0x43312Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433128u;
            // 0x43312c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x433360u;
    if (runtime->hasFunction(0x433360u)) {
        auto targetFn = runtime->lookupFunction(0x433360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433130u; }
        if (ctx->pc != 0x433130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00433360_0x433360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433130u; }
        if (ctx->pc != 0x433130u) { return; }
    }
    ctx->pc = 0x433130u;
label_433130:
    // 0x433130: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x433130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_433134:
    // 0x433134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433138:
    // 0x433138: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x433138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43313c:
    // 0x43313c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x43313cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_433140:
    // 0x433140: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x433140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_433144:
    // 0x433144: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x433144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_433148:
    // 0x433148: 0xc0d40ac  jal         func_3502B0
label_43314c:
    if (ctx->pc == 0x43314Cu) {
        ctx->pc = 0x43314Cu;
            // 0x43314c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433150u;
        goto label_433150;
    }
    ctx->pc = 0x433148u;
    SET_GPR_U32(ctx, 31, 0x433150u);
    ctx->pc = 0x43314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433148u;
            // 0x43314c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433150u; }
        if (ctx->pc != 0x433150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433150u; }
        if (ctx->pc != 0x433150u) { return; }
    }
    ctx->pc = 0x433150u;
label_433150:
    // 0x433150: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x433150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_433154:
    // 0x433154: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_433158:
    if (ctx->pc == 0x433158u) {
        ctx->pc = 0x433158u;
            // 0x433158: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x43315Cu;
        goto label_43315c;
    }
    ctx->pc = 0x433154u;
    {
        const bool branch_taken_0x433154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x433158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433154u;
            // 0x433158: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433154) {
            ctx->pc = 0x433220u;
            goto label_433220;
        }
    }
    ctx->pc = 0x43315Cu;
label_43315c:
    // 0x43315c: 0x8e6401a0  lw          $a0, 0x1A0($s3)
    ctx->pc = 0x43315cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
label_433160:
    // 0x433160: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_433164:
    if (ctx->pc == 0x433164u) {
        ctx->pc = 0x433168u;
        goto label_433168;
    }
    ctx->pc = 0x433160u;
    {
        const bool branch_taken_0x433160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x433160) {
            ctx->pc = 0x4331C8u;
            goto label_4331c8;
        }
    }
    ctx->pc = 0x433168u;
label_433168:
    // 0x433168: 0xc10bb24  jal         func_42EC90
label_43316c:
    if (ctx->pc == 0x43316Cu) {
        ctx->pc = 0x43316Cu;
            // 0x43316c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x433170u;
        goto label_433170;
    }
    ctx->pc = 0x433168u;
    SET_GPR_U32(ctx, 31, 0x433170u);
    ctx->pc = 0x43316Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433168u;
            // 0x43316c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EC90u;
    if (runtime->hasFunction(0x42EC90u)) {
        auto targetFn = runtime->lookupFunction(0x42EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433170u; }
        if (ctx->pc != 0x433170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EC90_0x42ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433170u; }
        if (ctx->pc != 0x433170u) { return; }
    }
    ctx->pc = 0x433170u;
label_433170:
    // 0x433170: 0xc0d1c14  jal         func_347050
label_433174:
    if (ctx->pc == 0x433174u) {
        ctx->pc = 0x433174u;
            // 0x433174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433178u;
        goto label_433178;
    }
    ctx->pc = 0x433170u;
    SET_GPR_U32(ctx, 31, 0x433178u);
    ctx->pc = 0x433174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433170u;
            // 0x433174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433178u; }
        if (ctx->pc != 0x433178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433178u; }
        if (ctx->pc != 0x433178u) { return; }
    }
    ctx->pc = 0x433178u;
label_433178:
    // 0x433178: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x433178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43317c:
    // 0x43317c: 0xc04f278  jal         func_13C9E0
label_433180:
    if (ctx->pc == 0x433180u) {
        ctx->pc = 0x433180u;
            // 0x433180: 0x26640160  addiu       $a0, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->pc = 0x433184u;
        goto label_433184;
    }
    ctx->pc = 0x43317Cu;
    SET_GPR_U32(ctx, 31, 0x433184u);
    ctx->pc = 0x433180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43317Cu;
            // 0x433180: 0x26640160  addiu       $a0, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433184u; }
        if (ctx->pc != 0x433184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433184u; }
        if (ctx->pc != 0x433184u) { return; }
    }
    ctx->pc = 0x433184u;
label_433184:
    // 0x433184: 0x26640160  addiu       $a0, $s3, 0x160
    ctx->pc = 0x433184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
label_433188:
    // 0x433188: 0x2406eaab  addiu       $a2, $zero, -0x1555
    ctx->pc = 0x433188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961835));
label_43318c:
    // 0x43318c: 0xc04cdb0  jal         func_1336C0
label_433190:
    if (ctx->pc == 0x433190u) {
        ctx->pc = 0x433190u;
            // 0x433190: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433194u;
        goto label_433194;
    }
    ctx->pc = 0x43318Cu;
    SET_GPR_U32(ctx, 31, 0x433194u);
    ctx->pc = 0x433190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43318Cu;
            // 0x433190: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433194u; }
        if (ctx->pc != 0x433194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433194u; }
        if (ctx->pc != 0x433194u) { return; }
    }
    ctx->pc = 0x433194u;
label_433194:
    // 0x433194: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x433194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_433198:
    // 0x433198: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x433198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_43319c:
    // 0x43319c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x43319cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4331a0:
    // 0x4331a0: 0x26640160  addiu       $a0, $s3, 0x160
    ctx->pc = 0x4331a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
label_4331a4:
    // 0x4331a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4331a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4331a8:
    // 0x4331a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4331a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4331ac:
    // 0x4331ac: 0xc04ce50  jal         func_133940
label_4331b0:
    if (ctx->pc == 0x4331B0u) {
        ctx->pc = 0x4331B0u;
            // 0x4331b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4331B4u;
        goto label_4331b4;
    }
    ctx->pc = 0x4331ACu;
    SET_GPR_U32(ctx, 31, 0x4331B4u);
    ctx->pc = 0x4331B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4331ACu;
            // 0x4331b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331B4u; }
        if (ctx->pc != 0x4331B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331B4u; }
        if (ctx->pc != 0x4331B4u) { return; }
    }
    ctx->pc = 0x4331B4u;
label_4331b4:
    // 0x4331b4: 0xc0d1c10  jal         func_347040
label_4331b8:
    if (ctx->pc == 0x4331B8u) {
        ctx->pc = 0x4331B8u;
            // 0x4331b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4331BCu;
        goto label_4331bc;
    }
    ctx->pc = 0x4331B4u;
    SET_GPR_U32(ctx, 31, 0x4331BCu);
    ctx->pc = 0x4331B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4331B4u;
            // 0x4331b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331BCu; }
        if (ctx->pc != 0x4331BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331BCu; }
        if (ctx->pc != 0x4331BCu) { return; }
    }
    ctx->pc = 0x4331BCu;
label_4331bc:
    // 0x4331bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4331bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4331c0:
    // 0x4331c0: 0xc04ce80  jal         func_133A00
label_4331c4:
    if (ctx->pc == 0x4331C4u) {
        ctx->pc = 0x4331C4u;
            // 0x4331c4: 0x26640160  addiu       $a0, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->pc = 0x4331C8u;
        goto label_4331c8;
    }
    ctx->pc = 0x4331C0u;
    SET_GPR_U32(ctx, 31, 0x4331C8u);
    ctx->pc = 0x4331C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4331C0u;
            // 0x4331c4: 0x26640160  addiu       $a0, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331C8u; }
        if (ctx->pc != 0x4331C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331C8u; }
        if (ctx->pc != 0x4331C8u) { return; }
    }
    ctx->pc = 0x4331C8u;
label_4331c8:
    // 0x4331c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4331c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4331cc:
    // 0x4331cc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x4331ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4331d0:
    // 0x4331d0: 0xc10ccb0  jal         func_4332C0
label_4331d4:
    if (ctx->pc == 0x4331D4u) {
        ctx->pc = 0x4331D4u;
            // 0x4331d4: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x4331D8u;
        goto label_4331d8;
    }
    ctx->pc = 0x4331D0u;
    SET_GPR_U32(ctx, 31, 0x4331D8u);
    ctx->pc = 0x4331D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4331D0u;
            // 0x4331d4: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4332C0u;
    if (runtime->hasFunction(0x4332C0u)) {
        auto targetFn = runtime->lookupFunction(0x4332C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331D8u; }
        if (ctx->pc != 0x4331D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004332C0_0x4332c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331D8u; }
        if (ctx->pc != 0x4331D8u) { return; }
    }
    ctx->pc = 0x4331D8u;
label_4331d8:
    // 0x4331d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4331d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4331dc:
    // 0x4331dc: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x4331dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_4331e0:
    // 0x4331e0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4331e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4331e4:
    // 0x4331e4: 0xc04e4a4  jal         func_139290
label_4331e8:
    if (ctx->pc == 0x4331E8u) {
        ctx->pc = 0x4331E8u;
            // 0x4331e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4331ECu;
        goto label_4331ec;
    }
    ctx->pc = 0x4331E4u;
    SET_GPR_U32(ctx, 31, 0x4331ECu);
    ctx->pc = 0x4331E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4331E4u;
            // 0x4331e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331ECu; }
        if (ctx->pc != 0x4331ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331ECu; }
        if (ctx->pc != 0x4331ECu) { return; }
    }
    ctx->pc = 0x4331ECu;
label_4331ec:
    // 0x4331ec: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x4331ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4331f0:
    // 0x4331f0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x4331f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4331f4:
    // 0x4331f4: 0xc04cd60  jal         func_133580
label_4331f8:
    if (ctx->pc == 0x4331F8u) {
        ctx->pc = 0x4331F8u;
            // 0x4331f8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4331FCu;
        goto label_4331fc;
    }
    ctx->pc = 0x4331F4u;
    SET_GPR_U32(ctx, 31, 0x4331FCu);
    ctx->pc = 0x4331F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4331F4u;
            // 0x4331f8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331FCu; }
        if (ctx->pc != 0x4331FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4331FCu; }
        if (ctx->pc != 0x4331FCu) { return; }
    }
    ctx->pc = 0x4331FCu;
label_4331fc:
    // 0x4331fc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4331fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_433200:
    // 0x433200: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x433200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_433204:
    // 0x433204: 0x320f809  jalr        $t9
label_433208:
    if (ctx->pc == 0x433208u) {
        ctx->pc = 0x433208u;
            // 0x433208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43320Cu;
        goto label_43320c;
    }
    ctx->pc = 0x433204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43320Cu);
        ctx->pc = 0x433208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433204u;
            // 0x433208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43320Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43320Cu; }
            if (ctx->pc != 0x43320Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43320Cu;
label_43320c:
    // 0x43320c: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x43320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_433210:
    // 0x433210: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x433210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_433214:
    // 0x433214: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x433214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_433218:
    // 0x433218: 0xc054fd4  jal         func_153F50
label_43321c:
    if (ctx->pc == 0x43321Cu) {
        ctx->pc = 0x43321Cu;
            // 0x43321c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433220u;
        goto label_433220;
    }
    ctx->pc = 0x433218u;
    SET_GPR_U32(ctx, 31, 0x433220u);
    ctx->pc = 0x43321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433218u;
            // 0x43321c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433220u; }
        if (ctx->pc != 0x433220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433220u; }
        if (ctx->pc != 0x433220u) { return; }
    }
    ctx->pc = 0x433220u;
label_433220:
    // 0x433220: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x433220u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_433224:
    // 0x433224: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x433224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_433228:
    // 0x433228: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
label_43322c:
    if (ctx->pc == 0x43322Cu) {
        ctx->pc = 0x43322Cu;
            // 0x43322c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x433230u;
        goto label_433230;
    }
    ctx->pc = 0x433228u;
    {
        const bool branch_taken_0x433228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43322Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433228u;
            // 0x43322c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433228) {
            ctx->pc = 0x433064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_433064;
        }
    }
    ctx->pc = 0x433230u;
label_433230:
    // 0x433230: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x433230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_433234:
    // 0x433234: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x433234u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_433238:
    // 0x433238: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_43323c:
    if (ctx->pc == 0x43323Cu) {
        ctx->pc = 0x43323Cu;
            // 0x43323c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x433240u;
        goto label_433240;
    }
    ctx->pc = 0x433238u;
    {
        const bool branch_taken_0x433238 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x43323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433238u;
            // 0x43323c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433238) {
            ctx->pc = 0x433260u;
            goto label_433260;
        }
    }
    ctx->pc = 0x433240u;
label_433240:
    // 0x433240: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x433240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_433244:
    // 0x433244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433248:
    // 0x433248: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x433248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_43324c:
    // 0x43324c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43324cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_433250:
    // 0x433250: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x433250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_433254:
    // 0x433254: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x433254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_433258:
    // 0x433258: 0xc055ea8  jal         func_157AA0
label_43325c:
    if (ctx->pc == 0x43325Cu) {
        ctx->pc = 0x43325Cu;
            // 0x43325c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433260u;
        goto label_433260;
    }
    ctx->pc = 0x433258u;
    SET_GPR_U32(ctx, 31, 0x433260u);
    ctx->pc = 0x43325Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433258u;
            // 0x43325c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433260u; }
        if (ctx->pc != 0x433260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433260u; }
        if (ctx->pc != 0x433260u) { return; }
    }
    ctx->pc = 0x433260u;
label_433260:
    // 0x433260: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x433260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_433264:
    // 0x433264: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_433268:
    if (ctx->pc == 0x433268u) {
        ctx->pc = 0x43326Cu;
        goto label_43326c;
    }
    ctx->pc = 0x433264u;
    {
        const bool branch_taken_0x433264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x433264) {
            ctx->pc = 0x433284u;
            goto label_433284;
        }
    }
    ctx->pc = 0x43326Cu;
label_43326c:
    // 0x43326c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433270:
    // 0x433270: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x433270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_433274:
    // 0x433274: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x433274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_433278:
    // 0x433278: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x433278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_43327c:
    // 0x43327c: 0x320f809  jalr        $t9
label_433280:
    if (ctx->pc == 0x433280u) {
        ctx->pc = 0x433284u;
        goto label_433284;
    }
    ctx->pc = 0x43327Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x433284u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x433284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x433284u; }
            if (ctx->pc != 0x433284u) { return; }
        }
        }
    }
    ctx->pc = 0x433284u;
label_433284:
    // 0x433284: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x433284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_433288:
    // 0x433288: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x433288u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_43328c:
    // 0x43328c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x43328cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_433290:
    // 0x433290: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x433290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_433294:
    // 0x433294: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x433294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_433298:
    // 0x433298: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x433298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43329c:
    // 0x43329c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43329cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4332a0:
    // 0x4332a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4332a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4332a4:
    // 0x4332a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4332a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4332a8:
    // 0x4332a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4332a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4332ac:
    // 0x4332ac: 0x3e00008  jr          $ra
label_4332b0:
    if (ctx->pc == 0x4332B0u) {
        ctx->pc = 0x4332B0u;
            // 0x4332b0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4332B4u;
        goto label_4332b4;
    }
    ctx->pc = 0x4332ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4332B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4332ACu;
            // 0x4332b0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4332B4u;
label_4332b4:
    // 0x4332b4: 0x0  nop
    ctx->pc = 0x4332b4u;
    // NOP
label_4332b8:
    // 0x4332b8: 0x0  nop
    ctx->pc = 0x4332b8u;
    // NOP
label_4332bc:
    // 0x4332bc: 0x0  nop
    ctx->pc = 0x4332bcu;
    // NOP
}
