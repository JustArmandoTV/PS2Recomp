#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ACF50
// Address: 0x4acf50 - 0x4ad380
void sub_004ACF50_0x4acf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACF50_0x4acf50");
#endif

    switch (ctx->pc) {
        case 0x4acf50u: goto label_4acf50;
        case 0x4acf54u: goto label_4acf54;
        case 0x4acf58u: goto label_4acf58;
        case 0x4acf5cu: goto label_4acf5c;
        case 0x4acf60u: goto label_4acf60;
        case 0x4acf64u: goto label_4acf64;
        case 0x4acf68u: goto label_4acf68;
        case 0x4acf6cu: goto label_4acf6c;
        case 0x4acf70u: goto label_4acf70;
        case 0x4acf74u: goto label_4acf74;
        case 0x4acf78u: goto label_4acf78;
        case 0x4acf7cu: goto label_4acf7c;
        case 0x4acf80u: goto label_4acf80;
        case 0x4acf84u: goto label_4acf84;
        case 0x4acf88u: goto label_4acf88;
        case 0x4acf8cu: goto label_4acf8c;
        case 0x4acf90u: goto label_4acf90;
        case 0x4acf94u: goto label_4acf94;
        case 0x4acf98u: goto label_4acf98;
        case 0x4acf9cu: goto label_4acf9c;
        case 0x4acfa0u: goto label_4acfa0;
        case 0x4acfa4u: goto label_4acfa4;
        case 0x4acfa8u: goto label_4acfa8;
        case 0x4acfacu: goto label_4acfac;
        case 0x4acfb0u: goto label_4acfb0;
        case 0x4acfb4u: goto label_4acfb4;
        case 0x4acfb8u: goto label_4acfb8;
        case 0x4acfbcu: goto label_4acfbc;
        case 0x4acfc0u: goto label_4acfc0;
        case 0x4acfc4u: goto label_4acfc4;
        case 0x4acfc8u: goto label_4acfc8;
        case 0x4acfccu: goto label_4acfcc;
        case 0x4acfd0u: goto label_4acfd0;
        case 0x4acfd4u: goto label_4acfd4;
        case 0x4acfd8u: goto label_4acfd8;
        case 0x4acfdcu: goto label_4acfdc;
        case 0x4acfe0u: goto label_4acfe0;
        case 0x4acfe4u: goto label_4acfe4;
        case 0x4acfe8u: goto label_4acfe8;
        case 0x4acfecu: goto label_4acfec;
        case 0x4acff0u: goto label_4acff0;
        case 0x4acff4u: goto label_4acff4;
        case 0x4acff8u: goto label_4acff8;
        case 0x4acffcu: goto label_4acffc;
        case 0x4ad000u: goto label_4ad000;
        case 0x4ad004u: goto label_4ad004;
        case 0x4ad008u: goto label_4ad008;
        case 0x4ad00cu: goto label_4ad00c;
        case 0x4ad010u: goto label_4ad010;
        case 0x4ad014u: goto label_4ad014;
        case 0x4ad018u: goto label_4ad018;
        case 0x4ad01cu: goto label_4ad01c;
        case 0x4ad020u: goto label_4ad020;
        case 0x4ad024u: goto label_4ad024;
        case 0x4ad028u: goto label_4ad028;
        case 0x4ad02cu: goto label_4ad02c;
        case 0x4ad030u: goto label_4ad030;
        case 0x4ad034u: goto label_4ad034;
        case 0x4ad038u: goto label_4ad038;
        case 0x4ad03cu: goto label_4ad03c;
        case 0x4ad040u: goto label_4ad040;
        case 0x4ad044u: goto label_4ad044;
        case 0x4ad048u: goto label_4ad048;
        case 0x4ad04cu: goto label_4ad04c;
        case 0x4ad050u: goto label_4ad050;
        case 0x4ad054u: goto label_4ad054;
        case 0x4ad058u: goto label_4ad058;
        case 0x4ad05cu: goto label_4ad05c;
        case 0x4ad060u: goto label_4ad060;
        case 0x4ad064u: goto label_4ad064;
        case 0x4ad068u: goto label_4ad068;
        case 0x4ad06cu: goto label_4ad06c;
        case 0x4ad070u: goto label_4ad070;
        case 0x4ad074u: goto label_4ad074;
        case 0x4ad078u: goto label_4ad078;
        case 0x4ad07cu: goto label_4ad07c;
        case 0x4ad080u: goto label_4ad080;
        case 0x4ad084u: goto label_4ad084;
        case 0x4ad088u: goto label_4ad088;
        case 0x4ad08cu: goto label_4ad08c;
        case 0x4ad090u: goto label_4ad090;
        case 0x4ad094u: goto label_4ad094;
        case 0x4ad098u: goto label_4ad098;
        case 0x4ad09cu: goto label_4ad09c;
        case 0x4ad0a0u: goto label_4ad0a0;
        case 0x4ad0a4u: goto label_4ad0a4;
        case 0x4ad0a8u: goto label_4ad0a8;
        case 0x4ad0acu: goto label_4ad0ac;
        case 0x4ad0b0u: goto label_4ad0b0;
        case 0x4ad0b4u: goto label_4ad0b4;
        case 0x4ad0b8u: goto label_4ad0b8;
        case 0x4ad0bcu: goto label_4ad0bc;
        case 0x4ad0c0u: goto label_4ad0c0;
        case 0x4ad0c4u: goto label_4ad0c4;
        case 0x4ad0c8u: goto label_4ad0c8;
        case 0x4ad0ccu: goto label_4ad0cc;
        case 0x4ad0d0u: goto label_4ad0d0;
        case 0x4ad0d4u: goto label_4ad0d4;
        case 0x4ad0d8u: goto label_4ad0d8;
        case 0x4ad0dcu: goto label_4ad0dc;
        case 0x4ad0e0u: goto label_4ad0e0;
        case 0x4ad0e4u: goto label_4ad0e4;
        case 0x4ad0e8u: goto label_4ad0e8;
        case 0x4ad0ecu: goto label_4ad0ec;
        case 0x4ad0f0u: goto label_4ad0f0;
        case 0x4ad0f4u: goto label_4ad0f4;
        case 0x4ad0f8u: goto label_4ad0f8;
        case 0x4ad0fcu: goto label_4ad0fc;
        case 0x4ad100u: goto label_4ad100;
        case 0x4ad104u: goto label_4ad104;
        case 0x4ad108u: goto label_4ad108;
        case 0x4ad10cu: goto label_4ad10c;
        case 0x4ad110u: goto label_4ad110;
        case 0x4ad114u: goto label_4ad114;
        case 0x4ad118u: goto label_4ad118;
        case 0x4ad11cu: goto label_4ad11c;
        case 0x4ad120u: goto label_4ad120;
        case 0x4ad124u: goto label_4ad124;
        case 0x4ad128u: goto label_4ad128;
        case 0x4ad12cu: goto label_4ad12c;
        case 0x4ad130u: goto label_4ad130;
        case 0x4ad134u: goto label_4ad134;
        case 0x4ad138u: goto label_4ad138;
        case 0x4ad13cu: goto label_4ad13c;
        case 0x4ad140u: goto label_4ad140;
        case 0x4ad144u: goto label_4ad144;
        case 0x4ad148u: goto label_4ad148;
        case 0x4ad14cu: goto label_4ad14c;
        case 0x4ad150u: goto label_4ad150;
        case 0x4ad154u: goto label_4ad154;
        case 0x4ad158u: goto label_4ad158;
        case 0x4ad15cu: goto label_4ad15c;
        case 0x4ad160u: goto label_4ad160;
        case 0x4ad164u: goto label_4ad164;
        case 0x4ad168u: goto label_4ad168;
        case 0x4ad16cu: goto label_4ad16c;
        case 0x4ad170u: goto label_4ad170;
        case 0x4ad174u: goto label_4ad174;
        case 0x4ad178u: goto label_4ad178;
        case 0x4ad17cu: goto label_4ad17c;
        case 0x4ad180u: goto label_4ad180;
        case 0x4ad184u: goto label_4ad184;
        case 0x4ad188u: goto label_4ad188;
        case 0x4ad18cu: goto label_4ad18c;
        case 0x4ad190u: goto label_4ad190;
        case 0x4ad194u: goto label_4ad194;
        case 0x4ad198u: goto label_4ad198;
        case 0x4ad19cu: goto label_4ad19c;
        case 0x4ad1a0u: goto label_4ad1a0;
        case 0x4ad1a4u: goto label_4ad1a4;
        case 0x4ad1a8u: goto label_4ad1a8;
        case 0x4ad1acu: goto label_4ad1ac;
        case 0x4ad1b0u: goto label_4ad1b0;
        case 0x4ad1b4u: goto label_4ad1b4;
        case 0x4ad1b8u: goto label_4ad1b8;
        case 0x4ad1bcu: goto label_4ad1bc;
        case 0x4ad1c0u: goto label_4ad1c0;
        case 0x4ad1c4u: goto label_4ad1c4;
        case 0x4ad1c8u: goto label_4ad1c8;
        case 0x4ad1ccu: goto label_4ad1cc;
        case 0x4ad1d0u: goto label_4ad1d0;
        case 0x4ad1d4u: goto label_4ad1d4;
        case 0x4ad1d8u: goto label_4ad1d8;
        case 0x4ad1dcu: goto label_4ad1dc;
        case 0x4ad1e0u: goto label_4ad1e0;
        case 0x4ad1e4u: goto label_4ad1e4;
        case 0x4ad1e8u: goto label_4ad1e8;
        case 0x4ad1ecu: goto label_4ad1ec;
        case 0x4ad1f0u: goto label_4ad1f0;
        case 0x4ad1f4u: goto label_4ad1f4;
        case 0x4ad1f8u: goto label_4ad1f8;
        case 0x4ad1fcu: goto label_4ad1fc;
        case 0x4ad200u: goto label_4ad200;
        case 0x4ad204u: goto label_4ad204;
        case 0x4ad208u: goto label_4ad208;
        case 0x4ad20cu: goto label_4ad20c;
        case 0x4ad210u: goto label_4ad210;
        case 0x4ad214u: goto label_4ad214;
        case 0x4ad218u: goto label_4ad218;
        case 0x4ad21cu: goto label_4ad21c;
        case 0x4ad220u: goto label_4ad220;
        case 0x4ad224u: goto label_4ad224;
        case 0x4ad228u: goto label_4ad228;
        case 0x4ad22cu: goto label_4ad22c;
        case 0x4ad230u: goto label_4ad230;
        case 0x4ad234u: goto label_4ad234;
        case 0x4ad238u: goto label_4ad238;
        case 0x4ad23cu: goto label_4ad23c;
        case 0x4ad240u: goto label_4ad240;
        case 0x4ad244u: goto label_4ad244;
        case 0x4ad248u: goto label_4ad248;
        case 0x4ad24cu: goto label_4ad24c;
        case 0x4ad250u: goto label_4ad250;
        case 0x4ad254u: goto label_4ad254;
        case 0x4ad258u: goto label_4ad258;
        case 0x4ad25cu: goto label_4ad25c;
        case 0x4ad260u: goto label_4ad260;
        case 0x4ad264u: goto label_4ad264;
        case 0x4ad268u: goto label_4ad268;
        case 0x4ad26cu: goto label_4ad26c;
        case 0x4ad270u: goto label_4ad270;
        case 0x4ad274u: goto label_4ad274;
        case 0x4ad278u: goto label_4ad278;
        case 0x4ad27cu: goto label_4ad27c;
        case 0x4ad280u: goto label_4ad280;
        case 0x4ad284u: goto label_4ad284;
        case 0x4ad288u: goto label_4ad288;
        case 0x4ad28cu: goto label_4ad28c;
        case 0x4ad290u: goto label_4ad290;
        case 0x4ad294u: goto label_4ad294;
        case 0x4ad298u: goto label_4ad298;
        case 0x4ad29cu: goto label_4ad29c;
        case 0x4ad2a0u: goto label_4ad2a0;
        case 0x4ad2a4u: goto label_4ad2a4;
        case 0x4ad2a8u: goto label_4ad2a8;
        case 0x4ad2acu: goto label_4ad2ac;
        case 0x4ad2b0u: goto label_4ad2b0;
        case 0x4ad2b4u: goto label_4ad2b4;
        case 0x4ad2b8u: goto label_4ad2b8;
        case 0x4ad2bcu: goto label_4ad2bc;
        case 0x4ad2c0u: goto label_4ad2c0;
        case 0x4ad2c4u: goto label_4ad2c4;
        case 0x4ad2c8u: goto label_4ad2c8;
        case 0x4ad2ccu: goto label_4ad2cc;
        case 0x4ad2d0u: goto label_4ad2d0;
        case 0x4ad2d4u: goto label_4ad2d4;
        case 0x4ad2d8u: goto label_4ad2d8;
        case 0x4ad2dcu: goto label_4ad2dc;
        case 0x4ad2e0u: goto label_4ad2e0;
        case 0x4ad2e4u: goto label_4ad2e4;
        case 0x4ad2e8u: goto label_4ad2e8;
        case 0x4ad2ecu: goto label_4ad2ec;
        case 0x4ad2f0u: goto label_4ad2f0;
        case 0x4ad2f4u: goto label_4ad2f4;
        case 0x4ad2f8u: goto label_4ad2f8;
        case 0x4ad2fcu: goto label_4ad2fc;
        case 0x4ad300u: goto label_4ad300;
        case 0x4ad304u: goto label_4ad304;
        case 0x4ad308u: goto label_4ad308;
        case 0x4ad30cu: goto label_4ad30c;
        case 0x4ad310u: goto label_4ad310;
        case 0x4ad314u: goto label_4ad314;
        case 0x4ad318u: goto label_4ad318;
        case 0x4ad31cu: goto label_4ad31c;
        case 0x4ad320u: goto label_4ad320;
        case 0x4ad324u: goto label_4ad324;
        case 0x4ad328u: goto label_4ad328;
        case 0x4ad32cu: goto label_4ad32c;
        case 0x4ad330u: goto label_4ad330;
        case 0x4ad334u: goto label_4ad334;
        case 0x4ad338u: goto label_4ad338;
        case 0x4ad33cu: goto label_4ad33c;
        case 0x4ad340u: goto label_4ad340;
        case 0x4ad344u: goto label_4ad344;
        case 0x4ad348u: goto label_4ad348;
        case 0x4ad34cu: goto label_4ad34c;
        case 0x4ad350u: goto label_4ad350;
        case 0x4ad354u: goto label_4ad354;
        case 0x4ad358u: goto label_4ad358;
        case 0x4ad35cu: goto label_4ad35c;
        case 0x4ad360u: goto label_4ad360;
        case 0x4ad364u: goto label_4ad364;
        case 0x4ad368u: goto label_4ad368;
        case 0x4ad36cu: goto label_4ad36c;
        case 0x4ad370u: goto label_4ad370;
        case 0x4ad374u: goto label_4ad374;
        case 0x4ad378u: goto label_4ad378;
        case 0x4ad37cu: goto label_4ad37c;
        default: break;
    }

    ctx->pc = 0x4acf50u;

