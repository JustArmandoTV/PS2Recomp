#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00456F80
// Address: 0x456f80 - 0x457360
void sub_00456F80_0x456f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456F80_0x456f80");
#endif

    switch (ctx->pc) {
        case 0x456f80u: goto label_456f80;
        case 0x456f84u: goto label_456f84;
        case 0x456f88u: goto label_456f88;
        case 0x456f8cu: goto label_456f8c;
        case 0x456f90u: goto label_456f90;
        case 0x456f94u: goto label_456f94;
        case 0x456f98u: goto label_456f98;
        case 0x456f9cu: goto label_456f9c;
        case 0x456fa0u: goto label_456fa0;
        case 0x456fa4u: goto label_456fa4;
        case 0x456fa8u: goto label_456fa8;
        case 0x456facu: goto label_456fac;
        case 0x456fb0u: goto label_456fb0;
        case 0x456fb4u: goto label_456fb4;
        case 0x456fb8u: goto label_456fb8;
        case 0x456fbcu: goto label_456fbc;
        case 0x456fc0u: goto label_456fc0;
        case 0x456fc4u: goto label_456fc4;
        case 0x456fc8u: goto label_456fc8;
        case 0x456fccu: goto label_456fcc;
        case 0x456fd0u: goto label_456fd0;
        case 0x456fd4u: goto label_456fd4;
        case 0x456fd8u: goto label_456fd8;
        case 0x456fdcu: goto label_456fdc;
        case 0x456fe0u: goto label_456fe0;
        case 0x456fe4u: goto label_456fe4;
        case 0x456fe8u: goto label_456fe8;
        case 0x456fecu: goto label_456fec;
        case 0x456ff0u: goto label_456ff0;
        case 0x456ff4u: goto label_456ff4;
        case 0x456ff8u: goto label_456ff8;
        case 0x456ffcu: goto label_456ffc;
        case 0x457000u: goto label_457000;
        case 0x457004u: goto label_457004;
        case 0x457008u: goto label_457008;
        case 0x45700cu: goto label_45700c;
        case 0x457010u: goto label_457010;
        case 0x457014u: goto label_457014;
        case 0x457018u: goto label_457018;
        case 0x45701cu: goto label_45701c;
        case 0x457020u: goto label_457020;
        case 0x457024u: goto label_457024;
        case 0x457028u: goto label_457028;
        case 0x45702cu: goto label_45702c;
        case 0x457030u: goto label_457030;
        case 0x457034u: goto label_457034;
        case 0x457038u: goto label_457038;
        case 0x45703cu: goto label_45703c;
        case 0x457040u: goto label_457040;
        case 0x457044u: goto label_457044;
        case 0x457048u: goto label_457048;
        case 0x45704cu: goto label_45704c;
        case 0x457050u: goto label_457050;
        case 0x457054u: goto label_457054;
        case 0x457058u: goto label_457058;
        case 0x45705cu: goto label_45705c;
        case 0x457060u: goto label_457060;
        case 0x457064u: goto label_457064;
        case 0x457068u: goto label_457068;
        case 0x45706cu: goto label_45706c;
        case 0x457070u: goto label_457070;
        case 0x457074u: goto label_457074;
        case 0x457078u: goto label_457078;
        case 0x45707cu: goto label_45707c;
        case 0x457080u: goto label_457080;
        case 0x457084u: goto label_457084;
        case 0x457088u: goto label_457088;
        case 0x45708cu: goto label_45708c;
        case 0x457090u: goto label_457090;
        case 0x457094u: goto label_457094;
        case 0x457098u: goto label_457098;
        case 0x45709cu: goto label_45709c;
        case 0x4570a0u: goto label_4570a0;
        case 0x4570a4u: goto label_4570a4;
        case 0x4570a8u: goto label_4570a8;
        case 0x4570acu: goto label_4570ac;
        case 0x4570b0u: goto label_4570b0;
        case 0x4570b4u: goto label_4570b4;
        case 0x4570b8u: goto label_4570b8;
        case 0x4570bcu: goto label_4570bc;
        case 0x4570c0u: goto label_4570c0;
        case 0x4570c4u: goto label_4570c4;
        case 0x4570c8u: goto label_4570c8;
        case 0x4570ccu: goto label_4570cc;
        case 0x4570d0u: goto label_4570d0;
        case 0x4570d4u: goto label_4570d4;
        case 0x4570d8u: goto label_4570d8;
        case 0x4570dcu: goto label_4570dc;
        case 0x4570e0u: goto label_4570e0;
        case 0x4570e4u: goto label_4570e4;
        case 0x4570e8u: goto label_4570e8;
        case 0x4570ecu: goto label_4570ec;
        case 0x4570f0u: goto label_4570f0;
        case 0x4570f4u: goto label_4570f4;
        case 0x4570f8u: goto label_4570f8;
        case 0x4570fcu: goto label_4570fc;
        case 0x457100u: goto label_457100;
        case 0x457104u: goto label_457104;
        case 0x457108u: goto label_457108;
        case 0x45710cu: goto label_45710c;
        case 0x457110u: goto label_457110;
        case 0x457114u: goto label_457114;
        case 0x457118u: goto label_457118;
        case 0x45711cu: goto label_45711c;
        case 0x457120u: goto label_457120;
        case 0x457124u: goto label_457124;
        case 0x457128u: goto label_457128;
        case 0x45712cu: goto label_45712c;
        case 0x457130u: goto label_457130;
        case 0x457134u: goto label_457134;
        case 0x457138u: goto label_457138;
        case 0x45713cu: goto label_45713c;
        case 0x457140u: goto label_457140;
        case 0x457144u: goto label_457144;
        case 0x457148u: goto label_457148;
        case 0x45714cu: goto label_45714c;
        case 0x457150u: goto label_457150;
        case 0x457154u: goto label_457154;
        case 0x457158u: goto label_457158;
        case 0x45715cu: goto label_45715c;
        case 0x457160u: goto label_457160;
        case 0x457164u: goto label_457164;
        case 0x457168u: goto label_457168;
        case 0x45716cu: goto label_45716c;
        case 0x457170u: goto label_457170;
        case 0x457174u: goto label_457174;
        case 0x457178u: goto label_457178;
        case 0x45717cu: goto label_45717c;
        case 0x457180u: goto label_457180;
        case 0x457184u: goto label_457184;
        case 0x457188u: goto label_457188;
        case 0x45718cu: goto label_45718c;
        case 0x457190u: goto label_457190;
        case 0x457194u: goto label_457194;
        case 0x457198u: goto label_457198;
        case 0x45719cu: goto label_45719c;
        case 0x4571a0u: goto label_4571a0;
        case 0x4571a4u: goto label_4571a4;
        case 0x4571a8u: goto label_4571a8;
        case 0x4571acu: goto label_4571ac;
        case 0x4571b0u: goto label_4571b0;
        case 0x4571b4u: goto label_4571b4;
        case 0x4571b8u: goto label_4571b8;
        case 0x4571bcu: goto label_4571bc;
        case 0x4571c0u: goto label_4571c0;
        case 0x4571c4u: goto label_4571c4;
        case 0x4571c8u: goto label_4571c8;
        case 0x4571ccu: goto label_4571cc;
        case 0x4571d0u: goto label_4571d0;
        case 0x4571d4u: goto label_4571d4;
        case 0x4571d8u: goto label_4571d8;
        case 0x4571dcu: goto label_4571dc;
        case 0x4571e0u: goto label_4571e0;
        case 0x4571e4u: goto label_4571e4;
        case 0x4571e8u: goto label_4571e8;
        case 0x4571ecu: goto label_4571ec;
        case 0x4571f0u: goto label_4571f0;
        case 0x4571f4u: goto label_4571f4;
        case 0x4571f8u: goto label_4571f8;
        case 0x4571fcu: goto label_4571fc;
        case 0x457200u: goto label_457200;
        case 0x457204u: goto label_457204;
        case 0x457208u: goto label_457208;
        case 0x45720cu: goto label_45720c;
        case 0x457210u: goto label_457210;
        case 0x457214u: goto label_457214;
        case 0x457218u: goto label_457218;
        case 0x45721cu: goto label_45721c;
        case 0x457220u: goto label_457220;
        case 0x457224u: goto label_457224;
        case 0x457228u: goto label_457228;
        case 0x45722cu: goto label_45722c;
        case 0x457230u: goto label_457230;
        case 0x457234u: goto label_457234;
        case 0x457238u: goto label_457238;
        case 0x45723cu: goto label_45723c;
        case 0x457240u: goto label_457240;
        case 0x457244u: goto label_457244;
        case 0x457248u: goto label_457248;
        case 0x45724cu: goto label_45724c;
        case 0x457250u: goto label_457250;
        case 0x457254u: goto label_457254;
        case 0x457258u: goto label_457258;
        case 0x45725cu: goto label_45725c;
        case 0x457260u: goto label_457260;
        case 0x457264u: goto label_457264;
        case 0x457268u: goto label_457268;
        case 0x45726cu: goto label_45726c;
        case 0x457270u: goto label_457270;
        case 0x457274u: goto label_457274;
        case 0x457278u: goto label_457278;
        case 0x45727cu: goto label_45727c;
        case 0x457280u: goto label_457280;
        case 0x457284u: goto label_457284;
        case 0x457288u: goto label_457288;
        case 0x45728cu: goto label_45728c;
        case 0x457290u: goto label_457290;
        case 0x457294u: goto label_457294;
        case 0x457298u: goto label_457298;
        case 0x45729cu: goto label_45729c;
        case 0x4572a0u: goto label_4572a0;
        case 0x4572a4u: goto label_4572a4;
        case 0x4572a8u: goto label_4572a8;
        case 0x4572acu: goto label_4572ac;
        case 0x4572b0u: goto label_4572b0;
        case 0x4572b4u: goto label_4572b4;
        case 0x4572b8u: goto label_4572b8;
        case 0x4572bcu: goto label_4572bc;
        case 0x4572c0u: goto label_4572c0;
        case 0x4572c4u: goto label_4572c4;
        case 0x4572c8u: goto label_4572c8;
        case 0x4572ccu: goto label_4572cc;
        case 0x4572d0u: goto label_4572d0;
        case 0x4572d4u: goto label_4572d4;
        case 0x4572d8u: goto label_4572d8;
        case 0x4572dcu: goto label_4572dc;
        case 0x4572e0u: goto label_4572e0;
        case 0x4572e4u: goto label_4572e4;
        case 0x4572e8u: goto label_4572e8;
        case 0x4572ecu: goto label_4572ec;
        case 0x4572f0u: goto label_4572f0;
        case 0x4572f4u: goto label_4572f4;
        case 0x4572f8u: goto label_4572f8;
        case 0x4572fcu: goto label_4572fc;
        case 0x457300u: goto label_457300;
        case 0x457304u: goto label_457304;
        case 0x457308u: goto label_457308;
        case 0x45730cu: goto label_45730c;
        case 0x457310u: goto label_457310;
        case 0x457314u: goto label_457314;
        case 0x457318u: goto label_457318;
        case 0x45731cu: goto label_45731c;
        case 0x457320u: goto label_457320;
        case 0x457324u: goto label_457324;
        case 0x457328u: goto label_457328;
        case 0x45732cu: goto label_45732c;
        case 0x457330u: goto label_457330;
        case 0x457334u: goto label_457334;
        case 0x457338u: goto label_457338;
        case 0x45733cu: goto label_45733c;
        case 0x457340u: goto label_457340;
        case 0x457344u: goto label_457344;
        case 0x457348u: goto label_457348;
        case 0x45734cu: goto label_45734c;
        case 0x457350u: goto label_457350;
        case 0x457354u: goto label_457354;
        case 0x457358u: goto label_457358;
        case 0x45735cu: goto label_45735c;
        default: break;
    }

    ctx->pc = 0x456f80u;

