#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DF20
// Address: 0x22df20 - 0x22e320
void sub_0022DF20_0x22df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DF20_0x22df20");
#endif

    switch (ctx->pc) {
        case 0x22df20u: goto label_22df20;
        case 0x22df24u: goto label_22df24;
        case 0x22df28u: goto label_22df28;
        case 0x22df2cu: goto label_22df2c;
        case 0x22df30u: goto label_22df30;
        case 0x22df34u: goto label_22df34;
        case 0x22df38u: goto label_22df38;
        case 0x22df3cu: goto label_22df3c;
        case 0x22df40u: goto label_22df40;
        case 0x22df44u: goto label_22df44;
        case 0x22df48u: goto label_22df48;
        case 0x22df4cu: goto label_22df4c;
        case 0x22df50u: goto label_22df50;
        case 0x22df54u: goto label_22df54;
        case 0x22df58u: goto label_22df58;
        case 0x22df5cu: goto label_22df5c;
        case 0x22df60u: goto label_22df60;
        case 0x22df64u: goto label_22df64;
        case 0x22df68u: goto label_22df68;
        case 0x22df6cu: goto label_22df6c;
        case 0x22df70u: goto label_22df70;
        case 0x22df74u: goto label_22df74;
        case 0x22df78u: goto label_22df78;
        case 0x22df7cu: goto label_22df7c;
        case 0x22df80u: goto label_22df80;
        case 0x22df84u: goto label_22df84;
        case 0x22df88u: goto label_22df88;
        case 0x22df8cu: goto label_22df8c;
        case 0x22df90u: goto label_22df90;
        case 0x22df94u: goto label_22df94;
        case 0x22df98u: goto label_22df98;
        case 0x22df9cu: goto label_22df9c;
        case 0x22dfa0u: goto label_22dfa0;
        case 0x22dfa4u: goto label_22dfa4;
        case 0x22dfa8u: goto label_22dfa8;
        case 0x22dfacu: goto label_22dfac;
        case 0x22dfb0u: goto label_22dfb0;
        case 0x22dfb4u: goto label_22dfb4;
        case 0x22dfb8u: goto label_22dfb8;
        case 0x22dfbcu: goto label_22dfbc;
        case 0x22dfc0u: goto label_22dfc0;
        case 0x22dfc4u: goto label_22dfc4;
        case 0x22dfc8u: goto label_22dfc8;
        case 0x22dfccu: goto label_22dfcc;
        case 0x22dfd0u: goto label_22dfd0;
        case 0x22dfd4u: goto label_22dfd4;
        case 0x22dfd8u: goto label_22dfd8;
        case 0x22dfdcu: goto label_22dfdc;
        case 0x22dfe0u: goto label_22dfe0;
        case 0x22dfe4u: goto label_22dfe4;
        case 0x22dfe8u: goto label_22dfe8;
        case 0x22dfecu: goto label_22dfec;
        case 0x22dff0u: goto label_22dff0;
        case 0x22dff4u: goto label_22dff4;
        case 0x22dff8u: goto label_22dff8;
        case 0x22dffcu: goto label_22dffc;
        case 0x22e000u: goto label_22e000;
        case 0x22e004u: goto label_22e004;
        case 0x22e008u: goto label_22e008;
        case 0x22e00cu: goto label_22e00c;
        case 0x22e010u: goto label_22e010;
        case 0x22e014u: goto label_22e014;
        case 0x22e018u: goto label_22e018;
        case 0x22e01cu: goto label_22e01c;
        case 0x22e020u: goto label_22e020;
        case 0x22e024u: goto label_22e024;
        case 0x22e028u: goto label_22e028;
        case 0x22e02cu: goto label_22e02c;
        case 0x22e030u: goto label_22e030;
        case 0x22e034u: goto label_22e034;
        case 0x22e038u: goto label_22e038;
        case 0x22e03cu: goto label_22e03c;
        case 0x22e040u: goto label_22e040;
        case 0x22e044u: goto label_22e044;
        case 0x22e048u: goto label_22e048;
        case 0x22e04cu: goto label_22e04c;
        case 0x22e050u: goto label_22e050;
        case 0x22e054u: goto label_22e054;
        case 0x22e058u: goto label_22e058;
        case 0x22e05cu: goto label_22e05c;
        case 0x22e060u: goto label_22e060;
        case 0x22e064u: goto label_22e064;
        case 0x22e068u: goto label_22e068;
        case 0x22e06cu: goto label_22e06c;
        case 0x22e070u: goto label_22e070;
        case 0x22e074u: goto label_22e074;
        case 0x22e078u: goto label_22e078;
        case 0x22e07cu: goto label_22e07c;
        case 0x22e080u: goto label_22e080;
        case 0x22e084u: goto label_22e084;
        case 0x22e088u: goto label_22e088;
        case 0x22e08cu: goto label_22e08c;
        case 0x22e090u: goto label_22e090;
        case 0x22e094u: goto label_22e094;
        case 0x22e098u: goto label_22e098;
        case 0x22e09cu: goto label_22e09c;
        case 0x22e0a0u: goto label_22e0a0;
        case 0x22e0a4u: goto label_22e0a4;
        case 0x22e0a8u: goto label_22e0a8;
        case 0x22e0acu: goto label_22e0ac;
        case 0x22e0b0u: goto label_22e0b0;
        case 0x22e0b4u: goto label_22e0b4;
        case 0x22e0b8u: goto label_22e0b8;
        case 0x22e0bcu: goto label_22e0bc;
        case 0x22e0c0u: goto label_22e0c0;
        case 0x22e0c4u: goto label_22e0c4;
        case 0x22e0c8u: goto label_22e0c8;
        case 0x22e0ccu: goto label_22e0cc;
        case 0x22e0d0u: goto label_22e0d0;
        case 0x22e0d4u: goto label_22e0d4;
        case 0x22e0d8u: goto label_22e0d8;
        case 0x22e0dcu: goto label_22e0dc;
        case 0x22e0e0u: goto label_22e0e0;
        case 0x22e0e4u: goto label_22e0e4;
        case 0x22e0e8u: goto label_22e0e8;
        case 0x22e0ecu: goto label_22e0ec;
        case 0x22e0f0u: goto label_22e0f0;
        case 0x22e0f4u: goto label_22e0f4;
        case 0x22e0f8u: goto label_22e0f8;
        case 0x22e0fcu: goto label_22e0fc;
        case 0x22e100u: goto label_22e100;
        case 0x22e104u: goto label_22e104;
        case 0x22e108u: goto label_22e108;
        case 0x22e10cu: goto label_22e10c;
        case 0x22e110u: goto label_22e110;
        case 0x22e114u: goto label_22e114;
        case 0x22e118u: goto label_22e118;
        case 0x22e11cu: goto label_22e11c;
        case 0x22e120u: goto label_22e120;
        case 0x22e124u: goto label_22e124;
        case 0x22e128u: goto label_22e128;
        case 0x22e12cu: goto label_22e12c;
        case 0x22e130u: goto label_22e130;
        case 0x22e134u: goto label_22e134;
        case 0x22e138u: goto label_22e138;
        case 0x22e13cu: goto label_22e13c;
        case 0x22e140u: goto label_22e140;
        case 0x22e144u: goto label_22e144;
        case 0x22e148u: goto label_22e148;
        case 0x22e14cu: goto label_22e14c;
        case 0x22e150u: goto label_22e150;
        case 0x22e154u: goto label_22e154;
        case 0x22e158u: goto label_22e158;
        case 0x22e15cu: goto label_22e15c;
        case 0x22e160u: goto label_22e160;
        case 0x22e164u: goto label_22e164;
        case 0x22e168u: goto label_22e168;
        case 0x22e16cu: goto label_22e16c;
        case 0x22e170u: goto label_22e170;
        case 0x22e174u: goto label_22e174;
        case 0x22e178u: goto label_22e178;
        case 0x22e17cu: goto label_22e17c;
        case 0x22e180u: goto label_22e180;
        case 0x22e184u: goto label_22e184;
        case 0x22e188u: goto label_22e188;
        case 0x22e18cu: goto label_22e18c;
        case 0x22e190u: goto label_22e190;
        case 0x22e194u: goto label_22e194;
        case 0x22e198u: goto label_22e198;
        case 0x22e19cu: goto label_22e19c;
        case 0x22e1a0u: goto label_22e1a0;
        case 0x22e1a4u: goto label_22e1a4;
        case 0x22e1a8u: goto label_22e1a8;
        case 0x22e1acu: goto label_22e1ac;
        case 0x22e1b0u: goto label_22e1b0;
        case 0x22e1b4u: goto label_22e1b4;
        case 0x22e1b8u: goto label_22e1b8;
        case 0x22e1bcu: goto label_22e1bc;
        case 0x22e1c0u: goto label_22e1c0;
        case 0x22e1c4u: goto label_22e1c4;
        case 0x22e1c8u: goto label_22e1c8;
        case 0x22e1ccu: goto label_22e1cc;
        case 0x22e1d0u: goto label_22e1d0;
        case 0x22e1d4u: goto label_22e1d4;
        case 0x22e1d8u: goto label_22e1d8;
        case 0x22e1dcu: goto label_22e1dc;
        case 0x22e1e0u: goto label_22e1e0;
        case 0x22e1e4u: goto label_22e1e4;
        case 0x22e1e8u: goto label_22e1e8;
        case 0x22e1ecu: goto label_22e1ec;
        case 0x22e1f0u: goto label_22e1f0;
        case 0x22e1f4u: goto label_22e1f4;
        case 0x22e1f8u: goto label_22e1f8;
        case 0x22e1fcu: goto label_22e1fc;
        case 0x22e200u: goto label_22e200;
        case 0x22e204u: goto label_22e204;
        case 0x22e208u: goto label_22e208;
        case 0x22e20cu: goto label_22e20c;
        case 0x22e210u: goto label_22e210;
        case 0x22e214u: goto label_22e214;
        case 0x22e218u: goto label_22e218;
        case 0x22e21cu: goto label_22e21c;
        case 0x22e220u: goto label_22e220;
        case 0x22e224u: goto label_22e224;
        case 0x22e228u: goto label_22e228;
        case 0x22e22cu: goto label_22e22c;
        case 0x22e230u: goto label_22e230;
        case 0x22e234u: goto label_22e234;
        case 0x22e238u: goto label_22e238;
        case 0x22e23cu: goto label_22e23c;
        case 0x22e240u: goto label_22e240;
        case 0x22e244u: goto label_22e244;
        case 0x22e248u: goto label_22e248;
        case 0x22e24cu: goto label_22e24c;
        case 0x22e250u: goto label_22e250;
        case 0x22e254u: goto label_22e254;
        case 0x22e258u: goto label_22e258;
        case 0x22e25cu: goto label_22e25c;
        case 0x22e260u: goto label_22e260;
        case 0x22e264u: goto label_22e264;
        case 0x22e268u: goto label_22e268;
        case 0x22e26cu: goto label_22e26c;
        case 0x22e270u: goto label_22e270;
        case 0x22e274u: goto label_22e274;
        case 0x22e278u: goto label_22e278;
        case 0x22e27cu: goto label_22e27c;
        case 0x22e280u: goto label_22e280;
        case 0x22e284u: goto label_22e284;
        case 0x22e288u: goto label_22e288;
        case 0x22e28cu: goto label_22e28c;
        case 0x22e290u: goto label_22e290;
        case 0x22e294u: goto label_22e294;
        case 0x22e298u: goto label_22e298;
        case 0x22e29cu: goto label_22e29c;
        case 0x22e2a0u: goto label_22e2a0;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2a8u: goto label_22e2a8;
        case 0x22e2acu: goto label_22e2ac;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2b4u: goto label_22e2b4;
        case 0x22e2b8u: goto label_22e2b8;
        case 0x22e2bcu: goto label_22e2bc;
        case 0x22e2c0u: goto label_22e2c0;
        case 0x22e2c4u: goto label_22e2c4;
        case 0x22e2c8u: goto label_22e2c8;
        case 0x22e2ccu: goto label_22e2cc;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e2d4u: goto label_22e2d4;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e2dcu: goto label_22e2dc;
        case 0x22e2e0u: goto label_22e2e0;
        case 0x22e2e4u: goto label_22e2e4;
        case 0x22e2e8u: goto label_22e2e8;
        case 0x22e2ecu: goto label_22e2ec;
        case 0x22e2f0u: goto label_22e2f0;
        case 0x22e2f4u: goto label_22e2f4;
        case 0x22e2f8u: goto label_22e2f8;
        case 0x22e2fcu: goto label_22e2fc;
        case 0x22e300u: goto label_22e300;
        case 0x22e304u: goto label_22e304;
        case 0x22e308u: goto label_22e308;
        case 0x22e30cu: goto label_22e30c;
        case 0x22e310u: goto label_22e310;
        case 0x22e314u: goto label_22e314;
        case 0x22e318u: goto label_22e318;
        case 0x22e31cu: goto label_22e31c;
        default: break;
    }

    ctx->pc = 0x22df20u;

