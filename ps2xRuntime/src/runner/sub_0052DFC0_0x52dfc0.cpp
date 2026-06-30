#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052DFC0
// Address: 0x52dfc0 - 0x52e400
void sub_0052DFC0_0x52dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052DFC0_0x52dfc0");
#endif

    switch (ctx->pc) {
        case 0x52dfc0u: goto label_52dfc0;
        case 0x52dfc4u: goto label_52dfc4;
        case 0x52dfc8u: goto label_52dfc8;
        case 0x52dfccu: goto label_52dfcc;
        case 0x52dfd0u: goto label_52dfd0;
        case 0x52dfd4u: goto label_52dfd4;
        case 0x52dfd8u: goto label_52dfd8;
        case 0x52dfdcu: goto label_52dfdc;
        case 0x52dfe0u: goto label_52dfe0;
        case 0x52dfe4u: goto label_52dfe4;
        case 0x52dfe8u: goto label_52dfe8;
        case 0x52dfecu: goto label_52dfec;
        case 0x52dff0u: goto label_52dff0;
        case 0x52dff4u: goto label_52dff4;
        case 0x52dff8u: goto label_52dff8;
        case 0x52dffcu: goto label_52dffc;
        case 0x52e000u: goto label_52e000;
        case 0x52e004u: goto label_52e004;
        case 0x52e008u: goto label_52e008;
        case 0x52e00cu: goto label_52e00c;
        case 0x52e010u: goto label_52e010;
        case 0x52e014u: goto label_52e014;
        case 0x52e018u: goto label_52e018;
        case 0x52e01cu: goto label_52e01c;
        case 0x52e020u: goto label_52e020;
        case 0x52e024u: goto label_52e024;
        case 0x52e028u: goto label_52e028;
        case 0x52e02cu: goto label_52e02c;
        case 0x52e030u: goto label_52e030;
        case 0x52e034u: goto label_52e034;
        case 0x52e038u: goto label_52e038;
        case 0x52e03cu: goto label_52e03c;
        case 0x52e040u: goto label_52e040;
        case 0x52e044u: goto label_52e044;
        case 0x52e048u: goto label_52e048;
        case 0x52e04cu: goto label_52e04c;
        case 0x52e050u: goto label_52e050;
        case 0x52e054u: goto label_52e054;
        case 0x52e058u: goto label_52e058;
        case 0x52e05cu: goto label_52e05c;
        case 0x52e060u: goto label_52e060;
        case 0x52e064u: goto label_52e064;
        case 0x52e068u: goto label_52e068;
        case 0x52e06cu: goto label_52e06c;
        case 0x52e070u: goto label_52e070;
        case 0x52e074u: goto label_52e074;
        case 0x52e078u: goto label_52e078;
        case 0x52e07cu: goto label_52e07c;
        case 0x52e080u: goto label_52e080;
        case 0x52e084u: goto label_52e084;
        case 0x52e088u: goto label_52e088;
        case 0x52e08cu: goto label_52e08c;
        case 0x52e090u: goto label_52e090;
        case 0x52e094u: goto label_52e094;
        case 0x52e098u: goto label_52e098;
        case 0x52e09cu: goto label_52e09c;
        case 0x52e0a0u: goto label_52e0a0;
        case 0x52e0a4u: goto label_52e0a4;
        case 0x52e0a8u: goto label_52e0a8;
        case 0x52e0acu: goto label_52e0ac;
        case 0x52e0b0u: goto label_52e0b0;
        case 0x52e0b4u: goto label_52e0b4;
        case 0x52e0b8u: goto label_52e0b8;
        case 0x52e0bcu: goto label_52e0bc;
        case 0x52e0c0u: goto label_52e0c0;
        case 0x52e0c4u: goto label_52e0c4;
        case 0x52e0c8u: goto label_52e0c8;
        case 0x52e0ccu: goto label_52e0cc;
        case 0x52e0d0u: goto label_52e0d0;
        case 0x52e0d4u: goto label_52e0d4;
        case 0x52e0d8u: goto label_52e0d8;
        case 0x52e0dcu: goto label_52e0dc;
        case 0x52e0e0u: goto label_52e0e0;
        case 0x52e0e4u: goto label_52e0e4;
        case 0x52e0e8u: goto label_52e0e8;
        case 0x52e0ecu: goto label_52e0ec;
        case 0x52e0f0u: goto label_52e0f0;
        case 0x52e0f4u: goto label_52e0f4;
        case 0x52e0f8u: goto label_52e0f8;
        case 0x52e0fcu: goto label_52e0fc;
        case 0x52e100u: goto label_52e100;
        case 0x52e104u: goto label_52e104;
        case 0x52e108u: goto label_52e108;
        case 0x52e10cu: goto label_52e10c;
        case 0x52e110u: goto label_52e110;
        case 0x52e114u: goto label_52e114;
        case 0x52e118u: goto label_52e118;
        case 0x52e11cu: goto label_52e11c;
        case 0x52e120u: goto label_52e120;
        case 0x52e124u: goto label_52e124;
        case 0x52e128u: goto label_52e128;
        case 0x52e12cu: goto label_52e12c;
        case 0x52e130u: goto label_52e130;
        case 0x52e134u: goto label_52e134;
        case 0x52e138u: goto label_52e138;
        case 0x52e13cu: goto label_52e13c;
        case 0x52e140u: goto label_52e140;
        case 0x52e144u: goto label_52e144;
        case 0x52e148u: goto label_52e148;
        case 0x52e14cu: goto label_52e14c;
        case 0x52e150u: goto label_52e150;
        case 0x52e154u: goto label_52e154;
        case 0x52e158u: goto label_52e158;
        case 0x52e15cu: goto label_52e15c;
        case 0x52e160u: goto label_52e160;
        case 0x52e164u: goto label_52e164;
        case 0x52e168u: goto label_52e168;
        case 0x52e16cu: goto label_52e16c;
        case 0x52e170u: goto label_52e170;
        case 0x52e174u: goto label_52e174;
        case 0x52e178u: goto label_52e178;
        case 0x52e17cu: goto label_52e17c;
        case 0x52e180u: goto label_52e180;
        case 0x52e184u: goto label_52e184;
        case 0x52e188u: goto label_52e188;
        case 0x52e18cu: goto label_52e18c;
        case 0x52e190u: goto label_52e190;
        case 0x52e194u: goto label_52e194;
        case 0x52e198u: goto label_52e198;
        case 0x52e19cu: goto label_52e19c;
        case 0x52e1a0u: goto label_52e1a0;
        case 0x52e1a4u: goto label_52e1a4;
        case 0x52e1a8u: goto label_52e1a8;
        case 0x52e1acu: goto label_52e1ac;
        case 0x52e1b0u: goto label_52e1b0;
        case 0x52e1b4u: goto label_52e1b4;
        case 0x52e1b8u: goto label_52e1b8;
        case 0x52e1bcu: goto label_52e1bc;
        case 0x52e1c0u: goto label_52e1c0;
        case 0x52e1c4u: goto label_52e1c4;
        case 0x52e1c8u: goto label_52e1c8;
        case 0x52e1ccu: goto label_52e1cc;
        case 0x52e1d0u: goto label_52e1d0;
        case 0x52e1d4u: goto label_52e1d4;
        case 0x52e1d8u: goto label_52e1d8;
        case 0x52e1dcu: goto label_52e1dc;
        case 0x52e1e0u: goto label_52e1e0;
        case 0x52e1e4u: goto label_52e1e4;
        case 0x52e1e8u: goto label_52e1e8;
        case 0x52e1ecu: goto label_52e1ec;
        case 0x52e1f0u: goto label_52e1f0;
        case 0x52e1f4u: goto label_52e1f4;
        case 0x52e1f8u: goto label_52e1f8;
        case 0x52e1fcu: goto label_52e1fc;
        case 0x52e200u: goto label_52e200;
        case 0x52e204u: goto label_52e204;
        case 0x52e208u: goto label_52e208;
        case 0x52e20cu: goto label_52e20c;
        case 0x52e210u: goto label_52e210;
        case 0x52e214u: goto label_52e214;
        case 0x52e218u: goto label_52e218;
        case 0x52e21cu: goto label_52e21c;
        case 0x52e220u: goto label_52e220;
        case 0x52e224u: goto label_52e224;
        case 0x52e228u: goto label_52e228;
        case 0x52e22cu: goto label_52e22c;
        case 0x52e230u: goto label_52e230;
        case 0x52e234u: goto label_52e234;
        case 0x52e238u: goto label_52e238;
        case 0x52e23cu: goto label_52e23c;
        case 0x52e240u: goto label_52e240;
        case 0x52e244u: goto label_52e244;
        case 0x52e248u: goto label_52e248;
        case 0x52e24cu: goto label_52e24c;
        case 0x52e250u: goto label_52e250;
        case 0x52e254u: goto label_52e254;
        case 0x52e258u: goto label_52e258;
        case 0x52e25cu: goto label_52e25c;
        case 0x52e260u: goto label_52e260;
        case 0x52e264u: goto label_52e264;
        case 0x52e268u: goto label_52e268;
        case 0x52e26cu: goto label_52e26c;
        case 0x52e270u: goto label_52e270;
        case 0x52e274u: goto label_52e274;
        case 0x52e278u: goto label_52e278;
        case 0x52e27cu: goto label_52e27c;
        case 0x52e280u: goto label_52e280;
        case 0x52e284u: goto label_52e284;
        case 0x52e288u: goto label_52e288;
        case 0x52e28cu: goto label_52e28c;
        case 0x52e290u: goto label_52e290;
        case 0x52e294u: goto label_52e294;
        case 0x52e298u: goto label_52e298;
        case 0x52e29cu: goto label_52e29c;
        case 0x52e2a0u: goto label_52e2a0;
        case 0x52e2a4u: goto label_52e2a4;
        case 0x52e2a8u: goto label_52e2a8;
        case 0x52e2acu: goto label_52e2ac;
        case 0x52e2b0u: goto label_52e2b0;
        case 0x52e2b4u: goto label_52e2b4;
        case 0x52e2b8u: goto label_52e2b8;
        case 0x52e2bcu: goto label_52e2bc;
        case 0x52e2c0u: goto label_52e2c0;
        case 0x52e2c4u: goto label_52e2c4;
        case 0x52e2c8u: goto label_52e2c8;
        case 0x52e2ccu: goto label_52e2cc;
        case 0x52e2d0u: goto label_52e2d0;
        case 0x52e2d4u: goto label_52e2d4;
        case 0x52e2d8u: goto label_52e2d8;
        case 0x52e2dcu: goto label_52e2dc;
        case 0x52e2e0u: goto label_52e2e0;
        case 0x52e2e4u: goto label_52e2e4;
        case 0x52e2e8u: goto label_52e2e8;
        case 0x52e2ecu: goto label_52e2ec;
        case 0x52e2f0u: goto label_52e2f0;
        case 0x52e2f4u: goto label_52e2f4;
        case 0x52e2f8u: goto label_52e2f8;
        case 0x52e2fcu: goto label_52e2fc;
        case 0x52e300u: goto label_52e300;
        case 0x52e304u: goto label_52e304;
        case 0x52e308u: goto label_52e308;
        case 0x52e30cu: goto label_52e30c;
        case 0x52e310u: goto label_52e310;
        case 0x52e314u: goto label_52e314;
        case 0x52e318u: goto label_52e318;
        case 0x52e31cu: goto label_52e31c;
        case 0x52e320u: goto label_52e320;
        case 0x52e324u: goto label_52e324;
        case 0x52e328u: goto label_52e328;
        case 0x52e32cu: goto label_52e32c;
        case 0x52e330u: goto label_52e330;
        case 0x52e334u: goto label_52e334;
        case 0x52e338u: goto label_52e338;
        case 0x52e33cu: goto label_52e33c;
        case 0x52e340u: goto label_52e340;
        case 0x52e344u: goto label_52e344;
        case 0x52e348u: goto label_52e348;
        case 0x52e34cu: goto label_52e34c;
        case 0x52e350u: goto label_52e350;
        case 0x52e354u: goto label_52e354;
        case 0x52e358u: goto label_52e358;
        case 0x52e35cu: goto label_52e35c;
        case 0x52e360u: goto label_52e360;
        case 0x52e364u: goto label_52e364;
        case 0x52e368u: goto label_52e368;
        case 0x52e36cu: goto label_52e36c;
        case 0x52e370u: goto label_52e370;
        case 0x52e374u: goto label_52e374;
        case 0x52e378u: goto label_52e378;
        case 0x52e37cu: goto label_52e37c;
        case 0x52e380u: goto label_52e380;
        case 0x52e384u: goto label_52e384;
        case 0x52e388u: goto label_52e388;
        case 0x52e38cu: goto label_52e38c;
        case 0x52e390u: goto label_52e390;
        case 0x52e394u: goto label_52e394;
        case 0x52e398u: goto label_52e398;
        case 0x52e39cu: goto label_52e39c;
        case 0x52e3a0u: goto label_52e3a0;
        case 0x52e3a4u: goto label_52e3a4;
        case 0x52e3a8u: goto label_52e3a8;
        case 0x52e3acu: goto label_52e3ac;
        case 0x52e3b0u: goto label_52e3b0;
        case 0x52e3b4u: goto label_52e3b4;
        case 0x52e3b8u: goto label_52e3b8;
        case 0x52e3bcu: goto label_52e3bc;
        case 0x52e3c0u: goto label_52e3c0;
        case 0x52e3c4u: goto label_52e3c4;
        case 0x52e3c8u: goto label_52e3c8;
        case 0x52e3ccu: goto label_52e3cc;
        case 0x52e3d0u: goto label_52e3d0;
        case 0x52e3d4u: goto label_52e3d4;
        case 0x52e3d8u: goto label_52e3d8;
        case 0x52e3dcu: goto label_52e3dc;
        case 0x52e3e0u: goto label_52e3e0;
        case 0x52e3e4u: goto label_52e3e4;
        case 0x52e3e8u: goto label_52e3e8;
        case 0x52e3ecu: goto label_52e3ec;
        case 0x52e3f0u: goto label_52e3f0;
        case 0x52e3f4u: goto label_52e3f4;
        case 0x52e3f8u: goto label_52e3f8;
        case 0x52e3fcu: goto label_52e3fc;
        default: break;
    }

    ctx->pc = 0x52dfc0u;