label_456f80:
    // 0x456f80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x456f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_456f84:
    // 0x456f84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x456f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_456f88:
    // 0x456f88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x456f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_456f8c:
    // 0x456f8c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x456f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_456f90:
    // 0x456f90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x456f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_456f94:
    // 0x456f94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x456f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_456f98:
    // 0x456f98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x456f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_456f9c:
    // 0x456f9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x456f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_456fa0:
    // 0x456fa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_456fa4:
    // 0x456fa4: 0x26720078  addiu       $s2, $s3, 0x78
    ctx->pc = 0x456fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_456fa8:
    // 0x456fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456fac:
    // 0x456fac: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x456facu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_456fb0:
    // 0x456fb0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x456fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_456fb4:
    // 0x456fb4: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x456fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_456fb8:
    // 0x456fb8: 0x24420444  addiu       $v0, $v0, 0x444
    ctx->pc = 0x456fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1092));
label_456fbc:
    // 0x456fbc: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x456fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_456fc0:
    // 0x456fc0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_456fc4:
    if (ctx->pc == 0x456FC4u) {
        ctx->pc = 0x456FC4u;
            // 0x456fc4: 0xac820078  sw          $v0, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
        ctx->pc = 0x456FC8u;
        goto label_456fc8;
    }
    ctx->pc = 0x456FC0u;
    {
        const bool branch_taken_0x456fc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x456FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456FC0u;
            // 0x456fc4: 0xac820078  sw          $v0, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456fc0) {
            ctx->pc = 0x456FD4u;
            goto label_456fd4;
        }
    }
    ctx->pc = 0x456FC8u;
