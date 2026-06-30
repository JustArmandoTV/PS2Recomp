#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EEFE0
// Address: 0x3eefe0 - 0x3ef440
void sub_003EEFE0_0x3eefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEFE0_0x3eefe0");
#endif

    switch (ctx->pc) {
        case 0x3eefe0u: goto label_3eefe0;
        case 0x3eefe4u: goto label_3eefe4;
        case 0x3eefe8u: goto label_3eefe8;
        case 0x3eefecu: goto label_3eefec;
        case 0x3eeff0u: goto label_3eeff0;
        case 0x3eeff4u: goto label_3eeff4;
        case 0x3eeff8u: goto label_3eeff8;
        case 0x3eeffcu: goto label_3eeffc;
        case 0x3ef000u: goto label_3ef000;
        case 0x3ef004u: goto label_3ef004;
        case 0x3ef008u: goto label_3ef008;
        case 0x3ef00cu: goto label_3ef00c;
        case 0x3ef010u: goto label_3ef010;
        case 0x3ef014u: goto label_3ef014;
        case 0x3ef018u: goto label_3ef018;
        case 0x3ef01cu: goto label_3ef01c;
        case 0x3ef020u: goto label_3ef020;
        case 0x3ef024u: goto label_3ef024;
        case 0x3ef028u: goto label_3ef028;
        case 0x3ef02cu: goto label_3ef02c;
        case 0x3ef030u: goto label_3ef030;
        case 0x3ef034u: goto label_3ef034;
        case 0x3ef038u: goto label_3ef038;
        case 0x3ef03cu: goto label_3ef03c;
        case 0x3ef040u: goto label_3ef040;
        case 0x3ef044u: goto label_3ef044;
        case 0x3ef048u: goto label_3ef048;
        case 0x3ef04cu: goto label_3ef04c;
        case 0x3ef050u: goto label_3ef050;
        case 0x3ef054u: goto label_3ef054;
        case 0x3ef058u: goto label_3ef058;
        case 0x3ef05cu: goto label_3ef05c;
        case 0x3ef060u: goto label_3ef060;
        case 0x3ef064u: goto label_3ef064;
        case 0x3ef068u: goto label_3ef068;
        case 0x3ef06cu: goto label_3ef06c;
        case 0x3ef070u: goto label_3ef070;
        case 0x3ef074u: goto label_3ef074;
        case 0x3ef078u: goto label_3ef078;
        case 0x3ef07cu: goto label_3ef07c;
        case 0x3ef080u: goto label_3ef080;
        case 0x3ef084u: goto label_3ef084;
        case 0x3ef088u: goto label_3ef088;
        case 0x3ef08cu: goto label_3ef08c;
        case 0x3ef090u: goto label_3ef090;
        case 0x3ef094u: goto label_3ef094;
        case 0x3ef098u: goto label_3ef098;
        case 0x3ef09cu: goto label_3ef09c;
        case 0x3ef0a0u: goto label_3ef0a0;
        case 0x3ef0a4u: goto label_3ef0a4;
        case 0x3ef0a8u: goto label_3ef0a8;
        case 0x3ef0acu: goto label_3ef0ac;
        case 0x3ef0b0u: goto label_3ef0b0;
        case 0x3ef0b4u: goto label_3ef0b4;
        case 0x3ef0b8u: goto label_3ef0b8;
        case 0x3ef0bcu: goto label_3ef0bc;
        case 0x3ef0c0u: goto label_3ef0c0;
        case 0x3ef0c4u: goto label_3ef0c4;
        case 0x3ef0c8u: goto label_3ef0c8;
        case 0x3ef0ccu: goto label_3ef0cc;
        case 0x3ef0d0u: goto label_3ef0d0;
        case 0x3ef0d4u: goto label_3ef0d4;
        case 0x3ef0d8u: goto label_3ef0d8;
        case 0x3ef0dcu: goto label_3ef0dc;
        case 0x3ef0e0u: goto label_3ef0e0;
        case 0x3ef0e4u: goto label_3ef0e4;
        case 0x3ef0e8u: goto label_3ef0e8;
        case 0x3ef0ecu: goto label_3ef0ec;
        case 0x3ef0f0u: goto label_3ef0f0;
        case 0x3ef0f4u: goto label_3ef0f4;
        case 0x3ef0f8u: goto label_3ef0f8;
        case 0x3ef0fcu: goto label_3ef0fc;
        case 0x3ef100u: goto label_3ef100;
        case 0x3ef104u: goto label_3ef104;
        case 0x3ef108u: goto label_3ef108;
        case 0x3ef10cu: goto label_3ef10c;
        case 0x3ef110u: goto label_3ef110;
        case 0x3ef114u: goto label_3ef114;
        case 0x3ef118u: goto label_3ef118;
        case 0x3ef11cu: goto label_3ef11c;
        case 0x3ef120u: goto label_3ef120;
        case 0x3ef124u: goto label_3ef124;
        case 0x3ef128u: goto label_3ef128;
        case 0x3ef12cu: goto label_3ef12c;
        case 0x3ef130u: goto label_3ef130;
        case 0x3ef134u: goto label_3ef134;
        case 0x3ef138u: goto label_3ef138;
        case 0x3ef13cu: goto label_3ef13c;
        case 0x3ef140u: goto label_3ef140;
        case 0x3ef144u: goto label_3ef144;
        case 0x3ef148u: goto label_3ef148;
        case 0x3ef14cu: goto label_3ef14c;
        case 0x3ef150u: goto label_3ef150;
        case 0x3ef154u: goto label_3ef154;
        case 0x3ef158u: goto label_3ef158;
        case 0x3ef15cu: goto label_3ef15c;
        case 0x3ef160u: goto label_3ef160;
        case 0x3ef164u: goto label_3ef164;
        case 0x3ef168u: goto label_3ef168;
        case 0x3ef16cu: goto label_3ef16c;
        case 0x3ef170u: goto label_3ef170;
        case 0x3ef174u: goto label_3ef174;
        case 0x3ef178u: goto label_3ef178;
        case 0x3ef17cu: goto label_3ef17c;
        case 0x3ef180u: goto label_3ef180;
        case 0x3ef184u: goto label_3ef184;
        case 0x3ef188u: goto label_3ef188;
        case 0x3ef18cu: goto label_3ef18c;
        case 0x3ef190u: goto label_3ef190;
        case 0x3ef194u: goto label_3ef194;
        case 0x3ef198u: goto label_3ef198;
        case 0x3ef19cu: goto label_3ef19c;
        case 0x3ef1a0u: goto label_3ef1a0;
        case 0x3ef1a4u: goto label_3ef1a4;
        case 0x3ef1a8u: goto label_3ef1a8;
        case 0x3ef1acu: goto label_3ef1ac;
        case 0x3ef1b0u: goto label_3ef1b0;
        case 0x3ef1b4u: goto label_3ef1b4;
        case 0x3ef1b8u: goto label_3ef1b8;
        case 0x3ef1bcu: goto label_3ef1bc;
        case 0x3ef1c0u: goto label_3ef1c0;
        case 0x3ef1c4u: goto label_3ef1c4;
        case 0x3ef1c8u: goto label_3ef1c8;
        case 0x3ef1ccu: goto label_3ef1cc;
        case 0x3ef1d0u: goto label_3ef1d0;
        case 0x3ef1d4u: goto label_3ef1d4;
        case 0x3ef1d8u: goto label_3ef1d8;
        case 0x3ef1dcu: goto label_3ef1dc;
        case 0x3ef1e0u: goto label_3ef1e0;
        case 0x3ef1e4u: goto label_3ef1e4;
        case 0x3ef1e8u: goto label_3ef1e8;
        case 0x3ef1ecu: goto label_3ef1ec;
        case 0x3ef1f0u: goto label_3ef1f0;
        case 0x3ef1f4u: goto label_3ef1f4;
        case 0x3ef1f8u: goto label_3ef1f8;
        case 0x3ef1fcu: goto label_3ef1fc;
        case 0x3ef200u: goto label_3ef200;
        case 0x3ef204u: goto label_3ef204;
        case 0x3ef208u: goto label_3ef208;
        case 0x3ef20cu: goto label_3ef20c;
        case 0x3ef210u: goto label_3ef210;
        case 0x3ef214u: goto label_3ef214;
        case 0x3ef218u: goto label_3ef218;
        case 0x3ef21cu: goto label_3ef21c;
        case 0x3ef220u: goto label_3ef220;
        case 0x3ef224u: goto label_3ef224;
        case 0x3ef228u: goto label_3ef228;
        case 0x3ef22cu: goto label_3ef22c;
        case 0x3ef230u: goto label_3ef230;
        case 0x3ef234u: goto label_3ef234;
        case 0x3ef238u: goto label_3ef238;
        case 0x3ef23cu: goto label_3ef23c;
        case 0x3ef240u: goto label_3ef240;
        case 0x3ef244u: goto label_3ef244;
        case 0x3ef248u: goto label_3ef248;
        case 0x3ef24cu: goto label_3ef24c;
        case 0x3ef250u: goto label_3ef250;
        case 0x3ef254u: goto label_3ef254;
        case 0x3ef258u: goto label_3ef258;
        case 0x3ef25cu: goto label_3ef25c;
        case 0x3ef260u: goto label_3ef260;
        case 0x3ef264u: goto label_3ef264;
        case 0x3ef268u: goto label_3ef268;
        case 0x3ef26cu: goto label_3ef26c;
        case 0x3ef270u: goto label_3ef270;
        case 0x3ef274u: goto label_3ef274;
        case 0x3ef278u: goto label_3ef278;
        case 0x3ef27cu: goto label_3ef27c;
        case 0x3ef280u: goto label_3ef280;
        case 0x3ef284u: goto label_3ef284;
        case 0x3ef288u: goto label_3ef288;
        case 0x3ef28cu: goto label_3ef28c;
        case 0x3ef290u: goto label_3ef290;
        case 0x3ef294u: goto label_3ef294;
        case 0x3ef298u: goto label_3ef298;
        case 0x3ef29cu: goto label_3ef29c;
        case 0x3ef2a0u: goto label_3ef2a0;
        case 0x3ef2a4u: goto label_3ef2a4;
        case 0x3ef2a8u: goto label_3ef2a8;
        case 0x3ef2acu: goto label_3ef2ac;
        case 0x3ef2b0u: goto label_3ef2b0;
        case 0x3ef2b4u: goto label_3ef2b4;
        case 0x3ef2b8u: goto label_3ef2b8;
        case 0x3ef2bcu: goto label_3ef2bc;
        case 0x3ef2c0u: goto label_3ef2c0;
        case 0x3ef2c4u: goto label_3ef2c4;
        case 0x3ef2c8u: goto label_3ef2c8;
        case 0x3ef2ccu: goto label_3ef2cc;
        case 0x3ef2d0u: goto label_3ef2d0;
        case 0x3ef2d4u: goto label_3ef2d4;
        case 0x3ef2d8u: goto label_3ef2d8;
        case 0x3ef2dcu: goto label_3ef2dc;
        case 0x3ef2e0u: goto label_3ef2e0;
        case 0x3ef2e4u: goto label_3ef2e4;
        case 0x3ef2e8u: goto label_3ef2e8;
        case 0x3ef2ecu: goto label_3ef2ec;
        case 0x3ef2f0u: goto label_3ef2f0;
        case 0x3ef2f4u: goto label_3ef2f4;
        case 0x3ef2f8u: goto label_3ef2f8;
        case 0x3ef2fcu: goto label_3ef2fc;
        case 0x3ef300u: goto label_3ef300;
        case 0x3ef304u: goto label_3ef304;
        case 0x3ef308u: goto label_3ef308;
        case 0x3ef30cu: goto label_3ef30c;
        case 0x3ef310u: goto label_3ef310;
        case 0x3ef314u: goto label_3ef314;
        case 0x3ef318u: goto label_3ef318;
        case 0x3ef31cu: goto label_3ef31c;
        case 0x3ef320u: goto label_3ef320;
        case 0x3ef324u: goto label_3ef324;
        case 0x3ef328u: goto label_3ef328;
        case 0x3ef32cu: goto label_3ef32c;
        case 0x3ef330u: goto label_3ef330;
        case 0x3ef334u: goto label_3ef334;
        case 0x3ef338u: goto label_3ef338;
        case 0x3ef33cu: goto label_3ef33c;
        case 0x3ef340u: goto label_3ef340;
        case 0x3ef344u: goto label_3ef344;
        case 0x3ef348u: goto label_3ef348;
        case 0x3ef34cu: goto label_3ef34c;
        case 0x3ef350u: goto label_3ef350;
        case 0x3ef354u: goto label_3ef354;
        case 0x3ef358u: goto label_3ef358;
        case 0x3ef35cu: goto label_3ef35c;
        case 0x3ef360u: goto label_3ef360;
        case 0x3ef364u: goto label_3ef364;
        case 0x3ef368u: goto label_3ef368;
        case 0x3ef36cu: goto label_3ef36c;
        case 0x3ef370u: goto label_3ef370;
        case 0x3ef374u: goto label_3ef374;
        case 0x3ef378u: goto label_3ef378;
        case 0x3ef37cu: goto label_3ef37c;
        case 0x3ef380u: goto label_3ef380;
        case 0x3ef384u: goto label_3ef384;
        case 0x3ef388u: goto label_3ef388;
        case 0x3ef38cu: goto label_3ef38c;
        case 0x3ef390u: goto label_3ef390;
        case 0x3ef394u: goto label_3ef394;
        case 0x3ef398u: goto label_3ef398;
        case 0x3ef39cu: goto label_3ef39c;
        case 0x3ef3a0u: goto label_3ef3a0;
        case 0x3ef3a4u: goto label_3ef3a4;
        case 0x3ef3a8u: goto label_3ef3a8;
        case 0x3ef3acu: goto label_3ef3ac;
        case 0x3ef3b0u: goto label_3ef3b0;
        case 0x3ef3b4u: goto label_3ef3b4;
        case 0x3ef3b8u: goto label_3ef3b8;
        case 0x3ef3bcu: goto label_3ef3bc;
        case 0x3ef3c0u: goto label_3ef3c0;
        case 0x3ef3c4u: goto label_3ef3c4;
        case 0x3ef3c8u: goto label_3ef3c8;
        case 0x3ef3ccu: goto label_3ef3cc;
        case 0x3ef3d0u: goto label_3ef3d0;
        case 0x3ef3d4u: goto label_3ef3d4;
        case 0x3ef3d8u: goto label_3ef3d8;
        case 0x3ef3dcu: goto label_3ef3dc;
        case 0x3ef3e0u: goto label_3ef3e0;
        case 0x3ef3e4u: goto label_3ef3e4;
        case 0x3ef3e8u: goto label_3ef3e8;
        case 0x3ef3ecu: goto label_3ef3ec;
        case 0x3ef3f0u: goto label_3ef3f0;
        case 0x3ef3f4u: goto label_3ef3f4;
        case 0x3ef3f8u: goto label_3ef3f8;
        case 0x3ef3fcu: goto label_3ef3fc;
        case 0x3ef400u: goto label_3ef400;
        case 0x3ef404u: goto label_3ef404;
        case 0x3ef408u: goto label_3ef408;
        case 0x3ef40cu: goto label_3ef40c;
        case 0x3ef410u: goto label_3ef410;
        case 0x3ef414u: goto label_3ef414;
        case 0x3ef418u: goto label_3ef418;
        case 0x3ef41cu: goto label_3ef41c;
        case 0x3ef420u: goto label_3ef420;
        case 0x3ef424u: goto label_3ef424;
        case 0x3ef428u: goto label_3ef428;
        case 0x3ef42cu: goto label_3ef42c;
        case 0x3ef430u: goto label_3ef430;
        case 0x3ef434u: goto label_3ef434;
        case 0x3ef438u: goto label_3ef438;
        case 0x3ef43cu: goto label_3ef43c;
        default: break;
    }

    ctx->pc = 0x3eefe0u;

