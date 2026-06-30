#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014DF30
// Address: 0x14df30 - 0x14e360
void sub_0014DF30_0x14df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DF30_0x14df30");
#endif

    switch (ctx->pc) {
        case 0x14df30u: goto label_14df30;
        case 0x14df34u: goto label_14df34;
        case 0x14df38u: goto label_14df38;
        case 0x14df3cu: goto label_14df3c;
        case 0x14df40u: goto label_14df40;
        case 0x14df44u: goto label_14df44;
        case 0x14df48u: goto label_14df48;
        case 0x14df4cu: goto label_14df4c;
        case 0x14df50u: goto label_14df50;
        case 0x14df54u: goto label_14df54;
        case 0x14df58u: goto label_14df58;
        case 0x14df5cu: goto label_14df5c;
        case 0x14df60u: goto label_14df60;
        case 0x14df64u: goto label_14df64;
        case 0x14df68u: goto label_14df68;
        case 0x14df6cu: goto label_14df6c;
        case 0x14df70u: goto label_14df70;
        case 0x14df74u: goto label_14df74;
        case 0x14df78u: goto label_14df78;
        case 0x14df7cu: goto label_14df7c;
        case 0x14df80u: goto label_14df80;
        case 0x14df84u: goto label_14df84;
        case 0x14df88u: goto label_14df88;
        case 0x14df8cu: goto label_14df8c;
        case 0x14df90u: goto label_14df90;
        case 0x14df94u: goto label_14df94;
        case 0x14df98u: goto label_14df98;
        case 0x14df9cu: goto label_14df9c;
        case 0x14dfa0u: goto label_14dfa0;
        case 0x14dfa4u: goto label_14dfa4;
        case 0x14dfa8u: goto label_14dfa8;
        case 0x14dfacu: goto label_14dfac;
        case 0x14dfb0u: goto label_14dfb0;
        case 0x14dfb4u: goto label_14dfb4;
        case 0x14dfb8u: goto label_14dfb8;
        case 0x14dfbcu: goto label_14dfbc;
        case 0x14dfc0u: goto label_14dfc0;
        case 0x14dfc4u: goto label_14dfc4;
        case 0x14dfc8u: goto label_14dfc8;
        case 0x14dfccu: goto label_14dfcc;
        case 0x14dfd0u: goto label_14dfd0;
        case 0x14dfd4u: goto label_14dfd4;
        case 0x14dfd8u: goto label_14dfd8;
        case 0x14dfdcu: goto label_14dfdc;
        case 0x14dfe0u: goto label_14dfe0;
        case 0x14dfe4u: goto label_14dfe4;
        case 0x14dfe8u: goto label_14dfe8;
        case 0x14dfecu: goto label_14dfec;
        case 0x14dff0u: goto label_14dff0;
        case 0x14dff4u: goto label_14dff4;
        case 0x14dff8u: goto label_14dff8;
        case 0x14dffcu: goto label_14dffc;
        case 0x14e000u: goto label_14e000;
        case 0x14e004u: goto label_14e004;
        case 0x14e008u: goto label_14e008;
        case 0x14e00cu: goto label_14e00c;
        case 0x14e010u: goto label_14e010;
        case 0x14e014u: goto label_14e014;
        case 0x14e018u: goto label_14e018;
        case 0x14e01cu: goto label_14e01c;
        case 0x14e020u: goto label_14e020;
        case 0x14e024u: goto label_14e024;
        case 0x14e028u: goto label_14e028;
        case 0x14e02cu: goto label_14e02c;
        case 0x14e030u: goto label_14e030;
        case 0x14e034u: goto label_14e034;
        case 0x14e038u: goto label_14e038;
        case 0x14e03cu: goto label_14e03c;
        case 0x14e040u: goto label_14e040;
        case 0x14e044u: goto label_14e044;
        case 0x14e048u: goto label_14e048;
        case 0x14e04cu: goto label_14e04c;
        case 0x14e050u: goto label_14e050;
        case 0x14e054u: goto label_14e054;
        case 0x14e058u: goto label_14e058;
        case 0x14e05cu: goto label_14e05c;
        case 0x14e060u: goto label_14e060;
        case 0x14e064u: goto label_14e064;
        case 0x14e068u: goto label_14e068;
        case 0x14e06cu: goto label_14e06c;
        case 0x14e070u: goto label_14e070;
        case 0x14e074u: goto label_14e074;
        case 0x14e078u: goto label_14e078;
        case 0x14e07cu: goto label_14e07c;
        case 0x14e080u: goto label_14e080;
        case 0x14e084u: goto label_14e084;
        case 0x14e088u: goto label_14e088;
        case 0x14e08cu: goto label_14e08c;
        case 0x14e090u: goto label_14e090;
        case 0x14e094u: goto label_14e094;
        case 0x14e098u: goto label_14e098;
        case 0x14e09cu: goto label_14e09c;
        case 0x14e0a0u: goto label_14e0a0;
        case 0x14e0a4u: goto label_14e0a4;
        case 0x14e0a8u: goto label_14e0a8;
        case 0x14e0acu: goto label_14e0ac;
        case 0x14e0b0u: goto label_14e0b0;
        case 0x14e0b4u: goto label_14e0b4;
        case 0x14e0b8u: goto label_14e0b8;
        case 0x14e0bcu: goto label_14e0bc;
        case 0x14e0c0u: goto label_14e0c0;
        case 0x14e0c4u: goto label_14e0c4;
        case 0x14e0c8u: goto label_14e0c8;
        case 0x14e0ccu: goto label_14e0cc;
        case 0x14e0d0u: goto label_14e0d0;
        case 0x14e0d4u: goto label_14e0d4;
        case 0x14e0d8u: goto label_14e0d8;
        case 0x14e0dcu: goto label_14e0dc;
        case 0x14e0e0u: goto label_14e0e0;
        case 0x14e0e4u: goto label_14e0e4;
        case 0x14e0e8u: goto label_14e0e8;
        case 0x14e0ecu: goto label_14e0ec;
        case 0x14e0f0u: goto label_14e0f0;
        case 0x14e0f4u: goto label_14e0f4;
        case 0x14e0f8u: goto label_14e0f8;
        case 0x14e0fcu: goto label_14e0fc;
        case 0x14e100u: goto label_14e100;
        case 0x14e104u: goto label_14e104;
        case 0x14e108u: goto label_14e108;
        case 0x14e10cu: goto label_14e10c;
        case 0x14e110u: goto label_14e110;
        case 0x14e114u: goto label_14e114;
        case 0x14e118u: goto label_14e118;
        case 0x14e11cu: goto label_14e11c;
        case 0x14e120u: goto label_14e120;
        case 0x14e124u: goto label_14e124;
        case 0x14e128u: goto label_14e128;
        case 0x14e12cu: goto label_14e12c;
        case 0x14e130u: goto label_14e130;
        case 0x14e134u: goto label_14e134;
        case 0x14e138u: goto label_14e138;
        case 0x14e13cu: goto label_14e13c;
        case 0x14e140u: goto label_14e140;
        case 0x14e144u: goto label_14e144;
        case 0x14e148u: goto label_14e148;
        case 0x14e14cu: goto label_14e14c;
        case 0x14e150u: goto label_14e150;
        case 0x14e154u: goto label_14e154;
        case 0x14e158u: goto label_14e158;
        case 0x14e15cu: goto label_14e15c;
        case 0x14e160u: goto label_14e160;
        case 0x14e164u: goto label_14e164;
        case 0x14e168u: goto label_14e168;
        case 0x14e16cu: goto label_14e16c;
        case 0x14e170u: goto label_14e170;
        case 0x14e174u: goto label_14e174;
        case 0x14e178u: goto label_14e178;
        case 0x14e17cu: goto label_14e17c;
        case 0x14e180u: goto label_14e180;
        case 0x14e184u: goto label_14e184;
        case 0x14e188u: goto label_14e188;
        case 0x14e18cu: goto label_14e18c;
        case 0x14e190u: goto label_14e190;
        case 0x14e194u: goto label_14e194;
        case 0x14e198u: goto label_14e198;
        case 0x14e19cu: goto label_14e19c;
        case 0x14e1a0u: goto label_14e1a0;
        case 0x14e1a4u: goto label_14e1a4;
        case 0x14e1a8u: goto label_14e1a8;
        case 0x14e1acu: goto label_14e1ac;
        case 0x14e1b0u: goto label_14e1b0;
        case 0x14e1b4u: goto label_14e1b4;
        case 0x14e1b8u: goto label_14e1b8;
        case 0x14e1bcu: goto label_14e1bc;
        case 0x14e1c0u: goto label_14e1c0;
        case 0x14e1c4u: goto label_14e1c4;
        case 0x14e1c8u: goto label_14e1c8;
        case 0x14e1ccu: goto label_14e1cc;
        case 0x14e1d0u: goto label_14e1d0;
        case 0x14e1d4u: goto label_14e1d4;
        case 0x14e1d8u: goto label_14e1d8;
        case 0x14e1dcu: goto label_14e1dc;
        case 0x14e1e0u: goto label_14e1e0;
        case 0x14e1e4u: goto label_14e1e4;
        case 0x14e1e8u: goto label_14e1e8;
        case 0x14e1ecu: goto label_14e1ec;
        case 0x14e1f0u: goto label_14e1f0;
        case 0x14e1f4u: goto label_14e1f4;
        case 0x14e1f8u: goto label_14e1f8;
        case 0x14e1fcu: goto label_14e1fc;
        case 0x14e200u: goto label_14e200;
        case 0x14e204u: goto label_14e204;
        case 0x14e208u: goto label_14e208;
        case 0x14e20cu: goto label_14e20c;
        case 0x14e210u: goto label_14e210;
        case 0x14e214u: goto label_14e214;
        case 0x14e218u: goto label_14e218;
        case 0x14e21cu: goto label_14e21c;
        case 0x14e220u: goto label_14e220;
        case 0x14e224u: goto label_14e224;
        case 0x14e228u: goto label_14e228;
        case 0x14e22cu: goto label_14e22c;
        case 0x14e230u: goto label_14e230;
        case 0x14e234u: goto label_14e234;
        case 0x14e238u: goto label_14e238;
        case 0x14e23cu: goto label_14e23c;
        case 0x14e240u: goto label_14e240;
        case 0x14e244u: goto label_14e244;
        case 0x14e248u: goto label_14e248;
        case 0x14e24cu: goto label_14e24c;
        case 0x14e250u: goto label_14e250;
        case 0x14e254u: goto label_14e254;
        case 0x14e258u: goto label_14e258;
        case 0x14e25cu: goto label_14e25c;
        case 0x14e260u: goto label_14e260;
        case 0x14e264u: goto label_14e264;
        case 0x14e268u: goto label_14e268;
        case 0x14e26cu: goto label_14e26c;
        case 0x14e270u: goto label_14e270;
        case 0x14e274u: goto label_14e274;
        case 0x14e278u: goto label_14e278;
        case 0x14e27cu: goto label_14e27c;
        case 0x14e280u: goto label_14e280;
        case 0x14e284u: goto label_14e284;
        case 0x14e288u: goto label_14e288;
        case 0x14e28cu: goto label_14e28c;
        case 0x14e290u: goto label_14e290;
        case 0x14e294u: goto label_14e294;
        case 0x14e298u: goto label_14e298;
        case 0x14e29cu: goto label_14e29c;
        case 0x14e2a0u: goto label_14e2a0;
        case 0x14e2a4u: goto label_14e2a4;
        case 0x14e2a8u: goto label_14e2a8;
        case 0x14e2acu: goto label_14e2ac;
        case 0x14e2b0u: goto label_14e2b0;
        case 0x14e2b4u: goto label_14e2b4;
        case 0x14e2b8u: goto label_14e2b8;
        case 0x14e2bcu: goto label_14e2bc;
        case 0x14e2c0u: goto label_14e2c0;
        case 0x14e2c4u: goto label_14e2c4;
        case 0x14e2c8u: goto label_14e2c8;
        case 0x14e2ccu: goto label_14e2cc;
        case 0x14e2d0u: goto label_14e2d0;
        case 0x14e2d4u: goto label_14e2d4;
        case 0x14e2d8u: goto label_14e2d8;
        case 0x14e2dcu: goto label_14e2dc;
        case 0x14e2e0u: goto label_14e2e0;
        case 0x14e2e4u: goto label_14e2e4;
        case 0x14e2e8u: goto label_14e2e8;
        case 0x14e2ecu: goto label_14e2ec;
        case 0x14e2f0u: goto label_14e2f0;
        case 0x14e2f4u: goto label_14e2f4;
        case 0x14e2f8u: goto label_14e2f8;
        case 0x14e2fcu: goto label_14e2fc;
        case 0x14e300u: goto label_14e300;
        case 0x14e304u: goto label_14e304;
        case 0x14e308u: goto label_14e308;
        case 0x14e30cu: goto label_14e30c;
        case 0x14e310u: goto label_14e310;
        case 0x14e314u: goto label_14e314;
        case 0x14e318u: goto label_14e318;
        case 0x14e31cu: goto label_14e31c;
        case 0x14e320u: goto label_14e320;
        case 0x14e324u: goto label_14e324;
        case 0x14e328u: goto label_14e328;
        case 0x14e32cu: goto label_14e32c;
        case 0x14e330u: goto label_14e330;
        case 0x14e334u: goto label_14e334;
        case 0x14e338u: goto label_14e338;
        case 0x14e33cu: goto label_14e33c;
        case 0x14e340u: goto label_14e340;
        case 0x14e344u: goto label_14e344;
        case 0x14e348u: goto label_14e348;
        case 0x14e34cu: goto label_14e34c;
        case 0x14e350u: goto label_14e350;
        case 0x14e354u: goto label_14e354;
        case 0x14e358u: goto label_14e358;
        case 0x14e35cu: goto label_14e35c;
        default: break;
    }

    ctx->pc = 0x14df30u;

