#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043DF30
// Address: 0x43df30 - 0x43e300
void sub_0043DF30_0x43df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DF30_0x43df30");
#endif

    switch (ctx->pc) {
        case 0x43df30u: goto label_43df30;
        case 0x43df34u: goto label_43df34;
        case 0x43df38u: goto label_43df38;
        case 0x43df3cu: goto label_43df3c;
        case 0x43df40u: goto label_43df40;
        case 0x43df44u: goto label_43df44;
        case 0x43df48u: goto label_43df48;
        case 0x43df4cu: goto label_43df4c;
        case 0x43df50u: goto label_43df50;
        case 0x43df54u: goto label_43df54;
        case 0x43df58u: goto label_43df58;
        case 0x43df5cu: goto label_43df5c;
        case 0x43df60u: goto label_43df60;
        case 0x43df64u: goto label_43df64;
        case 0x43df68u: goto label_43df68;
        case 0x43df6cu: goto label_43df6c;
        case 0x43df70u: goto label_43df70;
        case 0x43df74u: goto label_43df74;
        case 0x43df78u: goto label_43df78;
        case 0x43df7cu: goto label_43df7c;
        case 0x43df80u: goto label_43df80;
        case 0x43df84u: goto label_43df84;
        case 0x43df88u: goto label_43df88;
        case 0x43df8cu: goto label_43df8c;
        case 0x43df90u: goto label_43df90;
        case 0x43df94u: goto label_43df94;
        case 0x43df98u: goto label_43df98;
        case 0x43df9cu: goto label_43df9c;
        case 0x43dfa0u: goto label_43dfa0;
        case 0x43dfa4u: goto label_43dfa4;
        case 0x43dfa8u: goto label_43dfa8;
        case 0x43dfacu: goto label_43dfac;
        case 0x43dfb0u: goto label_43dfb0;
        case 0x43dfb4u: goto label_43dfb4;
        case 0x43dfb8u: goto label_43dfb8;
        case 0x43dfbcu: goto label_43dfbc;
        case 0x43dfc0u: goto label_43dfc0;
        case 0x43dfc4u: goto label_43dfc4;
        case 0x43dfc8u: goto label_43dfc8;
        case 0x43dfccu: goto label_43dfcc;
        case 0x43dfd0u: goto label_43dfd0;
        case 0x43dfd4u: goto label_43dfd4;
        case 0x43dfd8u: goto label_43dfd8;
        case 0x43dfdcu: goto label_43dfdc;
        case 0x43dfe0u: goto label_43dfe0;
        case 0x43dfe4u: goto label_43dfe4;
        case 0x43dfe8u: goto label_43dfe8;
        case 0x43dfecu: goto label_43dfec;
        case 0x43dff0u: goto label_43dff0;
        case 0x43dff4u: goto label_43dff4;
        case 0x43dff8u: goto label_43dff8;
        case 0x43dffcu: goto label_43dffc;
        case 0x43e000u: goto label_43e000;
        case 0x43e004u: goto label_43e004;
        case 0x43e008u: goto label_43e008;
        case 0x43e00cu: goto label_43e00c;
        case 0x43e010u: goto label_43e010;
        case 0x43e014u: goto label_43e014;
        case 0x43e018u: goto label_43e018;
        case 0x43e01cu: goto label_43e01c;
        case 0x43e020u: goto label_43e020;
        case 0x43e024u: goto label_43e024;
        case 0x43e028u: goto label_43e028;
        case 0x43e02cu: goto label_43e02c;
        case 0x43e030u: goto label_43e030;
        case 0x43e034u: goto label_43e034;
        case 0x43e038u: goto label_43e038;
        case 0x43e03cu: goto label_43e03c;
        case 0x43e040u: goto label_43e040;
        case 0x43e044u: goto label_43e044;
        case 0x43e048u: goto label_43e048;
        case 0x43e04cu: goto label_43e04c;
        case 0x43e050u: goto label_43e050;
        case 0x43e054u: goto label_43e054;
        case 0x43e058u: goto label_43e058;
        case 0x43e05cu: goto label_43e05c;
        case 0x43e060u: goto label_43e060;
        case 0x43e064u: goto label_43e064;
        case 0x43e068u: goto label_43e068;
        case 0x43e06cu: goto label_43e06c;
        case 0x43e070u: goto label_43e070;
        case 0x43e074u: goto label_43e074;
        case 0x43e078u: goto label_43e078;
        case 0x43e07cu: goto label_43e07c;
        case 0x43e080u: goto label_43e080;
        case 0x43e084u: goto label_43e084;
        case 0x43e088u: goto label_43e088;
        case 0x43e08cu: goto label_43e08c;
        case 0x43e090u: goto label_43e090;
        case 0x43e094u: goto label_43e094;
        case 0x43e098u: goto label_43e098;
        case 0x43e09cu: goto label_43e09c;
        case 0x43e0a0u: goto label_43e0a0;
        case 0x43e0a4u: goto label_43e0a4;
        case 0x43e0a8u: goto label_43e0a8;
        case 0x43e0acu: goto label_43e0ac;
        case 0x43e0b0u: goto label_43e0b0;
        case 0x43e0b4u: goto label_43e0b4;
        case 0x43e0b8u: goto label_43e0b8;
        case 0x43e0bcu: goto label_43e0bc;
        case 0x43e0c0u: goto label_43e0c0;
        case 0x43e0c4u: goto label_43e0c4;
        case 0x43e0c8u: goto label_43e0c8;
        case 0x43e0ccu: goto label_43e0cc;
        case 0x43e0d0u: goto label_43e0d0;
        case 0x43e0d4u: goto label_43e0d4;
        case 0x43e0d8u: goto label_43e0d8;
        case 0x43e0dcu: goto label_43e0dc;
        case 0x43e0e0u: goto label_43e0e0;
        case 0x43e0e4u: goto label_43e0e4;
        case 0x43e0e8u: goto label_43e0e8;
        case 0x43e0ecu: goto label_43e0ec;
        case 0x43e0f0u: goto label_43e0f0;
        case 0x43e0f4u: goto label_43e0f4;
        case 0x43e0f8u: goto label_43e0f8;
        case 0x43e0fcu: goto label_43e0fc;
        case 0x43e100u: goto label_43e100;
        case 0x43e104u: goto label_43e104;
        case 0x43e108u: goto label_43e108;
        case 0x43e10cu: goto label_43e10c;
        case 0x43e110u: goto label_43e110;
        case 0x43e114u: goto label_43e114;
        case 0x43e118u: goto label_43e118;
        case 0x43e11cu: goto label_43e11c;
        case 0x43e120u: goto label_43e120;
        case 0x43e124u: goto label_43e124;
        case 0x43e128u: goto label_43e128;
        case 0x43e12cu: goto label_43e12c;
        case 0x43e130u: goto label_43e130;
        case 0x43e134u: goto label_43e134;
        case 0x43e138u: goto label_43e138;
        case 0x43e13cu: goto label_43e13c;
        case 0x43e140u: goto label_43e140;
        case 0x43e144u: goto label_43e144;
        case 0x43e148u: goto label_43e148;
        case 0x43e14cu: goto label_43e14c;
        case 0x43e150u: goto label_43e150;
        case 0x43e154u: goto label_43e154;
        case 0x43e158u: goto label_43e158;
        case 0x43e15cu: goto label_43e15c;
        case 0x43e160u: goto label_43e160;
        case 0x43e164u: goto label_43e164;
        case 0x43e168u: goto label_43e168;
        case 0x43e16cu: goto label_43e16c;
        case 0x43e170u: goto label_43e170;
        case 0x43e174u: goto label_43e174;
        case 0x43e178u: goto label_43e178;
        case 0x43e17cu: goto label_43e17c;
        case 0x43e180u: goto label_43e180;
        case 0x43e184u: goto label_43e184;
        case 0x43e188u: goto label_43e188;
        case 0x43e18cu: goto label_43e18c;
        case 0x43e190u: goto label_43e190;
        case 0x43e194u: goto label_43e194;
        case 0x43e198u: goto label_43e198;
        case 0x43e19cu: goto label_43e19c;
        case 0x43e1a0u: goto label_43e1a0;
        case 0x43e1a4u: goto label_43e1a4;
        case 0x43e1a8u: goto label_43e1a8;
        case 0x43e1acu: goto label_43e1ac;
        case 0x43e1b0u: goto label_43e1b0;
        case 0x43e1b4u: goto label_43e1b4;
        case 0x43e1b8u: goto label_43e1b8;
        case 0x43e1bcu: goto label_43e1bc;
        case 0x43e1c0u: goto label_43e1c0;
        case 0x43e1c4u: goto label_43e1c4;
        case 0x43e1c8u: goto label_43e1c8;
        case 0x43e1ccu: goto label_43e1cc;
        case 0x43e1d0u: goto label_43e1d0;
        case 0x43e1d4u: goto label_43e1d4;
        case 0x43e1d8u: goto label_43e1d8;
        case 0x43e1dcu: goto label_43e1dc;
        case 0x43e1e0u: goto label_43e1e0;
        case 0x43e1e4u: goto label_43e1e4;
        case 0x43e1e8u: goto label_43e1e8;
        case 0x43e1ecu: goto label_43e1ec;
        case 0x43e1f0u: goto label_43e1f0;
        case 0x43e1f4u: goto label_43e1f4;
        case 0x43e1f8u: goto label_43e1f8;
        case 0x43e1fcu: goto label_43e1fc;
        case 0x43e200u: goto label_43e200;
        case 0x43e204u: goto label_43e204;
        case 0x43e208u: goto label_43e208;
        case 0x43e20cu: goto label_43e20c;
        case 0x43e210u: goto label_43e210;
        case 0x43e214u: goto label_43e214;
        case 0x43e218u: goto label_43e218;
        case 0x43e21cu: goto label_43e21c;
        case 0x43e220u: goto label_43e220;
        case 0x43e224u: goto label_43e224;
        case 0x43e228u: goto label_43e228;
        case 0x43e22cu: goto label_43e22c;
        case 0x43e230u: goto label_43e230;
        case 0x43e234u: goto label_43e234;
        case 0x43e238u: goto label_43e238;
        case 0x43e23cu: goto label_43e23c;
        case 0x43e240u: goto label_43e240;
        case 0x43e244u: goto label_43e244;
        case 0x43e248u: goto label_43e248;
        case 0x43e24cu: goto label_43e24c;
        case 0x43e250u: goto label_43e250;
        case 0x43e254u: goto label_43e254;
        case 0x43e258u: goto label_43e258;
        case 0x43e25cu: goto label_43e25c;
        case 0x43e260u: goto label_43e260;
        case 0x43e264u: goto label_43e264;
        case 0x43e268u: goto label_43e268;
        case 0x43e26cu: goto label_43e26c;
        case 0x43e270u: goto label_43e270;
        case 0x43e274u: goto label_43e274;
        case 0x43e278u: goto label_43e278;
        case 0x43e27cu: goto label_43e27c;
        case 0x43e280u: goto label_43e280;
        case 0x43e284u: goto label_43e284;
        case 0x43e288u: goto label_43e288;
        case 0x43e28cu: goto label_43e28c;
        case 0x43e290u: goto label_43e290;
        case 0x43e294u: goto label_43e294;
        case 0x43e298u: goto label_43e298;
        case 0x43e29cu: goto label_43e29c;
        case 0x43e2a0u: goto label_43e2a0;
        case 0x43e2a4u: goto label_43e2a4;
        case 0x43e2a8u: goto label_43e2a8;
        case 0x43e2acu: goto label_43e2ac;
        case 0x43e2b0u: goto label_43e2b0;
        case 0x43e2b4u: goto label_43e2b4;
        case 0x43e2b8u: goto label_43e2b8;
        case 0x43e2bcu: goto label_43e2bc;
        case 0x43e2c0u: goto label_43e2c0;
        case 0x43e2c4u: goto label_43e2c4;
        case 0x43e2c8u: goto label_43e2c8;
        case 0x43e2ccu: goto label_43e2cc;
        case 0x43e2d0u: goto label_43e2d0;
        case 0x43e2d4u: goto label_43e2d4;
        case 0x43e2d8u: goto label_43e2d8;
        case 0x43e2dcu: goto label_43e2dc;
        case 0x43e2e0u: goto label_43e2e0;
        case 0x43e2e4u: goto label_43e2e4;
        case 0x43e2e8u: goto label_43e2e8;
        case 0x43e2ecu: goto label_43e2ec;
        case 0x43e2f0u: goto label_43e2f0;
        case 0x43e2f4u: goto label_43e2f4;
        case 0x43e2f8u: goto label_43e2f8;
        case 0x43e2fcu: goto label_43e2fc;
        default: break;
    }

    ctx->pc = 0x43df30u;