label_22df20:
    // 0x22df20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_22df24:
    // 0x22df24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_22df28:
    // 0x22df28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22df28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_22df2c:
    // 0x22df2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22df2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_22df30:
    // 0x22df30: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x22df30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22df34:
    // 0x22df34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22df34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22df38:
    // 0x22df38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22df38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22df3c:
    // 0x22df3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x22df3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22df40:
    // 0x22df40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22df44:
    // 0x22df44: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x22df44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22df48:
    // 0x22df48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22df4c:
    // 0x22df4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22df50:
    // 0x22df50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22df54:
    // 0x22df54: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x22df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_22df58:
    // 0x22df58: 0x18600031  blez        $v1, . + 4 + (0x31 << 2)
label_22df5c:
    if (ctx->pc == 0x22DF5Cu) {
        ctx->pc = 0x22DF5Cu;
            // 0x22df5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF60u;
        goto label_22df60;
    }
    ctx->pc = 0x22DF58u;
    {
        const bool branch_taken_0x22df58 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22DF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF58u;
            // 0x22df5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df58) {
            ctx->pc = 0x22E020u;
            goto label_22e020;
        }
    }
    ctx->pc = 0x22DF60u;
label_22df60:
    // 0x22df60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22df60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22df64:
    // 0x22df64: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x22df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_22df68:
    // 0x22df68: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22df68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22df6c:
    // 0x22df6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22df70:
    // 0x22df70: 0x24760010  addiu       $s6, $v1, 0x10
    ctx->pc = 0x22df70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_22df74:
    // 0x22df74: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x22df74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_22df78:
    // 0x22df78: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