label_456fc8:
    // 0x456fc8: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x456fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_456fcc:
    // 0x456fcc: 0x24428001  addiu       $v0, $v0, -0x7FFF
    ctx->pc = 0x456fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934529));
label_456fd0:
    // 0x456fd0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x456fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_456fd4:
    // 0x456fd4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x456fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_456fd8:
    // 0x456fd8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x456fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_456fdc:
    // 0x456fdc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x456fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456fe0:
    // 0x456fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x456fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_456fe4:
    // 0x456fe4: 0x0  nop
    ctx->pc = 0x456fe4u;
    // NOP
label_456fe8:
    // 0x456fe8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x456fe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_456fec:
    // 0x456fec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x456fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_456ff0:
    // 0x456ff0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_456ff4:
    if (ctx->pc == 0x456FF4u) {
        ctx->pc = 0x456FF4u;
            // 0x456ff4: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x456FF8u;
        goto label_456ff8;
    }
    ctx->pc = 0x456FF0u;
    {
        const bool branch_taken_0x456ff0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x456FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456FF0u;
            // 0x456ff4: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x456ff0) {
            ctx->pc = 0x457000u;
            goto label_457000;
        }
    }
    ctx->pc = 0x456FF8u;
label_456ff8:
    // 0x456ff8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x456ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_456ffc:
    // 0x456ffc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x456ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_457000:
    // 0x457000: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x457000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_457004:
    // 0x457004: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x457004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_457008:
    // 0x457008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x457008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45700c:
    // 0x45700c: 0x0  nop
    ctx->pc = 0x45700cu;
    // NOP