label_14df30:
    // 0x14df30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x14df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_14df34:
    // 0x14df34: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14df34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14df38:
    // 0x14df38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_14df3c:
    // 0x14df3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_14df40:
    // 0x14df40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_14df44:
    // 0x14df44: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14df44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14df48:
    // 0x14df48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14df4c:
    // 0x14df4c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x14df4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14df50:
    // 0x14df50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14df54:
    // 0x14df54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14df54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14df58:
    // 0x14df58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14df5c:
    // 0x14df5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14df5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14df60:
    // 0x14df60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14df64:
    // 0x14df64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14df64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14df68:
    // 0x14df68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14df6c:
    // 0x14df6c: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x14df6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_14df70:
    // 0x14df70: 0xac605774  sw          $zero, 0x5774($v1)
    ctx->pc = 0x14df70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 0));
label_14df74:
    // 0x14df74: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14df74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_14df78:
    // 0x14df78: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x14df78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_14df7c:
    // 0x14df7c: 0x102000ee  beqz        $at, . + 4 + (0xEE << 2)
label_14df80:
    if (ctx->pc == 0x14DF80u) {
        ctx->pc = 0x14DF80u;
            // 0x14df80: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14DF84u;
        goto label_14df84;
    }
    ctx->pc = 0x14DF7Cu;
    {
        const bool branch_taken_0x14df7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF7Cu;
            // 0x14df80: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df7c) {
            ctx->pc = 0x14E338u;
            goto label_14e338;
        }
    }
    ctx->pc = 0x14DF84u;