label_22df7c:
    if (ctx->pc == 0x22DF7Cu) {
        ctx->pc = 0x22DF7Cu;
            // 0x22df7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF80u;
        goto label_22df80;
    }
    ctx->pc = 0x22DF78u;
    {
        const bool branch_taken_0x22df78 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22DF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF78u;
            // 0x22df7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df78) {
            ctx->pc = 0x22E008u;
            goto label_22e008;
        }
    }
    ctx->pc = 0x22DF80u;
label_22df80:
    // 0x22df80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22df80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22df84:
    // 0x22df84: 0x0  nop
    ctx->pc = 0x22df84u;
    // NOP
label_22df88:
    // 0x22df88: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x22df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_22df8c:
    // 0x22df8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22df90:
    // 0x22df90: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22df90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22df94:
    // 0x22df94: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x22df94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_22df98:
    // 0x22df98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22df9c:
    // 0x22df9c: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x22df9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_22dfa0:
    // 0x22dfa0: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x22dfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_22dfa4:
    // 0x22dfa4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22dfa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22dfa8:
    // 0x22dfa8: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_22dfac:
    if (ctx->pc == 0x22DFACu) {
        ctx->pc = 0x22DFACu;
            // 0x22dfac: 0x8ec30028  lw          $v1, 0x28($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
        ctx->pc = 0x22DFB0u;
        goto label_22dfb0;
    }
    ctx->pc = 0x22DFA8u;
    {
        const bool branch_taken_0x22dfa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dfa8) {
            ctx->pc = 0x22DFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DFA8u;
            // 0x22dfac: 0x8ec30028  lw          $v1, 0x28($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DFF4u;
            goto label_22dff4;
        }
    }
    ctx->pc = 0x22DFB0u;
label_22dfb0:
    // 0x22dfb0: 0x9486006c  lhu         $a2, 0x6C($a0)
    ctx->pc = 0x22dfb0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