label_3eefe0:
    // 0x3eefe0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3eefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eefe4:
    // 0x3eefe4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3eefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3eefe8:
    // 0x3eefe8: 0x3e00008  jr          $ra
label_3eefec:
    if (ctx->pc == 0x3EEFECu) {
        ctx->pc = 0x3EEFECu;
            // 0x3eefec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3EEFF0u;
        goto label_3eeff0;
    }
    ctx->pc = 0x3EEFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEFE8u;
            // 0x3eefec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EEFF0u;
label_3eeff0:
    // 0x3eeff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3eeff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3eeff4:
    // 0x3eeff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3eeff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3eeff8:
    // 0x3eeff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3eeff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3eeffc:
    // 0x3eeffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3eeffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ef000:
    // 0x3ef000: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ef000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef004:
    // 0x3ef004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ef004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ef008:
    // 0x3ef008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ef00c:
    // 0x3ef00c: 0xc0be258  jal         func_2F8960
label_3ef010:
    if (ctx->pc == 0x3EF010u) {
        ctx->pc = 0x3EF010u;
            // 0x3ef010: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x3EF014u;
        goto label_3ef014;
    }
    ctx->pc = 0x3EF00Cu;
    SET_GPR_U32(ctx, 31, 0x3EF014u);
    ctx->pc = 0x3EF010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF00Cu;
            // 0x3ef010: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF014u; }
        if (ctx->pc != 0x3EF014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF014u; }
        if (ctx->pc != 0x3EF014u) { return; }
    }
    ctx->pc = 0x3EF014u;