label_43df30:
    // 0x43df30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43df34:
    // 0x43df34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43df34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43df38:
    // 0x43df38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43df3c:
    // 0x43df3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43df40:
    // 0x43df40: 0x90830094  lbu         $v1, 0x94($a0)
    ctx->pc = 0x43df40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
label_43df44:
    // 0x43df44: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_43df48:
    if (ctx->pc == 0x43DF48u) {
        ctx->pc = 0x43DF48u;
            // 0x43df48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DF4Cu;
        goto label_43df4c;
    }
    ctx->pc = 0x43DF44u;
    {
        const bool branch_taken_0x43df44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43DF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DF44u;
            // 0x43df48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43df44) {
            ctx->pc = 0x43DF60u;
            goto label_43df60;
        }
    }
    ctx->pc = 0x43DF4Cu;
label_43df4c:
    // 0x43df4c: 0x26040098  addiu       $a0, $s0, 0x98
    ctx->pc = 0x43df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_43df50:
    // 0x43df50: 0xc074f30  jal         func_1D3CC0
label_43df54:
    if (ctx->pc == 0x43DF54u) {
        ctx->pc = 0x43DF54u;
            // 0x43df54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DF58u;
        goto label_43df58;
    }
    ctx->pc = 0x43DF50u;
    SET_GPR_U32(ctx, 31, 0x43DF58u);
    ctx->pc = 0x43DF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DF50u;
            // 0x43df54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DF58u; }
        if (ctx->pc != 0x43DF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DF58u; }
        if (ctx->pc != 0x43DF58u) { return; }
    }
    ctx->pc = 0x43DF58u;