label_457010:
    // 0x457010: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x457010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_457014:
    // 0x457014: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_457018:
    if (ctx->pc == 0x457018u) {
        ctx->pc = 0x457018u;
            // 0x457018: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x45701Cu;
        goto label_45701c;
    }
    ctx->pc = 0x457014u;
    {
        const bool branch_taken_0x457014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x457014) {
            ctx->pc = 0x457018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457014u;
            // 0x457018: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x457024u;
            goto label_457024;
        }
    }
    ctx->pc = 0x45701Cu;
label_45701c:
    // 0x45701c: 0x10000003  b           . + 4 + (0x3 << 2)
label_457020:
    if (ctx->pc == 0x457020u) {
        ctx->pc = 0x457020u;
            // 0x457020: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->pc = 0x457024u;
        goto label_457024;
    }
    ctx->pc = 0x45701Cu;
    {
        const bool branch_taken_0x45701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45701Cu;
            // 0x457020: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45701c) {
            ctx->pc = 0x45702Cu;
            goto label_45702c;
        }
    }
    ctx->pc = 0x457024u;
label_457024:
    // 0x457024: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x457024u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_457028:
    // 0x457028: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x457028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_45702c:
    // 0x45702c: 0x92460014  lbu         $a2, 0x14($s2)
    ctx->pc = 0x45702cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_457030:
    // 0x457030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457034:
    // 0x457034: 0x92440018  lbu         $a0, 0x18($s2)
    ctx->pc = 0x457034u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_457038:
    // 0x457038: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x457038u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_45703c:
    // 0x45703c: 0x92480015  lbu         $t0, 0x15($s2)
    ctx->pc = 0x45703cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_457040:
    // 0x457040: 0x92430016  lbu         $v1, 0x16($s2)
    ctx->pc = 0x457040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_457044:
    // 0x457044: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x457044u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_457048:
    // 0x457048: 0x92420017  lbu         $v0, 0x17($s2)
    ctx->pc = 0x457048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 23)));
label_45704c:
    // 0x45704c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x45704cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457050:
    // 0x457050: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_457054:
    if (ctx->pc == 0x457054u) {
        ctx->pc = 0x457054u;
            // 0x457054: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457058u;
        goto label_457058;
    }
    ctx->pc = 0x457050u;
    {
        const bool branch_taken_0x457050 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x457054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457050u;
            // 0x457054: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457050) {
            ctx->pc = 0x457064u;
            goto label_457064;
        }
    }
    ctx->pc = 0x457058u;
label_457058:
    // 0x457058: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x457058u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45705c:
    // 0x45705c: 0x10000008  b           . + 4 + (0x8 << 2)
label_457060:
    if (ctx->pc == 0x457060u) {
        ctx->pc = 0x457060u;
            // 0x457060: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457064u;
        goto label_457064;
    }
    ctx->pc = 0x45705Cu;
    {
        const bool branch_taken_0x45705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45705Cu;
            // 0x457060: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45705c) {
            ctx->pc = 0x457080u;
            goto label_457080;
        }
    }
    ctx->pc = 0x457064u;
label_457064:
    // 0x457064: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x457064u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_457068:
    // 0x457068: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x457068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_45706c:
    // 0x45706c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x45706cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_457070:
    // 0x457070: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x457070u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457074:
    // 0x457074: 0x0  nop
    ctx->pc = 0x457074u;
    // NOP