label_3ef014:
    // 0x3ef014: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ef014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef018:
    // 0x3ef018: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x3ef018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
label_3ef01c:
    // 0x3ef01c: 0x8e710550  lw          $s1, 0x550($s3)
    ctx->pc = 0x3ef01cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
label_3ef020:
    // 0x3ef020: 0x344338e4  ori         $v1, $v0, 0x38E4
    ctx->pc = 0x3ef020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_3ef024:
    // 0x3ef024: 0x8e6211d4  lw          $v0, 0x11D4($s3)
    ctx->pc = 0x3ef024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
label_3ef028:
    // 0x3ef028: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ef028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ef02c:
    // 0x3ef02c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3ef02cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ef030:
    // 0x3ef030: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_3ef034:
    if (ctx->pc == 0x3EF034u) {
        ctx->pc = 0x3EF034u;
            // 0x3ef034: 0x8e700d60  lw          $s0, 0xD60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
        ctx->pc = 0x3EF038u;
        goto label_3ef038;
    }
    ctx->pc = 0x3EF030u;
    {
        const bool branch_taken_0x3ef030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF030u;
            // 0x3ef034: 0x8e700d60  lw          $s0, 0xD60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef030) {
            ctx->pc = 0x3EF03Cu;
            goto label_3ef03c;
        }
    }
    ctx->pc = 0x3EF038u;
label_3ef038:
    // 0x3ef038: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ef038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ef03c:
    // 0x3ef03c: 0x8223010f  lb          $v1, 0x10F($s1)
    ctx->pc = 0x3ef03cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 271)));
label_3ef040:
    // 0x3ef040: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x3ef040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_3ef044:
    // 0x3ef044: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_3ef048:
    if (ctx->pc == 0x3EF048u) {
        ctx->pc = 0x3EF048u;
            // 0x3ef048: 0xc6600de4  lwc1        $f0, 0xDE4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3EF04Cu;
        goto label_3ef04c;
    }
    ctx->pc = 0x3EF044u;
    {
        const bool branch_taken_0x3ef044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ef044) {
            ctx->pc = 0x3EF048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF044u;
            // 0x3ef048: 0xc6600de4  lwc1        $f0, 0xDE4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF070u;
            goto label_3ef070;
        }
    }
    ctx->pc = 0x3EF04Cu;
label_3ef04c:
    // 0x3ef04c: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x3ef04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_3ef050:
    // 0x3ef050: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_3ef054:
    if (ctx->pc == 0x3EF054u) {
        ctx->pc = 0x3EF058u;
        goto label_3ef058;
    }
    ctx->pc = 0x3EF050u;
    {
        const bool branch_taken_0x3ef050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ef050) {
            ctx->pc = 0x3EF06Cu;
            goto label_3ef06c;
        }
    }
    ctx->pc = 0x3EF058u;
label_3ef058:
    // 0x3ef058: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3ef05c:
    if (ctx->pc == 0x3EF05Cu) {
        ctx->pc = 0x3EF060u;
        goto label_3ef060;
    }
    ctx->pc = 0x3EF058u;
    {
        const bool branch_taken_0x3ef058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef058) {
            ctx->pc = 0x3EF06Cu;
            goto label_3ef06c;
        }
    }
    ctx->pc = 0x3EF060u;
label_3ef060:
    // 0x3ef060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ef060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ef064:
    // 0x3ef064: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
label_3ef068:
    if (ctx->pc == 0x3EF068u) {
        ctx->pc = 0x3EF068u;
            // 0x3ef068: 0x8e640d74  lw          $a0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->pc = 0x3EF06Cu;
        goto label_3ef06c;
    }
    ctx->pc = 0x3EF064u;
    {
        const bool branch_taken_0x3ef064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef064) {
            ctx->pc = 0x3EF068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF064u;
            // 0x3ef068: 0x8e640d74  lw          $a0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF0E4u;
            goto label_3ef0e4;
        }
    }
    ctx->pc = 0x3EF06Cu;