label_22dfb4:
    // 0x22dfb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22dfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22dfb8:
    // 0x22dfb8: 0xc0a7c00  jal         func_29F000
label_22dfbc:
    if (ctx->pc == 0x22DFBCu) {
        ctx->pc = 0x22DFBCu;
            // 0x22dfbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DFC0u;
        goto label_22dfc0;
    }
    ctx->pc = 0x22DFB8u;
    SET_GPR_U32(ctx, 31, 0x22DFC0u);
    ctx->pc = 0x22DFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DFB8u;
            // 0x22dfbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F000u;
    if (runtime->hasFunction(0x29F000u)) {
        auto targetFn = runtime->lookupFunction(0x29F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DFC0u; }
        if (ctx->pc != 0x22DFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029F000_0x29f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DFC0u; }
        if (ctx->pc != 0x22DFC0u) { return; }
    }
    ctx->pc = 0x22DFC0u;
label_22dfc0:
    // 0x22dfc0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x22dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dfc4:
    // 0x22dfc4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x22dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_22dfc8:
    // 0x22dfc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22dfcc:
    // 0x22dfcc: 0x42023  negu        $a0, $a0
    ctx->pc = 0x22dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_22dfd0:
    // 0x22dfd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22dfd4:
    // 0x22dfd4: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x22dfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_22dfd8:
    // 0x22dfd8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22dfd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22dfdc:
    // 0x22dfdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22dfe0:
    if (ctx->pc == 0x22DFE0u) {
        ctx->pc = 0x22DFE4u;
        goto label_22dfe4;
    }
    ctx->pc = 0x22DFDCu;
    {
        const bool branch_taken_0x22dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dfdc) {
            ctx->pc = 0x22DFF0u;
            goto label_22dff0;
        }
    }
    ctx->pc = 0x22DFE4u;
label_22dfe4:
    // 0x22dfe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22dfe8:
    // 0x22dfe8: 0x100000bf  b           . + 4 + (0xBF << 2)
label_22dfec:
    if (ctx->pc == 0x22DFECu) {
        ctx->pc = 0x22DFECu;
            // 0x22dfec: 0xa2e30000  sb          $v1, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22DFF0u;
        goto label_22dff0;
    }
    ctx->pc = 0x22DFE8u;
    {
        const bool branch_taken_0x22dfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DFE8u;
            // 0x22dfec: 0xa2e30000  sb          $v1, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfe8) {
            ctx->pc = 0x22E2E8u;
            goto label_22e2e8;
        }
    }
    ctx->pc = 0x22DFF0u;
label_22dff0:
    // 0x22dff0: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x22dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_22dff4:
    // 0x22dff4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22dff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22dff8:
    // 0x22dff8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x22dff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22dffc:
    // 0x22dffc: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_22e000:
    if (ctx->pc == 0x22E000u) {
        ctx->pc = 0x22E000u;
            // 0x22e000: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x22E004u;
        goto label_22e004;
    }
    ctx->pc = 0x22DFFCu;
    {
        const bool branch_taken_0x22dffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DFFCu;
            // 0x22e000: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dffc) {
            ctx->pc = 0x22DF88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22df88;
        }
    }
    ctx->pc = 0x22E004u;
label_22e004:
    // 0x22e004: 0x0  nop
    ctx->pc = 0x22e004u;
    // NOP
label_22e008:
    // 0x22e008: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x22e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_22e00c:
    // 0x22e00c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22e00cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22e010:
    // 0x22e010: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x22e010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22e014:
    // 0x22e014: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_22e018:
    if (ctx->pc == 0x22E018u) {
        ctx->pc = 0x22E018u;
            // 0x22e018: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x22E01Cu;
        goto label_22e01c;
    }
    ctx->pc = 0x22E014u;
    {
        const bool branch_taken_0x22e014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E014u;
            // 0x22e018: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e014) {
            ctx->pc = 0x22DF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22df64;
        }
    }
    ctx->pc = 0x22E01Cu;
label_22e01c:
    // 0x22e01c: 0x0  nop
    ctx->pc = 0x22e01cu;
    // NOP
label_22e020:
    // 0x22e020: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x22e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_22e024:
    // 0x22e024: 0x18600034  blez        $v1, . + 4 + (0x34 << 2)
label_22e028:
    if (ctx->pc == 0x22E028u) {
        ctx->pc = 0x22E028u;
            // 0x22e028: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E02Cu;
        goto label_22e02c;
    }
    ctx->pc = 0x22E024u;
    {
        const bool branch_taken_0x22e024 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22E028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E024u;
            // 0x22e028: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e024) {
            ctx->pc = 0x22E0F8u;
            goto label_22e0f8;
        }
    }
    ctx->pc = 0x22E02Cu;
label_22e02c:
    // 0x22e02c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e030:
    // 0x22e030: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x22e030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_22e034:
    // 0x22e034: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22e034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22e038:
    // 0x22e038: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x22e038u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e03c:
    // 0x22e03c: 0x96c30074  lhu         $v1, 0x74($s6)
    ctx->pc = 0x22e03cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 116)));
label_22e040:
    // 0x22e040: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
label_22e044:
    if (ctx->pc == 0x22E044u) {
        ctx->pc = 0x22E044u;
            // 0x22e044: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E048u;
        goto label_22e048;
    }
    ctx->pc = 0x22E040u;
    {
        const bool branch_taken_0x22e040 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E040u;
            // 0x22e044: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e040) {
            ctx->pc = 0x22E0E0u;
            goto label_22e0e0;
        }
    }
    ctx->pc = 0x22E048u;
label_22e048:
    // 0x22e048: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e04c:
    // 0x22e04c: 0x0  nop
    ctx->pc = 0x22e04cu;
    // NOP
