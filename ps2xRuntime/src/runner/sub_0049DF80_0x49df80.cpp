#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049DF80
// Address: 0x49df80 - 0x49e3d0
void sub_0049DF80_0x49df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DF80_0x49df80");
#endif

    switch (ctx->pc) {
        case 0x49df80u: goto label_49df80;
        case 0x49df84u: goto label_49df84;
        case 0x49df88u: goto label_49df88;
        case 0x49df8cu: goto label_49df8c;
        case 0x49df90u: goto label_49df90;
        case 0x49df94u: goto label_49df94;
        case 0x49df98u: goto label_49df98;
        case 0x49df9cu: goto label_49df9c;
        case 0x49dfa0u: goto label_49dfa0;
        case 0x49dfa4u: goto label_49dfa4;
        case 0x49dfa8u: goto label_49dfa8;
        case 0x49dfacu: goto label_49dfac;
        case 0x49dfb0u: goto label_49dfb0;
        case 0x49dfb4u: goto label_49dfb4;
        case 0x49dfb8u: goto label_49dfb8;
        case 0x49dfbcu: goto label_49dfbc;
        case 0x49dfc0u: goto label_49dfc0;
        case 0x49dfc4u: goto label_49dfc4;
        case 0x49dfc8u: goto label_49dfc8;
        case 0x49dfccu: goto label_49dfcc;
        case 0x49dfd0u: goto label_49dfd0;
        case 0x49dfd4u: goto label_49dfd4;
        case 0x49dfd8u: goto label_49dfd8;
        case 0x49dfdcu: goto label_49dfdc;
        case 0x49dfe0u: goto label_49dfe0;
        case 0x49dfe4u: goto label_49dfe4;
        case 0x49dfe8u: goto label_49dfe8;
        case 0x49dfecu: goto label_49dfec;
        case 0x49dff0u: goto label_49dff0;
        case 0x49dff4u: goto label_49dff4;
        case 0x49dff8u: goto label_49dff8;
        case 0x49dffcu: goto label_49dffc;
        case 0x49e000u: goto label_49e000;
        case 0x49e004u: goto label_49e004;
        case 0x49e008u: goto label_49e008;
        case 0x49e00cu: goto label_49e00c;
        case 0x49e010u: goto label_49e010;
        case 0x49e014u: goto label_49e014;
        case 0x49e018u: goto label_49e018;
        case 0x49e01cu: goto label_49e01c;
        case 0x49e020u: goto label_49e020;
        case 0x49e024u: goto label_49e024;
        case 0x49e028u: goto label_49e028;
        case 0x49e02cu: goto label_49e02c;
        case 0x49e030u: goto label_49e030;
        case 0x49e034u: goto label_49e034;
        case 0x49e038u: goto label_49e038;
        case 0x49e03cu: goto label_49e03c;
        case 0x49e040u: goto label_49e040;
        case 0x49e044u: goto label_49e044;
        case 0x49e048u: goto label_49e048;
        case 0x49e04cu: goto label_49e04c;
        case 0x49e050u: goto label_49e050;
        case 0x49e054u: goto label_49e054;
        case 0x49e058u: goto label_49e058;
        case 0x49e05cu: goto label_49e05c;
        case 0x49e060u: goto label_49e060;
        case 0x49e064u: goto label_49e064;
        case 0x49e068u: goto label_49e068;
        case 0x49e06cu: goto label_49e06c;
        case 0x49e070u: goto label_49e070;
        case 0x49e074u: goto label_49e074;
        case 0x49e078u: goto label_49e078;
        case 0x49e07cu: goto label_49e07c;
        case 0x49e080u: goto label_49e080;
        case 0x49e084u: goto label_49e084;
        case 0x49e088u: goto label_49e088;
        case 0x49e08cu: goto label_49e08c;
        case 0x49e090u: goto label_49e090;
        case 0x49e094u: goto label_49e094;
        case 0x49e098u: goto label_49e098;
        case 0x49e09cu: goto label_49e09c;
        case 0x49e0a0u: goto label_49e0a0;
        case 0x49e0a4u: goto label_49e0a4;
        case 0x49e0a8u: goto label_49e0a8;
        case 0x49e0acu: goto label_49e0ac;
        case 0x49e0b0u: goto label_49e0b0;
        case 0x49e0b4u: goto label_49e0b4;
        case 0x49e0b8u: goto label_49e0b8;
        case 0x49e0bcu: goto label_49e0bc;
        case 0x49e0c0u: goto label_49e0c0;
        case 0x49e0c4u: goto label_49e0c4;
        case 0x49e0c8u: goto label_49e0c8;
        case 0x49e0ccu: goto label_49e0cc;
        case 0x49e0d0u: goto label_49e0d0;
        case 0x49e0d4u: goto label_49e0d4;
        case 0x49e0d8u: goto label_49e0d8;
        case 0x49e0dcu: goto label_49e0dc;
        case 0x49e0e0u: goto label_49e0e0;
        case 0x49e0e4u: goto label_49e0e4;
        case 0x49e0e8u: goto label_49e0e8;
        case 0x49e0ecu: goto label_49e0ec;
        case 0x49e0f0u: goto label_49e0f0;
        case 0x49e0f4u: goto label_49e0f4;
        case 0x49e0f8u: goto label_49e0f8;
        case 0x49e0fcu: goto label_49e0fc;
        case 0x49e100u: goto label_49e100;
        case 0x49e104u: goto label_49e104;
        case 0x49e108u: goto label_49e108;
        case 0x49e10cu: goto label_49e10c;
        case 0x49e110u: goto label_49e110;
        case 0x49e114u: goto label_49e114;
        case 0x49e118u: goto label_49e118;
        case 0x49e11cu: goto label_49e11c;
        case 0x49e120u: goto label_49e120;
        case 0x49e124u: goto label_49e124;
        case 0x49e128u: goto label_49e128;
        case 0x49e12cu: goto label_49e12c;
        case 0x49e130u: goto label_49e130;
        case 0x49e134u: goto label_49e134;
        case 0x49e138u: goto label_49e138;
        case 0x49e13cu: goto label_49e13c;
        case 0x49e140u: goto label_49e140;
        case 0x49e144u: goto label_49e144;
        case 0x49e148u: goto label_49e148;
        case 0x49e14cu: goto label_49e14c;
        case 0x49e150u: goto label_49e150;
        case 0x49e154u: goto label_49e154;
        case 0x49e158u: goto label_49e158;
        case 0x49e15cu: goto label_49e15c;
        case 0x49e160u: goto label_49e160;
        case 0x49e164u: goto label_49e164;
        case 0x49e168u: goto label_49e168;
        case 0x49e16cu: goto label_49e16c;
        case 0x49e170u: goto label_49e170;
        case 0x49e174u: goto label_49e174;
        case 0x49e178u: goto label_49e178;
        case 0x49e17cu: goto label_49e17c;
        case 0x49e180u: goto label_49e180;
        case 0x49e184u: goto label_49e184;
        case 0x49e188u: goto label_49e188;
        case 0x49e18cu: goto label_49e18c;
        case 0x49e190u: goto label_49e190;
        case 0x49e194u: goto label_49e194;
        case 0x49e198u: goto label_49e198;
        case 0x49e19cu: goto label_49e19c;
        case 0x49e1a0u: goto label_49e1a0;
        case 0x49e1a4u: goto label_49e1a4;
        case 0x49e1a8u: goto label_49e1a8;
        case 0x49e1acu: goto label_49e1ac;
        case 0x49e1b0u: goto label_49e1b0;
        case 0x49e1b4u: goto label_49e1b4;
        case 0x49e1b8u: goto label_49e1b8;
        case 0x49e1bcu: goto label_49e1bc;
        case 0x49e1c0u: goto label_49e1c0;
        case 0x49e1c4u: goto label_49e1c4;
        case 0x49e1c8u: goto label_49e1c8;
        case 0x49e1ccu: goto label_49e1cc;
        case 0x49e1d0u: goto label_49e1d0;
        case 0x49e1d4u: goto label_49e1d4;
        case 0x49e1d8u: goto label_49e1d8;
        case 0x49e1dcu: goto label_49e1dc;
        case 0x49e1e0u: goto label_49e1e0;
        case 0x49e1e4u: goto label_49e1e4;
        case 0x49e1e8u: goto label_49e1e8;
        case 0x49e1ecu: goto label_49e1ec;
        case 0x49e1f0u: goto label_49e1f0;
        case 0x49e1f4u: goto label_49e1f4;
        case 0x49e1f8u: goto label_49e1f8;
        case 0x49e1fcu: goto label_49e1fc;
        case 0x49e200u: goto label_49e200;
        case 0x49e204u: goto label_49e204;
        case 0x49e208u: goto label_49e208;
        case 0x49e20cu: goto label_49e20c;
        case 0x49e210u: goto label_49e210;
        case 0x49e214u: goto label_49e214;
        case 0x49e218u: goto label_49e218;
        case 0x49e21cu: goto label_49e21c;
        case 0x49e220u: goto label_49e220;
        case 0x49e224u: goto label_49e224;
        case 0x49e228u: goto label_49e228;
        case 0x49e22cu: goto label_49e22c;
        case 0x49e230u: goto label_49e230;
        case 0x49e234u: goto label_49e234;
        case 0x49e238u: goto label_49e238;
        case 0x49e23cu: goto label_49e23c;
        case 0x49e240u: goto label_49e240;
        case 0x49e244u: goto label_49e244;
        case 0x49e248u: goto label_49e248;
        case 0x49e24cu: goto label_49e24c;
        case 0x49e250u: goto label_49e250;
        case 0x49e254u: goto label_49e254;
        case 0x49e258u: goto label_49e258;
        case 0x49e25cu: goto label_49e25c;
        case 0x49e260u: goto label_49e260;
        case 0x49e264u: goto label_49e264;
        case 0x49e268u: goto label_49e268;
        case 0x49e26cu: goto label_49e26c;
        case 0x49e270u: goto label_49e270;
        case 0x49e274u: goto label_49e274;
        case 0x49e278u: goto label_49e278;
        case 0x49e27cu: goto label_49e27c;
        case 0x49e280u: goto label_49e280;
        case 0x49e284u: goto label_49e284;
        case 0x49e288u: goto label_49e288;
        case 0x49e28cu: goto label_49e28c;
        case 0x49e290u: goto label_49e290;
        case 0x49e294u: goto label_49e294;
        case 0x49e298u: goto label_49e298;
        case 0x49e29cu: goto label_49e29c;
        case 0x49e2a0u: goto label_49e2a0;
        case 0x49e2a4u: goto label_49e2a4;
        case 0x49e2a8u: goto label_49e2a8;
        case 0x49e2acu: goto label_49e2ac;
        case 0x49e2b0u: goto label_49e2b0;
        case 0x49e2b4u: goto label_49e2b4;
        case 0x49e2b8u: goto label_49e2b8;
        case 0x49e2bcu: goto label_49e2bc;
        case 0x49e2c0u: goto label_49e2c0;
        case 0x49e2c4u: goto label_49e2c4;
        case 0x49e2c8u: goto label_49e2c8;
        case 0x49e2ccu: goto label_49e2cc;
        case 0x49e2d0u: goto label_49e2d0;
        case 0x49e2d4u: goto label_49e2d4;
        case 0x49e2d8u: goto label_49e2d8;
        case 0x49e2dcu: goto label_49e2dc;
        case 0x49e2e0u: goto label_49e2e0;
        case 0x49e2e4u: goto label_49e2e4;
        case 0x49e2e8u: goto label_49e2e8;
        case 0x49e2ecu: goto label_49e2ec;
        case 0x49e2f0u: goto label_49e2f0;
        case 0x49e2f4u: goto label_49e2f4;
        case 0x49e2f8u: goto label_49e2f8;
        case 0x49e2fcu: goto label_49e2fc;
        case 0x49e300u: goto label_49e300;
        case 0x49e304u: goto label_49e304;
        case 0x49e308u: goto label_49e308;
        case 0x49e30cu: goto label_49e30c;
        case 0x49e310u: goto label_49e310;
        case 0x49e314u: goto label_49e314;
        case 0x49e318u: goto label_49e318;
        case 0x49e31cu: goto label_49e31c;
        case 0x49e320u: goto label_49e320;
        case 0x49e324u: goto label_49e324;
        case 0x49e328u: goto label_49e328;
        case 0x49e32cu: goto label_49e32c;
        case 0x49e330u: goto label_49e330;
        case 0x49e334u: goto label_49e334;
        case 0x49e338u: goto label_49e338;
        case 0x49e33cu: goto label_49e33c;
        case 0x49e340u: goto label_49e340;
        case 0x49e344u: goto label_49e344;
        case 0x49e348u: goto label_49e348;
        case 0x49e34cu: goto label_49e34c;
        case 0x49e350u: goto label_49e350;
        case 0x49e354u: goto label_49e354;
        case 0x49e358u: goto label_49e358;
        case 0x49e35cu: goto label_49e35c;
        case 0x49e360u: goto label_49e360;
        case 0x49e364u: goto label_49e364;
        case 0x49e368u: goto label_49e368;
        case 0x49e36cu: goto label_49e36c;
        case 0x49e370u: goto label_49e370;
        case 0x49e374u: goto label_49e374;
        case 0x49e378u: goto label_49e378;
        case 0x49e37cu: goto label_49e37c;
        case 0x49e380u: goto label_49e380;
        case 0x49e384u: goto label_49e384;
        case 0x49e388u: goto label_49e388;
        case 0x49e38cu: goto label_49e38c;
        case 0x49e390u: goto label_49e390;
        case 0x49e394u: goto label_49e394;
        case 0x49e398u: goto label_49e398;
        case 0x49e39cu: goto label_49e39c;
        case 0x49e3a0u: goto label_49e3a0;
        case 0x49e3a4u: goto label_49e3a4;
        case 0x49e3a8u: goto label_49e3a8;
        case 0x49e3acu: goto label_49e3ac;
        case 0x49e3b0u: goto label_49e3b0;
        case 0x49e3b4u: goto label_49e3b4;
        case 0x49e3b8u: goto label_49e3b8;
        case 0x49e3bcu: goto label_49e3bc;
        case 0x49e3c0u: goto label_49e3c0;
        case 0x49e3c4u: goto label_49e3c4;
        case 0x49e3c8u: goto label_49e3c8;
        case 0x49e3ccu: goto label_49e3cc;
        default: break;
    }

    ctx->pc = 0x49df80u;