label_14df84:
    // 0x14df84: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x14df84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_14df88:
    // 0x14df88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14df88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14df8c:
    // 0x14df8c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_14df90:
    if (ctx->pc == 0x14DF90u) {
        ctx->pc = 0x14DF90u;
            // 0x14df90: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->pc = 0x14DF94u;
        goto label_14df94;
    }
    ctx->pc = 0x14DF8Cu;
    {
        const bool branch_taken_0x14df8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF8Cu;
            // 0x14df90: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df8c) {
            ctx->pc = 0x14DFA0u;
            goto label_14dfa0;
        }
    }
    ctx->pc = 0x14DF94u;
label_14df94:
    // 0x14df94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14df94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14df98:
    // 0x14df98: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x14df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_14df9c:
    // 0x14df9c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x14df9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14dfa0:
    // 0x14dfa0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14dfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14dfa4:
    // 0x14dfa4: 0xc0535e0  jal         func_14D780
label_14dfa8:
    if (ctx->pc == 0x14DFA8u) {
        ctx->pc = 0x14DFA8u;
            // 0x14dfa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14DFACu;
        goto label_14dfac;
    }
    ctx->pc = 0x14DFA4u;
    SET_GPR_U32(ctx, 31, 0x14DFACu);
    ctx->pc = 0x14DFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFA4u;
            // 0x14dfa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D780u;
    if (runtime->hasFunction(0x14D780u)) {
        auto targetFn = runtime->lookupFunction(0x14D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DFACu; }
        if (ctx->pc != 0x14DFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D780_0x14d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DFACu; }
        if (ctx->pc != 0x14DFACu) { return; }
    }
    ctx->pc = 0x14DFACu;
label_14dfac:
    // 0x14dfac: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
label_14dfb0:
    if (ctx->pc == 0x14DFB0u) {
        ctx->pc = 0x14DFB4u;
        goto label_14dfb4;
    }
    ctx->pc = 0x14DFACu;
    {
        const bool branch_taken_0x14dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dfac) {
            ctx->pc = 0x14E2F8u;
            goto label_14e2f8;
        }
    }
    ctx->pc = 0x14DFB4u;
label_14dfb4:
    // 0x14dfb4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x14dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_14dfb8:
    // 0x14dfb8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14dfbc:
    // 0x14dfbc: 0x8c4257f4  lw          $v0, 0x57F4($v0)
    ctx->pc = 0x14dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22516)));
label_14dfc0:
    // 0x14dfc0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x14dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_14dfc4:
    // 0x14dfc4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_14dfc8:
    if (ctx->pc == 0x14DFC8u) {
        ctx->pc = 0x14DFC8u;
            // 0x14dfc8: 0x2438021  addu        $s0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x14DFCCu;
        goto label_14dfcc;
    }
    ctx->pc = 0x14DFC4u;
    {
        const bool branch_taken_0x14dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFC4u;
            // 0x14dfc8: 0x2438021  addu        $s0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dfc4) {
            ctx->pc = 0x14E060u;
            goto label_14e060;
        }
    }
    ctx->pc = 0x14DFCCu;
label_14dfcc:
    // 0x14dfcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14dfd0:
    // 0x14dfd0: 0x8c4257f0  lw          $v0, 0x57F0($v0)
    ctx->pc = 0x14dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
label_14dfd4:
    // 0x14dfd4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_14dfd8:
    if (ctx->pc == 0x14DFD8u) {
        ctx->pc = 0x14DFDCu;
        goto label_14dfdc;
    }
    ctx->pc = 0x14DFD4u;
    {
        const bool branch_taken_0x14dfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dfd4) {
            ctx->pc = 0x14E060u;
            goto label_14e060;
        }
    }
    ctx->pc = 0x14DFDCu;
label_14dfdc:
    // 0x14dfdc: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x14dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14dfe0:
    // 0x14dfe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14dfe4:
    // 0x14dfe4: 0xc04c530  jal         func_1314C0
label_14dfe8:
    if (ctx->pc == 0x14DFE8u) {
        ctx->pc = 0x14DFE8u;
            // 0x14dfe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14DFECu;
        goto label_14dfec;
    }
    ctx->pc = 0x14DFE4u;
    SET_GPR_U32(ctx, 31, 0x14DFECu);
    ctx->pc = 0x14DFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFE4u;
            // 0x14dfe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314C0u;
    if (runtime->hasFunction(0x1314C0u)) {
        auto targetFn = runtime->lookupFunction(0x1314C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DFECu; }
        if (ctx->pc != 0x14DFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001314C0_0x1314c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DFECu; }
        if (ctx->pc != 0x14DFECu) { return; }
    }
    ctx->pc = 0x14DFECu;
label_14dfec:
    // 0x14dfec: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x14dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_14dff0:
    // 0x14dff0: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