label_43df58:
    // 0x43df58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43df58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43df5c:
    // 0x43df5c: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x43df5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
label_43df60:
    // 0x43df60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43df60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43df64:
    // 0x43df64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43df64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43df68:
    // 0x43df68: 0x3e00008  jr          $ra
label_43df6c:
    if (ctx->pc == 0x43DF6Cu) {
        ctx->pc = 0x43DF6Cu;
            // 0x43df6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43DF70u;
        goto label_43df70;
    }
    ctx->pc = 0x43DF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DF68u;
            // 0x43df6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43DF70u;
label_43df70:
    // 0x43df70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x43df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_43df74:
    // 0x43df74: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x43df74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_43df78:
    // 0x43df78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x43df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_43df7c:
    // 0x43df7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x43df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_43df80:
    // 0x43df80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x43df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_43df84:
    // 0x43df84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43df88:
    // 0x43df88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43df8c:
    // 0x43df8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43df90:
    // 0x43df90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43df94:
    // 0x43df94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43df98:
    // 0x43df98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43df9c:
    // 0x43df9c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x43df9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_43dfa0:
    // 0x43dfa0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x43dfa0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_43dfa4:
    // 0x43dfa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43dfa8:
    // 0x43dfa8: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_43dfac:
    if (ctx->pc == 0x43DFACu) {
        ctx->pc = 0x43DFACu;
            // 0x43dfac: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DFB0u;
        goto label_43dfb0;
    }
    ctx->pc = 0x43DFA8u;
    {
        const bool branch_taken_0x43dfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x43DFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DFA8u;
            // 0x43dfac: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dfa8) {
            ctx->pc = 0x43DFECu;
            goto label_43dfec;
        }
    }
    ctx->pc = 0x43DFB0u;