label_3ef06c:
    // 0x3ef06c: 0xc6600de4  lwc1        $f0, 0xDE4($s3)
    ctx->pc = 0x3ef06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ef070:
    // 0x3ef070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ef070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ef074:
    // 0x3ef074: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_3ef078:
    if (ctx->pc == 0x3EF078u) {
        ctx->pc = 0x3EF07Cu;
        goto label_3ef07c;
    }
    ctx->pc = 0x3EF074u;
    {
        const bool branch_taken_0x3ef074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ef074) {
            ctx->pc = 0x3EF0E0u;
            goto label_3ef0e0;
        }
    }
    ctx->pc = 0x3EF07Cu;
label_3ef07c:
    // 0x3ef07c: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x3ef07cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_3ef080:
    // 0x3ef080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ef080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ef084:
    // 0x3ef084: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3ef084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3ef088:
    // 0x3ef088: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3ef088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ef08c:
    // 0x3ef08c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3ef08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ef090:
    // 0x3ef090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ef090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef094:
    // 0x3ef094: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3ef094u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3ef098:
    // 0x3ef098: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x3ef098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_3ef09c:
    // 0x3ef09c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3ef09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3ef0a0:
    // 0x3ef0a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ef0a4:
    // 0x3ef0a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ef0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ef0a8:
    // 0x3ef0a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3ef0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3ef0ac:
    // 0x3ef0ac: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3ef0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3ef0b0:
    // 0x3ef0b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3ef0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ef0b4:
    // 0x3ef0b4: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3ef0b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3ef0b8:
    // 0x3ef0b8: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x3ef0b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_3ef0bc:
    // 0x3ef0bc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3ef0bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3ef0c0:
    // 0x3ef0c0: 0x320f809  jalr        $t9
label_3ef0c4:
    if (ctx->pc == 0x3EF0C4u) {
        ctx->pc = 0x3EF0C4u;
            // 0x3ef0c4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3EF0C8u;
        goto label_3ef0c8;
    }
    ctx->pc = 0x3EF0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF0C8u);
        ctx->pc = 0x3EF0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF0C0u;
            // 0x3ef0c4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF0C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF0C8u; }
            if (ctx->pc != 0x3EF0C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF0C8u;
label_3ef0c8:
    // 0x3ef0c8: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3ef0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3ef0cc:
    // 0x3ef0cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ef0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ef0d0:
    // 0x3ef0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ef0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef0d4:
    // 0x3ef0d4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3ef0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3ef0d8:
    // 0x3ef0d8: 0x320f809  jalr        $t9
label_3ef0dc:
    if (ctx->pc == 0x3EF0DCu) {
        ctx->pc = 0x3EF0DCu;
            // 0x3ef0dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF0E0u;
        goto label_3ef0e0;
    }
    ctx->pc = 0x3EF0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF0E0u);
        ctx->pc = 0x3EF0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF0D8u;
            // 0x3ef0dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF0E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF0E0u; }
            if (ctx->pc != 0x3EF0E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF0E0u;
label_3ef0e0:
    // 0x3ef0e0: 0x8e640d74  lw          $a0, 0xD74($s3)
    ctx->pc = 0x3ef0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_3ef0e4:
    // 0x3ef0e4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3ef0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ef0e8:
    // 0x3ef0e8: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x3ef0e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_3ef0ec:
    // 0x3ef0ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ef0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ef0f0:
    // 0x3ef0f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3ef0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ef0f4:
    // 0x3ef0f4: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x3ef0f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_3ef0f8:
    // 0x3ef0f8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3ef0fc:
    if (ctx->pc == 0x3EF0FCu) {
        ctx->pc = 0x3EF0FCu;
            // 0x3ef0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF100u;
        goto label_3ef100;
    }
    ctx->pc = 0x3EF0F8u;
    {
        const bool branch_taken_0x3ef0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef0f8) {
            ctx->pc = 0x3EF0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF0F8u;
            // 0x3ef0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF110u;
            goto label_3ef110;
        }
    }
    ctx->pc = 0x3EF100u;
label_3ef100:
    // 0x3ef100: 0xc0c1334  jal         func_304CD0
label_3ef104:
    if (ctx->pc == 0x3EF104u) {
        ctx->pc = 0x3EF104u;
            // 0x3ef104: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF108u;
        goto label_3ef108;
    }
    ctx->pc = 0x3EF100u;
    SET_GPR_U32(ctx, 31, 0x3EF108u);
    ctx->pc = 0x3EF104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF100u;
            // 0x3ef104: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304CD0u;
    if (runtime->hasFunction(0x304CD0u)) {
        auto targetFn = runtime->lookupFunction(0x304CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF108u; }
        if (ctx->pc != 0x3EF108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304CD0_0x304cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF108u; }
        if (ctx->pc != 0x3EF108u) { return; }
    }
    ctx->pc = 0x3EF108u;
label_3ef108:
    // 0x3ef108: 0x10000024  b           . + 4 + (0x24 << 2)
label_3ef10c:
    if (ctx->pc == 0x3EF10Cu) {
        ctx->pc = 0x3EF10Cu;
            // 0x3ef10c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3EF110u;
        goto label_3ef110;
    }
    ctx->pc = 0x3EF108u;
    {
        const bool branch_taken_0x3ef108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF108u;
            // 0x3ef10c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef108) {
            ctx->pc = 0x3EF19Cu;
            goto label_3ef19c;
        }
    }
    ctx->pc = 0x3EF110u;
label_3ef110:
    // 0x3ef110: 0xc102a18  jal         func_40A860
label_3ef114:
    if (ctx->pc == 0x3EF114u) {
        ctx->pc = 0x3EF118u;
        goto label_3ef118;
    }
    ctx->pc = 0x3EF110u;
    SET_GPR_U32(ctx, 31, 0x3EF118u);
    ctx->pc = 0x40A860u;
    if (runtime->hasFunction(0x40A860u)) {
        auto targetFn = runtime->lookupFunction(0x40A860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF118u; }
        if (ctx->pc != 0x3EF118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040A860_0x40a860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF118u; }
        if (ctx->pc != 0x3EF118u) { return; }
    }
    ctx->pc = 0x3EF118u;
label_3ef118:
    // 0x3ef118: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3ef118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ef11c:
    // 0x3ef11c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ef11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3ef120:
    // 0x3ef120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ef120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ef124:
    // 0x3ef124: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x3ef124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_3ef128:
    // 0x3ef128: 0x320f809  jalr        $t9
label_3ef12c:
    if (ctx->pc == 0x3EF12Cu) {
        ctx->pc = 0x3EF12Cu;
            // 0x3ef12c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF130u;
        goto label_3ef130;
    }
    ctx->pc = 0x3EF128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF130u);
        ctx->pc = 0x3EF12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF128u;
            // 0x3ef12c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF130u; }
            if (ctx->pc != 0x3EF130u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF130u;
label_3ef130:
    // 0x3ef130: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ef130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ef134:
    // 0x3ef134: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3ef134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_3ef138:
    // 0x3ef138: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3ef13c:
    if (ctx->pc == 0x3EF13Cu) {
        ctx->pc = 0x3EF13Cu;
            // 0x3ef13c: 0x8e630d60  lw          $v1, 0xD60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
        ctx->pc = 0x3EF140u;
        goto label_3ef140;
    }
    ctx->pc = 0x3EF138u;
    {
        const bool branch_taken_0x3ef138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef138) {
            ctx->pc = 0x3EF13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF138u;
            // 0x3ef13c: 0x8e630d60  lw          $v1, 0xD60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF150u;
            goto label_3ef150;
        }
    }
    ctx->pc = 0x3EF140u;