label_14dff4:
    if (ctx->pc == 0x14DFF4u) {
        ctx->pc = 0x14DFF8u;
        goto label_14dff8;
    }
    ctx->pc = 0x14DFF0u;
    {
        const bool branch_taken_0x14dff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14dff0) {
            ctx->pc = 0x14E040u;
            goto label_14e040;
        }
    }
    ctx->pc = 0x14DFF8u;
label_14dff8:
    // 0x14dff8: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x14dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_14dffc:
    // 0x14dffc: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_14e000:
    if (ctx->pc == 0x14E000u) {
        ctx->pc = 0x14E004u;
        goto label_14e004;
    }
    ctx->pc = 0x14DFFCu;
    {
        const bool branch_taken_0x14dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14dffc) {
            ctx->pc = 0x14E040u;
            goto label_14e040;
        }
    }
    ctx->pc = 0x14E004u;
label_14e004:
    // 0x14e004: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14e004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14e008:
    // 0x14e008: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_14e00c:
    if (ctx->pc == 0x14E00Cu) {
        ctx->pc = 0x14E010u;
        goto label_14e010;
    }
    ctx->pc = 0x14E008u;
    {
        const bool branch_taken_0x14e008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e008) {
            ctx->pc = 0x14E030u;
            goto label_14e030;
        }
    }
    ctx->pc = 0x14E010u;
label_14e010:
    // 0x14e010: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x14e010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14e014:
    // 0x14e014: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_14e018:
    if (ctx->pc == 0x14E018u) {
        ctx->pc = 0x14E01Cu;
        goto label_14e01c;
    }
    ctx->pc = 0x14E014u;
    {
        const bool branch_taken_0x14e014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e014) {
            ctx->pc = 0x14E028u;
            goto label_14e028;
        }
    }
    ctx->pc = 0x14E01Cu;
label_14e01c:
    // 0x14e01c: 0x1000000c  b           . + 4 + (0xC << 2)
label_14e020:
    if (ctx->pc == 0x14E020u) {
        ctx->pc = 0x14E024u;
        goto label_14e024;
    }
    ctx->pc = 0x14E01Cu;
    {
        const bool branch_taken_0x14e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e01c) {
            ctx->pc = 0x14E050u;
            goto label_14e050;
        }
    }
    ctx->pc = 0x14E024u;
label_14e024:
    // 0x14e024: 0x0  nop
    ctx->pc = 0x14e024u;
    // NOP
label_14e028:
    // 0x14e028: 0x1000000b  b           . + 4 + (0xB << 2)
label_14e02c:
    if (ctx->pc == 0x14E02Cu) {
        ctx->pc = 0x14E02Cu;
            // 0x14e02c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x14E030u;
        goto label_14e030;
    }
    ctx->pc = 0x14E028u;
    {
        const bool branch_taken_0x14e028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E028u;
            // 0x14e02c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e028) {
            ctx->pc = 0x14E058u;
            goto label_14e058;
        }
    }
    ctx->pc = 0x14E030u;
label_14e030:
    // 0x14e030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e034:
    // 0x14e034: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e038:
    // 0x14e038: 0x10000005  b           . + 4 + (0x5 << 2)
label_14e03c:
    if (ctx->pc == 0x14E03Cu) {
        ctx->pc = 0x14E03Cu;
            // 0x14e03c: 0xac6457f8  sw          $a0, 0x57F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22520), GPR_U32(ctx, 4));
        ctx->pc = 0x14E040u;
        goto label_14e040;
    }
    ctx->pc = 0x14E038u;
    {
        const bool branch_taken_0x14e038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E038u;
            // 0x14e03c: 0xac6457f8  sw          $a0, 0x57F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22520), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e038) {
            ctx->pc = 0x14E050u;
            goto label_14e050;
        }
    }
    ctx->pc = 0x14E040u;
label_14e040:
    // 0x14e040: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14e040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e044:
    // 0x14e044: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e048:
    // 0x14e048: 0xac6457f0  sw          $a0, 0x57F0($v1)
    ctx->pc = 0x14e048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
label_14e04c:
    // 0x14e04c: 0x0  nop
    ctx->pc = 0x14e04cu;
    // NOP
label_14e050:
    // 0x14e050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e054:
    // 0x14e054: 0x0  nop
    ctx->pc = 0x14e054u;
    // NOP
label_14e058:
    // 0x14e058: 0x46000a7  bltz        $v1, . + 4 + (0xA7 << 2)
label_14e05c:
    if (ctx->pc == 0x14E05Cu) {
        ctx->pc = 0x14E060u;
        goto label_14e060;
    }
    ctx->pc = 0x14E058u;
    {
        const bool branch_taken_0x14e058 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x14e058) {
            ctx->pc = 0x14E2F8u;
            goto label_14e2f8;
        }
    }
    ctx->pc = 0x14E060u;
label_14e060:
    // 0x14e060: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e064:
    // 0x14e064: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x14e064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
label_14e068:
    // 0x14e068: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e06c:
    // 0x14e06c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x14e06cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_14e070:
    // 0x14e070: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14e070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_14e074:
    // 0x14e074: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14e074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_14e078:
    // 0x14e078: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x14e078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
label_14e07c:
    // 0x14e07c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e080:
    // 0x14e080: 0x8e290018  lw          $t1, 0x18($s1)
    ctx->pc = 0x14e080u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_14e084:
    // 0x14e084: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14e084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_14e088:
    // 0x14e088: 0x8c485768  lw          $t0, 0x5768($v0)
    ctx->pc = 0x14e088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
label_14e08c:
    // 0x14e08c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e090:
    // 0x14e090: 0xace95760  sw          $t1, 0x5760($a3)
    ctx->pc = 0x14e090u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22368), GPR_U32(ctx, 9));
label_14e094:
    // 0x14e094: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x14e094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_14e098:
    // 0x14e098: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e09c:
    // 0x14e09c: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
label_14e0a0:
    // 0x14e0a0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x14e0a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_14e0a4:
    // 0x14e0a4: 0xaca8576c  sw          $t0, 0x576C($a1)
    ctx->pc = 0x14e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22380), GPR_U32(ctx, 8));
label_14e0a8:
    // 0x14e0a8: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x14e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_14e0ac:
    // 0x14e0ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_14e0b0:
    // 0x14e0b0: 0xacc5577c  sw          $a1, 0x577C($a2)
    ctx->pc = 0x14e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22396), GPR_U32(ctx, 5));
label_14e0b4:
    // 0x14e0b4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x14e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_14e0b8:
    // 0x14e0b8: 0xac855768  sw          $a1, 0x5768($a0)
    ctx->pc = 0x14e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22376), GPR_U32(ctx, 5));