label_457078:
    // 0x457078: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x457078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_45707c:
    // 0x45707c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x45707cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_457080:
    // 0x457080: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x457080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457084:
    // 0x457084: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x457084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_457088:
    // 0x457088: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x457088u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_45708c:
    // 0x45708c: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x45708cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_457090:
    // 0x457090: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x457090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457094:
    // 0x457094: 0x0  nop
    ctx->pc = 0x457094u;
    // NOP
label_457098:
    // 0x457098: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x457098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45709c:
    // 0x45709c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4570a0:
    if (ctx->pc == 0x4570A0u) {
        ctx->pc = 0x4570A0u;
            // 0x4570a0: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4570A4u;
        goto label_4570a4;
    }
    ctx->pc = 0x45709Cu;
    {
        const bool branch_taken_0x45709c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45709c) {
            ctx->pc = 0x4570A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45709Cu;
            // 0x4570a0: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4570B4u;
            goto label_4570b4;
        }
    }
    ctx->pc = 0x4570A4u;
label_4570a4:
    // 0x4570a4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4570a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4570a8:
    // 0x4570a8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4570a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4570ac:
    // 0x4570ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_4570b0:
    if (ctx->pc == 0x4570B0u) {
        ctx->pc = 0x4570B0u;
            // 0x4570b0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4570B4u;
        goto label_4570b4;
    }
    ctx->pc = 0x4570ACu;
    {
        const bool branch_taken_0x4570ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4570B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4570ACu;
            // 0x4570b0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4570ac) {
            ctx->pc = 0x4570CCu;
            goto label_4570cc;
        }
    }
    ctx->pc = 0x4570B4u;
label_4570b4:
    // 0x4570b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4570b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4570b8:
    // 0x4570b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4570b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4570bc:
    // 0x4570bc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4570bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4570c0:
    // 0x4570c0: 0x0  nop
    ctx->pc = 0x4570c0u;
    // NOP
label_4570c4:
    // 0x4570c4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4570c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4570c8:
    // 0x4570c8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4570c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4570cc:
    // 0x4570cc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4570ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4570d0:
    // 0x4570d0: 0x92450019  lbu         $a1, 0x19($s2)
    ctx->pc = 0x4570d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
label_4570d4:
    // 0x4570d4: 0x43e00  sll         $a3, $a0, 24
    ctx->pc = 0x4570d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_4570d8:
    // 0x4570d8: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x4570d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4570dc:
    // 0x4570dc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x4570dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4570e0:
    // 0x4570e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4570e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4570e4:
    // 0x4570e4: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
label_4570e8:
    if (ctx->pc == 0x4570E8u) {
        ctx->pc = 0x4570E8u;
            // 0x4570e8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4570ECu;
        goto label_4570ec;
    }
    ctx->pc = 0x4570E4u;
    {
        const bool branch_taken_0x4570e4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x4570E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4570E4u;
            // 0x4570e8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4570e4) {
            ctx->pc = 0x4570F8u;
            goto label_4570f8;
        }
    }
    ctx->pc = 0x4570ECu;
label_4570ec:
    // 0x4570ec: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x4570ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4570f0:
    // 0x4570f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4570f4:
    if (ctx->pc == 0x4570F4u) {
        ctx->pc = 0x4570F4u;
            // 0x4570f4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4570F8u;
        goto label_4570f8;
    }
    ctx->pc = 0x4570F0u;
    {
        const bool branch_taken_0x4570f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4570F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4570F0u;
            // 0x4570f4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4570f0) {
            ctx->pc = 0x457114u;
            goto label_457114;
        }
    }
    ctx->pc = 0x4570F8u;
label_4570f8:
    // 0x4570f8: 0x82842  srl         $a1, $t0, 1
    ctx->pc = 0x4570f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_4570fc:
    // 0x4570fc: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x4570fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_457100:
    // 0x457100: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x457100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_457104:
    // 0x457104: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x457104u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457108:
    // 0x457108: 0x0  nop
    ctx->pc = 0x457108u;
    // NOP
label_45710c:
    // 0x45710c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x45710cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_457110:
    // 0x457110: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x457110u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_457114:
    // 0x457114: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x457114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457118:
    // 0x457118: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x457118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_45711c:
    // 0x45711c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45711cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_457120:
    // 0x457120: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x457120u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_457124:
    // 0x457124: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x457124u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457128:
    // 0x457128: 0x0  nop
    ctx->pc = 0x457128u;
    // NOP
label_45712c:
    // 0x45712c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x45712cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_457130:
    // 0x457130: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_457134:
    if (ctx->pc == 0x457134u) {
        ctx->pc = 0x457134u;
            // 0x457134: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x457138u;
        goto label_457138;
    }
    ctx->pc = 0x457130u;
    {
        const bool branch_taken_0x457130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x457130) {
            ctx->pc = 0x457134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457130u;
            // 0x457134: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x457148u;
            goto label_457148;
        }
    }
    ctx->pc = 0x457138u;