label_49df80:
    // 0x49df80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49df84:
    // 0x49df84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49df88:
    // 0x49df88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49df8c:
    // 0x49df8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49df90:
    // 0x49df90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49df90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49df94:
    // 0x49df94: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_49df98:
    if (ctx->pc == 0x49DF98u) {
        ctx->pc = 0x49DF98u;
            // 0x49df98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DF9Cu;
        goto label_49df9c;
    }
    ctx->pc = 0x49DF94u;
    {
        const bool branch_taken_0x49df94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DF94u;
            // 0x49df98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df94) {
            ctx->pc = 0x49E0C8u;
            goto label_49e0c8;
        }
    }
    ctx->pc = 0x49DF9Cu;
label_49df9c:
    // 0x49df9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49dfa0:
    // 0x49dfa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49dfa4:
    // 0x49dfa4: 0x2463ff20  addiu       $v1, $v1, -0xE0
    ctx->pc = 0x49dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
label_49dfa8:
    // 0x49dfa8: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
label_49dfac:
    // 0x49dfac: 0x2442ff58  addiu       $v0, $v0, -0xA8
    ctx->pc = 0x49dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
label_49dfb0:
    // 0x49dfb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_49dfb4:
    // 0x49dfb4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x49dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_49dfb8:
    // 0x49dfb8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x49dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_49dfbc:
    // 0x49dfbc: 0xc0407c0  jal         func_101F00