label_14e0bc:
    // 0x14e0bc: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x14e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_14e0c0:
    // 0x14e0c0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x14e0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_14e0c4:
    // 0x14e0c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14e0c8:
    // 0x14e0c8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_14e0cc:
    if (ctx->pc == 0x14E0CCu) {
        ctx->pc = 0x14E0CCu;
            // 0x14e0cc: 0xac645780  sw          $a0, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 4));
        ctx->pc = 0x14E0D0u;
        goto label_14e0d0;
    }
    ctx->pc = 0x14E0C8u;
    {
        const bool branch_taken_0x14e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0C8u;
            // 0x14e0cc: 0xac645780  sw          $a0, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0c8) {
            ctx->pc = 0x14E1A0u;
            goto label_14e1a0;
        }
    }
    ctx->pc = 0x14E0D0u;
label_14e0d0:
    // 0x14e0d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e0d4:
    // 0x14e0d4: 0x8c4257e4  lw          $v0, 0x57E4($v0)
    ctx->pc = 0x14e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22500)));
label_14e0d8:
    // 0x14e0d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_14e0dc:
    if (ctx->pc == 0x14E0DCu) {
        ctx->pc = 0x14E0E0u;
        goto label_14e0e0;
    }
    ctx->pc = 0x14E0D8u;
    {
        const bool branch_taken_0x14e0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e0d8) {
            ctx->pc = 0x14E110u;
            goto label_14e110;
        }
    }
    ctx->pc = 0x14E0E0u;
label_14e0e0:
    // 0x14e0e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e0e4:
    // 0x14e0e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14e0e8:
    // 0x14e0e8: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x14e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
label_14e0ec:
    // 0x14e0ec: 0x10440020  beq         $v0, $a0, . + 4 + (0x20 << 2)
label_14e0f0:
    if (ctx->pc == 0x14E0F0u) {
        ctx->pc = 0x14E0F4u;
        goto label_14e0f4;
    }
    ctx->pc = 0x14E0ECu;
    {
        const bool branch_taken_0x14e0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14e0ec) {
            ctx->pc = 0x14E170u;
            goto label_14e170;
        }
    }
    ctx->pc = 0x14E0F4u;
label_14e0f4:
    // 0x14e0f4: 0xc057250  jal         func_15C940
label_14e0f8:
    if (ctx->pc == 0x14E0F8u) {
        ctx->pc = 0x14E0FCu;
        goto label_14e0fc;
    }
    ctx->pc = 0x14E0F4u;
    SET_GPR_U32(ctx, 31, 0x14E0FCu);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0FCu; }
        if (ctx->pc != 0x14E0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0FCu; }
        if (ctx->pc != 0x14E0FCu) { return; }
    }
    ctx->pc = 0x14E0FCu;
label_14e0fc:
    // 0x14e0fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14e100:
    // 0x14e100: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e104:
    // 0x14e104: 0x1000001a  b           . + 4 + (0x1A << 2)
label_14e108:
    if (ctx->pc == 0x14E108u) {
        ctx->pc = 0x14E108u;
            // 0x14e108: 0xac435848  sw          $v1, 0x5848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 3));
        ctx->pc = 0x14E10Cu;
        goto label_14e10c;
    }
    ctx->pc = 0x14E104u;
    {
        const bool branch_taken_0x14e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E104u;
            // 0x14e108: 0xac435848  sw          $v1, 0x5848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e104) {
            ctx->pc = 0x14E170u;
            goto label_14e170;
        }
    }
    ctx->pc = 0x14E10Cu;
label_14e10c:
    // 0x14e10c: 0x0  nop
    ctx->pc = 0x14e10cu;
    // NOP
label_14e110:
    // 0x14e110: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e114:
    // 0x14e114: 0x8c4257e0  lw          $v0, 0x57E0($v0)
    ctx->pc = 0x14e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22496)));
label_14e118:
    // 0x14e118: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14e11c:
    if (ctx->pc == 0x14E11Cu) {
        ctx->pc = 0x14E120u;
        goto label_14e120;
    }
    ctx->pc = 0x14E118u;
    {
        const bool branch_taken_0x14e118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e118) {
            ctx->pc = 0x14E148u;
            goto label_14e148;
        }
    }
    ctx->pc = 0x14E120u;
label_14e120:
    // 0x14e120: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e124:
    // 0x14e124: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x14e124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
label_14e128:
    // 0x14e128: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_14e12c:
    if (ctx->pc == 0x14E12Cu) {
        ctx->pc = 0x14E130u;
        goto label_14e130;
    }
    ctx->pc = 0x14E128u;
    {
        const bool branch_taken_0x14e128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e128) {
            ctx->pc = 0x14E170u;
            goto label_14e170;
        }
    }
    ctx->pc = 0x14E130u;
label_14e130:
    // 0x14e130: 0xc057250  jal         func_15C940
label_14e134:
    if (ctx->pc == 0x14E134u) {
        ctx->pc = 0x14E134u;
            // 0x14e134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E138u;
        goto label_14e138;
    }
    ctx->pc = 0x14E130u;
    SET_GPR_U32(ctx, 31, 0x14E138u);
    ctx->pc = 0x14E134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E130u;
            // 0x14e134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E138u; }
        if (ctx->pc != 0x14E138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E138u; }
        if (ctx->pc != 0x14E138u) { return; }
    }
    ctx->pc = 0x14E138u;
label_14e138:
    // 0x14e138: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e13c:
    // 0x14e13c: 0x1000000c  b           . + 4 + (0xC << 2)
label_14e140:
    if (ctx->pc == 0x14E140u) {
        ctx->pc = 0x14E140u;
            // 0x14e140: 0xac405848  sw          $zero, 0x5848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 0));
        ctx->pc = 0x14E144u;
        goto label_14e144;
    }
    ctx->pc = 0x14E13Cu;
    {
        const bool branch_taken_0x14e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E13Cu;
            // 0x14e140: 0xac405848  sw          $zero, 0x5848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e13c) {
            ctx->pc = 0x14E170u;
            goto label_14e170;
        }
    }
    ctx->pc = 0x14E144u;
label_14e144:
    // 0x14e144: 0x0  nop
    ctx->pc = 0x14e144u;
    // NOP
label_14e148:
    // 0x14e148: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e14c:
    // 0x14e14c: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x14e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
label_14e150:
    // 0x14e150: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e154:
    // 0x14e154: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_14e158:
    if (ctx->pc == 0x14E158u) {
        ctx->pc = 0x14E15Cu;
        goto label_14e15c;
    }
    ctx->pc = 0x14E154u;
    {
        const bool branch_taken_0x14e154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14e154) {
            ctx->pc = 0x14E170u;
            goto label_14e170;
        }
    }
    ctx->pc = 0x14E15Cu;
label_14e15c:
    // 0x14e15c: 0xc057250  jal         func_15C940