label_4acf50:
    // 0x4acf50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4acf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4acf54:
    // 0x4acf54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4acf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4acf58:
    // 0x4acf58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4acf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4acf5c:
    // 0x4acf5c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4acf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4acf60:
    // 0x4acf60: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4acf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4acf64:
    // 0x4acf64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4acf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4acf68:
    // 0x4acf68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4acf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4acf6c:
    // 0x4acf6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4acf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4acf70:
    // 0x4acf70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4acf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4acf74:
    // 0x4acf74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4acf78:
    // 0x4acf78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4acf78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4acf7c:
    // 0x4acf7c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x4acf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_4acf80:
    // 0x4acf80: 0x8c720550  lw          $s2, 0x550($v1)
    ctx->pc = 0x4acf80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
label_4acf84:
    // 0x4acf84: 0x8c630d74  lw          $v1, 0xD74($v1)
    ctx->pc = 0x4acf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
label_4acf88:
    // 0x4acf88: 0xac6602b0  sw          $a2, 0x2B0($v1)
    ctx->pc = 0x4acf88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 6));
label_4acf8c:
    // 0x4acf8c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x4acf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_4acf90:
    // 0x4acf90: 0xac650db8  sw          $a1, 0xDB8($v1)
    ctx->pc = 0x4acf90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3512), GPR_U32(ctx, 5));