label_457138:
    // 0x457138: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x457138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_45713c:
    // 0x45713c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x45713cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_457140:
    // 0x457140: 0x10000007  b           . + 4 + (0x7 << 2)
label_457144:
    if (ctx->pc == 0x457144u) {
        ctx->pc = 0x457144u;
            // 0x457144: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x457148u;
        goto label_457148;
    }
    ctx->pc = 0x457140u;
    {
        const bool branch_taken_0x457140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457140u;
            // 0x457144: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x457140) {
            ctx->pc = 0x457160u;
            goto label_457160;
        }
    }
    ctx->pc = 0x457148u;
label_457148:
    // 0x457148: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x457148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_45714c:
    // 0x45714c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45714cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_457150:
    // 0x457150: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x457150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_457154:
    // 0x457154: 0x0  nop
    ctx->pc = 0x457154u;
    // NOP
label_457158:
    // 0x457158: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x457158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_45715c:
    // 0x45715c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x45715cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_457160:
    // 0x457160: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x457160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_457164:
    // 0x457164: 0x9245001a  lbu         $a1, 0x1A($s2)
    ctx->pc = 0x457164u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
label_457168:
    // 0x457168: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x457168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_45716c:
    // 0x45716c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x45716cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_457170:
    // 0x457170: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x457170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_457174:
    // 0x457174: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x457174u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_457178:
    // 0x457178: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x457178u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45717c:
    // 0x45717c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_457180:
    if (ctx->pc == 0x457180u) {
        ctx->pc = 0x457180u;
            // 0x457180: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457184u;
        goto label_457184;
    }
    ctx->pc = 0x45717Cu;
    {
        const bool branch_taken_0x45717c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x457180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45717Cu;
            // 0x457180: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45717c) {
            ctx->pc = 0x457190u;
            goto label_457190;
        }
    }
    ctx->pc = 0x457184u;
label_457184:
    // 0x457184: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x457184u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457188:
    // 0x457188: 0x10000008  b           . + 4 + (0x8 << 2)
label_45718c:
    if (ctx->pc == 0x45718Cu) {
        ctx->pc = 0x45718Cu;
            // 0x45718c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457190u;
        goto label_457190;
    }
    ctx->pc = 0x457188u;
    {
        const bool branch_taken_0x457188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457188u;
            // 0x45718c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457188) {
            ctx->pc = 0x4571ACu;
            goto label_4571ac;
        }
    }
    ctx->pc = 0x457190u;
label_457190:
    // 0x457190: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x457190u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_457194:
    // 0x457194: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x457194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_457198:
    // 0x457198: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x457198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_45719c:
    // 0x45719c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x45719cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4571a0:
    // 0x4571a0: 0x0  nop
    ctx->pc = 0x4571a0u;
    // NOP
label_4571a4:
    // 0x4571a4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x4571a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4571a8:
    // 0x4571a8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4571a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4571ac:
    // 0x4571ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4571acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4571b0:
    // 0x4571b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4571b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4571b4:
    // 0x4571b4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4571b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4571b8:
    // 0x4571b8: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x4571b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_4571bc:
    // 0x4571bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4571bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4571c0:
    // 0x4571c0: 0x0  nop
    ctx->pc = 0x4571c0u;
    // NOP
label_4571c4:
    // 0x4571c4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x4571c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4571c8:
    // 0x4571c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4571cc:
    if (ctx->pc == 0x4571CCu) {
        ctx->pc = 0x4571CCu;
            // 0x4571cc: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4571D0u;
        goto label_4571d0;
    }
    ctx->pc = 0x4571C8u;
    {
        const bool branch_taken_0x4571c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4571c8) {
            ctx->pc = 0x4571CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4571C8u;
            // 0x4571cc: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4571E0u;
            goto label_4571e0;
        }
    }
    ctx->pc = 0x4571D0u;
label_4571d0:
    // 0x4571d0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4571d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4571d4:
    // 0x4571d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4571d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4571d8:
    // 0x4571d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4571dc:
    if (ctx->pc == 0x4571DCu) {
        ctx->pc = 0x4571DCu;
            // 0x4571dc: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4571E0u;
        goto label_4571e0;
    }
    ctx->pc = 0x4571D8u;
    {
        const bool branch_taken_0x4571d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4571DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4571D8u;
            // 0x4571dc: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4571d8) {
            ctx->pc = 0x4571F8u;
            goto label_4571f8;
        }
    }
    ctx->pc = 0x4571E0u;
label_4571e0:
    // 0x4571e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4571e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4571e4:
    // 0x4571e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4571e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4571e8:
    // 0x4571e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4571e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4571ec:
    // 0x4571ec: 0x0  nop
    ctx->pc = 0x4571ecu;
    // NOP