label_14e160:
    if (ctx->pc == 0x14E160u) {
        ctx->pc = 0x14E164u;
        goto label_14e164;
    }
    ctx->pc = 0x14E15Cu;
    SET_GPR_U32(ctx, 31, 0x14E164u);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E164u; }
        if (ctx->pc != 0x14E164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E164u; }
        if (ctx->pc != 0x14E164u) { return; }
    }
    ctx->pc = 0x14E164u;
label_14e164:
    // 0x14e164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e168:
    // 0x14e168: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e16c:
    // 0x14e16c: 0xac435848  sw          $v1, 0x5848($v0)
    ctx->pc = 0x14e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 3));
label_14e170:
    // 0x14e170: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e174:
    // 0x14e174: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x14e174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_14e178:
    // 0x14e178: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e17c:
    // 0x14e17c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x14e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_14e180:
    // 0x14e180: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x14e180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_14e184:
    // 0x14e184: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x14e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_14e188:
    // 0x14e188: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14e188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_14e18c:
    // 0x14e18c: 0xc053684  jal         func_14DA10
label_14e190:
    if (ctx->pc == 0x14E190u) {
        ctx->pc = 0x14E190u;
            // 0x14e190: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14E194u;
        goto label_14e194;
    }
    ctx->pc = 0x14E18Cu;
    SET_GPR_U32(ctx, 31, 0x14E194u);
    ctx->pc = 0x14E190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E18Cu;
            // 0x14e190: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA10u;
    if (runtime->hasFunction(0x14DA10u)) {
        auto targetFn = runtime->lookupFunction(0x14DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E194u; }
        if (ctx->pc != 0x14E194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DA10_0x14da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E194u; }
        if (ctx->pc != 0x14E194u) { return; }
    }
    ctx->pc = 0x14E194u;
label_14e194:
    // 0x14e194: 0x10000058  b           . + 4 + (0x58 << 2)
label_14e198:
    if (ctx->pc == 0x14E198u) {
        ctx->pc = 0x14E19Cu;
        goto label_14e19c;
    }
    ctx->pc = 0x14E194u;
    {
        const bool branch_taken_0x14e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e194) {
            ctx->pc = 0x14E2F8u;
            goto label_14e2f8;
        }
    }
    ctx->pc = 0x14E19Cu;
label_14e19c:
    // 0x14e19c: 0x0  nop
    ctx->pc = 0x14e19cu;
    // NOP
label_14e1a0:
    // 0x14e1a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e1a4:
    // 0x14e1a4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_14e1a8:
    // 0x14e1a8: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x14e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
label_14e1ac:
    // 0x14e1ac: 0xc05056c  jal         func_1415B0
label_14e1b0:
    if (ctx->pc == 0x14E1B0u) {
        ctx->pc = 0x14E1B0u;
            // 0x14e1b0: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->pc = 0x14E1B4u;
        goto label_14e1b4;
    }
    ctx->pc = 0x14E1ACu;
    SET_GPR_U32(ctx, 31, 0x14E1B4u);
    ctx->pc = 0x14E1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1ACu;
            // 0x14e1b0: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1415B0u;
    if (runtime->hasFunction(0x1415B0u)) {
        auto targetFn = runtime->lookupFunction(0x1415B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1B4u; }
        if (ctx->pc != 0x14E1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001415B0_0x1415b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1B4u; }
        if (ctx->pc != 0x14E1B4u) { return; }
    }
    ctx->pc = 0x14E1B4u;
label_14e1b4:
    // 0x14e1b4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_14e1b8:
    if (ctx->pc == 0x14E1B8u) {
        ctx->pc = 0x14E1BCu;
        goto label_14e1bc;
    }
    ctx->pc = 0x14E1B4u;
    {
        const bool branch_taken_0x14e1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e1b4) {
            ctx->pc = 0x14E2F8u;
            goto label_14e2f8;
        }
    }
    ctx->pc = 0x14E1BCu;
label_14e1bc:
    // 0x14e1bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e1c0:
    // 0x14e1c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e1c4:
    // 0x14e1c4: 0x8c445828  lw          $a0, 0x5828($v0)
    ctx->pc = 0x14e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_14e1c8:
    // 0x14e1c8: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x14e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_14e1cc:
    // 0x14e1cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e1d0:
    // 0x14e1d0: 0x8c425804  lw          $v0, 0x5804($v0)
    ctx->pc = 0x14e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
label_14e1d4:
    // 0x14e1d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e1d8:
    // 0x14e1d8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x14e1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_14e1dc:
    // 0x14e1dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_14e1e0:
    if (ctx->pc == 0x14E1E0u) {
        ctx->pc = 0x14E1E0u;
            // 0x14e1e0: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->pc = 0x14E1E4u;
        goto label_14e1e4;
    }
    ctx->pc = 0x14E1DCu;
    {
        const bool branch_taken_0x14e1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1DCu;
            // 0x14e1e0: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1dc) {
            ctx->pc = 0x14E200u;
            goto label_14e200;
        }
    }
    ctx->pc = 0x14E1E4u;
label_14e1e4:
    // 0x14e1e4: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x14e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_14e1e8:
    // 0x14e1e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14e1ec:
    // 0x14e1ec: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x14e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
label_14e1f0:
    // 0x14e1f0: 0xc04cd60  jal         func_133580
label_14e1f4:
    if (ctx->pc == 0x14E1F4u) {
        ctx->pc = 0x14E1F4u;
            // 0x14e1f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E1F8u;
        goto label_14e1f8;
    }
    ctx->pc = 0x14E1F0u;
    SET_GPR_U32(ctx, 31, 0x14E1F8u);
    ctx->pc = 0x14E1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1F0u;
            // 0x14e1f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1F8u; }
        if (ctx->pc != 0x14E1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1F8u; }
        if (ctx->pc != 0x14E1F8u) { return; }
    }
    ctx->pc = 0x14E1F8u;
label_14e1f8:
    // 0x14e1f8: 0xc0534dc  jal         func_14D370
label_14e1fc:
    if (ctx->pc == 0x14E1FCu) {
        ctx->pc = 0x14E1FCu;
            // 0x14e1fc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x14E200u;
        goto label_14e200;
    }
    ctx->pc = 0x14E1F8u;
    SET_GPR_U32(ctx, 31, 0x14E200u);
    ctx->pc = 0x14E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1F8u;
            // 0x14e1fc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E200u; }
        if (ctx->pc != 0x14E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E200u; }
        if (ctx->pc != 0x14E200u) { return; }
    }
    ctx->pc = 0x14E200u;
label_14e200:
    // 0x14e200: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14e200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_14e204:
    // 0x14e204: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14e204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_14e208:
    // 0x14e208: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x14e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
label_14e20c:
    // 0x14e20c: 0xc04cd60  jal         func_133580