label_4acf94:
    // 0x4acf94: 0x8c430e30  lw          $v1, 0xE30($v0)
    ctx->pc = 0x4acf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
label_4acf98:
    // 0x4acf98: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x4acf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_4acf9c:
    // 0x4acf9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4acfa0:
    if (ctx->pc == 0x4ACFA0u) {
        ctx->pc = 0x4ACFA0u;
            // 0x4acfa0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACFA4u;
        goto label_4acfa4;
    }
    ctx->pc = 0x4ACF9Cu;
    {
        const bool branch_taken_0x4acf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACF9Cu;
            // 0x4acfa0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf9c) {
            ctx->pc = 0x4ACFC8u;
            goto label_4acfc8;
        }
    }
    ctx->pc = 0x4ACFA4u;
label_4acfa4:
    // 0x4acfa4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x4acfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4acfa8:
    // 0x4acfa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4acfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4acfac:
    // 0x4acfac: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4acfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4acfb0:
    // 0x4acfb0: 0xc44d0014  lwc1        $f13, 0x14($v0)
    ctx->pc = 0x4acfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4acfb4:
    // 0x4acfb4: 0xc44e0018  lwc1        $f14, 0x18($v0)
    ctx->pc = 0x4acfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4acfb8:
    // 0x4acfb8: 0xc04cbd8  jal         func_132F60
label_4acfbc:
    if (ctx->pc == 0x4ACFBCu) {
        ctx->pc = 0x4ACFBCu;
            // 0x4acfbc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4ACFC0u;
        goto label_4acfc0;
    }
    ctx->pc = 0x4ACFB8u;
    SET_GPR_U32(ctx, 31, 0x4ACFC0u);
    ctx->pc = 0x4ACFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACFB8u;
            // 0x4acfbc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACFC0u; }
        if (ctx->pc != 0x4ACFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACFC0u; }
        if (ctx->pc != 0x4ACFC0u) { return; }
    }
    ctx->pc = 0x4ACFC0u;
label_4acfc0:
    // 0x4acfc0: 0x1000000c  b           . + 4 + (0xC << 2)
label_4acfc4:
    if (ctx->pc == 0x4ACFC4u) {
        ctx->pc = 0x4ACFC4u;
            // 0x4acfc4: 0x8e820084  lw          $v0, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->pc = 0x4ACFC8u;
        goto label_4acfc8;
    }
    ctx->pc = 0x4ACFC0u;
    {
        const bool branch_taken_0x4acfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACFC0u;
            // 0x4acfc4: 0x8e820084  lw          $v0, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acfc0) {
            ctx->pc = 0x4ACFF4u;
            goto label_4acff4;
        }
    }
    ctx->pc = 0x4ACFC8u;
label_4acfc8:
    // 0x4acfc8: 0x3c03c31a  lui         $v1, 0xC31A
    ctx->pc = 0x4acfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49946 << 16));
label_4acfcc:
    // 0x4acfcc: 0x3c0242f5  lui         $v0, 0x42F5
    ctx->pc = 0x4acfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17141 << 16));
label_4acfd0:
    // 0x4acfd0: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x4acfd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_4acfd4:
    // 0x4acfd4: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x4acfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4acfd8:
    // 0x4acfd8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x4acfd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4acfdc:
    // 0x4acfdc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4acfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4acfe0:
    // 0x4acfe0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4acfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4acfe4:
    // 0x4acfe4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4acfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4acfe8:
    // 0x4acfe8: 0xc04cbd8  jal         func_132F60
label_4acfec:
    if (ctx->pc == 0x4ACFECu) {
        ctx->pc = 0x4ACFECu;
            // 0x4acfec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4ACFF0u;
        goto label_4acff0;
    }
    ctx->pc = 0x4ACFE8u;
    SET_GPR_U32(ctx, 31, 0x4ACFF0u);
    ctx->pc = 0x4ACFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACFE8u;
            // 0x4acfec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACFF0u; }
        if (ctx->pc != 0x4ACFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACFF0u; }
        if (ctx->pc != 0x4ACFF0u) { return; }
    }
    ctx->pc = 0x4ACFF0u;
label_4acff0:
    // 0x4acff0: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4acff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4acff4:
    // 0x4acff4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4acff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4acff8:
    // 0x4acff8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4acff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4acffc:
    // 0x4acffc: 0xc04cc90  jal         func_133240