label_52dfc0:
    // 0x52dfc0: 0x8ca60d98  lw          $a2, 0xD98($a1)
    ctx->pc = 0x52dfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_52dfc4:
    // 0x52dfc4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x52dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_52dfc8:
    // 0x52dfc8: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x52dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_52dfcc:
    // 0x52dfcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52dfd0:
    // 0x52dfd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52dfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52dfd4:
    // 0x52dfd4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x52dfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_52dfd8:
    // 0x52dfd8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x52dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_52dfdc:
    // 0x52dfdc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x52dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_52dfe0:
    // 0x52dfe0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x52dfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52dfe4:
    // 0x52dfe4: 0xacc50050  sw          $a1, 0x50($a2)
    ctx->pc = 0x52dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 5));
label_52dfe8:
    // 0x52dfe8: 0xacc30054  sw          $v1, 0x54($a2)
    ctx->pc = 0x52dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 3));
label_52dfec:
    // 0x52dfec: 0x80781c4  j           func_1E0710
label_52dff0:
    if (ctx->pc == 0x52DFF0u) {
        ctx->pc = 0x52DFF0u;
            // 0x52dff0: 0xacc20058  sw          $v0, 0x58($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x52DFF4u;
        goto label_52dff4;
    }
    ctx->pc = 0x52DFECu;
    ctx->pc = 0x52DFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DFECu;
            // 0x52dff0: 0xacc20058  sw          $v0, 0x58($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52DFF4u;