label_22e050:
    // 0x22e050: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x22e050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_22e054:
    // 0x22e054: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x22e054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22e058:
    // 0x22e058: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x22e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22e05c:
    // 0x22e05c: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x22e05cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_22e060:
    // 0x22e060: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x22e060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_22e064:
    // 0x22e064: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22e064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e068:
    // 0x22e068: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
label_22e06c:
    if (ctx->pc == 0x22E06Cu) {
        ctx->pc = 0x22E06Cu;
            // 0x22e06c: 0x96c30074  lhu         $v1, 0x74($s6) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 116)));
        ctx->pc = 0x22E070u;
        goto label_22e070;
    }
    ctx->pc = 0x22E068u;
    {
        const bool branch_taken_0x22e068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e068) {
            ctx->pc = 0x22E06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E068u;
            // 0x22e06c: 0x96c30074  lhu         $v1, 0x74($s6) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E0CCu;
            goto label_22e0cc;
        }
    }
    ctx->pc = 0x22E070u;
label_22e070:
    // 0x22e070: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x22e070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_22e074:
    // 0x22e074: 0x90c300a8  lbu         $v1, 0xA8($a2)
    ctx->pc = 0x22e074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 168)));
label_22e078:
    // 0x22e078: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x22e078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_22e07c:
    // 0x22e07c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22e07cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e080:
    // 0x22e080: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_22e084:
    if (ctx->pc == 0x22E084u) {
        ctx->pc = 0x22E088u;
        goto label_22e088;
    }
    ctx->pc = 0x22E080u;
    {
        const bool branch_taken_0x22e080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e080) {
            ctx->pc = 0x22E0C8u;
            goto label_22e0c8;
        }
    }
    ctx->pc = 0x22E088u;
label_22e088:
    // 0x22e088: 0x9485006c  lhu         $a1, 0x6C($a0)
    ctx->pc = 0x22e088u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
label_22e08c:
    // 0x22e08c: 0x94c6006c  lhu         $a2, 0x6C($a2)
    ctx->pc = 0x22e08cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 108)));
label_22e090:
    // 0x22e090: 0xc0a7c00  jal         func_29F000
label_22e094:
    if (ctx->pc == 0x22E094u) {
        ctx->pc = 0x22E094u;
            // 0x22e094: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E098u;
        goto label_22e098;
    }
    ctx->pc = 0x22E090u;
    SET_GPR_U32(ctx, 31, 0x22E098u);
    ctx->pc = 0x22E094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E090u;
            // 0x22e094: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F000u;
    if (runtime->hasFunction(0x29F000u)) {
        auto targetFn = runtime->lookupFunction(0x29F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E098u; }
        if (ctx->pc != 0x22E098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029F000_0x29f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E098u; }
        if (ctx->pc != 0x22E098u) { return; }
    }
    ctx->pc = 0x22E098u;
label_22e098:
    // 0x22e098: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22e09c:
    // 0x22e09c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x22e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_22e0a0:
    // 0x22e0a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e0a4:
    // 0x22e0a4: 0x42023  negu        $a0, $a0
    ctx->pc = 0x22e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_22e0a8:
    // 0x22e0a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e0ac:
    // 0x22e0ac: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x22e0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_22e0b0:
    // 0x22e0b0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22e0b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e0b4:
    // 0x22e0b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22e0b8:
    if (ctx->pc == 0x22E0B8u) {
        ctx->pc = 0x22E0BCu;
        goto label_22e0bc;
    }
    ctx->pc = 0x22E0B4u;
    {
        const bool branch_taken_0x22e0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0b4) {
            ctx->pc = 0x22E0C8u;
            goto label_22e0c8;
        }
    }
    ctx->pc = 0x22E0BCu;
label_22e0bc:
    // 0x22e0bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e0c0:
    // 0x22e0c0: 0x10000089  b           . + 4 + (0x89 << 2)
label_22e0c4:
    if (ctx->pc == 0x22E0C4u) {
        ctx->pc = 0x22E0C4u;
            // 0x22e0c4: 0xa2e30000  sb          $v1, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22E0C8u;
        goto label_22e0c8;
    }
    ctx->pc = 0x22E0C0u;
    {
        const bool branch_taken_0x22e0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0C0u;
            // 0x22e0c4: 0xa2e30000  sb          $v1, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0c0) {
            ctx->pc = 0x22E2E8u;
            goto label_22e2e8;
        }
    }
    ctx->pc = 0x22E0C8u;
label_22e0c8:
    // 0x22e0c8: 0x96c30074  lhu         $v1, 0x74($s6)
    ctx->pc = 0x22e0c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 116)));
label_22e0cc:
    // 0x22e0cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22e0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22e0d0:
    // 0x22e0d0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x22e0d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22e0d4:
    // 0x22e0d4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_22e0d8:
    if (ctx->pc == 0x22E0D8u) {
        ctx->pc = 0x22E0D8u;
            // 0x22e0d8: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x22E0DCu;
        goto label_22e0dc;
    }
    ctx->pc = 0x22E0D4u;
    {
        const bool branch_taken_0x22e0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0D4u;
            // 0x22e0d8: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0d4) {
            ctx->pc = 0x22E050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e050;
        }
    }
    ctx->pc = 0x22E0DCu;
label_22e0dc:
    // 0x22e0dc: 0x0  nop
    ctx->pc = 0x22e0dcu;
    // NOP
label_22e0e0:
    // 0x22e0e0: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x22e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_22e0e4:
    // 0x22e0e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22e0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22e0e8:
    // 0x22e0e8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x22e0e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22e0ec:
    // 0x22e0ec: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