label_43dfb0:
    // 0x43dfb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x43dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43dfb4:
    // 0x43dfb4: 0x10a30052  beq         $a1, $v1, . + 4 + (0x52 << 2)
label_43dfb8:
    if (ctx->pc == 0x43DFB8u) {
        ctx->pc = 0x43DFBCu;
        goto label_43dfbc;
    }
    ctx->pc = 0x43DFB4u;
    {
        const bool branch_taken_0x43dfb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43dfb4) {
            ctx->pc = 0x43E100u;
            goto label_43e100;
        }
    }
    ctx->pc = 0x43DFBCu;
label_43dfbc:
    // 0x43dfbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43dfc0:
    // 0x43dfc0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_43dfc4:
    if (ctx->pc == 0x43DFC4u) {
        ctx->pc = 0x43DFC4u;
            // 0x43dfc4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43DFC8u;
        goto label_43dfc8;
    }
    ctx->pc = 0x43DFC0u;
    {
        const bool branch_taken_0x43dfc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43dfc0) {
            ctx->pc = 0x43DFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DFC0u;
            // 0x43dfc4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DFD0u;
            goto label_43dfd0;
        }
    }
    ctx->pc = 0x43DFC8u;
label_43dfc8:
    // 0x43dfc8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_43dfcc:
    if (ctx->pc == 0x43DFCCu) {
        ctx->pc = 0x43DFD0u;
        goto label_43dfd0;
    }
    ctx->pc = 0x43DFC8u;
    {
        const bool branch_taken_0x43dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dfc8) {
            ctx->pc = 0x43E100u;
            goto label_43e100;
        }
    }
    ctx->pc = 0x43DFD0u;
label_43dfd0:
    // 0x43dfd0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x43dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_43dfd4:
    // 0x43dfd4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x43dfd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_43dfd8:
    // 0x43dfd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x43dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_43dfdc:
    // 0x43dfdc: 0x320f809  jalr        $t9
label_43dfe0:
    if (ctx->pc == 0x43DFE0u) {
        ctx->pc = 0x43DFE0u;
            // 0x43dfe0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x43DFE4u;
        goto label_43dfe4;
    }
    ctx->pc = 0x43DFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43DFE4u);
        ctx->pc = 0x43DFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DFDCu;
            // 0x43dfe0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43DFE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43DFE4u; }
            if (ctx->pc != 0x43DFE4u) { return; }
        }
        }
    }
    ctx->pc = 0x43DFE4u;
label_43dfe4:
    // 0x43dfe4: 0x10000046  b           . + 4 + (0x46 << 2)
label_43dfe8:
    if (ctx->pc == 0x43DFE8u) {
        ctx->pc = 0x43DFECu;
        goto label_43dfec;
    }
    ctx->pc = 0x43DFE4u;
    {
        const bool branch_taken_0x43dfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dfe4) {
            ctx->pc = 0x43E100u;
            goto label_43e100;
        }
    }
    ctx->pc = 0x43DFECu;
label_43dfec:
    // 0x43dfec: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x43dfecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_43dff0:
    // 0x43dff0: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_43dff4:
    if (ctx->pc == 0x43DFF4u) {
        ctx->pc = 0x43DFF8u;
        goto label_43dff8;
    }
    ctx->pc = 0x43DFF0u;
    {
        const bool branch_taken_0x43dff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dff0) {
            ctx->pc = 0x43E100u;
            goto label_43e100;
        }
    }
    ctx->pc = 0x43DFF8u;
label_43dff8:
    // 0x43dff8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43dffc:
    // 0x43dffc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_43e000:
    // 0x43e000: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x43e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_43e004:
    // 0x43e004: 0x26b00084  addiu       $s0, $s5, 0x84
    ctx->pc = 0x43e004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_43e008:
    // 0x43e008: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x43e008u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_43e00c:
    // 0x43e00c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43e010:
    // 0x43e010: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x43e010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_43e014:
    // 0x43e014: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x43e014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_43e018:
    // 0x43e018: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x43e018u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_43e01c:
    // 0x43e01c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x43e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_43e020:
    // 0x43e020: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x43e020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_43e024:
    // 0x43e024: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x43e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_43e028:
    // 0x43e028: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x43e028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_43e02c:
    // 0x43e02c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43e030:
    // 0x43e030: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x43e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43e034:
    // 0x43e034: 0xc04e738  jal         func_139CE0
label_43e038:
    if (ctx->pc == 0x43E038u) {
        ctx->pc = 0x43E038u;
            // 0x43e038: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x43E03Cu;
        goto label_43e03c;
    }
    ctx->pc = 0x43E034u;
    SET_GPR_U32(ctx, 31, 0x43E03Cu);
    ctx->pc = 0x43E038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E034u;
            // 0x43e038: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E03Cu; }
        if (ctx->pc != 0x43E03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E03Cu; }
        if (ctx->pc != 0x43E03Cu) { return; }
    }
    ctx->pc = 0x43E03Cu;