label_49dfc0:
    if (ctx->pc == 0x49DFC0u) {
        ctx->pc = 0x49DFC0u;
            // 0x49dfc0: 0x24a5e0e0  addiu       $a1, $a1, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959328));
        ctx->pc = 0x49DFC4u;
        goto label_49dfc4;
    }
    ctx->pc = 0x49DFBCu;
    SET_GPR_U32(ctx, 31, 0x49DFC4u);
    ctx->pc = 0x49DFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DFBCu;
            // 0x49dfc0: 0x24a5e0e0  addiu       $a1, $a1, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DFC4u; }
        if (ctx->pc != 0x49DFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DFC4u; }
        if (ctx->pc != 0x49DFC4u) { return; }
    }
    ctx->pc = 0x49DFC4u;
label_49dfc4:
    // 0x49dfc4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x49dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_49dfc8:
    // 0x49dfc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_49dfcc:
    if (ctx->pc == 0x49DFCCu) {
        ctx->pc = 0x49DFCCu;
            // 0x49dfcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x49DFD0u;
        goto label_49dfd0;
    }
    ctx->pc = 0x49DFC8u;
    {
        const bool branch_taken_0x49dfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49dfc8) {
            ctx->pc = 0x49DFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DFC8u;
            // 0x49dfcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49DFDCu;
            goto label_49dfdc;
        }
    }
    ctx->pc = 0x49DFD0u;
label_49dfd0:
    // 0x49dfd0: 0xc07507c  jal         func_1D41F0
label_49dfd4:
    if (ctx->pc == 0x49DFD4u) {
        ctx->pc = 0x49DFD4u;
            // 0x49dfd4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x49DFD8u;
        goto label_49dfd8;
    }
    ctx->pc = 0x49DFD0u;
    SET_GPR_U32(ctx, 31, 0x49DFD8u);
    ctx->pc = 0x49DFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DFD0u;
            // 0x49dfd4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DFD8u; }
        if (ctx->pc != 0x49DFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DFD8u; }
        if (ctx->pc != 0x49DFD8u) { return; }
    }
    ctx->pc = 0x49DFD8u;
label_49dfd8:
    // 0x49dfd8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x49dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_49dfdc:
    // 0x49dfdc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_49dfe0:
    if (ctx->pc == 0x49DFE0u) {
        ctx->pc = 0x49DFE0u;
            // 0x49dfe0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x49DFE4u;
        goto label_49dfe4;
    }
    ctx->pc = 0x49DFDCu;
    {
        const bool branch_taken_0x49dfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49dfdc) {
            ctx->pc = 0x49DFE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DFDCu;
            // 0x49dfe0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E00Cu;
            goto label_49e00c;
        }
    }
    ctx->pc = 0x49DFE4u;
label_49dfe4:
    // 0x49dfe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49dfe8:
    if (ctx->pc == 0x49DFE8u) {
        ctx->pc = 0x49DFECu;
        goto label_49dfec;
    }
    ctx->pc = 0x49DFE4u;
    {
        const bool branch_taken_0x49dfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49dfe4) {
            ctx->pc = 0x49E008u;
            goto label_49e008;
        }
    }
    ctx->pc = 0x49DFECu;
label_49dfec:
    // 0x49dfec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49dff0:
    if (ctx->pc == 0x49DFF0u) {
        ctx->pc = 0x49DFF4u;
        goto label_49dff4;
    }
    ctx->pc = 0x49DFECu;
    {
        const bool branch_taken_0x49dfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49dfec) {
            ctx->pc = 0x49E008u;
            goto label_49e008;
        }
    }
    ctx->pc = 0x49DFF4u;
label_49dff4:
    // 0x49dff4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x49dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_49dff8:
    // 0x49dff8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49dffc:
    if (ctx->pc == 0x49DFFCu) {
        ctx->pc = 0x49E000u;
        goto label_49e000;
    }
    ctx->pc = 0x49DFF8u;
    {
        const bool branch_taken_0x49dff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49dff8) {
            ctx->pc = 0x49E008u;
            goto label_49e008;
        }
    }
    ctx->pc = 0x49E000u;
label_49e000:
    // 0x49e000: 0xc0400a8  jal         func_1002A0
label_49e004:
    if (ctx->pc == 0x49E004u) {
        ctx->pc = 0x49E008u;
        goto label_49e008;
    }
    ctx->pc = 0x49E000u;
    SET_GPR_U32(ctx, 31, 0x49E008u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E008u; }
        if (ctx->pc != 0x49E008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E008u; }
        if (ctx->pc != 0x49E008u) { return; }
    }
    ctx->pc = 0x49E008u;
label_49e008:
    // 0x49e008: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x49e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_49e00c:
    // 0x49e00c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_49e010:
    if (ctx->pc == 0x49E010u) {
        ctx->pc = 0x49E010u;
            // 0x49e010: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x49E014u;
        goto label_49e014;
    }
    ctx->pc = 0x49E00Cu;
    {
        const bool branch_taken_0x49e00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e00c) {
            ctx->pc = 0x49E010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E00Cu;
            // 0x49e010: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E03Cu;
            goto label_49e03c;
        }
    }
    ctx->pc = 0x49E014u;