label_14e210:
    if (ctx->pc == 0x14E210u) {
        ctx->pc = 0x14E210u;
            // 0x14e210: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E214u;
        goto label_14e214;
    }
    ctx->pc = 0x14E20Cu;
    SET_GPR_U32(ctx, 31, 0x14E214u);
    ctx->pc = 0x14E210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E20Cu;
            // 0x14e210: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E214u; }
        if (ctx->pc != 0x14E214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E214u; }
        if (ctx->pc != 0x14E214u) { return; }
    }
    ctx->pc = 0x14E214u;
label_14e214:
    // 0x14e214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14e214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e218:
    // 0x14e218: 0xc0573e0  jal         func_15CF80
label_14e21c:
    if (ctx->pc == 0x14E21Cu) {
        ctx->pc = 0x14E21Cu;
            // 0x14e21c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x14E220u;
        goto label_14e220;
    }
    ctx->pc = 0x14E218u;
    SET_GPR_U32(ctx, 31, 0x14E220u);
    ctx->pc = 0x14E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E218u;
            // 0x14e21c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E220u; }
        if (ctx->pc != 0x14E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E220u; }
        if (ctx->pc != 0x14E220u) { return; }
    }
    ctx->pc = 0x14E220u;
label_14e220:
    // 0x14e220: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e224:
    // 0x14e224: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14e224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14e228:
    // 0x14e228: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x14e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_14e22c:
    // 0x14e22c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x14e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_14e230:
    // 0x14e230: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
label_14e234:
    if (ctx->pc == 0x14E234u) {
        ctx->pc = 0x14E238u;
        goto label_14e238;
    }
    ctx->pc = 0x14E230u;
    {
        const bool branch_taken_0x14e230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x14e230) {
            ctx->pc = 0x14E2A8u;
            goto label_14e2a8;
        }
    }
    ctx->pc = 0x14E238u;
label_14e238:
    // 0x14e238: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14e23c:
    // 0x14e23c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_14e240:
    if (ctx->pc == 0x14E240u) {
        ctx->pc = 0x14E244u;
        goto label_14e244;
    }
    ctx->pc = 0x14E23Cu;
    {
        const bool branch_taken_0x14e23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e23c) {
            ctx->pc = 0x14E290u;
            goto label_14e290;
        }
    }
    ctx->pc = 0x14E244u;
label_14e244:
    // 0x14e244: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14e244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14e248:
    // 0x14e248: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_14e24c:
    if (ctx->pc == 0x14E24Cu) {
        ctx->pc = 0x14E250u;
        goto label_14e250;
    }
    ctx->pc = 0x14E248u;
    {
        const bool branch_taken_0x14e248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e248) {
            ctx->pc = 0x14E280u;
            goto label_14e280;
        }
    }
    ctx->pc = 0x14E250u;
label_14e250:
    // 0x14e250: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14e254:
    // 0x14e254: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_14e258:
    if (ctx->pc == 0x14E258u) {
        ctx->pc = 0x14E25Cu;
        goto label_14e25c;
    }
    ctx->pc = 0x14E254u;
    {
        const bool branch_taken_0x14e254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e254) {
            ctx->pc = 0x14E268u;
            goto label_14e268;
        }
    }
    ctx->pc = 0x14E25Cu;
label_14e25c:
    // 0x14e25c: 0x10000016  b           . + 4 + (0x16 << 2)
label_14e260:
    if (ctx->pc == 0x14E260u) {
        ctx->pc = 0x14E264u;
        goto label_14e264;
    }
    ctx->pc = 0x14E25Cu;
    {
        const bool branch_taken_0x14e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e25c) {
            ctx->pc = 0x14E2B8u;
            goto label_14e2b8;
        }
    }
    ctx->pc = 0x14E264u;
label_14e264:
    // 0x14e264: 0x0  nop
    ctx->pc = 0x14e264u;
    // NOP
label_14e268:
    // 0x14e268: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x14e268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_14e26c:
    // 0x14e26c: 0x40f809  jalr        $v0
label_14e270:
    if (ctx->pc == 0x14E270u) {
        ctx->pc = 0x14E270u;
            // 0x14e270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E274u;
        goto label_14e274;
    }
    ctx->pc = 0x14E26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E274u);
        ctx->pc = 0x14E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E26Cu;
            // 0x14e270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14E274u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14E274u; }
            if (ctx->pc != 0x14E274u) { return; }
        }
        }
    }
    ctx->pc = 0x14E274u;
label_14e274:
    // 0x14e274: 0x10000010  b           . + 4 + (0x10 << 2)
label_14e278:
    if (ctx->pc == 0x14E278u) {
        ctx->pc = 0x14E27Cu;
        goto label_14e27c;
    }
    ctx->pc = 0x14E274u;
    {
        const bool branch_taken_0x14e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e274) {
            ctx->pc = 0x14E2B8u;
            goto label_14e2b8;
        }
    }
    ctx->pc = 0x14E27Cu;
label_14e27c:
    // 0x14e27c: 0x0  nop
    ctx->pc = 0x14e27cu;
    // NOP
label_14e280:
    // 0x14e280: 0xc04e550  jal         func_139540
label_14e284:
    if (ctx->pc == 0x14E284u) {
        ctx->pc = 0x14E284u;
            // 0x14e284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E288u;
        goto label_14e288;
    }
    ctx->pc = 0x14E280u;
    SET_GPR_U32(ctx, 31, 0x14E288u);
    ctx->pc = 0x14E284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E280u;
            // 0x14e284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E288u; }
        if (ctx->pc != 0x14E288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E288u; }
        if (ctx->pc != 0x14E288u) { return; }
    }
    ctx->pc = 0x14E288u;
label_14e288:
    // 0x14e288: 0x1000000b  b           . + 4 + (0xB << 2)
label_14e28c:
    if (ctx->pc == 0x14E28Cu) {
        ctx->pc = 0x14E290u;
        goto label_14e290;
    }
    ctx->pc = 0x14E288u;
    {
        const bool branch_taken_0x14e288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e288) {
            ctx->pc = 0x14E2B8u;
            goto label_14e2b8;
        }
    }
    ctx->pc = 0x14E290u;
label_14e290:
    // 0x14e290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e294:
    // 0x14e294: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x14e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_14e298:
    // 0x14e298: 0x40f809  jalr        $v0
label_14e29c:
    if (ctx->pc == 0x14E29Cu) {
        ctx->pc = 0x14E29Cu;
            // 0x14e29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E2A0u;
        goto label_14e2a0;
    }
    ctx->pc = 0x14E298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E2A0u);
        ctx->pc = 0x14E29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E298u;
            // 0x14e29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14E2A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14E2A0u; }
            if (ctx->pc != 0x14E2A0u) { return; }
        }
        }
    }
    ctx->pc = 0x14E2A0u;