label_4ad000:
    if (ctx->pc == 0x4AD000u) {
        ctx->pc = 0x4AD000u;
            // 0x4ad000: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x4AD004u;
        goto label_4ad004;
    }
    ctx->pc = 0x4ACFFCu;
    SET_GPR_U32(ctx, 31, 0x4AD004u);
    ctx->pc = 0x4AD000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACFFCu;
            // 0x4ad000: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD004u; }
        if (ctx->pc != 0x4AD004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD004u; }
        if (ctx->pc != 0x4AD004u) { return; }
    }
    ctx->pc = 0x4AD004u;
label_4ad004:
    // 0x4ad004: 0xc04cc14  jal         func_133050
label_4ad008:
    if (ctx->pc == 0x4AD008u) {
        ctx->pc = 0x4AD008u;
            // 0x4ad008: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4AD00Cu;
        goto label_4ad00c;
    }
    ctx->pc = 0x4AD004u;
    SET_GPR_U32(ctx, 31, 0x4AD00Cu);
    ctx->pc = 0x4AD008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD004u;
            // 0x4ad008: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD00Cu; }
        if (ctx->pc != 0x4AD00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD00Cu; }
        if (ctx->pc != 0x4AD00Cu) { return; }
    }
    ctx->pc = 0x4AD00Cu;
label_4ad00c:
    // 0x4ad00c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4ad00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4ad010:
    // 0x4ad010: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4ad010u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4ad014:
    // 0x4ad014: 0xc04cc44  jal         func_133110
label_4ad018:
    if (ctx->pc == 0x4AD018u) {
        ctx->pc = 0x4AD018u;
            // 0x4ad018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD01Cu;
        goto label_4ad01c;
    }
    ctx->pc = 0x4AD014u;
    SET_GPR_U32(ctx, 31, 0x4AD01Cu);
    ctx->pc = 0x4AD018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD014u;
            // 0x4ad018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD01Cu; }
        if (ctx->pc != 0x4AD01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD01Cu; }
        if (ctx->pc != 0x4AD01Cu) { return; }
    }
    ctx->pc = 0x4AD01Cu;
label_4ad01c:
    // 0x4ad01c: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad020:
    // 0x4ad020: 0xc68c009c  lwc1        $f12, 0x9C($s4)
    ctx->pc = 0x4ad020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4ad024:
    // 0x4ad024: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4ad024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4ad028:
    // 0x4ad028: 0xc04cc70  jal         func_1331C0
label_4ad02c:
    if (ctx->pc == 0x4AD02Cu) {
        ctx->pc = 0x4AD02Cu;
            // 0x4ad02c: 0x24440330  addiu       $a0, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->pc = 0x4AD030u;
        goto label_4ad030;
    }
    ctx->pc = 0x4AD028u;
    SET_GPR_U32(ctx, 31, 0x4AD030u);
    ctx->pc = 0x4AD02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD028u;
            // 0x4ad02c: 0x24440330  addiu       $a0, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD030u; }
        if (ctx->pc != 0x4AD030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD030u; }
        if (ctx->pc != 0x4AD030u) { return; }
    }
    ctx->pc = 0x4AD030u;
label_4ad030:
    // 0x4ad030: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad034:
    // 0x4ad034: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4ad034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4ad038:
    // 0x4ad038: 0x24a55670  addiu       $a1, $a1, 0x5670
    ctx->pc = 0x4ad038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22128));
label_4ad03c:
    // 0x4ad03c: 0xc04cc04  jal         func_133010
label_4ad040:
    if (ctx->pc == 0x4AD040u) {
        ctx->pc = 0x4AD040u;
            // 0x4ad040: 0x24440340  addiu       $a0, $v0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
        ctx->pc = 0x4AD044u;
        goto label_4ad044;
    }
    ctx->pc = 0x4AD03Cu;
    SET_GPR_U32(ctx, 31, 0x4AD044u);
    ctx->pc = 0x4AD040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD03Cu;
            // 0x4ad040: 0x24440340  addiu       $a0, $v0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD044u; }
        if (ctx->pc != 0x4AD044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD044u; }
        if (ctx->pc != 0x4AD044u) { return; }
    }
    ctx->pc = 0x4AD044u;
label_4ad044:
    // 0x4ad044: 0xc681009c  lwc1        $f1, 0x9C($s4)
    ctx->pc = 0x4ad044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ad048:
    // 0x4ad048: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4ad048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4ad04c:
    // 0x4ad04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ad04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ad050:
    // 0x4ad050: 0x0  nop
    ctx->pc = 0x4ad050u;
    // NOP
label_4ad054:
    // 0x4ad054: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x4ad054u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
label_4ad058:
    // 0x4ad058: 0x0  nop
    ctx->pc = 0x4ad058u;
    // NOP
label_4ad05c:
    // 0x4ad05c: 0x0  nop
    ctx->pc = 0x4ad05cu;
    // NOP
label_4ad060:
    // 0x4ad060: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4ad060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ad064:
    // 0x4ad064: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4ad068:
    if (ctx->pc == 0x4AD068u) {
        ctx->pc = 0x4AD068u;
            // 0x4ad068: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4AD06Cu;
        goto label_4ad06c;
    }
    ctx->pc = 0x4AD064u;
    {
        const bool branch_taken_0x4ad064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ad064) {
            ctx->pc = 0x4AD068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD064u;
            // 0x4ad068: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD07Cu;
            goto label_4ad07c;
        }
    }
    ctx->pc = 0x4AD06Cu;
label_4ad06c:
    // 0x4ad06c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ad06cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ad070:
    // 0x4ad070: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4ad070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4ad074:
    // 0x4ad074: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ad078:
    if (ctx->pc == 0x4AD078u) {
        ctx->pc = 0x4AD07Cu;
        goto label_4ad07c;
    }
    ctx->pc = 0x4AD074u;
    {
        const bool branch_taken_0x4ad074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad074) {
            ctx->pc = 0x4AD090u;
            goto label_4ad090;
        }
    }
    ctx->pc = 0x4AD07Cu;
label_4ad07c:
    // 0x4ad07c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4ad07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4ad080:
    // 0x4ad080: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ad080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ad084:
    // 0x4ad084: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4ad084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4ad088:
    // 0x4ad088: 0x0  nop
    ctx->pc = 0x4ad088u;
    // NOP
label_4ad08c:
    // 0x4ad08c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4ad08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4ad090:
    // 0x4ad090: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4ad094:
    if (ctx->pc == 0x4AD094u) {
        ctx->pc = 0x4AD094u;
            // 0x4ad094: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4AD098u;
        goto label_4ad098;
    }
    ctx->pc = 0x4AD090u;
    {
        const bool branch_taken_0x4ad090 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4ad090) {
            ctx->pc = 0x4AD094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD090u;
            // 0x4ad094: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD0A4u;
            goto label_4ad0a4;
        }
    }
    ctx->pc = 0x4AD098u;