label_52dff4:
    // 0x52dff4: 0x0  nop
    ctx->pc = 0x52dff4u;
    // NOP
label_52dff8:
    // 0x52dff8: 0x0  nop
    ctx->pc = 0x52dff8u;
    // NOP
label_52dffc:
    // 0x52dffc: 0x0  nop
    ctx->pc = 0x52dffcu;
    // NOP
label_52e000:
    // 0x52e000: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x52e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_52e004:
    // 0x52e004: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x52e004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52e008:
    // 0x52e008: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x52e008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_52e00c:
    // 0x52e00c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x52e00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_52e010:
    // 0x52e010: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x52e010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_52e014:
    // 0x52e014: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x52e014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_52e018:
    // 0x52e018: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x52e018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_52e01c:
    // 0x52e01c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x52e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_52e020:
    // 0x52e020: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x52e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_52e024:
    // 0x52e024: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x52e024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_52e028:
    // 0x52e028: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x52e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_52e02c:
    // 0x52e02c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x52e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_52e030:
    // 0x52e030: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x52e030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_52e034:
    // 0x52e034: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x52e034u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_52e038:
    // 0x52e038: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_52e03c:
    if (ctx->pc == 0x52E03Cu) {
        ctx->pc = 0x52E03Cu;
            // 0x52e03c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E040u;
        goto label_52e040;
    }
    ctx->pc = 0x52E038u;
    {
        const bool branch_taken_0x52e038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52E03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E038u;
            // 0x52e03c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e038) {
            ctx->pc = 0x52E088u;
            goto label_52e088;
        }
    }
    ctx->pc = 0x52E040u;
label_52e040:
    // 0x52e040: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52e044:
    // 0x52e044: 0x10a30080  beq         $a1, $v1, . + 4 + (0x80 << 2)
label_52e048:
    if (ctx->pc == 0x52E048u) {
        ctx->pc = 0x52E04Cu;
        goto label_52e04c;
    }
    ctx->pc = 0x52E044u;
    {
        const bool branch_taken_0x52e044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52e044) {
            ctx->pc = 0x52E248u;
            goto label_52e248;
        }
    }
    ctx->pc = 0x52E04Cu;
label_52e04c:
    // 0x52e04c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52e050:
    // 0x52e050: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_52e054:
    if (ctx->pc == 0x52E054u) {
        ctx->pc = 0x52E058u;
        goto label_52e058;
    }
    ctx->pc = 0x52E050u;
    {
        const bool branch_taken_0x52e050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52e050) {
            ctx->pc = 0x52E060u;
            goto label_52e060;
        }
    }
    ctx->pc = 0x52E058u;
label_52e058:
    // 0x52e058: 0x1000007b  b           . + 4 + (0x7B << 2)
label_52e05c:
    if (ctx->pc == 0x52E05Cu) {
        ctx->pc = 0x52E060u;
        goto label_52e060;
    }
    ctx->pc = 0x52E058u;
    {
        const bool branch_taken_0x52e058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e058) {
            ctx->pc = 0x52E248u;
            goto label_52e248;
        }
    }
    ctx->pc = 0x52E060u;