label_43e03c:
    // 0x43e03c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43e040:
    // 0x43e040: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43e040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43e044:
    // 0x43e044: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x43e044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_43e048:
    // 0x43e048: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43e048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e04c:
    // 0x43e04c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x43e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_43e050:
    // 0x43e050: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43e050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e054:
    // 0x43e054: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x43e054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_43e058:
    // 0x43e058: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_43e05c:
    // 0x43e05c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x43e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_43e060:
    // 0x43e060: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x43e060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_43e064:
    // 0x43e064: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x43e064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43e068:
    // 0x43e068: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x43e068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43e06c:
    // 0x43e06c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x43e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_43e070:
    // 0x43e070: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x43e070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43e074:
    // 0x43e074: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43e078:
    // 0x43e078: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x43e078u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_43e07c:
    // 0x43e07c: 0xc10fdc4  jal         func_43F710
label_43e080:
    if (ctx->pc == 0x43E080u) {
        ctx->pc = 0x43E080u;
            // 0x43e080: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43E084u;
        goto label_43e084;
    }
    ctx->pc = 0x43E07Cu;
    SET_GPR_U32(ctx, 31, 0x43E084u);
    ctx->pc = 0x43E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E07Cu;
            // 0x43e080: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43F710u;
    if (runtime->hasFunction(0x43F710u)) {
        auto targetFn = runtime->lookupFunction(0x43F710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E084u; }
        if (ctx->pc != 0x43E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043F710_0x43f710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E084u; }
        if (ctx->pc != 0x43E084u) { return; }
    }
    ctx->pc = 0x43E084u;
label_43e084:
    // 0x43e084: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x43e084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_43e088:
    // 0x43e088: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x43e088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43e08c:
    // 0x43e08c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_43e090:
    if (ctx->pc == 0x43E090u) {
        ctx->pc = 0x43E090u;
            // 0x43e090: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x43E094u;
        goto label_43e094;
    }
    ctx->pc = 0x43E08Cu;
    {
        const bool branch_taken_0x43e08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E08Cu;
            // 0x43e090: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e08c) {
            ctx->pc = 0x43E054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43e054;
        }
    }
    ctx->pc = 0x43E094u;
label_43e094:
    // 0x43e094: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43e094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43e098:
    // 0x43e098: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x43e098u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_43e09c:
    // 0x43e09c: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_43e0a0:
    if (ctx->pc == 0x43E0A0u) {
        ctx->pc = 0x43E0A0u;
            // 0x43e0a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x43E0A4u;
        goto label_43e0a4;
    }
    ctx->pc = 0x43E09Cu;
    {
        const bool branch_taken_0x43e09c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x43E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E09Cu;
            // 0x43e0a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e09c) {
            ctx->pc = 0x43E0C4u;
            goto label_43e0c4;
        }
    }
    ctx->pc = 0x43E0A4u;
label_43e0a4:
    // 0x43e0a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43e0a8:
    // 0x43e0a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43e0ac:
    // 0x43e0ac: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x43e0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_43e0b0:
    // 0x43e0b0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43e0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_43e0b4:
    // 0x43e0b4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x43e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_43e0b8:
    // 0x43e0b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x43e0b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e0bc:
    // 0x43e0bc: 0xc055d28  jal         func_1574A0
label_43e0c0:
    if (ctx->pc == 0x43E0C0u) {
        ctx->pc = 0x43E0C0u;
            // 0x43e0c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43E0C4u;
        goto label_43e0c4;
    }
    ctx->pc = 0x43E0BCu;
    SET_GPR_U32(ctx, 31, 0x43E0C4u);
    ctx->pc = 0x43E0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E0BCu;
            // 0x43e0c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E0C4u; }
        if (ctx->pc != 0x43E0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E0C4u; }
        if (ctx->pc != 0x43E0C4u) { return; }
    }
    ctx->pc = 0x43E0C4u;
label_43e0c4:
    // 0x43e0c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43e0c8:
    // 0x43e0c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43e0cc:
    // 0x43e0cc: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x43e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_43e0d0:
    // 0x43e0d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43e0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e0d4:
    // 0x43e0d4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x43e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_43e0d8:
    // 0x43e0d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43e0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e0dc:
    // 0x43e0dc: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x43e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_43e0e0:
    // 0x43e0e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x43e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_43e0e4:
    // 0x43e0e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43e0e8:
    // 0x43e0e8: 0xc10f9ec  jal         func_43E7B0
label_43e0ec:
    if (ctx->pc == 0x43E0ECu) {
        ctx->pc = 0x43E0ECu;
            // 0x43e0ec: 0x26a50098  addiu       $a1, $s5, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 152));
        ctx->pc = 0x43E0F0u;
        goto label_43e0f0;
    }
    ctx->pc = 0x43E0E8u;
    SET_GPR_U32(ctx, 31, 0x43E0F0u);
    ctx->pc = 0x43E0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E0E8u;
            // 0x43e0ec: 0x26a50098  addiu       $a1, $s5, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43E7B0u;
    if (runtime->hasFunction(0x43E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x43E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E0F0u; }
        if (ctx->pc != 0x43E0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043E7B0_0x43e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E0F0u; }
        if (ctx->pc != 0x43E0F0u) { return; }
    }
    ctx->pc = 0x43E0F0u;