label_49e014:
    // 0x49e014: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49e018:
    if (ctx->pc == 0x49E018u) {
        ctx->pc = 0x49E01Cu;
        goto label_49e01c;
    }
    ctx->pc = 0x49E014u;
    {
        const bool branch_taken_0x49e014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e014) {
            ctx->pc = 0x49E038u;
            goto label_49e038;
        }
    }
    ctx->pc = 0x49E01Cu;
label_49e01c:
    // 0x49e01c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49e020:
    if (ctx->pc == 0x49E020u) {
        ctx->pc = 0x49E024u;
        goto label_49e024;
    }
    ctx->pc = 0x49E01Cu;
    {
        const bool branch_taken_0x49e01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e01c) {
            ctx->pc = 0x49E038u;
            goto label_49e038;
        }
    }
    ctx->pc = 0x49E024u;
label_49e024:
    // 0x49e024: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x49e024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_49e028:
    // 0x49e028: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49e02c:
    if (ctx->pc == 0x49E02Cu) {
        ctx->pc = 0x49E030u;
        goto label_49e030;
    }
    ctx->pc = 0x49E028u;
    {
        const bool branch_taken_0x49e028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e028) {
            ctx->pc = 0x49E038u;
            goto label_49e038;
        }
    }
    ctx->pc = 0x49E030u;
label_49e030:
    // 0x49e030: 0xc0400a8  jal         func_1002A0
label_49e034:
    if (ctx->pc == 0x49E034u) {
        ctx->pc = 0x49E038u;
        goto label_49e038;
    }
    ctx->pc = 0x49E030u;
    SET_GPR_U32(ctx, 31, 0x49E038u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E038u; }
        if (ctx->pc != 0x49E038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E038u; }
        if (ctx->pc != 0x49E038u) { return; }
    }
    ctx->pc = 0x49E038u;
label_49e038:
    // 0x49e038: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x49e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_49e03c:
    // 0x49e03c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49e040:
    if (ctx->pc == 0x49E040u) {
        ctx->pc = 0x49E044u;
        goto label_49e044;
    }
    ctx->pc = 0x49E03Cu;
    {
        const bool branch_taken_0x49e03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e03c) {
            ctx->pc = 0x49E058u;
            goto label_49e058;
        }
    }
    ctx->pc = 0x49E044u;
label_49e044:
    // 0x49e044: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49e044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49e048:
    // 0x49e048: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49e048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49e04c:
    // 0x49e04c: 0x2463ff08  addiu       $v1, $v1, -0xF8
    ctx->pc = 0x49e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967048));
label_49e050:
    // 0x49e050: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x49e050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_49e054:
    // 0x49e054: 0xac407c18  sw          $zero, 0x7C18($v0)
    ctx->pc = 0x49e054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31768), GPR_U32(ctx, 0));
label_49e058:
    // 0x49e058: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_49e05c:
    if (ctx->pc == 0x49E05Cu) {
        ctx->pc = 0x49E05Cu;
            // 0x49e05c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x49E060u;
        goto label_49e060;
    }
    ctx->pc = 0x49E058u;
    {
        const bool branch_taken_0x49e058 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e058) {
            ctx->pc = 0x49E05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E058u;
            // 0x49e05c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E0B4u;
            goto label_49e0b4;
        }
    }
    ctx->pc = 0x49E060u;
label_49e060:
    // 0x49e060: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49e060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49e064:
    // 0x49e064: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x49e064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_49e068:
    // 0x49e068: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49e068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49e06c:
    // 0x49e06c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x49e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_49e070:
    // 0x49e070: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49e074:
    if (ctx->pc == 0x49E074u) {
        ctx->pc = 0x49E074u;
            // 0x49e074: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x49E078u;
        goto label_49e078;
    }
    ctx->pc = 0x49E070u;
    {
        const bool branch_taken_0x49e070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e070) {
            ctx->pc = 0x49E074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E070u;
            // 0x49e074: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E08Cu;
            goto label_49e08c;
        }
    }
    ctx->pc = 0x49E078u;
label_49e078:
    // 0x49e078: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49e078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49e07c:
    // 0x49e07c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49e07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49e080:
    // 0x49e080: 0x320f809  jalr        $t9
label_49e084:
    if (ctx->pc == 0x49E084u) {
        ctx->pc = 0x49E084u;
            // 0x49e084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49E088u;
        goto label_49e088;
    }
    ctx->pc = 0x49E080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49E088u);
        ctx->pc = 0x49E084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E080u;
            // 0x49e084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49E088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49E088u; }
            if (ctx->pc != 0x49E088u) { return; }
        }
        }
    }
    ctx->pc = 0x49E088u;
label_49e088:
    // 0x49e088: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x49e088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_49e08c:
    // 0x49e08c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49e090:
    if (ctx->pc == 0x49E090u) {
        ctx->pc = 0x49E090u;
            // 0x49e090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E094u;
        goto label_49e094;
    }
    ctx->pc = 0x49E08Cu;
    {
        const bool branch_taken_0x49e08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e08c) {
            ctx->pc = 0x49E090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E08Cu;
            // 0x49e090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E0A8u;
            goto label_49e0a8;
        }
    }
    ctx->pc = 0x49E094u;
label_49e094:
    // 0x49e094: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49e094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49e098:
    // 0x49e098: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49e098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49e09c:
    // 0x49e09c: 0x320f809  jalr        $t9
label_49e0a0:
    if (ctx->pc == 0x49E0A0u) {
        ctx->pc = 0x49E0A0u;
            // 0x49e0a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49E0A4u;
        goto label_49e0a4;
    }
    ctx->pc = 0x49E09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49E0A4u);
        ctx->pc = 0x49E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E09Cu;
            // 0x49e0a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49E0A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49E0A4u; }
            if (ctx->pc != 0x49E0A4u) { return; }
        }
        }
    }
    ctx->pc = 0x49E0A4u;
label_49e0a4:
    // 0x49e0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49e0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49e0a8:
    // 0x49e0a8: 0xc075bf8  jal         func_1D6FE0
label_49e0ac:
    if (ctx->pc == 0x49E0ACu) {
        ctx->pc = 0x49E0ACu;
            // 0x49e0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E0B0u;
        goto label_49e0b0;
    }
    ctx->pc = 0x49E0A8u;
    SET_GPR_U32(ctx, 31, 0x49E0B0u);
    ctx->pc = 0x49E0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E0A8u;
            // 0x49e0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E0B0u; }
        if (ctx->pc != 0x49E0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E0B0u; }
        if (ctx->pc != 0x49E0B0u) { return; }
    }
    ctx->pc = 0x49E0B0u;
label_49e0b0:
    // 0x49e0b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49e0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49e0b4:
    // 0x49e0b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49e0b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49e0b8:
    // 0x49e0b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49e0bc:
    if (ctx->pc == 0x49E0BCu) {
        ctx->pc = 0x49E0BCu;
            // 0x49e0bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E0C0u;
        goto label_49e0c0;
    }
    ctx->pc = 0x49E0B8u;
    {
        const bool branch_taken_0x49e0b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49e0b8) {
            ctx->pc = 0x49E0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E0B8u;
            // 0x49e0bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E0CCu;
            goto label_49e0cc;
        }
    }
    ctx->pc = 0x49E0C0u;