label_52e060:
    // 0x52e060: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52e060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52e064:
    // 0x52e064: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52e064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52e068:
    // 0x52e068: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x52e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52e06c:
    // 0x52e06c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x52e06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_52e070:
    // 0x52e070: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x52e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_52e074:
    // 0x52e074: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x52e074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_52e078:
    // 0x52e078: 0x320f809  jalr        $t9
label_52e07c:
    if (ctx->pc == 0x52E07Cu) {
        ctx->pc = 0x52E07Cu;
            // 0x52e07c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x52E080u;
        goto label_52e080;
    }
    ctx->pc = 0x52E078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52E080u);
        ctx->pc = 0x52E07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E078u;
            // 0x52e07c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52E080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52E080u; }
            if (ctx->pc != 0x52E080u) { return; }
        }
        }
    }
    ctx->pc = 0x52E080u;
label_52e080:
    // 0x52e080: 0x10000071  b           . + 4 + (0x71 << 2)
label_52e084:
    if (ctx->pc == 0x52E084u) {
        ctx->pc = 0x52E088u;
        goto label_52e088;
    }
    ctx->pc = 0x52E080u;
    {
        const bool branch_taken_0x52e080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e080) {
            ctx->pc = 0x52E248u;
            goto label_52e248;
        }
    }
    ctx->pc = 0x52E088u;
label_52e088:
    // 0x52e088: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x52e088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_52e08c:
    // 0x52e08c: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
label_52e090:
    if (ctx->pc == 0x52E090u) {
        ctx->pc = 0x52E090u;
            // 0x52e090: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x52E094u;
        goto label_52e094;
    }
    ctx->pc = 0x52E08Cu;
    {
        const bool branch_taken_0x52e08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x52E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E08Cu;
            // 0x52e090: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e08c) {
            ctx->pc = 0x52E248u;
            goto label_52e248;
        }
    }
    ctx->pc = 0x52E094u;
label_52e094:
    // 0x52e094: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52e094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52e098:
    // 0x52e098: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x52e098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_52e09c:
    // 0x52e09c: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x52e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_52e0a0:
    // 0x52e0a0: 0x27d30084  addiu       $s3, $fp, 0x84
    ctx->pc = 0x52e0a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_52e0a4:
    // 0x52e0a4: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x52e0a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_52e0a8:
    // 0x52e0a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52e0ac:
    // 0x52e0ac: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x52e0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_52e0b0:
    // 0x52e0b0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x52e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_52e0b4:
    // 0x52e0b4: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x52e0b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_52e0b8:
    // 0x52e0b8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x52e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_52e0bc:
    // 0x52e0bc: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x52e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_52e0c0:
    // 0x52e0c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x52e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_52e0c4:
    // 0x52e0c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x52e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_52e0c8:
    // 0x52e0c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52e0cc:
    // 0x52e0cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x52e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52e0d0:
    // 0x52e0d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x52e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_52e0d4:
    // 0x52e0d4: 0xc04e738  jal         func_139CE0
label_52e0d8:
    if (ctx->pc == 0x52E0D8u) {
        ctx->pc = 0x52E0D8u;
            // 0x52e0d8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x52E0DCu;
        goto label_52e0dc;
    }
    ctx->pc = 0x52E0D4u;
    SET_GPR_U32(ctx, 31, 0x52E0DCu);
    ctx->pc = 0x52E0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E0D4u;
            // 0x52e0d8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E0DCu; }
        if (ctx->pc != 0x52E0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E0DCu; }
        if (ctx->pc != 0x52E0DCu) { return; }
    }
    ctx->pc = 0x52E0DCu;
label_52e0dc:
    // 0x52e0dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x52e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52e0e0:
    // 0x52e0e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x52e0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52e0e4:
    // 0x52e0e4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x52e0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_52e0e8:
    // 0x52e0e8: 0xc04e4a4  jal         func_139290
label_52e0ec:
    if (ctx->pc == 0x52E0ECu) {
        ctx->pc = 0x52E0ECu;
            // 0x52e0ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E0F0u;
        goto label_52e0f0;
    }
    ctx->pc = 0x52E0E8u;
    SET_GPR_U32(ctx, 31, 0x52E0F0u);
    ctx->pc = 0x52E0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E0E8u;
            // 0x52e0ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E0F0u; }
        if (ctx->pc != 0x52E0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E0F0u; }
        if (ctx->pc != 0x52E0F0u) { return; }
    }
    ctx->pc = 0x52E0F0u;
label_52e0f0:
    // 0x52e0f0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x52e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52e0f4:
    // 0x52e0f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52e0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e0f8:
    // 0x52e0f8: 0xc474cd48  lwc1        $f20, -0x32B8($v1)
    ctx->pc = 0x52e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52e0fc:
    // 0x52e0fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x52e0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e100:
    // 0x52e100: 0x8fc50074  lw          $a1, 0x74($fp)
    ctx->pc = 0x52e100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_52e104:
    // 0x52e104: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x52e104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_52e108:
    // 0x52e108: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x52e108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_52e10c:
    // 0x52e10c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x52e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_52e110:
    // 0x52e110: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x52e110u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_52e114:
    // 0x52e114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52e118:
    // 0x52e118: 0x8c960130  lw          $s6, 0x130($a0)
    ctx->pc = 0x52e118u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_52e11c:
    // 0x52e11c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x52e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_52e120:
    // 0x52e120: 0x14830043  bne         $a0, $v1, . + 4 + (0x43 << 2)
label_52e124:
    if (ctx->pc == 0x52E124u) {
        ctx->pc = 0x52E128u;
        goto label_52e128;
    }
    ctx->pc = 0x52E120u;
    {
        const bool branch_taken_0x52e120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x52e120) {
            ctx->pc = 0x52E230u;
            goto label_52e230;
        }
    }
    ctx->pc = 0x52E128u;
label_52e128:
    // 0x52e128: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x52e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
label_52e12c:
    // 0x52e12c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x52e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52e130:
    // 0x52e130: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52e130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52e134:
    // 0x52e134: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x52e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_52e138:
    // 0x52e138: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x52e138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_52e13c:
    // 0x52e13c: 0xc04f3fc  jal         func_13CFF0