label_3ef140:
    // 0x3ef140: 0xc0c1298  jal         func_304A60
label_3ef144:
    if (ctx->pc == 0x3EF144u) {
        ctx->pc = 0x3EF144u;
            // 0x3ef144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF148u;
        goto label_3ef148;
    }
    ctx->pc = 0x3EF140u;
    SET_GPR_U32(ctx, 31, 0x3EF148u);
    ctx->pc = 0x3EF144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF140u;
            // 0x3ef144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304A60u;
    if (runtime->hasFunction(0x304A60u)) {
        auto targetFn = runtime->lookupFunction(0x304A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF148u; }
        if (ctx->pc != 0x3EF148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304A60_0x304a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF148u; }
        if (ctx->pc != 0x3EF148u) { return; }
    }
    ctx->pc = 0x3EF148u;
label_3ef148:
    // 0x3ef148: 0x10000013  b           . + 4 + (0x13 << 2)
label_3ef14c:
    if (ctx->pc == 0x3EF14Cu) {
        ctx->pc = 0x3EF150u;
        goto label_3ef150;
    }
    ctx->pc = 0x3EF148u;
    {
        const bool branch_taken_0x3ef148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef148) {
            ctx->pc = 0x3EF198u;
            goto label_3ef198;
        }
    }
    ctx->pc = 0x3EF150u;
label_3ef150:
    // 0x3ef150: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ef150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ef154:
    // 0x3ef154: 0x8c42fa40  lw          $v0, -0x5C0($v0)
    ctx->pc = 0x3ef154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965824)));
label_3ef158:
    // 0x3ef158: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ef158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ef15c:
    // 0x3ef15c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ef15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ef160:
    // 0x3ef160: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3ef164:
    if (ctx->pc == 0x3EF164u) {
        ctx->pc = 0x3EF164u;
            // 0x3ef164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF168u;
        goto label_3ef168;
    }
    ctx->pc = 0x3EF160u;
    {
        const bool branch_taken_0x3ef160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef160) {
            ctx->pc = 0x3EF164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF160u;
            // 0x3ef164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF180u;
            goto label_3ef180;
        }
    }
    ctx->pc = 0x3EF168u;
label_3ef168:
    // 0x3ef168: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3ef168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ef16c:
    // 0x3ef16c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ef16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef170:
    // 0x3ef170: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3ef170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3ef174:
    // 0x3ef174: 0x320f809  jalr        $t9
label_3ef178:
    if (ctx->pc == 0x3EF178u) {
        ctx->pc = 0x3EF178u;
            // 0x3ef178: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3EF17Cu;
        goto label_3ef17c;
    }
    ctx->pc = 0x3EF174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF17Cu);
        ctx->pc = 0x3EF178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF174u;
            // 0x3ef178: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF17Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF17Cu; }
            if (ctx->pc != 0x3EF17Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3EF17Cu;
label_3ef17c:
    // 0x3ef17c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ef17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef180:
    // 0x3ef180: 0xc0c14cc  jal         func_305330
label_3ef184:
    if (ctx->pc == 0x3EF184u) {
        ctx->pc = 0x3EF188u;
        goto label_3ef188;
    }
    ctx->pc = 0x3EF180u;
    SET_GPR_U32(ctx, 31, 0x3EF188u);
    ctx->pc = 0x305330u;
    if (runtime->hasFunction(0x305330u)) {
        auto targetFn = runtime->lookupFunction(0x305330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF188u; }
        if (ctx->pc != 0x3EF188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305330_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF188u; }
        if (ctx->pc != 0x3EF188u) { return; }
    }
    ctx->pc = 0x3EF188u;
label_3ef188:
    // 0x3ef188: 0xc0c144c  jal         func_305130
label_3ef18c:
    if (ctx->pc == 0x3EF18Cu) {
        ctx->pc = 0x3EF18Cu;
            // 0x3ef18c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF190u;
        goto label_3ef190;
    }
    ctx->pc = 0x3EF188u;
    SET_GPR_U32(ctx, 31, 0x3EF190u);
    ctx->pc = 0x3EF18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF188u;
            // 0x3ef18c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305130u;
    if (runtime->hasFunction(0x305130u)) {
        auto targetFn = runtime->lookupFunction(0x305130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF190u; }
        if (ctx->pc != 0x3EF190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305130_0x305130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF190u; }
        if (ctx->pc != 0x3EF190u) { return; }
    }
    ctx->pc = 0x3EF190u;
label_3ef190:
    // 0x3ef190: 0xc0c13c8  jal         func_304F20
label_3ef194:
    if (ctx->pc == 0x3EF194u) {
        ctx->pc = 0x3EF194u;
            // 0x3ef194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF198u;
        goto label_3ef198;
    }
    ctx->pc = 0x3EF190u;
    SET_GPR_U32(ctx, 31, 0x3EF198u);
    ctx->pc = 0x3EF194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF190u;
            // 0x3ef194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304F20u;
    if (runtime->hasFunction(0x304F20u)) {
        auto targetFn = runtime->lookupFunction(0x304F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF198u; }
        if (ctx->pc != 0x3EF198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304F20_0x304f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF198u; }
        if (ctx->pc != 0x3EF198u) { return; }
    }
    ctx->pc = 0x3EF198u;
label_3ef198:
    // 0x3ef198: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ef198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ef19c:
    // 0x3ef19c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ef19cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ef1a0:
    // 0x3ef1a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ef1a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef1a4:
    // 0x3ef1a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ef1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef1a8:
    // 0x3ef1a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef1ac:
    // 0x3ef1ac: 0x3e00008  jr          $ra
label_3ef1b0:
    if (ctx->pc == 0x3EF1B0u) {
        ctx->pc = 0x3EF1B0u;
            // 0x3ef1b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3EF1B4u;
        goto label_3ef1b4;
    }
    ctx->pc = 0x3EF1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF1ACu;
            // 0x3ef1b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EF1B4u;
label_3ef1b4:
    // 0x3ef1b4: 0x0  nop
    ctx->pc = 0x3ef1b4u;
    // NOP
label_3ef1b8:
    // 0x3ef1b8: 0x0  nop
    ctx->pc = 0x3ef1b8u;
    // NOP
label_3ef1bc:
    // 0x3ef1bc: 0x0  nop
    ctx->pc = 0x3ef1bcu;
    // NOP
label_3ef1c0:
    // 0x3ef1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ef1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ef1c4:
    // 0x3ef1c4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ef1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ef1c8:
    // 0x3ef1c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ef1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ef1cc:
    // 0x3ef1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ef1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ef1d0:
    // 0x3ef1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ef1d4:
    // 0x3ef1d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef1d8:
    // 0x3ef1d8: 0xc441fa38  lwc1        $f1, -0x5C8($v0)
    ctx->pc = 0x3ef1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ef1dc:
    // 0x3ef1dc: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x3ef1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3ef1e0:
    // 0x3ef1e0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3ef1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3ef1e4:
    // 0x3ef1e4: 0xc440fa3c  lwc1        $f0, -0x5C4($v0)
    ctx->pc = 0x3ef1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ef1e8:
    // 0x3ef1e8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3ef1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3ef1ec:
    // 0x3ef1ec: 0xc0c15dc  jal         func_305770
label_3ef1f0:
    if (ctx->pc == 0x3EF1F0u) {
        ctx->pc = 0x3EF1F0u;
            // 0x3ef1f0: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3EF1F4u;
        goto label_3ef1f4;
    }
    ctx->pc = 0x3EF1ECu;
    SET_GPR_U32(ctx, 31, 0x3EF1F4u);
    ctx->pc = 0x3EF1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF1ECu;
            // 0x3ef1f0: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF1F4u; }
        if (ctx->pc != 0x3EF1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF1F4u; }
        if (ctx->pc != 0x3EF1F4u) { return; }
    }
    ctx->pc = 0x3EF1F4u;