label_49e0c0:
    // 0x49e0c0: 0xc0400a8  jal         func_1002A0
label_49e0c4:
    if (ctx->pc == 0x49E0C4u) {
        ctx->pc = 0x49E0C4u;
            // 0x49e0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E0C8u;
        goto label_49e0c8;
    }
    ctx->pc = 0x49E0C0u;
    SET_GPR_U32(ctx, 31, 0x49E0C8u);
    ctx->pc = 0x49E0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E0C0u;
            // 0x49e0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E0C8u; }
        if (ctx->pc != 0x49E0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E0C8u; }
        if (ctx->pc != 0x49E0C8u) { return; }
    }
    ctx->pc = 0x49E0C8u;
label_49e0c8:
    // 0x49e0c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49e0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49e0cc:
    // 0x49e0cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49e0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49e0d0:
    // 0x49e0d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49e0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49e0d4:
    // 0x49e0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49e0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49e0d8:
    // 0x49e0d8: 0x3e00008  jr          $ra
label_49e0dc:
    if (ctx->pc == 0x49E0DCu) {
        ctx->pc = 0x49E0DCu;
            // 0x49e0dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49E0E0u;
        goto label_49e0e0;
    }
    ctx->pc = 0x49E0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E0D8u;
            // 0x49e0dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E0E0u;
label_49e0e0:
    // 0x49e0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49e0e4:
    // 0x49e0e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49e0e8:
    // 0x49e0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49e0ec:
    // 0x49e0ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49e0f0:
    // 0x49e0f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49e0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49e0f4:
    // 0x49e0f4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_49e0f8:
    if (ctx->pc == 0x49E0F8u) {
        ctx->pc = 0x49E0F8u;
            // 0x49e0f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E0FCu;
        goto label_49e0fc;
    }
    ctx->pc = 0x49E0F4u;
    {
        const bool branch_taken_0x49e0f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E0F4u;
            // 0x49e0f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e0f4) {
            ctx->pc = 0x49E154u;
            goto label_49e154;
        }
    }
    ctx->pc = 0x49E0FCu;
label_49e0fc:
    // 0x49e0fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49e100:
    // 0x49e100: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x49e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_49e104:
    // 0x49e104: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49e104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49e108:
    // 0x49e108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49e108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49e10c:
    // 0x49e10c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x49e10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_49e110:
    // 0x49e110: 0x320f809  jalr        $t9
label_49e114:
    if (ctx->pc == 0x49E114u) {
        ctx->pc = 0x49E118u;
        goto label_49e118;
    }
    ctx->pc = 0x49E110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49E118u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49E118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49E118u; }
            if (ctx->pc != 0x49E118u) { return; }
        }
        }
    }
    ctx->pc = 0x49E118u;
label_49e118:
    // 0x49e118: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_49e11c:
    if (ctx->pc == 0x49E11Cu) {
        ctx->pc = 0x49E11Cu;
            // 0x49e11c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x49E120u;
        goto label_49e120;
    }
    ctx->pc = 0x49E118u;
    {
        const bool branch_taken_0x49e118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e118) {
            ctx->pc = 0x49E11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E118u;
            // 0x49e11c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E140u;
            goto label_49e140;
        }
    }
    ctx->pc = 0x49E120u;
label_49e120:
    // 0x49e120: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49e124:
    // 0x49e124: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x49e124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_49e128:
    // 0x49e128: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_49e12c:
    if (ctx->pc == 0x49E12Cu) {
        ctx->pc = 0x49E12Cu;
            // 0x49e12c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49E130u;
        goto label_49e130;
    }
    ctx->pc = 0x49E128u;
    {
        const bool branch_taken_0x49e128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E128u;
            // 0x49e12c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e128) {
            ctx->pc = 0x49E13Cu;
            goto label_49e13c;
        }
    }
    ctx->pc = 0x49E130u;
label_49e130:
    // 0x49e130: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49e130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49e134:
    // 0x49e134: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x49e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_49e138:
    // 0x49e138: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49e138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49e13c:
    // 0x49e13c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49e140:
    // 0x49e140: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49e140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49e144:
    // 0x49e144: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49e148:
    if (ctx->pc == 0x49E148u) {
        ctx->pc = 0x49E148u;
            // 0x49e148: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E14Cu;
        goto label_49e14c;
    }
    ctx->pc = 0x49E144u;
    {
        const bool branch_taken_0x49e144 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49e144) {
            ctx->pc = 0x49E148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E144u;
            // 0x49e148: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E158u;
            goto label_49e158;
        }
    }
    ctx->pc = 0x49E14Cu;
label_49e14c:
    // 0x49e14c: 0xc0400a8  jal         func_1002A0
label_49e150:
    if (ctx->pc == 0x49E150u) {
        ctx->pc = 0x49E150u;
            // 0x49e150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E154u;
        goto label_49e154;
    }
    ctx->pc = 0x49E14Cu;
    SET_GPR_U32(ctx, 31, 0x49E154u);
    ctx->pc = 0x49E150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E14Cu;
            // 0x49e150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E154u; }
        if (ctx->pc != 0x49E154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E154u; }
        if (ctx->pc != 0x49E154u) { return; }
    }
    ctx->pc = 0x49E154u;
label_49e154:
    // 0x49e154: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49e154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49e158:
    // 0x49e158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49e15c:
    // 0x49e15c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49e15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49e160:
    // 0x49e160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49e160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49e164:
    // 0x49e164: 0x3e00008  jr          $ra
label_49e168:
    if (ctx->pc == 0x49E168u) {
        ctx->pc = 0x49E168u;
            // 0x49e168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49E16Cu;
        goto label_49e16c;
    }
    ctx->pc = 0x49E164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E164u;
            // 0x49e168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E16Cu;
label_49e16c:
    // 0x49e16c: 0x0  nop
    ctx->pc = 0x49e16cu;
    // NOP
label_49e170:
    // 0x49e170: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x49e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_49e174:
    // 0x49e174: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49e174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49e178:
    // 0x49e178: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x49e178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_49e17c:
    // 0x49e17c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x49e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_49e180:
    // 0x49e180: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x49e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_49e184:
    // 0x49e184: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x49e184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_49e188:
    // 0x49e188: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x49e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_49e18c:
    // 0x49e18c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x49e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_49e190:
    // 0x49e190: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x49e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_49e194:
    // 0x49e194: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x49e194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_49e198:
    // 0x49e198: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49e198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49e19c:
    // 0x49e19c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49e1a0:
    // 0x49e1a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x49e1a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_49e1a4:
    // 0x49e1a4: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x49e1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49e1a8:
    // 0x49e1a8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49e1a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49e1ac:
    // 0x49e1ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49e1b0:
    // 0x49e1b0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_49e1b4:
    if (ctx->pc == 0x49E1B4u) {
        ctx->pc = 0x49E1B4u;
            // 0x49e1b4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E1B8u;
        goto label_49e1b8;
    }
    ctx->pc = 0x49E1B0u;
    {
        const bool branch_taken_0x49e1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49E1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E1B0u;
            // 0x49e1b4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e1b0) {
            ctx->pc = 0x49E1F4u;
            goto label_49e1f4;
        }
    }
    ctx->pc = 0x49E1B8u;