label_52e140:
    if (ctx->pc == 0x52E140u) {
        ctx->pc = 0x52E140u;
            // 0x52e140: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52E144u;
        goto label_52e144;
    }
    ctx->pc = 0x52E13Cu;
    SET_GPR_U32(ctx, 31, 0x52E144u);
    ctx->pc = 0x52E140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E13Cu;
            // 0x52e140: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E144u; }
        if (ctx->pc != 0x52E144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E144u; }
        if (ctx->pc != 0x52E144u) { return; }
    }
    ctx->pc = 0x52E144u;
label_52e144:
    // 0x52e144: 0xc07725c  jal         func_1DC970
label_52e148:
    if (ctx->pc == 0x52E148u) {
        ctx->pc = 0x52E148u;
            // 0x52e148: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x52E14Cu;
        goto label_52e14c;
    }
    ctx->pc = 0x52E144u;
    SET_GPR_U32(ctx, 31, 0x52E14Cu);
    ctx->pc = 0x52E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E144u;
            // 0x52e148: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E14Cu; }
        if (ctx->pc != 0x52E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E14Cu; }
        if (ctx->pc != 0x52E14Cu) { return; }
    }
    ctx->pc = 0x52E14Cu;
label_52e14c:
    // 0x52e14c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52e14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52e150:
    // 0x52e150: 0xc04cce8  jal         func_1333A0
label_52e154:
    if (ctx->pc == 0x52E154u) {
        ctx->pc = 0x52E154u;
            // 0x52e154: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x52E158u;
        goto label_52e158;
    }
    ctx->pc = 0x52E150u;
    SET_GPR_U32(ctx, 31, 0x52E158u);
    ctx->pc = 0x52E154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E150u;
            // 0x52e154: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E158u; }
        if (ctx->pc != 0x52E158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E158u; }
        if (ctx->pc != 0x52E158u) { return; }
    }
    ctx->pc = 0x52E158u;
label_52e158:
    // 0x52e158: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52e158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52e15c:
    // 0x52e15c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x52e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52e160:
    // 0x52e160: 0xc04cd60  jal         func_133580
label_52e164:
    if (ctx->pc == 0x52E164u) {
        ctx->pc = 0x52E164u;
            // 0x52e164: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E168u;
        goto label_52e168;
    }
    ctx->pc = 0x52E160u;
    SET_GPR_U32(ctx, 31, 0x52E168u);
    ctx->pc = 0x52E164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E160u;
            // 0x52e164: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E168u; }
        if (ctx->pc != 0x52E168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E168u; }
        if (ctx->pc != 0x52E168u) { return; }
    }
    ctx->pc = 0x52E168u;
label_52e168:
    // 0x52e168: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x52e168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_52e16c:
    // 0x52e16c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52e170:
    // 0x52e170: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x52e170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_52e174:
    // 0x52e174: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x52e174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52e178:
    // 0x52e178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52e178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52e17c:
    // 0x52e17c: 0x0  nop
    ctx->pc = 0x52e17cu;
    // NOP
label_52e180:
    // 0x52e180: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52e180u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52e184:
    // 0x52e184: 0xc04ce50  jal         func_133940
label_52e188:
    if (ctx->pc == 0x52E188u) {
        ctx->pc = 0x52E188u;
            // 0x52e188: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52E18Cu;
        goto label_52e18c;
    }
    ctx->pc = 0x52E184u;
    SET_GPR_U32(ctx, 31, 0x52E18Cu);
    ctx->pc = 0x52E188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E184u;
            // 0x52e188: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E18Cu; }
        if (ctx->pc != 0x52E18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E18Cu; }
        if (ctx->pc != 0x52E18Cu) { return; }
    }
    ctx->pc = 0x52E18Cu;
label_52e18c:
    // 0x52e18c: 0xc0d4108  jal         func_350420
label_52e190:
    if (ctx->pc == 0x52E190u) {
        ctx->pc = 0x52E194u;
        goto label_52e194;
    }
    ctx->pc = 0x52E18Cu;
    SET_GPR_U32(ctx, 31, 0x52E194u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E194u; }
        if (ctx->pc != 0x52E194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E194u; }
        if (ctx->pc != 0x52E194u) { return; }
    }
    ctx->pc = 0x52E194u;
label_52e194:
    // 0x52e194: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x52e194u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52e198:
    // 0x52e198: 0xc0d4104  jal         func_350410
label_52e19c:
    if (ctx->pc == 0x52E19Cu) {
        ctx->pc = 0x52E19Cu;
            // 0x52e19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E1A0u;
        goto label_52e1a0;
    }
    ctx->pc = 0x52E198u;
    SET_GPR_U32(ctx, 31, 0x52E1A0u);
    ctx->pc = 0x52E19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E198u;
            // 0x52e19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E1A0u; }
        if (ctx->pc != 0x52E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E1A0u; }
        if (ctx->pc != 0x52E1A0u) { return; }
    }
    ctx->pc = 0x52E1A0u;
label_52e1a0:
    // 0x52e1a0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x52e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52e1a4:
    // 0x52e1a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x52e1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_52e1a8:
    // 0x52e1a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x52e1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_52e1ac:
    // 0x52e1ac: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x52e1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52e1b0:
    // 0x52e1b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x52e1b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52e1b4:
    // 0x52e1b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x52e1b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e1b8:
    // 0x52e1b8: 0xc0d40ac  jal         func_3502B0
label_52e1bc:
    if (ctx->pc == 0x52E1BCu) {
        ctx->pc = 0x52E1BCu;
            // 0x52e1bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x52E1C0u;
        goto label_52e1c0;
    }
    ctx->pc = 0x52E1B8u;
    SET_GPR_U32(ctx, 31, 0x52E1C0u);
    ctx->pc = 0x52E1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E1B8u;
            // 0x52e1bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E1C0u; }
        if (ctx->pc != 0x52E1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E1C0u; }
        if (ctx->pc != 0x52E1C0u) { return; }
    }
    ctx->pc = 0x52E1C0u;
label_52e1c0:
    // 0x52e1c0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x52e1c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_52e1c4:
    // 0x52e1c4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_52e1c8:
    if (ctx->pc == 0x52E1C8u) {
        ctx->pc = 0x52E1C8u;
            // 0x52e1c8: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x52E1CCu;
        goto label_52e1cc;
    }
    ctx->pc = 0x52E1C4u;
    {
        const bool branch_taken_0x52e1c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52E1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E1C4u;
            // 0x52e1c8: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e1c4) {
            ctx->pc = 0x52E230u;
            goto label_52e230;
        }
    }
    ctx->pc = 0x52E1CCu;