label_43e0f0:
    // 0x43e0f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43e0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43e0f4:
    // 0x43e0f4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x43e0f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43e0f8:
    // 0x43e0f8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_43e0fc:
    if (ctx->pc == 0x43E0FCu) {
        ctx->pc = 0x43E0FCu;
            // 0x43e0fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x43E100u;
        goto label_43e100;
    }
    ctx->pc = 0x43E0F8u;
    {
        const bool branch_taken_0x43e0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E0F8u;
            // 0x43e0fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e0f8) {
            ctx->pc = 0x43E0DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43e0dc;
        }
    }
    ctx->pc = 0x43E100u;
label_43e100:
    // 0x43e100: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x43e100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_43e104:
    // 0x43e104: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x43e104u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43e108:
    // 0x43e108: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x43e108u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43e10c:
    // 0x43e10c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43e10cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43e110:
    // 0x43e110: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43e110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43e114:
    // 0x43e114: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43e114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43e118:
    // 0x43e118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43e118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43e11c:
    // 0x43e11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43e11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43e120:
    // 0x43e120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43e124:
    // 0x43e124: 0x3e00008  jr          $ra
label_43e128:
    if (ctx->pc == 0x43E128u) {
        ctx->pc = 0x43E128u;
            // 0x43e128: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x43E12Cu;
        goto label_43e12c;
    }
    ctx->pc = 0x43E124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E124u;
            // 0x43e128: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E12Cu;
label_43e12c:
    // 0x43e12c: 0x0  nop
    ctx->pc = 0x43e12cu;
    // NOP
label_43e130:
    // 0x43e130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_43e134:
    // 0x43e134: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43e134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43e138:
    // 0x43e138: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43e138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43e13c:
    // 0x43e13c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43e140:
    // 0x43e140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43e140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43e144:
    // 0x43e144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43e144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43e148:
    // 0x43e148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43e14c:
    // 0x43e14c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x43e14cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_43e150:
    // 0x43e150: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_43e154:
    if (ctx->pc == 0x43E154u) {
        ctx->pc = 0x43E154u;
            // 0x43e154: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43E158u;
        goto label_43e158;
    }
    ctx->pc = 0x43E150u;
    {
        const bool branch_taken_0x43e150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x43E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E150u;
            // 0x43e154: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e150) {
            ctx->pc = 0x43E220u;
            goto label_43e220;
        }
    }
    ctx->pc = 0x43E158u;
label_43e158:
    // 0x43e158: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x43e158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43e15c:
    // 0x43e15c: 0x50a3002d  beql        $a1, $v1, . + 4 + (0x2D << 2)
label_43e160:
    if (ctx->pc == 0x43E160u) {
        ctx->pc = 0x43E160u;
            // 0x43e160: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43E164u;
        goto label_43e164;
    }
    ctx->pc = 0x43E15Cu;
    {
        const bool branch_taken_0x43e15c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43e15c) {
            ctx->pc = 0x43E160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43E15Cu;
            // 0x43e160: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43E214u;
            goto label_43e214;
        }
    }
    ctx->pc = 0x43E164u;
label_43e164:
    // 0x43e164: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43e168:
    // 0x43e168: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_43e16c:
    if (ctx->pc == 0x43E16Cu) {
        ctx->pc = 0x43E170u;
        goto label_43e170;
    }
    ctx->pc = 0x43E168u;
    {
        const bool branch_taken_0x43e168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43e168) {
            ctx->pc = 0x43E178u;
            goto label_43e178;
        }
    }
    ctx->pc = 0x43E170u;
label_43e170:
    // 0x43e170: 0x10000039  b           . + 4 + (0x39 << 2)
label_43e174:
    if (ctx->pc == 0x43E174u) {
        ctx->pc = 0x43E178u;
        goto label_43e178;
    }
    ctx->pc = 0x43E170u;
    {
        const bool branch_taken_0x43e170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e170) {
            ctx->pc = 0x43E258u;
            goto label_43e258;
        }
    }
    ctx->pc = 0x43E178u;
label_43e178:
    // 0x43e178: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x43e178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_43e17c:
    // 0x43e17c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x43e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43e180:
    // 0x43e180: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x43e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_43e184:
    // 0x43e184: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x43e184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_43e188:
    // 0x43e188: 0x10640033  beq         $v1, $a0, . + 4 + (0x33 << 2)
label_43e18c:
    if (ctx->pc == 0x43E18Cu) {
        ctx->pc = 0x43E190u;
        goto label_43e190;
    }
    ctx->pc = 0x43E188u;
    {
        const bool branch_taken_0x43e188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x43e188) {
            ctx->pc = 0x43E258u;
            goto label_43e258;
        }
    }
    ctx->pc = 0x43E190u;
label_43e190:
    // 0x43e190: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x43e190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_43e194:
    // 0x43e194: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x43e194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43e198:
    // 0x43e198: 0x8c6a0198  lw          $t2, 0x198($v1)
    ctx->pc = 0x43e198u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