label_49e1b8:
    // 0x49e1b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49e1bc:
    // 0x49e1bc: 0x50a30078  beql        $a1, $v1, . + 4 + (0x78 << 2)
label_49e1c0:
    if (ctx->pc == 0x49E1C0u) {
        ctx->pc = 0x49E1C0u;
            // 0x49e1c0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x49E1C4u;
        goto label_49e1c4;
    }
    ctx->pc = 0x49E1BCu;
    {
        const bool branch_taken_0x49e1bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49e1bc) {
            ctx->pc = 0x49E1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E1BCu;
            // 0x49e1c0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E3A0u;
            goto label_49e3a0;
        }
    }
    ctx->pc = 0x49E1C4u;
label_49e1c4:
    // 0x49e1c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49e1c8:
    // 0x49e1c8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_49e1cc:
    if (ctx->pc == 0x49E1CCu) {
        ctx->pc = 0x49E1CCu;
            // 0x49e1cc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49E1D0u;
        goto label_49e1d0;
    }
    ctx->pc = 0x49E1C8u;
    {
        const bool branch_taken_0x49e1c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49e1c8) {
            ctx->pc = 0x49E1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E1C8u;
            // 0x49e1cc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E1D8u;
            goto label_49e1d8;
        }
    }
    ctx->pc = 0x49E1D0u;
label_49e1d0:
    // 0x49e1d0: 0x10000072  b           . + 4 + (0x72 << 2)
label_49e1d4:
    if (ctx->pc == 0x49E1D4u) {
        ctx->pc = 0x49E1D8u;
        goto label_49e1d8;
    }
    ctx->pc = 0x49E1D0u;
    {
        const bool branch_taken_0x49e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e1d0) {
            ctx->pc = 0x49E39Cu;
            goto label_49e39c;
        }
    }
    ctx->pc = 0x49E1D8u;
label_49e1d8:
    // 0x49e1d8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x49e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_49e1dc:
    // 0x49e1dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x49e1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_49e1e0:
    // 0x49e1e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_49e1e4:
    // 0x49e1e4: 0x320f809  jalr        $t9
label_49e1e8:
    if (ctx->pc == 0x49E1E8u) {
        ctx->pc = 0x49E1E8u;
            // 0x49e1e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x49E1ECu;
        goto label_49e1ec;
    }
    ctx->pc = 0x49E1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49E1ECu);
        ctx->pc = 0x49E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E1E4u;
            // 0x49e1e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49E1ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49E1ECu; }
            if (ctx->pc != 0x49E1ECu) { return; }
        }
        }
    }
    ctx->pc = 0x49E1ECu;
label_49e1ec:
    // 0x49e1ec: 0x1000006b  b           . + 4 + (0x6B << 2)
label_49e1f0:
    if (ctx->pc == 0x49E1F0u) {
        ctx->pc = 0x49E1F4u;
        goto label_49e1f4;
    }
    ctx->pc = 0x49E1ECu;
    {
        const bool branch_taken_0x49e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e1ec) {
            ctx->pc = 0x49E39Cu;
            goto label_49e39c;
        }
    }
    ctx->pc = 0x49E1F4u;
label_49e1f4:
    // 0x49e1f4: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x49e1f4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_49e1f8:
    // 0x49e1f8: 0x12e00068  beqz        $s7, . + 4 + (0x68 << 2)
label_49e1fc:
    if (ctx->pc == 0x49E1FCu) {
        ctx->pc = 0x49E200u;
        goto label_49e200;
    }
    ctx->pc = 0x49E1F8u;
    {
        const bool branch_taken_0x49e1f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e1f8) {
            ctx->pc = 0x49E39Cu;
            goto label_49e39c;
        }
    }
    ctx->pc = 0x49E200u;
label_49e200:
    // 0x49e200: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x49e200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_49e204:
    // 0x49e204: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x49e204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_49e208:
    // 0x49e208: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x49e208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_49e20c:
    // 0x49e20c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x49e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_49e210:
    // 0x49e210: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x49e210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_49e214:
    // 0x49e214: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e218:
    // 0x49e218: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x49e218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49e21c:
    // 0x49e21c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49e220:
    // 0x49e220: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x49e220u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_49e224:
    // 0x49e224: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_49e228:
    // 0x49e228: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49e228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49e22c:
    // 0x49e22c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x49e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_49e230:
    // 0x49e230: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x49e230u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_49e234:
    // 0x49e234: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x49e234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_49e238:
    // 0x49e238: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x49e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_49e23c:
    // 0x49e23c: 0xc04e738  jal         func_139CE0
label_49e240:
    if (ctx->pc == 0x49E240u) {
        ctx->pc = 0x49E240u;
            // 0x49e240: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x49E244u;
        goto label_49e244;
    }
    ctx->pc = 0x49E23Cu;
    SET_GPR_U32(ctx, 31, 0x49E244u);
    ctx->pc = 0x49E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E23Cu;
            // 0x49e240: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E244u; }
        if (ctx->pc != 0x49E244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E244u; }
        if (ctx->pc != 0x49E244u) { return; }
    }
    ctx->pc = 0x49E244u;
label_49e244:
    // 0x49e244: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x49e244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_49e248:
    // 0x49e248: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x49e248u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e24c:
    // 0x49e24c: 0xc4540b50  lwc1        $f20, 0xB50($v0)
    ctx->pc = 0x49e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49e250:
    // 0x49e250: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49e250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e254:
    // 0x49e254: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x49e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_49e258:
    // 0x49e258: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x49e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_49e25c:
    // 0x49e25c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x49e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
label_49e260:
    // 0x49e260: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x49e260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_49e264:
    // 0x49e264: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x49e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_49e268:
    // 0x49e268: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x49e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_49e26c:
    // 0x49e26c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x49e26cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49e270:
    // 0x49e270: 0xc0d1c14  jal         func_347050
label_49e274:
    if (ctx->pc == 0x49E274u) {
        ctx->pc = 0x49E274u;
            // 0x49e274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E278u;
        goto label_49e278;
    }
    ctx->pc = 0x49E270u;
    SET_GPR_U32(ctx, 31, 0x49E278u);
    ctx->pc = 0x49E274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E270u;
            // 0x49e274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E278u; }
        if (ctx->pc != 0x49E278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E278u; }
        if (ctx->pc != 0x49E278u) { return; }
    }
    ctx->pc = 0x49E278u;
label_49e278:
    // 0x49e278: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49e278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e27c:
    // 0x49e27c: 0xc04f278  jal         func_13C9E0