label_52e1cc:
    // 0x52e1cc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x52e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_52e1d0:
    // 0x52e1d0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52e1d4:
    // 0x52e1d4: 0xc04cd60  jal         func_133580
label_52e1d8:
    if (ctx->pc == 0x52E1D8u) {
        ctx->pc = 0x52E1D8u;
            // 0x52e1d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E1DCu;
        goto label_52e1dc;
    }
    ctx->pc = 0x52E1D4u;
    SET_GPR_U32(ctx, 31, 0x52E1DCu);
    ctx->pc = 0x52E1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E1D4u;
            // 0x52e1d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E1DCu; }
        if (ctx->pc != 0x52E1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E1DCu; }
        if (ctx->pc != 0x52E1DCu) { return; }
    }
    ctx->pc = 0x52E1DCu;
label_52e1dc:
    // 0x52e1dc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x52e1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52e1e0:
    // 0x52e1e0: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x52e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52e1e4:
    // 0x52e1e4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x52e1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_52e1e8:
    // 0x52e1e8: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x52e1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_52e1ec:
    // 0x52e1ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x52e1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52e1f0:
    // 0x52e1f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x52e1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52e1f4:
    // 0x52e1f4: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x52e1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52e1f8:
    // 0x52e1f8: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x52e1f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_52e1fc:
    // 0x52e1fc: 0xc04cff4  jal         func_133FD0
label_52e200:
    if (ctx->pc == 0x52E200u) {
        ctx->pc = 0x52E200u;
            // 0x52e200: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E204u;
        goto label_52e204;
    }
    ctx->pc = 0x52E1FCu;
    SET_GPR_U32(ctx, 31, 0x52E204u);
    ctx->pc = 0x52E200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E1FCu;
            // 0x52e200: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E204u; }
        if (ctx->pc != 0x52E204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E204u; }
        if (ctx->pc != 0x52E204u) { return; }
    }
    ctx->pc = 0x52E204u;
label_52e204:
    // 0x52e204: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x52e204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_52e208:
    // 0x52e208: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x52e208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52e20c:
    // 0x52e20c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x52e20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_52e210:
    // 0x52e210: 0xc054bbc  jal         func_152EF0
label_52e214:
    if (ctx->pc == 0x52E214u) {
        ctx->pc = 0x52E214u;
            // 0x52e214: 0xc62c005c  lwc1        $f12, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x52E218u;
        goto label_52e218;
    }
    ctx->pc = 0x52E210u;
    SET_GPR_U32(ctx, 31, 0x52E218u);
    ctx->pc = 0x52E214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E210u;
            // 0x52e214: 0xc62c005c  lwc1        $f12, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E218u; }
        if (ctx->pc != 0x52E218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E218u; }
        if (ctx->pc != 0x52E218u) { return; }
    }
    ctx->pc = 0x52E218u;
label_52e218:
    // 0x52e218: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x52e218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_52e21c:
    // 0x52e21c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x52e21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52e220:
    // 0x52e220: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x52e220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52e224:
    // 0x52e224: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x52e224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_52e228:
    // 0x52e228: 0xc054c2c  jal         func_1530B0
label_52e22c:
    if (ctx->pc == 0x52E22Cu) {
        ctx->pc = 0x52E22Cu;
            // 0x52e22c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E230u;
        goto label_52e230;
    }
    ctx->pc = 0x52E228u;
    SET_GPR_U32(ctx, 31, 0x52E230u);
    ctx->pc = 0x52E22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E228u;
            // 0x52e22c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E230u; }
        if (ctx->pc != 0x52E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E230u; }
        if (ctx->pc != 0x52E230u) { return; }
    }
    ctx->pc = 0x52E230u;
label_52e230:
    // 0x52e230: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x52e230u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_52e234:
    // 0x52e234: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52e234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52e238:
    // 0x52e238: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x52e238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52e23c:
    // 0x52e23c: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
label_52e240:
    if (ctx->pc == 0x52E240u) {
        ctx->pc = 0x52E240u;
            // 0x52e240: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x52E244u;
        goto label_52e244;
    }
    ctx->pc = 0x52E23Cu;
    {
        const bool branch_taken_0x52e23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52E240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E23Cu;
            // 0x52e240: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e23c) {
            ctx->pc = 0x52E100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52e100;
        }
    }
    ctx->pc = 0x52E244u;
label_52e244:
    // 0x52e244: 0x0  nop
    ctx->pc = 0x52e244u;
    // NOP
label_52e248:
    // 0x52e248: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x52e248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_52e24c:
    // 0x52e24c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x52e24cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_52e250:
    // 0x52e250: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x52e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52e254:
    // 0x52e254: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x52e254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_52e258:
    // 0x52e258: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x52e258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_52e25c:
    // 0x52e25c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x52e25cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_52e260:
    // 0x52e260: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x52e260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52e264:
    // 0x52e264: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x52e264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52e268:
    // 0x52e268: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x52e268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52e26c:
    // 0x52e26c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x52e26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52e270:
    // 0x52e270: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x52e270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52e274:
    // 0x52e274: 0x3e00008  jr          $ra
label_52e278:
    if (ctx->pc == 0x52E278u) {
        ctx->pc = 0x52E278u;
            // 0x52e278: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x52E27Cu;
        goto label_52e27c;
    }
    ctx->pc = 0x52E274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E274u;
            // 0x52e278: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E27Cu;
label_52e27c:
    // 0x52e27c: 0x0  nop
    ctx->pc = 0x52e27cu;
    // NOP
label_52e280:
    // 0x52e280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52e284:
    // 0x52e284: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x52e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52e288:
    // 0x52e288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52e28c:
    // 0x52e28c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52e290:
    // 0x52e290: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x52e290u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_52e294:
    // 0x52e294: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_52e298:
    if (ctx->pc == 0x52E298u) {
        ctx->pc = 0x52E298u;
            // 0x52e298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E29Cu;
        goto label_52e29c;
    }
    ctx->pc = 0x52E294u;
    {
        const bool branch_taken_0x52e294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52E298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E294u;
            // 0x52e298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e294) {
            ctx->pc = 0x52E2C8u;
            goto label_52e2c8;
        }
    }
    ctx->pc = 0x52E29Cu;