label_43e19c:
    // 0x43e19c: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x43e19cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_43e1a0:
    // 0x43e1a0: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x43e1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_43e1a4:
    // 0x43e1a4: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x43e1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_43e1a8:
    // 0x43e1a8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x43e1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_43e1ac:
    // 0x43e1ac: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x43e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_43e1b0:
    // 0x43e1b0: 0x8c690090  lw          $t1, 0x90($v1)
    ctx->pc = 0x43e1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_43e1b4:
    // 0x43e1b4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x43e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_43e1b8:
    // 0x43e1b8: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x43e1b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_43e1bc:
    // 0x43e1bc: 0xac690090  sw          $t1, 0x90($v1)
    ctx->pc = 0x43e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 9));
label_43e1c0:
    // 0x43e1c0: 0x8d0901a0  lw          $t1, 0x1A0($t0)
    ctx->pc = 0x43e1c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 416)));
label_43e1c4:
    // 0x43e1c4: 0x8c680120  lw          $t0, 0x120($v1)
    ctx->pc = 0x43e1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_43e1c8:
    // 0x43e1c8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x43e1c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_43e1cc:
    // 0x43e1cc: 0xac680120  sw          $t0, 0x120($v1)
    ctx->pc = 0x43e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 8));
label_43e1d0:
    // 0x43e1d0: 0x8ce801a8  lw          $t0, 0x1A8($a3)
    ctx->pc = 0x43e1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
label_43e1d4:
    // 0x43e1d4: 0x8c6701b0  lw          $a3, 0x1B0($v1)
    ctx->pc = 0x43e1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_43e1d8:
    // 0x43e1d8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x43e1d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_43e1dc:
    // 0x43e1dc: 0xac6701b0  sw          $a3, 0x1B0($v1)
    ctx->pc = 0x43e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 7));
label_43e1e0:
    // 0x43e1e0: 0x8cc701b0  lw          $a3, 0x1B0($a2)
    ctx->pc = 0x43e1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 432)));
label_43e1e4:
    // 0x43e1e4: 0x8c660240  lw          $a2, 0x240($v1)
    ctx->pc = 0x43e1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 576)));
label_43e1e8:
    // 0x43e1e8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x43e1e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_43e1ec:
    // 0x43e1ec: 0xac660240  sw          $a2, 0x240($v1)
    ctx->pc = 0x43e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 6));
label_43e1f0:
    // 0x43e1f0: 0x8ca601b8  lw          $a2, 0x1B8($a1)
    ctx->pc = 0x43e1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 440)));
label_43e1f4:
    // 0x43e1f4: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x43e1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_43e1f8:
    // 0x43e1f8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x43e1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_43e1fc:
    // 0x43e1fc: 0xac6502d0  sw          $a1, 0x2D0($v1)
    ctx->pc = 0x43e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 5));
label_43e200:
    // 0x43e200: 0x8c8501c0  lw          $a1, 0x1C0($a0)
    ctx->pc = 0x43e200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
label_43e204:
    // 0x43e204: 0x8c640360  lw          $a0, 0x360($v1)
    ctx->pc = 0x43e204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
label_43e208:
    // 0x43e208: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x43e208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_43e20c:
    // 0x43e20c: 0x10000012  b           . + 4 + (0x12 << 2)
label_43e210:
    if (ctx->pc == 0x43E210u) {
        ctx->pc = 0x43E210u;
            // 0x43e210: 0xac640360  sw          $a0, 0x360($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 4));
        ctx->pc = 0x43E214u;
        goto label_43e214;
    }
    ctx->pc = 0x43E20Cu;
    {
        const bool branch_taken_0x43e20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E20Cu;
            // 0x43e210: 0xac640360  sw          $a0, 0x360($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e20c) {
            ctx->pc = 0x43E258u;
            goto label_43e258;
        }
    }
    ctx->pc = 0x43E214u;
label_43e214:
    // 0x43e214: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x43e214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_43e218:
    // 0x43e218: 0x320f809  jalr        $t9
label_43e21c:
    if (ctx->pc == 0x43E21Cu) {
        ctx->pc = 0x43E220u;
        goto label_43e220;
    }
    ctx->pc = 0x43E218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43E220u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43E220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43E220u; }
            if (ctx->pc != 0x43E220u) { return; }
        }
        }
    }
    ctx->pc = 0x43E220u;
label_43e220:
    // 0x43e220: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x43e220u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_43e224:
    // 0x43e224: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_43e228:
    if (ctx->pc == 0x43E228u) {
        ctx->pc = 0x43E22Cu;
        goto label_43e22c;
    }
    ctx->pc = 0x43E224u;
    {
        const bool branch_taken_0x43e224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e224) {
            ctx->pc = 0x43E258u;
            goto label_43e258;
        }
    }
    ctx->pc = 0x43E22Cu;
label_43e22c:
    // 0x43e22c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43e22cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e230:
    // 0x43e230: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43e230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e234:
    // 0x43e234: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x43e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_43e238:
    // 0x43e238: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x43e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_43e23c:
    // 0x43e23c: 0xc0e3658  jal         func_38D960
label_43e240:
    if (ctx->pc == 0x43E240u) {
        ctx->pc = 0x43E240u;
            // 0x43e240: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x43E244u;
        goto label_43e244;
    }
    ctx->pc = 0x43E23Cu;
    SET_GPR_U32(ctx, 31, 0x43E244u);
    ctx->pc = 0x43E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E23Cu;
            // 0x43e240: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E244u; }
        if (ctx->pc != 0x43E244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E244u; }
        if (ctx->pc != 0x43E244u) { return; }
    }
    ctx->pc = 0x43E244u;