label_49e280:
    if (ctx->pc == 0x49E280u) {
        ctx->pc = 0x49E280u;
            // 0x49e280: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x49E284u;
        goto label_49e284;
    }
    ctx->pc = 0x49E27Cu;
    SET_GPR_U32(ctx, 31, 0x49E284u);
    ctx->pc = 0x49E280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E27Cu;
            // 0x49e280: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E284u; }
        if (ctx->pc != 0x49E284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E284u; }
        if (ctx->pc != 0x49E284u) { return; }
    }
    ctx->pc = 0x49E284u;
label_49e284:
    // 0x49e284: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x49e284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_49e288:
    // 0x49e288: 0xc04cce8  jal         func_1333A0
label_49e28c:
    if (ctx->pc == 0x49E28Cu) {
        ctx->pc = 0x49E28Cu;
            // 0x49e28c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x49E290u;
        goto label_49e290;
    }
    ctx->pc = 0x49E288u;
    SET_GPR_U32(ctx, 31, 0x49E290u);
    ctx->pc = 0x49E28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E288u;
            // 0x49e28c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E290u; }
        if (ctx->pc != 0x49E290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E290u; }
        if (ctx->pc != 0x49E290u) { return; }
    }
    ctx->pc = 0x49E290u;
label_49e290:
    // 0x49e290: 0xc0d1c10  jal         func_347040
label_49e294:
    if (ctx->pc == 0x49E294u) {
        ctx->pc = 0x49E294u;
            // 0x49e294: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E298u;
        goto label_49e298;
    }
    ctx->pc = 0x49E290u;
    SET_GPR_U32(ctx, 31, 0x49E298u);
    ctx->pc = 0x49E294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E290u;
            // 0x49e294: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E298u; }
        if (ctx->pc != 0x49E298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E298u; }
        if (ctx->pc != 0x49E298u) { return; }
    }
    ctx->pc = 0x49E298u;
label_49e298:
    // 0x49e298: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49e298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e29c:
    // 0x49e29c: 0xc04ce80  jal         func_133A00
label_49e2a0:
    if (ctx->pc == 0x49E2A0u) {
        ctx->pc = 0x49E2A0u;
            // 0x49e2a0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x49E2A4u;
        goto label_49e2a4;
    }
    ctx->pc = 0x49E29Cu;
    SET_GPR_U32(ctx, 31, 0x49E2A4u);
    ctx->pc = 0x49E2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E29Cu;
            // 0x49e2a0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2A4u; }
        if (ctx->pc != 0x49E2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2A4u; }
        if (ctx->pc != 0x49E2A4u) { return; }
    }
    ctx->pc = 0x49E2A4u;
label_49e2a4:
    // 0x49e2a4: 0xc0d4108  jal         func_350420
label_49e2a8:
    if (ctx->pc == 0x49E2A8u) {
        ctx->pc = 0x49E2ACu;
        goto label_49e2ac;
    }
    ctx->pc = 0x49E2A4u;
    SET_GPR_U32(ctx, 31, 0x49E2ACu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2ACu; }
        if (ctx->pc != 0x49E2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2ACu; }
        if (ctx->pc != 0x49E2ACu) { return; }
    }
    ctx->pc = 0x49E2ACu;
label_49e2ac:
    // 0x49e2ac: 0xc0b36b4  jal         func_2CDAD0
label_49e2b0:
    if (ctx->pc == 0x49E2B0u) {
        ctx->pc = 0x49E2B0u;
            // 0x49e2b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E2B4u;
        goto label_49e2b4;
    }
    ctx->pc = 0x49E2ACu;
    SET_GPR_U32(ctx, 31, 0x49E2B4u);
    ctx->pc = 0x49E2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E2ACu;
            // 0x49e2b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2B4u; }
        if (ctx->pc != 0x49E2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2B4u; }
        if (ctx->pc != 0x49E2B4u) { return; }
    }
    ctx->pc = 0x49E2B4u;
label_49e2b4:
    // 0x49e2b4: 0xc0b9c64  jal         func_2E7190
label_49e2b8:
    if (ctx->pc == 0x49E2B8u) {
        ctx->pc = 0x49E2B8u;
            // 0x49e2b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E2BCu;
        goto label_49e2bc;
    }
    ctx->pc = 0x49E2B4u;
    SET_GPR_U32(ctx, 31, 0x49E2BCu);
    ctx->pc = 0x49E2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E2B4u;
            // 0x49e2b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2BCu; }
        if (ctx->pc != 0x49E2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2BCu; }
        if (ctx->pc != 0x49E2BCu) { return; }
    }
    ctx->pc = 0x49E2BCu;
label_49e2bc:
    // 0x49e2bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49e2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e2c0:
    // 0x49e2c0: 0xc0d4104  jal         func_350410
label_49e2c4:
    if (ctx->pc == 0x49E2C4u) {
        ctx->pc = 0x49E2C4u;
            // 0x49e2c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E2C8u;
        goto label_49e2c8;
    }
    ctx->pc = 0x49E2C0u;
    SET_GPR_U32(ctx, 31, 0x49E2C8u);
    ctx->pc = 0x49E2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E2C0u;
            // 0x49e2c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2C8u; }
        if (ctx->pc != 0x49E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2C8u; }
        if (ctx->pc != 0x49E2C8u) { return; }
    }
    ctx->pc = 0x49E2C8u;
label_49e2c8:
    // 0x49e2c8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x49e2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49e2cc:
    // 0x49e2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49e2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49e2d0:
    // 0x49e2d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49e2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49e2d4:
    // 0x49e2d4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x49e2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_49e2d8:
    // 0x49e2d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x49e2d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49e2dc:
    // 0x49e2dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49e2dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e2e0:
    // 0x49e2e0: 0xc0d40ac  jal         func_3502B0
label_49e2e4:
    if (ctx->pc == 0x49E2E4u) {
        ctx->pc = 0x49E2E4u;
            // 0x49e2e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x49E2E8u;
        goto label_49e2e8;
    }
    ctx->pc = 0x49E2E0u;
    SET_GPR_U32(ctx, 31, 0x49E2E8u);
    ctx->pc = 0x49E2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E2E0u;
            // 0x49e2e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2E8u; }
        if (ctx->pc != 0x49E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E2E8u; }
        if (ctx->pc != 0x49E2E8u) { return; }
    }
    ctx->pc = 0x49E2E8u;
label_49e2e8:
    // 0x49e2e8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x49e2e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_49e2ec:
    // 0x49e2ec: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_49e2f0:
    if (ctx->pc == 0x49E2F0u) {
        ctx->pc = 0x49E2F0u;
            // 0x49e2f0: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x49E2F4u;
        goto label_49e2f4;
    }
    ctx->pc = 0x49E2ECu;
    {
        const bool branch_taken_0x49e2ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E2ECu;
            // 0x49e2f0: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2ec) {
            ctx->pc = 0x49E360u;
            goto label_49e360;
        }
    }
    ctx->pc = 0x49E2F4u;
label_49e2f4:
    // 0x49e2f4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x49e2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49e2f8:
    // 0x49e2f8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x49e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_49e2fc:
    // 0x49e2fc: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x49e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_49e300:
    // 0x49e300: 0xc1278f4  jal         func_49E3D0