label_52e29c:
    // 0x52e29c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52e2a0:
    // 0x52e2a0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_52e2a4:
    if (ctx->pc == 0x52E2A4u) {
        ctx->pc = 0x52E2A4u;
            // 0x52e2a4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52E2A8u;
        goto label_52e2a8;
    }
    ctx->pc = 0x52E2A0u;
    {
        const bool branch_taken_0x52e2a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52e2a0) {
            ctx->pc = 0x52E2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52E2A0u;
            // 0x52e2a4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52E2BCu;
            goto label_52e2bc;
        }
    }
    ctx->pc = 0x52E2A8u;
label_52e2a8:
    // 0x52e2a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52e2ac:
    // 0x52e2ac: 0x10a30038  beq         $a1, $v1, . + 4 + (0x38 << 2)
label_52e2b0:
    if (ctx->pc == 0x52E2B0u) {
        ctx->pc = 0x52E2B4u;
        goto label_52e2b4;
    }
    ctx->pc = 0x52E2ACu;
    {
        const bool branch_taken_0x52e2ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52e2ac) {
            ctx->pc = 0x52E390u;
            goto label_52e390;
        }
    }
    ctx->pc = 0x52E2B4u;
label_52e2b4:
    // 0x52e2b4: 0x10000036  b           . + 4 + (0x36 << 2)
label_52e2b8:
    if (ctx->pc == 0x52E2B8u) {
        ctx->pc = 0x52E2BCu;
        goto label_52e2bc;
    }
    ctx->pc = 0x52E2B4u;
    {
        const bool branch_taken_0x52e2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e2b4) {
            ctx->pc = 0x52E390u;
            goto label_52e390;
        }
    }
    ctx->pc = 0x52E2BCu;
label_52e2bc:
    // 0x52e2bc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x52e2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_52e2c0:
    // 0x52e2c0: 0x320f809  jalr        $t9
label_52e2c4:
    if (ctx->pc == 0x52E2C4u) {
        ctx->pc = 0x52E2C8u;
        goto label_52e2c8;
    }
    ctx->pc = 0x52E2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52E2C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52E2C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52E2C8u; }
            if (ctx->pc != 0x52E2C8u) { return; }
        }
        }
    }
    ctx->pc = 0x52E2C8u;
label_52e2c8:
    // 0x52e2c8: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x52e2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_52e2cc:
    // 0x52e2cc: 0x11200030  beqz        $t1, . + 4 + (0x30 << 2)
label_52e2d0:
    if (ctx->pc == 0x52E2D0u) {
        ctx->pc = 0x52E2D4u;
        goto label_52e2d4;
    }
    ctx->pc = 0x52E2CCu;
    {
        const bool branch_taken_0x52e2cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e2cc) {
            ctx->pc = 0x52E390u;
            goto label_52e390;
        }
    }
    ctx->pc = 0x52E2D4u;
label_52e2d4:
    // 0x52e2d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x52e2d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e2d8:
    // 0x52e2d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x52e2d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e2dc:
    // 0x52e2dc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x52e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_52e2e0:
    // 0x52e2e0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x52e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_52e2e4:
    // 0x52e2e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x52e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_52e2e8:
    // 0x52e2e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x52e2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52e2ec:
    // 0x52e2ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x52e2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52e2f0:
    // 0x52e2f0: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x52e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_52e2f4:
    // 0x52e2f4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x52e2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_52e2f8:
    // 0x52e2f8: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x52e2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_52e2fc:
    // 0x52e2fc: 0x8d060054  lw          $a2, 0x54($t0)
    ctx->pc = 0x52e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_52e300:
    // 0x52e300: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
label_52e304:
    if (ctx->pc == 0x52E304u) {
        ctx->pc = 0x52E308u;
        goto label_52e308;
    }
    ctx->pc = 0x52E300u;
    {
        const bool branch_taken_0x52e300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x52e300) {
            ctx->pc = 0x52E318u;
            goto label_52e318;
        }
    }
    ctx->pc = 0x52E308u;
label_52e308:
    // 0x52e308: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_52e30c:
    if (ctx->pc == 0x52E30Cu) {
        ctx->pc = 0x52E310u;
        goto label_52e310;
    }
    ctx->pc = 0x52E308u;
    {
        const bool branch_taken_0x52e308 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e308) {
            ctx->pc = 0x52E380u;
            goto label_52e380;
        }
    }
    ctx->pc = 0x52E310u;
label_52e310:
    // 0x52e310: 0x1000001b  b           . + 4 + (0x1B << 2)
label_52e314:
    if (ctx->pc == 0x52E314u) {
        ctx->pc = 0x52E318u;
        goto label_52e318;
    }
    ctx->pc = 0x52E310u;
    {
        const bool branch_taken_0x52e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e310) {
            ctx->pc = 0x52E380u;
            goto label_52e380;
        }
    }
    ctx->pc = 0x52E318u;
label_52e318:
    // 0x52e318: 0x8ca68a08  lw          $a2, -0x75F8($a1)
    ctx->pc = 0x52e318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_52e31c:
    // 0x52e31c: 0xc501005c  lwc1        $f1, 0x5C($t0)
    ctx->pc = 0x52e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52e320:
    // 0x52e320: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x52e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52e324:
    // 0x52e324: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x52e324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_52e328:
    // 0x52e328: 0xe501005c  swc1        $f1, 0x5C($t0)
    ctx->pc = 0x52e328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 92), bits); }
label_52e32c:
    // 0x52e32c: 0x8c868a08  lw          $a2, -0x75F8($a0)
    ctx->pc = 0x52e32cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_52e330:
    // 0x52e330: 0xc5010060  lwc1        $f1, 0x60($t0)
    ctx->pc = 0x52e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52e334:
    // 0x52e334: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x52e334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52e338:
    // 0x52e338: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x52e338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_52e33c:
    // 0x52e33c: 0xe5010060  swc1        $f1, 0x60($t0)
    ctx->pc = 0x52e33cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 96), bits); }