label_4ad098:
    // 0x4ad098: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ad098u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ad09c:
    // 0x4ad09c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ad0a0:
    if (ctx->pc == 0x4AD0A0u) {
        ctx->pc = 0x4AD0A0u;
            // 0x4ad0a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4AD0A4u;
        goto label_4ad0a4;
    }
    ctx->pc = 0x4AD09Cu;
    {
        const bool branch_taken_0x4ad09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD09Cu;
            // 0x4ad0a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad09c) {
            ctx->pc = 0x4AD0BCu;
            goto label_4ad0bc;
        }
    }
    ctx->pc = 0x4AD0A4u;
label_4ad0a4:
    // 0x4ad0a4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4ad0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4ad0a8:
    // 0x4ad0a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ad0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ad0ac:
    // 0x4ad0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ad0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ad0b0:
    // 0x4ad0b0: 0x0  nop
    ctx->pc = 0x4ad0b0u;
    // NOP
label_4ad0b4:
    // 0x4ad0b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ad0b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ad0b8:
    // 0x4ad0b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4ad0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4ad0bc:
    // 0x4ad0bc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4ad0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4ad0c0:
    // 0x4ad0c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4ad0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4ad0c4:
    // 0x4ad0c4: 0xe6800094  swc1        $f0, 0x94($s4)
    ctx->pc = 0x4ad0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
label_4ad0c8:
    // 0x4ad0c8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4ad0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4ad0cc:
    // 0x4ad0cc: 0xc04cbf0  jal         func_132FC0
label_4ad0d0:
    if (ctx->pc == 0x4AD0D0u) {
        ctx->pc = 0x4AD0D0u;
            // 0x4ad0d0: 0x24c65660  addiu       $a2, $a2, 0x5660 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22112));
        ctx->pc = 0x4AD0D4u;
        goto label_4ad0d4;
    }
    ctx->pc = 0x4AD0CCu;
    SET_GPR_U32(ctx, 31, 0x4AD0D4u);
    ctx->pc = 0x4AD0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD0CCu;
            // 0x4ad0d0: 0x24c65660  addiu       $a2, $a2, 0x5660 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD0D4u; }
        if (ctx->pc != 0x4AD0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD0D4u; }
        if (ctx->pc != 0x4AD0D4u) { return; }
    }
    ctx->pc = 0x4AD0D4u;
label_4ad0d4:
    // 0x4ad0d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4ad0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4ad0d8:
    // 0x4ad0d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x4ad0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4ad0dc:
    // 0x4ad0dc: 0xc04cbf0  jal         func_132FC0
label_4ad0e0:
    if (ctx->pc == 0x4AD0E0u) {
        ctx->pc = 0x4AD0E0u;
            // 0x4ad0e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD0E4u;
        goto label_4ad0e4;
    }
    ctx->pc = 0x4AD0DCu;
    SET_GPR_U32(ctx, 31, 0x4AD0E4u);
    ctx->pc = 0x4AD0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD0DCu;
            // 0x4ad0e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD0E4u; }
        if (ctx->pc != 0x4AD0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD0E4u; }
        if (ctx->pc != 0x4AD0E4u) { return; }
    }
    ctx->pc = 0x4AD0E4u;
label_4ad0e4:
    // 0x4ad0e4: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad0e8:
    // 0x4ad0e8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4ad0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4ad0ec:
    // 0x4ad0ec: 0xc04cc04  jal         func_133010
label_4ad0f0:
    if (ctx->pc == 0x4AD0F0u) {
        ctx->pc = 0x4AD0F0u;
            // 0x4ad0f0: 0x244402e0  addiu       $a0, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->pc = 0x4AD0F4u;
        goto label_4ad0f4;
    }
    ctx->pc = 0x4AD0ECu;
    SET_GPR_U32(ctx, 31, 0x4AD0F4u);
    ctx->pc = 0x4AD0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD0ECu;
            // 0x4ad0f0: 0x244402e0  addiu       $a0, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD0F4u; }
        if (ctx->pc != 0x4AD0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD0F4u; }
        if (ctx->pc != 0x4AD0F4u) { return; }
    }
    ctx->pc = 0x4AD0F4u;
label_4ad0f4:
    // 0x4ad0f4: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad0f8:
    // 0x4ad0f8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4ad0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4ad0fc:
    // 0x4ad0fc: 0xc075318  jal         func_1D4C60
label_4ad100:
    if (ctx->pc == 0x4AD100u) {
        ctx->pc = 0x4AD100u;
            // 0x4ad100: 0x24440560  addiu       $a0, $v0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
        ctx->pc = 0x4AD104u;
        goto label_4ad104;
    }
    ctx->pc = 0x4AD0FCu;
    SET_GPR_U32(ctx, 31, 0x4AD104u);
    ctx->pc = 0x4AD100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD0FCu;
            // 0x4ad100: 0x24440560  addiu       $a0, $v0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD104u; }
        if (ctx->pc != 0x4AD104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD104u; }
        if (ctx->pc != 0x4AD104u) { return; }
    }
    ctx->pc = 0x4AD104u;
label_4ad104:
    // 0x4ad104: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad108:
    // 0x4ad108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ad108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ad10c:
    // 0x4ad10c: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x4ad10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_4ad110:
    // 0x4ad110: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x4ad110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_4ad114:
    // 0x4ad114: 0xc0c6250  jal         func_318940
label_4ad118:
    if (ctx->pc == 0x4AD118u) {
        ctx->pc = 0x4AD118u;
            // 0x4ad118: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD11Cu;
        goto label_4ad11c;
    }
    ctx->pc = 0x4AD114u;
    SET_GPR_U32(ctx, 31, 0x4AD11Cu);
    ctx->pc = 0x4AD118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD114u;
            // 0x4ad118: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD11Cu; }
        if (ctx->pc != 0x4AD11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD11Cu; }
        if (ctx->pc != 0x4AD11Cu) { return; }
    }
    ctx->pc = 0x4AD11Cu;
label_4ad11c:
    // 0x4ad11c: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad120:
    // 0x4ad120: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ad120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ad124:
    // 0x4ad124: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x4ad124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_4ad128:
    // 0x4ad128: 0x244408f0  addiu       $a0, $v0, 0x8F0
    ctx->pc = 0x4ad128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
label_4ad12c:
    // 0x4ad12c: 0xc0c6250  jal         func_318940
label_4ad130:
    if (ctx->pc == 0x4AD130u) {
        ctx->pc = 0x4AD130u;
            // 0x4ad130: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD134u;
        goto label_4ad134;
    }
    ctx->pc = 0x4AD12Cu;
    SET_GPR_U32(ctx, 31, 0x4AD134u);
    ctx->pc = 0x4AD130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD12Cu;
            // 0x4ad130: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD134u; }
        if (ctx->pc != 0x4AD134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD134u; }
        if (ctx->pc != 0x4AD134u) { return; }
    }
    ctx->pc = 0x4AD134u;
label_4ad134:
    // 0x4ad134: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad138:
    // 0x4ad138: 0xc0b9210  jal         func_2E4840