label_4571f0:
    // 0x4571f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4571f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4571f4:
    // 0x4571f4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4571f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4571f8:
    // 0x4571f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x4571f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4571fc:
    // 0x4571fc: 0x9244001b  lbu         $a0, 0x1B($s2)
    ctx->pc = 0x4571fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 27)));
label_457200:
    // 0x457200: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x457200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_457204:
    // 0x457204: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x457204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_457208:
    // 0x457208: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x457208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_45720c:
    // 0x45720c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x45720cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_457210:
    // 0x457210: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x457210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457214:
    // 0x457214: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_457218:
    if (ctx->pc == 0x457218u) {
        ctx->pc = 0x457218u;
            // 0x457218: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45721Cu;
        goto label_45721c;
    }
    ctx->pc = 0x457214u;
    {
        const bool branch_taken_0x457214 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x457218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457214u;
            // 0x457218: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457214) {
            ctx->pc = 0x457228u;
            goto label_457228;
        }
    }
    ctx->pc = 0x45721Cu;
label_45721c:
    // 0x45721c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45721cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457220:
    // 0x457220: 0x10000008  b           . + 4 + (0x8 << 2)
label_457224:
    if (ctx->pc == 0x457224u) {
        ctx->pc = 0x457224u;
            // 0x457224: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457228u;
        goto label_457228;
    }
    ctx->pc = 0x457220u;
    {
        const bool branch_taken_0x457220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457220u;
            // 0x457224: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457220) {
            ctx->pc = 0x457244u;
            goto label_457244;
        }
    }
    ctx->pc = 0x457228u;
label_457228:
    // 0x457228: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x457228u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_45722c:
    // 0x45722c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45722cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_457230:
    // 0x457230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x457230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_457234:
    // 0x457234: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x457234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457238:
    // 0x457238: 0x0  nop
    ctx->pc = 0x457238u;
    // NOP
label_45723c:
    // 0x45723c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x45723cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_457240:
    // 0x457240: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x457240u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_457244:
    // 0x457244: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x457244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457248:
    // 0x457248: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x457248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_45724c:
    // 0x45724c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45724cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_457250:
    // 0x457250: 0x4603005c  madd.s      $f1, $f0, $f3
    ctx->pc = 0x457250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_457254:
    // 0x457254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457258:
    // 0x457258: 0x0  nop
    ctx->pc = 0x457258u;
    // NOP
label_45725c:
    // 0x45725c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45725cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_457260:
    // 0x457260: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_457264:
    if (ctx->pc == 0x457264u) {
        ctx->pc = 0x457264u;
            // 0x457264: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x457268u;
        goto label_457268;
    }
    ctx->pc = 0x457260u;
    {
        const bool branch_taken_0x457260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x457260) {
            ctx->pc = 0x457264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457260u;
            // 0x457264: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x457278u;
            goto label_457278;
        }
    }
    ctx->pc = 0x457268u;
label_457268:
    // 0x457268: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x457268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45726c:
    // 0x45726c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x45726cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_457270:
    // 0x457270: 0x10000007  b           . + 4 + (0x7 << 2)
label_457274:
    if (ctx->pc == 0x457274u) {
        ctx->pc = 0x457274u;
            // 0x457274: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x457278u;
        goto label_457278;
    }
    ctx->pc = 0x457270u;
    {
        const bool branch_taken_0x457270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457270u;
            // 0x457274: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x457270) {
            ctx->pc = 0x457290u;
            goto label_457290;
        }
    }
    ctx->pc = 0x457278u;
label_457278:
    // 0x457278: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x457278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_45727c:
    // 0x45727c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45727cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_457280:
    // 0x457280: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x457280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_457284:
    // 0x457284: 0x0  nop
    ctx->pc = 0x457284u;
    // NOP
label_457288:
    // 0x457288: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x457288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_45728c:
    // 0x45728c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x45728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_457290:
    // 0x457290: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x457290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_457294:
    // 0x457294: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x457294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_457298:
    // 0x457298: 0x458825  or          $s1, $v0, $a1
    ctx->pc = 0x457298u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_45729c:
    // 0x45729c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4572a0:
    // 0x4572a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4572a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4572a4:
    // 0x4572a4: 0xc04f380  jal         func_13CE00
label_4572a8:
    if (ctx->pc == 0x4572A8u) {
        ctx->pc = 0x4572A8u;
            // 0x4572a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4572ACu;
        goto label_4572ac;
    }
    ctx->pc = 0x4572A4u;
    SET_GPR_U32(ctx, 31, 0x4572ACu);
    ctx->pc = 0x4572A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4572A4u;
            // 0x4572a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4572ACu; }
        if (ctx->pc != 0x4572ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4572ACu; }
        if (ctx->pc != 0x4572ACu) { return; }
    }
    ctx->pc = 0x4572ACu;