label_52e340:
    // 0x52e340: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x52e340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_52e344:
    // 0x52e344: 0xc5010058  lwc1        $f1, 0x58($t0)
    ctx->pc = 0x52e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52e348:
    // 0x52e348: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x52e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52e34c:
    // 0x52e34c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x52e34cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_52e350:
    // 0x52e350: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x52e350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52e354:
    // 0x52e354: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_52e358:
    if (ctx->pc == 0x52E358u) {
        ctx->pc = 0x52E358u;
            // 0x52e358: 0xe5010058  swc1        $f1, 0x58($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 88), bits); }
        ctx->pc = 0x52E35Cu;
        goto label_52e35c;
    }
    ctx->pc = 0x52E354u;
    {
        const bool branch_taken_0x52e354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x52E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E354u;
            // 0x52e358: 0xe5010058  swc1        $f1, 0x58($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e354) {
            ctx->pc = 0x52E380u;
            goto label_52e380;
        }
    }
    ctx->pc = 0x52E35Cu;
label_52e35c:
    // 0x52e35c: 0x8d060050  lw          $a2, 0x50($t0)
    ctx->pc = 0x52e35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
label_52e360:
    // 0x52e360: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_52e364:
    if (ctx->pc == 0x52E364u) {
        ctx->pc = 0x52E368u;
        goto label_52e368;
    }
    ctx->pc = 0x52E360u;
    {
        const bool branch_taken_0x52e360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e360) {
            ctx->pc = 0x52E370u;
            goto label_52e370;
        }
    }
    ctx->pc = 0x52E368u;
label_52e368:
    // 0x52e368: 0xad000050  sw          $zero, 0x50($t0)
    ctx->pc = 0x52e368u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 0));
label_52e36c:
    // 0x52e36c: 0x0  nop
    ctx->pc = 0x52e36cu;
    // NOP
label_52e370:
    // 0x52e370: 0xad000054  sw          $zero, 0x54($t0)
    ctx->pc = 0x52e370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 0));
label_52e374:
    // 0x52e374: 0xad000058  sw          $zero, 0x58($t0)
    ctx->pc = 0x52e374u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 0));
label_52e378:
    // 0x52e378: 0xad00005c  sw          $zero, 0x5C($t0)
    ctx->pc = 0x52e378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 0));
label_52e37c:
    // 0x52e37c: 0xad000060  sw          $zero, 0x60($t0)
    ctx->pc = 0x52e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 0));
label_52e380:
    // 0x52e380: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x52e380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_52e384:
    // 0x52e384: 0x169302b  sltu        $a2, $t3, $t1
    ctx->pc = 0x52e384u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_52e388:
    // 0x52e388: 0x14c0ffd9  bnez        $a2, . + 4 + (-0x27 << 2)
label_52e38c:
    if (ctx->pc == 0x52E38Cu) {
        ctx->pc = 0x52E38Cu;
            // 0x52e38c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x52E390u;
        goto label_52e390;
    }
    ctx->pc = 0x52E388u;
    {
        const bool branch_taken_0x52e388 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x52E38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E388u;
            // 0x52e38c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e388) {
            ctx->pc = 0x52E2F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52e2f0;
        }
    }
    ctx->pc = 0x52E390u;
label_52e390:
    // 0x52e390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52e394:
    // 0x52e394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52e394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52e398:
    // 0x52e398: 0x3e00008  jr          $ra
label_52e39c:
    if (ctx->pc == 0x52E39Cu) {
        ctx->pc = 0x52E39Cu;
            // 0x52e39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52E3A0u;
        goto label_52e3a0;
    }
    ctx->pc = 0x52E398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E398u;
            // 0x52e39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E3A0u;
label_52e3a0:
    // 0x52e3a0: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x52e3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52e3a4:
    // 0x52e3a4: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_52e3a8:
    if (ctx->pc == 0x52E3A8u) {
        ctx->pc = 0x52E3ACu;
        goto label_52e3ac;
    }
    ctx->pc = 0x52E3A4u;
    {
        const bool branch_taken_0x52e3a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e3a4) {
            ctx->pc = 0x52E3F0u;
            goto label_52e3f0;
        }
    }
    ctx->pc = 0x52E3ACu;
label_52e3ac:
    // 0x52e3ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x52e3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e3b0:
    // 0x52e3b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x52e3b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e3b4:
    // 0x52e3b4: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x52e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_52e3b8:
    // 0x52e3b8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x52e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_52e3bc:
    // 0x52e3bc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x52e3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52e3c0:
    // 0x52e3c0: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x52e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_52e3c4:
    // 0x52e3c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_52e3c8:
    if (ctx->pc == 0x52E3C8u) {
        ctx->pc = 0x52E3CCu;
        goto label_52e3cc;
    }
    ctx->pc = 0x52E3C4u;
    {
        const bool branch_taken_0x52e3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e3c4) {
            ctx->pc = 0x52E3D0u;
            goto label_52e3d0;
        }
    }
    ctx->pc = 0x52E3CCu;
label_52e3cc:
    // 0x52e3cc: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x52e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
label_52e3d0:
    // 0x52e3d0: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x52e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_52e3d4:
    // 0x52e3d4: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x52e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
label_52e3d8:
    // 0x52e3d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x52e3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_52e3dc:
    // 0x52e3dc: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x52e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
label_52e3e0:
    // 0x52e3e0: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x52e3e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_52e3e4:
    // 0x52e3e4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x52e3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_52e3e8:
    // 0x52e3e8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_52e3ec:
    if (ctx->pc == 0x52E3ECu) {
        ctx->pc = 0x52E3ECu;
            // 0x52e3ec: 0xaca00060  sw          $zero, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x52E3F0u;
        goto label_52e3f0;
    }
    ctx->pc = 0x52E3E8u;
    {
        const bool branch_taken_0x52e3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52E3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E3E8u;
            // 0x52e3ec: 0xaca00060  sw          $zero, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e3e8) {
            ctx->pc = 0x52E3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52e3b4;
        }
    }
    ctx->pc = 0x52E3F0u;
label_52e3f0:
    // 0x52e3f0: 0x3e00008  jr          $ra
label_52e3f4:
    if (ctx->pc == 0x52E3F4u) {
        ctx->pc = 0x52E3F8u;
        goto label_52e3f8;
    }
    ctx->pc = 0x52E3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E3F8u;
label_52e3f8:
    // 0x52e3f8: 0x0  nop
    ctx->pc = 0x52e3f8u;
    // NOP
label_52e3fc:
    // 0x52e3fc: 0x0  nop
    ctx->pc = 0x52e3fcu;
    // NOP
}