label_3ef1f4:
    // 0x3ef1f4: 0x8e2211d4  lw          $v0, 0x11D4($s1)
    ctx->pc = 0x3ef1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_3ef1f8:
    // 0x3ef1f8: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x3ef1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
label_3ef1fc:
    // 0x3ef1fc: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x3ef1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_3ef200:
    // 0x3ef200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ef200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ef204:
    // 0x3ef204: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3ef204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ef208:
    // 0x3ef208: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_3ef20c:
    if (ctx->pc == 0x3EF20Cu) {
        ctx->pc = 0x3EF20Cu;
            // 0x3ef20c: 0xc6200de4  lwc1        $f0, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3EF210u;
        goto label_3ef210;
    }
    ctx->pc = 0x3EF208u;
    {
        const bool branch_taken_0x3ef208 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef208) {
            ctx->pc = 0x3EF20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF208u;
            // 0x3ef20c: 0xc6200de4  lwc1        $f0, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF218u;
            goto label_3ef218;
        }
    }
    ctx->pc = 0x3EF210u;
label_3ef210:
    // 0x3ef210: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ef210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ef214:
    // 0x3ef214: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x3ef214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ef218:
    // 0x3ef218: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ef218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ef21c:
    // 0x3ef21c: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
label_3ef220:
    if (ctx->pc == 0x3EF220u) {
        ctx->pc = 0x3EF220u;
            // 0x3ef220: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->pc = 0x3EF224u;
        goto label_3ef224;
    }
    ctx->pc = 0x3EF21Cu;
    {
        const bool branch_taken_0x3ef21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ef21c) {
            ctx->pc = 0x3EF220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF21Cu;
            // 0x3ef220: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF2B8u;
            goto label_3ef2b8;
        }
    }
    ctx->pc = 0x3EF224u;
label_3ef224:
    // 0x3ef224: 0x8e220d6c  lw          $v0, 0xD6C($s1)
    ctx->pc = 0x3ef224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3ef228:
    // 0x3ef228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ef228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ef22c:
    // 0x3ef22c: 0x8204010c  lb          $a0, 0x10C($s0)
    ctx->pc = 0x3ef22cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3ef230:
    // 0x3ef230: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ef230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ef234:
    // 0x3ef234: 0x8e260d60  lw          $a2, 0xD60($s1)
    ctx->pc = 0x3ef234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_3ef238:
    // 0x3ef238: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3ef238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ef23c:
    // 0x3ef23c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x3ef23cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3ef240:
    // 0x3ef240: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ef240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ef244:
    // 0x3ef244: 0x80c60004  lb          $a2, 0x4($a2)
    ctx->pc = 0x3ef244u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_3ef248:
    // 0x3ef248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ef248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef24c:
    // 0x3ef24c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3ef24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3ef250:
    // 0x3ef250: 0x90e80008  lbu         $t0, 0x8($a3)
    ctx->pc = 0x3ef250u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_3ef254:
    // 0x3ef254: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3ef254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ef258:
    // 0x3ef258: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3ef258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3ef25c:
    // 0x3ef25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ef260:
    // 0x3ef260: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ef260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ef264:
    // 0x3ef264: 0xc0182a  slt         $v1, $a2, $zero
    ctx->pc = 0x3ef264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_3ef268:
    // 0x3ef268: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3ef268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ef26c:
    // 0x3ef26c: 0x39060001  xori        $a2, $t0, 0x1
    ctx->pc = 0x3ef26cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_3ef270:
    // 0x3ef270: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3ef270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3ef274:
    // 0x3ef274: 0x2cc20001  sltiu       $v0, $a2, 0x1
    ctx->pc = 0x3ef274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3ef278:
    // 0x3ef278: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3ef278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3ef27c:
    // 0x3ef27c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x3ef27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_3ef280:
    // 0x3ef280: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3ef280u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3ef284:
    // 0x3ef284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ef284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ef288:
    // 0x3ef288: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3ef288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3ef28c:
    // 0x3ef28c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3ef28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3ef290:
    // 0x3ef290: 0x80460038  lb          $a2, 0x38($v0)
    ctx->pc = 0x3ef290u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_3ef294:
    // 0x3ef294: 0x320f809  jalr        $t9
label_3ef298:
    if (ctx->pc == 0x3EF298u) {
        ctx->pc = 0x3EF298u;
            // 0x3ef298: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3EF29Cu;
        goto label_3ef29c;
    }
    ctx->pc = 0x3EF294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF29Cu);
        ctx->pc = 0x3EF298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF294u;
            // 0x3ef298: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF29Cu; }
            if (ctx->pc != 0x3EF29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3EF29Cu;
label_3ef29c:
    // 0x3ef29c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3ef29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3ef2a0:
    // 0x3ef2a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ef2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ef2a4:
    // 0x3ef2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ef2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef2a8:
    // 0x3ef2a8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3ef2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3ef2ac:
    // 0x3ef2ac: 0x320f809  jalr        $t9
label_3ef2b0:
    if (ctx->pc == 0x3EF2B0u) {
        ctx->pc = 0x3EF2B0u;
            // 0x3ef2b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF2B4u;
        goto label_3ef2b4;
    }
    ctx->pc = 0x3EF2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF2B4u);
        ctx->pc = 0x3EF2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF2ACu;
            // 0x3ef2b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF2B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF2B4u; }
            if (ctx->pc != 0x3EF2B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF2B4u;
label_3ef2b4:
    // 0x3ef2b4: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x3ef2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_3ef2b8:
    // 0x3ef2b8: 0xc142be8  jal         func_50AFA0
label_3ef2bc:
    if (ctx->pc == 0x3EF2BCu) {
        ctx->pc = 0x3EF2C0u;
        goto label_3ef2c0;
    }
    ctx->pc = 0x3EF2B8u;
    SET_GPR_U32(ctx, 31, 0x3EF2C0u);
    ctx->pc = 0x50AFA0u;
    if (runtime->hasFunction(0x50AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x50AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF2C0u; }
        if (ctx->pc != 0x3EF2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050AFA0_0x50afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF2C0u; }
        if (ctx->pc != 0x3EF2C0u) { return; }
    }
    ctx->pc = 0x3EF2C0u;
label_3ef2c0:
    // 0x3ef2c0: 0xc0c0f84  jal         func_303E10
label_3ef2c4:
    if (ctx->pc == 0x3EF2C4u) {
        ctx->pc = 0x3EF2C4u;
            // 0x3ef2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF2C8u;
        goto label_3ef2c8;
    }
    ctx->pc = 0x3EF2C0u;
    SET_GPR_U32(ctx, 31, 0x3EF2C8u);
    ctx->pc = 0x3EF2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF2C0u;
            // 0x3ef2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF2C8u; }
        if (ctx->pc != 0x3EF2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF2C8u; }
        if (ctx->pc != 0x3EF2C8u) { return; }
    }
    ctx->pc = 0x3EF2C8u;