label_43e244:
    // 0x43e244: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x43e244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_43e248:
    // 0x43e248: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x43e248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43e24c:
    // 0x43e24c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_43e250:
    if (ctx->pc == 0x43E250u) {
        ctx->pc = 0x43E250u;
            // 0x43e250: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x43E254u;
        goto label_43e254;
    }
    ctx->pc = 0x43E24Cu;
    {
        const bool branch_taken_0x43e24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E24Cu;
            // 0x43e250: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e24c) {
            ctx->pc = 0x43E234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43e234;
        }
    }
    ctx->pc = 0x43E254u;
label_43e254:
    // 0x43e254: 0x0  nop
    ctx->pc = 0x43e254u;
    // NOP
label_43e258:
    // 0x43e258: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43e258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43e25c:
    // 0x43e25c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43e25cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43e260:
    // 0x43e260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43e260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43e264:
    // 0x43e264: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43e264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43e268:
    // 0x43e268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43e26c:
    // 0x43e26c: 0x3e00008  jr          $ra
label_43e270:
    if (ctx->pc == 0x43E270u) {
        ctx->pc = 0x43E270u;
            // 0x43e270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43E274u;
        goto label_43e274;
    }
    ctx->pc = 0x43E26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E26Cu;
            // 0x43e270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E274u;
label_43e274:
    // 0x43e274: 0x0  nop
    ctx->pc = 0x43e274u;
    // NOP
label_43e278:
    // 0x43e278: 0x0  nop
    ctx->pc = 0x43e278u;
    // NOP
label_43e27c:
    // 0x43e27c: 0x0  nop
    ctx->pc = 0x43e27cu;
    // NOP
label_43e280:
    // 0x43e280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_43e284:
    // 0x43e284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43e288:
    // 0x43e288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43e28c:
    // 0x43e28c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43e290:
    // 0x43e290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43e294:
    // 0x43e294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43e294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43e298:
    // 0x43e298: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x43e298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_43e29c:
    // 0x43e29c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_43e2a0:
    if (ctx->pc == 0x43E2A0u) {
        ctx->pc = 0x43E2A0u;
            // 0x43e2a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43E2A4u;
        goto label_43e2a4;
    }
    ctx->pc = 0x43E29Cu;
    {
        const bool branch_taken_0x43e29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E29Cu;
            // 0x43e2a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e29c) {
            ctx->pc = 0x43E2D8u;
            goto label_43e2d8;
        }
    }
    ctx->pc = 0x43E2A4u;
label_43e2a4:
    // 0x43e2a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43e2a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e2a8:
    // 0x43e2a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43e2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e2ac:
    // 0x43e2ac: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x43e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_43e2b0:
    // 0x43e2b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x43e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_43e2b4:
    // 0x43e2b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43e2b8:
    // 0x43e2b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43e2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43e2bc:
    // 0x43e2bc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x43e2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_43e2c0:
    // 0x43e2c0: 0x320f809  jalr        $t9
label_43e2c4:
    if (ctx->pc == 0x43E2C4u) {
        ctx->pc = 0x43E2C8u;
        goto label_43e2c8;
    }
    ctx->pc = 0x43E2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43E2C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43E2C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43E2C8u; }
            if (ctx->pc != 0x43E2C8u) { return; }
        }
        }
    }
    ctx->pc = 0x43E2C8u;
label_43e2c8:
    // 0x43e2c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x43e2c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_43e2cc:
    // 0x43e2cc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x43e2ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43e2d0:
    // 0x43e2d0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_43e2d4:
    if (ctx->pc == 0x43E2D4u) {
        ctx->pc = 0x43E2D4u;
            // 0x43e2d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x43E2D8u;
        goto label_43e2d8;
    }
    ctx->pc = 0x43E2D0u;
    {
        const bool branch_taken_0x43e2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E2D0u;
            // 0x43e2d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e2d0) {
            ctx->pc = 0x43E2ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43e2ac;
        }
    }
    ctx->pc = 0x43E2D8u;
label_43e2d8:
    // 0x43e2d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43e2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43e2dc:
    // 0x43e2dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43e2dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43e2e0:
    // 0x43e2e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43e2e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43e2e4:
    // 0x43e2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43e2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43e2e8:
    // 0x43e2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43e2ec:
    // 0x43e2ec: 0x3e00008  jr          $ra
label_43e2f0:
    if (ctx->pc == 0x43E2F0u) {
        ctx->pc = 0x43E2F0u;
            // 0x43e2f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43E2F4u;
        goto label_43e2f4;
    }
    ctx->pc = 0x43E2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E2ECu;
            // 0x43e2f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E2F4u;
label_43e2f4:
    // 0x43e2f4: 0x0  nop
    ctx->pc = 0x43e2f4u;
    // NOP
label_43e2f8:
    // 0x43e2f8: 0x0  nop
    ctx->pc = 0x43e2f8u;
    // NOP
label_43e2fc:
    // 0x43e2fc: 0x0  nop
    ctx->pc = 0x43e2fcu;
    // NOP
}