label_4ad13c:
    if (ctx->pc == 0x4AD13Cu) {
        ctx->pc = 0x4AD13Cu;
            // 0x4ad13c: 0x244407e0  addiu       $a0, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x4AD140u;
        goto label_4ad140;
    }
    ctx->pc = 0x4AD138u;
    SET_GPR_U32(ctx, 31, 0x4AD140u);
    ctx->pc = 0x4AD13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD138u;
            // 0x4ad13c: 0x244407e0  addiu       $a0, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD140u; }
        if (ctx->pc != 0x4AD140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD140u; }
        if (ctx->pc != 0x4AD140u) { return; }
    }
    ctx->pc = 0x4AD140u;
label_4ad140:
    // 0x4ad140: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad144:
    // 0x4ad144: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4ad144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4ad148:
    // 0x4ad148: 0x24440560  addiu       $a0, $v0, 0x560
    ctx->pc = 0x4ad148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_4ad14c:
    // 0x4ad14c: 0xc075378  jal         func_1D4DE0
label_4ad150:
    if (ctx->pc == 0x4AD150u) {
        ctx->pc = 0x4AD150u;
            // 0x4ad150: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD154u;
        goto label_4ad154;
    }
    ctx->pc = 0x4AD14Cu;
    SET_GPR_U32(ctx, 31, 0x4AD154u);
    ctx->pc = 0x4AD150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD14Cu;
            // 0x4ad150: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD154u; }
        if (ctx->pc != 0x4AD154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD154u; }
        if (ctx->pc != 0x4AD154u) { return; }
    }
    ctx->pc = 0x4AD154u;
label_4ad154:
    // 0x4ad154: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad158:
    // 0x4ad158: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4ad158u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4ad15c:
    // 0x4ad15c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4ad15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ad160:
    // 0x4ad160: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4ad160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4ad164:
    // 0x4ad164: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4ad164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4ad168:
    // 0x4ad168: 0xc0c753c  jal         func_31D4F0
label_4ad16c:
    if (ctx->pc == 0x4AD16Cu) {
        ctx->pc = 0x4AD16Cu;
            // 0x4ad16c: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->pc = 0x4AD170u;
        goto label_4ad170;
    }
    ctx->pc = 0x4AD168u;
    SET_GPR_U32(ctx, 31, 0x4AD170u);
    ctx->pc = 0x4AD16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD168u;
            // 0x4ad16c: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD170u; }
        if (ctx->pc != 0x4AD170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD170u; }
        if (ctx->pc != 0x4AD170u) { return; }
    }
    ctx->pc = 0x4AD170u;
label_4ad170:
    // 0x4ad170: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x4ad170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad174:
    // 0x4ad174: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4ad174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ad178:
    // 0x4ad178: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4ad178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4ad17c:
    // 0x4ad17c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4ad17cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4ad180:
    // 0x4ad180: 0xc0c753c  jal         func_31D4F0
label_4ad184:
    if (ctx->pc == 0x4AD184u) {
        ctx->pc = 0x4AD184u;
            // 0x4ad184: 0x2444087c  addiu       $a0, $v0, 0x87C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2172));
        ctx->pc = 0x4AD188u;
        goto label_4ad188;
    }
    ctx->pc = 0x4AD180u;
    SET_GPR_U32(ctx, 31, 0x4AD188u);
    ctx->pc = 0x4AD184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD180u;
            // 0x4ad184: 0x2444087c  addiu       $a0, $v0, 0x87C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD188u; }
        if (ctx->pc != 0x4AD188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD188u; }
        if (ctx->pc != 0x4AD188u) { return; }
    }
    ctx->pc = 0x4AD188u;
label_4ad188:
    // 0x4ad188: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x4ad188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad18c:
    // 0x4ad18c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4ad18cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4ad190:
    // 0x4ad190: 0x8c820e34  lw          $v0, 0xE34($a0)
    ctx->pc = 0x4ad190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4ad194:
    // 0x4ad194: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4ad198:
    if (ctx->pc == 0x4AD198u) {
        ctx->pc = 0x4AD198u;
            // 0x4ad198: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD19Cu;
        goto label_4ad19c;
    }
    ctx->pc = 0x4AD194u;
    {
        const bool branch_taken_0x4ad194 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AD198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD194u;
            // 0x4ad198: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad194) {
            ctx->pc = 0x4AD1ACu;
            goto label_4ad1ac;
        }
    }
    ctx->pc = 0x4AD19Cu;
label_4ad19c:
    // 0x4ad19c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4ad19cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ad1a0:
    // 0x4ad1a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ad1a4:
    if (ctx->pc == 0x4AD1A4u) {
        ctx->pc = 0x4AD1A8u;
        goto label_4ad1a8;
    }
    ctx->pc = 0x4AD1A0u;
    {
        const bool branch_taken_0x4ad1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad1a0) {
            ctx->pc = 0x4AD1ACu;
            goto label_4ad1ac;
        }
    }
    ctx->pc = 0x4AD1A8u;
label_4ad1a8:
    // 0x4ad1a8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4ad1a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad1ac:
    // 0x4ad1ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4ad1b0:
    if (ctx->pc == 0x4AD1B0u) {
        ctx->pc = 0x4AD1B4u;
        goto label_4ad1b4;
    }
    ctx->pc = 0x4AD1ACu;
    {
        const bool branch_taken_0x4ad1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad1ac) {
            ctx->pc = 0x4AD1C8u;
            goto label_4ad1c8;
        }
    }
    ctx->pc = 0x4AD1B4u;
label_4ad1b4:
    // 0x4ad1b4: 0xc075eb4  jal         func_1D7AD0
label_4ad1b8:
    if (ctx->pc == 0x4AD1B8u) {
        ctx->pc = 0x4AD1BCu;
        goto label_4ad1bc;
    }
    ctx->pc = 0x4AD1B4u;
    SET_GPR_U32(ctx, 31, 0x4AD1BCu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD1BCu; }
        if (ctx->pc != 0x4AD1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD1BCu; }
        if (ctx->pc != 0x4AD1BCu) { return; }
    }
    ctx->pc = 0x4AD1BCu;
label_4ad1bc:
    // 0x4ad1bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ad1c0:
    if (ctx->pc == 0x4AD1C0u) {
        ctx->pc = 0x4AD1C4u;
        goto label_4ad1c4;
    }
    ctx->pc = 0x4AD1BCu;
    {
        const bool branch_taken_0x4ad1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad1bc) {
            ctx->pc = 0x4AD1C8u;
            goto label_4ad1c8;
        }
    }
    ctx->pc = 0x4AD1C4u;
label_4ad1c4:
    // 0x4ad1c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4ad1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ad1c8:
    // 0x4ad1c8: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_4ad1cc:
    if (ctx->pc == 0x4AD1CCu) {
        ctx->pc = 0x4AD1D0u;
        goto label_4ad1d0;
    }
    ctx->pc = 0x4AD1C8u;
    {
        const bool branch_taken_0x4ad1c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad1c8) {
            ctx->pc = 0x4AD2BCu;
            goto label_4ad2bc;
        }
    }
    ctx->pc = 0x4AD1D0u;