label_22e0f0:
    if (ctx->pc == 0x22E0F0u) {
        ctx->pc = 0x22E0F0u;
            // 0x22e0f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x22E0F4u;
        goto label_22e0f4;
    }
    ctx->pc = 0x22E0ECu;
    {
        const bool branch_taken_0x22e0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0ECu;
            // 0x22e0f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0ec) {
            ctx->pc = 0x22E030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e030;
        }
    }
    ctx->pc = 0x22E0F4u;
label_22e0f4:
    // 0x22e0f4: 0x0  nop
    ctx->pc = 0x22e0f4u;
    // NOP
label_22e0f8:
    // 0x22e0f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22e0fc:
    // 0x22e0fc: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x22e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_22e100:
    // 0x22e100: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x22e100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_22e104:
    // 0x22e104: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x22e104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_22e108:
    // 0x22e108: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x22e108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_22e10c:
    // 0x22e10c: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x22e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_22e110:
    // 0x22e110: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x22e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_22e114:
    // 0x22e114: 0x1860005e  blez        $v1, . + 4 + (0x5E << 2)
label_22e118:
    if (ctx->pc == 0x22E118u) {
        ctx->pc = 0x22E118u;
            // 0x22e118: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E11Cu;
        goto label_22e11c;
    }
    ctx->pc = 0x22E114u;
    {
        const bool branch_taken_0x22e114 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E114u;
            // 0x22e118: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e114) {
            ctx->pc = 0x22E290u;
            goto label_22e290;
        }
    }
    ctx->pc = 0x22E11Cu;
label_22e11c:
    // 0x22e11c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e120:
    // 0x22e120: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x22e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_22e124:
    // 0x22e124: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22e128:
    // 0x22e128: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22e128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e12c:
    // 0x22e12c: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
label_22e130:
    if (ctx->pc == 0x22E130u) {
        ctx->pc = 0x22E134u;
        goto label_22e134;
    }
    ctx->pc = 0x22E12Cu;
    {
        const bool branch_taken_0x22e12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e12c) {
            ctx->pc = 0x22E278u;
            goto label_22e278;
        }
    }
    ctx->pc = 0x22E134u;
label_22e134:
    // 0x22e134: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x22e134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_22e138:
    // 0x22e138: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e13c:
    // 0x22e13c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x22e13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22e140:
    // 0x22e140: 0x320f809  jalr        $t9
label_22e144:
    if (ctx->pc == 0x22E144u) {
        ctx->pc = 0x22E144u;
            // 0x22e144: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x22E148u;
        goto label_22e148;
    }
    ctx->pc = 0x22E140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E148u);
        ctx->pc = 0x22E144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E140u;
            // 0x22e144: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E148u; }
            if (ctx->pc != 0x22E148u) { return; }
        }
        }
    }
    ctx->pc = 0x22E148u;
label_22e148:
    // 0x22e148: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x22e148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_22e14c:
    // 0x22e14c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x22e14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22e150:
    // 0x22e150: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x22e150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_22e154:
    // 0x22e154: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22e154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e158:
    // 0x22e158: 0x1000000b  b           . + 4 + (0xB << 2)
label_22e15c:
    if (ctx->pc == 0x22E15Cu) {
        ctx->pc = 0x22E15Cu;
            // 0x22e15c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E160u;
        goto label_22e160;
    }
    ctx->pc = 0x22E158u;
    {
        const bool branch_taken_0x22e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E158u;
            // 0x22e15c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e158) {
            ctx->pc = 0x22E188u;
            goto label_22e188;
        }
    }
    ctx->pc = 0x22E160u;
label_22e160:
    // 0x22e160: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22e164:
    // 0x22e164: 0x906300a8  lbu         $v1, 0xA8($v1)
    ctx->pc = 0x22e164u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
label_22e168:
    // 0x22e168: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x22e168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_22e16c:
    // 0x22e16c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22e16cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e170:
    // 0x22e170: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22e174:
    if (ctx->pc == 0x22E174u) {
        ctx->pc = 0x22E178u;
        goto label_22e178;
    }
    ctx->pc = 0x22E170u;
    {
        const bool branch_taken_0x22e170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e170) {
            ctx->pc = 0x22E180u;
            goto label_22e180;
        }
    }
    ctx->pc = 0x22E178u;
label_22e178:
    // 0x22e178: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22e178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e17c:
    // 0x22e17c: 0x0  nop
    ctx->pc = 0x22e17cu;
    // NOP
label_22e180:
    // 0x22e180: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_22e184:
    // 0x22e184: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22e184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22e188:
    // 0x22e188: 0x14e40005  bne         $a3, $a0, . + 4 + (0x5 << 2)
label_22e18c:
    if (ctx->pc == 0x22E18Cu) {
        ctx->pc = 0x22E190u;
        goto label_22e190;
    }
    ctx->pc = 0x22E188u;
    {
        const bool branch_taken_0x22e188 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x22e188) {
            ctx->pc = 0x22E1A0u;
            goto label_22e1a0;
        }
    }
    ctx->pc = 0x22E190u;
label_22e190:
    // 0x22e190: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x22e190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22e194:
    // 0x22e194: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_22e198:
    if (ctx->pc == 0x22E198u) {
        ctx->pc = 0x22E19Cu;
        goto label_22e19c;
    }
    ctx->pc = 0x22E194u;
    {
        const bool branch_taken_0x22e194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e194) {
            ctx->pc = 0x22E160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e160;
        }
    }
    ctx->pc = 0x22E19Cu;