label_3ef2c8:
    // 0x3ef2c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ef2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef2cc:
    // 0x3ef2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ef2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef2d0:
    // 0x3ef2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef2d4:
    // 0x3ef2d4: 0x3e00008  jr          $ra
label_3ef2d8:
    if (ctx->pc == 0x3EF2D8u) {
        ctx->pc = 0x3EF2D8u;
            // 0x3ef2d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3EF2DCu;
        goto label_3ef2dc;
    }
    ctx->pc = 0x3EF2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF2D4u;
            // 0x3ef2d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EF2DCu;
label_3ef2dc:
    // 0x3ef2dc: 0x0  nop
    ctx->pc = 0x3ef2dcu;
    // NOP
label_3ef2e0:
    // 0x3ef2e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ef2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ef2e4:
    // 0x3ef2e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ef2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ef2e8:
    // 0x3ef2e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ef2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ef2ec:
    // 0x3ef2ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ef2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ef2f0:
    // 0x3ef2f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ef2f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef2f4:
    // 0x3ef2f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ef2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ef2f8:
    // 0x3ef2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ef2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ef2fc:
    // 0x3ef2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ef300:
    // 0x3ef300: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3ef300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3ef304:
    // 0x3ef304: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3ef308:
    if (ctx->pc == 0x3EF308u) {
        ctx->pc = 0x3EF308u;
            // 0x3ef308: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF30Cu;
        goto label_3ef30c;
    }
    ctx->pc = 0x3EF304u;
    {
        const bool branch_taken_0x3ef304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF304u;
            // 0x3ef308: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef304) {
            ctx->pc = 0x3EF348u;
            goto label_3ef348;
        }
    }
    ctx->pc = 0x3EF30Cu;
label_3ef30c:
    // 0x3ef30c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ef30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef310:
    // 0x3ef310: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ef310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef314:
    // 0x3ef314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ef314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef318:
    // 0x3ef318: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3ef318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3ef31c:
    // 0x3ef31c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3ef31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3ef320:
    // 0x3ef320: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ef320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ef324:
    // 0x3ef324: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ef324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ef328:
    // 0x3ef328: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ef328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ef32c:
    // 0x3ef32c: 0x320f809  jalr        $t9
label_3ef330:
    if (ctx->pc == 0x3EF330u) {
        ctx->pc = 0x3EF334u;
        goto label_3ef334;
    }
    ctx->pc = 0x3EF32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF334u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EF334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EF334u; }
            if (ctx->pc != 0x3EF334u) { return; }
        }
        }
    }
    ctx->pc = 0x3EF334u;
label_3ef334:
    // 0x3ef334: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3ef334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3ef338:
    // 0x3ef338: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ef338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ef33c:
    // 0x3ef33c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3ef33cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3ef340:
    // 0x3ef340: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3ef344:
    if (ctx->pc == 0x3EF344u) {
        ctx->pc = 0x3EF344u;
            // 0x3ef344: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3EF348u;
        goto label_3ef348;
    }
    ctx->pc = 0x3EF340u;
    {
        const bool branch_taken_0x3ef340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF340u;
            // 0x3ef344: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef340) {
            ctx->pc = 0x3EF318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ef318;
        }
    }
    ctx->pc = 0x3EF348u;
label_3ef348:
    // 0x3ef348: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3ef348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef34c:
    // 0x3ef34c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ef34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3ef350:
    // 0x3ef350: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ef350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ef354:
    // 0x3ef354: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ef354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ef358:
    // 0x3ef358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ef358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef35c:
    // 0x3ef35c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ef35cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef360:
    // 0x3ef360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef364:
    // 0x3ef364: 0x3e00008  jr          $ra
label_3ef368:
    if (ctx->pc == 0x3EF368u) {
        ctx->pc = 0x3EF368u;
            // 0x3ef368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3EF36Cu;
        goto label_3ef36c;
    }
    ctx->pc = 0x3EF364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF364u;
            // 0x3ef368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EF36Cu;
label_3ef36c:
    // 0x3ef36c: 0x0  nop
    ctx->pc = 0x3ef36cu;
    // NOP
label_3ef370:
    // 0x3ef370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ef370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ef374:
    // 0x3ef374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ef374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ef378:
    // 0x3ef378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ef378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ef37c:
    // 0x3ef37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ef380:
    // 0x3ef380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ef380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef384:
    // 0x3ef384: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_3ef388:
    if (ctx->pc == 0x3EF388u) {
        ctx->pc = 0x3EF388u;
            // 0x3ef388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF38Cu;
        goto label_3ef38c;
    }
    ctx->pc = 0x3EF384u;
    {
        const bool branch_taken_0x3ef384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF384u;
            // 0x3ef388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef384) {
            ctx->pc = 0x3EF424u;
            goto label_3ef424;
        }
    }
    ctx->pc = 0x3EF38Cu;
label_3ef38c:
    // 0x3ef38c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ef38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ef390:
    // 0x3ef390: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ef390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ef394:
    // 0x3ef394: 0x24639ef0  addiu       $v1, $v1, -0x6110
    ctx->pc = 0x3ef394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942448));
label_3ef398:
    // 0x3ef398: 0x24429f28  addiu       $v0, $v0, -0x60D8
    ctx->pc = 0x3ef398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942504));
label_3ef39c:
    // 0x3ef39c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ef39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3ef3a0:
    // 0x3ef3a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_3ef3a4:
    if (ctx->pc == 0x3EF3A4u) {
        ctx->pc = 0x3EF3A4u;
            // 0x3ef3a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3EF3A8u;
        goto label_3ef3a8;
    }
    ctx->pc = 0x3EF3A0u;
    {
        const bool branch_taken_0x3ef3a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF3A0u;
            // 0x3ef3a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3a0) {
            ctx->pc = 0x3EF40Cu;
            goto label_3ef40c;
        }
    }
    ctx->pc = 0x3EF3A8u;
label_3ef3a8:
    // 0x3ef3a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ef3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ef3ac:
    // 0x3ef3ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ef3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ef3b0:
    // 0x3ef3b0: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x3ef3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
label_3ef3b4:
    // 0x3ef3b4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3ef3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_3ef3b8:
    // 0x3ef3b8: 0x24429f88  addiu       $v0, $v0, -0x6078
    ctx->pc = 0x3ef3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942600));
label_3ef3bc:
    // 0x3ef3bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ef3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3ef3c0:
    // 0x3ef3c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3ef3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3ef3c4:
    // 0x3ef3c4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3ef3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3ef3c8:
    // 0x3ef3c8: 0xc0407c0  jal         func_101F00