label_14e2a0:
    // 0x14e2a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_14e2a4:
    if (ctx->pc == 0x14E2A4u) {
        ctx->pc = 0x14E2A8u;
        goto label_14e2a8;
    }
    ctx->pc = 0x14E2A0u;
    {
        const bool branch_taken_0x14e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2a0) {
            ctx->pc = 0x14E2B8u;
            goto label_14e2b8;
        }
    }
    ctx->pc = 0x14E2A8u;
label_14e2a8:
    // 0x14e2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e2ac:
    // 0x14e2ac: 0xc04e550  jal         func_139540
label_14e2b0:
    if (ctx->pc == 0x14E2B0u) {
        ctx->pc = 0x14E2B0u;
            // 0x14e2b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x14E2B4u;
        goto label_14e2b4;
    }
    ctx->pc = 0x14E2ACu;
    SET_GPR_U32(ctx, 31, 0x14E2B4u);
    ctx->pc = 0x14E2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E2ACu;
            // 0x14e2b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2B4u; }
        if (ctx->pc != 0x14E2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2B4u; }
        if (ctx->pc != 0x14E2B4u) { return; }
    }
    ctx->pc = 0x14E2B4u;
label_14e2b4:
    // 0x14e2b4: 0x0  nop
    ctx->pc = 0x14e2b4u;
    // NOP
label_14e2b8:
    // 0x14e2b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14e2bc:
    // 0x14e2bc: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x14e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_14e2c0:
    // 0x14e2c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14e2c4:
    // 0x14e2c4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x14e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_14e2c8:
    // 0x14e2c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14e2cc:
    // 0x14e2cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14e2d0:
    if (ctx->pc == 0x14E2D0u) {
        ctx->pc = 0x14E2D4u;
        goto label_14e2d4;
    }
    ctx->pc = 0x14E2CCu;
    {
        const bool branch_taken_0x14e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2cc) {
            ctx->pc = 0x14E2F0u;
            goto label_14e2f0;
        }
    }
    ctx->pc = 0x14E2D4u;
label_14e2d4:
    // 0x14e2d4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x14e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_14e2d8:
    // 0x14e2d8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x14e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_14e2dc:
    // 0x14e2dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_14e2e0:
    // 0x14e2e0: 0xc054484  jal         func_151210
label_14e2e4:
    if (ctx->pc == 0x14E2E4u) {
        ctx->pc = 0x14E2E4u;
            // 0x14e2e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14E2E8u;
        goto label_14e2e8;
    }
    ctx->pc = 0x14E2E0u;
    SET_GPR_U32(ctx, 31, 0x14E2E8u);
    ctx->pc = 0x14E2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E2E0u;
            // 0x14e2e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2E8u; }
        if (ctx->pc != 0x14E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2E8u; }
        if (ctx->pc != 0x14E2E8u) { return; }
    }
    ctx->pc = 0x14E2E8u;
label_14e2e8:
    // 0x14e2e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_14e2ec:
    if (ctx->pc == 0x14E2ECu) {
        ctx->pc = 0x14E2F0u;
        goto label_14e2f0;
    }
    ctx->pc = 0x14E2E8u;
    {
        const bool branch_taken_0x14e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2e8) {
            ctx->pc = 0x14E2F8u;
            goto label_14e2f8;
        }
    }
    ctx->pc = 0x14E2F0u;
label_14e2f0:
    // 0x14e2f0: 0xc053a0c  jal         func_14E830
label_14e2f4:
    if (ctx->pc == 0x14E2F4u) {
        ctx->pc = 0x14E2F8u;
        goto label_14e2f8;
    }
    ctx->pc = 0x14E2F0u;
    SET_GPR_U32(ctx, 31, 0x14E2F8u);
    ctx->pc = 0x14E830u;
    if (runtime->hasFunction(0x14E830u)) {
        auto targetFn = runtime->lookupFunction(0x14E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2F8u; }
        if (ctx->pc != 0x14E2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E830_0x14e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2F8u; }
        if (ctx->pc != 0x14E2F8u) { return; }
    }
    ctx->pc = 0x14E2F8u;
label_14e2f8:
    // 0x14e2f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e2fc:
    // 0x14e2fc: 0x8c63579c  lw          $v1, 0x579C($v1)
    ctx->pc = 0x14e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22428)));
label_14e300:
    // 0x14e300: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_14e304:
    if (ctx->pc == 0x14E304u) {
        ctx->pc = 0x14E308u;
        goto label_14e308;
    }
    ctx->pc = 0x14E300u;
    {
        const bool branch_taken_0x14e300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e300) {
            ctx->pc = 0x14E320u;
            goto label_14e320;
        }
    }
    ctx->pc = 0x14E308u;
label_14e308:
    // 0x14e308: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14e308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_14e30c:
    // 0x14e30c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e310:
    // 0x14e310: 0x8c845774  lw          $a0, 0x5774($a0)
    ctx->pc = 0x14e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22388)));
label_14e314:
    // 0x14e314: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x14e314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_14e318:
    // 0x14e318: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_14e31c:
    // 0x14e31c: 0xac645774  sw          $a0, 0x5774($v1)
    ctx->pc = 0x14e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 4));
label_14e320:
    // 0x14e320: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14e324:
    // 0x14e324: 0x8c645774  lw          $a0, 0x5774($v1)
    ctx->pc = 0x14e324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22388)));
label_14e328:
    // 0x14e328: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14e32c:
    // 0x14e32c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x14e32cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_14e330:
    // 0x14e330: 0x5460ff15  bnel        $v1, $zero, . + 4 + (-0xEB << 2)
label_14e334:
    if (ctx->pc == 0x14E334u) {
        ctx->pc = 0x14E334u;
            // 0x14e334: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x14E338u;
        goto label_14e338;
    }
    ctx->pc = 0x14E330u;
    {
        const bool branch_taken_0x14e330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e330) {
            ctx->pc = 0x14E334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E330u;
            // 0x14e334: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DF88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14df88;
        }
    }
    ctx->pc = 0x14E338u;
label_14e338:
    // 0x14e338: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14e338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_14e33c:
    // 0x14e33c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14e33cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14e340:
    // 0x14e340: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14e340u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14e344:
    // 0x14e344: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e344u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14e348:
    // 0x14e348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14e34c:
    // 0x14e34c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e34cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14e350:
    // 0x14e350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14e354:
    // 0x14e354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14e358:
    // 0x14e358: 0x3e00008  jr          $ra
label_14e35c:
    if (ctx->pc == 0x14E35Cu) {
        ctx->pc = 0x14E35Cu;
            // 0x14e35c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x14E360u;
        goto label_fallthrough_0x14e358;
    }
    ctx->pc = 0x14E358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E358u;
            // 0x14e35c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x14e358:
    ctx->pc = 0x14E360u;
}