label_4572ac:
    // 0x4572ac: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x4572acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4572b0:
    // 0x4572b0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4572b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4572b4:
    // 0x4572b4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4572b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4572b8:
    // 0x4572b8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4572b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4572bc:
    // 0x4572bc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x4572bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4572c0:
    // 0x4572c0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x4572c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_4572c4:
    // 0x4572c4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x4572c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_4572c8:
    // 0x4572c8: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x4572c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_4572cc:
    // 0x4572cc: 0xc0506ac  jal         func_141AB0
label_4572d0:
    if (ctx->pc == 0x4572D0u) {
        ctx->pc = 0x4572D0u;
            // 0x4572d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4572D4u;
        goto label_4572d4;
    }
    ctx->pc = 0x4572CCu;
    SET_GPR_U32(ctx, 31, 0x4572D4u);
    ctx->pc = 0x4572D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4572CCu;
            // 0x4572d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4572D4u; }
        if (ctx->pc != 0x4572D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4572D4u; }
        if (ctx->pc != 0x4572D4u) { return; }
    }
    ctx->pc = 0x4572D4u;
label_4572d4:
    // 0x4572d4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x4572d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4572d8:
    // 0x4572d8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4572d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4572dc:
    // 0x4572dc: 0x86530008  lh          $s3, 0x8($s2)
    ctx->pc = 0x4572dcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_4572e0:
    // 0x4572e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4572e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4572e4:
    // 0x4572e4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4572e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4572e8:
    // 0x4572e8: 0x320f809  jalr        $t9
label_4572ec:
    if (ctx->pc == 0x4572ECu) {
        ctx->pc = 0x4572ECu;
            // 0x4572ec: 0x139023  negu        $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->pc = 0x4572F0u;
        goto label_4572f0;
    }
    ctx->pc = 0x4572E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4572F0u);
        ctx->pc = 0x4572ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4572E8u;
            // 0x4572ec: 0x139023  negu        $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4572F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4572F0u; }
            if (ctx->pc != 0x4572F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4572F0u;
label_4572f0:
    // 0x4572f0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x4572f0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4572f4:
    // 0x4572f4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x4572f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4572f8:
    // 0x4572f8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4572f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4572fc:
    // 0x4572fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4572fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_457300:
    // 0x457300: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x457300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_457304:
    // 0x457304: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x457304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_457308:
    // 0x457308: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x457308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_45730c:
    // 0x45730c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45730cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_457310:
    // 0x457310: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x457310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_457314:
    // 0x457314: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x457314u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457318:
    // 0x457318: 0x0  nop
    ctx->pc = 0x457318u;
    // NOP
label_45731c:
    // 0x45731c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x45731cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_457320:
    // 0x457320: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x457320u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_457324:
    // 0x457324: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x457324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_457328:
    // 0x457328: 0x320f809  jalr        $t9
label_45732c:
    if (ctx->pc == 0x45732Cu) {
        ctx->pc = 0x45732Cu;
            // 0x45732c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x457330u;
        goto label_457330;
    }
    ctx->pc = 0x457328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457330u);
        ctx->pc = 0x45732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457328u;
            // 0x45732c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457330u; }
            if (ctx->pc != 0x457330u) { return; }
        }
        }
    }
    ctx->pc = 0x457330u;
label_457330:
    // 0x457330: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x457330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_457334:
    // 0x457334: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x457334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_457338:
    // 0x457338: 0x320f809  jalr        $t9
label_45733c:
    if (ctx->pc == 0x45733Cu) {
        ctx->pc = 0x45733Cu;
            // 0x45733c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x457340u;
        goto label_457340;
    }
    ctx->pc = 0x457338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457340u);
        ctx->pc = 0x45733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457338u;
            // 0x45733c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457340u; }
            if (ctx->pc != 0x457340u) { return; }
        }
        }
    }
    ctx->pc = 0x457340u;
label_457340:
    // 0x457340: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x457340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_457344:
    // 0x457344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x457344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_457348:
    // 0x457348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x457348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45734c:
    // 0x45734c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45734cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_457350:
    // 0x457350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_457354:
    // 0x457354: 0x3e00008  jr          $ra
label_457358:
    if (ctx->pc == 0x457358u) {
        ctx->pc = 0x457358u;
            // 0x457358: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45735Cu;
        goto label_45735c;
    }
    ctx->pc = 0x457354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x457358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457354u;
            // 0x457358: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45735Cu;
label_45735c:
    // 0x45735c: 0x0  nop
    ctx->pc = 0x45735cu;
    // NOP
}