label_22e19c:
    // 0x22e19c: 0x0  nop
    ctx->pc = 0x22e19cu;
    // NOP
label_22e1a0:
    // 0x22e1a0: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x22e1a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22e1a4:
    // 0x22e1a4: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_22e1a8:
    if (ctx->pc == 0x22E1A8u) {
        ctx->pc = 0x22E1ACu;
        goto label_22e1ac;
    }
    ctx->pc = 0x22E1A4u;
    {
        const bool branch_taken_0x22e1a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e1a4) {
            ctx->pc = 0x22E278u;
            goto label_22e278;
        }
    }
    ctx->pc = 0x22E1ACu;
label_22e1ac:
    // 0x22e1ac: 0x7b080  sll         $s6, $a3, 2
    ctx->pc = 0x22e1acu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_22e1b0:
    // 0x22e1b0: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x22e1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_22e1b4:
    // 0x22e1b4: 0x0  nop
    ctx->pc = 0x22e1b4u;
    // NOP
label_22e1b8:
    // 0x22e1b8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22e1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_22e1bc:
    // 0x22e1bc: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x22e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_22e1c0:
    // 0x22e1c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e1c4:
    // 0x22e1c4: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x22e1c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_22e1c8:
    // 0x22e1c8: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x22e1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_22e1cc:
    // 0x22e1cc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22e1ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e1d0:
    // 0x22e1d0: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
label_22e1d4:
    if (ctx->pc == 0x22E1D4u) {
        ctx->pc = 0x22E1D4u;
            // 0x22e1d4: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x22E1D8u;
        goto label_22e1d8;
    }
    ctx->pc = 0x22E1D0u;
    {
        const bool branch_taken_0x22e1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e1d0) {
            ctx->pc = 0x22E1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E1D0u;
            // 0x22e1d4: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E264u;
            goto label_22e264;
        }
    }
    ctx->pc = 0x22E1D8u;
label_22e1d8:
    // 0x22e1d8: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x22e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_22e1dc:
    // 0x22e1dc: 0x9486006c  lhu         $a2, 0x6C($a0)
    ctx->pc = 0x22e1dcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
label_22e1e0:
    // 0x22e1e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e1e4:
    // 0x22e1e4: 0x9445006c  lhu         $a1, 0x6C($v0)
    ctx->pc = 0x22e1e4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
label_22e1e8:
    // 0x22e1e8: 0xc0a7c00  jal         func_29F000
label_22e1ec:
    if (ctx->pc == 0x22E1ECu) {
        ctx->pc = 0x22E1ECu;
            // 0x22e1ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E1F0u;
        goto label_22e1f0;
    }
    ctx->pc = 0x22E1E8u;
    SET_GPR_U32(ctx, 31, 0x22E1F0u);
    ctx->pc = 0x22E1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E1E8u;
            // 0x22e1ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F000u;
    if (runtime->hasFunction(0x29F000u)) {
        auto targetFn = runtime->lookupFunction(0x29F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E1F0u; }
        if (ctx->pc != 0x22E1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029F000_0x29f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E1F0u; }
        if (ctx->pc != 0x22E1F0u) { return; }
    }
    ctx->pc = 0x22E1F0u;
label_22e1f0:
    // 0x22e1f0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x22e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22e1f4:
    // 0x22e1f4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x22e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_22e1f8:
    // 0x22e1f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e1fc:
    // 0x22e1fc: 0x42023  negu        $a0, $a0
    ctx->pc = 0x22e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_22e200:
    // 0x22e200: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e204:
    // 0x22e204: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x22e204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_22e208:
    // 0x22e208: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22e208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e20c:
    // 0x22e20c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_22e210:
    if (ctx->pc == 0x22E210u) {
        ctx->pc = 0x22E214u;
        goto label_22e214;
    }
    ctx->pc = 0x22E20Cu;
    {
        const bool branch_taken_0x22e20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e20c) {
            ctx->pc = 0x22E260u;
            goto label_22e260;
        }
    }
    ctx->pc = 0x22E214u;
label_22e214:
    // 0x22e214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e218:
    // 0x22e218: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22e21c:
    // 0x22e21c: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x22e21cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_22e220:
    // 0x22e220: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x22e220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_22e224:
    // 0x22e224: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22e228:
    // 0x22e228: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_22e22c:
    if (ctx->pc == 0x22E22Cu) {
        ctx->pc = 0x22E22Cu;
            // 0x22e22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E230u;
        goto label_22e230;
    }
    ctx->pc = 0x22E228u;
    {
        const bool branch_taken_0x22e228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e228) {
            ctx->pc = 0x22E22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E228u;
            // 0x22e22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E2E8u;
            goto label_22e2e8;
        }
    }
    ctx->pc = 0x22E230u;
label_22e230:
    // 0x22e230: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22e230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22e234:
    // 0x22e234: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x22e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_22e238:
    // 0x22e238: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22e23c:
    // 0x22e23c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22e23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22e240:
    // 0x22e240: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22e240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_22e244:
    // 0x22e244: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22e244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22e248:
    // 0x22e248: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22e248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22e24c:
    // 0x22e24c: 0xc0a7ab4  jal         func_29EAD0
label_22e250:
    if (ctx->pc == 0x22E250u) {
        ctx->pc = 0x22E250u;
            // 0x22e250: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22E254u;
        goto label_22e254;
    }
    ctx->pc = 0x22E24Cu;
    SET_GPR_U32(ctx, 31, 0x22E254u);
    ctx->pc = 0x22E250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E24Cu;
            // 0x22e250: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E254u; }
        if (ctx->pc != 0x22E254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E254u; }
        if (ctx->pc != 0x22E254u) { return; }
    }
    ctx->pc = 0x22E254u;