label_3ef3cc:
    if (ctx->pc == 0x3EF3CCu) {
        ctx->pc = 0x3EF3CCu;
            // 0x3ef3cc: 0x24a5f580  addiu       $a1, $a1, -0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964608));
        ctx->pc = 0x3EF3D0u;
        goto label_3ef3d0;
    }
    ctx->pc = 0x3EF3C8u;
    SET_GPR_U32(ctx, 31, 0x3EF3D0u);
    ctx->pc = 0x3EF3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF3C8u;
            // 0x3ef3cc: 0x24a5f580  addiu       $a1, $a1, -0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF3D0u; }
        if (ctx->pc != 0x3EF3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF3D0u; }
        if (ctx->pc != 0x3EF3D0u) { return; }
    }
    ctx->pc = 0x3EF3D0u;
label_3ef3d0:
    // 0x3ef3d0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3ef3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3ef3d4:
    // 0x3ef3d4: 0xc0fbd44  jal         func_3EF510
label_3ef3d8:
    if (ctx->pc == 0x3EF3D8u) {
        ctx->pc = 0x3EF3D8u;
            // 0x3ef3d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3EF3DCu;
        goto label_3ef3dc;
    }
    ctx->pc = 0x3EF3D4u;
    SET_GPR_U32(ctx, 31, 0x3EF3DCu);
    ctx->pc = 0x3EF3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF3D4u;
            // 0x3ef3d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EF510u;
    if (runtime->hasFunction(0x3EF510u)) {
        auto targetFn = runtime->lookupFunction(0x3EF510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF3DCu; }
        if (ctx->pc != 0x3EF3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EF510_0x3ef510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF3DCu; }
        if (ctx->pc != 0x3EF3DCu) { return; }
    }
    ctx->pc = 0x3EF3DCu;
label_3ef3dc:
    // 0x3ef3dc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3ef3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_3ef3e0:
    // 0x3ef3e0: 0xc0fbd28  jal         func_3EF4A0
label_3ef3e4:
    if (ctx->pc == 0x3EF3E4u) {
        ctx->pc = 0x3EF3E4u;
            // 0x3ef3e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3EF3E8u;
        goto label_3ef3e8;
    }
    ctx->pc = 0x3EF3E0u;
    SET_GPR_U32(ctx, 31, 0x3EF3E8u);
    ctx->pc = 0x3EF3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF3E0u;
            // 0x3ef3e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EF4A0u;
    if (runtime->hasFunction(0x3EF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x3EF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF3E8u; }
        if (ctx->pc != 0x3EF3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EF4A0_0x3ef4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF3E8u; }
        if (ctx->pc != 0x3EF3E8u) { return; }
    }
    ctx->pc = 0x3EF3E8u;
label_3ef3e8:
    // 0x3ef3e8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3ef3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3ef3ec:
    // 0x3ef3ec: 0xc0fbd28  jal         func_3EF4A0
label_3ef3f0:
    if (ctx->pc == 0x3EF3F0u) {
        ctx->pc = 0x3EF3F0u;
            // 0x3ef3f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3EF3F4u;
        goto label_3ef3f4;
    }
    ctx->pc = 0x3EF3ECu;
    SET_GPR_U32(ctx, 31, 0x3EF3F4u);
    ctx->pc = 0x3EF3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF3ECu;
            // 0x3ef3f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EF4A0u;
    if (runtime->hasFunction(0x3EF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x3EF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF3F4u; }
        if (ctx->pc != 0x3EF3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EF4A0_0x3ef4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF3F4u; }
        if (ctx->pc != 0x3EF3F4u) { return; }
    }
    ctx->pc = 0x3EF3F4u;
label_3ef3f4:
    // 0x3ef3f4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3ef3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_3ef3f8:
    // 0x3ef3f8: 0xc0fbd10  jal         func_3EF440
label_3ef3fc:
    if (ctx->pc == 0x3EF3FCu) {
        ctx->pc = 0x3EF3FCu;
            // 0x3ef3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF400u;
        goto label_3ef400;
    }
    ctx->pc = 0x3EF3F8u;
    SET_GPR_U32(ctx, 31, 0x3EF400u);
    ctx->pc = 0x3EF3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF3F8u;
            // 0x3ef3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EF440u;
    if (runtime->hasFunction(0x3EF440u)) {
        auto targetFn = runtime->lookupFunction(0x3EF440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF400u; }
        if (ctx->pc != 0x3EF400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EF440_0x3ef440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF400u; }
        if (ctx->pc != 0x3EF400u) { return; }
    }
    ctx->pc = 0x3EF400u;
label_3ef400:
    // 0x3ef400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ef400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef404:
    // 0x3ef404: 0xc0ae1c0  jal         func_2B8700
label_3ef408:
    if (ctx->pc == 0x3EF408u) {
        ctx->pc = 0x3EF408u;
            // 0x3ef408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF40Cu;
        goto label_3ef40c;
    }
    ctx->pc = 0x3EF404u;
    SET_GPR_U32(ctx, 31, 0x3EF40Cu);
    ctx->pc = 0x3EF408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF404u;
            // 0x3ef408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF40Cu; }
        if (ctx->pc != 0x3EF40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF40Cu; }
        if (ctx->pc != 0x3EF40Cu) { return; }
    }
    ctx->pc = 0x3EF40Cu;
label_3ef40c:
    // 0x3ef40c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3ef40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3ef410:
    // 0x3ef410: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ef410u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ef414:
    // 0x3ef414: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ef418:
    if (ctx->pc == 0x3EF418u) {
        ctx->pc = 0x3EF418u;
            // 0x3ef418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF41Cu;
        goto label_3ef41c;
    }
    ctx->pc = 0x3EF414u;
    {
        const bool branch_taken_0x3ef414 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ef414) {
            ctx->pc = 0x3EF418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF414u;
            // 0x3ef418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EF428u;
            goto label_3ef428;
        }
    }
    ctx->pc = 0x3EF41Cu;
label_3ef41c:
    // 0x3ef41c: 0xc0400a8  jal         func_1002A0
label_3ef420:
    if (ctx->pc == 0x3EF420u) {
        ctx->pc = 0x3EF420u;
            // 0x3ef420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EF424u;
        goto label_3ef424;
    }
    ctx->pc = 0x3EF41Cu;
    SET_GPR_U32(ctx, 31, 0x3EF424u);
    ctx->pc = 0x3EF420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF41Cu;
            // 0x3ef420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF424u; }
        if (ctx->pc != 0x3EF424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EF424u; }
        if (ctx->pc != 0x3EF424u) { return; }
    }
    ctx->pc = 0x3EF424u;
label_3ef424:
    // 0x3ef424: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ef424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef428:
    // 0x3ef428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ef428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef42c:
    // 0x3ef42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ef42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef430:
    // 0x3ef430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef434:
    // 0x3ef434: 0x3e00008  jr          $ra
label_3ef438:
    if (ctx->pc == 0x3EF438u) {
        ctx->pc = 0x3EF438u;
            // 0x3ef438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3EF43Cu;
        goto label_3ef43c;
    }
    ctx->pc = 0x3EF434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EF434u;
            // 0x3ef438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EF43Cu;
label_3ef43c:
    // 0x3ef43c: 0x0  nop
    ctx->pc = 0x3ef43cu;
    // NOP
}