label_49e304:
    if (ctx->pc == 0x49E304u) {
        ctx->pc = 0x49E304u;
            // 0x49e304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E308u;
        goto label_49e308;
    }
    ctx->pc = 0x49E300u;
    SET_GPR_U32(ctx, 31, 0x49E308u);
    ctx->pc = 0x49E304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E300u;
            // 0x49e304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E3D0u;
    if (runtime->hasFunction(0x49E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x49E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E308u; }
        if (ctx->pc != 0x49E308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E3D0_0x49e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E308u; }
        if (ctx->pc != 0x49E308u) { return; }
    }
    ctx->pc = 0x49E308u;
label_49e308:
    // 0x49e308: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x49e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_49e30c:
    // 0x49e30c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x49e30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_49e310:
    // 0x49e310: 0xc04cd60  jal         func_133580
label_49e314:
    if (ctx->pc == 0x49E314u) {
        ctx->pc = 0x49E314u;
            // 0x49e314: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E318u;
        goto label_49e318;
    }
    ctx->pc = 0x49E310u;
    SET_GPR_U32(ctx, 31, 0x49E318u);
    ctx->pc = 0x49E314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E310u;
            // 0x49e314: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E318u; }
        if (ctx->pc != 0x49E318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E318u; }
        if (ctx->pc != 0x49E318u) { return; }
    }
    ctx->pc = 0x49E318u;
label_49e318:
    // 0x49e318: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x49e318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_49e31c:
    // 0x49e31c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x49e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_49e320:
    // 0x49e320: 0xc04e4a4  jal         func_139290
label_49e324:
    if (ctx->pc == 0x49E324u) {
        ctx->pc = 0x49E324u;
            // 0x49e324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E328u;
        goto label_49e328;
    }
    ctx->pc = 0x49E320u;
    SET_GPR_U32(ctx, 31, 0x49E328u);
    ctx->pc = 0x49E324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E320u;
            // 0x49e324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E328u; }
        if (ctx->pc != 0x49E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E328u; }
        if (ctx->pc != 0x49E328u) { return; }
    }
    ctx->pc = 0x49E328u;
label_49e328:
    // 0x49e328: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x49e328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_49e32c:
    // 0x49e32c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x49e32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_49e330:
    // 0x49e330: 0x320f809  jalr        $t9
label_49e334:
    if (ctx->pc == 0x49E334u) {
        ctx->pc = 0x49E334u;
            // 0x49e334: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E338u;
        goto label_49e338;
    }
    ctx->pc = 0x49E330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49E338u);
        ctx->pc = 0x49E334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E330u;
            // 0x49e334: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49E338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49E338u; }
            if (ctx->pc != 0x49E338u) { return; }
        }
        }
    }
    ctx->pc = 0x49E338u;
label_49e338:
    // 0x49e338: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x49e338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_49e33c:
    // 0x49e33c: 0xc68c0060  lwc1        $f12, 0x60($s4)
    ctx->pc = 0x49e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49e340:
    // 0x49e340: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x49e340u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_49e344:
    // 0x49e344: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x49e344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_49e348:
    // 0x49e348: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x49e348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_49e34c:
    // 0x49e34c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x49e34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49e350:
    // 0x49e350: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x49e350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_49e354:
    // 0x49e354: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x49e354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_49e358:
    // 0x49e358: 0xc04cff4  jal         func_133FD0
label_49e35c:
    if (ctx->pc == 0x49E35Cu) {
        ctx->pc = 0x49E35Cu;
            // 0x49e35c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E360u;
        goto label_49e360;
    }
    ctx->pc = 0x49E358u;
    SET_GPR_U32(ctx, 31, 0x49E360u);
    ctx->pc = 0x49E35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E358u;
            // 0x49e35c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E360u; }
        if (ctx->pc != 0x49E360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E360u; }
        if (ctx->pc != 0x49E360u) { return; }
    }
    ctx->pc = 0x49E360u;
label_49e360:
    // 0x49e360: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x49e360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_49e364:
    // 0x49e364: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x49e364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_49e368:
    // 0x49e368: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_49e36c:
    if (ctx->pc == 0x49E36Cu) {
        ctx->pc = 0x49E36Cu;
            // 0x49e36c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x49E370u;
        goto label_49e370;
    }
    ctx->pc = 0x49E368u;
    {
        const bool branch_taken_0x49e368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E368u;
            // 0x49e36c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e368) {
            ctx->pc = 0x49E254u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49e254;
        }
    }
    ctx->pc = 0x49E370u;
label_49e370:
    // 0x49e370: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e374:
    // 0x49e374: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x49e374u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_49e378:
    // 0x49e378: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_49e37c:
    if (ctx->pc == 0x49E37Cu) {
        ctx->pc = 0x49E37Cu;
            // 0x49e37c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x49E380u;
        goto label_49e380;
    }
    ctx->pc = 0x49E378u;
    {
        const bool branch_taken_0x49e378 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x49E37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E378u;
            // 0x49e37c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e378) {
            ctx->pc = 0x49E39Cu;
            goto label_49e39c;
        }
    }
    ctx->pc = 0x49E380u;
label_49e380:
    // 0x49e380: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49e380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49e384:
    // 0x49e384: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49e388:
    // 0x49e388: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x49e388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_49e38c:
    // 0x49e38c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x49e38cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_49e390:
    // 0x49e390: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x49e390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_49e394:
    // 0x49e394: 0xc055990  jal         func_156640
label_49e398:
    if (ctx->pc == 0x49E398u) {
        ctx->pc = 0x49E398u;
            // 0x49e398: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E39Cu;
        goto label_49e39c;
    }
    ctx->pc = 0x49E394u;
    SET_GPR_U32(ctx, 31, 0x49E39Cu);
    ctx->pc = 0x49E398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E394u;
            // 0x49e398: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E39Cu; }
        if (ctx->pc != 0x49E39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E39Cu; }
        if (ctx->pc != 0x49E39Cu) { return; }
    }
    ctx->pc = 0x49E39Cu;
label_49e39c:
    // 0x49e39c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x49e39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_49e3a0:
    // 0x49e3a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x49e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49e3a4:
    // 0x49e3a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x49e3a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_49e3a8:
    // 0x49e3a8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x49e3a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_49e3ac:
    // 0x49e3ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x49e3acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49e3b0:
    // 0x49e3b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x49e3b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49e3b4:
    // 0x49e3b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x49e3b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49e3b8:
    // 0x49e3b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49e3b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49e3bc:
    // 0x49e3bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x49e3bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49e3c0:
    // 0x49e3c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49e3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49e3c4:
    // 0x49e3c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49e3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49e3c8:
    // 0x49e3c8: 0x3e00008  jr          $ra
label_49e3cc:
    if (ctx->pc == 0x49E3CCu) {
        ctx->pc = 0x49E3CCu;
            // 0x49e3cc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x49E3D0u;
        goto label_fallthrough_0x49e3c8;
    }
    ctx->pc = 0x49E3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E3C8u;
            // 0x49e3cc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x49e3c8:
    ctx->pc = 0x49E3D0u;
}