label_4ad1d0:
    // 0x4ad1d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ad1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ad1d4:
    // 0x4ad1d4: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x4ad1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad1d8:
    // 0x4ad1d8: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x4ad1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ad1dc:
    // 0x4ad1dc: 0x8c840d98  lw          $a0, 0xD98($a0)
    ctx->pc = 0x4ad1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3480)));
label_4ad1e0:
    // 0x4ad1e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ad1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ad1e4:
    // 0x4ad1e4: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x4ad1e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_4ad1e8:
    // 0x4ad1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad1ec:
    // 0x4ad1ec: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x4ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_4ad1f0:
    // 0x4ad1f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ad1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ad1f4:
    // 0x4ad1f4: 0x5c400021  bgtzl       $v0, . + 4 + (0x21 << 2)
label_4ad1f8:
    if (ctx->pc == 0x4AD1F8u) {
        ctx->pc = 0x4AD1F8u;
            // 0x4ad1f8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4AD1FCu;
        goto label_4ad1fc;
    }
    ctx->pc = 0x4AD1F4u;
    {
        const bool branch_taken_0x4ad1f4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4ad1f4) {
            ctx->pc = 0x4AD1F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD1F4u;
            // 0x4ad1f8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD27Cu;
            goto label_4ad27c;
        }
    }
    ctx->pc = 0x4AD1FCu;
label_4ad1fc:
    // 0x4ad1fc: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x4ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_4ad200:
    // 0x4ad200: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x4ad200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_4ad204:
    // 0x4ad204: 0x263002b8  addiu       $s0, $s1, 0x2B8
    ctx->pc = 0x4ad204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 696));
label_4ad208:
    // 0x4ad208: 0xc040180  jal         func_100600
label_4ad20c:
    if (ctx->pc == 0x4AD20Cu) {
        ctx->pc = 0x4AD20Cu;
            // 0x4ad20c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x4AD210u;
        goto label_4ad210;
    }
    ctx->pc = 0x4AD208u;
    SET_GPR_U32(ctx, 31, 0x4AD210u);
    ctx->pc = 0x4AD20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD208u;
            // 0x4ad20c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD210u; }
        if (ctx->pc != 0x4AD210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD210u; }
        if (ctx->pc != 0x4AD210u) { return; }
    }
    ctx->pc = 0x4AD210u;
label_4ad210:
    // 0x4ad210: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4ad214:
    if (ctx->pc == 0x4AD214u) {
        ctx->pc = 0x4AD214u;
            // 0x4ad214: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD218u;
        goto label_4ad218;
    }
    ctx->pc = 0x4AD210u;
    {
        const bool branch_taken_0x4ad210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD210u;
            // 0x4ad214: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad210) {
            ctx->pc = 0x4AD278u;
            goto label_4ad278;
        }
    }
    ctx->pc = 0x4AD218u;
label_4ad218:
    // 0x4ad218: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x4ad218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad21c:
    // 0x4ad21c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4ad21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad220:
    // 0x4ad220: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4ad220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4ad224:
    // 0x4ad224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ad224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ad228:
    // 0x4ad228: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ad228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ad22c:
    // 0x4ad22c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4ad22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4ad230:
    // 0x4ad230: 0x8c700d98  lw          $s0, 0xD98($v1)
    ctx->pc = 0x4ad230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_4ad234:
    // 0x4ad234: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x4ad234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_4ad238:
    // 0x4ad238: 0x806911aa  lb          $t1, 0x11AA($v1)
    ctx->pc = 0x4ad238u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_4ad23c:
    // 0x4ad23c: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x4ad23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_4ad240:
    // 0x4ad240: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4ad240u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ad244:
    // 0x4ad244: 0xc0b9404  jal         func_2E5010
label_4ad248:
    if (ctx->pc == 0x4AD248u) {
        ctx->pc = 0x4AD248u;
            // 0x4ad248: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD24Cu;
        goto label_4ad24c;
    }
    ctx->pc = 0x4AD244u;
    SET_GPR_U32(ctx, 31, 0x4AD24Cu);
    ctx->pc = 0x4AD248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD244u;
            // 0x4ad248: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD24Cu; }
        if (ctx->pc != 0x4AD24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD24Cu; }
        if (ctx->pc != 0x4AD24Cu) { return; }
    }
    ctx->pc = 0x4AD24Cu;
label_4ad24c:
    // 0x4ad24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad250:
    // 0x4ad250: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ad250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ad254:
    // 0x4ad254: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x4ad254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_4ad258:
    // 0x4ad258: 0x24634160  addiu       $v1, $v1, 0x4160
    ctx->pc = 0x4ad258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16736));
label_4ad25c:
    // 0x4ad25c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x4ad25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4ad260:
    // 0x4ad260: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ad260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4ad264:
    // 0x4ad264: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ad264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ad268:
    // 0x4ad268: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x4ad268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_4ad26c:
    // 0x4ad26c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ad26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ad270:
    // 0x4ad270: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4ad270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4ad274:
    // 0x4ad274: 0xa0433db0  sb          $v1, 0x3DB0($v0)
    ctx->pc = 0x4ad274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 3));
label_4ad278:
    // 0x4ad278: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x4ad278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_4ad27c:
    // 0x4ad27c: 0xc040180  jal         func_100600
label_4ad280:
    if (ctx->pc == 0x4AD280u) {
        ctx->pc = 0x4AD284u;
        goto label_4ad284;
    }
    ctx->pc = 0x4AD27Cu;
    SET_GPR_U32(ctx, 31, 0x4AD284u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD284u; }
        if (ctx->pc != 0x4AD284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD284u; }
        if (ctx->pc != 0x4AD284u) { return; }
    }
    ctx->pc = 0x4AD284u;
label_4ad284:
    // 0x4ad284: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4ad288:
    if (ctx->pc == 0x4AD288u) {
        ctx->pc = 0x4AD28Cu;
        goto label_4ad28c;
    }
    ctx->pc = 0x4AD284u;
    {
        const bool branch_taken_0x4ad284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad284) {
            ctx->pc = 0x4AD2BCu;
            goto label_4ad2bc;
        }
    }
    ctx->pc = 0x4AD28Cu;
label_4ad28c:
    // 0x4ad28c: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x4ad28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_4ad290:
    // 0x4ad290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ad290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ad294:
    // 0x4ad294: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4ad294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4ad298:
    // 0x4ad298: 0x262704f8  addiu       $a3, $s1, 0x4F8
    ctx->pc = 0x4ad298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1272));
label_4ad29c:
    // 0x4ad29c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ad29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ad2a0:
    // 0x4ad2a0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4ad2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4ad2a4:
    // 0x4ad2a4: 0x806911aa  lb          $t1, 0x11AA($v1)
    ctx->pc = 0x4ad2a4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_4ad2a8:
    // 0x4ad2a8: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x4ad2a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_4ad2ac:
    // 0x4ad2ac: 0x8c6a0d98  lw          $t2, 0xD98($v1)
    ctx->pc = 0x4ad2acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_4ad2b0:
    // 0x4ad2b0: 0x24084140  addiu       $t0, $zero, 0x4140
    ctx->pc = 0x4ad2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16704));