label_22e254:
    // 0x22e254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e258:
    // 0x22e258: 0x10000023  b           . + 4 + (0x23 << 2)
label_22e25c:
    if (ctx->pc == 0x22E25Cu) {
        ctx->pc = 0x22E260u;
        goto label_22e260;
    }
    ctx->pc = 0x22E258u;
    {
        const bool branch_taken_0x22e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e258) {
            ctx->pc = 0x22E2E8u;
            goto label_22e2e8;
        }
    }
    ctx->pc = 0x22E260u;
label_22e260:
    // 0x22e260: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_22e264:
    // 0x22e264: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22e264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22e268:
    // 0x22e268: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x22e268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22e26c:
    // 0x22e26c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_22e270:
    if (ctx->pc == 0x22E270u) {
        ctx->pc = 0x22E270u;
            // 0x22e270: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x22E274u;
        goto label_22e274;
    }
    ctx->pc = 0x22E26Cu;
    {
        const bool branch_taken_0x22e26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E26Cu;
            // 0x22e270: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e26c) {
            ctx->pc = 0x22E1B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e1b8;
        }
    }
    ctx->pc = 0x22E274u;
label_22e274:
    // 0x22e274: 0x0  nop
    ctx->pc = 0x22e274u;
    // NOP
label_22e278:
    // 0x22e278: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x22e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_22e27c:
    // 0x22e27c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22e27cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22e280:
    // 0x22e280: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x22e280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22e284:
    // 0x22e284: 0x1460ffa6  bnez        $v1, . + 4 + (-0x5A << 2)
label_22e288:
    if (ctx->pc == 0x22E288u) {
        ctx->pc = 0x22E288u;
            // 0x22e288: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x22E28Cu;
        goto label_22e28c;
    }
    ctx->pc = 0x22E284u;
    {
        const bool branch_taken_0x22e284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E284u;
            // 0x22e288: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e284) {
            ctx->pc = 0x22E120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e120;
        }
    }
    ctx->pc = 0x22E28Cu;
label_22e28c:
    // 0x22e28c: 0x0  nop
    ctx->pc = 0x22e28cu;
    // NOP
label_22e290:
    // 0x22e290: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x22e290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_22e294:
    // 0x22e294: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22e294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22e298:
    // 0x22e298: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22e298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22e29c:
    // 0x22e29c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_22e2a0:
    if (ctx->pc == 0x22E2A0u) {
        ctx->pc = 0x22E2A0u;
            // 0x22e2a0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x22E2A4u;
        goto label_22e2a4;
    }
    ctx->pc = 0x22E29Cu;
    {
        const bool branch_taken_0x22e29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e29c) {
            ctx->pc = 0x22E2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E29Cu;
            // 0x22e2a0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E2CCu;
            goto label_22e2cc;
        }
    }
    ctx->pc = 0x22E2A4u;
label_22e2a4:
    // 0x22e2a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22e2a8:
    // 0x22e2a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x22e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_22e2ac:
    // 0x22e2ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22e2b0:
    // 0x22e2b0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22e2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22e2b4:
    // 0x22e2b4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_22e2b8:
    // 0x22e2b8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22e2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22e2bc:
    // 0x22e2bc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22e2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22e2c0:
    // 0x22e2c0: 0xc0a7ab4  jal         func_29EAD0
label_22e2c4:
    if (ctx->pc == 0x22E2C4u) {
        ctx->pc = 0x22E2C4u;
            // 0x22e2c4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22E2C8u;
        goto label_22e2c8;
    }
    ctx->pc = 0x22E2C0u;
    SET_GPR_U32(ctx, 31, 0x22E2C8u);
    ctx->pc = 0x22E2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E2C0u;
            // 0x22e2c4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E2C8u; }
        if (ctx->pc != 0x22E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E2C8u; }
        if (ctx->pc != 0x22E2C8u) { return; }
    }
    ctx->pc = 0x22E2C8u;
label_22e2c8:
    // 0x22e2c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x22e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22e2cc:
    // 0x22e2cc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x22e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_22e2d0:
    // 0x22e2d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e2d4:
    // 0x22e2d4: 0x42023  negu        $a0, $a0
    ctx->pc = 0x22e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_22e2d8:
    // 0x22e2d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e2dc:
    // 0x22e2dc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x22e2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_22e2e0:
    // 0x22e2e0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22e2e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e2e4:
    // 0x22e2e4: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x22e2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_22e2e8:
    // 0x22e2e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22e2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22e2ec:
    // 0x22e2ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22e2ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22e2f0:
    // 0x22e2f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22e2f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22e2f4:
    // 0x22e2f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22e2f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22e2f8:
    // 0x22e2f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22e2f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22e2fc:
    // 0x22e2fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22e2fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e300:
    // 0x22e300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e304:
    // 0x22e304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e308:
    // 0x22e308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e30c:
    // 0x22e30c: 0x3e00008  jr          $ra
label_22e310:
    if (ctx->pc == 0x22E310u) {
        ctx->pc = 0x22E310u;
            // 0x22e310: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x22E314u;
        goto label_22e314;
    }
    ctx->pc = 0x22E30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E30Cu;
            // 0x22e310: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E314u;
label_22e314:
    // 0x22e314: 0x0  nop
    ctx->pc = 0x22e314u;
    // NOP
label_22e318:
    // 0x22e318: 0x0  nop
    ctx->pc = 0x22e318u;
    // NOP
label_22e31c:
    // 0x22e31c: 0x0  nop
    ctx->pc = 0x22e31cu;
    // NOP
}