label_4ad2b4:
    // 0x4ad2b4: 0xc0b9404  jal         func_2E5010
label_4ad2b8:
    if (ctx->pc == 0x4AD2B8u) {
        ctx->pc = 0x4AD2B8u;
            // 0x4ad2b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD2BCu;
        goto label_4ad2bc;
    }
    ctx->pc = 0x4AD2B4u;
    SET_GPR_U32(ctx, 31, 0x4AD2BCu);
    ctx->pc = 0x4AD2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD2B4u;
            // 0x4ad2b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD2BCu; }
        if (ctx->pc != 0x4AD2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD2BCu; }
        if (ctx->pc != 0x4AD2BCu) { return; }
    }
    ctx->pc = 0x4AD2BCu;
label_4ad2bc:
    // 0x4ad2bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ad2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ad2c0:
    // 0x4ad2c0: 0x8c440e30  lw          $a0, 0xE30($v0)
    ctx->pc = 0x4ad2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
label_4ad2c4:
    // 0x4ad2c4: 0xc0d7644  jal         func_35D910
label_4ad2c8:
    if (ctx->pc == 0x4AD2C8u) {
        ctx->pc = 0x4AD2C8u;
            // 0x4ad2c8: 0x8e850084  lw          $a1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->pc = 0x4AD2CCu;
        goto label_4ad2cc;
    }
    ctx->pc = 0x4AD2C4u;
    SET_GPR_U32(ctx, 31, 0x4AD2CCu);
    ctx->pc = 0x4AD2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD2C4u;
            // 0x4ad2c8: 0x8e850084  lw          $a1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35D910u;
    if (runtime->hasFunction(0x35D910u)) {
        auto targetFn = runtime->lookupFunction(0x35D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD2CCu; }
        if (ctx->pc != 0x4AD2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035D910_0x35d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD2CCu; }
        if (ctx->pc != 0x4AD2CCu) { return; }
    }
    ctx->pc = 0x4AD2CCu;
label_4ad2cc:
    // 0x4ad2cc: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x4ad2ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_4ad2d0:
    // 0x4ad2d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4ad2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4ad2d4:
    // 0x4ad2d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4ad2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4ad2d8:
    // 0x4ad2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ad2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad2dc:
    // 0x4ad2dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4ad2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ad2e0:
    // 0x4ad2e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ad2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ad2e4:
    // 0x4ad2e4: 0xa245010e  sb          $a1, 0x10E($s2)
    ctx->pc = 0x4ad2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 270), (uint8_t)GPR_U32(ctx, 5));
label_4ad2e8:
    // 0x4ad2e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ad2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ad2ec:
    // 0x4ad2ec: 0xa240010d  sb          $zero, 0x10D($s2)
    ctx->pc = 0x4ad2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 269), (uint8_t)GPR_U32(ctx, 0));
label_4ad2f0:
    // 0x4ad2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ad2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ad2f4:
    // 0x4ad2f4: 0x8242010c  lb          $v0, 0x10C($s2)
    ctx->pc = 0x4ad2f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_4ad2f8:
    // 0x4ad2f8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4ad2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4ad2fc:
    // 0x4ad2fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ad2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ad300:
    // 0x4ad300: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4ad300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4ad304:
    // 0x4ad304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ad304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ad308:
    // 0x4ad308: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4ad308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4ad30c:
    // 0x4ad30c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4ad30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4ad310:
    // 0x4ad310: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4ad310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4ad314:
    // 0x4ad314: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x4ad314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4ad318:
    // 0x4ad318: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4ad318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4ad31c:
    // 0x4ad31c: 0x320f809  jalr        $t9
label_4ad320:
    if (ctx->pc == 0x4AD320u) {
        ctx->pc = 0x4AD320u;
            // 0x4ad320: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4AD324u;
        goto label_4ad324;
    }
    ctx->pc = 0x4AD31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AD324u);
        ctx->pc = 0x4AD320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD31Cu;
            // 0x4ad320: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AD324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AD324u; }
            if (ctx->pc != 0x4AD324u) { return; }
        }
        }
    }
    ctx->pc = 0x4AD324u;
label_4ad324:
    // 0x4ad324: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x4ad324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4ad328:
    // 0x4ad328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ad328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ad32c:
    // 0x4ad32c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4ad32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4ad330:
    // 0x4ad330: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4ad330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4ad334:
    // 0x4ad334: 0x320f809  jalr        $t9
label_4ad338:
    if (ctx->pc == 0x4AD338u) {
        ctx->pc = 0x4AD338u;
            // 0x4ad338: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AD33Cu;
        goto label_4ad33c;
    }
    ctx->pc = 0x4AD334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AD33Cu);
        ctx->pc = 0x4AD338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD334u;
            // 0x4ad338: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AD33Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AD33Cu; }
            if (ctx->pc != 0x4AD33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AD33Cu;
label_4ad33c:
    // 0x4ad33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad340:
    // 0x4ad340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ad340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ad344:
    // 0x4ad344: 0xa28200ac  sb          $v0, 0xAC($s4)
    ctx->pc = 0x4ad344u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 172), (uint8_t)GPR_U32(ctx, 2));
label_4ad348:
    // 0x4ad348: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x4ad348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_4ad34c:
    // 0x4ad34c: 0xc122d2c  jal         func_48B4B0
label_4ad350:
    if (ctx->pc == 0x4AD350u) {
        ctx->pc = 0x4AD350u;
            // 0x4ad350: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4AD354u;
        goto label_4ad354;
    }
    ctx->pc = 0x4AD34Cu;
    SET_GPR_U32(ctx, 31, 0x4AD354u);
    ctx->pc = 0x4AD350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD34Cu;
            // 0x4ad350: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD354u; }
        if (ctx->pc != 0x4AD354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD354u; }
        if (ctx->pc != 0x4AD354u) { return; }
    }
    ctx->pc = 0x4AD354u;
label_4ad354:
    // 0x4ad354: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4ad354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ad358:
    // 0x4ad358: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ad358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ad35c:
    // 0x4ad35c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ad35cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ad360:
    // 0x4ad360: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ad360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ad364:
    // 0x4ad364: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ad364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ad368:
    // 0x4ad368: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ad368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ad36c:
    // 0x4ad36c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ad36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ad370:
    // 0x4ad370: 0x3e00008  jr          $ra
label_4ad374:
    if (ctx->pc == 0x4AD374u) {
        ctx->pc = 0x4AD374u;
            // 0x4ad374: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4AD378u;
        goto label_4ad378;
    }
    ctx->pc = 0x4AD370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD370u;
            // 0x4ad374: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD378u;
label_4ad378:
    // 0x4ad378: 0x0  nop
    ctx->pc = 0x4ad378u;
    // NOP
label_4ad37c:
    // 0x4ad37c: 0x0  nop
    ctx->pc = 0x4ad37cu;
    // NOP
}
